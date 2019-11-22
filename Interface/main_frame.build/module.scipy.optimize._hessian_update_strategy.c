/* Generated code for Python module 'scipy.optimize._hessian_update_strategy'
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

/* The "_module_scipy$optimize$_hessian_update_strategy" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_hessian_update_strategy;
PyDictObject *moduledict_scipy$optimize$_hessian_update_strategy;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_47b0a8344d849668700b115cb796b900;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_tuple_str_plain_self_str_plain_init_scale_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_str_plain_symv_tuple;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_initialize;
extern PyObject *const_str_plain_UserWarning;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_plain_y_norm2;
extern PyObject *const_float_minus_1_0;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_syr_tuple;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_scale;
static PyObject *const_str_digest_6744e7ab608a20909db81e8f46148569;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_delta_x;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_7ad281ba74f5328ab8db688377c681b5;
extern PyObject *const_str_plain_hess;
static PyObject *const_str_digest_9cdd4460b2a364f8986cb357e5c13c07;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_H;
static PyObject *const_str_plain_delta_grad;
static PyObject *const_str_plain_damp_update;
static PyObject *const_str_digest_87738ae4bda25f37a6b3ca02d8ce6bc5;
extern PyObject *const_tuple_str_plain_auto_tuple;
extern PyObject *const_str_plain_auto;
static PyObject *const_str_digest_d803e007dbd3db4a0068dddebbe9160e;
static PyObject *const_str_plain_Mw;
static PyObject *const_str_digest_f5acafb4eebd4ef19d71dcaddbea1cc6;
static PyObject *const_str_plain__syr2;
static PyObject *const_tuple_f6b08d4515f2a5f0a45e5390402e8533_tuple;
static PyObject *const_str_plain_wMw;
static PyObject *const_str_plain_li;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_syr2;
static PyObject *const_str_plain__symv;
static PyObject *const_str_plain_s_norm2;
extern PyObject *const_str_plain_ys;
static PyObject *const_str_plain__update_implementation;
static PyObject *const_str_digest_69522f07814653292a1041dc198a36dc;
static PyObject *const_str_digest_27426c786e1ae2e4f6543ebd4620aec3;
extern PyObject *const_str_plain_s;
static PyObject *const_str_digest_50624a0b51cdcb6ff8e0625ced2522ff;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_sBs;
extern PyObject *const_str_plain_SR1;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_str_plain_skip_update_none_str_plain_auto_tuple;
static PyObject *const_str_plain__update_hessian;
static PyObject *const_tuple_float_1eminus_08_str_plain_auto_tuple;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_b1f0b2f9f714405fb224385ef005e24b;
extern PyObject *const_str_plain_w;
extern PyObject *const_float_1_0;
static PyObject *const_str_digest_f6c4154b3ab841a1dd3b5298142921dd;
static PyObject *const_str_plain_z_minus_Mw;
static PyObject *const_tuple_4d7bd0463a8c2d955de22fe7ac1eb37b_tuple;
extern PyObject *const_str_plain_p;
static PyObject *const_str_digest_a0bbec1bff7a6b641b4d87c71a7d183d;
static PyObject *const_str_digest_afd224d62d28846289ada0d30c330dac;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_tuple_str_plain_HessianUpdateStrategy_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_float;
static PyObject *const_str_digest_83971ff275592f6e2bfac226119db962;
static PyObject *const_str_plain_exception_strategy;
extern PyObject *const_str_plain_all;
static PyObject *const_tuple_str_plain_self_str_plain_n_str_plain_approx_type_tuple;
static PyObject *const_str_digest_eafdce6537a6cf580bfeb39efc7e1333;
static PyObject *const_str_plain__update_inverse_hessian;
extern PyObject *const_float_1eminus_08;
static PyObject *const_tuple_str_plain_hess_str_plain_inv_hess_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
extern PyObject *const_str_plain_norm;
extern PyObject *const_dict_507c306503e38368c72b8019aeef4add;
static PyObject *const_list_str_plain_HessianUpdateStrategy_str_plain_BFGS_str_plain_SR1_list;
extern PyObject *const_tuple_str_plain_self_str_plain_p_tuple;
static PyObject *const_str_plain_FullHessianUpdateStrategy;
static PyObject *const_str_digest_26b41b3fd61151548ff0480d43ad628e;
static PyObject *const_tuple_1ddc9808b13908a20ab6357ea53266b7_tuple;
static PyObject *const_str_digest_993f199315e3e2676932bc25bea0dc41;
static PyObject *const_str_plain_yHy;
static PyObject *const_tuple_cf9fc3fdc86668292e43ca562a1ba04b_tuple;
static PyObject *const_str_digest_3bb0f59ede0375f0b60841a9cb1e3c57;
extern PyObject *const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202;
static PyObject *const_str_plain__auto_scale;
static PyObject *const_tuple_str_plain_syr2_tuple;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_tuple_263108bc7a093a659ca75f793cd5da33_tuple;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_d7c2bd5857529f6ec72cd0dee1f9114a;
static PyObject *const_str_plain_symv;
static PyObject *const_str_plain_Bs;
static PyObject *const_str_digest_9ddb88c90a82b919920c16c8354c1a3a;
static PyObject *const_str_digest_a6b012617c0dd5518fd38c71b0d13db3;
extern PyObject *const_int_0;
static PyObject *const_str_digest_2a4a5f50005b863a18929f51b9adfd9f;
static PyObject *const_str_digest_b6dd09722a5390c1da94950b3990a9b9;
static PyObject *const_dict_90459b2eb478f0f4e97f2ef94ee786fd;
static PyObject *const_str_plain_inv_hess;
extern PyObject *const_str_plain_eye;
static PyObject *const_tuple_str_plain_self_str_plain_M_str_plain_li_tuple;
static PyObject *const_str_digest_97fb11ea1f29f96e501bbcec59772d80;
extern PyObject *const_str_plain_B;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_f5de3205f4bf10e4c343c305caef27d1;
extern PyObject *const_float_0_2;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_e597b2769f985732232d1c3930938c95;
static PyObject *const_str_digest_57d395b60bc12682481510cf63c85fe3;
static PyObject *const_tuple_f4f2906289b984d0c2aba242fe0b1871_tuple;
static PyObject *const_str_digest_b40aa3f9c641584ace8ddcc44a921480;
static PyObject *const_str_plain_approx_type;
static PyObject *const_str_digest_9336a23074dd208dcf9b11f20753c229;
extern PyObject *const_str_plain_tril_indices_from;
static PyObject *const_tuple_483d35bdb6bf52cf2347442d9ce66d86_tuple;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_wz;
static PyObject *const_str_plain_min_curvature;
extern PyObject *const_tuple_str_plain_get_blas_funcs_tuple;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_3269af3e657e71c20691251212ba845d;
static PyObject *const_str_digest_39a6d693dc1672dc5a191e8fa705cb31;
extern PyObject *const_str_plain_denominator;
extern PyObject *const_str_plain_z;
static PyObject *const_tuple_02fbb11e61f5f3c8b074c1a2b46889b6_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_delta_x_str_plain_delta_grad_tuple;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_first_iteration;
extern PyObject *const_str_plain_y;
static PyObject *const_str_digest_9415e8176432601a48e68bd6fa2e7361;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain_get_matrix;
static PyObject *const_str_digest_dda4fd11e85371955ed414d2c7710559;
static PyObject *const_str_plain_skip_update;
static PyObject *const_str_digest_a58df2ba8b0333c2ad36473194d37f9f;
static PyObject *const_str_digest_b1b77d9c45dfa917470edf97cbc51046;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_plain_init_scale;
static PyObject *const_str_plain_update_factor;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_plain_Hy;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_str_plain_warn_tuple;
static PyObject *const_str_plain_syr;
extern PyObject *const_str_plain_T;
static PyObject *const_str_digest_5977a54e2f6c492d468f73ceae6431fe;
static PyObject *const_str_digest_b853393469c6f8504fe8729d39cf278e;
extern PyObject *const_tuple_str_plain_norm_tuple;
static PyObject *const_str_plain__syr;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_72682bea49e910a22e0d99c4d6b43dc0;
static PyObject *const_str_digest_0c5fd17240dd91355b35d5940a5d19ea;
extern PyObject *const_str_plain_HessianUpdateStrategy;
static PyObject *const_str_plain_min_denominator;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_get_blas_funcs;
extern PyObject *const_str_plain_BFGS;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_47b0a8344d849668700b115cb796b900 = UNSTREAM_STRING_ASCII( &constant_bin[ 4777378 ], 48, 0 );
    const_tuple_str_plain_self_str_plain_init_scale_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_init_scale_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_init_scale = UNSTREAM_STRING_ASCII( &constant_bin[ 4777426 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_init_scale_tuple, 1, const_str_plain_init_scale ); Py_INCREF( const_str_plain_init_scale );
    const_tuple_str_plain_symv_tuple = PyTuple_New( 1 );
    const_str_plain_symv = UNSTREAM_STRING_ASCII( &constant_bin[ 4570857 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_symv_tuple, 0, const_str_plain_symv ); Py_INCREF( const_str_plain_symv );
    const_str_plain_y_norm2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4777436 ], 7, 1 );
    const_tuple_str_plain_syr_tuple = PyTuple_New( 1 );
    const_str_plain_syr = UNSTREAM_STRING_ASCII( &constant_bin[ 896696 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_syr_tuple, 0, const_str_plain_syr ); Py_INCREF( const_str_plain_syr );
    const_str_digest_6744e7ab608a20909db81e8f46148569 = UNSTREAM_STRING_ASCII( &constant_bin[ 4777443 ], 199, 0 );
    const_str_digest_7ad281ba74f5328ab8db688377c681b5 = UNSTREAM_STRING_ASCII( &constant_bin[ 4777642 ], 13, 0 );
    const_str_digest_9cdd4460b2a364f8986cb357e5c13c07 = UNSTREAM_STRING_ASCII( &constant_bin[ 4777655 ], 60, 0 );
    const_str_plain_delta_grad = UNSTREAM_STRING_ASCII( &constant_bin[ 4777443 ], 10, 1 );
    const_str_plain_damp_update = UNSTREAM_STRING_ASCII( &constant_bin[ 4777702 ], 11, 1 );
    const_str_digest_87738ae4bda25f37a6b3ca02d8ce6bc5 = UNSTREAM_STRING_ASCII( &constant_bin[ 4777715 ], 246, 0 );
    const_str_digest_d803e007dbd3db4a0068dddebbe9160e = UNSTREAM_STRING_ASCII( &constant_bin[ 4777961 ], 337, 0 );
    const_str_plain_Mw = UNSTREAM_STRING_ASCII( &constant_bin[ 4778298 ], 2, 1 );
    const_str_digest_f5acafb4eebd4ef19d71dcaddbea1cc6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4778300 ], 36, 0 );
    const_str_plain__syr2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4778336 ], 5, 1 );
    const_tuple_f6b08d4515f2a5f0a45e5390402e8533_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_f6b08d4515f2a5f0a45e5390402e8533_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f6b08d4515f2a5f0a45e5390402e8533_tuple, 1, const_str_plain_delta_x ); Py_INCREF( const_str_plain_delta_x );
    PyTuple_SET_ITEM( const_tuple_f6b08d4515f2a5f0a45e5390402e8533_tuple, 2, const_str_plain_delta_grad ); Py_INCREF( const_str_plain_delta_grad );
    PyTuple_SET_ITEM( const_tuple_f6b08d4515f2a5f0a45e5390402e8533_tuple, 3, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_f6b08d4515f2a5f0a45e5390402e8533_tuple, 4, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    const_str_plain_wz = UNSTREAM_STRING_ASCII( &constant_bin[ 58812 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_f6b08d4515f2a5f0a45e5390402e8533_tuple, 5, const_str_plain_wz ); Py_INCREF( const_str_plain_wz );
    PyTuple_SET_ITEM( const_tuple_f6b08d4515f2a5f0a45e5390402e8533_tuple, 6, const_str_plain_Mw ); Py_INCREF( const_str_plain_Mw );
    const_str_plain_wMw = UNSTREAM_STRING_ASCII( &constant_bin[ 4778341 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_f6b08d4515f2a5f0a45e5390402e8533_tuple, 7, const_str_plain_wMw ); Py_INCREF( const_str_plain_wMw );
    PyTuple_SET_ITEM( const_tuple_f6b08d4515f2a5f0a45e5390402e8533_tuple, 8, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    const_str_plain_update_factor = UNSTREAM_STRING_ASCII( &constant_bin[ 4778344 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_f6b08d4515f2a5f0a45e5390402e8533_tuple, 9, const_str_plain_update_factor ); Py_INCREF( const_str_plain_update_factor );
    const_str_plain_li = UNSTREAM_STRING_ASCII( &constant_bin[ 146 ], 2, 1 );
    const_str_plain_syr2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4570874 ], 4, 1 );
    const_str_plain__symv = UNSTREAM_STRING_ASCII( &constant_bin[ 4778357 ], 5, 1 );
    const_str_plain_s_norm2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4778362 ], 7, 1 );
    const_str_plain__update_implementation = UNSTREAM_STRING_ASCII( &constant_bin[ 4778369 ], 22, 1 );
    const_str_digest_69522f07814653292a1041dc198a36dc = UNSTREAM_STRING_ASCII( &constant_bin[ 4778391 ], 48, 0 );
    const_str_digest_27426c786e1ae2e4f6543ebd4620aec3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4778439 ], 1490, 0 );
    const_str_digest_50624a0b51cdcb6ff8e0625ced2522ff = UNSTREAM_STRING_ASCII( &constant_bin[ 4779929 ], 57, 0 );
    const_str_plain_sBs = UNSTREAM_STRING_ASCII( &constant_bin[ 4779986 ], 3, 1 );
    const_tuple_str_plain_skip_update_none_str_plain_auto_tuple = PyTuple_New( 3 );
    const_str_plain_skip_update = UNSTREAM_STRING_ASCII( &constant_bin[ 4777685 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_skip_update_none_str_plain_auto_tuple, 0, const_str_plain_skip_update ); Py_INCREF( const_str_plain_skip_update );
    PyTuple_SET_ITEM( const_tuple_str_plain_skip_update_none_str_plain_auto_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_str_plain_skip_update_none_str_plain_auto_tuple, 2, const_str_plain_auto ); Py_INCREF( const_str_plain_auto );
    const_str_plain__update_hessian = UNSTREAM_STRING_ASCII( &constant_bin[ 4779989 ], 15, 1 );
    const_tuple_float_1eminus_08_str_plain_auto_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_float_1eminus_08_str_plain_auto_tuple, 0, const_float_1eminus_08 ); Py_INCREF( const_float_1eminus_08 );
    PyTuple_SET_ITEM( const_tuple_float_1eminus_08_str_plain_auto_tuple, 1, const_str_plain_auto ); Py_INCREF( const_str_plain_auto );
    const_str_digest_b1f0b2f9f714405fb224385ef005e24b = UNSTREAM_STRING_ASCII( &constant_bin[ 4780004 ], 463, 0 );
    const_str_digest_f6c4154b3ab841a1dd3b5298142921dd = UNSTREAM_STRING_ASCII( &constant_bin[ 4780467 ], 29, 0 );
    const_str_plain_z_minus_Mw = UNSTREAM_STRING_ASCII( &constant_bin[ 4780496 ], 10, 1 );
    const_tuple_4d7bd0463a8c2d955de22fe7ac1eb37b_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_4d7bd0463a8c2d955de22fe7ac1eb37b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4d7bd0463a8c2d955de22fe7ac1eb37b_tuple, 1, const_str_plain_delta_x ); Py_INCREF( const_str_plain_delta_x );
    PyTuple_SET_ITEM( const_tuple_4d7bd0463a8c2d955de22fe7ac1eb37b_tuple, 2, const_str_plain_delta_grad ); Py_INCREF( const_str_plain_delta_grad );
    PyTuple_SET_ITEM( const_tuple_4d7bd0463a8c2d955de22fe7ac1eb37b_tuple, 3, const_str_plain_s_norm2 ); Py_INCREF( const_str_plain_s_norm2 );
    PyTuple_SET_ITEM( const_tuple_4d7bd0463a8c2d955de22fe7ac1eb37b_tuple, 4, const_str_plain_y_norm2 ); Py_INCREF( const_str_plain_y_norm2 );
    PyTuple_SET_ITEM( const_tuple_4d7bd0463a8c2d955de22fe7ac1eb37b_tuple, 5, const_str_plain_ys ); Py_INCREF( const_str_plain_ys );
    const_str_digest_a0bbec1bff7a6b641b4d87c71a7d183d = UNSTREAM_STRING_ASCII( &constant_bin[ 4780506 ], 36, 0 );
    const_str_digest_afd224d62d28846289ada0d30c330dac = UNSTREAM_STRING_ASCII( &constant_bin[ 4780471 ], 25, 0 );
    const_tuple_str_plain_HessianUpdateStrategy_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HessianUpdateStrategy_tuple_type_object_tuple_tuple, 0, const_str_plain_HessianUpdateStrategy ); Py_INCREF( const_str_plain_HessianUpdateStrategy );
    PyTuple_SET_ITEM( const_tuple_str_plain_HessianUpdateStrategy_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_83971ff275592f6e2bfac226119db962 = UNSTREAM_STRING_ASCII( &constant_bin[ 4780542 ], 502, 0 );
    const_str_plain_exception_strategy = UNSTREAM_STRING_ASCII( &constant_bin[ 4777656 ], 18, 1 );
    const_tuple_str_plain_self_str_plain_n_str_plain_approx_type_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_approx_type_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_approx_type_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain_approx_type = UNSTREAM_STRING_ASCII( &constant_bin[ 4777915 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_approx_type_tuple, 2, const_str_plain_approx_type ); Py_INCREF( const_str_plain_approx_type );
    const_str_digest_eafdce6537a6cf580bfeb39efc7e1333 = UNSTREAM_STRING_ASCII( &constant_bin[ 4781044 ], 12, 0 );
    const_str_plain__update_inverse_hessian = UNSTREAM_STRING_ASCII( &constant_bin[ 4781056 ], 23, 1 );
    const_tuple_str_plain_hess_str_plain_inv_hess_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hess_str_plain_inv_hess_tuple, 0, const_str_plain_hess ); Py_INCREF( const_str_plain_hess );
    const_str_plain_inv_hess = UNSTREAM_STRING_ASCII( &constant_bin[ 4780245 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hess_str_plain_inv_hess_tuple, 1, const_str_plain_inv_hess ); Py_INCREF( const_str_plain_inv_hess );
    const_list_str_plain_HessianUpdateStrategy_str_plain_BFGS_str_plain_SR1_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_HessianUpdateStrategy_str_plain_BFGS_str_plain_SR1_list, 0, const_str_plain_HessianUpdateStrategy ); Py_INCREF( const_str_plain_HessianUpdateStrategy );
    PyList_SET_ITEM( const_list_str_plain_HessianUpdateStrategy_str_plain_BFGS_str_plain_SR1_list, 1, const_str_plain_BFGS ); Py_INCREF( const_str_plain_BFGS );
    PyList_SET_ITEM( const_list_str_plain_HessianUpdateStrategy_str_plain_BFGS_str_plain_SR1_list, 2, const_str_plain_SR1 ); Py_INCREF( const_str_plain_SR1 );
    const_str_plain_FullHessianUpdateStrategy = UNSTREAM_STRING_ASCII( &constant_bin[ 4778300 ], 25, 1 );
    const_str_digest_26b41b3fd61151548ff0480d43ad628e = UNSTREAM_STRING_ASCII( &constant_bin[ 4781079 ], 532, 0 );
    const_tuple_1ddc9808b13908a20ab6357ea53266b7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_1ddc9808b13908a20ab6357ea53266b7_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_1ddc9808b13908a20ab6357ea53266b7_tuple, 1, const_str_plain_exception_strategy ); Py_INCREF( const_str_plain_exception_strategy );
    const_str_plain_min_curvature = UNSTREAM_STRING_ASCII( &constant_bin[ 4778936 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_1ddc9808b13908a20ab6357ea53266b7_tuple, 2, const_str_plain_min_curvature ); Py_INCREF( const_str_plain_min_curvature );
    PyTuple_SET_ITEM( const_tuple_1ddc9808b13908a20ab6357ea53266b7_tuple, 3, const_str_plain_init_scale ); Py_INCREF( const_str_plain_init_scale );
    PyTuple_SET_ITEM( const_tuple_1ddc9808b13908a20ab6357ea53266b7_tuple, 4, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_993f199315e3e2676932bc25bea0dc41 = UNSTREAM_STRING_ASCII( &constant_bin[ 4781611 ], 20, 0 );
    const_str_plain_yHy = UNSTREAM_STRING_ASCII( &constant_bin[ 4781631 ], 3, 1 );
    const_tuple_cf9fc3fdc86668292e43ca562a1ba04b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_cf9fc3fdc86668292e43ca562a1ba04b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_cf9fc3fdc86668292e43ca562a1ba04b_tuple, 1, const_str_plain_ys ); Py_INCREF( const_str_plain_ys );
    const_str_plain_Bs = UNSTREAM_STRING_ASCII( &constant_bin[ 93080 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_cf9fc3fdc86668292e43ca562a1ba04b_tuple, 2, const_str_plain_Bs ); Py_INCREF( const_str_plain_Bs );
    PyTuple_SET_ITEM( const_tuple_cf9fc3fdc86668292e43ca562a1ba04b_tuple, 3, const_str_plain_sBs ); Py_INCREF( const_str_plain_sBs );
    PyTuple_SET_ITEM( const_tuple_cf9fc3fdc86668292e43ca562a1ba04b_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_str_digest_3bb0f59ede0375f0b60841a9cb1e3c57 = UNSTREAM_STRING_ASCII( &constant_bin[ 4781634 ], 62, 0 );
    const_str_plain__auto_scale = UNSTREAM_STRING_ASCII( &constant_bin[ 4781696 ], 11, 1 );
    const_tuple_str_plain_syr2_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_syr2_tuple, 0, const_str_plain_syr2 ); Py_INCREF( const_str_plain_syr2 );
    const_tuple_263108bc7a093a659ca75f793cd5da33_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_263108bc7a093a659ca75f793cd5da33_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_263108bc7a093a659ca75f793cd5da33_tuple, 1, const_str_plain_ys ); Py_INCREF( const_str_plain_ys );
    const_str_plain_Hy = UNSTREAM_STRING_ASCII( &constant_bin[ 109402 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_263108bc7a093a659ca75f793cd5da33_tuple, 2, const_str_plain_Hy ); Py_INCREF( const_str_plain_Hy );
    PyTuple_SET_ITEM( const_tuple_263108bc7a093a659ca75f793cd5da33_tuple, 3, const_str_plain_yHy ); Py_INCREF( const_str_plain_yHy );
    PyTuple_SET_ITEM( const_tuple_263108bc7a093a659ca75f793cd5da33_tuple, 4, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_digest_d7c2bd5857529f6ec72cd0dee1f9114a = UNSTREAM_STRING_ASCII( &constant_bin[ 4781707 ], 34, 0 );
    const_str_digest_9ddb88c90a82b919920c16c8354c1a3a = UNSTREAM_STRING_ASCII( &constant_bin[ 4781741 ], 42, 0 );
    const_str_digest_a6b012617c0dd5518fd38c71b0d13db3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4781783 ], 28, 0 );
    const_str_digest_2a4a5f50005b863a18929f51b9adfd9f = UNSTREAM_STRING_ASCII( &constant_bin[ 4781811 ], 239, 0 );
    const_str_digest_b6dd09722a5390c1da94950b3990a9b9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4780510 ], 32, 0 );
    const_dict_90459b2eb478f0f4e97f2ef94ee786fd = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_90459b2eb478f0f4e97f2ef94ee786fd, const_str_plain_k, const_int_neg_1 );
    assert( PyDict_Size( const_dict_90459b2eb478f0f4e97f2ef94ee786fd ) == 1 );
    const_tuple_str_plain_self_str_plain_M_str_plain_li_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_M_str_plain_li_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_M_str_plain_li_tuple, 1, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_M_str_plain_li_tuple, 2, const_str_plain_li ); Py_INCREF( const_str_plain_li );
    const_str_digest_97fb11ea1f29f96e501bbcec59772d80 = UNSTREAM_STRING_ASCII( &constant_bin[ 4782050 ], 48, 0 );
    const_str_digest_f5de3205f4bf10e4c343c305caef27d1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4782098 ], 975, 0 );
    const_str_digest_e597b2769f985732232d1c3930938c95 = UNSTREAM_STRING_ASCII( &constant_bin[ 4783073 ], 61, 0 );
    const_str_digest_57d395b60bc12682481510cf63c85fe3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4777386 ], 39, 0 );
    const_tuple_f4f2906289b984d0c2aba242fe0b1871_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_f4f2906289b984d0c2aba242fe0b1871_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f4f2906289b984d0c2aba242fe0b1871_tuple, 1, const_str_plain_delta_x ); Py_INCREF( const_str_plain_delta_x );
    PyTuple_SET_ITEM( const_tuple_f4f2906289b984d0c2aba242fe0b1871_tuple, 2, const_str_plain_delta_grad ); Py_INCREF( const_str_plain_delta_grad );
    PyTuple_SET_ITEM( const_tuple_f4f2906289b984d0c2aba242fe0b1871_tuple, 3, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_f4f2906289b984d0c2aba242fe0b1871_tuple, 4, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_f4f2906289b984d0c2aba242fe0b1871_tuple, 5, const_str_plain_Mw ); Py_INCREF( const_str_plain_Mw );
    PyTuple_SET_ITEM( const_tuple_f4f2906289b984d0c2aba242fe0b1871_tuple, 6, const_str_plain_z_minus_Mw ); Py_INCREF( const_str_plain_z_minus_Mw );
    PyTuple_SET_ITEM( const_tuple_f4f2906289b984d0c2aba242fe0b1871_tuple, 7, const_str_plain_denominator ); Py_INCREF( const_str_plain_denominator );
    const_str_digest_b40aa3f9c641584ace8ddcc44a921480 = UNSTREAM_STRING_ASCII( &constant_bin[ 4783134 ], 1117, 0 );
    const_str_digest_9336a23074dd208dcf9b11f20753c229 = UNSTREAM_STRING_ASCII( &constant_bin[ 4784251 ], 37, 0 );
    const_tuple_483d35bdb6bf52cf2347442d9ce66d86_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_483d35bdb6bf52cf2347442d9ce66d86_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_min_denominator = UNSTREAM_STRING_ASCII( &constant_bin[ 4782175 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_483d35bdb6bf52cf2347442d9ce66d86_tuple, 1, const_str_plain_min_denominator ); Py_INCREF( const_str_plain_min_denominator );
    PyTuple_SET_ITEM( const_tuple_483d35bdb6bf52cf2347442d9ce66d86_tuple, 2, const_str_plain_init_scale ); Py_INCREF( const_str_plain_init_scale );
    PyTuple_SET_ITEM( const_tuple_483d35bdb6bf52cf2347442d9ce66d86_tuple, 3, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_3269af3e657e71c20691251212ba845d = UNSTREAM_STRING_ASCII( &constant_bin[ 4784288 ], 26, 0 );
    const_str_digest_39a6d693dc1672dc5a191e8fa705cb31 = UNSTREAM_STRING_ASCII( &constant_bin[ 4784314 ], 64, 0 );
    const_tuple_02fbb11e61f5f3c8b074c1a2b46889b6_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_02fbb11e61f5f3c8b074c1a2b46889b6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_02fbb11e61f5f3c8b074c1a2b46889b6_tuple, 1, const_str_plain_delta_x ); Py_INCREF( const_str_plain_delta_x );
    PyTuple_SET_ITEM( const_tuple_02fbb11e61f5f3c8b074c1a2b46889b6_tuple, 2, const_str_plain_delta_grad ); Py_INCREF( const_str_plain_delta_grad );
    PyTuple_SET_ITEM( const_tuple_02fbb11e61f5f3c8b074c1a2b46889b6_tuple, 3, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    const_tuple_str_plain_self_str_plain_delta_x_str_plain_delta_grad_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_delta_x_str_plain_delta_grad_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_delta_x_str_plain_delta_grad_tuple, 1, const_str_plain_delta_x ); Py_INCREF( const_str_plain_delta_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_delta_x_str_plain_delta_grad_tuple, 2, const_str_plain_delta_grad ); Py_INCREF( const_str_plain_delta_grad );
    const_str_plain_first_iteration = UNSTREAM_STRING_ASCII( &constant_bin[ 4784378 ], 15, 1 );
    const_str_digest_9415e8176432601a48e68bd6fa2e7361 = UNSTREAM_STRING_ASCII( &constant_bin[ 4784393 ], 75, 0 );
    const_str_digest_dda4fd11e85371955ed414d2c7710559 = UNSTREAM_STRING_ASCII( &constant_bin[ 4784468 ], 28, 0 );
    const_str_digest_a58df2ba8b0333c2ad36473194d37f9f = UNSTREAM_STRING_ASCII( &constant_bin[ 4784496 ], 27, 0 );
    const_str_digest_b1b77d9c45dfa917470edf97cbc51046 = UNSTREAM_STRING_ASCII( &constant_bin[ 4784523 ], 412, 0 );
    const_str_digest_5977a54e2f6c492d468f73ceae6431fe = UNSTREAM_STRING_ASCII( &constant_bin[ 4778304 ], 32, 0 );
    const_str_digest_b853393469c6f8504fe8729d39cf278e = UNSTREAM_STRING_ASCII( &constant_bin[ 4784935 ], 43, 0 );
    const_str_plain__syr = UNSTREAM_STRING_ASCII( &constant_bin[ 4778336 ], 4, 1 );
    const_str_digest_72682bea49e910a22e0d99c4d6b43dc0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4784978 ], 41, 0 );
    const_str_digest_0c5fd17240dd91355b35d5940a5d19ea = UNSTREAM_STRING_ASCII( &constant_bin[ 4785019 ], 32, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_hessian_update_strategy( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3f9d88f3019bbb725c305939c2a1fe6c;
static PyCodeObject *codeobj_f61669f28807e526913237cf0d824e98;
static PyCodeObject *codeobj_8378820c6864b8616fbd02517d9b5b46;
static PyCodeObject *codeobj_ded837b109d88737e60469d913edf368;
static PyCodeObject *codeobj_bad7fe7c49b44373ba05a83abc0c413b;
static PyCodeObject *codeobj_d74ccb6f951c08a7ff0c75da5f9741ae;
static PyCodeObject *codeobj_9ce19f2a31f58d2a17a075eaf6f4f161;
static PyCodeObject *codeobj_a2554bab9e9b0aafef25d7499a2a8294;
static PyCodeObject *codeobj_fb5b957eccf078628a2deea01f67ff72;
static PyCodeObject *codeobj_718eac9f037ff250c45dd462871fb9ff;
static PyCodeObject *codeobj_21c06f0f76c420e960eb747c21e3dd10;
static PyCodeObject *codeobj_3d90fe95015a56a3e97b19a62df4565c;
static PyCodeObject *codeobj_46221063751acdf28ab5461a5cc2c57d;
static PyCodeObject *codeobj_4d09c0bade67f8f09dc996c471884b0f;
static PyCodeObject *codeobj_3147e4d2950de3752b97a4fbf8039cd6;
static PyCodeObject *codeobj_d1301c1a9a3d96d5c9815a82107e6596;
static PyCodeObject *codeobj_c2cd18ffac9055c66e81399dad4128ac;
static PyCodeObject *codeobj_831be28507ba2384efb8312d658f82a9;
static PyCodeObject *codeobj_55e10ae77d335e33d69086555e79970b;
static PyCodeObject *codeobj_20a4139d4d380b9a1942eeaa7f2016b4;
static PyCodeObject *codeobj_f67f67ed228e577674de4257519cc114;
static PyCodeObject *codeobj_4ccde2da5fd508c9c17a5c2271a63e45;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_9ddb88c90a82b919920c16c8354c1a3a );
    codeobj_3f9d88f3019bbb725c305939c2a1fe6c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_47b0a8344d849668700b115cb796b900, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_f61669f28807e526913237cf0d824e98 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BFGS, 240, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_8378820c6864b8616fbd02517d9b5b46 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_FullHessianUpdateStrategy, 104, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_ded837b109d88737e60469d913edf368 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HessianUpdateStrategy, 12, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_bad7fe7c49b44373ba05a83abc0c413b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SR1, 378, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_d74ccb6f951c08a7ff0c75da5f9741ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 112, const_tuple_str_plain_self_str_plain_init_scale_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9ce19f2a31f58d2a17a075eaf6f4f161 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 275, const_tuple_1ddc9808b13908a20ab6357ea53266b7_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_a2554bab9e9b0aafef25d7499a2a8294 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 406, const_tuple_483d35bdb6bf52cf2347442d9ce66d86_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_fb5b957eccf078628a2deea01f67ff72 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__auto_scale, 147, const_tuple_4d7bd0463a8c2d955de22fe7ac1eb37b_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_718eac9f037ff250c45dd462871fb9ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_hessian, 314, const_tuple_cf9fc3fdc86668292e43ca562a1ba04b_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_21c06f0f76c420e960eb747c21e3dd10 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_implementation, 161, const_tuple_str_plain_self_str_plain_delta_x_str_plain_delta_grad_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3d90fe95015a56a3e97b19a62df4565c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_implementation, 332, const_tuple_f6b08d4515f2a5f0a45e5390402e8533_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_46221063751acdf28ab5461a5cc2c57d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_implementation, 410, const_tuple_f4f2906289b984d0c2aba242fe0b1871_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4d09c0bade67f8f09dc996c471884b0f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_inverse_hessian, 294, const_tuple_263108bc7a093a659ca75f793cd5da33_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3147e4d2950de3752b97a4fbf8039cd6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dot, 73, const_tuple_str_plain_self_str_plain_p_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d1301c1a9a3d96d5c9815a82107e6596 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dot, 203, const_tuple_str_plain_self_str_plain_p_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c2cd18ffac9055c66e81399dad4128ac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_matrix, 90, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_831be28507ba2384efb8312d658f82a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_matrix, 222, const_tuple_str_plain_self_str_plain_M_str_plain_li_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_55e10ae77d335e33d69086555e79970b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_initialize, 37, const_tuple_str_plain_self_str_plain_n_str_plain_approx_type_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_20a4139d4d380b9a1942eeaa7f2016b4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_initialize, 121, const_tuple_str_plain_self_str_plain_n_str_plain_approx_type_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f67f67ed228e577674de4257519cc114 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update, 55, const_tuple_str_plain_self_str_plain_delta_x_str_plain_delta_grad_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4ccde2da5fd508c9c17a5c2271a63e45 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update, 165, const_tuple_02fbb11e61f5f3c8b074c1a2b46889b6_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_10_dot(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_11_get_matrix(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_12___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_13__update_inverse_hessian(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_14__update_hessian(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_15__update_implementation(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_16___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_17__update_implementation(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_1_initialize(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_2_update(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_3_dot(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_4_get_matrix(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_5___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_6_initialize(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_7__auto_scale(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_8__update_implementation(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_9_update(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_1_initialize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_approx_type = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_55e10ae77d335e33d69086555e79970b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_55e10ae77d335e33d69086555e79970b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_55e10ae77d335e33d69086555e79970b, codeobj_55e10ae77d335e33d69086555e79970b, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_55e10ae77d335e33d69086555e79970b = cache_frame_55e10ae77d335e33d69086555e79970b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_55e10ae77d335e33d69086555e79970b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_55e10ae77d335e33d69086555e79970b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_e597b2769f985732232d1c3930938c95;
        frame_55e10ae77d335e33d69086555e79970b->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
        }

        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 52;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_55e10ae77d335e33d69086555e79970b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_55e10ae77d335e33d69086555e79970b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_55e10ae77d335e33d69086555e79970b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_55e10ae77d335e33d69086555e79970b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_55e10ae77d335e33d69086555e79970b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_55e10ae77d335e33d69086555e79970b,
        type_description_1,
        par_self,
        par_n,
        par_approx_type
    );


    // Release cached frame.
    if ( frame_55e10ae77d335e33d69086555e79970b == cache_frame_55e10ae77d335e33d69086555e79970b )
    {
        Py_DECREF( frame_55e10ae77d335e33d69086555e79970b );
    }
    cache_frame_55e10ae77d335e33d69086555e79970b = NULL;

    assertFrameObject( frame_55e10ae77d335e33d69086555e79970b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_1_initialize );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_approx_type );
    Py_DECREF( par_approx_type );
    par_approx_type = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_1_initialize );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_2_update( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_delta_x = python_pars[ 1 ];
    PyObject *par_delta_grad = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_f67f67ed228e577674de4257519cc114;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f67f67ed228e577674de4257519cc114 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f67f67ed228e577674de4257519cc114, codeobj_f67f67ed228e577674de4257519cc114, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f67f67ed228e577674de4257519cc114 = cache_frame_f67f67ed228e577674de4257519cc114;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f67f67ed228e577674de4257519cc114 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f67f67ed228e577674de4257519cc114 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_3bb0f59ede0375f0b60841a9cb1e3c57;
        frame_f67f67ed228e577674de4257519cc114->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
        }

        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 70;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f67f67ed228e577674de4257519cc114 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f67f67ed228e577674de4257519cc114 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f67f67ed228e577674de4257519cc114, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f67f67ed228e577674de4257519cc114->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f67f67ed228e577674de4257519cc114, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f67f67ed228e577674de4257519cc114,
        type_description_1,
        par_self,
        par_delta_x,
        par_delta_grad
    );


    // Release cached frame.
    if ( frame_f67f67ed228e577674de4257519cc114 == cache_frame_f67f67ed228e577674de4257519cc114 )
    {
        Py_DECREF( frame_f67f67ed228e577674de4257519cc114 );
    }
    cache_frame_f67f67ed228e577674de4257519cc114 = NULL;

    assertFrameObject( frame_f67f67ed228e577674de4257519cc114 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_2_update );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_delta_x );
    Py_DECREF( par_delta_x );
    par_delta_x = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_grad );
    Py_DECREF( par_delta_grad );
    par_delta_grad = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_2_update );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_3_dot( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_3147e4d2950de3752b97a4fbf8039cd6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3147e4d2950de3752b97a4fbf8039cd6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3147e4d2950de3752b97a4fbf8039cd6, codeobj_3147e4d2950de3752b97a4fbf8039cd6, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *) );
    frame_3147e4d2950de3752b97a4fbf8039cd6 = cache_frame_3147e4d2950de3752b97a4fbf8039cd6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3147e4d2950de3752b97a4fbf8039cd6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3147e4d2950de3752b97a4fbf8039cd6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_72682bea49e910a22e0d99c4d6b43dc0;
        frame_3147e4d2950de3752b97a4fbf8039cd6->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
        }

        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 87;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3147e4d2950de3752b97a4fbf8039cd6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3147e4d2950de3752b97a4fbf8039cd6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3147e4d2950de3752b97a4fbf8039cd6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3147e4d2950de3752b97a4fbf8039cd6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3147e4d2950de3752b97a4fbf8039cd6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3147e4d2950de3752b97a4fbf8039cd6,
        type_description_1,
        par_self,
        par_p
    );


    // Release cached frame.
    if ( frame_3147e4d2950de3752b97a4fbf8039cd6 == cache_frame_3147e4d2950de3752b97a4fbf8039cd6 )
    {
        Py_DECREF( frame_3147e4d2950de3752b97a4fbf8039cd6 );
    }
    cache_frame_3147e4d2950de3752b97a4fbf8039cd6 = NULL;

    assertFrameObject( frame_3147e4d2950de3752b97a4fbf8039cd6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_3_dot );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_3_dot );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_4_get_matrix( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c2cd18ffac9055c66e81399dad4128ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c2cd18ffac9055c66e81399dad4128ac = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c2cd18ffac9055c66e81399dad4128ac, codeobj_c2cd18ffac9055c66e81399dad4128ac, module_scipy$optimize$_hessian_update_strategy, sizeof(void *) );
    frame_c2cd18ffac9055c66e81399dad4128ac = cache_frame_c2cd18ffac9055c66e81399dad4128ac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c2cd18ffac9055c66e81399dad4128ac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c2cd18ffac9055c66e81399dad4128ac ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_97fb11ea1f29f96e501bbcec59772d80;
        frame_c2cd18ffac9055c66e81399dad4128ac->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
        }

        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 100;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2cd18ffac9055c66e81399dad4128ac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2cd18ffac9055c66e81399dad4128ac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c2cd18ffac9055c66e81399dad4128ac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c2cd18ffac9055c66e81399dad4128ac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c2cd18ffac9055c66e81399dad4128ac, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c2cd18ffac9055c66e81399dad4128ac,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c2cd18ffac9055c66e81399dad4128ac == cache_frame_c2cd18ffac9055c66e81399dad4128ac )
    {
        Py_DECREF( frame_c2cd18ffac9055c66e81399dad4128ac );
    }
    cache_frame_c2cd18ffac9055c66e81399dad4128ac = NULL;

    assertFrameObject( frame_c2cd18ffac9055c66e81399dad4128ac );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_4_get_matrix );
    return NULL;
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_4_get_matrix );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_init_scale = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_d74ccb6f951c08a7ff0c75da5f9741ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d74ccb6f951c08a7ff0c75da5f9741ae = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d74ccb6f951c08a7ff0c75da5f9741ae, codeobj_d74ccb6f951c08a7ff0c75da5f9741ae, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *) );
    frame_d74ccb6f951c08a7ff0c75da5f9741ae = cache_frame_d74ccb6f951c08a7ff0c75da5f9741ae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d74ccb6f951c08a7ff0c75da5f9741ae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d74ccb6f951c08a7ff0c75da5f9741ae ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_init_scale );
        tmp_assattr_name_1 = par_init_scale;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_init_scale, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
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
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_first_iteration, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
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
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_approx_type, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_B, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_H, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d74ccb6f951c08a7ff0c75da5f9741ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d74ccb6f951c08a7ff0c75da5f9741ae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d74ccb6f951c08a7ff0c75da5f9741ae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d74ccb6f951c08a7ff0c75da5f9741ae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d74ccb6f951c08a7ff0c75da5f9741ae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d74ccb6f951c08a7ff0c75da5f9741ae,
        type_description_1,
        par_self,
        par_init_scale
    );


    // Release cached frame.
    if ( frame_d74ccb6f951c08a7ff0c75da5f9741ae == cache_frame_d74ccb6f951c08a7ff0c75da5f9741ae )
    {
        Py_DECREF( frame_d74ccb6f951c08a7ff0c75da5f9741ae );
    }
    cache_frame_d74ccb6f951c08a7ff0c75da5f9741ae = NULL;

    assertFrameObject( frame_d74ccb6f951c08a7ff0c75da5f9741ae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_init_scale );
    Py_DECREF( par_init_scale );
    par_init_scale = NULL;

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

    CHECK_OBJECT( (PyObject *)par_init_scale );
    Py_DECREF( par_init_scale );
    par_init_scale = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_5___init__ );
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


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_6_initialize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_approx_type = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_20a4139d4d380b9a1942eeaa7f2016b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_20a4139d4d380b9a1942eeaa7f2016b4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_20a4139d4d380b9a1942eeaa7f2016b4, codeobj_20a4139d4d380b9a1942eeaa7f2016b4, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_20a4139d4d380b9a1942eeaa7f2016b4 = cache_frame_20a4139d4d380b9a1942eeaa7f2016b4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_20a4139d4d380b9a1942eeaa7f2016b4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_20a4139d4d380b9a1942eeaa7f2016b4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_True;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_first_iteration, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_n );
        tmp_assattr_name_2 = par_n;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_n, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_approx_type );
        tmp_assattr_name_3 = par_approx_type;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_approx_type, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_approx_type );
        tmp_compexpr_left_1 = par_approx_type;
        tmp_compexpr_right_1 = const_tuple_str_plain_hess_str_plain_inv_hess_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooo";
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
            tmp_make_exception_arg_1 = const_str_digest_b853393469c6f8504fe8729d39cf278e;
            frame_20a4139d4d380b9a1942eeaa7f2016b4->m_frame.f_lineno = 140;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 140;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_approx_type );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_str_plain_hess;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooo";
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
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_assattr_target_4;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 143;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_eye );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_n );
            tmp_tuple_element_1 = par_n;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
            frame_20a4139d4d380b9a1942eeaa7f2016b4->m_frame.f_lineno = 143;
            tmp_assattr_name_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assattr_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_B, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_assattr_target_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 145;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_eye );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_n );
            tmp_tuple_element_2 = par_n;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
            frame_20a4139d4d380b9a1942eeaa7f2016b4->m_frame.f_lineno = 145;
            tmp_assattr_name_5 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assattr_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_5 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_H, tmp_assattr_name_5 );
            Py_DECREF( tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20a4139d4d380b9a1942eeaa7f2016b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20a4139d4d380b9a1942eeaa7f2016b4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_20a4139d4d380b9a1942eeaa7f2016b4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_20a4139d4d380b9a1942eeaa7f2016b4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_20a4139d4d380b9a1942eeaa7f2016b4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_20a4139d4d380b9a1942eeaa7f2016b4,
        type_description_1,
        par_self,
        par_n,
        par_approx_type
    );


    // Release cached frame.
    if ( frame_20a4139d4d380b9a1942eeaa7f2016b4 == cache_frame_20a4139d4d380b9a1942eeaa7f2016b4 )
    {
        Py_DECREF( frame_20a4139d4d380b9a1942eeaa7f2016b4 );
    }
    cache_frame_20a4139d4d380b9a1942eeaa7f2016b4 = NULL;

    assertFrameObject( frame_20a4139d4d380b9a1942eeaa7f2016b4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_6_initialize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_approx_type );
    Py_DECREF( par_approx_type );
    par_approx_type = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_approx_type );
    Py_DECREF( par_approx_type );
    par_approx_type = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_6_initialize );
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


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_7__auto_scale( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_delta_x = python_pars[ 1 ];
    PyObject *par_delta_grad = python_pars[ 2 ];
    PyObject *var_s_norm2 = NULL;
    PyObject *var_y_norm2 = NULL;
    PyObject *var_ys = NULL;
    struct Nuitka_FrameObject *frame_fb5b957eccf078628a2deea01f67ff72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fb5b957eccf078628a2deea01f67ff72 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fb5b957eccf078628a2deea01f67ff72, codeobj_fb5b957eccf078628a2deea01f67ff72, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fb5b957eccf078628a2deea01f67ff72 = cache_frame_fb5b957eccf078628a2deea01f67ff72;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fb5b957eccf078628a2deea01f67ff72 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fb5b957eccf078628a2deea01f67ff72 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 151;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_delta_x );
        tmp_args_element_name_1 = par_delta_x;
        CHECK_OBJECT( par_delta_x );
        tmp_args_element_name_2 = par_delta_x;
        frame_fb5b957eccf078628a2deea01f67ff72->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_s_norm2 == NULL );
        var_s_norm2 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 152;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_delta_grad );
        tmp_args_element_name_3 = par_delta_grad;
        CHECK_OBJECT( par_delta_grad );
        tmp_args_element_name_4 = par_delta_grad;
        frame_fb5b957eccf078628a2deea01f67ff72->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y_norm2 == NULL );
        var_y_norm2 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 153;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_abs );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 153;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_delta_grad );
        tmp_args_element_name_6 = par_delta_grad;
        CHECK_OBJECT( par_delta_x );
        tmp_args_element_name_7 = par_delta_x;
        frame_fb5b957eccf078628a2deea01f67ff72->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 153;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_fb5b957eccf078628a2deea01f67ff72->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ys == NULL );
        var_ys = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_ys );
        tmp_compexpr_left_1 = var_ys;
        tmp_compexpr_right_1 = const_float_0_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( var_y_norm2 );
        tmp_compexpr_left_2 = var_y_norm2;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_s_norm2 );
        tmp_compexpr_left_3 = var_s_norm2;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "oooooo";
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
        tmp_return_value = const_int_pos_1;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_approx_type );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_str_plain_hess;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_y_norm2 );
            tmp_left_name_1 = var_y_norm2;
            CHECK_OBJECT( var_ys );
            tmp_right_name_1 = var_ys;
            tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( var_ys );
            tmp_left_name_2 = var_ys;
            CHECK_OBJECT( var_y_norm2 );
            tmp_right_name_2 = var_y_norm2;
            tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb5b957eccf078628a2deea01f67ff72 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb5b957eccf078628a2deea01f67ff72 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb5b957eccf078628a2deea01f67ff72 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fb5b957eccf078628a2deea01f67ff72, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fb5b957eccf078628a2deea01f67ff72->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fb5b957eccf078628a2deea01f67ff72, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fb5b957eccf078628a2deea01f67ff72,
        type_description_1,
        par_self,
        par_delta_x,
        par_delta_grad,
        var_s_norm2,
        var_y_norm2,
        var_ys
    );


    // Release cached frame.
    if ( frame_fb5b957eccf078628a2deea01f67ff72 == cache_frame_fb5b957eccf078628a2deea01f67ff72 )
    {
        Py_DECREF( frame_fb5b957eccf078628a2deea01f67ff72 );
    }
    cache_frame_fb5b957eccf078628a2deea01f67ff72 = NULL;

    assertFrameObject( frame_fb5b957eccf078628a2deea01f67ff72 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_7__auto_scale );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_x );
    Py_DECREF( par_delta_x );
    par_delta_x = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_grad );
    Py_DECREF( par_delta_grad );
    par_delta_grad = NULL;

    CHECK_OBJECT( (PyObject *)var_s_norm2 );
    Py_DECREF( var_s_norm2 );
    var_s_norm2 = NULL;

    CHECK_OBJECT( (PyObject *)var_y_norm2 );
    Py_DECREF( var_y_norm2 );
    var_y_norm2 = NULL;

    CHECK_OBJECT( (PyObject *)var_ys );
    Py_DECREF( var_ys );
    var_ys = NULL;

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

    CHECK_OBJECT( (PyObject *)par_delta_x );
    Py_DECREF( par_delta_x );
    par_delta_x = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_grad );
    Py_DECREF( par_delta_grad );
    par_delta_grad = NULL;

    Py_XDECREF( var_s_norm2 );
    var_s_norm2 = NULL;

    Py_XDECREF( var_y_norm2 );
    var_y_norm2 = NULL;

    Py_XDECREF( var_ys );
    var_ys = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_7__auto_scale );
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


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_8__update_implementation( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_delta_x = python_pars[ 1 ];
    PyObject *par_delta_grad = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_21c06f0f76c420e960eb747c21e3dd10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_21c06f0f76c420e960eb747c21e3dd10 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_21c06f0f76c420e960eb747c21e3dd10, codeobj_21c06f0f76c420e960eb747c21e3dd10, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_21c06f0f76c420e960eb747c21e3dd10 = cache_frame_21c06f0f76c420e960eb747c21e3dd10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_21c06f0f76c420e960eb747c21e3dd10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_21c06f0f76c420e960eb747c21e3dd10 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_50624a0b51cdcb6ff8e0625ced2522ff;
        frame_21c06f0f76c420e960eb747c21e3dd10->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
        }

        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 162;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21c06f0f76c420e960eb747c21e3dd10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21c06f0f76c420e960eb747c21e3dd10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_21c06f0f76c420e960eb747c21e3dd10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_21c06f0f76c420e960eb747c21e3dd10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_21c06f0f76c420e960eb747c21e3dd10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_21c06f0f76c420e960eb747c21e3dd10,
        type_description_1,
        par_self,
        par_delta_x,
        par_delta_grad
    );


    // Release cached frame.
    if ( frame_21c06f0f76c420e960eb747c21e3dd10 == cache_frame_21c06f0f76c420e960eb747c21e3dd10 )
    {
        Py_DECREF( frame_21c06f0f76c420e960eb747c21e3dd10 );
    }
    cache_frame_21c06f0f76c420e960eb747c21e3dd10 = NULL;

    assertFrameObject( frame_21c06f0f76c420e960eb747c21e3dd10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_8__update_implementation );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_delta_x );
    Py_DECREF( par_delta_x );
    par_delta_x = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_grad );
    Py_DECREF( par_delta_grad );
    par_delta_grad = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_8__update_implementation );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_9_update( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_delta_x = python_pars[ 1 ];
    PyObject *par_delta_grad = python_pars[ 2 ];
    PyObject *var_scale = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    struct Nuitka_FrameObject *frame_4ccde2da5fd508c9c17a5c2271a63e45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_4ccde2da5fd508c9c17a5c2271a63e45 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ccde2da5fd508c9c17a5c2271a63e45, codeobj_4ccde2da5fd508c9c17a5c2271a63e45, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4ccde2da5fd508c9c17a5c2271a63e45 = cache_frame_4ccde2da5fd508c9c17a5c2271a63e45;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ccde2da5fd508c9c17a5c2271a63e45 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ccde2da5fd508c9c17a5c2271a63e45 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_all );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_delta_x );
        tmp_compexpr_left_1 = par_delta_x;
        tmp_compexpr_right_1 = const_float_0_0;
        tmp_args_element_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4ccde2da5fd508c9c17a5c2271a63e45->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        int tmp_truth_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_all );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_delta_grad );
        tmp_compexpr_left_2 = par_delta_grad;
        tmp_compexpr_right_2 = const_float_0_0;
        tmp_args_element_name_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4ccde2da5fd508c9c17a5c2271a63e45->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_warn );

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

                exception_lineno = 183;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            tmp_args_element_name_3 = const_str_digest_6744e7ab608a20909db81e8f46148569;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_UserWarning );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UserWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 187;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = tmp_mvar_value_4;
            frame_4ccde2da5fd508c9c17a5c2271a63e45->m_frame.f_lineno = 183;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_first_iteration );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 189;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_init_scale );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_str_plain_auto;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "oooo";
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
                PyObject *tmp_assign_source_1;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                CHECK_OBJECT( par_self );
                tmp_called_instance_1 = par_self;
                CHECK_OBJECT( par_delta_x );
                tmp_args_element_name_5 = par_delta_x;
                CHECK_OBJECT( par_delta_grad );
                tmp_args_element_name_6 = par_delta_grad;
                frame_4ccde2da5fd508c9c17a5c2271a63e45->m_frame.f_lineno = 192;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__auto_scale, call_args );
                }

                if ( tmp_assign_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 192;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                assert( var_scale == NULL );
                var_scale = tmp_assign_source_1;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_float_arg_1;
                PyObject *tmp_source_name_5;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_float_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_init_scale );
                if ( tmp_float_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 194;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = TO_FLOAT( tmp_float_arg_1 );
                Py_DECREF( tmp_float_arg_1 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 194;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                assert( var_scale == NULL );
                var_scale = tmp_assign_source_2;
            }
            branch_end_4:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_approx_type );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = const_str_plain_hess;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_1 = "oooo";
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
                PyObject *tmp_assign_source_3;
                PyObject *tmp_source_name_7;
                CHECK_OBJECT( par_self );
                tmp_source_name_7 = par_self;
                tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_B );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 197;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_inplace_assign_attr_1__start == NULL );
                tmp_inplace_assign_attr_1__start = tmp_assign_source_3;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
                tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
                CHECK_OBJECT( var_scale );
                tmp_right_name_1 = var_scale;
                tmp_assign_source_4 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 197;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                assert( tmp_inplace_assign_attr_1__end == NULL );
                tmp_inplace_assign_attr_1__end = tmp_assign_source_4;
            }
            // Tried code:
            {
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_assattr_target_1;
                CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
                tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_1 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_B, tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 197;
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

            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_source_name_8;
                CHECK_OBJECT( par_self );
                tmp_source_name_8 = par_self;
                tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_H );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_inplace_assign_attr_2__start == NULL );
                tmp_inplace_assign_attr_2__start = tmp_assign_source_5;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
                tmp_left_name_2 = tmp_inplace_assign_attr_2__start;
                CHECK_OBJECT( var_scale );
                tmp_right_name_2 = var_scale;
                tmp_assign_source_6 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                assert( tmp_inplace_assign_attr_2__end == NULL );
                tmp_inplace_assign_attr_2__end = tmp_assign_source_6;
            }
            // Tried code:
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
                tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_H, tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_1 = "oooo";
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

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
            Py_DECREF( tmp_inplace_assign_attr_2__end );
            tmp_inplace_assign_attr_2__end = NULL;

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

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
            Py_DECREF( tmp_inplace_assign_attr_2__start );
            tmp_inplace_assign_attr_2__start = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto frame_exception_exit_1;
            // End of try:
            try_end_4:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
            Py_DECREF( tmp_inplace_assign_attr_2__end );
            tmp_inplace_assign_attr_2__end = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
            Py_DECREF( tmp_inplace_assign_attr_2__start );
            tmp_inplace_assign_attr_2__start = NULL;

            branch_end_5:;
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            tmp_assattr_name_3 = Py_False;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_first_iteration, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( par_delta_x );
        tmp_args_element_name_7 = par_delta_x;
        CHECK_OBJECT( par_delta_grad );
        tmp_args_element_name_8 = par_delta_grad;
        frame_4ccde2da5fd508c9c17a5c2271a63e45->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain__update_implementation, call_args );
        }

        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ccde2da5fd508c9c17a5c2271a63e45 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ccde2da5fd508c9c17a5c2271a63e45 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ccde2da5fd508c9c17a5c2271a63e45 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ccde2da5fd508c9c17a5c2271a63e45, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ccde2da5fd508c9c17a5c2271a63e45->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ccde2da5fd508c9c17a5c2271a63e45, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ccde2da5fd508c9c17a5c2271a63e45,
        type_description_1,
        par_self,
        par_delta_x,
        par_delta_grad,
        var_scale
    );


    // Release cached frame.
    if ( frame_4ccde2da5fd508c9c17a5c2271a63e45 == cache_frame_4ccde2da5fd508c9c17a5c2271a63e45 )
    {
        Py_DECREF( frame_4ccde2da5fd508c9c17a5c2271a63e45 );
    }
    cache_frame_4ccde2da5fd508c9c17a5c2271a63e45 = NULL;

    assertFrameObject( frame_4ccde2da5fd508c9c17a5c2271a63e45 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_9_update );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_x );
    Py_DECREF( par_delta_x );
    par_delta_x = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_grad );
    Py_DECREF( par_delta_grad );
    par_delta_grad = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_x );
    Py_DECREF( par_delta_x );
    par_delta_x = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_grad );
    Py_DECREF( par_delta_grad );
    par_delta_grad = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_9_update );
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


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_10_dot( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_d1301c1a9a3d96d5c9815a82107e6596;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d1301c1a9a3d96d5c9815a82107e6596 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d1301c1a9a3d96d5c9815a82107e6596, codeobj_d1301c1a9a3d96d5c9815a82107e6596, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *) );
    frame_d1301c1a9a3d96d5c9815a82107e6596 = cache_frame_d1301c1a9a3d96d5c9815a82107e6596;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d1301c1a9a3d96d5c9815a82107e6596 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d1301c1a9a3d96d5c9815a82107e6596 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_approx_type );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_hess;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__symv );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 218;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = const_int_pos_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_B );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 218;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_p );
            tmp_args_element_name_3 = par_p;
            frame_d1301c1a9a3d96d5c9815a82107e6596->m_frame.f_lineno = 218;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 218;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__symv );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 220;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = const_int_pos_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_H );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 220;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_p );
            tmp_args_element_name_6 = par_p;
            frame_d1301c1a9a3d96d5c9815a82107e6596->m_frame.f_lineno = 220;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 220;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1301c1a9a3d96d5c9815a82107e6596 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1301c1a9a3d96d5c9815a82107e6596 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1301c1a9a3d96d5c9815a82107e6596 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d1301c1a9a3d96d5c9815a82107e6596, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d1301c1a9a3d96d5c9815a82107e6596->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d1301c1a9a3d96d5c9815a82107e6596, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d1301c1a9a3d96d5c9815a82107e6596,
        type_description_1,
        par_self,
        par_p
    );


    // Release cached frame.
    if ( frame_d1301c1a9a3d96d5c9815a82107e6596 == cache_frame_d1301c1a9a3d96d5c9815a82107e6596 )
    {
        Py_DECREF( frame_d1301c1a9a3d96d5c9815a82107e6596 );
    }
    cache_frame_d1301c1a9a3d96d5c9815a82107e6596 = NULL;

    assertFrameObject( frame_d1301c1a9a3d96d5c9815a82107e6596 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_10_dot );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_10_dot );
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


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_11_get_matrix( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_M = NULL;
    PyObject *var_li = NULL;
    struct Nuitka_FrameObject *frame_831be28507ba2384efb8312d658f82a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_831be28507ba2384efb8312d658f82a9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_831be28507ba2384efb8312d658f82a9, codeobj_831be28507ba2384efb8312d658f82a9, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_831be28507ba2384efb8312d658f82a9 = cache_frame_831be28507ba2384efb8312d658f82a9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_831be28507ba2384efb8312d658f82a9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_831be28507ba2384efb8312d658f82a9 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_approx_type );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_hess;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 232;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_copy );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_B );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 232;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_831be28507ba2384efb8312d658f82a9->m_frame.f_lineno = 232;
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


                exception_lineno = 232;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_M == NULL );
            var_M = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 234;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_copy );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 234;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_H );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 234;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_831be28507ba2384efb8312d658f82a9->m_frame.f_lineno = 234;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 234;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_M == NULL );
            var_M = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 235;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tril_indices_from );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_M );
        tmp_tuple_element_1 = var_M;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_90459b2eb478f0f4e97f2ef94ee786fd );
        frame_831be28507ba2384efb8312d658f82a9->m_frame.f_lineno = 235;
        tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_li == NULL );
        var_li = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_M );
        tmp_source_name_7 = var_M;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_T );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_li );
        tmp_subscript_name_1 = var_li;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_M );
        tmp_ass_subscribed_1 = var_M;
        CHECK_OBJECT( var_li );
        tmp_ass_subscript_1 = var_li;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_831be28507ba2384efb8312d658f82a9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_831be28507ba2384efb8312d658f82a9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_831be28507ba2384efb8312d658f82a9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_831be28507ba2384efb8312d658f82a9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_831be28507ba2384efb8312d658f82a9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_831be28507ba2384efb8312d658f82a9,
        type_description_1,
        par_self,
        var_M,
        var_li
    );


    // Release cached frame.
    if ( frame_831be28507ba2384efb8312d658f82a9 == cache_frame_831be28507ba2384efb8312d658f82a9 )
    {
        Py_DECREF( frame_831be28507ba2384efb8312d658f82a9 );
    }
    cache_frame_831be28507ba2384efb8312d658f82a9 = NULL;

    assertFrameObject( frame_831be28507ba2384efb8312d658f82a9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_M );
    tmp_return_value = var_M;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_11_get_matrix );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_li );
    Py_DECREF( var_li );
    var_li = NULL;

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

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_li );
    var_li = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_11_get_matrix );
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


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_12___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_exception_strategy = python_pars[ 1 ];
    PyObject *par_min_curvature = python_pars[ 2 ];
    PyObject *par_init_scale = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_9ce19f2a31f58d2a17a075eaf6f4f161;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9ce19f2a31f58d2a17a075eaf6f4f161 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9ce19f2a31f58d2a17a075eaf6f4f161, codeobj_9ce19f2a31f58d2a17a075eaf6f4f161, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9ce19f2a31f58d2a17a075eaf6f4f161 = cache_frame_9ce19f2a31f58d2a17a075eaf6f4f161;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9ce19f2a31f58d2a17a075eaf6f4f161 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9ce19f2a31f58d2a17a075eaf6f4f161 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_exception_strategy );
        tmp_compexpr_left_1 = par_exception_strategy;
        tmp_compexpr_right_1 = const_str_plain_skip_update;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "ooooN";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_min_curvature );
            tmp_compexpr_left_2 = par_min_curvature;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_assattr_target_1;
                CHECK_OBJECT( par_min_curvature );
                tmp_assattr_name_1 = par_min_curvature;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_1 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_min_curvature, tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 279;
                    type_description_1 = "ooooN";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                tmp_assattr_name_2 = const_float_1eminus_08;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_min_curvature, tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 281;
                    type_description_1 = "ooooN";
                    goto frame_exception_exit_1;
                }
            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_exception_strategy );
            tmp_compexpr_left_3 = par_exception_strategy;
            tmp_compexpr_right_3 = const_str_plain_damp_update;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "ooooN";
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
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( par_min_curvature );
                tmp_compexpr_left_4 = par_min_curvature;
                tmp_compexpr_right_4 = Py_None;
                tmp_condition_result_4 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assattr_name_3;
                    PyObject *tmp_assattr_target_3;
                    CHECK_OBJECT( par_min_curvature );
                    tmp_assattr_name_3 = par_min_curvature;
                    CHECK_OBJECT( par_self );
                    tmp_assattr_target_3 = par_self;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_min_curvature, tmp_assattr_name_3 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 284;
                        type_description_1 = "ooooN";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    PyObject *tmp_assattr_name_4;
                    PyObject *tmp_assattr_target_4;
                    tmp_assattr_name_4 = const_float_0_2;
                    CHECK_OBJECT( par_self );
                    tmp_assattr_target_4 = par_self;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_min_curvature, tmp_assattr_name_4 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 286;
                        type_description_1 = "ooooN";
                        goto frame_exception_exit_1;
                    }
                }
                branch_end_4:;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_9cdd4460b2a364f8986cb357e5c13c07;
                frame_9ce19f2a31f58d2a17a075eaf6f4f161->m_frame.f_lineno = 288;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 288;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooN";
                goto frame_exception_exit_1;
            }
            branch_end_3:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_BFGS );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BFGS );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BFGS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 291;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_init_scale );
        tmp_args_element_name_1 = par_init_scale;
        frame_9ce19f2a31f58d2a17a075eaf6f4f161->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_exception_strategy );
        tmp_assattr_name_5 = par_exception_strategy;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_exception_strategy, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ce19f2a31f58d2a17a075eaf6f4f161 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ce19f2a31f58d2a17a075eaf6f4f161 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9ce19f2a31f58d2a17a075eaf6f4f161, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9ce19f2a31f58d2a17a075eaf6f4f161->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9ce19f2a31f58d2a17a075eaf6f4f161, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9ce19f2a31f58d2a17a075eaf6f4f161,
        type_description_1,
        par_self,
        par_exception_strategy,
        par_min_curvature,
        par_init_scale,
        NULL
    );


    // Release cached frame.
    if ( frame_9ce19f2a31f58d2a17a075eaf6f4f161 == cache_frame_9ce19f2a31f58d2a17a075eaf6f4f161 )
    {
        Py_DECREF( frame_9ce19f2a31f58d2a17a075eaf6f4f161 );
    }
    cache_frame_9ce19f2a31f58d2a17a075eaf6f4f161 = NULL;

    assertFrameObject( frame_9ce19f2a31f58d2a17a075eaf6f4f161 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_12___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_exception_strategy );
    Py_DECREF( par_exception_strategy );
    par_exception_strategy = NULL;

    CHECK_OBJECT( (PyObject *)par_min_curvature );
    Py_DECREF( par_min_curvature );
    par_min_curvature = NULL;

    CHECK_OBJECT( (PyObject *)par_init_scale );
    Py_DECREF( par_init_scale );
    par_init_scale = NULL;

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

    CHECK_OBJECT( (PyObject *)par_exception_strategy );
    Py_DECREF( par_exception_strategy );
    par_exception_strategy = NULL;

    CHECK_OBJECT( (PyObject *)par_min_curvature );
    Py_DECREF( par_min_curvature );
    par_min_curvature = NULL;

    CHECK_OBJECT( (PyObject *)par_init_scale );
    Py_DECREF( par_init_scale );
    par_init_scale = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_12___init__ );
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


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_13__update_inverse_hessian( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_ys = python_pars[ 1 ];
    PyObject *par_Hy = python_pars[ 2 ];
    PyObject *par_yHy = python_pars[ 3 ];
    PyObject *par_s = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_4d09c0bade67f8f09dc996c471884b0f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4d09c0bade67f8f09dc996c471884b0f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4d09c0bade67f8f09dc996c471884b0f, codeobj_4d09c0bade67f8f09dc996c471884b0f, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4d09c0bade67f8f09dc996c471884b0f = cache_frame_4d09c0bade67f8f09dc996c471884b0f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d09c0bade67f8f09dc996c471884b0f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d09c0bade67f8f09dc996c471884b0f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__syr2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_float_minus_1_0;
        CHECK_OBJECT( par_ys );
        tmp_right_name_1 = par_ys;
        tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 311;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_s );
        tmp_tuple_element_1 = par_s;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_Hy );
        tmp_tuple_element_1 = par_Hy;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_a;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_H );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 311;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_4d09c0bade67f8f09dc996c471884b0f->m_frame.f_lineno = 311;
        tmp_assattr_name_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_H, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__syr );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ys );
        tmp_left_name_3 = par_ys;
        CHECK_OBJECT( par_yHy );
        tmp_right_name_2 = par_yHy;
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ys );
        tmp_left_name_4 = par_ys;
        tmp_right_name_4 = const_int_pos_2;
        tmp_right_name_3 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_s );
        tmp_tuple_element_2 = par_s;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        tmp_dict_key_2 = const_str_plain_a;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_H );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_4d09c0bade67f8f09dc996c471884b0f->m_frame.f_lineno = 312;
        tmp_assattr_name_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_H, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d09c0bade67f8f09dc996c471884b0f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d09c0bade67f8f09dc996c471884b0f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d09c0bade67f8f09dc996c471884b0f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d09c0bade67f8f09dc996c471884b0f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d09c0bade67f8f09dc996c471884b0f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4d09c0bade67f8f09dc996c471884b0f,
        type_description_1,
        par_self,
        par_ys,
        par_Hy,
        par_yHy,
        par_s
    );


    // Release cached frame.
    if ( frame_4d09c0bade67f8f09dc996c471884b0f == cache_frame_4d09c0bade67f8f09dc996c471884b0f )
    {
        Py_DECREF( frame_4d09c0bade67f8f09dc996c471884b0f );
    }
    cache_frame_4d09c0bade67f8f09dc996c471884b0f = NULL;

    assertFrameObject( frame_4d09c0bade67f8f09dc996c471884b0f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_13__update_inverse_hessian );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ys );
    Py_DECREF( par_ys );
    par_ys = NULL;

    CHECK_OBJECT( (PyObject *)par_Hy );
    Py_DECREF( par_Hy );
    par_Hy = NULL;

    CHECK_OBJECT( (PyObject *)par_yHy );
    Py_DECREF( par_yHy );
    par_yHy = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ys );
    Py_DECREF( par_ys );
    par_ys = NULL;

    CHECK_OBJECT( (PyObject *)par_Hy );
    Py_DECREF( par_Hy );
    par_Hy = NULL;

    CHECK_OBJECT( (PyObject *)par_yHy );
    Py_DECREF( par_yHy );
    par_yHy = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_13__update_inverse_hessian );
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


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_14__update_hessian( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_ys = python_pars[ 1 ];
    PyObject *par_Bs = python_pars[ 2 ];
    PyObject *par_sBs = python_pars[ 3 ];
    PyObject *par_y = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_718eac9f037ff250c45dd462871fb9ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_718eac9f037ff250c45dd462871fb9ff = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_718eac9f037ff250c45dd462871fb9ff, codeobj_718eac9f037ff250c45dd462871fb9ff, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_718eac9f037ff250c45dd462871fb9ff = cache_frame_718eac9f037ff250c45dd462871fb9ff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_718eac9f037ff250c45dd462871fb9ff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_718eac9f037ff250c45dd462871fb9ff ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__syr );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_float_1_0;
        CHECK_OBJECT( par_ys );
        tmp_right_name_1 = par_ys;
        tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 329;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_y );
        tmp_tuple_element_1 = par_y;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_a;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_B );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 329;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_718eac9f037ff250c45dd462871fb9ff->m_frame.f_lineno = 329;
        tmp_assattr_name_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_B, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__syr );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = const_float_minus_1_0;
        CHECK_OBJECT( par_sBs );
        tmp_right_name_2 = par_sBs;
        tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 330;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_Bs );
        tmp_tuple_element_2 = par_Bs;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        tmp_dict_key_2 = const_str_plain_a;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_B );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 330;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_718eac9f037ff250c45dd462871fb9ff->m_frame.f_lineno = 330;
        tmp_assattr_name_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_B, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_718eac9f037ff250c45dd462871fb9ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_718eac9f037ff250c45dd462871fb9ff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_718eac9f037ff250c45dd462871fb9ff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_718eac9f037ff250c45dd462871fb9ff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_718eac9f037ff250c45dd462871fb9ff, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_718eac9f037ff250c45dd462871fb9ff,
        type_description_1,
        par_self,
        par_ys,
        par_Bs,
        par_sBs,
        par_y
    );


    // Release cached frame.
    if ( frame_718eac9f037ff250c45dd462871fb9ff == cache_frame_718eac9f037ff250c45dd462871fb9ff )
    {
        Py_DECREF( frame_718eac9f037ff250c45dd462871fb9ff );
    }
    cache_frame_718eac9f037ff250c45dd462871fb9ff = NULL;

    assertFrameObject( frame_718eac9f037ff250c45dd462871fb9ff );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_14__update_hessian );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ys );
    Py_DECREF( par_ys );
    par_ys = NULL;

    CHECK_OBJECT( (PyObject *)par_Bs );
    Py_DECREF( par_Bs );
    par_Bs = NULL;

    CHECK_OBJECT( (PyObject *)par_sBs );
    Py_DECREF( par_sBs );
    par_sBs = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ys );
    Py_DECREF( par_ys );
    par_ys = NULL;

    CHECK_OBJECT( (PyObject *)par_Bs );
    Py_DECREF( par_Bs );
    par_Bs = NULL;

    CHECK_OBJECT( (PyObject *)par_sBs );
    Py_DECREF( par_sBs );
    par_sBs = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_14__update_hessian );
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


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_15__update_implementation( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_delta_x = python_pars[ 1 ];
    PyObject *par_delta_grad = python_pars[ 2 ];
    PyObject *var_w = NULL;
    PyObject *var_z = NULL;
    PyObject *var_wz = NULL;
    PyObject *var_Mw = NULL;
    PyObject *var_wMw = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_update_factor = NULL;
    struct Nuitka_FrameObject *frame_3d90fe95015a56a3e97b19a62df4565c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3d90fe95015a56a3e97b19a62df4565c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3d90fe95015a56a3e97b19a62df4565c, codeobj_3d90fe95015a56a3e97b19a62df4565c, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3d90fe95015a56a3e97b19a62df4565c = cache_frame_3d90fe95015a56a3e97b19a62df4565c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3d90fe95015a56a3e97b19a62df4565c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3d90fe95015a56a3e97b19a62df4565c ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_approx_type );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_hess;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
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
            PyObject *tmp_assign_source_1;
            CHECK_OBJECT( par_delta_x );
            tmp_assign_source_1 = par_delta_x;
            assert( var_w == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_w = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            CHECK_OBJECT( par_delta_grad );
            tmp_assign_source_2 = par_delta_grad;
            assert( var_z == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_z = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( par_delta_grad );
            tmp_assign_source_3 = par_delta_grad;
            assert( var_w == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_w = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( par_delta_x );
            tmp_assign_source_4 = par_delta_x;
            assert( var_z == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_z = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 341;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_1 = var_w;
        CHECK_OBJECT( var_z );
        tmp_args_element_name_2 = var_z;
        frame_3d90fe95015a56a3e97b19a62df4565c->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_wz == NULL );
        var_wz = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_3 = var_w;
        frame_3d90fe95015a56a3e97b19a62df4565c->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Mw == NULL );
        var_Mw = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_Mw );
        tmp_called_instance_3 = var_Mw;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_4 = var_w;
        frame_3d90fe95015a56a3e97b19a62df4565c->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_wMw == NULL );
        var_wMw = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_wMw );
        tmp_compexpr_left_2 = var_wMw;
        tmp_compexpr_right_2 = const_float_0_0;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 347;
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( par_self );
            tmp_called_instance_4 = par_self;
            CHECK_OBJECT( par_delta_x );
            tmp_args_element_name_5 = par_delta_x;
            CHECK_OBJECT( par_delta_grad );
            tmp_args_element_name_6 = par_delta_grad;
            frame_3d90fe95015a56a3e97b19a62df4565c->m_frame.f_lineno = 348;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain__auto_scale, call_args );
            }

            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_scale == NULL );
            var_scale = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_approx_type );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_str_plain_hess;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;
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
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_assattr_target_1;
                CHECK_OBJECT( var_scale );
                tmp_left_name_1 = var_scale;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 351;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_3 = tmp_mvar_value_2;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_eye );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 351;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_n );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 351;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_name_1 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
                frame_3d90fe95015a56a3e97b19a62df4565c->m_frame.f_lineno = 351;
                tmp_right_name_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 351;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assattr_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_assattr_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 351;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_assattr_target_1 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_B, tmp_assattr_name_1 );
                Py_DECREF( tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 351;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_source_name_6;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT( var_scale );
                tmp_left_name_2 = var_scale;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 353;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_5 = tmp_mvar_value_3;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_eye );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 353;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_6 = par_self;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_n );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 353;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_name_2 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
                tmp_kw_name_2 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
                frame_3d90fe95015a56a3e97b19a62df4565c->m_frame.f_lineno = 353;
                tmp_right_name_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 353;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assattr_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_assattr_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 353;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_H, tmp_assattr_name_2 );
                Py_DECREF( tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 353;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_end_3:;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( par_self );
            tmp_called_instance_5 = par_self;
            CHECK_OBJECT( var_w );
            tmp_args_element_name_7 = var_w;
            frame_3d90fe95015a56a3e97b19a62df4565c->m_frame.f_lineno = 355;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_dot, call_args );
            }

            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_Mw;
                assert( old != NULL );
                var_Mw = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT( var_Mw );
            tmp_called_instance_6 = var_Mw;
            CHECK_OBJECT( var_w );
            tmp_args_element_name_8 = var_w;
            frame_3d90fe95015a56a3e97b19a62df4565c->m_frame.f_lineno = 356;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_dot, call_args );
            }

            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 356;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_wMw;
                assert( old != NULL );
                var_wMw = tmp_assign_source_10;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_wz );
        tmp_compexpr_left_4 = var_wz;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_min_curvature );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_wMw );
        tmp_right_name_3 = var_wMw;
        tmp_compexpr_right_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
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
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_exception_strategy );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 362;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_5 = const_str_plain_skip_update;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 362;
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
            tmp_return_value = Py_None;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            goto branch_end_5;
            branch_no_5:;
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                PyObject *tmp_source_name_9;
                CHECK_OBJECT( par_self );
                tmp_source_name_9 = par_self;
                tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_exception_strategy );
                if ( tmp_compexpr_left_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 367;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_6 = const_str_plain_damp_update;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                Py_DECREF( tmp_compexpr_left_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 367;
                    type_description_1 = "oooooooooo";
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
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_right_name_4;
                    PyObject *tmp_source_name_10;
                    PyObject *tmp_right_name_5;
                    PyObject *tmp_left_name_6;
                    PyObject *tmp_right_name_6;
                    PyObject *tmp_left_name_7;
                    PyObject *tmp_right_name_7;
                    tmp_left_name_5 = const_int_pos_1;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_10 = par_self;
                    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_min_curvature );
                    if ( tmp_right_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 368;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_left_name_4 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_5, tmp_right_name_4 );
                    Py_DECREF( tmp_right_name_4 );
                    if ( tmp_left_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 368;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_left_name_6 = const_int_pos_1;
                    CHECK_OBJECT( var_wz );
                    tmp_left_name_7 = var_wz;
                    CHECK_OBJECT( var_wMw );
                    tmp_right_name_7 = var_wMw;
                    tmp_right_name_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
                    if ( tmp_right_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_4 );

                        exception_lineno = 368;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_5 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_6, tmp_right_name_6 );
                    Py_DECREF( tmp_right_name_6 );
                    if ( tmp_right_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_4 );

                        exception_lineno = 368;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
                    Py_DECREF( tmp_left_name_4 );
                    Py_DECREF( tmp_right_name_5 );
                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 368;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_update_factor == NULL );
                    var_update_factor = tmp_assign_source_11;
                }
                {
                    PyObject *tmp_assign_source_12;
                    PyObject *tmp_left_name_8;
                    PyObject *tmp_left_name_9;
                    PyObject *tmp_right_name_8;
                    PyObject *tmp_right_name_9;
                    PyObject *tmp_left_name_10;
                    PyObject *tmp_left_name_11;
                    PyObject *tmp_right_name_10;
                    PyObject *tmp_right_name_11;
                    CHECK_OBJECT( var_update_factor );
                    tmp_left_name_9 = var_update_factor;
                    CHECK_OBJECT( var_z );
                    tmp_right_name_8 = var_z;
                    tmp_left_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
                    if ( tmp_left_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 369;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_left_name_11 = const_int_pos_1;
                    CHECK_OBJECT( var_update_factor );
                    tmp_right_name_10 = var_update_factor;
                    tmp_left_name_10 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_11, tmp_right_name_10 );
                    if ( tmp_left_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_8 );

                        exception_lineno = 369;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_Mw );
                    tmp_right_name_11 = var_Mw;
                    tmp_right_name_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_11 );
                    Py_DECREF( tmp_left_name_10 );
                    if ( tmp_right_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_8 );

                        exception_lineno = 369;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_9 );
                    Py_DECREF( tmp_left_name_8 );
                    Py_DECREF( tmp_right_name_9 );
                    if ( tmp_assign_source_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 369;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_z;
                        assert( old != NULL );
                        var_z = tmp_assign_source_12;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_13;
                    PyObject *tmp_called_instance_7;
                    PyObject *tmp_mvar_value_4;
                    PyObject *tmp_args_element_name_9;
                    PyObject *tmp_args_element_name_10;
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 370;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_7 = tmp_mvar_value_4;
                    CHECK_OBJECT( var_w );
                    tmp_args_element_name_9 = var_w;
                    CHECK_OBJECT( var_z );
                    tmp_args_element_name_10 = var_z;
                    frame_3d90fe95015a56a3e97b19a62df4565c->m_frame.f_lineno = 370;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                        tmp_assign_source_13 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_dot, call_args );
                    }

                    if ( tmp_assign_source_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 370;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_wz;
                        assert( old != NULL );
                        var_wz = tmp_assign_source_13;
                        Py_DECREF( old );
                    }

                }
                branch_no_6:;
            }
            branch_end_5:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_approx_type );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = const_str_plain_hess;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_12;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__update_hessian );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 373;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_wz == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "wz" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 373;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_11 = var_wz;
            CHECK_OBJECT( var_Mw );
            tmp_args_element_name_12 = var_Mw;
            CHECK_OBJECT( var_wMw );
            tmp_args_element_name_13 = var_wMw;
            if ( var_z == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "z" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 373;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_14 = var_z;
            frame_3d90fe95015a56a3e97b19a62df4565c->m_frame.f_lineno = 373;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 373;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_7;
        branch_no_7:;
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_13;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__update_inverse_hessian );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 375;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_wz == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "wz" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 375;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_15 = var_wz;
            CHECK_OBJECT( var_Mw );
            tmp_args_element_name_16 = var_Mw;
            CHECK_OBJECT( var_wMw );
            tmp_args_element_name_17 = var_wMw;
            if ( var_z == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "z" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 375;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_18 = var_z;
            frame_3d90fe95015a56a3e97b19a62df4565c->m_frame.f_lineno = 375;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 375;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_7:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d90fe95015a56a3e97b19a62df4565c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d90fe95015a56a3e97b19a62df4565c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d90fe95015a56a3e97b19a62df4565c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3d90fe95015a56a3e97b19a62df4565c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3d90fe95015a56a3e97b19a62df4565c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3d90fe95015a56a3e97b19a62df4565c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3d90fe95015a56a3e97b19a62df4565c,
        type_description_1,
        par_self,
        par_delta_x,
        par_delta_grad,
        var_w,
        var_z,
        var_wz,
        var_Mw,
        var_wMw,
        var_scale,
        var_update_factor
    );


    // Release cached frame.
    if ( frame_3d90fe95015a56a3e97b19a62df4565c == cache_frame_3d90fe95015a56a3e97b19a62df4565c )
    {
        Py_DECREF( frame_3d90fe95015a56a3e97b19a62df4565c );
    }
    cache_frame_3d90fe95015a56a3e97b19a62df4565c = NULL;

    assertFrameObject( frame_3d90fe95015a56a3e97b19a62df4565c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_15__update_implementation );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_x );
    Py_DECREF( par_delta_x );
    par_delta_x = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_grad );
    Py_DECREF( par_delta_grad );
    par_delta_grad = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_wz );
    var_wz = NULL;

    CHECK_OBJECT( (PyObject *)var_Mw );
    Py_DECREF( var_Mw );
    var_Mw = NULL;

    CHECK_OBJECT( (PyObject *)var_wMw );
    Py_DECREF( var_wMw );
    var_wMw = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_update_factor );
    var_update_factor = NULL;

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

    CHECK_OBJECT( (PyObject *)par_delta_x );
    Py_DECREF( par_delta_x );
    par_delta_x = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_grad );
    Py_DECREF( par_delta_grad );
    par_delta_grad = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_wz );
    var_wz = NULL;

    Py_XDECREF( var_Mw );
    var_Mw = NULL;

    Py_XDECREF( var_wMw );
    var_wMw = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_update_factor );
    var_update_factor = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_15__update_implementation );
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


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_16___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_min_denominator = python_pars[ 1 ];
    PyObject *par_init_scale = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_a2554bab9e9b0aafef25d7499a2a8294;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a2554bab9e9b0aafef25d7499a2a8294 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a2554bab9e9b0aafef25d7499a2a8294, codeobj_a2554bab9e9b0aafef25d7499a2a8294, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a2554bab9e9b0aafef25d7499a2a8294 = cache_frame_a2554bab9e9b0aafef25d7499a2a8294;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a2554bab9e9b0aafef25d7499a2a8294 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a2554bab9e9b0aafef25d7499a2a8294 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_min_denominator );
        tmp_assattr_name_1 = par_min_denominator;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_min_denominator, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_SR1 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SR1 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SR1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 408;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_init_scale );
        tmp_args_element_name_1 = par_init_scale;
        frame_a2554bab9e9b0aafef25d7499a2a8294->m_frame.f_lineno = 408;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2554bab9e9b0aafef25d7499a2a8294 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2554bab9e9b0aafef25d7499a2a8294 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a2554bab9e9b0aafef25d7499a2a8294, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a2554bab9e9b0aafef25d7499a2a8294->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a2554bab9e9b0aafef25d7499a2a8294, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a2554bab9e9b0aafef25d7499a2a8294,
        type_description_1,
        par_self,
        par_min_denominator,
        par_init_scale,
        NULL
    );


    // Release cached frame.
    if ( frame_a2554bab9e9b0aafef25d7499a2a8294 == cache_frame_a2554bab9e9b0aafef25d7499a2a8294 )
    {
        Py_DECREF( frame_a2554bab9e9b0aafef25d7499a2a8294 );
    }
    cache_frame_a2554bab9e9b0aafef25d7499a2a8294 = NULL;

    assertFrameObject( frame_a2554bab9e9b0aafef25d7499a2a8294 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_16___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_min_denominator );
    Py_DECREF( par_min_denominator );
    par_min_denominator = NULL;

    CHECK_OBJECT( (PyObject *)par_init_scale );
    Py_DECREF( par_init_scale );
    par_init_scale = NULL;

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

    CHECK_OBJECT( (PyObject *)par_min_denominator );
    Py_DECREF( par_min_denominator );
    par_min_denominator = NULL;

    CHECK_OBJECT( (PyObject *)par_init_scale );
    Py_DECREF( par_init_scale );
    par_init_scale = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_16___init__ );
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


static PyObject *impl_scipy$optimize$_hessian_update_strategy$$$function_17__update_implementation( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_delta_x = python_pars[ 1 ];
    PyObject *par_delta_grad = python_pars[ 2 ];
    PyObject *var_w = NULL;
    PyObject *var_z = NULL;
    PyObject *var_Mw = NULL;
    PyObject *var_z_minus_Mw = NULL;
    PyObject *var_denominator = NULL;
    struct Nuitka_FrameObject *frame_46221063751acdf28ab5461a5cc2c57d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_46221063751acdf28ab5461a5cc2c57d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_46221063751acdf28ab5461a5cc2c57d, codeobj_46221063751acdf28ab5461a5cc2c57d, module_scipy$optimize$_hessian_update_strategy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_46221063751acdf28ab5461a5cc2c57d = cache_frame_46221063751acdf28ab5461a5cc2c57d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_46221063751acdf28ab5461a5cc2c57d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_46221063751acdf28ab5461a5cc2c57d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_approx_type );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_hess;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "oooooooo";
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
            CHECK_OBJECT( par_delta_x );
            tmp_assign_source_1 = par_delta_x;
            assert( var_w == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_w = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            CHECK_OBJECT( par_delta_grad );
            tmp_assign_source_2 = par_delta_grad;
            assert( var_z == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_z = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( par_delta_grad );
            tmp_assign_source_3 = par_delta_grad;
            assert( var_w == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_w = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( par_delta_x );
            tmp_assign_source_4 = par_delta_x;
            assert( var_z == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_z = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_1 = var_w;
        frame_46221063751acdf28ab5461a5cc2c57d->m_frame.f_lineno = 419;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Mw == NULL );
        var_Mw = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_z );
        tmp_left_name_1 = var_z;
        CHECK_OBJECT( var_Mw );
        tmp_right_name_1 = var_Mw;
        tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_z_minus_Mw == NULL );
        var_z_minus_Mw = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 421;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_2 = var_w;
        CHECK_OBJECT( var_z_minus_Mw );
        tmp_args_element_name_3 = var_z_minus_Mw;
        frame_46221063751acdf28ab5461a5cc2c57d->m_frame.f_lineno = 421;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_denominator == NULL );
        var_denominator = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 424;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT( var_denominator );
        tmp_args_element_name_4 = var_denominator;
        frame_46221063751acdf28ab5461a5cc2c57d->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_abs, call_args );
        }

        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_min_denominator );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 424;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 424;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_5 = var_w;
        frame_46221063751acdf28ab5461a5cc2c57d->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 424;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 424;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 424;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_z_minus_Mw );
        tmp_args_element_name_6 = var_z_minus_Mw;
        frame_46221063751acdf28ab5461a5cc2c57d->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 424;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 424;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "oooooooo";
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_approx_type );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_str_plain_hess;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__syr );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 428;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_4 = const_int_pos_1;
            CHECK_OBJECT( var_denominator );
            tmp_right_name_4 = var_denominator;
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 428;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_z_minus_Mw );
            tmp_tuple_element_1 = var_z_minus_Mw;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_a;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_B );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 428;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_46221063751acdf28ab5461a5cc2c57d->m_frame.f_lineno = 428;
            tmp_assattr_name_1 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 428;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_B, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 428;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__syr );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 430;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_5 = const_int_pos_1;
            CHECK_OBJECT( var_denominator );
            tmp_right_name_5 = var_denominator;
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 430;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_z_minus_Mw );
            tmp_tuple_element_2 = var_z_minus_Mw;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_dict_key_2 = const_str_plain_a;
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_H );
            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 430;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_46221063751acdf28ab5461a5cc2c57d->m_frame.f_lineno = 430;
            tmp_assattr_name_2 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 430;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_H, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 430;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46221063751acdf28ab5461a5cc2c57d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_46221063751acdf28ab5461a5cc2c57d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46221063751acdf28ab5461a5cc2c57d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_46221063751acdf28ab5461a5cc2c57d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_46221063751acdf28ab5461a5cc2c57d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_46221063751acdf28ab5461a5cc2c57d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_46221063751acdf28ab5461a5cc2c57d,
        type_description_1,
        par_self,
        par_delta_x,
        par_delta_grad,
        var_w,
        var_z,
        var_Mw,
        var_z_minus_Mw,
        var_denominator
    );


    // Release cached frame.
    if ( frame_46221063751acdf28ab5461a5cc2c57d == cache_frame_46221063751acdf28ab5461a5cc2c57d )
    {
        Py_DECREF( frame_46221063751acdf28ab5461a5cc2c57d );
    }
    cache_frame_46221063751acdf28ab5461a5cc2c57d = NULL;

    assertFrameObject( frame_46221063751acdf28ab5461a5cc2c57d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_17__update_implementation );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_x );
    Py_DECREF( par_delta_x );
    par_delta_x = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_grad );
    Py_DECREF( par_delta_grad );
    par_delta_grad = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

    CHECK_OBJECT( (PyObject *)var_z );
    Py_DECREF( var_z );
    var_z = NULL;

    CHECK_OBJECT( (PyObject *)var_Mw );
    Py_DECREF( var_Mw );
    var_Mw = NULL;

    CHECK_OBJECT( (PyObject *)var_z_minus_Mw );
    Py_DECREF( var_z_minus_Mw );
    var_z_minus_Mw = NULL;

    CHECK_OBJECT( (PyObject *)var_denominator );
    Py_DECREF( var_denominator );
    var_denominator = NULL;

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

    CHECK_OBJECT( (PyObject *)par_delta_x );
    Py_DECREF( par_delta_x );
    par_delta_x = NULL;

    CHECK_OBJECT( (PyObject *)par_delta_grad );
    Py_DECREF( par_delta_grad );
    par_delta_grad = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_Mw );
    var_Mw = NULL;

    Py_XDECREF( var_z_minus_Mw );
    var_z_minus_Mw = NULL;

    Py_XDECREF( var_denominator );
    var_denominator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy$$$function_17__update_implementation );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_10_dot(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_10_dot,
        const_str_plain_dot,
#if PYTHON_VERSION >= 300
        const_str_digest_f6c4154b3ab841a1dd3b5298142921dd,
#endif
        codeobj_d1301c1a9a3d96d5c9815a82107e6596,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        const_str_digest_d803e007dbd3db4a0068dddebbe9160e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_11_get_matrix(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_11_get_matrix,
        const_str_plain_get_matrix,
#if PYTHON_VERSION >= 300
        const_str_digest_f5acafb4eebd4ef19d71dcaddbea1cc6,
#endif
        codeobj_831be28507ba2384efb8312d658f82a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        const_str_digest_2a4a5f50005b863a18929f51b9adfd9f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_12___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_7ad281ba74f5328ab8db688377c681b5,
#endif
        codeobj_9ce19f2a31f58d2a17a075eaf6f4f161,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_13__update_inverse_hessian(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_13__update_inverse_hessian,
        const_str_plain__update_inverse_hessian,
#if PYTHON_VERSION >= 300
        const_str_digest_dda4fd11e85371955ed414d2c7710559,
#endif
        codeobj_4d09c0bade67f8f09dc996c471884b0f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        const_str_digest_26b41b3fd61151548ff0480d43ad628e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_14__update_hessian(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_14__update_hessian,
        const_str_plain__update_hessian,
#if PYTHON_VERSION >= 300
        const_str_digest_993f199315e3e2676932bc25bea0dc41,
#endif
        codeobj_718eac9f037ff250c45dd462871fb9ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        const_str_digest_b1b77d9c45dfa917470edf97cbc51046,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_15__update_implementation(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_15__update_implementation,
        const_str_plain__update_implementation,
#if PYTHON_VERSION >= 300
        const_str_digest_a58df2ba8b0333c2ad36473194d37f9f,
#endif
        codeobj_3d90fe95015a56a3e97b19a62df4565c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_16___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_eafdce6537a6cf580bfeb39efc7e1333,
#endif
        codeobj_a2554bab9e9b0aafef25d7499a2a8294,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_17__update_implementation(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_17__update_implementation,
        const_str_plain__update_implementation,
#if PYTHON_VERSION >= 300
        const_str_digest_3269af3e657e71c20691251212ba845d,
#endif
        codeobj_46221063751acdf28ab5461a5cc2c57d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_1_initialize(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_1_initialize,
        const_str_plain_initialize,
#if PYTHON_VERSION >= 300
        const_str_digest_b6dd09722a5390c1da94950b3990a9b9,
#endif
        codeobj_55e10ae77d335e33d69086555e79970b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        const_str_digest_b1f0b2f9f714405fb224385ef005e24b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_2_update(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_2_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 300
        const_str_digest_a6b012617c0dd5518fd38c71b0d13db3,
#endif
        codeobj_f67f67ed228e577674de4257519cc114,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        const_str_digest_83971ff275592f6e2bfac226119db962,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_3_dot(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_3_dot,
        const_str_plain_dot,
#if PYTHON_VERSION >= 300
        const_str_digest_afd224d62d28846289ada0d30c330dac,
#endif
        codeobj_3147e4d2950de3752b97a4fbf8039cd6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        const_str_digest_d803e007dbd3db4a0068dddebbe9160e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_4_get_matrix(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_4_get_matrix,
        const_str_plain_get_matrix,
#if PYTHON_VERSION >= 300
        const_str_digest_5977a54e2f6c492d468f73ceae6431fe,
#endif
        codeobj_c2cd18ffac9055c66e81399dad4128ac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        const_str_digest_87738ae4bda25f37a6b3ca02d8ce6bc5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_5___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_d7c2bd5857529f6ec72cd0dee1f9114a,
#endif
        codeobj_d74ccb6f951c08a7ff0c75da5f9741ae,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_6_initialize(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_6_initialize,
        const_str_plain_initialize,
#if PYTHON_VERSION >= 300
        const_str_digest_a0bbec1bff7a6b641b4d87c71a7d183d,
#endif
        codeobj_20a4139d4d380b9a1942eeaa7f2016b4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        const_str_digest_b1f0b2f9f714405fb224385ef005e24b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_7__auto_scale(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_7__auto_scale,
        const_str_plain__auto_scale,
#if PYTHON_VERSION >= 300
        const_str_digest_9336a23074dd208dcf9b11f20753c229,
#endif
        codeobj_fb5b957eccf078628a2deea01f67ff72,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_8__update_implementation(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_8__update_implementation,
        const_str_plain__update_implementation,
#if PYTHON_VERSION >= 300
        const_str_digest_69522f07814653292a1041dc198a36dc,
#endif
        codeobj_21c06f0f76c420e960eb747c21e3dd10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_9_update(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_hessian_update_strategy$$$function_9_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 300
        const_str_digest_0c5fd17240dd91355b35d5940a5d19ea,
#endif
        codeobj_4ccde2da5fd508c9c17a5c2271a63e45,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_hessian_update_strategy,
        const_str_digest_83971ff275592f6e2bfac226119db962,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_hessian_update_strategy =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._hessian_update_strategy",
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

MOD_INIT_DECL( scipy$optimize$_hessian_update_strategy )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_hessian_update_strategy );
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
    puts("scipy.optimize._hessian_update_strategy: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._hessian_update_strategy: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._hessian_update_strategy: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_hessian_update_strategy" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_hessian_update_strategy = Py_InitModule4(
        "scipy.optimize._hessian_update_strategy",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_hessian_update_strategy = PyModule_Create( &mdef_scipy$optimize$_hessian_update_strategy );
#endif

    moduledict_scipy$optimize$_hessian_update_strategy = MODULE_DICT( module_scipy$optimize$_hessian_update_strategy );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_hessian_update_strategy,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_hessian_update_strategy,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_hessian_update_strategy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_hessian_update_strategy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_hessian_update_strategy );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_57d395b60bc12682481510cf63c85fe3, module_scipy$optimize$_hessian_update_strategy );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_3f9d88f3019bbb725c305939c2a1fe6c;
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
    PyObject *locals_scipy$optimize$_hessian_update_strategy_12 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_ded837b109d88737e60469d913edf368_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ded837b109d88737e60469d913edf368_2 = NULL;
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
    PyObject *locals_scipy$optimize$_hessian_update_strategy_104 = NULL;
    struct Nuitka_FrameObject *frame_8378820c6864b8616fbd02517d9b5b46_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8378820c6864b8616fbd02517d9b5b46_3 = NULL;
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
    PyObject *locals_scipy$optimize$_hessian_update_strategy_240 = NULL;
    struct Nuitka_FrameObject *frame_f61669f28807e526913237cf0d824e98_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f61669f28807e526913237cf0d824e98_4 = NULL;
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
    PyObject *locals_scipy$optimize$_hessian_update_strategy_378 = NULL;
    struct Nuitka_FrameObject *frame_bad7fe7c49b44373ba05a83abc0c413b_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_bad7fe7c49b44373ba05a83abc0c413b_5 = NULL;
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
        tmp_assign_source_1 = const_str_digest_39a6d693dc1672dc5a191e8fa705cb31;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_3f9d88f3019bbb725c305939c2a1fe6c = MAKE_MODULE_FRAME( codeobj_3f9d88f3019bbb725c305939c2a1fe6c, module_scipy$optimize$_hessian_update_strategy );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_3f9d88f3019bbb725c305939c2a1fe6c );
    assert( Py_REFCNT( frame_3f9d88f3019bbb725c305939c2a1fe6c ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame.f_lineno = 2;
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
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_hessian_update_strategy;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame.f_lineno = 3;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_hessian_update_strategy;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_norm_tuple;
        tmp_level_name_2 = const_int_0;
        frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_norm );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_hessian_update_strategy;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_get_blas_funcs_tuple;
        tmp_level_name_3 = const_int_0;
        frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_get_blas_funcs );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_get_blas_funcs, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_warnings;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_hessian_update_strategy;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_warn_tuple;
        tmp_level_name_4 = const_int_0;
        frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_warn );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_warn, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = LIST_COPY( const_list_str_plain_HessianUpdateStrategy_str_plain_BFGS_str_plain_SR1_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
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


            exception_lineno = 12;

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


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_1 != NULL );
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_type_object_tuple;
        tmp_assign_source_14 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

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


            exception_lineno = 12;

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


            exception_lineno = 12;

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
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

                goto try_except_handler_2;
            }
            tmp_args_name_1 = const_tuple_str_plain_HessianUpdateStrategy_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame.f_lineno = 12;
            tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

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


                exception_lineno = 12;

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


                    exception_lineno = 12;

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

                    exception_lineno = 12;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 12;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 12;
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
            locals_scipy$optimize$_hessian_update_strategy_12 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_57d395b60bc12682481510cf63c85fe3;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_12, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_b40aa3f9c641584ace8ddcc44a921480;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_12, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_HessianUpdateStrategy;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_12, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_ded837b109d88737e60469d913edf368_2, codeobj_ded837b109d88737e60469d913edf368, module_scipy$optimize$_hessian_update_strategy, sizeof(void *) );
        frame_ded837b109d88737e60469d913edf368_2 = cache_frame_ded837b109d88737e60469d913edf368_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_ded837b109d88737e60469d913edf368_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_ded837b109d88737e60469d913edf368_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_1_initialize(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_12, const_str_plain_initialize, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_2_update(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_12, const_str_plain_update, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_3_dot(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_12, const_str_plain_dot, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_4_get_matrix(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_12, const_str_plain_get_matrix, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ded837b109d88737e60469d913edf368_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ded837b109d88737e60469d913edf368_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_ded837b109d88737e60469d913edf368_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_ded837b109d88737e60469d913edf368_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_ded837b109d88737e60469d913edf368_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_ded837b109d88737e60469d913edf368_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_ded837b109d88737e60469d913edf368_2 == cache_frame_ded837b109d88737e60469d913edf368_2 )
        {
            Py_DECREF( frame_ded837b109d88737e60469d913edf368_2 );
        }
        cache_frame_ded837b109d88737e60469d913edf368_2 = NULL;

        assertFrameObject( frame_ded837b109d88737e60469d913edf368_2 );

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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_HessianUpdateStrategy;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_scipy$optimize$_hessian_update_strategy_12;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame.f_lineno = 12;
            tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_scipy$optimize$_hessian_update_strategy_12 );
        locals_scipy$optimize$_hessian_update_strategy_12 = NULL;
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

        Py_DECREF( locals_scipy$optimize$_hessian_update_strategy_12 );
        locals_scipy$optimize$_hessian_update_strategy_12 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy );
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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 12;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_HessianUpdateStrategy, tmp_assign_source_17 );
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
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_HessianUpdateStrategy );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HessianUpdateStrategy );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HessianUpdateStrategy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 104;

            goto try_except_handler_5;
        }

        tmp_tuple_element_3 = tmp_mvar_value_3;
        tmp_assign_source_19 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_19, 0, tmp_tuple_element_3 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

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


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_1 = tmp_class_creation_2__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
        Py_DECREF( tmp_type_arg_2 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        condexpr_end_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_21 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_21;
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


            exception_lineno = 104;

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


            exception_lineno = 104;

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
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_5;
            }
            tmp_tuple_element_4 = const_str_plain_FullHessianUpdateStrategy;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_4 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame.f_lineno = 104;
            tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_5;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_22;
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


                exception_lineno = 104;

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


                    exception_lineno = 104;

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

                    exception_lineno = 104;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_5 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 104;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_5;
            }
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_23;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_scipy$optimize$_hessian_update_strategy_104 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_57d395b60bc12682481510cf63c85fe3;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_digest_9415e8176432601a48e68bd6fa2e7361;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_FullHessianUpdateStrategy;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_7;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_8378820c6864b8616fbd02517d9b5b46_3, codeobj_8378820c6864b8616fbd02517d9b5b46, module_scipy$optimize$_hessian_update_strategy, sizeof(void *) );
        frame_8378820c6864b8616fbd02517d9b5b46_3 = cache_frame_8378820c6864b8616fbd02517d9b5b46_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_8378820c6864b8616fbd02517d9b5b46_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_8378820c6864b8616fbd02517d9b5b46_3 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_kw_name_4;
            tmp_called_name_4 = PyObject_GetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain_get_blas_funcs );

            if ( tmp_called_name_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_blas_funcs" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 107;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_called_name_4 = tmp_mvar_value_4;
                Py_INCREF( tmp_called_name_4 );
                }
            }

            tmp_args_name_4 = const_tuple_str_plain_syr_tuple;
            tmp_kw_name_4 = PyDict_Copy( const_dict_507c306503e38368c72b8019aeef4add );
            frame_8378820c6864b8616fbd02517d9b5b46_3->m_frame.f_lineno = 107;
            tmp_dictset_value = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain__syr, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_name_5;
            PyObject *tmp_kw_name_5;
            tmp_called_name_5 = PyObject_GetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain_get_blas_funcs );

            if ( tmp_called_name_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );

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

                    exception_lineno = 108;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_called_name_5 = tmp_mvar_value_5;
                Py_INCREF( tmp_called_name_5 );
                }
            }

            tmp_args_name_5 = const_tuple_str_plain_syr2_tuple;
            tmp_kw_name_5 = PyDict_Copy( const_dict_507c306503e38368c72b8019aeef4add );
            frame_8378820c6864b8616fbd02517d9b5b46_3->m_frame.f_lineno = 108;
            tmp_dictset_value = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_kw_name_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain__syr2, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_kw_name_6;
            tmp_called_name_6 = PyObject_GetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain_get_blas_funcs );

            if ( tmp_called_name_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_blas_funcs" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 110;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_called_name_6 = tmp_mvar_value_6;
                Py_INCREF( tmp_called_name_6 );
                }
            }

            tmp_args_name_6 = const_tuple_str_plain_symv_tuple;
            tmp_kw_name_6 = PyDict_Copy( const_dict_507c306503e38368c72b8019aeef4add );
            frame_8378820c6864b8616fbd02517d9b5b46_3->m_frame.f_lineno = 110;
            tmp_dictset_value = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_kw_name_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain__symv, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_str_plain_auto_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_5___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_6_initialize(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain_initialize, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_7__auto_scale(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain__auto_scale, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_8__update_implementation(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain__update_implementation, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_9_update(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain_update, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_10_dot(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain_dot, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_11_get_matrix(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_104, const_str_plain_get_matrix, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8378820c6864b8616fbd02517d9b5b46_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8378820c6864b8616fbd02517d9b5b46_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_8378820c6864b8616fbd02517d9b5b46_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_8378820c6864b8616fbd02517d9b5b46_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_8378820c6864b8616fbd02517d9b5b46_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_8378820c6864b8616fbd02517d9b5b46_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_8378820c6864b8616fbd02517d9b5b46_3 == cache_frame_8378820c6864b8616fbd02517d9b5b46_3 )
        {
            Py_DECREF( frame_8378820c6864b8616fbd02517d9b5b46_3 );
        }
        cache_frame_8378820c6864b8616fbd02517d9b5b46_3 = NULL;

        assertFrameObject( frame_8378820c6864b8616fbd02517d9b5b46_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_7 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = const_str_plain_FullHessianUpdateStrategy;
            tmp_args_name_7 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_scipy$optimize$_hessian_update_strategy_104;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_7, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_7 = tmp_class_creation_2__class_decl_dict;
            frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame.f_lineno = 104;
            tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
            Py_DECREF( tmp_args_name_7 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_7;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_24 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_24 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_scipy$optimize$_hessian_update_strategy_104 );
        locals_scipy$optimize$_hessian_update_strategy_104 = NULL;
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

        Py_DECREF( locals_scipy$optimize$_hessian_update_strategy_104 );
        locals_scipy$optimize$_hessian_update_strategy_104 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy );
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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 104;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_FullHessianUpdateStrategy, tmp_assign_source_24 );
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
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
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

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
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_FullHessianUpdateStrategy );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FullHessianUpdateStrategy );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FullHessianUpdateStrategy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 240;

            goto try_except_handler_8;
        }

        tmp_tuple_element_7 = tmp_mvar_value_7;
        tmp_assign_source_26 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_assign_source_26, 0, tmp_tuple_element_7 );
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
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


            exception_lineno = 240;

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


            exception_lineno = 240;

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


            exception_lineno = 240;

            goto try_except_handler_8;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_4 );
        Py_DECREF( tmp_type_arg_4 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;

            goto try_except_handler_8;
        }
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_28 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_28;
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


            exception_lineno = 240;

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


            exception_lineno = 240;

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
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_10 = tmp_class_creation_3__metaclass;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;

                goto try_except_handler_8;
            }
            tmp_tuple_element_8 = const_str_plain_BFGS;
            tmp_args_name_8 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_8 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_3__class_decl_dict;
            frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame.f_lineno = 240;
            tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_name_8 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;

                goto try_except_handler_8;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_29;
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


                exception_lineno = 240;

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


                    exception_lineno = 240;

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

                    exception_lineno = 240;

                    goto try_except_handler_8;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_9 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 240;

                    goto try_except_handler_8;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 240;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_8;
            }
            branch_no_9:;
        }
        goto branch_end_8;
        branch_no_8:;
        {
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_30;
        }
        branch_end_8:;
    }
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_scipy$optimize$_hessian_update_strategy_240 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_57d395b60bc12682481510cf63c85fe3;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_240, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_digest_27426c786e1ae2e4f6543ebd4620aec3;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_240, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_plain_BFGS;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_240, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;

            goto try_except_handler_10;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_f61669f28807e526913237cf0d824e98_4, codeobj_f61669f28807e526913237cf0d824e98, module_scipy$optimize$_hessian_update_strategy, sizeof(void *) );
        frame_f61669f28807e526913237cf0d824e98_4 = cache_frame_f61669f28807e526913237cf0d824e98_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_f61669f28807e526913237cf0d824e98_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_f61669f28807e526913237cf0d824e98_4 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_str_plain_skip_update_none_str_plain_auto_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_12___init__( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_240, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_13__update_inverse_hessian(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_240, const_str_plain__update_inverse_hessian, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_14__update_hessian(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_240, const_str_plain__update_hessian, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_15__update_implementation(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_240, const_str_plain__update_implementation, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f61669f28807e526913237cf0d824e98_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f61669f28807e526913237cf0d824e98_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_f61669f28807e526913237cf0d824e98_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_f61669f28807e526913237cf0d824e98_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_f61669f28807e526913237cf0d824e98_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_f61669f28807e526913237cf0d824e98_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if ( frame_f61669f28807e526913237cf0d824e98_4 == cache_frame_f61669f28807e526913237cf0d824e98_4 )
        {
            Py_DECREF( frame_f61669f28807e526913237cf0d824e98_4 );
        }
        cache_frame_f61669f28807e526913237cf0d824e98_4 = NULL;

        assertFrameObject( frame_f61669f28807e526913237cf0d824e98_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_name_9;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_9;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_9 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_10 = const_str_plain_BFGS;
            tmp_args_name_9 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_10 );
            tmp_tuple_element_10 = locals_scipy$optimize$_hessian_update_strategy_240;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_9, 2, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_9 = tmp_class_creation_3__class_decl_dict;
            frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame.f_lineno = 240;
            tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
            Py_DECREF( tmp_args_name_9 );
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;

                goto try_except_handler_10;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_31 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_31 );
        goto try_return_handler_10;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF( locals_scipy$optimize$_hessian_update_strategy_240 );
        locals_scipy$optimize$_hessian_update_strategy_240 = NULL;
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

        Py_DECREF( locals_scipy$optimize$_hessian_update_strategy_240 );
        locals_scipy$optimize$_hessian_update_strategy_240 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy );
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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 240;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_BFGS, tmp_assign_source_31 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_FullHessianUpdateStrategy );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FullHessianUpdateStrategy );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FullHessianUpdateStrategy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 378;

            goto try_except_handler_11;
        }

        tmp_tuple_element_11 = tmp_mvar_value_8;
        tmp_assign_source_33 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_assign_source_33, 0, tmp_tuple_element_11 );
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert( tmp_class_creation_4__class_decl_dict == NULL );
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        PyObject *tmp_type_arg_6;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;

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


            exception_lineno = 378;

            goto try_except_handler_11;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_subscribed_name_3 = tmp_class_creation_4__bases;
        tmp_subscript_name_3 = const_int_0;
        tmp_type_arg_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_type_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;

            goto try_except_handler_11;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_6 );
        Py_DECREF( tmp_type_arg_6 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;

            goto try_except_handler_11;
        }
        condexpr_end_4:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_35 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
        Py_DECREF( tmp_metaclass_name_4 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_35;
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


            exception_lineno = 378;

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


            exception_lineno = 378;

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
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_14;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kw_name_10;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_source_name_14 = tmp_class_creation_4__metaclass;
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 378;

                goto try_except_handler_11;
            }
            tmp_tuple_element_12 = const_str_plain_SR1;
            tmp_args_name_10 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_12 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_10 = tmp_class_creation_4__class_decl_dict;
            frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame.f_lineno = 378;
            tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_name_10 );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 378;

                goto try_except_handler_11;
            }
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_36;
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


                exception_lineno = 378;

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
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_getattr_default_4;
                PyObject *tmp_source_name_16;
                PyObject *tmp_type_arg_7;
                tmp_raise_type_4 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_4__metaclass );
                tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
                tmp_getattr_attr_4 = const_str_plain___name__;
                tmp_getattr_default_4 = const_str_angle_metaclass;
                tmp_tuple_element_13 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
                if ( tmp_tuple_element_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 378;

                    goto try_except_handler_11;
                }
                tmp_right_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_13 );
                CHECK_OBJECT( tmp_class_creation_4__prepared );
                tmp_type_arg_7 = tmp_class_creation_4__prepared;
                tmp_source_name_16 = BUILTIN_TYPE1( tmp_type_arg_7 );
                assert( !(tmp_source_name_16 == NULL) );
                tmp_tuple_element_13 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_16 );
                if ( tmp_tuple_element_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_4 );

                    exception_lineno = 378;

                    goto try_except_handler_11;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_13 );
                tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 378;

                    goto try_except_handler_11;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF( tmp_raise_type_4 );
                exception_value = tmp_raise_value_4;
                exception_lineno = 378;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_11;
            }
            branch_no_12:;
        }
        goto branch_end_11;
        branch_no_11:;
        {
            PyObject *tmp_assign_source_37;
            tmp_assign_source_37 = PyDict_New();
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_37;
        }
        branch_end_11:;
    }
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_scipy$optimize$_hessian_update_strategy_378 = tmp_set_locals_4;
            Py_INCREF( tmp_set_locals_4 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_57d395b60bc12682481510cf63c85fe3;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_378, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;

            goto try_except_handler_13;
        }
        tmp_dictset_value = const_str_digest_f5de3205f4bf10e4c343c305caef27d1;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_378, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;

            goto try_except_handler_13;
        }
        tmp_dictset_value = const_str_plain_SR1;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_378, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;

            goto try_except_handler_13;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_bad7fe7c49b44373ba05a83abc0c413b_5, codeobj_bad7fe7c49b44373ba05a83abc0c413b, module_scipy$optimize$_hessian_update_strategy, sizeof(void *) );
        frame_bad7fe7c49b44373ba05a83abc0c413b_5 = cache_frame_bad7fe7c49b44373ba05a83abc0c413b_5;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_bad7fe7c49b44373ba05a83abc0c413b_5 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_bad7fe7c49b44373ba05a83abc0c413b_5 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_float_1eminus_08_str_plain_auto_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_16___init__( tmp_defaults_3 );



            tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_378, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 406;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_hessian_update_strategy$$$function_17__update_implementation(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_hessian_update_strategy_378, const_str_plain__update_implementation, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_bad7fe7c49b44373ba05a83abc0c413b_5 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_bad7fe7c49b44373ba05a83abc0c413b_5 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_bad7fe7c49b44373ba05a83abc0c413b_5, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_bad7fe7c49b44373ba05a83abc0c413b_5->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_bad7fe7c49b44373ba05a83abc0c413b_5, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_bad7fe7c49b44373ba05a83abc0c413b_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame.
        if ( frame_bad7fe7c49b44373ba05a83abc0c413b_5 == cache_frame_bad7fe7c49b44373ba05a83abc0c413b_5 )
        {
            Py_DECREF( frame_bad7fe7c49b44373ba05a83abc0c413b_5 );
        }
        cache_frame_bad7fe7c49b44373ba05a83abc0c413b_5 = NULL;

        assertFrameObject( frame_bad7fe7c49b44373ba05a83abc0c413b_5 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_name_11;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kw_name_11;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_called_name_11 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_14 = const_str_plain_SR1;
            tmp_args_name_11 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_14 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_14 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_14 );
            tmp_tuple_element_14 = locals_scipy$optimize$_hessian_update_strategy_378;
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_args_name_11, 2, tmp_tuple_element_14 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_11 = tmp_class_creation_4__class_decl_dict;
            frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame.f_lineno = 378;
            tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
            Py_DECREF( tmp_args_name_11 );
            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 378;

                goto try_except_handler_13;
            }
            assert( outline_3_var___class__ == NULL );
            outline_3_var___class__ = tmp_assign_source_39;
        }
        CHECK_OBJECT( outline_3_var___class__ );
        tmp_assign_source_38 = outline_3_var___class__;
        Py_INCREF( tmp_assign_source_38 );
        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF( locals_scipy$optimize$_hessian_update_strategy_378 );
        locals_scipy$optimize$_hessian_update_strategy_378 = NULL;
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

        Py_DECREF( locals_scipy$optimize$_hessian_update_strategy_378 );
        locals_scipy$optimize$_hessian_update_strategy_378 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy );
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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_hessian_update_strategy );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 378;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain_SR1, tmp_assign_source_38 );
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

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
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
    RESTORE_FRAME_EXCEPTION( frame_3f9d88f3019bbb725c305939c2a1fe6c );
#endif
    popFrameStack();

    assertFrameObject( frame_3f9d88f3019bbb725c305939c2a1fe6c );

    goto frame_no_exception_5;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f9d88f3019bbb725c305939c2a1fe6c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3f9d88f3019bbb725c305939c2a1fe6c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3f9d88f3019bbb725c305939c2a1fe6c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3f9d88f3019bbb725c305939c2a1fe6c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_hessian_update_strategy, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_hessian_update_strategy );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
