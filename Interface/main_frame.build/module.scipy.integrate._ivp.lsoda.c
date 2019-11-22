/* Generated code for Python module 'scipy.integrate._ivp.lsoda'
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

/* The "_module_scipy$integrate$_ivp$lsoda" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$integrate$_ivp$lsoda;
PyDictObject *moduledict_scipy$integrate$_ivp$lsoda;

/* The declarations of module constants used, if any. */
extern PyObject *const_int_pos_12;
extern PyObject *const_str_plain_run;
extern PyObject *const_int_pos_20;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_true_none_tuple;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_itask;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_float_0_001;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain__step_impl;
extern PyObject *const_str_plain_warn_extraneous;
extern PyObject *const_int_pos_11;
static PyObject *const_str_digest_893086fecca638d402a8abf2f3bb2b12;
extern PyObject *const_str_plain_lband;
extern PyObject *const_str_plain_njev;
extern PyObject *const_str_plain_jac;
extern PyObject *const_str_plain_ndim;
static PyObject *const_tuple_97529774f4acfc88ee100d37e03005ed_tuple;
static PyObject *const_tuple_false_str_digest_5328bcd4dde31469f03f67da4fcec7d5_tuple;
extern PyObject *const_str_plain_validate_first_step;
static PyObject *const_tuple_549939a5022d1298a19b1a095b0cc790_tuple;
extern PyObject *const_str_plain_atol;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_e049ee220aabd74c764993fbae358a76_tuple;
static PyObject *const_str_digest_e3b6363a77a97d963666756b661fff50;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_nlu;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_str_plain_LSODA;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_vectorized;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_DenseOutput;
extern PyObject *const_str_plain_rtol;
static PyObject *const_tuple_5d8a19f2d597a5d9d19cdfc4ceb14020_tuple;
extern PyObject *const_str_plain_f_params;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_call_args;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_n;
static PyObject *const_tuple_dc0b502e2209ace5fda9193c5a25904e_tuple;
extern PyObject *const_str_plain_y0;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_direction;
extern PyObject *const_str_plain_set_initial_value;
static PyObject *const_str_digest_23d10b9b9ad3e30cbfcb33b52d6bf648;
extern PyObject *const_str_plain_min_step;
extern PyObject *const_tuple_slice_none_none_none_none_tuple;
extern PyObject *const_str_plain_jac_params;
extern PyObject *const_float_1eminus_06;
static PyObject *const_str_digest_16a4ab827dc4ad1e215e993ae640788b;
extern PyObject *const_str_plain_arange;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_fun;
static PyObject *const_str_digest_525f793e651a4cb12846f467da621b1c;
static PyObject *const_str_digest_256b5a78d7ee2565913cc5c364927cee;
static PyObject *const_str_digest_4f1d03c6b8ee4255438da9cf8b3b774c;
extern PyObject *const_str_plain_t0;
extern PyObject *const_str_plain__call_impl;
extern PyObject *const_str_plain_lsoda;
extern PyObject *const_str_plain__dense_output_impl;
extern PyObject *const_str_plain_OdeSolver;
extern PyObject *const_str_plain_rwork;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_digest_f8bd54724cec32f71bd491228544f71b;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_bcb14e9dde67af3a7afbb74e83e37729;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_uband;
extern PyObject *const_str_plain_t_old;
extern PyObject *const_str_plain__y;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_F;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_integrator;
static PyObject *const_str_digest_5328bcd4dde31469f03f67da4fcec7d5;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_f3c1e9894d0d0c453f3f825bd48d6711;
extern PyObject *const_str_plain_iwork;
extern PyObject *const_str_plain_base;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_plain_yh;
extern PyObject *const_str_plain_first_step;
extern PyObject *const_dict_9785989fb33ac222304d5e166e57202d;
extern PyObject *const_str_plain_t_bound;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_str_plain_lsoda_tuple;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_successful;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_dot;
static PyObject *const_tuple_str_plain_self_str_plain_t_str_plain_x_tuple;
static PyObject *const_str_plain_LsodaDenseOutput;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_validate_tol;
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_279376c3cdd74ada6016a8020220a7ec;
extern PyObject *const_str_plain_max_step;
static PyObject *const_str_digest_8b0fc7347128a34fd18ac51cb4c5b18c;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_ode;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_tuple_str_plain_OdeSolver_str_plain_DenseOutput_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_solver;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain_ode_tuple;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_set_integrator;
extern PyObject *const_str_digest_5f12e9ca8524b8cfc32f0aa4d1f22377;
static PyObject *const_str_plain__lsoda_solver;
extern PyObject *const_str_plain_common;
extern PyObject *const_float_0_0;
extern PyObject *const_int_pos_14;
extern PyObject *const_str_plain__integrator;
extern PyObject *const_str_plain_extraneous;
extern PyObject *const_str_plain_order;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_893086fecca638d402a8abf2f3bb2b12 = UNSTREAM_STRING_ASCII( &constant_bin[ 4156919 ], 24, 0 );
    const_tuple_97529774f4acfc88ee100d37e03005ed_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 1, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 2, const_str_plain_t0 ); Py_INCREF( const_str_plain_t0 );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 3, const_str_plain_y0 ); Py_INCREF( const_str_plain_y0 );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 4, const_str_plain_t_bound ); Py_INCREF( const_str_plain_t_bound );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 5, const_str_plain_first_step ); Py_INCREF( const_str_plain_first_step );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 6, const_str_plain_min_step ); Py_INCREF( const_str_plain_min_step );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 7, const_str_plain_max_step ); Py_INCREF( const_str_plain_max_step );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 8, const_str_plain_rtol ); Py_INCREF( const_str_plain_rtol );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 9, const_str_plain_atol ); Py_INCREF( const_str_plain_atol );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 10, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 11, const_str_plain_lband ); Py_INCREF( const_str_plain_lband );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 12, const_str_plain_uband ); Py_INCREF( const_str_plain_uband );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 13, const_str_plain_vectorized ); Py_INCREF( const_str_plain_vectorized );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 14, const_str_plain_extraneous ); Py_INCREF( const_str_plain_extraneous );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 15, const_str_plain_solver ); Py_INCREF( const_str_plain_solver );
    PyTuple_SET_ITEM( const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 16, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_tuple_false_str_digest_5328bcd4dde31469f03f67da4fcec7d5_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_false_str_digest_5328bcd4dde31469f03f67da4fcec7d5_tuple, 0, Py_False ); Py_INCREF( Py_False );
    const_str_digest_5328bcd4dde31469f03f67da4fcec7d5 = UNSTREAM_STRING_ASCII( &constant_bin[ 4156943 ], 27, 0 );
    PyTuple_SET_ITEM( const_tuple_false_str_digest_5328bcd4dde31469f03f67da4fcec7d5_tuple, 1, const_str_digest_5328bcd4dde31469f03f67da4fcec7d5 ); Py_INCREF( const_str_digest_5328bcd4dde31469f03f67da4fcec7d5 );
    const_tuple_549939a5022d1298a19b1a095b0cc790_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_549939a5022d1298a19b1a095b0cc790_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_549939a5022d1298a19b1a095b0cc790_tuple, 1, const_str_plain_iwork ); Py_INCREF( const_str_plain_iwork );
    PyTuple_SET_ITEM( const_tuple_549939a5022d1298a19b1a095b0cc790_tuple, 2, const_str_plain_rwork ); Py_INCREF( const_str_plain_rwork );
    PyTuple_SET_ITEM( const_tuple_549939a5022d1298a19b1a095b0cc790_tuple, 3, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_549939a5022d1298a19b1a095b0cc790_tuple, 4, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    const_str_plain_yh = UNSTREAM_STRING_ASCII( &constant_bin[ 1490 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_549939a5022d1298a19b1a095b0cc790_tuple, 5, const_str_plain_yh ); Py_INCREF( const_str_plain_yh );
    const_tuple_e049ee220aabd74c764993fbae358a76_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_e049ee220aabd74c764993fbae358a76_tuple, 0, const_str_plain_validate_tol ); Py_INCREF( const_str_plain_validate_tol );
    PyTuple_SET_ITEM( const_tuple_e049ee220aabd74c764993fbae358a76_tuple, 1, const_str_plain_validate_first_step ); Py_INCREF( const_str_plain_validate_first_step );
    PyTuple_SET_ITEM( const_tuple_e049ee220aabd74c764993fbae358a76_tuple, 2, const_str_plain_warn_extraneous ); Py_INCREF( const_str_plain_warn_extraneous );
    const_str_digest_e3b6363a77a97d963666756b661fff50 = UNSTREAM_STRING_ASCII( &constant_bin[ 4156970 ], 4772, 0 );
    const_tuple_5d8a19f2d597a5d9d19cdfc4ceb14020_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_5d8a19f2d597a5d9d19cdfc4ceb14020_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5d8a19f2d597a5d9d19cdfc4ceb14020_tuple, 1, const_str_plain_solver ); Py_INCREF( const_str_plain_solver );
    PyTuple_SET_ITEM( const_tuple_5d8a19f2d597a5d9d19cdfc4ceb14020_tuple, 2, const_str_plain_integrator ); Py_INCREF( const_str_plain_integrator );
    PyTuple_SET_ITEM( const_tuple_5d8a19f2d597a5d9d19cdfc4ceb14020_tuple, 3, const_str_plain_itask ); Py_INCREF( const_str_plain_itask );
    const_tuple_dc0b502e2209ace5fda9193c5a25904e_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_dc0b502e2209ace5fda9193c5a25904e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_dc0b502e2209ace5fda9193c5a25904e_tuple, 1, const_str_plain_t_old ); Py_INCREF( const_str_plain_t_old );
    PyTuple_SET_ITEM( const_tuple_dc0b502e2209ace5fda9193c5a25904e_tuple, 2, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_dc0b502e2209ace5fda9193c5a25904e_tuple, 3, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    PyTuple_SET_ITEM( const_tuple_dc0b502e2209ace5fda9193c5a25904e_tuple, 4, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_dc0b502e2209ace5fda9193c5a25904e_tuple, 5, const_str_plain_yh ); Py_INCREF( const_str_plain_yh );
    PyTuple_SET_ITEM( const_tuple_dc0b502e2209ace5fda9193c5a25904e_tuple, 6, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_23d10b9b9ad3e30cbfcb33b52d6bf648 = UNSTREAM_STRING_ASCII( &constant_bin[ 4161742 ], 14, 0 );
    const_str_digest_16a4ab827dc4ad1e215e993ae640788b = UNSTREAM_STRING_ASCII( &constant_bin[ 4161756 ], 16, 0 );
    const_str_digest_525f793e651a4cb12846f467da621b1c = UNSTREAM_STRING_ASCII( &constant_bin[ 4161772 ], 34, 0 );
    const_str_digest_256b5a78d7ee2565913cc5c364927cee = UNSTREAM_STRING_ASCII( &constant_bin[ 4161806 ], 35, 0 );
    const_str_digest_4f1d03c6b8ee4255438da9cf8b3b774c = UNSTREAM_STRING_ASCII( &constant_bin[ 4161814 ], 26, 0 );
    const_str_digest_bcb14e9dde67af3a7afbb74e83e37729 = UNSTREAM_STRING_ASCII( &constant_bin[ 4161841 ], 29, 0 );
    const_str_digest_f3c1e9894d0d0c453f3f825bd48d6711 = UNSTREAM_STRING_ASCII( &constant_bin[ 4161870 ], 25, 0 );
    const_tuple_str_plain_self_str_plain_t_str_plain_x_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_t_str_plain_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_t_str_plain_x_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_t_str_plain_x_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_LsodaDenseOutput = UNSTREAM_STRING_ASCII( &constant_bin[ 4161870 ], 16, 1 );
    const_str_digest_279376c3cdd74ada6016a8020220a7ec = UNSTREAM_STRING_ASCII( &constant_bin[ 4161895 ], 27, 0 );
    const_str_digest_8b0fc7347128a34fd18ac51cb4c5b18c = UNSTREAM_STRING_ASCII( &constant_bin[ 4161922 ], 31, 0 );
    const_tuple_str_plain_ode_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ode_tuple, 0, const_str_plain_ode ); Py_INCREF( const_str_plain_ode );
    const_str_plain__lsoda_solver = UNSTREAM_STRING_ASCII( &constant_bin[ 4161953 ], 13, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$integrate$_ivp$lsoda( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9f3427fb41d611a7aabcac1961f6e69a;
static PyCodeObject *codeobj_49d04210d29dd30a719578e3cff22ecd;
static PyCodeObject *codeobj_beab16fd4d05eab1c069a01ae19bbc9d;
static PyCodeObject *codeobj_41273655880c2ccdc67d657e9ab00aa5;
static PyCodeObject *codeobj_9a9b45ebc02809fd7fb78908ad19cb72;
static PyCodeObject *codeobj_4948dda1eee675208d0810d16dec599e;
static PyCodeObject *codeobj_e340870677be61ae78869e24ca82fecc;
static PyCodeObject *codeobj_bd3e502d60a78de253dc9e7996d3a0ea;
static PyCodeObject *codeobj_09cc08dcfeb9c8c4ae87069a0194415b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_bcb14e9dde67af3a7afbb74e83e37729 );
    codeobj_9f3427fb41d611a7aabcac1961f6e69a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 149, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_49d04210d29dd30a719578e3cff22ecd = MAKE_CODEOBJ( module_filename_obj, const_str_digest_256b5a78d7ee2565913cc5c364927cee, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_beab16fd4d05eab1c069a01ae19bbc9d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_LSODA, 7, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_41273655880c2ccdc67d657e9ab00aa5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_LsodaDenseOutput, 175, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_9a9b45ebc02809fd7fb78908ad19cb72 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 105, const_tuple_97529774f4acfc88ee100d37e03005ed_tuple, 14, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS );
    codeobj_4948dda1eee675208d0810d16dec599e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 176, const_tuple_dc0b502e2209ace5fda9193c5a25904e_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_e340870677be61ae78869e24ca82fecc = MAKE_CODEOBJ( module_filename_obj, const_str_plain__call_impl, 182, const_tuple_str_plain_self_str_plain_t_str_plain_x_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bd3e502d60a78de253dc9e7996d3a0ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dense_output_impl, 163, const_tuple_549939a5022d1298a19b1a095b0cc790_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_09cc08dcfeb9c8c4ae87069a0194415b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__step_impl, 140, const_tuple_5d8a19f2d597a5d9d19cdfc4ceb14020_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_2__step_impl(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_2__step_impl$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_3__dense_output_impl(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_4___init__(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_5__call_impl(  );


// The module function definitions.
static PyObject *impl_scipy$integrate$_ivp$lsoda$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_fun = python_pars[ 1 ];
    PyObject *par_t0 = python_pars[ 2 ];
    PyObject *par_y0 = python_pars[ 3 ];
    PyObject *par_t_bound = python_pars[ 4 ];
    PyObject *par_first_step = python_pars[ 5 ];
    PyObject *par_min_step = python_pars[ 6 ];
    PyObject *par_max_step = python_pars[ 7 ];
    PyObject *par_rtol = python_pars[ 8 ];
    PyObject *par_atol = python_pars[ 9 ];
    PyObject *par_jac = python_pars[ 10 ];
    PyObject *par_lband = python_pars[ 11 ];
    PyObject *par_uband = python_pars[ 12 ];
    PyObject *par_vectorized = python_pars[ 13 ];
    PyObject *par_extraneous = python_pars[ 14 ];
    PyObject *var_solver = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9a9b45ebc02809fd7fb78908ad19cb72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_9a9b45ebc02809fd7fb78908ad19cb72 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9a9b45ebc02809fd7fb78908ad19cb72, codeobj_9a9b45ebc02809fd7fb78908ad19cb72, module_scipy$integrate$_ivp$lsoda, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9a9b45ebc02809fd7fb78908ad19cb72 = cache_frame_9a9b45ebc02809fd7fb78908ad19cb72;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9a9b45ebc02809fd7fb78908ad19cb72 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9a9b45ebc02809fd7fb78908ad19cb72 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_warn_extraneous );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn_extraneous );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn_extraneous" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_extraneous );
        tmp_args_element_name_1 = par_extraneous;
        frame_9a9b45ebc02809fd7fb78908ad19cb72->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_LSODA );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LSODA );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LSODA" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_fun );
        tmp_args_element_name_2 = par_fun;
        CHECK_OBJECT( par_t0 );
        tmp_args_element_name_3 = par_t0;
        CHECK_OBJECT( par_y0 );
        tmp_args_element_name_4 = par_y0;
        CHECK_OBJECT( par_t_bound );
        tmp_args_element_name_5 = par_t_bound;
        CHECK_OBJECT( par_vectorized );
        tmp_args_element_name_6 = par_vectorized;
        frame_9a9b45ebc02809fd7fb78908ad19cb72->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS5( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_first_step );
        tmp_compexpr_left_1 = par_first_step;
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
            tmp_assign_source_1 = const_int_0;
            {
                PyObject *old = par_first_step;
                assert( old != NULL );
                par_first_step = tmp_assign_source_1;
                Py_INCREF( par_first_step );
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_validate_first_step );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_first_step );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_first_step" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 114;
                type_description_1 = "ooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_first_step );
            tmp_args_element_name_7 = par_first_step;
            CHECK_OBJECT( par_t0 );
            tmp_args_element_name_8 = par_t0;
            CHECK_OBJECT( par_t_bound );
            tmp_args_element_name_9 = par_t_bound;
            frame_9a9b45ebc02809fd7fb78908ad19cb72->m_frame.f_lineno = 114;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;
                type_description_1 = "ooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_first_step;
                assert( old != NULL );
                par_first_step = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_first_step );
        tmp_left_name_1 = par_first_step;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_direction );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_1;
        par_first_step = tmp_assign_source_3;

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( par_max_step );
        tmp_compexpr_left_2 = par_max_step;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inf );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooN";
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
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_int_0;
            {
                PyObject *old = par_max_step;
                assert( old != NULL );
                par_max_step = tmp_assign_source_4;
                Py_INCREF( par_max_step );
                Py_DECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_max_step );
            tmp_compexpr_left_3 = par_max_step;
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "ooooooooooooooooN";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_f8bd54724cec32f71bd491228544f71b;
                frame_9a9b45ebc02809fd7fb78908ad19cb72->m_frame.f_lineno = 121;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 121;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_min_step );
        tmp_compexpr_left_4 = par_min_step;
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooN";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_8b0fc7347128a34fd18ac51cb4c5b18c;
            frame_9a9b45ebc02809fd7fb78908ad19cb72->m_frame.f_lineno = 124;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 124;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_validate_tol );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_tol );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_tol" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        CHECK_OBJECT( par_rtol );
        tmp_args_element_name_10 = par_rtol;
        CHECK_OBJECT( par_atol );
        tmp_args_element_name_11 = par_atol;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_n );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooN";
            goto try_except_handler_2;
        }
        frame_9a9b45ebc02809fd7fb78908ad19cb72->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooN";
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


            type_description_1 = "ooooooooooooooooN";
            exception_lineno = 126;
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


            type_description_1 = "ooooooooooooooooN";
            exception_lineno = 126;
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

                    type_description_1 = "ooooooooooooooooN";
                    exception_lineno = 126;
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

            type_description_1 = "ooooooooooooooooN";
            exception_lineno = 126;
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
        {
            PyObject *old = par_rtol;
            assert( old != NULL );
            par_rtol = tmp_assign_source_8;
            Py_INCREF( par_rtol );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_atol;
            assert( old != NULL );
            par_atol = tmp_assign_source_9;
            Py_INCREF( par_atol );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_ode );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ode );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_fun );
        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_jac );
        tmp_args_element_name_14 = par_jac;
        frame_9a9b45ebc02809fd7fb78908ad19cb72->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_solver == NULL );
        var_solver = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
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
        CHECK_OBJECT( var_solver );
        tmp_source_name_5 = var_solver;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_set_integrator );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = const_tuple_str_plain_lsoda_tuple;
        tmp_dict_key_1 = const_str_plain_rtol;
        CHECK_OBJECT( par_rtol );
        tmp_dict_value_1 = par_rtol;
        tmp_kw_name_1 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_atol;
        CHECK_OBJECT( par_atol );
        tmp_dict_value_2 = par_atol;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_max_step;
        CHECK_OBJECT( par_max_step );
        tmp_dict_value_3 = par_max_step;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_min_step;
        CHECK_OBJECT( par_min_step );
        tmp_dict_value_4 = par_min_step;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_first_step;
        CHECK_OBJECT( par_first_step );
        tmp_dict_value_5 = par_first_step;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_lband;
        CHECK_OBJECT( par_lband );
        tmp_dict_value_6 = par_lband;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_uband;
        CHECK_OBJECT( par_uband );
        tmp_dict_value_7 = par_uband;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        frame_9a9b45ebc02809fd7fb78908ad19cb72->m_frame.f_lineno = 129;
        tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        CHECK_OBJECT( var_solver );
        tmp_called_instance_2 = var_solver;
        CHECK_OBJECT( par_y0 );
        tmp_args_element_name_15 = par_y0;
        CHECK_OBJECT( par_t0 );
        tmp_args_element_name_16 = par_t0;
        frame_9a9b45ebc02809fd7fb78908ad19cb72->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_set_initial_value, call_args );
        }

        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_t_bound );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_solver );
        tmp_source_name_8 = var_solver;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__integrator );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_rwork );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( var_solver );
        tmp_source_name_10 = var_solver;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__integrator );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_rwork );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_solver );
        tmp_source_name_12 = var_solver;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__integrator );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_2 );

            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_call_args );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_ass_subscribed_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_2 );

            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = const_int_pos_4;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 4, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscribed_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( var_solver );
        tmp_assattr_name_1 = var_solver;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__lsoda_solver, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a9b45ebc02809fd7fb78908ad19cb72 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a9b45ebc02809fd7fb78908ad19cb72 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9a9b45ebc02809fd7fb78908ad19cb72, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9a9b45ebc02809fd7fb78908ad19cb72->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9a9b45ebc02809fd7fb78908ad19cb72, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9a9b45ebc02809fd7fb78908ad19cb72,
        type_description_1,
        par_self,
        par_fun,
        par_t0,
        par_y0,
        par_t_bound,
        par_first_step,
        par_min_step,
        par_max_step,
        par_rtol,
        par_atol,
        par_jac,
        par_lband,
        par_uband,
        par_vectorized,
        par_extraneous,
        var_solver,
        NULL
    );


    // Release cached frame.
    if ( frame_9a9b45ebc02809fd7fb78908ad19cb72 == cache_frame_9a9b45ebc02809fd7fb78908ad19cb72 )
    {
        Py_DECREF( frame_9a9b45ebc02809fd7fb78908ad19cb72 );
    }
    cache_frame_9a9b45ebc02809fd7fb78908ad19cb72 = NULL;

    assertFrameObject( frame_9a9b45ebc02809fd7fb78908ad19cb72 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_t0 );
    Py_DECREF( par_t0 );
    par_t0 = NULL;

    CHECK_OBJECT( (PyObject *)par_y0 );
    Py_DECREF( par_y0 );
    par_y0 = NULL;

    CHECK_OBJECT( (PyObject *)par_t_bound );
    Py_DECREF( par_t_bound );
    par_t_bound = NULL;

    CHECK_OBJECT( (PyObject *)par_first_step );
    Py_DECREF( par_first_step );
    par_first_step = NULL;

    CHECK_OBJECT( (PyObject *)par_min_step );
    Py_DECREF( par_min_step );
    par_min_step = NULL;

    CHECK_OBJECT( (PyObject *)par_max_step );
    Py_DECREF( par_max_step );
    par_max_step = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_atol );
    Py_DECREF( par_atol );
    par_atol = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_lband );
    Py_DECREF( par_lband );
    par_lband = NULL;

    CHECK_OBJECT( (PyObject *)par_uband );
    Py_DECREF( par_uband );
    par_uband = NULL;

    CHECK_OBJECT( (PyObject *)par_vectorized );
    Py_DECREF( par_vectorized );
    par_vectorized = NULL;

    CHECK_OBJECT( (PyObject *)par_extraneous );
    Py_DECREF( par_extraneous );
    par_extraneous = NULL;

    CHECK_OBJECT( (PyObject *)var_solver );
    Py_DECREF( var_solver );
    var_solver = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_t0 );
    Py_DECREF( par_t0 );
    par_t0 = NULL;

    CHECK_OBJECT( (PyObject *)par_y0 );
    Py_DECREF( par_y0 );
    par_y0 = NULL;

    CHECK_OBJECT( (PyObject *)par_t_bound );
    Py_DECREF( par_t_bound );
    par_t_bound = NULL;

    Py_XDECREF( par_first_step );
    par_first_step = NULL;

    CHECK_OBJECT( (PyObject *)par_min_step );
    Py_DECREF( par_min_step );
    par_min_step = NULL;

    Py_XDECREF( par_max_step );
    par_max_step = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_atol );
    Py_DECREF( par_atol );
    par_atol = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_lband );
    Py_DECREF( par_lband );
    par_lband = NULL;

    CHECK_OBJECT( (PyObject *)par_uband );
    Py_DECREF( par_uband );
    par_uband = NULL;

    CHECK_OBJECT( (PyObject *)par_vectorized );
    Py_DECREF( par_vectorized );
    par_vectorized = NULL;

    CHECK_OBJECT( (PyObject *)par_extraneous );
    Py_DECREF( par_extraneous );
    par_extraneous = NULL;

    Py_XDECREF( var_solver );
    var_solver = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda$$$function_1___init__ );
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


static PyObject *impl_scipy$integrate$_ivp$lsoda$$$function_2__step_impl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_solver = NULL;
    PyObject *var_integrator = NULL;
    PyObject *var_itask = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_09cc08dcfeb9c8c4ae87069a0194415b;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_09cc08dcfeb9c8c4ae87069a0194415b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_09cc08dcfeb9c8c4ae87069a0194415b, codeobj_09cc08dcfeb9c8c4ae87069a0194415b, module_scipy$integrate$_ivp$lsoda, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_09cc08dcfeb9c8c4ae87069a0194415b = cache_frame_09cc08dcfeb9c8c4ae87069a0194415b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_09cc08dcfeb9c8c4ae87069a0194415b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_09cc08dcfeb9c8c4ae87069a0194415b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__lsoda_solver );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_solver == NULL );
        var_solver = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_solver );
        tmp_source_name_2 = var_solver;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__integrator );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_integrator == NULL );
        var_integrator = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_integrator );
        tmp_source_name_3 = var_integrator;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_call_args );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_pos_2;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 2 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_itask == NULL );
        var_itask = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_ass_subvalue_1 = const_int_pos_5;
        CHECK_OBJECT( var_integrator );
        tmp_source_name_4 = var_integrator;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_call_args );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = const_int_pos_2;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 2, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_10;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_11;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT( var_integrator );
        tmp_source_name_5 = var_integrator;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_run );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_solver );
        tmp_source_name_6 = var_solver;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_f );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 149;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_solver );
        tmp_source_name_7 = var_solver;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_jac );
        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 149;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 149;
            type_description_1 = "oooo";
            goto try_except_handler_2;
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
        tmp_or_right_value_1 = MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_2__step_impl$$$function_1_lambda(  );



        tmp_args_element_name_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_2 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT( var_solver );
        tmp_source_name_8 = var_solver;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__y );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 149;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_solver );
        tmp_source_name_9 = var_solver;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_t );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 149;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_t_bound );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 150;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_solver );
        tmp_source_name_11 = var_solver;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_f_params );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 150;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_solver );
        tmp_source_name_12 = var_solver;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_jac_params );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 150;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_09cc08dcfeb9c8c4ae87069a0194415b->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooo";
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
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooo";
            exception_lineno = 148;
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
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "oooo";
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooo";
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
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assattr_name_1 = tmp_tuple_unpack_1__element_1;
        CHECK_OBJECT( var_solver );
        tmp_assattr_target_1 = var_solver;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__y, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assattr_name_2 = tmp_tuple_unpack_1__element_2;
        CHECK_OBJECT( var_solver );
        tmp_assattr_target_2 = var_solver;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_t, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
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
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_source_name_13;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( var_itask );
        tmp_ass_subvalue_2 = var_itask;
        CHECK_OBJECT( var_integrator );
        tmp_source_name_13 = var_integrator;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_call_args );
        if ( tmp_ass_subscribed_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = const_int_pos_2;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscribed_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_solver );
        tmp_called_instance_1 = var_solver;
        frame_09cc08dcfeb9c8c4ae87069a0194415b->m_frame.f_lineno = 153;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_successful );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 153;
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
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_source_name_14;
            PyObject *tmp_assattr_target_3;
            CHECK_OBJECT( var_solver );
            tmp_source_name_14 = var_solver;
            tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_t );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_t, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
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
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_source_name_15;
            PyObject *tmp_assattr_target_4;
            CHECK_OBJECT( var_solver );
            tmp_source_name_15 = var_solver;
            tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__y );
            if ( tmp_assattr_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_y, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
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
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_16;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_assattr_target_5;
            CHECK_OBJECT( var_integrator );
            tmp_source_name_16 = var_integrator;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_iwork );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_int_pos_12;
            tmp_assattr_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 12 );
            Py_DECREF( tmp_subscribed_name_2 );
            if ( tmp_assattr_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_5 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_njev, tmp_assattr_name_5 );
            Py_DECREF( tmp_assattr_name_5 );
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
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_source_name_17;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_assattr_target_6;
            CHECK_OBJECT( var_integrator );
            tmp_source_name_17 = var_integrator;
            tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_iwork );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_3 = const_int_pos_12;
            tmp_assattr_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 12 );
            Py_DECREF( tmp_subscribed_name_3 );
            if ( tmp_assattr_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_6 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_nlu, tmp_assattr_name_6 );
            Py_DECREF( tmp_assattr_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        tmp_return_value = const_tuple_true_none_tuple;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = const_tuple_false_str_digest_5328bcd4dde31469f03f67da4fcec7d5_tuple;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_09cc08dcfeb9c8c4ae87069a0194415b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_09cc08dcfeb9c8c4ae87069a0194415b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_09cc08dcfeb9c8c4ae87069a0194415b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_09cc08dcfeb9c8c4ae87069a0194415b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_09cc08dcfeb9c8c4ae87069a0194415b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_09cc08dcfeb9c8c4ae87069a0194415b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_09cc08dcfeb9c8c4ae87069a0194415b,
        type_description_1,
        par_self,
        var_solver,
        var_integrator,
        var_itask
    );


    // Release cached frame.
    if ( frame_09cc08dcfeb9c8c4ae87069a0194415b == cache_frame_09cc08dcfeb9c8c4ae87069a0194415b )
    {
        Py_DECREF( frame_09cc08dcfeb9c8c4ae87069a0194415b );
    }
    cache_frame_09cc08dcfeb9c8c4ae87069a0194415b = NULL;

    assertFrameObject( frame_09cc08dcfeb9c8c4ae87069a0194415b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda$$$function_2__step_impl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_solver );
    Py_DECREF( var_solver );
    var_solver = NULL;

    CHECK_OBJECT( (PyObject *)var_integrator );
    Py_DECREF( var_integrator );
    var_integrator = NULL;

    CHECK_OBJECT( (PyObject *)var_itask );
    Py_DECREF( var_itask );
    var_itask = NULL;

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

    Py_XDECREF( var_solver );
    var_solver = NULL;

    Py_XDECREF( var_integrator );
    var_integrator = NULL;

    Py_XDECREF( var_itask );
    var_itask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda$$$function_2__step_impl );
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


static PyObject *impl_scipy$integrate$_ivp$lsoda$$$function_2__step_impl$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda$$$function_2__step_impl$$$function_1_lambda );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$integrate$_ivp$lsoda$$$function_3__dense_output_impl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_iwork = NULL;
    PyObject *var_rwork = NULL;
    PyObject *var_order = NULL;
    PyObject *var_h = NULL;
    PyObject *var_yh = NULL;
    struct Nuitka_FrameObject *frame_bd3e502d60a78de253dc9e7996d3a0ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bd3e502d60a78de253dc9e7996d3a0ea = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bd3e502d60a78de253dc9e7996d3a0ea, codeobj_bd3e502d60a78de253dc9e7996d3a0ea, module_scipy$integrate$_ivp$lsoda, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bd3e502d60a78de253dc9e7996d3a0ea = cache_frame_bd3e502d60a78de253dc9e7996d3a0ea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bd3e502d60a78de253dc9e7996d3a0ea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bd3e502d60a78de253dc9e7996d3a0ea ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__lsoda_solver );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__integrator );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_iwork );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_iwork == NULL );
        var_iwork = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__lsoda_solver );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__integrator );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_rwork );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rwork == NULL );
        var_rwork = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_iwork );
        tmp_subscribed_name_1 = var_iwork;
        tmp_subscript_name_1 = const_int_pos_14;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 14 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_order == NULL );
        var_order = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_rwork );
        tmp_subscribed_name_2 = var_rwork;
        tmp_subscript_name_2 = const_int_pos_11;
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 11 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_h == NULL );
        var_h = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_step_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_9;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_reshape );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_rwork );
        tmp_subscribed_name_3 = var_rwork;
        tmp_start_name_1 = const_int_pos_20;
        tmp_left_name_1 = const_int_pos_20;
        CHECK_OBJECT( var_order );
        tmp_left_name_3 = var_order;
        tmp_right_name_2 = const_int_pos_1;
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_n );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_1 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_3 == NULL) );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_n );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 170;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_order );
        tmp_left_name_4 = var_order;
        tmp_right_name_4 = const_int_pos_1;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 170;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_9785989fb33ac222304d5e166e57202d );
        frame_bd3e502d60a78de253dc9e7996d3a0ea->m_frame.f_lineno = 169;
        tmp_called_instance_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_bd3e502d60a78de253dc9e7996d3a0ea->m_frame.f_lineno = 169;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_yh == NULL );
        var_yh = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_10;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_11;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_LsodaDenseOutput );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LsodaDenseOutput );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LsodaDenseOutput" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 172;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_t_old );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_t );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 172;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_h );
        tmp_args_element_name_3 = var_h;
        CHECK_OBJECT( var_order );
        tmp_args_element_name_4 = var_order;
        CHECK_OBJECT( var_yh );
        tmp_args_element_name_5 = var_yh;
        frame_bd3e502d60a78de253dc9e7996d3a0ea->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd3e502d60a78de253dc9e7996d3a0ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd3e502d60a78de253dc9e7996d3a0ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd3e502d60a78de253dc9e7996d3a0ea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bd3e502d60a78de253dc9e7996d3a0ea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bd3e502d60a78de253dc9e7996d3a0ea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bd3e502d60a78de253dc9e7996d3a0ea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd3e502d60a78de253dc9e7996d3a0ea,
        type_description_1,
        par_self,
        var_iwork,
        var_rwork,
        var_order,
        var_h,
        var_yh
    );


    // Release cached frame.
    if ( frame_bd3e502d60a78de253dc9e7996d3a0ea == cache_frame_bd3e502d60a78de253dc9e7996d3a0ea )
    {
        Py_DECREF( frame_bd3e502d60a78de253dc9e7996d3a0ea );
    }
    cache_frame_bd3e502d60a78de253dc9e7996d3a0ea = NULL;

    assertFrameObject( frame_bd3e502d60a78de253dc9e7996d3a0ea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda$$$function_3__dense_output_impl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_iwork );
    Py_DECREF( var_iwork );
    var_iwork = NULL;

    CHECK_OBJECT( (PyObject *)var_rwork );
    Py_DECREF( var_rwork );
    var_rwork = NULL;

    CHECK_OBJECT( (PyObject *)var_order );
    Py_DECREF( var_order );
    var_order = NULL;

    CHECK_OBJECT( (PyObject *)var_h );
    Py_DECREF( var_h );
    var_h = NULL;

    CHECK_OBJECT( (PyObject *)var_yh );
    Py_DECREF( var_yh );
    var_yh = NULL;

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

    Py_XDECREF( var_iwork );
    var_iwork = NULL;

    Py_XDECREF( var_rwork );
    var_rwork = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_yh );
    var_yh = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda$$$function_3__dense_output_impl );
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


static PyObject *impl_scipy$integrate$_ivp$lsoda$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_t_old = python_pars[ 1 ];
    PyObject *par_t = python_pars[ 2 ];
    PyObject *par_h = python_pars[ 3 ];
    PyObject *par_order = python_pars[ 4 ];
    PyObject *par_yh = python_pars[ 5 ];
    struct Nuitka_FrameObject *frame_4948dda1eee675208d0810d16dec599e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4948dda1eee675208d0810d16dec599e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4948dda1eee675208d0810d16dec599e, codeobj_4948dda1eee675208d0810d16dec599e, module_scipy$integrate$_ivp$lsoda, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4948dda1eee675208d0810d16dec599e = cache_frame_4948dda1eee675208d0810d16dec599e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4948dda1eee675208d0810d16dec599e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4948dda1eee675208d0810d16dec599e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_LsodaDenseOutput );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LsodaDenseOutput );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LsodaDenseOutput" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 177;
            type_description_1 = "ooooooN";
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


            exception_lineno = 177;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_t_old );
        tmp_args_element_name_1 = par_t_old;
        CHECK_OBJECT( par_t );
        tmp_args_element_name_2 = par_t;
        frame_4948dda1eee675208d0810d16dec599e->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_h );
        tmp_assattr_name_1 = par_h;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_h, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_yh );
        tmp_assattr_name_2 = par_yh;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_yh, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 180;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_order );
        tmp_left_name_1 = par_order;
        tmp_right_name_1 = const_int_pos_1;
        tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 180;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        frame_4948dda1eee675208d0810d16dec599e->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_p, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4948dda1eee675208d0810d16dec599e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4948dda1eee675208d0810d16dec599e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4948dda1eee675208d0810d16dec599e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4948dda1eee675208d0810d16dec599e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4948dda1eee675208d0810d16dec599e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4948dda1eee675208d0810d16dec599e,
        type_description_1,
        par_self,
        par_t_old,
        par_t,
        par_h,
        par_order,
        par_yh,
        NULL
    );


    // Release cached frame.
    if ( frame_4948dda1eee675208d0810d16dec599e == cache_frame_4948dda1eee675208d0810d16dec599e )
    {
        Py_DECREF( frame_4948dda1eee675208d0810d16dec599e );
    }
    cache_frame_4948dda1eee675208d0810d16dec599e = NULL;

    assertFrameObject( frame_4948dda1eee675208d0810d16dec599e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda$$$function_4___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_t_old );
    Py_DECREF( par_t_old );
    par_t_old = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    CHECK_OBJECT( (PyObject *)par_yh );
    Py_DECREF( par_yh );
    par_yh = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t_old );
    Py_DECREF( par_t_old );
    par_t_old = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    CHECK_OBJECT( (PyObject *)par_yh );
    Py_DECREF( par_yh );
    par_yh = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda$$$function_4___init__ );
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


static PyObject *impl_scipy$integrate$_ivp$lsoda$$$function_5__call_impl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_t = python_pars[ 1 ];
    PyObject *var_x = NULL;
    struct Nuitka_FrameObject *frame_e340870677be61ae78869e24ca82fecc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e340870677be61ae78869e24ca82fecc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e340870677be61ae78869e24ca82fecc, codeobj_e340870677be61ae78869e24ca82fecc, module_scipy$integrate$_ivp$lsoda, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e340870677be61ae78869e24ca82fecc = cache_frame_e340870677be61ae78869e24ca82fecc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e340870677be61ae78869e24ca82fecc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e340870677be61ae78869e24ca82fecc ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_t );
        tmp_source_name_1 = par_t;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_t );
            tmp_left_name_3 = par_t;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_t );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 184;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 184;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_h );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 184;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 184;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_p );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 184;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 184;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_x == NULL );
            var_x = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_t );
            tmp_left_name_6 = par_t;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_t );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_h );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 186;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_p );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 186;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_tuple_slice_none_none_none_none_tuple;
            tmp_right_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 186;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_x == NULL );
            var_x = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 188;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dot );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_yh );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 188;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_args_element_name_2 = var_x;
        frame_e340870677be61ae78869e24ca82fecc->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
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
    RESTORE_FRAME_EXCEPTION( frame_e340870677be61ae78869e24ca82fecc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e340870677be61ae78869e24ca82fecc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e340870677be61ae78869e24ca82fecc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e340870677be61ae78869e24ca82fecc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e340870677be61ae78869e24ca82fecc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e340870677be61ae78869e24ca82fecc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e340870677be61ae78869e24ca82fecc,
        type_description_1,
        par_self,
        par_t,
        var_x
    );


    // Release cached frame.
    if ( frame_e340870677be61ae78869e24ca82fecc == cache_frame_e340870677be61ae78869e24ca82fecc )
    {
        Py_DECREF( frame_e340870677be61ae78869e24ca82fecc );
    }
    cache_frame_e340870677be61ae78869e24ca82fecc = NULL;

    assertFrameObject( frame_e340870677be61ae78869e24ca82fecc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda$$$function_5__call_impl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

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
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda$$$function_5__call_impl );
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



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$lsoda$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_23d10b9b9ad3e30cbfcb33b52d6bf648,
#endif
        codeobj_9a9b45ebc02809fd7fb78908ad19cb72,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$lsoda,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_2__step_impl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$lsoda$$$function_2__step_impl,
        const_str_plain__step_impl,
#if PYTHON_VERSION >= 300
        const_str_digest_16a4ab827dc4ad1e215e993ae640788b,
#endif
        codeobj_09cc08dcfeb9c8c4ae87069a0194415b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$lsoda,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_2__step_impl$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$lsoda$$$function_2__step_impl$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_525f793e651a4cb12846f467da621b1c,
#endif
        codeobj_9f3427fb41d611a7aabcac1961f6e69a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$lsoda,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_3__dense_output_impl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$lsoda$$$function_3__dense_output_impl,
        const_str_plain__dense_output_impl,
#if PYTHON_VERSION >= 300
        const_str_digest_893086fecca638d402a8abf2f3bb2b12,
#endif
        codeobj_bd3e502d60a78de253dc9e7996d3a0ea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$lsoda,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_4___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$lsoda$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_f3c1e9894d0d0c453f3f825bd48d6711,
#endif
        codeobj_4948dda1eee675208d0810d16dec599e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$lsoda,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_5__call_impl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$lsoda$$$function_5__call_impl,
        const_str_plain__call_impl,
#if PYTHON_VERSION >= 300
        const_str_digest_279376c3cdd74ada6016a8020220a7ec,
#endif
        codeobj_e340870677be61ae78869e24ca82fecc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$lsoda,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$integrate$_ivp$lsoda =
{
    PyModuleDef_HEAD_INIT,
    "scipy.integrate._ivp.lsoda",
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

MOD_INIT_DECL( scipy$integrate$_ivp$lsoda )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$integrate$_ivp$lsoda );
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
    puts("scipy.integrate._ivp.lsoda: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.integrate._ivp.lsoda: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.integrate._ivp.lsoda: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$integrate$_ivp$lsoda" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$integrate$_ivp$lsoda = Py_InitModule4(
        "scipy.integrate._ivp.lsoda",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$integrate$_ivp$lsoda = PyModule_Create( &mdef_scipy$integrate$_ivp$lsoda );
#endif

    moduledict_scipy$integrate$_ivp$lsoda = MODULE_DICT( module_scipy$integrate$_ivp$lsoda );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$integrate$_ivp$lsoda,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$integrate$_ivp$lsoda,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$integrate$_ivp$lsoda,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$integrate$_ivp$lsoda,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$integrate$_ivp$lsoda );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_4f1d03c6b8ee4255438da9cf8b3b774c, module_scipy$integrate$_ivp$lsoda );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_49d04210d29dd30a719578e3cff22ecd;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_scipy$integrate$_ivp$lsoda_7 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_beab16fd4d05eab1c069a01ae19bbc9d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_beab16fd4d05eab1c069a01ae19bbc9d_2 = NULL;
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
    PyObject *locals_scipy$integrate$_ivp$lsoda_175 = NULL;
    struct Nuitka_FrameObject *frame_41273655880c2ccdc67d657e9ab00aa5_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_41273655880c2ccdc67d657e9ab00aa5_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_49d04210d29dd30a719578e3cff22ecd = MAKE_MODULE_FRAME( codeobj_49d04210d29dd30a719578e3cff22ecd, module_scipy$integrate$_ivp$lsoda );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_49d04210d29dd30a719578e3cff22ecd );
    assert( Py_REFCNT( frame_49d04210d29dd30a719578e3cff22ecd ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$integrate$_ivp$lsoda;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_49d04210d29dd30a719578e3cff22ecd->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_5f12e9ca8524b8cfc32f0aa4d1f22377;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$integrate$_ivp$lsoda;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_ode_tuple;
        tmp_level_name_2 = const_int_0;
        frame_49d04210d29dd30a719578e3cff22ecd->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ode );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_ode, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_common;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$integrate$_ivp$lsoda;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_e049ee220aabd74c764993fbae358a76_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_49d04210d29dd30a719578e3cff22ecd->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$integrate$_ivp$lsoda,
                const_str_plain_validate_tol,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_validate_tol );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_validate_tol, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_scipy$integrate$_ivp$lsoda,
                const_str_plain_validate_first_step,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_validate_first_step );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_validate_first_step, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$integrate$_ivp$lsoda,
                const_str_plain_warn_extraneous,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_warn_extraneous );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_warn_extraneous, tmp_assign_source_9 );
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_base;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$integrate$_ivp$lsoda;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_OdeSolver_str_plain_DenseOutput_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_49d04210d29dd30a719578e3cff22ecd->m_frame.f_lineno = 4;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$integrate$_ivp$lsoda,
                const_str_plain_OdeSolver,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_OdeSolver );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_OdeSolver, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$integrate$_ivp$lsoda,
                const_str_plain_DenseOutput,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_DenseOutput );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_DenseOutput, tmp_assign_source_12 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_OdeSolver );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OdeSolver );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OdeSolver" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 7;

            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_13 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_13, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
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


            exception_lineno = 7;

            goto try_except_handler_3;
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


            exception_lineno = 7;

            goto try_except_handler_3;
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


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_15 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_3;
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


            exception_lineno = 7;

            goto try_except_handler_3;
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


            exception_lineno = 7;

            goto try_except_handler_3;
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
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 7;

                goto try_except_handler_3;
            }
            tmp_tuple_element_2 = const_str_plain_LSODA;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_49d04210d29dd30a719578e3cff22ecd->m_frame.f_lineno = 7;
            tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 7;

                goto try_except_handler_3;
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


                exception_lineno = 7;

                goto try_except_handler_3;
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


                    exception_lineno = 7;

                    goto try_except_handler_3;
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

                    exception_lineno = 7;

                    goto try_except_handler_3;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 7;

                    goto try_except_handler_3;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 7;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_3;
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
            locals_scipy$integrate$_ivp$lsoda_7 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4f1d03c6b8ee4255438da9cf8b3b774c;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$lsoda_7, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_5;
        }
        tmp_dictset_value = const_str_digest_e3b6363a77a97d963666756b661fff50;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$lsoda_7, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_5;
        }
        tmp_dictset_value = const_str_plain_LSODA;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$lsoda_7, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_5;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_beab16fd4d05eab1c069a01ae19bbc9d_2, codeobj_beab16fd4d05eab1c069a01ae19bbc9d, module_scipy$integrate$_ivp$lsoda, sizeof(void *) );
        frame_beab16fd4d05eab1c069a01ae19bbc9d_2 = cache_frame_beab16fd4d05eab1c069a01ae19bbc9d_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_beab16fd4d05eab1c069a01ae19bbc9d_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_beab16fd4d05eab1c069a01ae19bbc9d_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            tmp_tuple_element_4 = Py_None;
            tmp_defaults_1 = PyTuple_New( 9 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_float_0_0;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_4 );
            tmp_source_name_5 = PyObject_GetItem( locals_scipy$integrate$_ivp$lsoda_7, const_str_plain_np );

            if ( tmp_source_name_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_defaults_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 106;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_5 = tmp_mvar_value_4;
                Py_INCREF( tmp_source_name_5 );
                }
            }

            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_inf );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_defaults_1 );

                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_float_0_001;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_float_1eminus_06;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 5, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 6, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 7, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_False;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 8, tmp_tuple_element_4 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_1___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$lsoda_7, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_2__step_impl(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$lsoda_7, const_str_plain__step_impl, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_3__dense_output_impl(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$lsoda_7, const_str_plain__dense_output_impl, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_beab16fd4d05eab1c069a01ae19bbc9d_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_beab16fd4d05eab1c069a01ae19bbc9d_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_beab16fd4d05eab1c069a01ae19bbc9d_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_beab16fd4d05eab1c069a01ae19bbc9d_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_beab16fd4d05eab1c069a01ae19bbc9d_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_beab16fd4d05eab1c069a01ae19bbc9d_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_beab16fd4d05eab1c069a01ae19bbc9d_2 == cache_frame_beab16fd4d05eab1c069a01ae19bbc9d_2 )
        {
            Py_DECREF( frame_beab16fd4d05eab1c069a01ae19bbc9d_2 );
        }
        cache_frame_beab16fd4d05eab1c069a01ae19bbc9d_2 = NULL;

        assertFrameObject( frame_beab16fd4d05eab1c069a01ae19bbc9d_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = const_str_plain_LSODA;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
            tmp_tuple_element_5 = locals_scipy$integrate$_ivp$lsoda_7;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_49d04210d29dd30a719578e3cff22ecd->m_frame.f_lineno = 7;
            tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 7;

                goto try_except_handler_5;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_18 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF( locals_scipy$integrate$_ivp$lsoda_7 );
        locals_scipy$integrate$_ivp$lsoda_7 = NULL;
        goto try_return_handler_4;
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

        Py_DECREF( locals_scipy$integrate$_ivp$lsoda_7 );
        locals_scipy$integrate$_ivp$lsoda_7 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

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

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 7;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_LSODA, tmp_assign_source_18 );
    }
    goto try_end_3;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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

    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_DenseOutput );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DenseOutput );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DenseOutput" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 175;

            goto try_except_handler_6;
        }

        tmp_tuple_element_6 = tmp_mvar_value_5;
        tmp_assign_source_20 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_assign_source_20, 0, tmp_tuple_element_6 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;

            goto try_except_handler_6;
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


            exception_lineno = 175;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;

            goto try_except_handler_6;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;

            goto try_except_handler_6;
        }
        condexpr_end_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_22 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_22;
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


            exception_lineno = 175;

            goto try_except_handler_6;
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


            exception_lineno = 175;

            goto try_except_handler_6;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_6 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_6, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_7 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;

                goto try_except_handler_6;
            }
            tmp_tuple_element_7 = const_str_plain_LsodaDenseOutput;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_49d04210d29dd30a719578e3cff22ecd->m_frame.f_lineno = 175;
            tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;

                goto try_except_handler_6;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_23;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_8 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_8, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;

                goto try_except_handler_6;
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
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_9;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_8 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 175;

                    goto try_except_handler_6;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_8 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_9 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_9 == NULL) );
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_9 );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 175;

                    goto try_except_handler_6;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_8 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 175;

                    goto try_except_handler_6;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 175;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_6;
            }
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_24;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_scipy$integrate$_ivp$lsoda_175 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4f1d03c6b8ee4255438da9cf8b3b774c;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$lsoda_175, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;

            goto try_except_handler_8;
        }
        tmp_dictset_value = const_str_plain_LsodaDenseOutput;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$lsoda_175, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;

            goto try_except_handler_8;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_41273655880c2ccdc67d657e9ab00aa5_3, codeobj_41273655880c2ccdc67d657e9ab00aa5, module_scipy$integrate$_ivp$lsoda, sizeof(void *) );
        frame_41273655880c2ccdc67d657e9ab00aa5_3 = cache_frame_41273655880c2ccdc67d657e9ab00aa5_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_41273655880c2ccdc67d657e9ab00aa5_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_41273655880c2ccdc67d657e9ab00aa5_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_4___init__(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$lsoda_175, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$lsoda$$$function_5__call_impl(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$lsoda_175, const_str_plain__call_impl, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_41273655880c2ccdc67d657e9ab00aa5_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_41273655880c2ccdc67d657e9ab00aa5_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_41273655880c2ccdc67d657e9ab00aa5_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_41273655880c2ccdc67d657e9ab00aa5_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_41273655880c2ccdc67d657e9ab00aa5_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_41273655880c2ccdc67d657e9ab00aa5_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_41273655880c2ccdc67d657e9ab00aa5_3 == cache_frame_41273655880c2ccdc67d657e9ab00aa5_3 )
        {
            Py_DECREF( frame_41273655880c2ccdc67d657e9ab00aa5_3 );
        }
        cache_frame_41273655880c2ccdc67d657e9ab00aa5_3 = NULL;

        assertFrameObject( frame_41273655880c2ccdc67d657e9ab00aa5_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = const_str_plain_LsodaDenseOutput;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_9 );
            tmp_tuple_element_9 = locals_scipy$integrate$_ivp$lsoda_175;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_49d04210d29dd30a719578e3cff22ecd->m_frame.f_lineno = 175;
            tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;

                goto try_except_handler_8;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_25 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_25 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF( locals_scipy$integrate$_ivp$lsoda_175 );
        locals_scipy$integrate$_ivp$lsoda_175 = NULL;
        goto try_return_handler_7;
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

        Py_DECREF( locals_scipy$integrate$_ivp$lsoda_175 );
        locals_scipy$integrate$_ivp$lsoda_175 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$lsoda );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 175;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain_LsodaDenseOutput, tmp_assign_source_25 );
    }
    goto try_end_4;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_49d04210d29dd30a719578e3cff22ecd );
#endif
    popFrameStack();

    assertFrameObject( frame_49d04210d29dd30a719578e3cff22ecd );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_49d04210d29dd30a719578e3cff22ecd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_49d04210d29dd30a719578e3cff22ecd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_49d04210d29dd30a719578e3cff22ecd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_49d04210d29dd30a719578e3cff22ecd, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
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


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$lsoda, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$integrate$_ivp$lsoda );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
