/* Generated code for Python module 'scipy.optimize._dual_annealing'
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

/* The "_module_scipy$optimize$_dual_annealing" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_dual_annealing;
PyDictObject *moduledict_scipy$optimize$_dual_annealing;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain__factor4_p;
static PyObject *const_str_plain_bound_range;
extern PyObject *const_str_plain_run;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_index;
static PyObject *const_str_plain_not_improved_idx;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_a392344874461944db70023103db464e;
static PyObject *const_str_plain_pqv;
extern PyObject *const_str_plain_array;
static PyObject *const_str_plain_do_ls;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_isfinite;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_dual_annealing;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_plain_update_best;
extern PyObject *const_str_plain_zip;
static PyObject *const_str_digest_cede33cea0f2abdea46408c2b6e578e2;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_nhev;
extern PyObject *const_str_plain_OptimizeResult;
extern PyObject *const_float_1eminus_10;
static PyObject *const_str_digest_e4cd5395fe5833b35f0790619b819787;
static PyObject *const_str_digest_e7121253b2499830ec307c1dc88a64c8;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_digest_9de53a552350350635235a4e21f12d7a;
extern PyObject *const_str_plain_maxfun;
static PyObject *const_str_digest_ca5a5a5f1123c4fe5aee39177534d641;
extern PyObject *const_str_plain_njev;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_a;
static PyObject *const_str_digest_c13423983e4f53a40405333ace24d2ad;
static PyObject *const_str_plain_reinit_counter;
extern PyObject *const_str_plain_division;
static PyObject *const_tuple_8098212765a55eea7842255e3ef0e92e_tuple;
static PyObject *const_str_plain_bounds_list;
extern PyObject *const_str_plain_sin;
extern PyObject *const_str_plain_normal;
extern PyObject *const_str_plain_size;
static PyObject *const_str_digest_d97aa09557db67214a10bc73b53bf99c;
static PyObject *const_str_digest_f55fc8480c626138c48ce38cabb5776d;
static PyObject *const_str_digest_0959a4d1a7bb09d3f9d484476f24936f;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_current_location;
static PyObject *const_str_digest_b6674a6b84a81216eb18b06e74b6b505;
static PyObject *const_str_digest_5ec006a783e95b5f2e7f1269d90ba421;
static PyObject *const_str_digest_86b494170da0c440d0f2416f5d0446e9;
extern PyObject *const_float_0_5;
static PyObject *const_tuple_48d9fc52692de7699ffb52b7eecbb778_tuple;
static PyObject *const_str_plain__d1;
extern PyObject *const_str_plain_func;
static PyObject *const_str_digest_70ed22ee602b118159b54fb1b86ae226;
extern PyObject *const_str_plain_isinf;
static PyObject *const_str_digest_2745ea1b582b84ac44c852148de47fba;
static PyObject *const_tuple_c49f2a21a948a5952cdd090762998af1_tuple;
static PyObject *const_str_plain_update_current;
extern PyObject *const_str_plain_nfev;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_dcbf053fc42997e8485bc7b706f753a5;
static PyObject *const_tuple_str_digest_e59823a6e1c2bcb7ed580f0413564424_tuple;
static PyObject *const_str_plain_init_error;
extern PyObject *const_str_plain_is_finite;
static PyObject *const_str_plain__visiting_param;
static PyObject *const_tuple_f8c3cdc3ae81feae99533ff03433aa4d_tuple;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_gammaln;
static PyObject *const_str_digest_71b05298f341b5492308e456d7b327e3;
extern PyObject *const_str_plain_ngev;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_pi;
extern PyObject *const_str_plain_n;
static PyObject *const_tuple_str_plain_StrategyChain_tuple_type_object_tuple_tuple;
static PyObject *const_str_plain_visit_dist;
static PyObject *const_str_plain_EnergyState;
extern PyObject *const_str_plain_min;
extern PyObject *const_tuple_str_plain_self_str_plain_x_tuple;
extern PyObject *const_float_1_0;
static PyObject *const_float_2eminus_05;
static PyObject *const_str_plain_visits;
extern PyObject *const_float_2_0;
static PyObject *const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple;
static PyObject *const_str_digest_f70ddd017fe0f5271e7b50c82fd037ce;
extern PyObject *const_str_plain_exp;
static PyObject *const_str_plain_xbest;
extern PyObject *const_str_plain_isnan;
extern PyObject *const_str_plain_dim;
static PyObject *const_str_plain_factor1;
static PyObject *const_tuple_d878c3cc045a8c962ddc6d1bc9da5c6c_tuple;
extern PyObject *const_str_plain_x0;
extern PyObject *const_str_plain_all;
static PyObject *const_str_plain_LocalSearchWrapper;
static PyObject *const_tuple_str_plain_VisitingDistribution_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_den;
extern PyObject *const_str_plain_check_random_state;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain_maxiter;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_fun;
static PyObject *const_str_plain__factor5;
static PyObject *const_list_str_plain_dual_annealing_list;
static PyObject *const_str_plain_ObjectiveFunWrapper;
static PyObject *const_tuple_float_10000000_0_tuple;
static PyObject *const_str_plain_energy_state;
static PyObject *const_tuple_207af2ef492ace7d7a91840a57054ffc_tuple;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_visiting_param;
static PyObject *const_str_digest_b0403b32531140c940238e331d31f9f6;
static PyObject *const_str_digest_5e032ae0e458590d7a6159b0f1aee246;
extern PyObject *const_str_plain_ub;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_minimizer;
extern PyObject *const_str_plain_nit;
static PyObject *const_str_plain_emin;
extern PyObject *const_tuple_str_plain_minimize_tuple;
static PyObject *const_str_plain_MIN_VISIT_BOUND;
static PyObject *const_str_plain_factor4;
static PyObject *const_str_plain_minimizer_wrapper;
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_ec1774a712d119e70495ae2a8c6c914c;
extern PyObject *const_str_plain_minimize;
static PyObject *const_str_digest_0b55a537ed5c46b01df641ce74d7f0ae;
static PyObject *const_tuple_ee9efe9d0197a5ba99b03bc25d09f4bb_tuple;
static PyObject *const_str_digest_520bf3c84f83161e4af6eb1cad132194;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain__factor6;
extern PyObject *const_str_plain_fabs;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_9278c3dd995e579e77cf7c47fd8116fc;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_temperature_step;
static PyObject *const_str_plain__rand_state;
extern PyObject *const_str_digest_dbc049f94600503bfbd8944e5239d7ae;
static PyObject *const_str_plain_TAIL_LIMIT;
static PyObject *const_str_plain_pqv_temp;
static PyObject *const_tuple_283b9d45b8af81094e3a70c95e07b181_tuple;
extern PyObject *const_float_4_0;
static PyObject *const_tuple_str_plain_EnergyState_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_K;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
static PyObject *const_str_digest_ccdc4d37e2137a2dd8ca5de3f1d62ff4;
extern PyObject *const_str_plain_val;
static PyObject *const_str_plain__factor2;
static PyObject *const_tuple_e4f76862ad23551bddca40f211584294_tuple;
static PyObject *const_str_digest_5cfbefdc6942cee2742f364f48abe241;
static PyObject *const_str_digest_4145064d267761e8d26ea30530012679;
static PyObject *const_str_plain_ebest;
static PyObject *const_str_plain_MAX_REINIT_COUNT;
static PyObject *const_str_plain_local_search;
extern PyObject *const_int_pos_1000;
extern PyObject *const_str_plain_reset;
extern PyObject *const_float_100000000_0;
static PyObject *const_str_plain_not_improved_max_idx;
static PyObject *const_str_digest_2d3b20330808688f0bbf6a211742689c;
extern PyObject *const_str_plain_origin;
extern PyObject *const_float_10000000_0;
extern PyObject *const_str_digest_3a03db61930d1390c0d72de0a5982961;
static PyObject *const_tuple_9d1ccd436fd766c785cb47ca4e6be97c_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_e_str_plain_x_tuple;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_step;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain_x_tmp;
static PyObject *const_str_plain_LS_MAXITER_MAX;
extern PyObject *const_str_plain_fmod;
extern PyObject *const_str_plain_callback;
static PyObject *const_str_digest_2b901e8423e18f61c648b2d73c23dee8;
extern PyObject *const_float_3_0;
static PyObject *const_float_minus_5_0;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_mres;
static PyObject *const_str_plain_visit_fn;
extern PyObject *const_int_pos_90;
static PyObject *const_str_plain_x_visit;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_lower_sample;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_062d29b6cff9b7be2fa861ae79ab2b67;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain_rand_state;
extern PyObject *const_str_plain_xmin;
static PyObject *const_tuple_8decbdf1b498910bff91483548800f74_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_25c80d7cf683f1035c8ba26abd2076d8;
extern PyObject *const_str_plain_random_sample;
extern PyObject *const_tuple_str_plain_OptimizeResult_tuple;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_ebd0c665d2be8659fc6f0d82eec111c6;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_visit;
static PyObject *const_str_digest_c536c48d5f4cdfccf388999d31a94a85;
static PyObject *const_str_plain_ls_max_iter;
static PyObject *const_tuple_str_plain_ObjectiveFunWrapper_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_9ffc4e132457c12cc13eb09059aad8e3;
static PyObject *const_str_plain_upper_sample;
static PyObject *const_str_digest_3c071ff1379eb3ac0269185493a3706c;
static PyObject *const_str_plain_VisitingDistribution;
extern PyObject *const_str_plain_temperature;
static PyObject *const_str_plain_visiting;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_plain_LS_MAXITER_RATIO;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_float_2_0_tuple;
extern PyObject *const_tuple_str_plain_gammaln_tuple;
static PyObject *const_float_2_62;
extern PyObject *const_str_plain_lb;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_str_digest_0ef0ff4d3b48a18b087142d7e4a5e41c;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_LS_MAXITER_MIN;
static PyObject *const_tuple_str_plain_LocalSearchWrapper_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_accept_reject;
static PyObject *const_tuple_7ae863d9bb2b67da4ad1c34762d13c51_tuple;
static PyObject *const_str_plain_energy_state_improved;
static PyObject *const_tuple_39b448e7f2ae6ecb8cccf47747826f57_tuple;
static PyObject *const_str_plain_func_wrapper;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_method;
static PyObject *const_str_digest_e59823a6e1c2bcb7ed580f0413564424;
extern PyObject *const_str_plain_in_bounds;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_bounds;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_16a25563f55bf457bd7c4f074c9e817c;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_is_valid;
extern PyObject *const_str_digest_a0dfa9cb56b41095d297f9de64891d65;
static PyObject *const_str_plain_StrategyChain;
static PyObject *const_str_digest_a1710d03f939a9fb2eb324b5d1549734;
extern PyObject *const_tuple_str_plain_check_random_state_tuple;
extern PyObject *const_float_0_0;
static PyObject *const_str_plain_pls;
static PyObject *const_str_plain_acceptance_param;
static PyObject *const_str_plain_current_energy;
extern PyObject *const_int_pos_100;
static PyObject *const_float_5230_0;
extern PyObject *const_str_plain_success;
static PyObject *const_str_digest_132f72ad3992e1e83fa23618affeebdc;
static PyObject *const_str_plain__factor3;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain__factor4_p = UNSTREAM_STRING_ASCII( &constant_bin[ 4764222 ], 10, 1 );
    const_str_plain_bound_range = UNSTREAM_STRING_ASCII( &constant_bin[ 4764232 ], 11, 1 );
    const_str_plain_not_improved_idx = UNSTREAM_STRING_ASCII( &constant_bin[ 4764243 ], 16, 1 );
    const_str_digest_a392344874461944db70023103db464e = UNSTREAM_STRING_ASCII( &constant_bin[ 4764259 ], 23, 0 );
    const_str_plain_pqv = UNSTREAM_STRING_ASCII( &constant_bin[ 4764282 ], 3, 1 );
    const_str_plain_do_ls = UNSTREAM_STRING_ASCII( &constant_bin[ 4764285 ], 5, 1 );
    const_str_plain_update_best = UNSTREAM_STRING_ASCII( &constant_bin[ 4764290 ], 11, 1 );
    const_str_digest_cede33cea0f2abdea46408c2b6e578e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4764301 ], 965, 0 );
    const_str_digest_e4cd5395fe5833b35f0790619b819787 = UNSTREAM_STRING_ASCII( &constant_bin[ 4765266 ], 29, 0 );
    const_str_digest_e7121253b2499830ec307c1dc88a64c8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4765295 ], 27, 0 );
    const_str_digest_ca5a5a5f1123c4fe5aee39177534d641 = UNSTREAM_STRING_ASCII( &constant_bin[ 4765322 ], 56, 0 );
    const_str_digest_c13423983e4f53a40405333ace24d2ad = UNSTREAM_STRING_ASCII( &constant_bin[ 4765378 ], 26, 0 );
    const_str_plain_reinit_counter = UNSTREAM_STRING_ASCII( &constant_bin[ 4765404 ], 14, 1 );
    const_tuple_8098212765a55eea7842255e3ef0e92e_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_8098212765a55eea7842255e3ef0e92e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8098212765a55eea7842255e3ef0e92e_tuple, 1, const_str_plain_bounds ); Py_INCREF( const_str_plain_bounds );
    const_str_plain_func_wrapper = UNSTREAM_STRING_ASCII( &constant_bin[ 4764827 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_8098212765a55eea7842255e3ef0e92e_tuple, 2, const_str_plain_func_wrapper ); Py_INCREF( const_str_plain_func_wrapper );
    PyTuple_SET_ITEM( const_tuple_8098212765a55eea7842255e3ef0e92e_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_plain_bounds_list = UNSTREAM_STRING_ASCII( &constant_bin[ 4765418 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_8098212765a55eea7842255e3ef0e92e_tuple, 4, const_str_plain_bounds_list ); Py_INCREF( const_str_plain_bounds_list );
    PyTuple_SET_ITEM( const_tuple_8098212765a55eea7842255e3ef0e92e_tuple, 5, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain_ls_max_iter = UNSTREAM_STRING_ASCII( &constant_bin[ 4765429 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_8098212765a55eea7842255e3ef0e92e_tuple, 6, const_str_plain_ls_max_iter ); Py_INCREF( const_str_plain_ls_max_iter );
    const_str_digest_d97aa09557db67214a10bc73b53bf99c = UNSTREAM_STRING_ASCII( &constant_bin[ 4765440 ], 45, 0 );
    const_str_digest_f55fc8480c626138c48ce38cabb5776d = UNSTREAM_STRING_ASCII( &constant_bin[ 4765485 ], 36, 0 );
    const_str_digest_0959a4d1a7bb09d3f9d484476f24936f = UNSTREAM_STRING_ASCII( &constant_bin[ 4765521 ], 23, 0 );
    const_str_plain_current_location = UNSTREAM_STRING_ASCII( &constant_bin[ 4765544 ], 16, 1 );
    const_str_digest_b6674a6b84a81216eb18b06e74b6b505 = UNSTREAM_STRING_ASCII( &constant_bin[ 4765560 ], 22, 0 );
    const_str_digest_5ec006a783e95b5f2e7f1269d90ba421 = UNSTREAM_STRING_ASCII( &constant_bin[ 4765582 ], 26, 0 );
    const_str_digest_86b494170da0c440d0f2416f5d0446e9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4765608 ], 47, 0 );
    const_tuple_48d9fc52692de7699ffb52b7eecbb778_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_48d9fc52692de7699ffb52b7eecbb778_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_48d9fc52692de7699ffb52b7eecbb778_tuple, 1, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_48d9fc52692de7699ffb52b7eecbb778_tuple, 2, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain_x_visit = UNSTREAM_STRING_ASCII( &constant_bin[ 4765655 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_48d9fc52692de7699ffb52b7eecbb778_tuple, 3, const_str_plain_x_visit ); Py_INCREF( const_str_plain_x_visit );
    PyTuple_SET_ITEM( const_tuple_48d9fc52692de7699ffb52b7eecbb778_tuple, 4, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_plain_pqv_temp = UNSTREAM_STRING_ASCII( &constant_bin[ 4765662 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_48d9fc52692de7699ffb52b7eecbb778_tuple, 5, const_str_plain_pqv_temp ); Py_INCREF( const_str_plain_pqv_temp );
    PyTuple_SET_ITEM( const_tuple_48d9fc52692de7699ffb52b7eecbb778_tuple, 6, const_str_plain_pqv ); Py_INCREF( const_str_plain_pqv );
    const_str_plain__d1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4765670 ], 3, 1 );
    const_str_digest_70ed22ee602b118159b54fb1b86ae226 = UNSTREAM_STRING_ASCII( &constant_bin[ 4765673 ], 17, 0 );
    const_str_digest_2745ea1b582b84ac44c852148de47fba = UNSTREAM_STRING_ASCII( &constant_bin[ 4765690 ], 7911, 0 );
    const_tuple_c49f2a21a948a5952cdd090762998af1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_c49f2a21a948a5952cdd090762998af1_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c49f2a21a948a5952cdd090762998af1_tuple, 1, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_c49f2a21a948a5952cdd090762998af1_tuple, 2, const_str_plain_upper ); Py_INCREF( const_str_plain_upper );
    PyTuple_SET_ITEM( const_tuple_c49f2a21a948a5952cdd090762998af1_tuple, 3, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    const_str_plain_update_current = UNSTREAM_STRING_ASCII( &constant_bin[ 4765390 ], 14, 1 );
    const_str_digest_dcbf053fc42997e8485bc7b706f753a5 = UNSTREAM_STRING_ASCII( &constant_bin[ 4773601 ], 29, 0 );
    const_tuple_str_digest_e59823a6e1c2bcb7ed580f0413564424_tuple = PyTuple_New( 1 );
    const_str_digest_e59823a6e1c2bcb7ed580f0413564424 = UNSTREAM_STRING_ASCII( &constant_bin[ 4773630 ], 35, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_e59823a6e1c2bcb7ed580f0413564424_tuple, 0, const_str_digest_e59823a6e1c2bcb7ed580f0413564424 ); Py_INCREF( const_str_digest_e59823a6e1c2bcb7ed580f0413564424 );
    const_str_plain_init_error = UNSTREAM_STRING_ASCII( &constant_bin[ 4761392 ], 10, 1 );
    const_str_plain__visiting_param = UNSTREAM_STRING_ASCII( &constant_bin[ 4773665 ], 15, 1 );
    const_tuple_f8c3cdc3ae81feae99533ff03433aa4d_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_f8c3cdc3ae81feae99533ff03433aa4d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f8c3cdc3ae81feae99533ff03433aa4d_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_f8c3cdc3ae81feae99533ff03433aa4d_tuple, 2, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain_x_tmp = UNSTREAM_STRING_ASCII( &constant_bin[ 4773680 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_f8c3cdc3ae81feae99533ff03433aa4d_tuple, 3, const_str_plain_x_tmp ); Py_INCREF( const_str_plain_x_tmp );
    const_str_plain_mres = UNSTREAM_STRING_ASCII( &constant_bin[ 4773685 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_f8c3cdc3ae81feae99533ff03433aa4d_tuple, 4, const_str_plain_mres ); Py_INCREF( const_str_plain_mres );
    PyTuple_SET_ITEM( const_tuple_f8c3cdc3ae81feae99533ff03433aa4d_tuple, 5, const_str_plain_is_finite ); Py_INCREF( const_str_plain_is_finite );
    PyTuple_SET_ITEM( const_tuple_f8c3cdc3ae81feae99533ff03433aa4d_tuple, 6, const_str_plain_in_bounds ); Py_INCREF( const_str_plain_in_bounds );
    PyTuple_SET_ITEM( const_tuple_f8c3cdc3ae81feae99533ff03433aa4d_tuple, 7, const_str_plain_is_valid ); Py_INCREF( const_str_plain_is_valid );
    const_str_digest_71b05298f341b5492308e456d7b327e3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4773689 ], 39, 0 );
    const_tuple_str_plain_StrategyChain_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    const_str_plain_StrategyChain = UNSTREAM_STRING_ASCII( &constant_bin[ 4765295 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_StrategyChain_tuple_type_object_tuple_tuple, 0, const_str_plain_StrategyChain ); Py_INCREF( const_str_plain_StrategyChain );
    PyTuple_SET_ITEM( const_tuple_str_plain_StrategyChain_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_plain_visit_dist = UNSTREAM_STRING_ASCII( &constant_bin[ 4764739 ], 10, 1 );
    const_str_plain_EnergyState = UNSTREAM_STRING_ASCII( &constant_bin[ 4765209 ], 11, 1 );
    const_float_2eminus_05 = UNSTREAM_FLOAT( &constant_bin[ 4773728 ] );
    const_str_plain_visits = UNSTREAM_STRING_ASCII( &constant_bin[ 4773736 ], 6, 1 );
    const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 2, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    PyTuple_SET_ITEM( const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 3, const_str_plain_temperature ); Py_INCREF( const_str_plain_temperature );
    PyTuple_SET_ITEM( const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 4, const_str_plain_dim ); Py_INCREF( const_str_plain_dim );
    PyTuple_SET_ITEM( const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 5, const_str_plain_visits ); Py_INCREF( const_str_plain_visits );
    const_str_plain_upper_sample = UNSTREAM_STRING_ASCII( &constant_bin[ 4773742 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 6, const_str_plain_upper_sample ); Py_INCREF( const_str_plain_upper_sample );
    const_str_plain_lower_sample = UNSTREAM_STRING_ASCII( &constant_bin[ 4773754 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 7, const_str_plain_lower_sample ); Py_INCREF( const_str_plain_lower_sample );
    PyTuple_SET_ITEM( const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 8, const_str_plain_x_visit ); Py_INCREF( const_str_plain_x_visit );
    PyTuple_SET_ITEM( const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 9, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 10, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 11, const_str_plain_visit ); Py_INCREF( const_str_plain_visit );
    PyTuple_SET_ITEM( const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 12, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    const_str_digest_f70ddd017fe0f5271e7b50c82fd037ce = UNSTREAM_STRING_ASCII( &constant_bin[ 4773766 ], 801, 0 );
    const_str_plain_xbest = UNSTREAM_STRING_ASCII( &constant_bin[ 4774567 ], 5, 1 );
    const_str_plain_factor1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4774572 ], 7, 1 );
    const_tuple_d878c3cc045a8c962ddc6d1bc9da5c6c_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_d878c3cc045a8c962ddc6d1bc9da5c6c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d878c3cc045a8c962ddc6d1bc9da5c6c_tuple, 1, const_str_plain_temperature ); Py_INCREF( const_str_plain_temperature );
    PyTuple_SET_ITEM( const_tuple_d878c3cc045a8c962ddc6d1bc9da5c6c_tuple, 2, const_str_plain_dim ); Py_INCREF( const_str_plain_dim );
    PyTuple_SET_ITEM( const_tuple_d878c3cc045a8c962ddc6d1bc9da5c6c_tuple, 3, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_d878c3cc045a8c962ddc6d1bc9da5c6c_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_d878c3cc045a8c962ddc6d1bc9da5c6c_tuple, 5, const_str_plain_factor1 ); Py_INCREF( const_str_plain_factor1 );
    const_str_plain_factor4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4764223 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_d878c3cc045a8c962ddc6d1bc9da5c6c_tuple, 6, const_str_plain_factor4 ); Py_INCREF( const_str_plain_factor4 );
    PyTuple_SET_ITEM( const_tuple_d878c3cc045a8c962ddc6d1bc9da5c6c_tuple, 7, const_str_plain_den ); Py_INCREF( const_str_plain_den );
    const_str_plain_LocalSearchWrapper = UNSTREAM_STRING_ASCII( &constant_bin[ 4764934 ], 18, 1 );
    const_tuple_str_plain_VisitingDistribution_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    const_str_plain_VisitingDistribution = UNSTREAM_STRING_ASCII( &constant_bin[ 4764752 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_VisitingDistribution_tuple_type_object_tuple_tuple, 0, const_str_plain_VisitingDistribution ); Py_INCREF( const_str_plain_VisitingDistribution );
    PyTuple_SET_ITEM( const_tuple_str_plain_VisitingDistribution_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_plain__factor5 = UNSTREAM_STRING_ASCII( &constant_bin[ 4774579 ], 8, 1 );
    const_list_str_plain_dual_annealing_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_dual_annealing_list, 0, const_str_plain_dual_annealing ); Py_INCREF( const_str_plain_dual_annealing );
    const_str_plain_ObjectiveFunWrapper = UNSTREAM_STRING_ASCII( &constant_bin[ 4764259 ], 19, 1 );
    const_tuple_float_10000000_0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_float_10000000_0_tuple, 0, const_float_10000000_0 ); Py_INCREF( const_float_10000000_0 );
    const_str_plain_energy_state = UNSTREAM_STRING_ASCII( &constant_bin[ 4765195 ], 12, 1 );
    const_tuple_207af2ef492ace7d7a91840a57054ffc_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_207af2ef492ace7d7a91840a57054ffc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_207af2ef492ace7d7a91840a57054ffc_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_207af2ef492ace7d7a91840a57054ffc_tuple, 2, const_str_plain_maxfun ); Py_INCREF( const_str_plain_maxfun );
    PyTuple_SET_ITEM( const_tuple_207af2ef492ace7d7a91840a57054ffc_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    const_str_plain_visiting_param = UNSTREAM_STRING_ASCII( &constant_bin[ 4773666 ], 14, 1 );
    const_str_digest_b0403b32531140c940238e331d31f9f6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4774587 ], 35, 0 );
    const_str_digest_5e032ae0e458590d7a6159b0f1aee246 = UNSTREAM_STRING_ASCII( &constant_bin[ 4774622 ], 1056, 0 );
    const_str_plain_emin = UNSTREAM_STRING_ASCII( &constant_bin[ 513670 ], 4, 1 );
    const_str_plain_MIN_VISIT_BOUND = UNSTREAM_STRING_ASCII( &constant_bin[ 4775678 ], 15, 1 );
    const_str_plain_minimizer_wrapper = UNSTREAM_STRING_ASCII( &constant_bin[ 4764915 ], 17, 1 );
    const_str_digest_ec1774a712d119e70495ae2a8c6c914c = UNSTREAM_STRING_ASCII( &constant_bin[ 4775693 ], 210, 0 );
    const_str_digest_0b55a537ed5c46b01df641ce74d7f0ae = UNSTREAM_STRING_ASCII( &constant_bin[ 4775903 ], 48, 0 );
    const_tuple_ee9efe9d0197a5ba99b03bc25d09f4bb_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_ee9efe9d0197a5ba99b03bc25d09f4bb_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ee9efe9d0197a5ba99b03bc25d09f4bb_tuple, 1, const_str_plain_func_wrapper ); Py_INCREF( const_str_plain_func_wrapper );
    const_str_plain_rand_state = UNSTREAM_STRING_ASCII( &constant_bin[ 4765005 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_ee9efe9d0197a5ba99b03bc25d09f4bb_tuple, 2, const_str_plain_rand_state ); Py_INCREF( const_str_plain_rand_state );
    PyTuple_SET_ITEM( const_tuple_ee9efe9d0197a5ba99b03bc25d09f4bb_tuple, 3, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_ee9efe9d0197a5ba99b03bc25d09f4bb_tuple, 4, const_str_plain_init_error ); Py_INCREF( const_str_plain_init_error );
    PyTuple_SET_ITEM( const_tuple_ee9efe9d0197a5ba99b03bc25d09f4bb_tuple, 5, const_str_plain_reinit_counter ); Py_INCREF( const_str_plain_reinit_counter );
    PyTuple_SET_ITEM( const_tuple_ee9efe9d0197a5ba99b03bc25d09f4bb_tuple, 6, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_520bf3c84f83161e4af6eb1cad132194 = UNSTREAM_STRING_ASCII( &constant_bin[ 4775951 ], 29, 0 );
    const_str_plain__factor6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4775980 ], 8, 1 );
    const_str_digest_9278c3dd995e579e77cf7c47fd8116fc = UNSTREAM_STRING_ASCII( &constant_bin[ 4775988 ], 17, 0 );
    const_str_plain_temperature_step = UNSTREAM_STRING_ASCII( &constant_bin[ 4776005 ], 16, 1 );
    const_str_plain__rand_state = UNSTREAM_STRING_ASCII( &constant_bin[ 4776021 ], 11, 1 );
    const_str_plain_TAIL_LIMIT = UNSTREAM_STRING_ASCII( &constant_bin[ 4776032 ], 10, 1 );
    const_tuple_283b9d45b8af81094e3a70c95e07b181_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_283b9d45b8af81094e3a70c95e07b181_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_283b9d45b8af81094e3a70c95e07b181_tuple, 1, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_283b9d45b8af81094e3a70c95e07b181_tuple, 2, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_283b9d45b8af81094e3a70c95e07b181_tuple, 3, const_str_plain_visiting_param ); Py_INCREF( const_str_plain_visiting_param );
    PyTuple_SET_ITEM( const_tuple_283b9d45b8af81094e3a70c95e07b181_tuple, 4, const_str_plain_rand_state ); Py_INCREF( const_str_plain_rand_state );
    const_tuple_str_plain_EnergyState_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_EnergyState_tuple_type_object_tuple_tuple, 0, const_str_plain_EnergyState ); Py_INCREF( const_str_plain_EnergyState );
    PyTuple_SET_ITEM( const_tuple_str_plain_EnergyState_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_ccdc4d37e2137a2dd8ca5de3f1d62ff4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4776042 ], 61, 0 );
    const_str_plain__factor2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4776103 ], 8, 1 );
    const_tuple_e4f76862ad23551bddca40f211584294_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4776111 ], 353 );
    const_str_digest_5cfbefdc6942cee2742f364f48abe241 = UNSTREAM_STRING_ASCII( &constant_bin[ 4776464 ], 29, 0 );
    const_str_digest_4145064d267761e8d26ea30530012679 = UNSTREAM_STRING_ASCII( &constant_bin[ 4776493 ], 110, 0 );
    const_str_plain_ebest = UNSTREAM_STRING_ASCII( &constant_bin[ 4776603 ], 5, 1 );
    const_str_plain_MAX_REINIT_COUNT = UNSTREAM_STRING_ASCII( &constant_bin[ 4776608 ], 16, 1 );
    const_str_plain_local_search = UNSTREAM_STRING_ASCII( &constant_bin[ 4765596 ], 12, 1 );
    const_str_plain_not_improved_max_idx = UNSTREAM_STRING_ASCII( &constant_bin[ 4776624 ], 20, 1 );
    const_str_digest_2d3b20330808688f0bbf6a211742689c = UNSTREAM_STRING_ASCII( &constant_bin[ 4776644 ], 51, 0 );
    const_tuple_9d1ccd436fd766c785cb47ca4e6be97c_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_9d1ccd436fd766c785cb47ca4e6be97c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9d1ccd436fd766c785cb47ca4e6be97c_tuple, 1, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    PyTuple_SET_ITEM( const_tuple_9d1ccd436fd766c785cb47ca4e6be97c_tuple, 2, const_str_plain_temperature ); Py_INCREF( const_str_plain_temperature );
    PyTuple_SET_ITEM( const_tuple_9d1ccd436fd766c785cb47ca4e6be97c_tuple, 3, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_9d1ccd436fd766c785cb47ca4e6be97c_tuple, 4, const_str_plain_x_visit ); Py_INCREF( const_str_plain_x_visit );
    PyTuple_SET_ITEM( const_tuple_9d1ccd436fd766c785cb47ca4e6be97c_tuple, 5, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_9d1ccd436fd766c785cb47ca4e6be97c_tuple, 6, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_tuple_str_plain_self_str_plain_e_str_plain_x_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_e_str_plain_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_e_str_plain_x_tuple, 1, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_e_str_plain_x_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_LS_MAXITER_MAX = UNSTREAM_STRING_ASCII( &constant_bin[ 4776695 ], 14, 1 );
    const_str_digest_2b901e8423e18f61c648b2d73c23dee8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4776709 ], 20, 0 );
    const_float_minus_5_0 = UNSTREAM_FLOAT( &constant_bin[ 4776729 ] );
    const_str_plain_visit_fn = UNSTREAM_STRING_ASCII( &constant_bin[ 4765287 ], 8, 1 );
    const_str_digest_062d29b6cff9b7be2fa861ae79ab2b67 = UNSTREAM_STRING_ASCII( &constant_bin[ 4776737 ], 127, 0 );
    const_tuple_8decbdf1b498910bff91483548800f74_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_8decbdf1b498910bff91483548800f74_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_acceptance_param = UNSTREAM_STRING_ASCII( &constant_bin[ 4764460 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_8decbdf1b498910bff91483548800f74_tuple, 1, const_str_plain_acceptance_param ); Py_INCREF( const_str_plain_acceptance_param );
    PyTuple_SET_ITEM( const_tuple_8decbdf1b498910bff91483548800f74_tuple, 2, const_str_plain_visit_dist ); Py_INCREF( const_str_plain_visit_dist );
    PyTuple_SET_ITEM( const_tuple_8decbdf1b498910bff91483548800f74_tuple, 3, const_str_plain_func_wrapper ); Py_INCREF( const_str_plain_func_wrapper );
    PyTuple_SET_ITEM( const_tuple_8decbdf1b498910bff91483548800f74_tuple, 4, const_str_plain_minimizer_wrapper ); Py_INCREF( const_str_plain_minimizer_wrapper );
    PyTuple_SET_ITEM( const_tuple_8decbdf1b498910bff91483548800f74_tuple, 5, const_str_plain_rand_state ); Py_INCREF( const_str_plain_rand_state );
    PyTuple_SET_ITEM( const_tuple_8decbdf1b498910bff91483548800f74_tuple, 6, const_str_plain_energy_state ); Py_INCREF( const_str_plain_energy_state );
    const_str_digest_25c80d7cf683f1035c8ba26abd2076d8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4776864 ], 27, 0 );
    const_str_digest_ebd0c665d2be8659fc6f0d82eec111c6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4773697 ], 30, 0 );
    const_str_digest_c536c48d5f4cdfccf388999d31a94a85 = UNSTREAM_STRING_ASCII( &constant_bin[ 4776891 ], 38, 0 );
    const_tuple_str_plain_ObjectiveFunWrapper_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ObjectiveFunWrapper_tuple_type_object_tuple_tuple, 0, const_str_plain_ObjectiveFunWrapper ); Py_INCREF( const_str_plain_ObjectiveFunWrapper );
    PyTuple_SET_ITEM( const_tuple_str_plain_ObjectiveFunWrapper_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_9ffc4e132457c12cc13eb09059aad8e3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4776929 ], 28, 0 );
    const_str_digest_3c071ff1379eb3ac0269185493a3706c = UNSTREAM_STRING_ASCII( &constant_bin[ 4776957 ], 31, 0 );
    const_str_plain_visiting = UNSTREAM_STRING_ASCII( &constant_bin[ 4767367 ], 8, 1 );
    const_str_plain_LS_MAXITER_RATIO = UNSTREAM_STRING_ASCII( &constant_bin[ 4776988 ], 16, 1 );
    const_float_2_62 = UNSTREAM_FLOAT( &constant_bin[ 4777004 ] );
    const_str_digest_0ef0ff4d3b48a18b087142d7e4a5e41c = UNSTREAM_STRING_ASCII( &constant_bin[ 4777012 ], 59, 0 );
    const_str_plain_LS_MAXITER_MIN = UNSTREAM_STRING_ASCII( &constant_bin[ 4777071 ], 14, 1 );
    const_tuple_str_plain_LocalSearchWrapper_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LocalSearchWrapper_tuple_type_object_tuple_tuple, 0, const_str_plain_LocalSearchWrapper ); Py_INCREF( const_str_plain_LocalSearchWrapper );
    PyTuple_SET_ITEM( const_tuple_str_plain_LocalSearchWrapper_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_tuple_7ae863d9bb2b67da4ad1c34762d13c51_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_7ae863d9bb2b67da4ad1c34762d13c51_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7ae863d9bb2b67da4ad1c34762d13c51_tuple, 1, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_7ae863d9bb2b67da4ad1c34762d13c51_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_7ae863d9bb2b67da4ad1c34762d13c51_tuple, 3, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_7ae863d9bb2b67da4ad1c34762d13c51_tuple, 4, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_str_plain_energy_state_improved = UNSTREAM_STRING_ASCII( &constant_bin[ 4777085 ], 21, 1 );
    const_tuple_39b448e7f2ae6ecb8cccf47747826f57_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_39b448e7f2ae6ecb8cccf47747826f57_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_39b448e7f2ae6ecb8cccf47747826f57_tuple, 1, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_39b448e7f2ae6ecb8cccf47747826f57_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_39b448e7f2ae6ecb8cccf47747826f57_tuple, 3, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_39b448e7f2ae6ecb8cccf47747826f57_tuple, 4, const_str_plain_do_ls ); Py_INCREF( const_str_plain_do_ls );
    const_str_plain_pls = UNSTREAM_STRING_ASCII( &constant_bin[ 1962292 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_39b448e7f2ae6ecb8cccf47747826f57_tuple, 5, const_str_plain_pls ); Py_INCREF( const_str_plain_pls );
    const_str_digest_16a25563f55bf457bd7c4f074c9e817c = UNSTREAM_STRING_ASCII( &constant_bin[ 4777106 ], 33, 0 );
    const_str_digest_a1710d03f939a9fb2eb324b5d1549734 = UNSTREAM_STRING_ASCII( &constant_bin[ 4777139 ], 59, 0 );
    const_str_plain_current_energy = UNSTREAM_STRING_ASCII( &constant_bin[ 4777198 ], 14, 1 );
    const_float_5230_0 = UNSTREAM_FLOAT( &constant_bin[ 4777212 ] );
    const_str_digest_132f72ad3992e1e83fa23618affeebdc = UNSTREAM_STRING_ASCII( &constant_bin[ 4777220 ], 150, 0 );
    const_str_plain__factor3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4777370 ], 8, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_dual_annealing( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_932e753551f655e336bab76795832308;
static PyCodeObject *codeobj_9e1bc4465b943b10e0c77fd889716330;
static PyCodeObject *codeobj_dfbb31e502df5051930d4e0998bbc5dd;
static PyCodeObject *codeobj_8f22dc3ec292173a713c56fd10b91128;
static PyCodeObject *codeobj_deee1d996232e823c6b3ab0ca8221b27;
static PyCodeObject *codeobj_c3b2f50439cb03a49046630d6daca2aa;
static PyCodeObject *codeobj_43daf0f0e196b98c82d935ebd30d3810;
static PyCodeObject *codeobj_bd1557cb9e687367b3acab8eaf867508;
static PyCodeObject *codeobj_efad8436be4c3991b5139ea10bbdbb04;
static PyCodeObject *codeobj_7a1113b6c060165ed34b82c5c18928a2;
static PyCodeObject *codeobj_d3c24be158d34cbf78d112fcf6c6dd0a;
static PyCodeObject *codeobj_1f49d0c1c9217bde89470597f26b3705;
static PyCodeObject *codeobj_4bc13460bc4cfd178fcba3c0dc0a62a8;
static PyCodeObject *codeobj_25e1d7fc21737293bdc0cc1e250f02a3;
static PyCodeObject *codeobj_03b7fdf10e70bd193b46b26635cefcdf;
static PyCodeObject *codeobj_ceb7d638fbb0fd089352fcce1f5b1b08;
static PyCodeObject *codeobj_6f2cd03671bf5d126f54bf0267eeef45;
static PyCodeObject *codeobj_623e1a3932aeb28b1953747f4212a15e;
static PyCodeObject *codeobj_40b8622bb8c10eb5cfc7a2c84a852ad3;
static PyCodeObject *codeobj_72f5e3969bf76e0e8e9e7aa8d1e2254f;
static PyCodeObject *codeobj_3de830bd55a05caf2f22df53a2522fe2;
static PyCodeObject *codeobj_d9c8af54a069d2a1cd7818b317dc00b0;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_16a25563f55bf457bd7c4f074c9e817c );
    codeobj_932e753551f655e336bab76795832308 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_71b05298f341b5492308e456d7b327e3, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_9e1bc4465b943b10e0c77fd889716330 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EnergyState, 130, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_dfbb31e502df5051930d4e0998bbc5dd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_LocalSearchWrapper, 377, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_8f22dc3ec292173a713c56fd10b91128 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ObjectiveFunWrapper, 359, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_deee1d996232e823c6b3ab0ca8221b27 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_StrategyChain, 213, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_c3b2f50439cb03a49046630d6daca2aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_VisitingDistribution, 22, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_43daf0f0e196b98c82d935ebd30d3810 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 50, const_tuple_283b9d45b8af81094e3a70c95e07b181_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bd1557cb9e687367b3acab8eaf867508 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 152, const_tuple_c49f2a21a948a5952cdd090762998af1_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_efad8436be4c3991b5139ea10bbdbb04 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 237, const_tuple_8decbdf1b498910bff91483548800f74_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7a1113b6c060165ed34b82c5c18928a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 361, const_tuple_207af2ef492ace7d7a91840a57054ffc_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_d3c24be158d34cbf78d112fcf6c6dd0a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 387, const_tuple_8098212765a55eea7842255e3ef0e92e_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_1f49d0c1c9217bde89470597f26b3705 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_accept_reject, 258, const_tuple_48d9fc52692de7699ffb52b7eecbb778_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4bc13460bc4cfd178fcba3c0dc0a62a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dual_annealing, 428, const_tuple_e4f76862ad23551bddca40f211584294_tuple, 14, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_25e1d7fc21737293bdc0cc1e250f02a3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fun, 372, const_tuple_str_plain_self_str_plain_x_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_03b7fdf10e70bd193b46b26635cefcdf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_local_search, 310, const_tuple_39b448e7f2ae6ecb8cccf47747826f57_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ceb7d638fbb0fd089352fcce1f5b1b08 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_local_search, 407, const_tuple_f8c3cdc3ae81feae99533ff03433aa4d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6f2cd03671bf5d126f54bf0267eeef45 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset, 161, const_tuple_ee9efe9d0197a5ba99b03bc25d09f4bb_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_623e1a3932aeb28b1953747f4212a15e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run, 279, const_tuple_9d1ccd436fd766c785cb47ca4e6be97c_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_40b8622bb8c10eb5cfc7a2c84a852ad3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update_best, 198, const_tuple_7ae863d9bb2b67da4ad1c34762d13c51_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_72f5e3969bf76e0e8e9e7aa8d1e2254f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update_current, 208, const_tuple_str_plain_self_str_plain_e_str_plain_x_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3de830bd55a05caf2f22df53a2522fe2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_visit_fn, 113, const_tuple_d878c3cc045a8c962ddc6d1bc9da5c6c_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9c8af54a069d2a1cd7818b317dc00b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_visiting, 74, const_tuple_4a8d3a8207b0e662a0d8ed28cabbf20f_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_10_run(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_11_local_search(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_12___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_13_fun(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_14___init__(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_15_local_search(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_16_dual_annealing( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_2_visiting(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_3_visit_fn(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_4___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_5_reset( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_6_update_best(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_7_update_current(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_9_accept_reject(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_dual_annealing$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_lb = python_pars[ 1 ];
    PyObject *par_ub = python_pars[ 2 ];
    PyObject *par_visiting_param = python_pars[ 3 ];
    PyObject *par_rand_state = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_43daf0f0e196b98c82d935ebd30d3810;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_43daf0f0e196b98c82d935ebd30d3810 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_43daf0f0e196b98c82d935ebd30d3810, codeobj_43daf0f0e196b98c82d935ebd30d3810, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_43daf0f0e196b98c82d935ebd30d3810 = cache_frame_43daf0f0e196b98c82d935ebd30d3810;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_43daf0f0e196b98c82d935ebd30d3810 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_43daf0f0e196b98c82d935ebd30d3810 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_visiting_param );
        tmp_assattr_name_1 = par_visiting_param;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__visiting_param, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_rand_state );
        tmp_assattr_name_2 = par_rand_state;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_rand_state, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_lb );
        tmp_assattr_name_3 = par_lb;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_lower, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_ub );
        tmp_assattr_name_4 = par_ub;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_upper, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_ub );
        tmp_left_name_1 = par_ub;
        CHECK_OBJECT( par_lb );
        tmp_right_name_1 = par_lb;
        tmp_assattr_name_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assattr_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_bound_range, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_assattr_target_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exp );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = const_float_4_0;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__visiting_param );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_log );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__visiting_param );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_float_1_0;
        tmp_args_element_name_2 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_43daf0f0e196b98c82d935ebd30d3810->m_frame.f_lineno = 62;
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
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_43daf0f0e196b98c82d935ebd30d3810->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assattr_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__factor2, tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_source_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_assattr_target_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_exp );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = const_float_2_0;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__visiting_param );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_7, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        frame_43daf0f0e196b98c82d935ebd30d3810->m_frame.f_lineno = 64;
        tmp_right_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_log, &PyTuple_GET_ITEM( const_tuple_float_2_0_tuple, 0 ) );

        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_left_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__visiting_param );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 65;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_8 = const_float_1_0;
        tmp_right_name_7 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 65;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 65;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_43daf0f0e196b98c82d935ebd30d3810->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assattr_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assattr_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__factor3, tmp_assattr_name_7 );
        Py_DECREF( tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_right_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_source_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_source_name_12;
        PyObject *tmp_assattr_target_8;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_sqrt );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_6;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_pi );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_43daf0f0e196b98c82d935ebd30d3810->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_left_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_right_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__factor2 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_10 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_left_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__factor3 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = const_float_3_0;
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_right_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__visiting_param );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_11 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_9 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_assattr_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain__factor4_p, tmp_assattr_name_8 );
        Py_DECREF( tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_15;
        PyObject *tmp_source_name_13;
        PyObject *tmp_right_name_14;
        PyObject *tmp_right_name_15;
        PyObject *tmp_assattr_target_9;
        tmp_left_name_14 = const_float_1_0;
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_left_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__visiting_param );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_14 = const_float_1_0;
        tmp_right_name_13 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_15, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_15 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_13 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_14, tmp_right_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_15 = const_float_0_5;
        tmp_assattr_name_9 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_13, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_13 );
        if ( tmp_assattr_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain__factor5, tmp_assattr_name_9 );
        Py_DECREF( tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        PyObject *tmp_source_name_14;
        PyObject *tmp_assattr_target_10;
        tmp_left_name_16 = const_float_2_0;
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_right_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__factor5 );
        if ( tmp_right_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_10 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_assattr_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain__d1, tmp_assattr_name_10 );
        Py_DECREF( tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_left_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_right_name_17;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_18;
        PyObject *tmp_source_name_16;
        PyObject *tmp_right_name_19;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_21;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_right_name_20;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_21;
        PyObject *tmp_source_name_19;
        PyObject *tmp_right_name_22;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_21;
        PyObject *tmp_assattr_target_11;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_7;
        tmp_left_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_pi );
        if ( tmp_left_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_20 = const_float_1_0;
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_right_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__factor5 );
        if ( tmp_right_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_19 );

            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_17 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_20, tmp_right_name_18 );
        Py_DECREF( tmp_right_name_18 );
        if ( tmp_right_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_19 );

            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_18 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_17 );
        Py_DECREF( tmp_left_name_19 );
        Py_DECREF( tmp_right_name_17 );
        if ( tmp_left_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_left_name_18 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_8;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_sin );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );

            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = tmp_mvar_value_9;
        tmp_left_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_pi );
        if ( tmp_left_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_22 = const_float_1_0;
        CHECK_OBJECT( par_self );
        tmp_source_name_19 = par_self;
        tmp_right_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__factor5 );
        if ( tmp_right_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_21 );

            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_20 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_22, tmp_right_name_21 );
        Py_DECREF( tmp_right_name_21 );
        if ( tmp_right_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_21 );

            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_20 );
        Py_DECREF( tmp_left_name_21 );
        Py_DECREF( tmp_right_name_20 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_43daf0f0e196b98c82d935ebd30d3810->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_right_name_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_right_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );

            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_17 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_19 );
        Py_DECREF( tmp_left_name_18 );
        Py_DECREF( tmp_right_name_19 );
        if ( tmp_left_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_left_name_17 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_20 = tmp_mvar_value_10;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_exp );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_17 );

            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_gammaln );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gammaln );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_left_name_17 );
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gammaln" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_11;
        CHECK_OBJECT( par_self );
        tmp_source_name_21 = par_self;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__d1 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_17 );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_43daf0f0e196b98c82d935ebd30d3810->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_17 );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_43daf0f0e196b98c82d935ebd30d3810->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_right_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_right_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_17 );

            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_22 );
        Py_DECREF( tmp_left_name_17 );
        Py_DECREF( tmp_right_name_22 );
        if ( tmp_assattr_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain__factor6, tmp_assattr_name_11 );
        Py_DECREF( tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43daf0f0e196b98c82d935ebd30d3810 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43daf0f0e196b98c82d935ebd30d3810 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_43daf0f0e196b98c82d935ebd30d3810, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_43daf0f0e196b98c82d935ebd30d3810->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_43daf0f0e196b98c82d935ebd30d3810, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_43daf0f0e196b98c82d935ebd30d3810,
        type_description_1,
        par_self,
        par_lb,
        par_ub,
        par_visiting_param,
        par_rand_state
    );


    // Release cached frame.
    if ( frame_43daf0f0e196b98c82d935ebd30d3810 == cache_frame_43daf0f0e196b98c82d935ebd30d3810 )
    {
        Py_DECREF( frame_43daf0f0e196b98c82d935ebd30d3810 );
    }
    cache_frame_43daf0f0e196b98c82d935ebd30d3810 = NULL;

    assertFrameObject( frame_43daf0f0e196b98c82d935ebd30d3810 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_visiting_param );
    Py_DECREF( par_visiting_param );
    par_visiting_param = NULL;

    CHECK_OBJECT( (PyObject *)par_rand_state );
    Py_DECREF( par_rand_state );
    par_rand_state = NULL;

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

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_visiting_param );
    Py_DECREF( par_visiting_param );
    par_visiting_param = NULL;

    CHECK_OBJECT( (PyObject *)par_rand_state );
    Py_DECREF( par_rand_state );
    par_rand_state = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_1___init__ );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_2_visiting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_step = python_pars[ 2 ];
    PyObject *par_temperature = python_pars[ 3 ];
    PyObject *var_dim = NULL;
    PyObject *var_visits = NULL;
    PyObject *var_upper_sample = NULL;
    PyObject *var_lower_sample = NULL;
    PyObject *var_x_visit = NULL;
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *var_visit = NULL;
    PyObject *var_index = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    struct Nuitka_FrameObject *frame_d9c8af54a069d2a1cd7818b317dc00b0;
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
    static struct Nuitka_FrameObject *cache_frame_d9c8af54a069d2a1cd7818b317dc00b0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9c8af54a069d2a1cd7818b317dc00b0, codeobj_d9c8af54a069d2a1cd7818b317dc00b0, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d9c8af54a069d2a1cd7818b317dc00b0 = cache_frame_d9c8af54a069d2a1cd7818b317dc00b0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9c8af54a069d2a1cd7818b317dc00b0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9c8af54a069d2a1cd7818b317dc00b0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_x );
        tmp_source_name_1 = par_x;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dim == NULL );
        var_dim = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_step );
        tmp_compexpr_left_1 = par_step;
        CHECK_OBJECT( var_dim );
        tmp_compexpr_right_1 = var_dim;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT( par_temperature );
            tmp_args_element_name_1 = par_temperature;
            CHECK_OBJECT( var_dim );
            tmp_args_element_name_2 = var_dim;
            frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame.f_lineno = 82;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_visit_fn, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_visits == NULL );
            var_visits = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_rand_state );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame.f_lineno = 83;
            tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_random_sample );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_upper_sample == NULL );
            var_upper_sample = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_rand_state );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame.f_lineno = 84;
            tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_random_sample );
            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_lower_sample == NULL );
            var_lower_sample = tmp_assign_source_4;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_right_name_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_TAIL_LIMIT );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_upper_sample );
            tmp_right_name_1 = var_upper_sample;
            tmp_ass_subvalue_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_visits );
            tmp_ass_subscribed_1 = var_visits;
            CHECK_OBJECT( var_visits );
            tmp_compexpr_left_2 = var_visits;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_TAIL_LIMIT );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 85;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_1 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 85;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_right_name_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_TAIL_LIMIT );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_lower_sample );
            tmp_right_name_2 = var_lower_sample;
            tmp_ass_subvalue_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_visits );
            tmp_ass_subscribed_2 = var_visits;
            CHECK_OBJECT( var_visits );
            tmp_compexpr_left_3 = var_visits;
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_TAIL_LIMIT );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 86;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 86;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_ass_subscript_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 86;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( var_visits );
            tmp_left_name_3 = var_visits;
            CHECK_OBJECT( par_x );
            tmp_right_name_3 = par_x;
            tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 87;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_x_visit == NULL );
            var_x_visit = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( var_x_visit );
            tmp_left_name_4 = var_x_visit;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_lower );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_a == NULL );
            var_a = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_5;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_10;
            PyObject *tmp_right_name_5;
            PyObject *tmp_source_name_11;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 89;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_fmod );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_a );
            tmp_args_element_name_3 = var_a;
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_bound_range );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 89;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame.f_lineno = 89;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_bound_range );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 89;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_b == NULL );
            var_b = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_13;
            PyObject *tmp_right_name_6;
            PyObject *tmp_source_name_14;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 90;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_fmod );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_b );
            tmp_args_element_name_5 = var_b;
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_bound_range );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 90;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame.f_lineno = 90;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_left_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_14 = par_self;
            tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_lower );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 90;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_x_visit;
                assert( old != NULL );
                var_x_visit = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( var_x_visit );
            tmp_assign_source_9 = var_x_visit;
            assert( tmp_inplace_assign_subscr_1__target == NULL );
            Py_INCREF( tmp_assign_source_9 );
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_9;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_15;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_source_name_16;
            PyObject *tmp_source_name_17;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 91;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_15 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_fabs );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_x_visit );
            tmp_left_name_7 = var_x_visit;
            CHECK_OBJECT( par_self );
            tmp_source_name_16 = par_self;
            tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_lower );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 92;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 92;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame.f_lineno = 91;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_compexpr_left_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_17 = par_self;
            tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_MIN_VISIT_BOUND );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_4 );

                exception_lineno = 92;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_10 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_subscr_1__subscript == NULL );
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_10;
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_left_name_8;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_8;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
            tmp_subscribed_name_1 = tmp_inplace_assign_subscr_1__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
            tmp_subscript_name_1 = tmp_inplace_assign_subscr_1__subscript;
            tmp_left_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_8 = const_float_1eminus_10;
            tmp_ass_subvalue_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_8 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
            tmp_ass_subscribed_3 = tmp_inplace_assign_subscr_1__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
            tmp_ass_subscript_3 = tmp_inplace_assign_subscr_1__subscript;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_1 = "ooooooooooooo";
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

        Py_XDECREF( tmp_inplace_assign_subscr_1__subscript );
        tmp_inplace_assign_subscr_1__subscript = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
        tmp_inplace_assign_subscr_1__subscript = NULL;

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 96;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_4;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_8 = par_x;
            frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame.f_lineno = 96;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_copy, call_args );
            }

            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_x_visit == NULL );
            var_x_visit = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            CHECK_OBJECT( par_self );
            tmp_called_instance_5 = par_self;
            CHECK_OBJECT( par_temperature );
            tmp_args_element_name_9 = par_temperature;
            tmp_args_element_name_10 = const_int_pos_1;
            frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame.f_lineno = 97;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_assign_source_12 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_visit_fn, call_args );
            }

            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_visit == NULL );
            var_visit = tmp_assign_source_12;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_18;
            CHECK_OBJECT( var_visit );
            tmp_compexpr_left_5 = var_visit;
            CHECK_OBJECT( par_self );
            tmp_source_name_18 = par_self;
            tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_TAIL_LIMIT );
            if ( tmp_compexpr_right_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "ooooooooooooo";
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
                PyObject *tmp_assign_source_13;
                PyObject *tmp_left_name_9;
                PyObject *tmp_source_name_19;
                PyObject *tmp_right_name_9;
                PyObject *tmp_called_instance_6;
                PyObject *tmp_source_name_20;
                CHECK_OBJECT( par_self );
                tmp_source_name_19 = par_self;
                tmp_left_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_TAIL_LIMIT );
                if ( tmp_left_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 99;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_20 = par_self;
                tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_rand_state );
                if ( tmp_called_instance_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_9 );

                    exception_lineno = 99;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame.f_lineno = 99;
                tmp_right_name_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_random_sample );
                Py_DECREF( tmp_called_instance_6 );
                if ( tmp_right_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_9 );

                    exception_lineno = 99;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_13 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
                Py_DECREF( tmp_left_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 99;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_visit;
                    assert( old != NULL );
                    var_visit = tmp_assign_source_13;
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                PyObject *tmp_operand_name_3;
                PyObject *tmp_source_name_21;
                CHECK_OBJECT( var_visit );
                tmp_compexpr_left_6 = var_visit;
                CHECK_OBJECT( par_self );
                tmp_source_name_21 = par_self;
                tmp_operand_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_TAIL_LIMIT );
                if ( tmp_operand_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
                Py_DECREF( tmp_operand_name_3 );
                if ( tmp_compexpr_right_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                Py_DECREF( tmp_compexpr_right_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;
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
                    PyObject *tmp_assign_source_14;
                    PyObject *tmp_left_name_10;
                    PyObject *tmp_operand_name_4;
                    PyObject *tmp_source_name_22;
                    PyObject *tmp_right_name_10;
                    PyObject *tmp_called_instance_7;
                    PyObject *tmp_source_name_23;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_22 = par_self;
                    tmp_operand_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_TAIL_LIMIT );
                    if ( tmp_operand_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 101;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_left_name_10 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
                    Py_DECREF( tmp_operand_name_4 );
                    if ( tmp_left_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 101;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_23 = par_self;
                    tmp_called_instance_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_rand_state );
                    if ( tmp_called_instance_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_10 );

                        exception_lineno = 101;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame.f_lineno = 101;
                    tmp_right_name_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_random_sample );
                    Py_DECREF( tmp_called_instance_7 );
                    if ( tmp_right_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_10 );

                        exception_lineno = 101;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_14 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
                    Py_DECREF( tmp_left_name_10 );
                    Py_DECREF( tmp_right_name_10 );
                    if ( tmp_assign_source_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 101;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_visit;
                        assert( old != NULL );
                        var_visit = tmp_assign_source_14;
                        Py_DECREF( old );
                    }

                }
                branch_no_3:;
            }
            branch_end_2:;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            CHECK_OBJECT( par_step );
            tmp_left_name_11 = par_step;
            CHECK_OBJECT( var_dim );
            tmp_right_name_11 = var_dim;
            tmp_assign_source_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_index == NULL );
            var_index = tmp_assign_source_15;
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            if ( var_visit == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "visit" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 103;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_12 = var_visit;
            CHECK_OBJECT( par_x );
            tmp_subscribed_name_2 = par_x;
            CHECK_OBJECT( var_index );
            tmp_subscript_name_2 = var_index;
            tmp_right_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_right_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subvalue_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
            Py_DECREF( tmp_right_name_12 );
            if ( tmp_ass_subvalue_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x_visit );
            tmp_ass_subscribed_4 = var_x_visit;
            CHECK_OBJECT( var_index );
            tmp_ass_subscript_4 = var_index;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
            Py_DECREF( tmp_ass_subvalue_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_left_name_13;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_right_name_13;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_source_name_24;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT( var_x_visit );
            tmp_subscribed_name_3 = var_x_visit;
            CHECK_OBJECT( var_index );
            tmp_subscript_name_3 = var_index;
            tmp_left_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_left_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_24 = par_self;
            tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_lower );
            if ( tmp_subscribed_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_13 );

                exception_lineno = 104;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_index );
            tmp_subscript_name_4 = var_index;
            tmp_right_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscribed_name_4 );
            if ( tmp_right_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_13 );

                exception_lineno = 104;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_16 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
            Py_DECREF( tmp_left_name_13 );
            Py_DECREF( tmp_right_name_13 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_a == NULL );
            var_a = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_left_name_14;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_25;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_source_name_26;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_right_name_14;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_source_name_27;
            PyObject *tmp_subscript_name_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 105;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_25 = tmp_mvar_value_5;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_fmod );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_a );
            tmp_args_element_name_11 = var_a;
            CHECK_OBJECT( par_self );
            tmp_source_name_26 = par_self;
            tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_bound_range );
            if ( tmp_subscribed_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 105;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_index );
            tmp_subscript_name_5 = var_index;
            tmp_args_element_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            Py_DECREF( tmp_subscribed_name_5 );
            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 105;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame.f_lineno = 105;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_left_name_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_left_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_27 = par_self;
            tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_bound_range );
            if ( tmp_subscribed_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_14 );

                exception_lineno = 105;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_index );
            tmp_subscript_name_6 = var_index;
            tmp_right_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            Py_DECREF( tmp_subscribed_name_6 );
            if ( tmp_right_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_14 );

                exception_lineno = 105;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
            Py_DECREF( tmp_left_name_14 );
            Py_DECREF( tmp_right_name_14 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_b == NULL );
            var_b = tmp_assign_source_17;
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_left_name_15;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_28;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_source_name_29;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_right_name_15;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_source_name_30;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 106;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_28 = tmp_mvar_value_6;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_fmod );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_b );
            tmp_args_element_name_13 = var_b;
            CHECK_OBJECT( par_self );
            tmp_source_name_29 = par_self;
            tmp_subscribed_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_bound_range );
            if ( tmp_subscribed_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 106;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_index );
            tmp_subscript_name_7 = var_index;
            tmp_args_element_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            Py_DECREF( tmp_subscribed_name_7 );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 106;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame.f_lineno = 106;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                tmp_left_name_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_14 );
            if ( tmp_left_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_30 = par_self;
            tmp_subscribed_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_lower );
            if ( tmp_subscribed_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_15 );

                exception_lineno = 107;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_index );
            tmp_subscript_name_8 = var_index;
            tmp_right_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            Py_DECREF( tmp_subscribed_name_8 );
            if ( tmp_right_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_15 );

                exception_lineno = 107;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subvalue_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
            Py_DECREF( tmp_left_name_15 );
            Py_DECREF( tmp_right_name_15 );
            if ( tmp_ass_subvalue_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x_visit );
            tmp_ass_subscribed_5 = var_x_visit;
            CHECK_OBJECT( var_index );
            tmp_ass_subscript_5 = var_index;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
            Py_DECREF( tmp_ass_subvalue_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_31;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_left_name_16;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_right_name_16;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_source_name_32;
            PyObject *tmp_subscript_name_10;
            PyObject *tmp_source_name_33;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 108;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_31 = tmp_mvar_value_7;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_fabs );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x_visit );
            tmp_subscribed_name_9 = var_x_visit;
            CHECK_OBJECT( var_index );
            tmp_subscript_name_9 = var_index;
            tmp_left_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
            if ( tmp_left_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 108;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_32 = par_self;
            tmp_subscribed_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_lower );
            if ( tmp_subscribed_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_left_name_16 );

                exception_lineno = 108;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_index );
            tmp_subscript_name_10 = var_index;
            tmp_right_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
            Py_DECREF( tmp_subscribed_name_10 );
            if ( tmp_right_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_left_name_16 );

                exception_lineno = 108;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
            Py_DECREF( tmp_left_name_16 );
            Py_DECREF( tmp_right_name_16 );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 108;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame.f_lineno = 108;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_compexpr_left_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_compexpr_left_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_33 = par_self;
            tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_MIN_VISIT_BOUND );
            if ( tmp_compexpr_right_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_7 );

                exception_lineno = 109;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            Py_DECREF( tmp_compexpr_left_7 );
            Py_DECREF( tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_1 = "ooooooooooooo";
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
                PyObject *tmp_assign_source_18;
                CHECK_OBJECT( var_x_visit );
                tmp_assign_source_18 = var_x_visit;
                assert( tmp_inplace_assign_subscr_2__target == NULL );
                Py_INCREF( tmp_assign_source_18 );
                tmp_inplace_assign_subscr_2__target = tmp_assign_source_18;
            }
            {
                PyObject *tmp_assign_source_19;
                CHECK_OBJECT( var_index );
                tmp_assign_source_19 = var_index;
                assert( tmp_inplace_assign_subscr_2__subscript == NULL );
                Py_INCREF( tmp_assign_source_19 );
                tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_19;
            }
            // Tried code:
            {
                PyObject *tmp_ass_subvalue_6;
                PyObject *tmp_left_name_17;
                PyObject *tmp_subscribed_name_11;
                PyObject *tmp_subscript_name_11;
                PyObject *tmp_right_name_17;
                PyObject *tmp_source_name_34;
                PyObject *tmp_ass_subscribed_6;
                PyObject *tmp_ass_subscript_6;
                CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
                tmp_subscribed_name_11 = tmp_inplace_assign_subscr_2__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
                tmp_subscript_name_11 = tmp_inplace_assign_subscr_2__subscript;
                tmp_left_name_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
                if ( tmp_left_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 110;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_3;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_34 = par_self;
                tmp_right_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_MIN_VISIT_BOUND );
                if ( tmp_right_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_17 );

                    exception_lineno = 110;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_3;
                }
                tmp_ass_subvalue_6 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_17, tmp_right_name_17 );
                Py_DECREF( tmp_left_name_17 );
                Py_DECREF( tmp_right_name_17 );
                if ( tmp_ass_subvalue_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 110;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_3;
                }
                CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
                tmp_ass_subscribed_6 = tmp_inplace_assign_subscr_2__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
                tmp_ass_subscript_6 = tmp_inplace_assign_subscr_2__subscript;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
                Py_DECREF( tmp_ass_subvalue_6 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 110;
                    type_description_1 = "ooooooooooooo";
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

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
            tmp_inplace_assign_subscr_2__subscript = NULL;

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

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
            tmp_inplace_assign_subscr_2__subscript = NULL;

            branch_no_4:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9c8af54a069d2a1cd7818b317dc00b0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9c8af54a069d2a1cd7818b317dc00b0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9c8af54a069d2a1cd7818b317dc00b0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9c8af54a069d2a1cd7818b317dc00b0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9c8af54a069d2a1cd7818b317dc00b0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9c8af54a069d2a1cd7818b317dc00b0,
        type_description_1,
        par_self,
        par_x,
        par_step,
        par_temperature,
        var_dim,
        var_visits,
        var_upper_sample,
        var_lower_sample,
        var_x_visit,
        var_a,
        var_b,
        var_visit,
        var_index
    );


    // Release cached frame.
    if ( frame_d9c8af54a069d2a1cd7818b317dc00b0 == cache_frame_d9c8af54a069d2a1cd7818b317dc00b0 )
    {
        Py_DECREF( frame_d9c8af54a069d2a1cd7818b317dc00b0 );
    }
    cache_frame_d9c8af54a069d2a1cd7818b317dc00b0 = NULL;

    assertFrameObject( frame_d9c8af54a069d2a1cd7818b317dc00b0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_x_visit );
    tmp_return_value = var_x_visit;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_2_visiting );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_step );
    Py_DECREF( par_step );
    par_step = NULL;

    CHECK_OBJECT( (PyObject *)par_temperature );
    Py_DECREF( par_temperature );
    par_temperature = NULL;

    CHECK_OBJECT( (PyObject *)var_dim );
    Py_DECREF( var_dim );
    var_dim = NULL;

    Py_XDECREF( var_visits );
    var_visits = NULL;

    Py_XDECREF( var_upper_sample );
    var_upper_sample = NULL;

    Py_XDECREF( var_lower_sample );
    var_lower_sample = NULL;

    CHECK_OBJECT( (PyObject *)var_x_visit );
    Py_DECREF( var_x_visit );
    var_x_visit = NULL;

    CHECK_OBJECT( (PyObject *)var_a );
    Py_DECREF( var_a );
    var_a = NULL;

    CHECK_OBJECT( (PyObject *)var_b );
    Py_DECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_visit );
    var_visit = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

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

    CHECK_OBJECT( (PyObject *)par_step );
    Py_DECREF( par_step );
    par_step = NULL;

    CHECK_OBJECT( (PyObject *)par_temperature );
    Py_DECREF( par_temperature );
    par_temperature = NULL;

    Py_XDECREF( var_dim );
    var_dim = NULL;

    Py_XDECREF( var_visits );
    var_visits = NULL;

    Py_XDECREF( var_upper_sample );
    var_upper_sample = NULL;

    Py_XDECREF( var_lower_sample );
    var_lower_sample = NULL;

    Py_XDECREF( var_x_visit );
    var_x_visit = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_visit );
    var_visit = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_2_visiting );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_3_visit_fn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_temperature = python_pars[ 1 ];
    PyObject *par_dim = python_pars[ 2 ];
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_factor1 = NULL;
    PyObject *var_factor4 = NULL;
    PyObject *var_den = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3de830bd55a05caf2f22df53a2522fe2;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3de830bd55a05caf2f22df53a2522fe2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3de830bd55a05caf2f22df53a2522fe2, codeobj_3de830bd55a05caf2f22df53a2522fe2, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3de830bd55a05caf2f22df53a2522fe2 = cache_frame_3de830bd55a05caf2f22df53a2522fe2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3de830bd55a05caf2f22df53a2522fe2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3de830bd55a05caf2f22df53a2522fe2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_rand_state );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_normal );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = const_str_plain_size;
        CHECK_OBJECT( par_dim );
        tmp_tuple_element_1 = par_dim;
        tmp_dict_value_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_pos_2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_3de830bd55a05caf2f22df53a2522fe2->m_frame.f_lineno = 115;
        tmp_source_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_T );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
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


            type_description_1 = "oooooooo";
            exception_lineno = 115;
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


            type_description_1 = "oooooooo";
            exception_lineno = 115;
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

                    type_description_1 = "oooooooo";
                    exception_lineno = 115;
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

            type_description_1 = "oooooooo";
            exception_lineno = 115;
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
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_x = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_y == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_y = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_exp );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_temperature );
        tmp_args_element_name_2 = par_temperature;
        frame_3de830bd55a05caf2f22df53a2522fe2->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_log, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__visiting_param );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_float_1_0;
        tmp_right_name_1 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_3de830bd55a05caf2f22df53a2522fe2->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_factor1 == NULL );
        var_factor1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__factor4_p );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_factor1 );
        tmp_right_name_3 = var_factor1;
        tmp_assign_source_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_factor4 == NULL );
        var_factor4 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_8;
        PyObject *tmp_source_name_10;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( var_x );
        tmp_left_name_4 = var_x;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_exp );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_left_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__visiting_param );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_float_1_0;
        tmp_operand_name_1 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_7, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_4;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_log );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_left_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__factor6 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 122;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_factor4 );
        tmp_right_name_7 = var_factor4;
        tmp_args_element_name_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 122;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_3de830bd55a05caf2f22df53a2522fe2->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_right_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = const_float_3_0;
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_right_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__visiting_param );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 122;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_8 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 122;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 122;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_3de830bd55a05caf2f22df53a2522fe2->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_left_name_4;
        var_x = tmp_assign_source_8;

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_right_name_10;
        PyObject *tmp_right_name_11;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_source_name_15;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_5;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_exp );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_left_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__visiting_param );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_10 = const_float_1_0;
        tmp_left_name_11 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_12, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_12 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_11 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_6;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_log );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_11 );
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_7;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_7 = var_y;
        frame_3de830bd55a05caf2f22df53a2522fe2->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_fabs, call_args );
        }

        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_11 );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_3de830bd55a05caf2f22df53a2522fe2->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_right_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_13 = const_float_3_0;
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_right_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__visiting_param );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 125;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_12 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 125;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_10 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_3de830bd55a05caf2f22df53a2522fe2->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_den == NULL );
        var_den = tmp_assign_source_9;
    }
    {
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT( var_x );
        tmp_left_name_14 = var_x;
        CHECK_OBJECT( var_den );
        tmp_right_name_14 = var_den;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3de830bd55a05caf2f22df53a2522fe2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3de830bd55a05caf2f22df53a2522fe2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3de830bd55a05caf2f22df53a2522fe2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3de830bd55a05caf2f22df53a2522fe2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3de830bd55a05caf2f22df53a2522fe2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3de830bd55a05caf2f22df53a2522fe2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3de830bd55a05caf2f22df53a2522fe2,
        type_description_1,
        par_self,
        par_temperature,
        par_dim,
        var_x,
        var_y,
        var_factor1,
        var_factor4,
        var_den
    );


    // Release cached frame.
    if ( frame_3de830bd55a05caf2f22df53a2522fe2 == cache_frame_3de830bd55a05caf2f22df53a2522fe2 )
    {
        Py_DECREF( frame_3de830bd55a05caf2f22df53a2522fe2 );
    }
    cache_frame_3de830bd55a05caf2f22df53a2522fe2 = NULL;

    assertFrameObject( frame_3de830bd55a05caf2f22df53a2522fe2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_3_visit_fn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_temperature );
    Py_DECREF( par_temperature );
    par_temperature = NULL;

    CHECK_OBJECT( (PyObject *)par_dim );
    Py_DECREF( par_dim );
    par_dim = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_factor1 );
    Py_DECREF( var_factor1 );
    var_factor1 = NULL;

    CHECK_OBJECT( (PyObject *)var_factor4 );
    Py_DECREF( var_factor4 );
    var_factor4 = NULL;

    CHECK_OBJECT( (PyObject *)var_den );
    Py_DECREF( var_den );
    var_den = NULL;

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

    CHECK_OBJECT( (PyObject *)par_temperature );
    Py_DECREF( par_temperature );
    par_temperature = NULL;

    CHECK_OBJECT( (PyObject *)par_dim );
    Py_DECREF( par_dim );
    par_dim = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_factor1 );
    var_factor1 = NULL;

    Py_XDECREF( var_factor4 );
    var_factor4 = NULL;

    Py_XDECREF( var_den );
    var_den = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_3_visit_fn );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_lower = python_pars[ 1 ];
    PyObject *par_upper = python_pars[ 2 ];
    PyObject *par_callback = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_bd1557cb9e687367b3acab8eaf867508;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bd1557cb9e687367b3acab8eaf867508 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bd1557cb9e687367b3acab8eaf867508, codeobj_bd1557cb9e687367b3acab8eaf867508, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bd1557cb9e687367b3acab8eaf867508 = cache_frame_bd1557cb9e687367b3acab8eaf867508;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bd1557cb9e687367b3acab8eaf867508 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bd1557cb9e687367b3acab8eaf867508 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ebest, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_current_energy, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_current_location, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_xbest, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_lower );
        tmp_assattr_name_5 = par_lower;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_lower, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_upper );
        tmp_assattr_name_6 = par_upper;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_upper, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( par_callback );
        tmp_assattr_name_7 = par_callback;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_callback, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd1557cb9e687367b3acab8eaf867508 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd1557cb9e687367b3acab8eaf867508 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bd1557cb9e687367b3acab8eaf867508, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bd1557cb9e687367b3acab8eaf867508->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bd1557cb9e687367b3acab8eaf867508, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd1557cb9e687367b3acab8eaf867508,
        type_description_1,
        par_self,
        par_lower,
        par_upper,
        par_callback
    );


    // Release cached frame.
    if ( frame_bd1557cb9e687367b3acab8eaf867508 == cache_frame_bd1557cb9e687367b3acab8eaf867508 )
    {
        Py_DECREF( frame_bd1557cb9e687367b3acab8eaf867508 );
    }
    cache_frame_bd1557cb9e687367b3acab8eaf867508 = NULL;

    assertFrameObject( frame_bd1557cb9e687367b3acab8eaf867508 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_4___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_lower );
    Py_DECREF( par_lower );
    par_lower = NULL;

    CHECK_OBJECT( (PyObject *)par_upper );
    Py_DECREF( par_upper );
    par_upper = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

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

    CHECK_OBJECT( (PyObject *)par_lower );
    Py_DECREF( par_lower );
    par_lower = NULL;

    CHECK_OBJECT( (PyObject *)par_upper );
    Py_DECREF( par_upper );
    par_upper = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_4___init__ );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_5_reset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_func_wrapper = python_pars[ 1 ];
    PyObject *par_rand_state = python_pars[ 2 ];
    PyObject *par_x0 = python_pars[ 3 ];
    PyObject *var_init_error = NULL;
    PyObject *var_reinit_counter = NULL;
    PyObject *var_message = NULL;
    struct Nuitka_FrameObject *frame_6f2cd03671bf5d126f54bf0267eeef45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6f2cd03671bf5d126f54bf0267eeef45 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6f2cd03671bf5d126f54bf0267eeef45, codeobj_6f2cd03671bf5d126f54bf0267eeef45, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6f2cd03671bf5d126f54bf0267eeef45 = cache_frame_6f2cd03671bf5d126f54bf0267eeef45;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6f2cd03671bf5d126f54bf0267eeef45 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6f2cd03671bf5d126f54bf0267eeef45 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_x0 );
        tmp_compexpr_left_1 = par_x0;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_right_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lower );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 167;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_rand_state );
            tmp_source_name_2 = par_rand_state;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_random_sample );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 167;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_lower );
            if ( tmp_len_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 168;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
            Py_DECREF( tmp_len_arg_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 168;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_6f2cd03671bf5d126f54bf0267eeef45->m_frame.f_lineno = 167;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 167;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_upper );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 168;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_lower );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 168;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 168;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 167;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 167;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_current_location, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 167;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 170;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_2 = par_x0;
            frame_6f2cd03671bf5d126f54bf0267eeef45->m_frame.f_lineno = 170;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_copy, call_args );
            }

            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 170;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_current_location, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 170;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_True;
        assert( var_init_error == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_init_error = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_0;
        assert( var_reinit_counter == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_reinit_counter = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        if ( var_init_error == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "init_error" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 173;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_1 = var_init_error;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "ooooooo";
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
        goto loop_end_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_func_wrapper );
        tmp_source_name_6 = par_func_wrapper;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_fun );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_current_location );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_6f2cd03671bf5d126f54bf0267eeef45->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_current_energy, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_current_energy );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_f55fc8480c626138c48ce38cabb5776d;
            frame_6f2cd03671bf5d126f54bf0267eeef45->m_frame.f_lineno = 176;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 176;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_10;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_12;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_2;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_isfinite );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_current_energy );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_6f2cd03671bf5d126f54bf0267eeef45->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooo";
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
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_3;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_isnan );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_current_energy );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_6f2cd03671bf5d126f54bf0267eeef45->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 177;
            type_description_1 = "ooooooo";
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
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_13;
            PyObject *tmp_mvar_value_4;
            if ( var_reinit_counter == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reinit_counter" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 179;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_3 = var_reinit_counter;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_EnergyState );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EnergyState );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EnergyState" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 179;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_13 = tmp_mvar_value_4;
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_MAX_REINIT_COUNT );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooooo";
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
            Py_XDECREF( var_init_error );
            var_init_error = NULL;

            Py_XDECREF( var_message );
            var_message = NULL;

            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_4145064d267761e8d26ea30530012679;
                frame_6f2cd03671bf5d126f54bf0267eeef45->m_frame.f_lineno = 186;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 186;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_left_name_4;
            PyObject *tmp_source_name_14;
            PyObject *tmp_right_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_15;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_16;
            PyObject *tmp_source_name_17;
            PyObject *tmp_right_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_source_name_18;
            PyObject *tmp_right_name_6;
            PyObject *tmp_source_name_19;
            PyObject *tmp_assattr_target_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_14 = par_self;
            tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_lower );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_rand_state );
            tmp_source_name_15 = par_rand_state;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_random_sample );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 187;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_17 = par_self;
            tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_lower );
            if ( tmp_source_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 188;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_size );
            Py_DECREF( tmp_source_name_16 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 188;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_6f2cd03671bf5d126f54bf0267eeef45->m_frame.f_lineno = 187;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 187;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_18 = par_self;
            tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_upper );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 188;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_19 = par_self;
            tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_lower );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );
                Py_DECREF( tmp_left_name_5 );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 188;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 188;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 187;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assattr_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_current_location, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            if ( var_reinit_counter == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reinit_counter" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 189;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_7 = var_reinit_counter;
            tmp_right_name_7 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = tmp_left_name_7;
            var_reinit_counter = tmp_assign_source_3;

        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = Py_False;
            {
                PyObject *old = var_init_error;
                var_init_error = tmp_assign_source_4;
                Py_INCREF( var_init_error );
                Py_XDECREF( old );
            }

        }
        branch_end_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_20;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_21;
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_ebest );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_4 );
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
        CHECK_OBJECT( par_self );
        tmp_source_name_21 = par_self;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_xbest );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_5 );
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_source_name_22;
            PyObject *tmp_assattr_target_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_22 = par_self;
            tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_current_energy );
            if ( tmp_assattr_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_5 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_ebest, tmp_assattr_name_5 );
            Py_DECREF( tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_23;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_24;
            PyObject *tmp_assattr_target_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 195;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_23 = tmp_mvar_value_5;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_copy );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_24 = par_self;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_current_location );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 195;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_6f2cd03671bf5d126f54bf0267eeef45->m_frame.f_lineno = 195;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_assattr_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_assattr_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_6 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_xbest, tmp_assattr_name_6 );
            Py_DECREF( tmp_assattr_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_6:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f2cd03671bf5d126f54bf0267eeef45 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f2cd03671bf5d126f54bf0267eeef45 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6f2cd03671bf5d126f54bf0267eeef45, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6f2cd03671bf5d126f54bf0267eeef45->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6f2cd03671bf5d126f54bf0267eeef45, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6f2cd03671bf5d126f54bf0267eeef45,
        type_description_1,
        par_self,
        par_func_wrapper,
        par_rand_state,
        par_x0,
        var_init_error,
        var_reinit_counter,
        var_message
    );


    // Release cached frame.
    if ( frame_6f2cd03671bf5d126f54bf0267eeef45 == cache_frame_6f2cd03671bf5d126f54bf0267eeef45 )
    {
        Py_DECREF( frame_6f2cd03671bf5d126f54bf0267eeef45 );
    }
    cache_frame_6f2cd03671bf5d126f54bf0267eeef45 = NULL;

    assertFrameObject( frame_6f2cd03671bf5d126f54bf0267eeef45 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_5_reset );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_func_wrapper );
    Py_DECREF( par_func_wrapper );
    par_func_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)par_rand_state );
    Py_DECREF( par_rand_state );
    par_rand_state = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    Py_XDECREF( var_init_error );
    var_init_error = NULL;

    Py_XDECREF( var_reinit_counter );
    var_reinit_counter = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func_wrapper );
    Py_DECREF( par_func_wrapper );
    par_func_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)par_rand_state );
    Py_DECREF( par_rand_state );
    par_rand_state = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    Py_XDECREF( var_init_error );
    var_init_error = NULL;

    Py_XDECREF( var_reinit_counter );
    var_reinit_counter = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_5_reset );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_6_update_best( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_e = python_pars[ 1 ];
    PyObject *par_x = python_pars[ 2 ];
    PyObject *par_context = python_pars[ 3 ];
    PyObject *var_val = NULL;
    struct Nuitka_FrameObject *frame_40b8622bb8c10eb5cfc7a2c84a852ad3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_40b8622bb8c10eb5cfc7a2c84a852ad3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_40b8622bb8c10eb5cfc7a2c84a852ad3, codeobj_40b8622bb8c10eb5cfc7a2c84a852ad3, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_40b8622bb8c10eb5cfc7a2c84a852ad3 = cache_frame_40b8622bb8c10eb5cfc7a2c84a852ad3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_40b8622bb8c10eb5cfc7a2c84a852ad3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_40b8622bb8c10eb5cfc7a2c84a852ad3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_e );
        tmp_assattr_name_1 = par_e;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ebest, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 200;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_40b8622bb8c10eb5cfc7a2c84a852ad3->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_copy, call_args );
        }

        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_xbest, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_callback );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( par_self );
            tmp_called_instance_2 = par_self;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_2 = par_x;
            CHECK_OBJECT( par_e );
            tmp_args_element_name_3 = par_e;
            CHECK_OBJECT( par_context );
            tmp_args_element_name_4 = par_context;
            frame_40b8622bb8c10eb5cfc7a2c84a852ad3->m_frame.f_lineno = 202;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_callback, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 202;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_val == NULL );
            var_val = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_val );
            tmp_compexpr_left_2 = var_val;
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
                nuitka_bool tmp_condition_result_3;
                int tmp_truth_name_1;
                CHECK_OBJECT( var_val );
                tmp_truth_name_1 = CHECK_IF_TRUE( var_val );
                if ( tmp_truth_name_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 204;
                    type_description_1 = "ooooo";
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
                tmp_return_value = const_str_digest_0ef0ff4d3b48a18b087142d7e4a5e41c;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                branch_no_3:;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_40b8622bb8c10eb5cfc7a2c84a852ad3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_40b8622bb8c10eb5cfc7a2c84a852ad3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_40b8622bb8c10eb5cfc7a2c84a852ad3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_40b8622bb8c10eb5cfc7a2c84a852ad3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_40b8622bb8c10eb5cfc7a2c84a852ad3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_40b8622bb8c10eb5cfc7a2c84a852ad3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_40b8622bb8c10eb5cfc7a2c84a852ad3,
        type_description_1,
        par_self,
        par_e,
        par_x,
        par_context,
        var_val
    );


    // Release cached frame.
    if ( frame_40b8622bb8c10eb5cfc7a2c84a852ad3 == cache_frame_40b8622bb8c10eb5cfc7a2c84a852ad3 )
    {
        Py_DECREF( frame_40b8622bb8c10eb5cfc7a2c84a852ad3 );
    }
    cache_frame_40b8622bb8c10eb5cfc7a2c84a852ad3 = NULL;

    assertFrameObject( frame_40b8622bb8c10eb5cfc7a2c84a852ad3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_6_update_best );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_context );
    Py_DECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_context );
    Py_DECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_6_update_best );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_7_update_current( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_e = python_pars[ 1 ];
    PyObject *par_x = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_72f5e3969bf76e0e8e9e7aa8d1e2254f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_72f5e3969bf76e0e8e9e7aa8d1e2254f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_72f5e3969bf76e0e8e9e7aa8d1e2254f, codeobj_72f5e3969bf76e0e8e9e7aa8d1e2254f, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_72f5e3969bf76e0e8e9e7aa8d1e2254f = cache_frame_72f5e3969bf76e0e8e9e7aa8d1e2254f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_72f5e3969bf76e0e8e9e7aa8d1e2254f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_72f5e3969bf76e0e8e9e7aa8d1e2254f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_e );
        tmp_assattr_name_1 = par_e;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_current_energy, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 210;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_72f5e3969bf76e0e8e9e7aa8d1e2254f->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_copy, call_args );
        }

        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_current_location, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72f5e3969bf76e0e8e9e7aa8d1e2254f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72f5e3969bf76e0e8e9e7aa8d1e2254f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_72f5e3969bf76e0e8e9e7aa8d1e2254f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_72f5e3969bf76e0e8e9e7aa8d1e2254f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_72f5e3969bf76e0e8e9e7aa8d1e2254f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_72f5e3969bf76e0e8e9e7aa8d1e2254f,
        type_description_1,
        par_self,
        par_e,
        par_x
    );


    // Release cached frame.
    if ( frame_72f5e3969bf76e0e8e9e7aa8d1e2254f == cache_frame_72f5e3969bf76e0e8e9e7aa8d1e2254f )
    {
        Py_DECREF( frame_72f5e3969bf76e0e8e9e7aa8d1e2254f );
    }
    cache_frame_72f5e3969bf76e0e8e9e7aa8d1e2254f = NULL;

    assertFrameObject( frame_72f5e3969bf76e0e8e9e7aa8d1e2254f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_7_update_current );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_7_update_current );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_acceptance_param = python_pars[ 1 ];
    PyObject *par_visit_dist = python_pars[ 2 ];
    PyObject *par_func_wrapper = python_pars[ 3 ];
    PyObject *par_minimizer_wrapper = python_pars[ 4 ];
    PyObject *par_rand_state = python_pars[ 5 ];
    PyObject *par_energy_state = python_pars[ 6 ];
    struct Nuitka_FrameObject *frame_efad8436be4c3991b5139ea10bbdbb04;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_efad8436be4c3991b5139ea10bbdbb04 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_efad8436be4c3991b5139ea10bbdbb04, codeobj_efad8436be4c3991b5139ea10bbdbb04, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_efad8436be4c3991b5139ea10bbdbb04 = cache_frame_efad8436be4c3991b5139ea10bbdbb04;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_efad8436be4c3991b5139ea10bbdbb04 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_efad8436be4c3991b5139ea10bbdbb04 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_energy_state );
        tmp_source_name_1 = par_energy_state;
        tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_current_energy );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_emin, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_energy_state );
        tmp_source_name_3 = par_energy_state;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_current_location );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_efad8436be4c3991b5139ea10bbdbb04->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_xmin, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_energy_state );
        tmp_assattr_name_3 = par_energy_state;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_energy_state, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_acceptance_param );
        tmp_assattr_name_4 = par_acceptance_param;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_acceptance_param, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_visit_dist );
        tmp_assattr_name_5 = par_visit_dist;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_visit_dist, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_func_wrapper );
        tmp_assattr_name_6 = par_func_wrapper;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_func_wrapper, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( par_minimizer_wrapper );
        tmp_assattr_name_7 = par_minimizer_wrapper;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_minimizer_wrapper, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_not_improved_idx, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = const_int_pos_1000;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_not_improved_max_idx, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT( par_rand_state );
        tmp_assattr_name_10 = par_rand_state;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain__rand_state, tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_name_11 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_temperature_step, tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_assattr_target_12;
        tmp_left_name_1 = const_int_pos_100;
        CHECK_OBJECT( par_energy_state );
        tmp_source_name_4 = par_energy_state;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_current_location );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_12 = BINARY_OPERATION_MUL_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        assert( !(tmp_assattr_name_12 == NULL) );
        CHECK_OBJECT( par_self );
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_K, tmp_assattr_name_12 );
        Py_DECREF( tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_efad8436be4c3991b5139ea10bbdbb04 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_efad8436be4c3991b5139ea10bbdbb04 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_efad8436be4c3991b5139ea10bbdbb04, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_efad8436be4c3991b5139ea10bbdbb04->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_efad8436be4c3991b5139ea10bbdbb04, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_efad8436be4c3991b5139ea10bbdbb04,
        type_description_1,
        par_self,
        par_acceptance_param,
        par_visit_dist,
        par_func_wrapper,
        par_minimizer_wrapper,
        par_rand_state,
        par_energy_state
    );


    // Release cached frame.
    if ( frame_efad8436be4c3991b5139ea10bbdbb04 == cache_frame_efad8436be4c3991b5139ea10bbdbb04 )
    {
        Py_DECREF( frame_efad8436be4c3991b5139ea10bbdbb04 );
    }
    cache_frame_efad8436be4c3991b5139ea10bbdbb04 = NULL;

    assertFrameObject( frame_efad8436be4c3991b5139ea10bbdbb04 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_acceptance_param );
    Py_DECREF( par_acceptance_param );
    par_acceptance_param = NULL;

    CHECK_OBJECT( (PyObject *)par_visit_dist );
    Py_DECREF( par_visit_dist );
    par_visit_dist = NULL;

    CHECK_OBJECT( (PyObject *)par_func_wrapper );
    Py_DECREF( par_func_wrapper );
    par_func_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)par_minimizer_wrapper );
    Py_DECREF( par_minimizer_wrapper );
    par_minimizer_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)par_rand_state );
    Py_DECREF( par_rand_state );
    par_rand_state = NULL;

    CHECK_OBJECT( (PyObject *)par_energy_state );
    Py_DECREF( par_energy_state );
    par_energy_state = NULL;

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

    CHECK_OBJECT( (PyObject *)par_acceptance_param );
    Py_DECREF( par_acceptance_param );
    par_acceptance_param = NULL;

    CHECK_OBJECT( (PyObject *)par_visit_dist );
    Py_DECREF( par_visit_dist );
    par_visit_dist = NULL;

    CHECK_OBJECT( (PyObject *)par_func_wrapper );
    Py_DECREF( par_func_wrapper );
    par_func_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)par_minimizer_wrapper );
    Py_DECREF( par_minimizer_wrapper );
    par_minimizer_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)par_rand_state );
    Py_DECREF( par_rand_state );
    par_rand_state = NULL;

    CHECK_OBJECT( (PyObject *)par_energy_state );
    Py_DECREF( par_energy_state );
    par_energy_state = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_8___init__ );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_9_accept_reject( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_j = python_pars[ 1 ];
    PyObject *par_e = python_pars[ 2 ];
    PyObject *par_x_visit = python_pars[ 3 ];
    PyObject *var_r = NULL;
    PyObject *var_pqv_temp = NULL;
    PyObject *var_pqv = NULL;
    struct Nuitka_FrameObject *frame_1f49d0c1c9217bde89470597f26b3705;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1f49d0c1c9217bde89470597f26b3705 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1f49d0c1c9217bde89470597f26b3705, codeobj_1f49d0c1c9217bde89470597f26b3705, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1f49d0c1c9217bde89470597f26b3705 = cache_frame_1f49d0c1c9217bde89470597f26b3705;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f49d0c1c9217bde89470597f26b3705 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f49d0c1c9217bde89470597f26b3705 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__rand_state );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_1f49d0c1c9217bde89470597f26b3705->m_frame.f_lineno = 259;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_random_sample );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_acceptance_param );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 260;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_float_1_0;
        tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_3, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 260;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_e );
        tmp_left_name_4 = par_e;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_energy_state );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_current_energy );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 260;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_temperature_step );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_float_1_0;
        tmp_right_name_4 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pqv_temp == NULL );
        var_pqv_temp = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_pqv_temp );
        tmp_compexpr_left_1 = var_pqv_temp;
        tmp_compexpr_right_1 = const_float_0_0;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
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
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_float_0_0;
            assert( var_pqv == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_pqv = tmp_assign_source_3;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_6;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_right_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_source_name_7;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 266;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_exp );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 266;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_pqv_temp );
            tmp_args_element_name_2 = var_pqv_temp;
            frame_1f49d0c1c9217bde89470597f26b3705->m_frame.f_lineno = 266;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_left_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_log, call_args );
            }

            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 266;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_7 = const_float_1_0;
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_acceptance_param );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 267;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_6 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 267;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 266;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_1f49d0c1c9217bde89470597f26b3705->m_frame.f_lineno = 266;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_pqv == NULL );
            var_pqv = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_r );
        tmp_compexpr_left_2 = var_r;
        CHECK_OBJECT( var_pqv );
        tmp_compexpr_right_2 = var_pqv;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_energy_state );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_e );
            tmp_args_element_name_3 = par_e;
            CHECK_OBJECT( par_x_visit );
            tmp_args_element_name_4 = par_x_visit;
            frame_1f49d0c1c9217bde89470597f26b3705->m_frame.f_lineno = 270;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_update_current, call_args );
            }

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_10;
            PyObject *tmp_source_name_11;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 271;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_copy );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 271;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_energy_state );
            if ( tmp_source_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 271;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_current_location );
            Py_DECREF( tmp_source_name_10 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 271;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_1f49d0c1c9217bde89470597f26b3705->m_frame.f_lineno = 271;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 271;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_xmin, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 271;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_not_improved_idx );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_not_improved_max_idx );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
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
            nuitka_bool tmp_condition_result_4;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_14;
            PyObject *tmp_source_name_15;
            PyObject *tmp_source_name_16;
            CHECK_OBJECT( par_j );
            tmp_compexpr_left_4 = par_j;
            tmp_compexpr_right_4 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
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
            CHECK_OBJECT( par_self );
            tmp_source_name_15 = par_self;
            tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_energy_state );
            if ( tmp_source_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_current_energy );
            Py_DECREF( tmp_source_name_14 );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_16 = par_self;
            tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_emin );
            if ( tmp_compexpr_right_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_5 );

                exception_lineno = 275;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            Py_DECREF( tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_4 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_4 = tmp_or_left_value_1;
            or_end_1:;
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
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_source_name_17;
                PyObject *tmp_source_name_18;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT( par_self );
                tmp_source_name_18 = par_self;
                tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_energy_state );
                if ( tmp_source_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 276;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_current_energy );
                Py_DECREF( tmp_source_name_17 );
                if ( tmp_assattr_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 276;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_emin, tmp_assattr_name_2 );
                Py_DECREF( tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 276;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assattr_name_3;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_19;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_source_name_20;
                PyObject *tmp_source_name_21;
                PyObject *tmp_assattr_target_3;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 277;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_19 = tmp_mvar_value_4;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_copy );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 277;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_21 = par_self;
                tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_energy_state );
                if ( tmp_source_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 277;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_current_location );
                Py_DECREF( tmp_source_name_20 );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 277;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                frame_1f49d0c1c9217bde89470597f26b3705->m_frame.f_lineno = 277;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_assattr_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 277;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_assattr_target_3 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_xmin, tmp_assattr_name_3 );
                Py_DECREF( tmp_assattr_name_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 277;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_4:;
        }
        branch_no_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f49d0c1c9217bde89470597f26b3705 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f49d0c1c9217bde89470597f26b3705 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f49d0c1c9217bde89470597f26b3705, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f49d0c1c9217bde89470597f26b3705->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f49d0c1c9217bde89470597f26b3705, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f49d0c1c9217bde89470597f26b3705,
        type_description_1,
        par_self,
        par_j,
        par_e,
        par_x_visit,
        var_r,
        var_pqv_temp,
        var_pqv
    );


    // Release cached frame.
    if ( frame_1f49d0c1c9217bde89470597f26b3705 == cache_frame_1f49d0c1c9217bde89470597f26b3705 )
    {
        Py_DECREF( frame_1f49d0c1c9217bde89470597f26b3705 );
    }
    cache_frame_1f49d0c1c9217bde89470597f26b3705 = NULL;

    assertFrameObject( frame_1f49d0c1c9217bde89470597f26b3705 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_9_accept_reject );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_j );
    Py_DECREF( par_j );
    par_j = NULL;

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    CHECK_OBJECT( (PyObject *)par_x_visit );
    Py_DECREF( par_x_visit );
    par_x_visit = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)var_pqv_temp );
    Py_DECREF( var_pqv_temp );
    var_pqv_temp = NULL;

    CHECK_OBJECT( (PyObject *)var_pqv );
    Py_DECREF( var_pqv );
    var_pqv = NULL;

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

    CHECK_OBJECT( (PyObject *)par_j );
    Py_DECREF( par_j );
    par_j = NULL;

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    CHECK_OBJECT( (PyObject *)par_x_visit );
    Py_DECREF( par_x_visit );
    par_x_visit = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_pqv_temp );
    var_pqv_temp = NULL;

    Py_XDECREF( var_pqv );
    var_pqv = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_9_accept_reject );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_10_run( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_step = python_pars[ 1 ];
    PyObject *par_temperature = python_pars[ 2 ];
    PyObject *var_j = NULL;
    PyObject *var_x_visit = NULL;
    PyObject *var_e = NULL;
    PyObject *var_val = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_623e1a3932aeb28b1953747f4212a15e;
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
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_623e1a3932aeb28b1953747f4212a15e = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_623e1a3932aeb28b1953747f4212a15e, codeobj_623e1a3932aeb28b1953747f4212a15e, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_623e1a3932aeb28b1953747f4212a15e = cache_frame_623e1a3932aeb28b1953747f4212a15e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_623e1a3932aeb28b1953747f4212a15e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_623e1a3932aeb28b1953747f4212a15e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_temperature );
        tmp_left_name_1 = par_temperature;
        CHECK_OBJECT( par_step );
        tmp_left_name_2 = par_step;
        tmp_right_name_2 = const_int_pos_1;
        tmp_float_arg_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_float_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = TO_FLOAT( tmp_float_arg_1 );
        Py_DECREF( tmp_float_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_temperature_step, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_not_improved_idx );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_3 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_3 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_2 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_not_improved_idx, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_energy_state );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_current_location );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_2;
        tmp_xrange_low_1 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
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
                type_description_1 = "ooooooo";
                exception_lineno = 282;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_5;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_j );
        tmp_compexpr_left_1 = var_j;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "ooooooo";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_step );
            tmp_compexpr_left_2 = par_step;
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 284;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
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
                PyObject *tmp_assattr_name_3;
                PyObject *tmp_assattr_target_3;
                tmp_assattr_name_3 = Py_True;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_3 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_energy_state_improved, tmp_assattr_name_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 285;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assattr_name_4;
                PyObject *tmp_assattr_target_4;
                tmp_assattr_name_4 = Py_False;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_4 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_energy_state_improved, tmp_assattr_name_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 287;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
            }
            branch_end_2:;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_visit_dist );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_visiting );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_energy_state );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_current_location );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_j );
        tmp_args_element_name_2 = var_j;
        CHECK_OBJECT( par_temperature );
        tmp_args_element_name_3 = par_temperature;
        frame_623e1a3932aeb28b1953747f4212a15e->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_x_visit;
            var_x_visit = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_func_wrapper );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_x_visit );
        tmp_args_element_name_4 = var_x_visit;
        frame_623e1a3932aeb28b1953747f4212a15e->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fun, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( var_e );
        tmp_compexpr_left_3 = var_e;
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_energy_state );
        if ( tmp_source_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_current_energy );
        Py_DECREF( tmp_source_name_10 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_12;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_energy_state );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 294;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_e );
            tmp_args_element_name_5 = var_e;
            CHECK_OBJECT( var_x_visit );
            tmp_args_element_name_6 = var_x_visit;
            frame_623e1a3932aeb28b1953747f4212a15e->m_frame.f_lineno = 294;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_update_current, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 294;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_13;
            PyObject *tmp_source_name_14;
            CHECK_OBJECT( var_e );
            tmp_compexpr_left_4 = var_e;
            CHECK_OBJECT( par_self );
            tmp_source_name_14 = par_self;
            tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_energy_state );
            if ( tmp_source_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ebest );
            Py_DECREF( tmp_source_name_13 );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "ooooooo";
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
                PyObject *tmp_assign_source_8;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_source_name_15;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                CHECK_OBJECT( par_self );
                tmp_source_name_15 = par_self;
                tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_energy_state );
                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 296;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_e );
                tmp_args_element_name_7 = var_e;
                CHECK_OBJECT( var_x_visit );
                tmp_args_element_name_8 = var_x_visit;
                tmp_args_element_name_9 = const_int_0;
                frame_623e1a3932aeb28b1953747f4212a15e->m_frame.f_lineno = 296;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                    tmp_assign_source_8 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain_update_best, call_args );
                }

                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 296;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_val;
                    var_val = tmp_assign_source_8;
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT( var_val );
                tmp_compexpr_left_5 = var_val;
                tmp_compexpr_right_5 = Py_None;
                tmp_condition_result_5 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    int tmp_truth_name_1;
                    CHECK_OBJECT( var_val );
                    tmp_truth_name_1 = CHECK_IF_TRUE( var_val );
                    if ( tmp_truth_name_1 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 298;
                        type_description_1 = "ooooooo";
                        goto try_except_handler_4;
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
                    CHECK_OBJECT( var_val );
                    tmp_return_value = var_val;
                    Py_INCREF( tmp_return_value );
                    goto try_return_handler_4;
                    branch_no_6:;
                }
                branch_no_5:;
            }
            {
                PyObject *tmp_assattr_name_5;
                PyObject *tmp_assattr_target_5;
                tmp_assattr_name_5 = Py_True;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_5 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_energy_state_improved, tmp_assattr_name_5 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 300;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
            }
            {
                PyObject *tmp_assattr_name_6;
                PyObject *tmp_assattr_target_6;
                tmp_assattr_name_6 = const_int_0;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_6 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_not_improved_idx, tmp_assattr_name_6 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 301;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
            }
            branch_no_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            CHECK_OBJECT( par_self );
            tmp_called_instance_4 = par_self;
            CHECK_OBJECT( var_j );
            tmp_args_element_name_10 = var_j;
            CHECK_OBJECT( var_e );
            tmp_args_element_name_11 = var_e;
            CHECK_OBJECT( var_x_visit );
            tmp_args_element_name_12 = var_x_visit;
            frame_623e1a3932aeb28b1953747f4212a15e->m_frame.f_lineno = 304;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_4, const_str_plain_accept_reject, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_3:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_source_name_16;
        PyObject *tmp_source_name_17;
        PyObject *tmp_source_name_18;
        PyObject *tmp_source_name_19;
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_func_wrapper );
        if ( tmp_source_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_nfev );
        Py_DECREF( tmp_source_name_16 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_19 = par_self;
        tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_func_wrapper );
        if ( tmp_source_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 305;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_maxfun );
        Py_DECREF( tmp_source_name_18 );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 305;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
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
        tmp_return_value = const_str_digest_ca5a5a5f1123c4fe5aee39177534d641;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_4;
        branch_no_7:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_623e1a3932aeb28b1953747f4212a15e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_623e1a3932aeb28b1953747f4212a15e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_623e1a3932aeb28b1953747f4212a15e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_623e1a3932aeb28b1953747f4212a15e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_623e1a3932aeb28b1953747f4212a15e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_623e1a3932aeb28b1953747f4212a15e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_623e1a3932aeb28b1953747f4212a15e,
        type_description_1,
        par_self,
        par_step,
        par_temperature,
        var_j,
        var_x_visit,
        var_e,
        var_val
    );


    // Release cached frame.
    if ( frame_623e1a3932aeb28b1953747f4212a15e == cache_frame_623e1a3932aeb28b1953747f4212a15e )
    {
        Py_DECREF( frame_623e1a3932aeb28b1953747f4212a15e );
    }
    cache_frame_623e1a3932aeb28b1953747f4212a15e = NULL;

    assertFrameObject( frame_623e1a3932aeb28b1953747f4212a15e );

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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_10_run );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_step );
    Py_DECREF( par_step );
    par_step = NULL;

    CHECK_OBJECT( (PyObject *)par_temperature );
    Py_DECREF( par_temperature );
    par_temperature = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_x_visit );
    var_x_visit = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_step );
    Py_DECREF( par_step );
    par_step = NULL;

    CHECK_OBJECT( (PyObject *)par_temperature );
    Py_DECREF( par_temperature );
    par_temperature = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_x_visit );
    var_x_visit = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_10_run );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_11_local_search( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_e = NULL;
    PyObject *var_x = NULL;
    PyObject *var_val = NULL;
    nuitka_bool var_do_ls = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_pls = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_03b7fdf10e70bd193b46b26635cefcdf;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_03b7fdf10e70bd193b46b26635cefcdf = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_03b7fdf10e70bd193b46b26635cefcdf, codeobj_03b7fdf10e70bd193b46b26635cefcdf, module_scipy$optimize$_dual_annealing, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_03b7fdf10e70bd193b46b26635cefcdf = cache_frame_03b7fdf10e70bd193b46b26635cefcdf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_03b7fdf10e70bd193b46b26635cefcdf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_03b7fdf10e70bd193b46b26635cefcdf ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_energy_state_improved );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooobo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 315;
            type_description_1 = "oooobo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_minimizer_wrapper );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "oooobo";
                goto try_except_handler_2;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_local_search );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "oooobo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_energy_state );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 317;
                type_description_1 = "oooobo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_xbest );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 317;
                type_description_1 = "oooobo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_energy_state );
            if ( tmp_source_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 318;
                type_description_1 = "oooobo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ebest );
            Py_DECREF( tmp_source_name_6 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 318;
                type_description_1 = "oooobo";
                goto try_except_handler_2;
            }
            frame_03b7fdf10e70bd193b46b26635cefcdf->m_frame.f_lineno = 317;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "oooobo";
                goto try_except_handler_2;
            }
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "oooobo";
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


                type_description_1 = "oooobo";
                exception_lineno = 317;
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


                type_description_1 = "oooobo";
                exception_lineno = 317;
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

                        type_description_1 = "oooobo";
                        exception_lineno = 317;
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

                type_description_1 = "oooobo";
                exception_lineno = 317;
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
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_e = tmp_assign_source_4;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
            assert( var_x == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_x = tmp_assign_source_5;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( var_e );
            tmp_compexpr_left_1 = var_e;
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_energy_state );
            if ( tmp_source_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ebest );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_compexpr_right_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            Py_DECREF( tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "oooobo";
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
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_assattr_target_1;
                tmp_assattr_name_1 = const_int_0;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_1 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_not_improved_idx, tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 320;
                    type_description_1 = "oooobo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_source_name_10;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                CHECK_OBJECT( par_self );
                tmp_source_name_10 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_energy_state );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 321;
                    type_description_1 = "oooobo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_e );
                tmp_args_element_name_3 = var_e;
                CHECK_OBJECT( var_x );
                tmp_args_element_name_4 = var_x;
                tmp_args_element_name_5 = const_int_pos_1;
                frame_03b7fdf10e70bd193b46b26635cefcdf->m_frame.f_lineno = 321;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_update_best, call_args );
                }

                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 321;
                    type_description_1 = "oooobo";
                    goto frame_exception_exit_1;
                }
                assert( var_val == NULL );
                var_val = tmp_assign_source_6;
            }
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                CHECK_OBJECT( var_val );
                tmp_compexpr_left_2 = var_val;
                tmp_compexpr_right_2 = Py_None;
                tmp_condition_result_3 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    int tmp_truth_name_2;
                    CHECK_OBJECT( var_val );
                    tmp_truth_name_2 = CHECK_IF_TRUE( var_val );
                    if ( tmp_truth_name_2 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 323;
                        type_description_1 = "oooobo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_4;
                    }
                    else
                    {
                        goto branch_no_4;
                    }
                    branch_yes_4:;
                    CHECK_OBJECT( var_val );
                    tmp_return_value = var_val;
                    Py_INCREF( tmp_return_value );
                    goto frame_return_exit_1;
                    branch_no_4:;
                }
                branch_no_3:;
            }
            {
                PyObject *tmp_called_instance_2;
                PyObject *tmp_source_name_11;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                CHECK_OBJECT( par_self );
                tmp_source_name_11 = par_self;
                tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_energy_state );
                if ( tmp_called_instance_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 325;
                    type_description_1 = "oooobo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_e );
                tmp_args_element_name_6 = var_e;
                CHECK_OBJECT( var_x );
                tmp_args_element_name_7 = var_x;
                frame_03b7fdf10e70bd193b46b26635cefcdf->m_frame.f_lineno = 325;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_update_current, call_args );
                }

                Py_DECREF( tmp_called_instance_2 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 325;
                    type_description_1 = "oooobo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_12;
            PyObject *tmp_source_name_13;
            PyObject *tmp_source_name_14;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_func_wrapper );
            if ( tmp_source_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_nfev );
            Py_DECREF( tmp_source_name_12 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_15 = par_self;
            tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_func_wrapper );
            if ( tmp_source_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_3 );

                exception_lineno = 326;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_maxfun );
            Py_DECREF( tmp_source_name_14 );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_3 );

                exception_lineno = 326;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "oooobo";
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
            tmp_return_value = const_str_digest_a1710d03f939a9fb2eb324b5d1549734;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_5:;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_FALSE;
        var_do_ls = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_16;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_17;
        PyObject *tmp_source_name_18;
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_K );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "oooobo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_int_pos_90;
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_energy_state );
        if ( tmp_source_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 331;
            type_description_1 = "oooobo";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_current_location );
        Py_DECREF( tmp_source_name_17 );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 331;
            type_description_1 = "oooobo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 331;
            type_description_1 = "oooobo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = BINARY_OPERATION_MUL_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        assert( !(tmp_compexpr_right_4 == NULL) );
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "oooobo";
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_19;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_source_name_20;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_4;
            PyObject *tmp_source_name_21;
            PyObject *tmp_source_name_22;
            PyObject *tmp_right_name_3;
            PyObject *tmp_source_name_23;
            PyObject *tmp_source_name_24;
            PyObject *tmp_right_name_4;
            PyObject *tmp_source_name_25;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 332;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_19 = tmp_mvar_value_1;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_exp );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_20 = par_self;
            tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_K );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 332;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_22 = par_self;
            tmp_source_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_energy_state );
            if ( tmp_source_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 333;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ebest );
            Py_DECREF( tmp_source_name_21 );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 333;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_24 = par_self;
            tmp_source_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_energy_state );
            if ( tmp_source_name_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 333;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_current_energy );
            Py_DECREF( tmp_source_name_23 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 333;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 333;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 332;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_25 = par_self;
            tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_temperature_step );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 334;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 333;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            frame_03b7fdf10e70bd193b46b26635cefcdf->m_frame.f_lineno = 332;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            assert( var_pls == NULL );
            var_pls = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_26;
            CHECK_OBJECT( var_pls );
            tmp_compexpr_left_5 = var_pls;
            CHECK_OBJECT( par_self );
            tmp_source_name_26 = par_self;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__rand_state );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            frame_03b7fdf10e70bd193b46b26635cefcdf->m_frame.f_lineno = 335;
            tmp_compexpr_right_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_random_sample );
            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_compexpr_right_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "oooobo";
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
                nuitka_bool tmp_assign_source_9;
                tmp_assign_source_9 = NUITKA_BOOL_TRUE;
                var_do_ls = tmp_assign_source_9;
            }
            branch_no_7:;
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_source_name_27;
        PyObject *tmp_source_name_28;
        CHECK_OBJECT( par_self );
        tmp_source_name_27 = par_self;
        tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_not_improved_idx );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "oooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_28 = par_self;
        tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_not_improved_max_idx );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 339;
            type_description_1 = "oooobo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "oooobo";
            goto frame_exception_exit_1;
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
            nuitka_bool tmp_assign_source_10;
            tmp_assign_source_10 = NUITKA_BOOL_TRUE;
            var_do_ls = tmp_assign_source_10;
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        if ( var_do_ls == NUITKA_BOOL_UNASSIGNED )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "do_ls" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 341;
            type_description_1 = "oooobo";
            goto frame_exception_exit_1;
        }

        tmp_condition_result_9 = var_do_ls;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_29;
            PyObject *tmp_source_name_30;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_source_name_31;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_source_name_32;
            CHECK_OBJECT( par_self );
            tmp_source_name_30 = par_self;
            tmp_source_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_minimizer_wrapper );
            if ( tmp_source_name_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "oooobo";
                goto try_except_handler_4;
            }
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_local_search );
            Py_DECREF( tmp_source_name_29 );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "oooobo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_31 = par_self;
            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_xmin );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 342;
                type_description_1 = "oooobo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_32 = par_self;
            tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_emin );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_9 );

                exception_lineno = 342;
                type_description_1 = "oooobo";
                goto try_except_handler_4;
            }
            frame_03b7fdf10e70bd193b46b26635cefcdf->m_frame.f_lineno = 342;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "oooobo";
                goto try_except_handler_4;
            }
            tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "oooobo";
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


                type_description_1 = "oooobo";
                exception_lineno = 342;
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


                type_description_1 = "oooobo";
                exception_lineno = 342;
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

                        type_description_1 = "oooobo";
                        exception_lineno = 342;
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

                type_description_1 = "oooobo";
                exception_lineno = 342;
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
            {
                PyObject *old = var_e;
                var_e = tmp_assign_source_14;
                Py_INCREF( var_e );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_15;
                Py_INCREF( var_x );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_assattr_target_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 343;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_2;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_11 = var_x;
            frame_03b7fdf10e70bd193b46b26635cefcdf->m_frame.f_lineno = 343;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_copy, call_args );
            }

            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_xmin, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            CHECK_OBJECT( var_e );
            tmp_assattr_name_3 = var_e;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_emin, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 344;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            tmp_assattr_name_4 = const_int_0;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_not_improved_idx, tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 345;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_source_name_33;
            PyObject *tmp_source_name_34;
            PyObject *tmp_source_name_35;
            PyObject *tmp_assattr_target_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_35 = par_self;
            tmp_source_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_energy_state );
            if ( tmp_source_name_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_current_location );
            Py_DECREF( tmp_source_name_34 );
            if ( tmp_source_name_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_size );
            Py_DECREF( tmp_source_name_33 );
            if ( tmp_assattr_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_5 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_not_improved_max_idx, tmp_assattr_name_5 );
            Py_DECREF( tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_source_name_36;
            PyObject *tmp_source_name_37;
            CHECK_OBJECT( var_e );
            tmp_compexpr_left_7 = var_e;
            CHECK_OBJECT( par_self );
            tmp_source_name_37 = par_self;
            tmp_source_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_energy_state );
            if ( tmp_source_name_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_ebest );
            Py_DECREF( tmp_source_name_36 );
            if ( tmp_compexpr_right_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            Py_DECREF( tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
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
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_38;
                PyObject *tmp_source_name_39;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_source_name_40;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_source_name_41;
                PyObject *tmp_args_element_name_14;
                CHECK_OBJECT( par_self );
                tmp_source_name_39 = par_self;
                tmp_source_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_energy_state );
                if ( tmp_source_name_38 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 348;
                    type_description_1 = "oooobo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_update_best );
                Py_DECREF( tmp_source_name_38 );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 348;
                    type_description_1 = "oooobo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_40 = par_self;
                tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_emin );
                if ( tmp_args_element_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 349;
                    type_description_1 = "oooobo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_41 = par_self;
                tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_xmin );
                if ( tmp_args_element_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_12 );

                    exception_lineno = 349;
                    type_description_1 = "oooobo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_14 = const_int_pos_2;
                frame_03b7fdf10e70bd193b46b26635cefcdf->m_frame.f_lineno = 348;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
                    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_12 );
                Py_DECREF( tmp_args_element_name_13 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 348;
                    type_description_1 = "oooobo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_val;
                    var_val = tmp_assign_source_16;
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_11;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                CHECK_OBJECT( var_val );
                tmp_compexpr_left_8 = var_val;
                tmp_compexpr_right_8 = Py_None;
                tmp_condition_result_11 = ( tmp_compexpr_left_8 != tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    CHECK_OBJECT( var_val );
                    tmp_truth_name_3 = CHECK_IF_TRUE( var_val );
                    if ( tmp_truth_name_3 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 351;
                        type_description_1 = "oooobo";
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
                    CHECK_OBJECT( var_val );
                    tmp_return_value = var_val;
                    Py_INCREF( tmp_return_value );
                    goto frame_return_exit_1;
                    branch_no_12:;
                }
                branch_no_11:;
            }
            {
                PyObject *tmp_called_instance_5;
                PyObject *tmp_source_name_42;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_15;
                PyObject *tmp_args_element_name_16;
                CHECK_OBJECT( par_self );
                tmp_source_name_42 = par_self;
                tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_energy_state );
                if ( tmp_called_instance_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 353;
                    type_description_1 = "oooobo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_e );
                tmp_args_element_name_15 = var_e;
                CHECK_OBJECT( var_x );
                tmp_args_element_name_16 = var_x;
                frame_03b7fdf10e70bd193b46b26635cefcdf->m_frame.f_lineno = 353;
                {
                    PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_update_current, call_args );
                }

                Py_DECREF( tmp_called_instance_5 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 353;
                    type_description_1 = "oooobo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_10:;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_source_name_43;
            PyObject *tmp_source_name_44;
            PyObject *tmp_source_name_45;
            PyObject *tmp_source_name_46;
            CHECK_OBJECT( par_self );
            tmp_source_name_44 = par_self;
            tmp_source_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_func_wrapper );
            if ( tmp_source_name_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_nfev );
            Py_DECREF( tmp_source_name_43 );
            if ( tmp_compexpr_left_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_46 = par_self;
            tmp_source_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_func_wrapper );
            if ( tmp_source_name_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_9 );

                exception_lineno = 354;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_9 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_maxfun );
            Py_DECREF( tmp_source_name_45 );
            if ( tmp_compexpr_right_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_9 );

                exception_lineno = 354;
                type_description_1 = "oooobo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            Py_DECREF( tmp_compexpr_left_9 );
            Py_DECREF( tmp_compexpr_right_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "oooobo";
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
            tmp_return_value = const_str_digest_ccdc4d37e2137a2dd8ca5de3f1d62ff4;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_13:;
        }
        branch_no_9:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03b7fdf10e70bd193b46b26635cefcdf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_03b7fdf10e70bd193b46b26635cefcdf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03b7fdf10e70bd193b46b26635cefcdf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_03b7fdf10e70bd193b46b26635cefcdf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_03b7fdf10e70bd193b46b26635cefcdf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_03b7fdf10e70bd193b46b26635cefcdf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_03b7fdf10e70bd193b46b26635cefcdf,
        type_description_1,
        par_self,
        var_e,
        var_x,
        var_val,
        (int)var_do_ls,
        var_pls
    );


    // Release cached frame.
    if ( frame_03b7fdf10e70bd193b46b26635cefcdf == cache_frame_03b7fdf10e70bd193b46b26635cefcdf )
    {
        Py_DECREF( frame_03b7fdf10e70bd193b46b26635cefcdf );
    }
    cache_frame_03b7fdf10e70bd193b46b26635cefcdf = NULL;

    assertFrameObject( frame_03b7fdf10e70bd193b46b26635cefcdf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_11_local_search );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_pls );
    var_pls = NULL;

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

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_pls );
    var_pls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_11_local_search );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_12___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_func = python_pars[ 1 ];
    PyObject *par_maxfun = python_pars[ 2 ];
    PyObject *par_args = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_7a1113b6c060165ed34b82c5c18928a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a1113b6c060165ed34b82c5c18928a2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7a1113b6c060165ed34b82c5c18928a2, codeobj_7a1113b6c060165ed34b82c5c18928a2, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7a1113b6c060165ed34b82c5c18928a2 = cache_frame_7a1113b6c060165ed34b82c5c18928a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7a1113b6c060165ed34b82c5c18928a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7a1113b6c060165ed34b82c5c18928a2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_func );
        tmp_assattr_name_1 = par_func;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_func, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_args );
        tmp_assattr_name_2 = par_args;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_args, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_nfev, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_ngev, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_nhev, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_maxfun );
        tmp_assattr_name_6 = par_maxfun;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_maxfun, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a1113b6c060165ed34b82c5c18928a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a1113b6c060165ed34b82c5c18928a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7a1113b6c060165ed34b82c5c18928a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7a1113b6c060165ed34b82c5c18928a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7a1113b6c060165ed34b82c5c18928a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7a1113b6c060165ed34b82c5c18928a2,
        type_description_1,
        par_self,
        par_func,
        par_maxfun,
        par_args
    );


    // Release cached frame.
    if ( frame_7a1113b6c060165ed34b82c5c18928a2 == cache_frame_7a1113b6c060165ed34b82c5c18928a2 )
    {
        Py_DECREF( frame_7a1113b6c060165ed34b82c5c18928a2 );
    }
    cache_frame_7a1113b6c060165ed34b82c5c18928a2 = NULL;

    assertFrameObject( frame_7a1113b6c060165ed34b82c5c18928a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_12___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_maxfun );
    Py_DECREF( par_maxfun );
    par_maxfun = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_maxfun );
    Py_DECREF( par_maxfun );
    par_maxfun = NULL;

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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_12___init__ );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_13_fun( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_25e1d7fc21737293bdc0cc1e250f02a3;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_25e1d7fc21737293bdc0cc1e250f02a3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_25e1d7fc21737293bdc0cc1e250f02a3, codeobj_25e1d7fc21737293bdc0cc1e250f02a3, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *) );
    frame_25e1d7fc21737293bdc0cc1e250f02a3 = cache_frame_25e1d7fc21737293bdc0cc1e250f02a3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_25e1d7fc21737293bdc0cc1e250f02a3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_25e1d7fc21737293bdc0cc1e250f02a3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nfev );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_nfev, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oo";
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
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_func );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_dircall_arg3_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_args );
        if ( tmp_dircall_arg3_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 374;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25e1d7fc21737293bdc0cc1e250f02a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_25e1d7fc21737293bdc0cc1e250f02a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25e1d7fc21737293bdc0cc1e250f02a3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_25e1d7fc21737293bdc0cc1e250f02a3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_25e1d7fc21737293bdc0cc1e250f02a3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_25e1d7fc21737293bdc0cc1e250f02a3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_25e1d7fc21737293bdc0cc1e250f02a3,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame.
    if ( frame_25e1d7fc21737293bdc0cc1e250f02a3 == cache_frame_25e1d7fc21737293bdc0cc1e250f02a3 )
    {
        Py_DECREF( frame_25e1d7fc21737293bdc0cc1e250f02a3 );
    }
    cache_frame_25e1d7fc21737293bdc0cc1e250f02a3 = NULL;

    assertFrameObject( frame_25e1d7fc21737293bdc0cc1e250f02a3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_13_fun );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_13_fun );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_14___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bounds = python_pars[ 1 ];
    PyObject *par_func_wrapper = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *var_bounds_list = NULL;
    PyObject *var_n = NULL;
    PyObject *var_ls_max_iter = NULL;
    struct Nuitka_FrameObject *frame_d3c24be158d34cbf78d112fcf6c6dd0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d3c24be158d34cbf78d112fcf6c6dd0a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d3c24be158d34cbf78d112fcf6c6dd0a, codeobj_d3c24be158d34cbf78d112fcf6c6dd0a, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d3c24be158d34cbf78d112fcf6c6dd0a = cache_frame_d3c24be158d34cbf78d112fcf6c6dd0a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d3c24be158d34cbf78d112fcf6c6dd0a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d3c24be158d34cbf78d112fcf6c6dd0a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_func_wrapper );
        tmp_assattr_name_1 = par_func_wrapper;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_func_wrapper, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_kwargs );
        tmp_assattr_name_2 = par_kwargs;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_kwargs, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_minimize );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_minimize );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "minimize" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 390;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_minimizer, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( par_bounds );
        tmp_dircall_arg2_1 = par_bounds;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_list_arg_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_bounds_list == NULL );
        var_bounds_list = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_assattr_target_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 392;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_bounds_list );
        tmp_subscribed_name_1 = var_bounds_list;
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 392;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_d3c24be158d34cbf78d112fcf6c6dd0a->m_frame.f_lineno = 392;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assattr_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_lower, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_assattr_target_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 393;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_bounds_list );
        tmp_subscribed_name_2 = var_bounds_list;
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 393;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_d3c24be158d34cbf78d112fcf6c6dd0a->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assattr_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_upper, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_kwargs );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_lower );
            if ( tmp_len_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 397;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
            Py_DECREF( tmp_len_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 397;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_n == NULL );
            var_n = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_7;
            tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_3 != NULL );
            tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_4 != NULL );
            CHECK_OBJECT( var_n );
            tmp_left_name_1 = var_n;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_LS_MAXITER_RATIO );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 398;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 398;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_LS_MAXITER_MIN );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_4 );

                exception_lineno = 399;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_d3c24be158d34cbf78d112fcf6c6dd0a->m_frame.f_lineno = 398;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 398;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_LS_MAXITER_MAX );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 400;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_d3c24be158d34cbf78d112fcf6c6dd0a->m_frame.f_lineno = 398;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_6 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 398;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_ls_max_iter == NULL );
            var_ls_max_iter = tmp_assign_source_3;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = const_str_digest_3a03db61930d1390c0d72de0a5982961;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_kwargs );
            if ( tmp_ass_subscribed_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 401;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_1 = const_str_plain_method;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscribed_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 401;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_source_name_9;
            PyObject *tmp_ass_subscript_2;
            tmp_dict_key_1 = const_str_plain_maxiter;
            CHECK_OBJECT( var_ls_max_iter );
            tmp_dict_value_1 = var_ls_max_iter;
            tmp_ass_subvalue_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_ass_subvalue_2, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_kwargs );
            if ( tmp_ass_subscribed_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 402;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_2 = const_str_plain_options;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscribed_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_list_arg_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_source_name_11;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_source_name_12;
            PyObject *tmp_ass_subscript_3;
            tmp_called_name_5 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_lower );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 405;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_upper );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_7 );

                exception_lineno = 405;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_d3c24be158d34cbf78d112fcf6c6dd0a->m_frame.f_lineno = 405;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_list_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_list_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 405;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subvalue_3 = PySequence_List( tmp_list_arg_2 );
            Py_DECREF( tmp_list_arg_2 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 405;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_kwargs );
            if ( tmp_ass_subscribed_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_3 );

                exception_lineno = 405;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_3 = const_str_plain_bounds;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subscribed_3 );
            Py_DECREF( tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 405;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3c24be158d34cbf78d112fcf6c6dd0a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3c24be158d34cbf78d112fcf6c6dd0a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d3c24be158d34cbf78d112fcf6c6dd0a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d3c24be158d34cbf78d112fcf6c6dd0a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d3c24be158d34cbf78d112fcf6c6dd0a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d3c24be158d34cbf78d112fcf6c6dd0a,
        type_description_1,
        par_self,
        par_bounds,
        par_func_wrapper,
        par_kwargs,
        var_bounds_list,
        var_n,
        var_ls_max_iter
    );


    // Release cached frame.
    if ( frame_d3c24be158d34cbf78d112fcf6c6dd0a == cache_frame_d3c24be158d34cbf78d112fcf6c6dd0a )
    {
        Py_DECREF( frame_d3c24be158d34cbf78d112fcf6c6dd0a );
    }
    cache_frame_d3c24be158d34cbf78d112fcf6c6dd0a = NULL;

    assertFrameObject( frame_d3c24be158d34cbf78d112fcf6c6dd0a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_14___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_func_wrapper );
    Py_DECREF( par_func_wrapper );
    par_func_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_bounds_list );
    Py_DECREF( var_bounds_list );
    var_bounds_list = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_ls_max_iter );
    var_ls_max_iter = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_func_wrapper );
    Py_DECREF( par_func_wrapper );
    par_func_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_bounds_list );
    var_bounds_list = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_ls_max_iter );
    var_ls_max_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_14___init__ );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_15_local_search( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_e = python_pars[ 2 ];
    PyObject *var_x_tmp = NULL;
    PyObject *var_mres = NULL;
    PyObject *var_is_finite = NULL;
    PyObject *var_in_bounds = NULL;
    PyObject *var_is_valid = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    struct Nuitka_FrameObject *frame_ceb7d638fbb0fd089352fcce1f5b1b08;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ceb7d638fbb0fd089352fcce1f5b1b08 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ceb7d638fbb0fd089352fcce1f5b1b08, codeobj_ceb7d638fbb0fd089352fcce1f5b1b08, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ceb7d638fbb0fd089352fcce1f5b1b08 = cache_frame_ceb7d638fbb0fd089352fcce1f5b1b08;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ceb7d638fbb0fd089352fcce1f5b1b08 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ceb7d638fbb0fd089352fcce1f5b1b08 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 409;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_ceb7d638fbb0fd089352fcce1f5b1b08->m_frame.f_lineno = 409;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_copy, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x_tmp == NULL );
        var_x_tmp = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_minimizer );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_func_wrapper );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );

            exception_lineno = 410;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fun );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );

            exception_lineno = 410;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_dircall_arg3_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_kwargs );
        if ( tmp_dircall_arg3_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 410;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_2 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mres == NULL );
        var_mres = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_2;
        tmp_compexpr_left_1 = const_str_plain_njev;
        CHECK_OBJECT( var_mres );
        tmp_called_instance_2 = var_mres;
        frame_ceb7d638fbb0fd089352fcce1f5b1b08->m_frame.f_lineno = 411;
        tmp_compexpr_right_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_keys );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "oooooooo";
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
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_func_wrapper );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ngev );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "oooooooo";
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
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            CHECK_OBJECT( var_mres );
            tmp_source_name_7 = var_mres;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_njev );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_4;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_func_wrapper );
            if ( tmp_assattr_target_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ngev, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_target_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "oooooooo";
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

        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_3;
        tmp_compexpr_left_2 = const_str_plain_nhev;
        CHECK_OBJECT( var_mres );
        tmp_called_instance_3 = var_mres;
        frame_ceb7d638fbb0fd089352fcce1f5b1b08->m_frame.f_lineno = 413;
        tmp_compexpr_right_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_keys );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_source_name_9;
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_func_wrapper );
            if ( tmp_source_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_nhev );
            Py_DECREF( tmp_source_name_9 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooo";
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
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
            tmp_left_name_2 = tmp_inplace_assign_attr_2__start;
            CHECK_OBJECT( var_mres );
            tmp_source_name_11 = var_mres;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_nhev );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_6 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_inplace_assign_attr_2__end == NULL );
            tmp_inplace_assign_attr_2__end = tmp_assign_source_6;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            PyObject *tmp_source_name_12;
            CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
            tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_func_wrapper );
            if ( tmp_assattr_target_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooo";
                goto try_except_handler_5;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_nhev, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_target_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooo";
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

        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_7;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_15;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_17;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 416;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_all );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 416;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_isfinite );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 416;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mres );
        tmp_source_name_15 = var_mres;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_x );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 416;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ceb7d638fbb0fd089352fcce1f5b1b08->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 416;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ceb7d638fbb0fd089352fcce1f5b1b08->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_and_left_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 416;
            type_description_1 = "oooooooo";
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
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 416;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_16 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_isfinite );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mres );
        tmp_source_name_17 = var_mres;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_fun );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 416;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ceb7d638fbb0fd089352fcce1f5b1b08->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_7 = tmp_and_left_value_1;
        and_end_1:;
        assert( var_is_finite == NULL );
        var_is_finite = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_19;
        PyObject *tmp_source_name_20;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_22;
        PyObject *tmp_source_name_23;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_all );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mres );
        tmp_source_name_19 = var_mres;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_x );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_lower );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ceb7d638fbb0fd089352fcce1f5b1b08->m_frame.f_lineno = 417;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_and_left_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_and_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_2 );

            exception_lineno = 417;
            type_description_1 = "oooooooo";
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
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_21 = tmp_mvar_value_6;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_all );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mres );
        tmp_source_name_22 = var_mres;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_x );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 418;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_23 = par_self;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_upper );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 418;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 418;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ceb7d638fbb0fd089352fcce1f5b1b08->m_frame.f_lineno = 417;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_and_right_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_and_right_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_assign_source_8 = tmp_and_left_value_2;
        and_end_2:;
        assert( var_in_bounds == NULL );
        var_in_bounds = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        CHECK_OBJECT( var_is_finite );
        tmp_and_left_value_3 = var_is_finite;
        tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
        if ( tmp_and_left_truth_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "oooooooo";
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
        CHECK_OBJECT( var_in_bounds );
        tmp_and_right_value_3 = var_in_bounds;
        tmp_assign_source_9 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_assign_source_9 = tmp_and_left_value_3;
        and_end_3:;
        assert( var_is_valid == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_is_valid = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_24;
        CHECK_OBJECT( var_is_valid );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_is_valid );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_mres );
        tmp_source_name_24 = var_mres;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_fun );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_e );
        tmp_compexpr_right_5 = par_e;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_3 = tmp_and_left_value_4;
        and_end_4:;
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
            PyObject *tmp_source_name_25;
            PyObject *tmp_source_name_26;
            CHECK_OBJECT( var_mres );
            tmp_source_name_25 = var_mres;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_fun );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_mres );
            tmp_source_name_26 = var_mres;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_x );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 423;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_tuple_element_3;
            CHECK_OBJECT( par_e );
            tmp_tuple_element_3 = par_e;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_x_tmp );
            tmp_tuple_element_3 = var_x_tmp;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
            goto frame_return_exit_1;
        }
        branch_end_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ceb7d638fbb0fd089352fcce1f5b1b08 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ceb7d638fbb0fd089352fcce1f5b1b08 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ceb7d638fbb0fd089352fcce1f5b1b08 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ceb7d638fbb0fd089352fcce1f5b1b08, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ceb7d638fbb0fd089352fcce1f5b1b08->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ceb7d638fbb0fd089352fcce1f5b1b08, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ceb7d638fbb0fd089352fcce1f5b1b08,
        type_description_1,
        par_self,
        par_x,
        par_e,
        var_x_tmp,
        var_mres,
        var_is_finite,
        var_in_bounds,
        var_is_valid
    );


    // Release cached frame.
    if ( frame_ceb7d638fbb0fd089352fcce1f5b1b08 == cache_frame_ceb7d638fbb0fd089352fcce1f5b1b08 )
    {
        Py_DECREF( frame_ceb7d638fbb0fd089352fcce1f5b1b08 );
    }
    cache_frame_ceb7d638fbb0fd089352fcce1f5b1b08 = NULL;

    assertFrameObject( frame_ceb7d638fbb0fd089352fcce1f5b1b08 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_15_local_search );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    CHECK_OBJECT( (PyObject *)var_x_tmp );
    Py_DECREF( var_x_tmp );
    var_x_tmp = NULL;

    CHECK_OBJECT( (PyObject *)var_mres );
    Py_DECREF( var_mres );
    var_mres = NULL;

    CHECK_OBJECT( (PyObject *)var_is_finite );
    Py_DECREF( var_is_finite );
    var_is_finite = NULL;

    CHECK_OBJECT( (PyObject *)var_in_bounds );
    Py_DECREF( var_in_bounds );
    var_in_bounds = NULL;

    CHECK_OBJECT( (PyObject *)var_is_valid );
    Py_DECREF( var_is_valid );
    var_is_valid = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    Py_XDECREF( var_x_tmp );
    var_x_tmp = NULL;

    Py_XDECREF( var_mres );
    var_mres = NULL;

    Py_XDECREF( var_is_finite );
    var_is_finite = NULL;

    Py_XDECREF( var_in_bounds );
    var_in_bounds = NULL;

    Py_XDECREF( var_is_valid );
    var_is_valid = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_15_local_search );
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


static PyObject *impl_scipy$optimize$_dual_annealing$$$function_16_dual_annealing( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_bounds = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_maxiter = python_pars[ 3 ];
    PyObject *par_local_search_options = python_pars[ 4 ];
    PyObject *par_initial_temp = python_pars[ 5 ];
    PyObject *par_restart_temp_ratio = python_pars[ 6 ];
    PyObject *par_visit = python_pars[ 7 ];
    PyObject *par_accept = python_pars[ 8 ];
    PyObject *par_maxfun = python_pars[ 9 ];
    PyObject *par_seed = python_pars[ 10 ];
    PyObject *par_no_local_search = python_pars[ 11 ];
    PyObject *par_callback = python_pars[ 12 ];
    PyObject *par_x0 = python_pars[ 13 ];
    PyObject *var_lu = NULL;
    PyObject *var_lower = NULL;
    PyObject *var_upper = NULL;
    PyObject *var_func_wrapper = NULL;
    PyObject *var_minimizer_wrapper = NULL;
    PyObject *var_rand_state = NULL;
    PyObject *var_energy_state = NULL;
    PyObject *var_temperature_restart = NULL;
    PyObject *var_visit_dist = NULL;
    PyObject *var_strategy_chain = NULL;
    PyObject *var_need_to_stop = NULL;
    PyObject *var_iteration = NULL;
    PyObject *var_message = NULL;
    PyObject *var_optimize_res = NULL;
    PyObject *var_t1 = NULL;
    PyObject *var_i = NULL;
    PyObject *var_s = NULL;
    PyObject *var_t2 = NULL;
    PyObject *var_temperature = NULL;
    PyObject *var_val = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_4bc13460bc4cfd178fcba3c0dc0a62a8;
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
    static struct Nuitka_FrameObject *cache_frame_4bc13460bc4cfd178fcba3c0dc0a62a8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4bc13460bc4cfd178fcba3c0dc0a62a8, codeobj_4bc13460bc4cfd178fcba3c0dc0a62a8, module_scipy$optimize$_dual_annealing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4bc13460bc4cfd178fcba3c0dc0a62a8 = cache_frame_4bc13460bc4cfd178fcba3c0dc0a62a8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4bc13460bc4cfd178fcba3c0dc0a62a8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4bc13460bc4cfd178fcba3c0dc0a62a8 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_x0 );
        tmp_compexpr_left_1 = par_x0;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_x0 );
        tmp_len_arg_1 = par_x0;
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 602;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_bounds );
        tmp_len_arg_2 = par_bounds;
        tmp_compexpr_right_2 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 602;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        assert( !(tmp_res == -1) );
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_520bf3c84f83161e4af6eb1cad132194;
            frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 603;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 603;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( par_bounds );
        tmp_dircall_arg2_1 = par_bounds;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_list_arg_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 605;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 605;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lu == NULL );
        var_lu = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 606;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 606;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lu );
        tmp_subscribed_name_1 = var_lu;
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 606;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 606;
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


            exception_lineno = 606;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lower == NULL );
        var_lower = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 607;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 607;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lu );
        tmp_subscribed_name_2 = var_lu;
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 607;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 607;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 607;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_upper == NULL );
        var_upper = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_restart_temp_ratio );
        tmp_compexpr_left_3 = par_restart_temp_ratio;
        tmp_compexpr_right_3 = const_float_0_0;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 609;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
        CHECK_OBJECT( par_restart_temp_ratio );
        tmp_compexpr_left_4 = par_restart_temp_ratio;
        tmp_compexpr_right_4 = const_float_1_0;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 609;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
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
            tmp_make_exception_arg_2 = const_str_digest_2d3b20330808688f0bbf6a211742689c;
            frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 610;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 610;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_1;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        int tmp_truth_name_2;
        int tmp_or_left_truth_4;
        nuitka_bool tmp_or_left_value_4;
        nuitka_bool tmp_or_right_value_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_8;
        int tmp_truth_name_3;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_10;
        int tmp_truth_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_any );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        CHECK_OBJECT( var_lower );
        tmp_args_element_name_4 = var_lower;
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 612;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isinf, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 612;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_any );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_6;
        CHECK_OBJECT( var_upper );
        tmp_args_element_name_6 = var_upper;
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 612;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isinf, call_args );
        }

        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 612;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_7;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_any );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 613;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_8;
        CHECK_OBJECT( var_lower );
        tmp_args_element_name_8 = var_lower;
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 613;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_args_element_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_isnan, call_args );
        }

        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 613;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 612;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
        tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_4 == 1 )
        {
            goto or_left_4;
        }
        else
        {
            goto or_right_4;
        }
        or_right_4:;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 613;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_9;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_any );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 613;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 613;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_10;
        CHECK_OBJECT( var_upper );
        tmp_args_element_name_10 = var_upper;
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 613;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_args_element_name_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_isnan, call_args );
        }

        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 613;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 613;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 613;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_4 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_4 );

            exception_lineno = 613;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_4 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_4 );
        tmp_or_right_value_3 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_or_right_value_3 = tmp_or_left_value_4;
        or_end_4:;
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_condition_result_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_3 = tmp_or_left_value_2;
        or_end_2:;
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
            tmp_make_exception_arg_3 = const_str_digest_86b494170da0c440d0f2416f5d0446e9;
            frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 614;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 614;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 616;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_11;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_all );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 616;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lower );
        tmp_compexpr_left_5 = var_lower;
        CHECK_OBJECT( var_upper );
        tmp_compexpr_right_5 = var_upper;
        tmp_args_element_name_11 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 616;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 616;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 616;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 616;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
        {
            PyObject *tmp_raise_type_4;
            PyObject *tmp_make_exception_arg_4;
            tmp_make_exception_arg_4 = const_str_digest_b0403b32531140c940238e331d31f9f6;
            frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 617;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_4 };
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_4 == NULL) );
            exception_type = tmp_raise_type_4;
            exception_lineno = 617;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT( var_lower );
        tmp_len_arg_3 = var_lower;
        tmp_compexpr_left_6 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 619;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_upper );
        tmp_len_arg_4 = var_upper;
        tmp_compexpr_right_6 = BUILTIN_LEN( tmp_len_arg_4 );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 619;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        Py_DECREF( tmp_compexpr_right_6 );
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
            PyObject *tmp_raise_type_5;
            PyObject *tmp_make_exception_arg_5;
            tmp_make_exception_arg_5 = const_str_digest_c536c48d5f4cdfccf388999d31a94a85;
            frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 620;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_5 };
                tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_5 == NULL) );
            exception_type = tmp_raise_type_5;
            exception_lineno = 620;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_ObjectiveFunWrapper );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectiveFunWrapper );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectiveFunWrapper" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 623;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_2 = tmp_mvar_value_12;
        CHECK_OBJECT( par_func );
        tmp_tuple_element_1 = par_func;
        tmp_dircall_arg2_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_maxfun );
        tmp_tuple_element_1 = par_maxfun;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF( tmp_dircall_arg1_2 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_1};
            tmp_assign_source_4 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 623;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_func_wrapper == NULL );
        var_func_wrapper = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_2;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_LocalSearchWrapper );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LocalSearchWrapper );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LocalSearchWrapper" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 625;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_3 = tmp_mvar_value_13;
        CHECK_OBJECT( par_bounds );
        tmp_tuple_element_2 = par_bounds;
        tmp_dircall_arg2_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_func_wrapper );
        tmp_tuple_element_2 = var_func_wrapper;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_3, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( par_local_search_options );
        tmp_dircall_arg3_2 = par_local_search_options;
        Py_INCREF( tmp_dircall_arg1_3 );
        Py_INCREF( tmp_dircall_arg3_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_2};
            tmp_assign_source_5 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 625;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_minimizer_wrapper == NULL );
        var_minimizer_wrapper = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_check_random_state );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_check_random_state );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "check_random_state" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 628;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_14;
        CHECK_OBJECT( par_seed );
        tmp_args_element_name_12 = par_seed;
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 628;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 628;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rand_state == NULL );
        var_rand_state = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_EnergyState );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EnergyState );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EnergyState" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 630;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_15;
        CHECK_OBJECT( var_lower );
        tmp_args_element_name_13 = var_lower;
        CHECK_OBJECT( var_upper );
        tmp_args_element_name_14 = var_upper;
        CHECK_OBJECT( par_callback );
        tmp_args_element_name_15 = par_callback;
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 630;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_energy_state == NULL );
        var_energy_state = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        CHECK_OBJECT( var_energy_state );
        tmp_called_instance_5 = var_energy_state;
        CHECK_OBJECT( var_func_wrapper );
        tmp_args_element_name_16 = var_func_wrapper;
        CHECK_OBJECT( var_rand_state );
        tmp_args_element_name_17 = var_rand_state;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_18 = par_x0;
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 631;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_5, const_str_plain_reset, call_args );
        }

        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 631;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_initial_temp );
        tmp_left_name_1 = par_initial_temp;
        CHECK_OBJECT( par_restart_temp_ratio );
        tmp_right_name_1 = par_restart_temp_ratio;
        tmp_assign_source_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 634;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_temperature_restart == NULL );
        var_temperature_restart = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_VisitingDistribution );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VisitingDistribution );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "VisitingDistribution" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 636;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_16;
        CHECK_OBJECT( var_lower );
        tmp_args_element_name_19 = var_lower;
        CHECK_OBJECT( var_upper );
        tmp_args_element_name_20 = var_upper;
        CHECK_OBJECT( par_visit );
        tmp_args_element_name_21 = par_visit;
        CHECK_OBJECT( var_rand_state );
        tmp_args_element_name_22 = var_rand_state;
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 636;
        {
            PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_10, call_args );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 636;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_visit_dist == NULL );
        var_visit_dist = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_StrategyChain );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StrategyChain );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "StrategyChain" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 638;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_17;
        CHECK_OBJECT( par_accept );
        tmp_args_element_name_23 = par_accept;
        CHECK_OBJECT( var_visit_dist );
        tmp_args_element_name_24 = var_visit_dist;
        CHECK_OBJECT( var_func_wrapper );
        tmp_args_element_name_25 = var_func_wrapper;
        CHECK_OBJECT( var_minimizer_wrapper );
        tmp_args_element_name_26 = var_minimizer_wrapper;
        CHECK_OBJECT( var_rand_state );
        tmp_args_element_name_27 = var_rand_state;
        CHECK_OBJECT( var_energy_state );
        tmp_args_element_name_28 = var_energy_state;
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 638;
        {
            PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_11, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 638;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_strategy_chain == NULL );
        var_strategy_chain = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_False;
        assert( var_need_to_stop == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_need_to_stop = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_int_0;
        assert( var_iteration == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_iteration = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyList_New( 0 );
        assert( var_message == NULL );
        var_message = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 644;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_18;
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 644;
        tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS( tmp_called_name_12 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 644;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_optimize_res == NULL );
        var_optimize_res = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_True;
        CHECK_OBJECT( var_optimize_res );
        tmp_assattr_target_1 = var_optimize_res;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_success, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 645;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = const_int_0;
        CHECK_OBJECT( var_optimize_res );
        tmp_assattr_target_2 = var_optimize_res;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_status, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 646;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_name_13;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_right_name_4;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 648;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_19;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_exp );
        if ( tmp_called_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 648;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_visit );
        tmp_left_name_4 = par_visit;
        tmp_right_name_2 = const_int_pos_1;
        tmp_left_name_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_2 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );

            exception_lineno = 648;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_20 == NULL )
        {
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 648;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_20;
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 648;
        tmp_right_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_log, &PyTuple_GET_ITEM( const_tuple_float_2_0_tuple, 0 ) );

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 648;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_29 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_args_element_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );

            exception_lineno = 648;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 648;
        {
            PyObject *call_args[] = { tmp_args_element_name_29 };
            tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_29 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 648;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_float_1_0;
        tmp_assign_source_15 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_2, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 648;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_t1 == NULL );
        var_t1 = tmp_assign_source_15;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_operand_name_3;
        if ( var_need_to_stop == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "need_to_stop" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 650;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_3 = var_need_to_stop;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 650;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 650;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        goto loop_end_1;
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( par_maxiter );
        tmp_xrange_low_1 = par_maxiter;
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 651;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 651;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_17 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 651;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_18 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_18;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_5;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_i );
        tmp_float_arg_1 = var_i;
        tmp_left_name_5 = TO_FLOAT( tmp_float_arg_1 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 653;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_5 = const_float_2_0;
        tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 653;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_s;
            var_s = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_6;
        PyObject *tmp_called_name_14;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_right_name_8;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 654;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_9 = tmp_mvar_value_21;
        tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_exp );
        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 654;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_visit );
        tmp_left_name_8 = par_visit;
        tmp_right_name_6 = const_int_pos_1;
        tmp_left_name_7 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_8, tmp_right_name_6 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_14 );

            exception_lineno = 654;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_22 == NULL )
        {
            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_left_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 654;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_7 = tmp_mvar_value_22;
        CHECK_OBJECT( var_s );
        tmp_args_element_name_31 = var_s;
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 654;
        {
            PyObject *call_args[] = { tmp_args_element_name_31 };
            tmp_right_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_log, call_args );
        }

        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 654;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_30 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_args_element_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_14 );

            exception_lineno = 654;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 654;
        {
            PyObject *call_args[] = { tmp_args_element_name_30 };
            tmp_left_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_30 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 654;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_8 = const_float_1_0;
        tmp_assign_source_20 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_6, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 654;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_t2;
            var_t2 = tmp_assign_source_20;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( par_initial_temp );
        tmp_left_name_10 = par_initial_temp;
        CHECK_OBJECT( var_t1 );
        tmp_right_name_9 = var_t1;
        tmp_left_name_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_9 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 655;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_t2 );
        tmp_right_name_10 = var_t2;
        tmp_assign_source_21 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_9 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 655;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_temperature;
            var_temperature = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_iteration );
        tmp_compexpr_left_7 = var_iteration;
        CHECK_OBJECT( par_maxiter );
        tmp_compexpr_right_7 = par_maxiter;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 656;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_called_instance_8;
            PyObject *tmp_call_result_6;
            CHECK_OBJECT( var_message );
            tmp_called_instance_8 = var_message;
            frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 657;
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_digest_e59823a6e1c2bcb7ed580f0413564424_tuple, 0 ) );

            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 657;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = Py_True;
            {
                PyObject *old = var_need_to_stop;
                var_need_to_stop = tmp_assign_source_22;
                Py_INCREF( var_need_to_stop );
                Py_XDECREF( old );
            }

        }
        goto loop_end_2;
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT( var_temperature );
        tmp_compexpr_left_8 = var_temperature;
        CHECK_OBJECT( var_temperature_restart );
        tmp_compexpr_right_8 = var_temperature_restart;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 661;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_called_instance_9;
            PyObject *tmp_call_result_7;
            PyObject *tmp_args_element_name_32;
            PyObject *tmp_args_element_name_33;
            CHECK_OBJECT( var_energy_state );
            tmp_called_instance_9 = var_energy_state;
            CHECK_OBJECT( var_func_wrapper );
            tmp_args_element_name_32 = var_func_wrapper;
            CHECK_OBJECT( var_rand_state );
            tmp_args_element_name_33 = var_rand_state;
            frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 662;
            {
                PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33 };
                tmp_call_result_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_9, const_str_plain_reset, call_args );
            }

            if ( tmp_call_result_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 662;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_7 );
        }
        goto loop_end_2;
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        CHECK_OBJECT( var_strategy_chain );
        tmp_called_instance_10 = var_strategy_chain;
        CHECK_OBJECT( var_i );
        tmp_args_element_name_34 = var_i;
        CHECK_OBJECT( var_temperature );
        tmp_args_element_name_35 = var_temperature;
        frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 665;
        {
            PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35 };
            tmp_assign_source_23 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_10, const_str_plain_run, call_args );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 665;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_val;
            var_val = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( var_val );
        tmp_compexpr_left_9 = var_val;
        tmp_compexpr_right_9 = Py_None;
        tmp_condition_result_9 = ( tmp_compexpr_left_9 != tmp_compexpr_right_9 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_11;
            PyObject *tmp_call_result_8;
            PyObject *tmp_args_element_name_36;
            CHECK_OBJECT( var_message );
            tmp_called_instance_11 = var_message;
            CHECK_OBJECT( var_val );
            tmp_args_element_name_36 = var_val;
            frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 667;
            {
                PyObject *call_args[] = { tmp_args_element_name_36 };
                tmp_call_result_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 667;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_8 );
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = Py_True;
            {
                PyObject *old = var_need_to_stop;
                var_need_to_stop = tmp_assign_source_24;
                Py_INCREF( var_need_to_stop );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            tmp_assattr_name_3 = Py_False;
            CHECK_OBJECT( var_optimize_res );
            tmp_assattr_target_3 = var_optimize_res;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_success, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 669;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
        }
        goto loop_end_2;
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT( par_no_local_search );
        tmp_operand_name_4 = par_no_local_search;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 672;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_10 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_instance_12;
            CHECK_OBJECT( var_strategy_chain );
            tmp_called_instance_12 = var_strategy_chain;
            frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 673;
            tmp_assign_source_25 = CALL_METHOD_NO_ARGS( tmp_called_instance_12, const_str_plain_local_search );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 673;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_val;
                assert( old != NULL );
                var_val = tmp_assign_source_25;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            CHECK_OBJECT( var_val );
            tmp_compexpr_left_10 = var_val;
            tmp_compexpr_right_10 = Py_None;
            tmp_condition_result_11 = ( tmp_compexpr_left_10 != tmp_compexpr_right_10 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_instance_13;
                PyObject *tmp_call_result_9;
                PyObject *tmp_args_element_name_37;
                CHECK_OBJECT( var_message );
                tmp_called_instance_13 = var_message;
                CHECK_OBJECT( var_val );
                tmp_args_element_name_37 = var_val;
                frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame.f_lineno = 675;
                {
                    PyObject *call_args[] = { tmp_args_element_name_37 };
                    tmp_call_result_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 675;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                Py_DECREF( tmp_call_result_9 );
            }
            {
                PyObject *tmp_assign_source_26;
                tmp_assign_source_26 = Py_True;
                {
                    PyObject *old = var_need_to_stop;
                    var_need_to_stop = tmp_assign_source_26;
                    Py_INCREF( var_need_to_stop );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assattr_name_4;
                PyObject *tmp_assattr_target_4;
                tmp_assattr_name_4 = Py_False;
                CHECK_OBJECT( var_optimize_res );
                tmp_assattr_target_4 = var_optimize_res;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_success, tmp_assattr_name_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 677;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
            }
            goto loop_end_2;
            branch_no_11:;
        }
        branch_no_10:;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT( var_iteration );
        tmp_left_name_11 = var_iteration;
        tmp_right_name_11 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 679;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_27 = tmp_left_name_11;
        var_iteration = tmp_assign_source_27;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 651;
        type_description_1 = "oooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 650;
        type_description_1 = "oooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_source_name_10;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( var_energy_state );
        tmp_source_name_10 = var_energy_state;
        tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_xbest );
        if ( tmp_assattr_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 682;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_optimize_res );
        tmp_assattr_target_5 = var_optimize_res;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_x, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 682;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_source_name_11;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( var_energy_state );
        tmp_source_name_11 = var_energy_state;
        tmp_assattr_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_ebest );
        if ( tmp_assattr_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 683;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_optimize_res );
        tmp_assattr_target_6 = var_optimize_res;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_fun, tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 683;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( var_iteration );
        tmp_assattr_name_7 = var_iteration;
        CHECK_OBJECT( var_optimize_res );
        tmp_assattr_target_7 = var_optimize_res;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_nit, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 684;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_source_name_12;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT( var_func_wrapper );
        tmp_source_name_12 = var_func_wrapper;
        tmp_assattr_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_nfev );
        if ( tmp_assattr_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 685;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_optimize_res );
        tmp_assattr_target_8 = var_optimize_res;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_nfev, tmp_assattr_name_8 );
        Py_DECREF( tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 685;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_source_name_13;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT( var_func_wrapper );
        tmp_source_name_13 = var_func_wrapper;
        tmp_assattr_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ngev );
        if ( tmp_assattr_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 686;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_optimize_res );
        tmp_assattr_target_9 = var_optimize_res;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_njev, tmp_assattr_name_9 );
        Py_DECREF( tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 686;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_source_name_14;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT( var_func_wrapper );
        tmp_source_name_14 = var_func_wrapper;
        tmp_assattr_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_nhev );
        if ( tmp_assattr_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 687;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_optimize_res );
        tmp_assattr_target_10 = var_optimize_res;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_nhev, tmp_assattr_name_10 );
        Py_DECREF( tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 687;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT( var_message );
        tmp_assattr_name_11 = var_message;
        CHECK_OBJECT( var_optimize_res );
        tmp_assattr_target_11 = var_optimize_res;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_message, tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 688;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bc13460bc4cfd178fcba3c0dc0a62a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bc13460bc4cfd178fcba3c0dc0a62a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4bc13460bc4cfd178fcba3c0dc0a62a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4bc13460bc4cfd178fcba3c0dc0a62a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4bc13460bc4cfd178fcba3c0dc0a62a8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4bc13460bc4cfd178fcba3c0dc0a62a8,
        type_description_1,
        par_func,
        par_bounds,
        par_args,
        par_maxiter,
        par_local_search_options,
        par_initial_temp,
        par_restart_temp_ratio,
        par_visit,
        par_accept,
        par_maxfun,
        par_seed,
        par_no_local_search,
        par_callback,
        par_x0,
        var_lu,
        var_lower,
        var_upper,
        var_func_wrapper,
        var_minimizer_wrapper,
        var_rand_state,
        var_energy_state,
        var_temperature_restart,
        var_visit_dist,
        var_strategy_chain,
        var_need_to_stop,
        var_iteration,
        var_message,
        var_optimize_res,
        var_t1,
        var_i,
        var_s,
        var_t2,
        var_temperature,
        var_val
    );


    // Release cached frame.
    if ( frame_4bc13460bc4cfd178fcba3c0dc0a62a8 == cache_frame_4bc13460bc4cfd178fcba3c0dc0a62a8 )
    {
        Py_DECREF( frame_4bc13460bc4cfd178fcba3c0dc0a62a8 );
    }
    cache_frame_4bc13460bc4cfd178fcba3c0dc0a62a8 = NULL;

    assertFrameObject( frame_4bc13460bc4cfd178fcba3c0dc0a62a8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_optimize_res );
    tmp_return_value = var_optimize_res;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_16_dual_annealing );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_local_search_options );
    Py_DECREF( par_local_search_options );
    par_local_search_options = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_temp );
    Py_DECREF( par_initial_temp );
    par_initial_temp = NULL;

    CHECK_OBJECT( (PyObject *)par_restart_temp_ratio );
    Py_DECREF( par_restart_temp_ratio );
    par_restart_temp_ratio = NULL;

    CHECK_OBJECT( (PyObject *)par_visit );
    Py_DECREF( par_visit );
    par_visit = NULL;

    CHECK_OBJECT( (PyObject *)par_accept );
    Py_DECREF( par_accept );
    par_accept = NULL;

    CHECK_OBJECT( (PyObject *)par_maxfun );
    Py_DECREF( par_maxfun );
    par_maxfun = NULL;

    CHECK_OBJECT( (PyObject *)par_seed );
    Py_DECREF( par_seed );
    par_seed = NULL;

    CHECK_OBJECT( (PyObject *)par_no_local_search );
    Py_DECREF( par_no_local_search );
    par_no_local_search = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)var_lu );
    Py_DECREF( var_lu );
    var_lu = NULL;

    CHECK_OBJECT( (PyObject *)var_lower );
    Py_DECREF( var_lower );
    var_lower = NULL;

    CHECK_OBJECT( (PyObject *)var_upper );
    Py_DECREF( var_upper );
    var_upper = NULL;

    CHECK_OBJECT( (PyObject *)var_func_wrapper );
    Py_DECREF( var_func_wrapper );
    var_func_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)var_minimizer_wrapper );
    Py_DECREF( var_minimizer_wrapper );
    var_minimizer_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)var_rand_state );
    Py_DECREF( var_rand_state );
    var_rand_state = NULL;

    CHECK_OBJECT( (PyObject *)var_energy_state );
    Py_DECREF( var_energy_state );
    var_energy_state = NULL;

    CHECK_OBJECT( (PyObject *)var_temperature_restart );
    Py_DECREF( var_temperature_restart );
    var_temperature_restart = NULL;

    CHECK_OBJECT( (PyObject *)var_visit_dist );
    Py_DECREF( var_visit_dist );
    var_visit_dist = NULL;

    CHECK_OBJECT( (PyObject *)var_strategy_chain );
    Py_DECREF( var_strategy_chain );
    var_strategy_chain = NULL;

    Py_XDECREF( var_need_to_stop );
    var_need_to_stop = NULL;

    CHECK_OBJECT( (PyObject *)var_iteration );
    Py_DECREF( var_iteration );
    var_iteration = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)var_optimize_res );
    Py_DECREF( var_optimize_res );
    var_optimize_res = NULL;

    CHECK_OBJECT( (PyObject *)var_t1 );
    Py_DECREF( var_t1 );
    var_t1 = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_t2 );
    var_t2 = NULL;

    Py_XDECREF( var_temperature );
    var_temperature = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_local_search_options );
    Py_DECREF( par_local_search_options );
    par_local_search_options = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_temp );
    Py_DECREF( par_initial_temp );
    par_initial_temp = NULL;

    CHECK_OBJECT( (PyObject *)par_restart_temp_ratio );
    Py_DECREF( par_restart_temp_ratio );
    par_restart_temp_ratio = NULL;

    CHECK_OBJECT( (PyObject *)par_visit );
    Py_DECREF( par_visit );
    par_visit = NULL;

    CHECK_OBJECT( (PyObject *)par_accept );
    Py_DECREF( par_accept );
    par_accept = NULL;

    CHECK_OBJECT( (PyObject *)par_maxfun );
    Py_DECREF( par_maxfun );
    par_maxfun = NULL;

    CHECK_OBJECT( (PyObject *)par_seed );
    Py_DECREF( par_seed );
    par_seed = NULL;

    CHECK_OBJECT( (PyObject *)par_no_local_search );
    Py_DECREF( par_no_local_search );
    par_no_local_search = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    Py_XDECREF( var_lu );
    var_lu = NULL;

    Py_XDECREF( var_lower );
    var_lower = NULL;

    Py_XDECREF( var_upper );
    var_upper = NULL;

    Py_XDECREF( var_func_wrapper );
    var_func_wrapper = NULL;

    Py_XDECREF( var_minimizer_wrapper );
    var_minimizer_wrapper = NULL;

    Py_XDECREF( var_rand_state );
    var_rand_state = NULL;

    Py_XDECREF( var_energy_state );
    var_energy_state = NULL;

    Py_XDECREF( var_temperature_restart );
    var_temperature_restart = NULL;

    Py_XDECREF( var_visit_dist );
    var_visit_dist = NULL;

    Py_XDECREF( var_strategy_chain );
    var_strategy_chain = NULL;

    Py_XDECREF( var_need_to_stop );
    var_need_to_stop = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    Py_XDECREF( var_optimize_res );
    var_optimize_res = NULL;

    Py_XDECREF( var_t1 );
    var_t1 = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_t2 );
    var_t2 = NULL;

    Py_XDECREF( var_temperature );
    var_temperature = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing$$$function_16_dual_annealing );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_10_run(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_10_run,
        const_str_plain_run,
#if PYTHON_VERSION >= 300
        const_str_digest_9278c3dd995e579e77cf7c47fd8116fc,
#endif
        codeobj_623e1a3932aeb28b1953747f4212a15e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_11_local_search(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_11_local_search,
        const_str_plain_local_search,
#if PYTHON_VERSION >= 300
        const_str_digest_5ec006a783e95b5f2e7f1269d90ba421,
#endif
        codeobj_03b7fdf10e70bd193b46b26635cefcdf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_12___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_9ffc4e132457c12cc13eb09059aad8e3,
#endif
        codeobj_7a1113b6c060165ed34b82c5c18928a2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_13_fun(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_13_fun,
        const_str_plain_fun,
#if PYTHON_VERSION >= 300
        const_str_digest_a392344874461944db70023103db464e,
#endif
        codeobj_25e1d7fc21737293bdc0cc1e250f02a3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_14___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_14___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_25c80d7cf683f1035c8ba26abd2076d8,
#endif
        codeobj_d3c24be158d34cbf78d112fcf6c6dd0a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_15_local_search(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_15_local_search,
        const_str_plain_local_search,
#if PYTHON_VERSION >= 300
        const_str_digest_3c071ff1379eb3ac0269185493a3706c,
#endif
        codeobj_ceb7d638fbb0fd089352fcce1f5b1b08,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_16_dual_annealing( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_16_dual_annealing,
        const_str_plain_dual_annealing,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4bc13460bc4cfd178fcba3c0dc0a62a8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        const_str_digest_2745ea1b582b84ac44c852148de47fba,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_dcbf053fc42997e8485bc7b706f753a5,
#endif
        codeobj_43daf0f0e196b98c82d935ebd30d3810,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_2_visiting(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_2_visiting,
        const_str_plain_visiting,
#if PYTHON_VERSION >= 300
        const_str_digest_5cfbefdc6942cee2742f364f48abe241,
#endif
        codeobj_d9c8af54a069d2a1cd7818b317dc00b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        const_str_digest_ec1774a712d119e70495ae2a8c6c914c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_3_visit_fn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_3_visit_fn,
        const_str_plain_visit_fn,
#if PYTHON_VERSION >= 300
        const_str_digest_e4cd5395fe5833b35f0790619b819787,
#endif
        codeobj_3de830bd55a05caf2f22df53a2522fe2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        const_str_digest_d97aa09557db67214a10bc73b53bf99c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_4___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_2b901e8423e18f61c648b2d73c23dee8,
#endif
        codeobj_bd1557cb9e687367b3acab8eaf867508,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_5_reset( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_5_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 300
        const_str_digest_70ed22ee602b118159b54fb1b86ae226,
#endif
        codeobj_6f2cd03671bf5d126f54bf0267eeef45,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        const_str_digest_132f72ad3992e1e83fa23618affeebdc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_6_update_best(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_6_update_best,
        const_str_plain_update_best,
#if PYTHON_VERSION >= 300
        const_str_digest_0959a4d1a7bb09d3f9d484476f24936f,
#endif
        codeobj_40b8622bb8c10eb5cfc7a2c84a852ad3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_7_update_current(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_7_update_current,
        const_str_plain_update_current,
#if PYTHON_VERSION >= 300
        const_str_digest_c13423983e4f53a40405333ace24d2ad,
#endif
        codeobj_72f5e3969bf76e0e8e9e7aa8d1e2254f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_b6674a6b84a81216eb18b06e74b6b505,
#endif
        codeobj_efad8436be4c3991b5139ea10bbdbb04,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_9_accept_reject(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_dual_annealing$$$function_9_accept_reject,
        const_str_plain_accept_reject,
#if PYTHON_VERSION >= 300
        const_str_digest_e7121253b2499830ec307c1dc88a64c8,
#endif
        codeobj_1f49d0c1c9217bde89470597f26b3705,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_dual_annealing,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_dual_annealing =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._dual_annealing",
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

MOD_INIT_DECL( scipy$optimize$_dual_annealing )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_dual_annealing );
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
    puts("scipy.optimize._dual_annealing: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._dual_annealing: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._dual_annealing: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_dual_annealing" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_dual_annealing = Py_InitModule4(
        "scipy.optimize._dual_annealing",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_dual_annealing = PyModule_Create( &mdef_scipy$optimize$_dual_annealing );
#endif

    moduledict_scipy$optimize$_dual_annealing = MODULE_DICT( module_scipy$optimize$_dual_annealing );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_dual_annealing,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_dual_annealing,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_dual_annealing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_dual_annealing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_dual_annealing );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ebd0c665d2be8659fc6f0d82eec111c6, module_scipy$optimize$_dual_annealing );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_932e753551f655e336bab76795832308;
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
    PyObject *locals_scipy$optimize$_dual_annealing_22 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_c3b2f50439cb03a49046630d6daca2aa_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c3b2f50439cb03a49046630d6daca2aa_2 = NULL;
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
    PyObject *locals_scipy$optimize$_dual_annealing_130 = NULL;
    struct Nuitka_FrameObject *frame_9e1bc4465b943b10e0c77fd889716330_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_9e1bc4465b943b10e0c77fd889716330_3 = NULL;
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
    PyObject *locals_scipy$optimize$_dual_annealing_213 = NULL;
    struct Nuitka_FrameObject *frame_deee1d996232e823c6b3ab0ca8221b27_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_deee1d996232e823c6b3ab0ca8221b27_4 = NULL;
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
    PyObject *locals_scipy$optimize$_dual_annealing_359 = NULL;
    struct Nuitka_FrameObject *frame_8f22dc3ec292173a713c56fd10b91128_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8f22dc3ec292173a713c56fd10b91128_5 = NULL;
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
    PyObject *locals_scipy$optimize$_dual_annealing_377 = NULL;
    struct Nuitka_FrameObject *frame_dfbb31e502df5051930d4e0998bbc5dd_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_dfbb31e502df5051930d4e0998bbc5dd_6 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_0b55a537ed5c46b01df641ce74d7f0ae;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_932e753551f655e336bab76795832308 = MAKE_MODULE_FRAME( codeobj_932e753551f655e336bab76795832308, module_scipy$optimize$_dual_annealing );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_932e753551f655e336bab76795832308 );
    assert( Py_REFCNT( frame_932e753551f655e336bab76795832308 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 10;
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


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_dual_annealing;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 12;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_a0dfa9cb56b41095d297f9de64891d65;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_dual_annealing;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_OptimizeResult_tuple;
        tmp_level_name_2 = const_int_0;
        frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 13;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_OptimizeResult );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_OptimizeResult, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_a0dfa9cb56b41095d297f9de64891d65;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_dual_annealing;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_minimize_tuple;
        tmp_level_name_3 = const_int_0;
        frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 14;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_minimize );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_minimize, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_9de53a552350350635235a4e21f12d7a;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_dual_annealing;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_gammaln_tuple;
        tmp_level_name_4 = const_int_0;
        frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 15;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_gammaln );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_gammaln, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_dbc049f94600503bfbd8944e5239d7ae;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$optimize$_dual_annealing;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_check_random_state_tuple;
        tmp_level_name_5 = const_int_0;
        frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 16;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_check_random_state );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_check_random_state, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = LIST_COPY( const_list_str_plain_dual_annealing_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
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


            exception_lineno = 22;

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


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_1 != NULL );
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_type_object_tuple;
        tmp_assign_source_15 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
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


            exception_lineno = 22;

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
            PyObject *tmp_assign_source_16;
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


                exception_lineno = 22;

                goto try_except_handler_2;
            }
            tmp_args_name_1 = const_tuple_str_plain_VisitingDistribution_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 22;
            tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_16;
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


                exception_lineno = 22;

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


                    exception_lineno = 22;

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

                    exception_lineno = 22;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 22;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 22;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_17;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$optimize$_dual_annealing_22 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_ebd0c665d2be8659fc6f0d82eec111c6;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_22, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_5e032ae0e458590d7a6159b0f1aee246;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_22, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_VisitingDistribution;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_22, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_c3b2f50439cb03a49046630d6daca2aa_2, codeobj_c3b2f50439cb03a49046630d6daca2aa, module_scipy$optimize$_dual_annealing, sizeof(void *) );
        frame_c3b2f50439cb03a49046630d6daca2aa_2 = cache_frame_c3b2f50439cb03a49046630d6daca2aa_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_c3b2f50439cb03a49046630d6daca2aa_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_c3b2f50439cb03a49046630d6daca2aa_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_float_100000000_0;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_22, const_str_plain_TAIL_LIMIT, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_float_1eminus_10;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_22, const_str_plain_MIN_VISIT_BOUND, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_22, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_2_visiting(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_22, const_str_plain_visiting, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_3_visit_fn(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_22, const_str_plain_visit_fn, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c3b2f50439cb03a49046630d6daca2aa_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c3b2f50439cb03a49046630d6daca2aa_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_c3b2f50439cb03a49046630d6daca2aa_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_c3b2f50439cb03a49046630d6daca2aa_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_c3b2f50439cb03a49046630d6daca2aa_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_c3b2f50439cb03a49046630d6daca2aa_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_c3b2f50439cb03a49046630d6daca2aa_2 == cache_frame_c3b2f50439cb03a49046630d6daca2aa_2 )
        {
            Py_DECREF( frame_c3b2f50439cb03a49046630d6daca2aa_2 );
        }
        cache_frame_c3b2f50439cb03a49046630d6daca2aa_2 = NULL;

        assertFrameObject( frame_c3b2f50439cb03a49046630d6daca2aa_2 );

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
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_VisitingDistribution;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_scipy$optimize$_dual_annealing_22;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 22;
            tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_18 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_scipy$optimize$_dual_annealing_22 );
        locals_scipy$optimize$_dual_annealing_22 = NULL;
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

        Py_DECREF( locals_scipy$optimize$_dual_annealing_22 );
        locals_scipy$optimize$_dual_annealing_22 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 22;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_VisitingDistribution, tmp_assign_source_18 );
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

    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
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


            exception_lineno = 130;

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


            exception_lineno = 130;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_2 != NULL );
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_2:;
        tmp_bases_name_2 = const_tuple_type_object_tuple;
        tmp_assign_source_21 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

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


            exception_lineno = 130;

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


            exception_lineno = 130;

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
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;

                goto try_except_handler_5;
            }
            tmp_args_name_3 = const_tuple_str_plain_EnergyState_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 130;
            tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;

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


                exception_lineno = 130;

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
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 130;

                    goto try_except_handler_5;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_2 = tmp_class_creation_2__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_8 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 130;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_3 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 130;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 130;
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
            locals_scipy$optimize$_dual_annealing_130 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_ebd0c665d2be8659fc6f0d82eec111c6;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_130, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_digest_f70ddd017fe0f5271e7b50c82fd037ce;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_130, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_EnergyState;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_130, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto try_except_handler_7;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_9e1bc4465b943b10e0c77fd889716330_3, codeobj_9e1bc4465b943b10e0c77fd889716330, module_scipy$optimize$_dual_annealing, sizeof(void *) );
        frame_9e1bc4465b943b10e0c77fd889716330_3 = cache_frame_9e1bc4465b943b10e0c77fd889716330_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_9e1bc4465b943b10e0c77fd889716330_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_9e1bc4465b943b10e0c77fd889716330_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_int_pos_1000;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_130, const_str_plain_MAX_REINIT_COUNT, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_4___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_130, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_5_reset( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_130, const_str_plain_reset, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_6_update_best(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_130, const_str_plain_update_best, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_7_update_current(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_130, const_str_plain_update_current, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_9e1bc4465b943b10e0c77fd889716330_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_9e1bc4465b943b10e0c77fd889716330_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_9e1bc4465b943b10e0c77fd889716330_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_9e1bc4465b943b10e0c77fd889716330_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_9e1bc4465b943b10e0c77fd889716330_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_9e1bc4465b943b10e0c77fd889716330_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_9e1bc4465b943b10e0c77fd889716330_3 == cache_frame_9e1bc4465b943b10e0c77fd889716330_3 )
        {
            Py_DECREF( frame_9e1bc4465b943b10e0c77fd889716330_3 );
        }
        cache_frame_9e1bc4465b943b10e0c77fd889716330_3 = NULL;

        assertFrameObject( frame_9e1bc4465b943b10e0c77fd889716330_3 );

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
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_4 = const_str_plain_EnergyState;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_scipy$optimize$_dual_annealing_130;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 130;
            tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;

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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_scipy$optimize$_dual_annealing_130 );
        locals_scipy$optimize$_dual_annealing_130 = NULL;
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

        Py_DECREF( locals_scipy$optimize$_dual_annealing_130 );
        locals_scipy$optimize$_dual_annealing_130 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 130;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_EnergyState, tmp_assign_source_24 );
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

    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;

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


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_name_3 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_3 != NULL );
        Py_INCREF( tmp_metaclass_name_3 );
        condexpr_end_3:;
        tmp_bases_name_3 = const_tuple_type_object_tuple;
        tmp_assign_source_27 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;

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


            exception_lineno = 213;

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


            exception_lineno = 213;

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
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_10 = tmp_class_creation_3__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;

                goto try_except_handler_8;
            }
            tmp_args_name_5 = const_tuple_str_plain_StrategyChain_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 213;
            tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;

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


                exception_lineno = 213;

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
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_12;
                PyObject *tmp_type_arg_3;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_5 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 213;

                    goto try_except_handler_8;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_3 = tmp_class_creation_3__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1( tmp_type_arg_3 );
                assert( !(tmp_source_name_12 == NULL) );
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 213;

                    goto try_except_handler_8;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_5 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 213;

                    goto try_except_handler_8;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 213;
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
            locals_scipy$optimize$_dual_annealing_213 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_ebd0c665d2be8659fc6f0d82eec111c6;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_213, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_digest_cede33cea0f2abdea46408c2b6e578e2;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_213, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_plain_StrategyChain;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_213, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;

            goto try_except_handler_10;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_deee1d996232e823c6b3ab0ca8221b27_4, codeobj_deee1d996232e823c6b3ab0ca8221b27, module_scipy$optimize$_dual_annealing, sizeof(void *) );
        frame_deee1d996232e823c6b3ab0ca8221b27_4 = cache_frame_deee1d996232e823c6b3ab0ca8221b27_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_deee1d996232e823c6b3ab0ca8221b27_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_deee1d996232e823c6b3ab0ca8221b27_4 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_8___init__(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_213, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_9_accept_reject(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_213, const_str_plain_accept_reject, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_10_run(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_213, const_str_plain_run, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_11_local_search(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_213, const_str_plain_local_search, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_deee1d996232e823c6b3ab0ca8221b27_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_deee1d996232e823c6b3ab0ca8221b27_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_deee1d996232e823c6b3ab0ca8221b27_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_deee1d996232e823c6b3ab0ca8221b27_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_deee1d996232e823c6b3ab0ca8221b27_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_deee1d996232e823c6b3ab0ca8221b27_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if ( frame_deee1d996232e823c6b3ab0ca8221b27_4 == cache_frame_deee1d996232e823c6b3ab0ca8221b27_4 )
        {
            Py_DECREF( frame_deee1d996232e823c6b3ab0ca8221b27_4 );
        }
        cache_frame_deee1d996232e823c6b3ab0ca8221b27_4 = NULL;

        assertFrameObject( frame_deee1d996232e823c6b3ab0ca8221b27_4 );

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
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_6 = const_str_plain_StrategyChain;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_6 );
            tmp_tuple_element_6 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_scipy$optimize$_dual_annealing_213;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 213;
            tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;

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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF( locals_scipy$optimize$_dual_annealing_213 );
        locals_scipy$optimize$_dual_annealing_213 = NULL;
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

        Py_DECREF( locals_scipy$optimize$_dual_annealing_213 );
        locals_scipy$optimize$_dual_annealing_213 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 213;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_StrategyChain, tmp_assign_source_30 );
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
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


            exception_lineno = 359;

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


            exception_lineno = 359;

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


            exception_lineno = 359;

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


            exception_lineno = 359;

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


            exception_lineno = 359;

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


                exception_lineno = 359;

                goto try_except_handler_11;
            }
            tmp_args_name_7 = const_tuple_str_plain_ObjectiveFunWrapper_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
            frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 359;
            tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
            Py_DECREF( tmp_called_name_7 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 359;

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


                exception_lineno = 359;

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
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_getattr_default_4;
                PyObject *tmp_source_name_16;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_4 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_4__metaclass );
                tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
                tmp_getattr_attr_4 = const_str_plain___name__;
                tmp_getattr_default_4 = const_str_angle_metaclass;
                tmp_tuple_element_7 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 359;

                    goto try_except_handler_11;
                }
                tmp_right_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( tmp_class_creation_4__prepared );
                tmp_type_arg_4 = tmp_class_creation_4__prepared;
                tmp_source_name_16 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_16 == NULL) );
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_16 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_4 );

                    exception_lineno = 359;

                    goto try_except_handler_11;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_7 );
                tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 359;

                    goto try_except_handler_11;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF( tmp_raise_type_4 );
                exception_value = tmp_raise_value_4;
                exception_lineno = 359;
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
            locals_scipy$optimize$_dual_annealing_359 = tmp_set_locals_4;
            Py_INCREF( tmp_set_locals_4 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_ebd0c665d2be8659fc6f0d82eec111c6;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_359, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;

            goto try_except_handler_13;
        }
        tmp_dictset_value = const_str_plain_ObjectiveFunWrapper;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_359, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;

            goto try_except_handler_13;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_8f22dc3ec292173a713c56fd10b91128_5, codeobj_8f22dc3ec292173a713c56fd10b91128, module_scipy$optimize$_dual_annealing, sizeof(void *) );
        frame_8f22dc3ec292173a713c56fd10b91128_5 = cache_frame_8f22dc3ec292173a713c56fd10b91128_5;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_8f22dc3ec292173a713c56fd10b91128_5 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_8f22dc3ec292173a713c56fd10b91128_5 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_float_10000000_0_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_12___init__( tmp_defaults_3 );



            tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_359, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 361;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_13_fun(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_359, const_str_plain_fun, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8f22dc3ec292173a713c56fd10b91128_5 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8f22dc3ec292173a713c56fd10b91128_5 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_8f22dc3ec292173a713c56fd10b91128_5, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_8f22dc3ec292173a713c56fd10b91128_5->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_8f22dc3ec292173a713c56fd10b91128_5, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_8f22dc3ec292173a713c56fd10b91128_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame.
        if ( frame_8f22dc3ec292173a713c56fd10b91128_5 == cache_frame_8f22dc3ec292173a713c56fd10b91128_5 )
        {
            Py_DECREF( frame_8f22dc3ec292173a713c56fd10b91128_5 );
        }
        cache_frame_8f22dc3ec292173a713c56fd10b91128_5 = NULL;

        assertFrameObject( frame_8f22dc3ec292173a713c56fd10b91128_5 );

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
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_called_name_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_8 = const_str_plain_ObjectiveFunWrapper;
            tmp_args_name_8 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_8 );
            tmp_tuple_element_8 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_8 );
            tmp_tuple_element_8 = locals_scipy$optimize$_dual_annealing_359;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 359;
            tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_8 );
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 359;

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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF( locals_scipy$optimize$_dual_annealing_359 );
        locals_scipy$optimize$_dual_annealing_359 = NULL;
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

        Py_DECREF( locals_scipy$optimize$_dual_annealing_359 );
        locals_scipy$optimize$_dual_annealing_359 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 359;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_ObjectiveFunWrapper, tmp_assign_source_36 );
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
        tmp_assign_source_38 = PyDict_New();
        assert( tmp_class_creation_5__class_decl_dict == NULL );
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_name_5;
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        PyObject *tmp_bases_name_5;
        tmp_key_name_13 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_14;
        }
        tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_name_14 = const_str_plain_metaclass;
        tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
        if ( tmp_metaclass_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_14;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_name_5 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_5 != NULL );
        Py_INCREF( tmp_metaclass_name_5 );
        condexpr_end_5:;
        tmp_bases_name_5 = const_tuple_type_object_tuple;
        tmp_assign_source_39 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
        Py_DECREF( tmp_metaclass_name_5 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_14;
        }
        assert( tmp_class_creation_5__metaclass == NULL );
        tmp_class_creation_5__metaclass = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        tmp_key_name_15 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_14;
        }
        tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_14;
        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( tmp_class_creation_5__metaclass );
        tmp_source_name_17 = tmp_class_creation_5__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_17, const_str_plain___prepare__ );
        tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_14;
        }
        else
        {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_18;
            PyObject *tmp_args_name_9;
            PyObject *tmp_kw_name_9;
            CHECK_OBJECT( tmp_class_creation_5__metaclass );
            tmp_source_name_18 = tmp_class_creation_5__metaclass;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___prepare__ );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;

                goto try_except_handler_14;
            }
            tmp_args_name_9 = const_tuple_str_plain_LocalSearchWrapper_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;
            frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 377;
            tmp_assign_source_40 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
            Py_DECREF( tmp_called_name_9 );
            if ( tmp_assign_source_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;

                goto try_except_handler_14;
            }
            assert( tmp_class_creation_5__prepared == NULL );
            tmp_class_creation_5__prepared = tmp_assign_source_40;
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_operand_name_5;
            PyObject *tmp_source_name_19;
            CHECK_OBJECT( tmp_class_creation_5__prepared );
            tmp_source_name_19 = tmp_class_creation_5__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_19, const_str_plain___getitem__ );
            tmp_operand_name_5 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;

                goto try_except_handler_14;
            }
            tmp_condition_result_20 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_15;
            }
            else
            {
                goto branch_no_15;
            }
            branch_yes_15:;
            {
                PyObject *tmp_raise_type_5;
                PyObject *tmp_raise_value_5;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_getattr_target_5;
                PyObject *tmp_getattr_attr_5;
                PyObject *tmp_getattr_default_5;
                PyObject *tmp_source_name_20;
                PyObject *tmp_type_arg_5;
                tmp_raise_type_5 = PyExc_TypeError;
                tmp_left_name_5 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_5__metaclass );
                tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
                tmp_getattr_attr_5 = const_str_plain___name__;
                tmp_getattr_default_5 = const_str_angle_metaclass;
                tmp_tuple_element_9 = BUILTIN_GETATTR( tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 377;

                    goto try_except_handler_14;
                }
                tmp_right_name_5 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_9 );
                CHECK_OBJECT( tmp_class_creation_5__prepared );
                tmp_type_arg_5 = tmp_class_creation_5__prepared;
                tmp_source_name_20 = BUILTIN_TYPE1( tmp_type_arg_5 );
                assert( !(tmp_source_name_20 == NULL) );
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_20 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_5 );

                    exception_lineno = 377;

                    goto try_except_handler_14;
                }
                PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_9 );
                tmp_raise_value_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_raise_value_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 377;

                    goto try_except_handler_14;
                }
                exception_type = tmp_raise_type_5;
                Py_INCREF( tmp_raise_type_5 );
                exception_value = tmp_raise_value_5;
                exception_lineno = 377;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_14;
            }
            branch_no_15:;
        }
        goto branch_end_14;
        branch_no_14:;
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = PyDict_New();
            assert( tmp_class_creation_5__prepared == NULL );
            tmp_class_creation_5__prepared = tmp_assign_source_41;
        }
        branch_end_14:;
    }
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT( tmp_class_creation_5__prepared );
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_scipy$optimize$_dual_annealing_377 = tmp_set_locals_5;
            Py_INCREF( tmp_set_locals_5 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_ebd0c665d2be8659fc6f0d82eec111c6;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_377, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        tmp_dictset_value = const_str_digest_062d29b6cff9b7be2fa861ae79ab2b67;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_377, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        tmp_dictset_value = const_str_plain_LocalSearchWrapper;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_377, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_dfbb31e502df5051930d4e0998bbc5dd_6, codeobj_dfbb31e502df5051930d4e0998bbc5dd, module_scipy$optimize$_dual_annealing, sizeof(void *) );
        frame_dfbb31e502df5051930d4e0998bbc5dd_6 = cache_frame_dfbb31e502df5051930d4e0998bbc5dd_6;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_dfbb31e502df5051930d4e0998bbc5dd_6 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_dfbb31e502df5051930d4e0998bbc5dd_6 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_int_pos_6;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_377, const_str_plain_LS_MAXITER_RATIO, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = const_int_pos_100;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_377, const_str_plain_LS_MAXITER_MIN, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = const_int_pos_1000;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_377, const_str_plain_LS_MAXITER_MAX, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_14___init__(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_377, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_15_local_search(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_dual_annealing_377, const_str_plain_local_search, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_dfbb31e502df5051930d4e0998bbc5dd_6 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_dfbb31e502df5051930d4e0998bbc5dd_6 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_dfbb31e502df5051930d4e0998bbc5dd_6, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_dfbb31e502df5051930d4e0998bbc5dd_6->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_dfbb31e502df5051930d4e0998bbc5dd_6, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_dfbb31e502df5051930d4e0998bbc5dd_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame.
        if ( frame_dfbb31e502df5051930d4e0998bbc5dd_6 == cache_frame_dfbb31e502df5051930d4e0998bbc5dd_6 )
        {
            Py_DECREF( frame_dfbb31e502df5051930d4e0998bbc5dd_6 );
        }
        cache_frame_dfbb31e502df5051930d4e0998bbc5dd_6 = NULL;

        assertFrameObject( frame_dfbb31e502df5051930d4e0998bbc5dd_6 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_10;
            CHECK_OBJECT( tmp_class_creation_5__metaclass );
            tmp_called_name_10 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_10 = const_str_plain_LocalSearchWrapper;
            tmp_args_name_10 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_10 );
            tmp_tuple_element_10 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_10 );
            tmp_tuple_element_10 = locals_scipy$optimize$_dual_annealing_377;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_932e753551f655e336bab76795832308->m_frame.f_lineno = 377;
            tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
            Py_DECREF( tmp_args_name_10 );
            if ( tmp_assign_source_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;

                goto try_except_handler_16;
            }
            assert( outline_4_var___class__ == NULL );
            outline_4_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT( outline_4_var___class__ );
        tmp_assign_source_42 = outline_4_var___class__;
        Py_INCREF( tmp_assign_source_42 );
        goto try_return_handler_16;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF( locals_scipy$optimize$_dual_annealing_377 );
        locals_scipy$optimize$_dual_annealing_377 = NULL;
        goto try_return_handler_15;
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

        Py_DECREF( locals_scipy$optimize$_dual_annealing_377 );
        locals_scipy$optimize$_dual_annealing_377 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
        Py_DECREF( outline_4_var___class__ );
        outline_4_var___class__ = NULL;

        goto outline_result_5;
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

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_5;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_dual_annealing );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_5:;
        exception_lineno = 377;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_LocalSearchWrapper, tmp_assign_source_42 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_932e753551f655e336bab76795832308 );
#endif
    popFrameStack();

    assertFrameObject( frame_932e753551f655e336bab76795832308 );

    goto frame_no_exception_6;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_932e753551f655e336bab76795832308 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_932e753551f655e336bab76795832308, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_932e753551f655e336bab76795832308->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_932e753551f655e336bab76795832308, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_defaults_4;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = const_tuple_empty;
        tmp_defaults_4 = PyTuple_New( 12 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_11 );
        tmp_tuple_element_11 = const_int_pos_1000;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_4, 1, tmp_tuple_element_11 );
        tmp_tuple_element_11 = PyDict_New();
        PyTuple_SET_ITEM( tmp_defaults_4, 2, tmp_tuple_element_11 );
        tmp_tuple_element_11 = const_float_5230_0;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_4, 3, tmp_tuple_element_11 );
        tmp_tuple_element_11 = const_float_2eminus_05;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_4, 4, tmp_tuple_element_11 );
        tmp_tuple_element_11 = const_float_2_62;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_4, 5, tmp_tuple_element_11 );
        tmp_tuple_element_11 = const_float_minus_5_0;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_4, 6, tmp_tuple_element_11 );
        tmp_tuple_element_11 = const_float_10000000_0;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_4, 7, tmp_tuple_element_11 );
        tmp_tuple_element_11 = Py_None;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_4, 8, tmp_tuple_element_11 );
        tmp_tuple_element_11 = Py_False;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_4, 9, tmp_tuple_element_11 );
        tmp_tuple_element_11 = Py_None;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_4, 10, tmp_tuple_element_11 );
        tmp_tuple_element_11 = Py_None;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_4, 11, tmp_tuple_element_11 );
        tmp_assign_source_44 = MAKE_FUNCTION_scipy$optimize$_dual_annealing$$$function_16_dual_annealing( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain_dual_annealing, tmp_assign_source_44 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_dual_annealing, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_dual_annealing );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
