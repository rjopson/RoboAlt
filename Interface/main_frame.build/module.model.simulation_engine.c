/* Generated code for Python module 'model.simulation_engine'
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

/* The "_module_model$simulation_engine" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_model$simulation_engine;
PyDictObject *moduledict_model$simulation_engine;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_TOUCHDOWN;
extern PyObject *const_str_plain_atmosphere_model;
extern PyObject *const_str_plain_LIFTOFF;
extern PyObject *const_str_plain_GRAVITY;
extern PyObject *const_str_digest_197ecfe157e9b451a973ea0f9d92345d;
extern PyObject *const_str_plain_run;
static PyObject *const_str_plain_liftoff;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_array;
static PyObject *const_str_digest_558b4debd834cf960a2a8dc2ad790a1b;
extern PyObject *const_tuple_str_plain_solve_ivp_tuple;
extern PyObject *const_str_plain_constants;
extern PyObject *const_str_plain_solve_ivp;
extern PyObject *const_str_digest_187372bd98ee54363232d41cbc94ffaa;
extern PyObject *const_str_plain_terminal;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_motor_entities;
static PyObject *const_str_digest_598d564b61303f9a7956280f80d160d6;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_digest_10dd71b41934c8a38db95813f59d2471;
extern PyObject *const_str_plain_rocket_entities;
extern PyObject *const_str_plain_timestep;
extern PyObject *const_str_plain_altitude_main_deploy;
static PyObject *const_str_digest_e02d15916467fc0bbbd46b6531dd7a77;
extern PyObject *const_str_plain_motor;
extern PyObject *const_str_plain_event_entities;
extern PyObject *const_str_plain_altitude_main;
extern PyObject *const_str_plain_time_delay;
extern PyObject *const_str_plain_subtract;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_t_str_plain_S_str_plain_acceleration_tuple;
static PyObject *const_tuple_01d2af94c42c342ede08eb581726d8fe_tuple;
static PyObject *const_str_digest_c3b3dce26a2cb0b484604d32bc0ce5c4;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_flight_phase;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_y0;
static PyObject *const_str_digest_f7228391744d4e4f91b5b362f98598b9;
extern PyObject *const_str_plain_mass;
extern PyObject *const_str_plain_direction;
static PyObject *const_str_digest_777b4c24c9c0f8233fa698d66f96348a;
extern PyObject *const_str_plain_get_drag;
extern PyObject *const_str_plain_elevation_pad;
extern PyObject *const_str_plain_aerodynamic_forces;
static PyObject *const_str_plain_apogee;
extern PyObject *const_str_plain_alpha;
static PyObject *const_str_digest_5ac29c578e335af97f3bcc29afccda40;
extern PyObject *const_str_digest_b798837470a010253773bdff3fb29005;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_BURNOUT;
extern PyObject *const_str_plain_event;
extern PyObject *const_str_plain_atmosphere;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain_dense_output;
static PyObject *const_tuple_str_plain_t_str_plain_S_str_plain_elevation_pad_tuple;
extern PyObject *const_str_plain_APOGEE;
extern PyObject *const_str_plain_config;
static PyObject *const_str_digest_bccff5d69e40527aca38aa771499ef75;
extern PyObject *const_str_plain_concatenate;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_digest_e241ba40a6bdc92d4f19f9af14c56d6c;
extern PyObject *const_float_5_0;
extern PyObject *const_str_plain_aero_force;
static PyObject *const_str_plain_touchdown;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_motor_data_entities;
extern PyObject *const_str_plain_float64;
extern PyObject *const_str_plain_user_events;
extern PyObject *const_str_plain_apply_action;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_ffc008172548edc425dfb8c22b0d0aa3;
extern PyObject *const_list_int_0_int_0_list;
extern PyObject *const_str_plain_entities;
static PyObject *const_str_plain_t_span;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_af8cc34900ff8c86ec337c4acc15f743;
static PyObject *const_str_plain_eom;
extern PyObject *const_str_plain_S;
static PyObject *const_tuple_1001b041309f20562f9774e55a12ed8a_tuple;
extern PyObject *const_float_0_01;
extern PyObject *const_str_plain_events;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_ground;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_mass_at_time;
extern PyObject *const_str_plain_ALTITUDE_MAIN;
extern PyObject *const_str_plain_max_step;
static PyObject *const_tuple_cf28a7857485e481bd0c775754b8874a_tuple;
extern PyObject *const_str_digest_d24b1d27e543dd8c27ef860638dadd16;
static PyObject *const_tuple_ef23cc9ac4fc301ffdf618933517f15f_tuple;
extern PyObject *const_str_digest_dfb57ccc0d0319c4e3975d22b497b169;
static PyObject *const_str_plain_burnout;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_time_burn;
extern PyObject *const_str_digest_5f12e9ca8524b8cfc32f0aa4d1f22377;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_thrust_at_time;
extern PyObject *const_str_plain_acceleration;
static PyObject *const_tuple_str_plain_t_str_plain_S_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_liftoff = UNSTREAM_STRING_ASCII( &constant_bin[ 2194801 ], 7, 1 );
    const_str_digest_558b4debd834cf960a2a8dc2ad790a1b = UNSTREAM_STRING_ASCII( &constant_bin[ 2204338 ], 16, 0 );
    const_str_digest_598d564b61303f9a7956280f80d160d6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2204354 ], 20, 0 );
    const_str_digest_e02d15916467fc0bbbd46b6531dd7a77 = UNSTREAM_STRING_ASCII( &constant_bin[ 2204374 ], 20, 0 );
    const_tuple_str_plain_t_str_plain_S_str_plain_acceleration_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_S_str_plain_acceleration_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_S_str_plain_acceleration_tuple, 1, const_str_plain_S ); Py_INCREF( const_str_plain_S );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_S_str_plain_acceleration_tuple, 2, const_str_plain_acceleration ); Py_INCREF( const_str_plain_acceleration );
    const_tuple_01d2af94c42c342ede08eb581726d8fe_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_01d2af94c42c342ede08eb581726d8fe_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_01d2af94c42c342ede08eb581726d8fe_tuple, 1, const_str_plain_S ); Py_INCREF( const_str_plain_S );
    PyTuple_SET_ITEM( const_tuple_01d2af94c42c342ede08eb581726d8fe_tuple, 2, const_str_plain_motor ); Py_INCREF( const_str_plain_motor );
    PyTuple_SET_ITEM( const_tuple_01d2af94c42c342ede08eb581726d8fe_tuple, 3, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_01d2af94c42c342ede08eb581726d8fe_tuple, 4, const_str_plain_alpha ); Py_INCREF( const_str_plain_alpha );
    PyTuple_SET_ITEM( const_tuple_01d2af94c42c342ede08eb581726d8fe_tuple, 5, const_str_plain_user_events ); Py_INCREF( const_str_plain_user_events );
    const_str_digest_c3b3dce26a2cb0b484604d32bc0ce5c4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2204394 ], 19, 0 );
    const_str_digest_f7228391744d4e4f91b5b362f98598b9 = UNSTREAM_STRING_ASCII( &constant_bin[ 2204413 ], 26, 0 );
    const_str_digest_777b4c24c9c0f8233fa698d66f96348a = UNSTREAM_STRING_ASCII( &constant_bin[ 2204439 ], 26, 0 );
    const_str_plain_apogee = UNSTREAM_STRING_ASCII( &constant_bin[ 2194909 ], 6, 1 );
    const_str_digest_5ac29c578e335af97f3bcc29afccda40 = UNSTREAM_STRING_ASCII( &constant_bin[ 2204465 ], 25, 0 );
    const_tuple_str_plain_t_str_plain_S_str_plain_elevation_pad_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_S_str_plain_elevation_pad_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_S_str_plain_elevation_pad_tuple, 1, const_str_plain_S ); Py_INCREF( const_str_plain_S );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_S_str_plain_elevation_pad_tuple, 2, const_str_plain_elevation_pad ); Py_INCREF( const_str_plain_elevation_pad );
    const_str_digest_bccff5d69e40527aca38aa771499ef75 = UNSTREAM_STRING_ASCII( &constant_bin[ 2204490 ], 32, 0 );
    const_str_plain_touchdown = UNSTREAM_STRING_ASCII( &constant_bin[ 2204522 ], 9, 1 );
    const_str_plain_t_span = UNSTREAM_STRING_ASCII( &constant_bin[ 2163930 ], 6, 1 );
    const_str_digest_af8cc34900ff8c86ec337c4acc15f743 = UNSTREAM_STRING_ASCII( &constant_bin[ 2204531 ], 22, 0 );
    const_str_plain_eom = UNSTREAM_STRING_ASCII( &constant_bin[ 878267 ], 3, 1 );
    const_tuple_1001b041309f20562f9774e55a12ed8a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_1001b041309f20562f9774e55a12ed8a_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_1001b041309f20562f9774e55a12ed8a_tuple, 1, const_str_plain_S ); Py_INCREF( const_str_plain_S );
    PyTuple_SET_ITEM( const_tuple_1001b041309f20562f9774e55a12ed8a_tuple, 2, const_str_plain_motor ); Py_INCREF( const_str_plain_motor );
    PyTuple_SET_ITEM( const_tuple_1001b041309f20562f9774e55a12ed8a_tuple, 3, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_1001b041309f20562f9774e55a12ed8a_tuple, 4, const_str_plain_timestep ); Py_INCREF( const_str_plain_timestep );
    PyTuple_SET_ITEM( const_tuple_1001b041309f20562f9774e55a12ed8a_tuple, 5, const_str_plain_acceleration ); Py_INCREF( const_str_plain_acceleration );
    const_str_plain_ground = UNSTREAM_STRING_ASCII( &constant_bin[ 2717 ], 6, 1 );
    const_tuple_cf28a7857485e481bd0c775754b8874a_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2204553 ], 324 );
    const_tuple_ef23cc9ac4fc301ffdf618933517f15f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ef23cc9ac4fc301ffdf618933517f15f_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_ef23cc9ac4fc301ffdf618933517f15f_tuple, 1, const_str_plain_S ); Py_INCREF( const_str_plain_S );
    PyTuple_SET_ITEM( const_tuple_ef23cc9ac4fc301ffdf618933517f15f_tuple, 2, const_str_plain_elevation_pad ); Py_INCREF( const_str_plain_elevation_pad );
    PyTuple_SET_ITEM( const_tuple_ef23cc9ac4fc301ffdf618933517f15f_tuple, 3, const_str_plain_altitude_main_deploy ); Py_INCREF( const_str_plain_altitude_main_deploy );
    const_str_plain_burnout = UNSTREAM_STRING_ASCII( &constant_bin[ 2195577 ], 7, 1 );
    const_tuple_str_plain_t_str_plain_S_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_S_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_S_tuple, 1, const_str_plain_S ); Py_INCREF( const_str_plain_S );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_model$simulation_engine( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e5cca7a11b79f5f14cc62dcb30bbced5;
static PyCodeObject *codeobj_ac663e58a2b8898188842155b7268828;
static PyCodeObject *codeobj_df1fa2f8a6a41a72521b5fbfd50552c0;
static PyCodeObject *codeobj_c8debfbdacb8807bfcb8d677b071e719;
static PyCodeObject *codeobj_b990912474f78b5cb0a8871c24b14621;
static PyCodeObject *codeobj_2a60e7f053136a58f99af27ad9b0b01d;
static PyCodeObject *codeobj_479b3a4a27d3d255017266aac9d4af3f;
static PyCodeObject *codeobj_e9ff3f417076a4d5cab69db33cc83aaf;
static PyCodeObject *codeobj_326a031ef42534616b2d86a07c906ab6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_f7228391744d4e4f91b5b362f98598b9 );
    codeobj_e5cca7a11b79f5f14cc62dcb30bbced5 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_bccff5d69e40527aca38aa771499ef75, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_ac663e58a2b8898188842155b7268828 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_acceleration, 44, const_tuple_01d2af94c42c342ede08eb581726d8fe_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_df1fa2f8a6a41a72521b5fbfd50552c0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_altitude_main, 34, const_tuple_ef23cc9ac4fc301ffdf618933517f15f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_c8debfbdacb8807bfcb8d677b071e719 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_apogee, 29, const_tuple_str_plain_t_str_plain_S_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b990912474f78b5cb0a8871c24b14621 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_burnout, 24, const_tuple_str_plain_t_str_plain_S_str_plain_acceleration_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_2a60e7f053136a58f99af27ad9b0b01d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_eom, 51, const_tuple_1001b041309f20562f9774e55a12ed8a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_479b3a4a27d3d255017266aac9d4af3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_liftoff, 19, const_tuple_str_plain_t_str_plain_S_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e9ff3f417076a4d5cab69db33cc83aaf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run, 14, const_tuple_cf28a7857485e481bd0c775754b8874a_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_326a031ef42534616b2d86a07c906ab6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_touchdown, 39, const_tuple_str_plain_t_str_plain_S_str_plain_elevation_pad_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run(  );


static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_1_liftoff(  );


static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_2_burnout(  );


static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_3_apogee(  );


static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_4_altitude_main(  );


static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_5_touchdown(  );


static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_6_acceleration(  );


static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_7_eom(  );


// The module function definitions.
static PyObject *impl_model$simulation_engine$$$function_1_run( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_config = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_motor = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_user_events = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *par_elevation_pad = PyCell_NEW1( python_pars[ 3 ] );
    PyObject *par_velocity_initial = python_pars[ 4 ];
    PyObject *par_alpha_initial = python_pars[ 5 ];
    PyObject *par_temperature_pad = python_pars[ 6 ];
    PyObject *par_time_max = python_pars[ 7 ];
    struct Nuitka_CellObject *par_timestep = PyCell_NEW1( python_pars[ 8 ] );
    struct Nuitka_CellObject *var_alpha = PyCell_EMPTY();
    PyObject *var_t_start = NULL;
    PyObject *var_liftoff = NULL;
    PyObject *var_burnout = NULL;
    PyObject *var_apogee = NULL;
    PyObject *var_altitude_main = NULL;
    PyObject *var_touchdown = NULL;
    struct Nuitka_CellObject *var_acceleration = PyCell_EMPTY();
    PyObject *var_flight_events = NULL;
    PyObject *var_eom = NULL;
    PyObject *var_main_check = NULL;
    PyObject *var_user_event = NULL;
    struct Nuitka_CellObject *var_altitude_main_deploy = PyCell_EMPTY();
    PyObject *var_altitude = NULL;
    PyObject *var_velocity = NULL;
    PyObject *var_time = NULL;
    PyObject *var_index = NULL;
    PyObject *var_event = NULL;
    PyObject *var_S0 = NULL;
    PyObject *var_t_end = NULL;
    PyObject *var_solution = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e9ff3f417076a4d5cab69db33cc83aaf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e9ff3f417076a4d5cab69db33cc83aaf = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_float_0_0;
        assert( PyCell_GET( var_alpha ) == NULL );
        Py_INCREF( tmp_assign_source_1 );
        PyCell_SET( var_alpha, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_float_0_0;
        assert( var_t_start == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_t_start = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_1_liftoff(  );



        assert( var_liftoff == NULL );
        var_liftoff = tmp_assign_source_3;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e9ff3f417076a4d5cab69db33cc83aaf, codeobj_e9ff3f417076a4d5cab69db33cc83aaf, module_model$simulation_engine, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e9ff3f417076a4d5cab69db33cc83aaf = cache_frame_e9ff3f417076a4d5cab69db33cc83aaf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e9ff3f417076a4d5cab69db33cc83aaf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e9ff3f417076a4d5cab69db33cc83aaf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_True;
        CHECK_OBJECT( var_liftoff );
        tmp_assattr_target_1 = var_liftoff;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_terminal, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = const_int_pos_1;
        CHECK_OBJECT( var_liftoff );
        tmp_assattr_target_2 = var_liftoff;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_direction, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_2_burnout(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] = var_acceleration;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] );


        assert( var_burnout == NULL );
        var_burnout = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = Py_True;
        CHECK_OBJECT( var_burnout );
        tmp_assattr_target_3 = var_burnout;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_terminal, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = const_int_neg_1;
        CHECK_OBJECT( var_burnout );
        tmp_assattr_target_4 = var_burnout;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_direction, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_3_apogee(  );



        assert( var_apogee == NULL );
        var_apogee = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = Py_True;
        CHECK_OBJECT( var_apogee );
        tmp_assattr_target_5 = var_apogee;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_terminal, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = const_int_neg_1;
        CHECK_OBJECT( var_apogee );
        tmp_assattr_target_6 = var_apogee;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_direction, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_4_altitude_main(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] = var_altitude_main_deploy;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[1] = par_elevation_pad;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[1] );


        assert( var_altitude_main == NULL );
        var_altitude_main = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_name_7 = Py_True;
        CHECK_OBJECT( var_altitude_main );
        tmp_assattr_target_7 = var_altitude_main;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_terminal, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = const_int_neg_1;
        CHECK_OBJECT( var_altitude_main );
        tmp_assattr_target_8 = var_altitude_main;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_direction, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_5_touchdown(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] = par_elevation_pad;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] );


        assert( var_touchdown == NULL );
        var_touchdown = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = Py_True;
        CHECK_OBJECT( var_touchdown );
        tmp_assattr_target_9 = var_touchdown;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_terminal, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_name_10 = const_int_neg_1;
        CHECK_OBJECT( var_touchdown );
        tmp_assattr_target_10 = var_touchdown;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_direction, tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_6_acceleration(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] = var_alpha;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] = par_config;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[2] = par_motor;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[3] = par_user_events;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[3] );


        assert( PyCell_GET( var_acceleration ) == NULL );
        PyCell_SET( var_acceleration, tmp_assign_source_8 );

    }
    {
        PyObject *tmp_assign_source_9;
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
        tmp_dict_key_1 = const_str_plain_LIFTOFF;
        CHECK_OBJECT( var_liftoff );
        tmp_dict_value_1 = var_liftoff;
        tmp_assign_source_9 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_BURNOUT;
        CHECK_OBJECT( var_burnout );
        tmp_dict_value_2 = var_burnout;
        tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_APOGEE;
        CHECK_OBJECT( var_apogee );
        tmp_dict_value_3 = var_apogee;
        tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_ALTITUDE_MAIN;
        CHECK_OBJECT( var_altitude_main );
        tmp_dict_value_4 = var_altitude_main;
        tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_TOUCHDOWN;
        CHECK_OBJECT( var_touchdown );
        tmp_dict_value_5 = var_touchdown;
        tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        assert( var_flight_events == NULL );
        var_flight_events = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_7_eom(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[0] = var_acceleration;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[1] = par_config;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[2] = par_motor;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[3] = par_timestep;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[3] );


        assert( var_eom == NULL );
        var_eom = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_False;
        assert( var_main_check == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_main_check = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( PyCell_GET( par_user_events ) );
        tmp_iter_arg_1 = PyCell_GET( par_user_events );
        tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ccccooooccoooooocoooocoooooooo";
                exception_lineno = 59;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_14 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_user_event;
            var_user_event = tmp_assign_source_14;
            Py_INCREF( var_user_event );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_user_event );
        tmp_source_name_1 = var_user_event;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_event );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_str_plain_ALTITUDE_MAIN;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_15;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( var_user_event );
            tmp_source_name_2 = var_user_event;
            tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_altitude_main_deploy );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "ccccooooccoooooocoooocoooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = PyCell_GET( var_altitude_main_deploy );
                PyCell_SET( var_altitude_main_deploy, tmp_assign_source_15 );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = Py_True;
            {
                PyObject *old = var_main_check;
                var_main_check = tmp_assign_source_16;
                Py_INCREF( var_main_check );
                Py_XDECREF( old );
            }

        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "ccccooooccoooooocoooocoooooooo";
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if ( var_main_check == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "main_check" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 63;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = var_main_check;
        tmp_compexpr_right_2 = Py_False;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT( var_flight_events );
        tmp_dictdel_dict = var_flight_events;
        tmp_dictdel_key = const_str_plain_ALTITUDE_MAIN;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 67;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_elevation_pad ) );
        tmp_list_element_1 = PyCell_GET( par_elevation_pad );
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_float64 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 67;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_altitude == NULL );
        var_altitude = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_list_element_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 68;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_array );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_velocity_initial );
        tmp_list_element_2 = par_velocity_initial;
        tmp_args_element_name_3 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_2 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 68;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_float64 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 68;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_velocity == NULL );
        var_velocity = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_list_element_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 69;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_5;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_array );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_t_start );
        tmp_list_element_3 = var_t_start;
        tmp_args_element_name_5 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_3 );
        PyList_SET_ITEM( tmp_args_element_name_5, 0, tmp_list_element_3 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_6;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_float64 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 69;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_time == NULL );
        var_time = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = const_int_0;
        assert( var_index == NULL );
        Py_INCREF( tmp_assign_source_20 );
        var_index = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( var_flight_events );
        tmp_iter_arg_2 = var_flight_events;
        tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_21;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_22 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_22 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ccccooooccoooooocoooocoooooooo";
                exception_lineno = 72;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_22;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_23 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_event;
            var_event = tmp_assign_source_23;
            Py_INCREF( var_event );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_list_element_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        if ( var_altitude == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "altitude" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 74;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_subscribed_name_1 = var_altitude;
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_list_element_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        if ( tmp_list_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_24 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_assign_source_24, 0, tmp_list_element_4 );
        if ( var_velocity == NULL )
        {
            Py_DECREF( tmp_assign_source_24 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "velocity" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 74;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_subscribed_name_2 = var_velocity;
        tmp_subscript_name_2 = const_int_neg_1;
        tmp_list_element_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
        if ( tmp_list_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_24 );

            exception_lineno = 74;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        PyList_SET_ITEM( tmp_assign_source_24, 1, tmp_list_element_4 );
        {
            PyObject *old = var_S0;
            var_S0 = tmp_assign_source_24;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        if ( var_time == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 75;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_subscribed_name_3 = var_time;
        tmp_subscript_name_3 = const_int_neg_1;
        tmp_assign_source_25 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_t_start;
            assert( old != NULL );
            var_t_start = tmp_assign_source_25;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( par_time_max );
        tmp_assign_source_26 = par_time_max;
        {
            PyObject *old = var_t_end;
            var_t_end = tmp_assign_source_26;
            Py_INCREF( var_t_end );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_list_element_5;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_solve_ivp );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_ivp );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_ivp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 79;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_4 = tmp_mvar_value_7;
        tmp_dict_key_6 = const_str_plain_fun;
        CHECK_OBJECT( var_eom );
        tmp_dict_value_6 = var_eom;
        tmp_kw_name_1 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_t_span;
        CHECK_OBJECT( var_t_start );
        tmp_list_element_5 = var_t_start;
        tmp_dict_value_7 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_5 );
        PyList_SET_ITEM( tmp_dict_value_7, 0, tmp_list_element_5 );
        CHECK_OBJECT( var_t_end );
        tmp_list_element_5 = var_t_end;
        Py_INCREF( tmp_list_element_5 );
        PyList_SET_ITEM( tmp_dict_value_7, 1, tmp_list_element_5 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_y0;
        CHECK_OBJECT( var_S0 );
        tmp_dict_value_8 = var_S0;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_dense_output;
        tmp_dict_value_9 = Py_True;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_events;
        CHECK_OBJECT( var_flight_events );
        tmp_dict_name_1 = var_flight_events;
        CHECK_OBJECT( var_event );
        tmp_key_name_1 = var_event;
        tmp_dict_value_10 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_dict_value_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 79;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_10, tmp_dict_value_10 );
        Py_DECREF( tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_max_step;
        CHECK_OBJECT( PyCell_GET( par_timestep ) );
        tmp_dict_value_11 = PyCell_GET( par_timestep );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 79;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_solution;
            var_solution = tmp_assign_source_27;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_11;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 80;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_9 = tmp_mvar_value_8;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_concatenate );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        if ( var_altitude == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "altitude" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = var_altitude;
        tmp_args_element_name_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_7, 0, tmp_tuple_element_1 );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_10 = tmp_mvar_value_9;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_array );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 80;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_solution );
        tmp_source_name_11 = var_solution;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_y );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 80;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_name_4 = const_int_0;
        tmp_args_element_name_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 80;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_12 = tmp_mvar_value_10;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_float64 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 80;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 80;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_7, 1, tmp_tuple_element_1 );
        frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_altitude;
            var_altitude = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_source_name_15;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 81;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_13 = tmp_mvar_value_11;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_concatenate );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        if ( var_velocity == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "velocity" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_2 = var_velocity;
        tmp_args_element_name_10 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_10, 0, tmp_tuple_element_2 );
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_14 = tmp_mvar_value_12;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_array );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 81;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_solution );
        tmp_source_name_15 = var_solution;
        tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_y );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 81;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_name_5 = const_int_pos_1;
        tmp_args_element_name_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 1 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 81;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_11 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_16 = tmp_mvar_value_13;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_float64 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_11 );

            exception_lineno = 81;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_11 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 81;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_10, 1, tmp_tuple_element_2 );
        frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_velocity;
            var_velocity = tmp_assign_source_29;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_source_name_19;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_16;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 82;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_17 = tmp_mvar_value_14;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_concatenate );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        if ( var_time == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_3 = var_time;
        tmp_args_element_name_13 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_13, 0, tmp_tuple_element_3 );
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_18 = tmp_mvar_value_15;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_array );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_13 );

            exception_lineno = 82;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_solution );
        tmp_source_name_19 = var_solution;
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_t );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_13 );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 82;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_13 );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_20 = tmp_mvar_value_16;
        tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_float64 );
        if ( tmp_args_element_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_13 );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_14 );

            exception_lineno = 82;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_14 );
        Py_DECREF( tmp_args_element_name_15 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_13 );

            exception_lineno = 82;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_13, 1, tmp_tuple_element_3 );
        frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_time;
            var_time = tmp_assign_source_30;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT( PyCell_GET( par_user_events ) );
        tmp_iter_arg_3 = PyCell_GET( par_user_events );
        tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_3 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_31;
            Py_XDECREF( old );
        }

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
                type_description_1 = "ccccooooccoooooocoooocoooooooo";
                exception_lineno = 85;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_32;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT( tmp_for_loop_3__iter_value );
        tmp_assign_source_33 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_user_event;
            var_user_event = tmp_assign_source_33;
            Py_INCREF( var_user_event );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_21;
        CHECK_OBJECT( var_user_event );
        tmp_source_name_21 = var_user_event;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_event );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_event );
        tmp_compexpr_right_3 = var_event;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_22;
            CHECK_OBJECT( var_user_event );
            tmp_source_name_22 = var_user_event;
            tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_time_delay );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "ccccooooccoooooocoooocoooooooo";
                goto try_except_handler_4;
            }
            tmp_compexpr_right_4 = const_float_0_0;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "ccccooooccoooooocoooocoooooooo";
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
                PyObject *tmp_assign_source_34;
                PyObject *tmp_list_element_6;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_7;
                if ( var_altitude == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "altitude" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 90;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_subscribed_name_6 = var_altitude;
                tmp_subscript_name_6 = const_int_neg_1;
                tmp_list_element_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, -1 );
                if ( tmp_list_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 90;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_34 = PyList_New( 2 );
                PyList_SET_ITEM( tmp_assign_source_34, 0, tmp_list_element_6 );
                if ( var_velocity == NULL )
                {
                    Py_DECREF( tmp_assign_source_34 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "velocity" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 90;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_subscribed_name_7 = var_velocity;
                tmp_subscript_name_7 = const_int_neg_1;
                tmp_list_element_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, -1 );
                if ( tmp_list_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_assign_source_34 );

                    exception_lineno = 90;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                PyList_SET_ITEM( tmp_assign_source_34, 1, tmp_list_element_6 );
                {
                    PyObject *old = var_S0;
                    var_S0 = tmp_assign_source_34;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_35;
                PyObject *tmp_called_name_11;
                PyObject *tmp_mvar_value_17;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_12;
                PyObject *tmp_dict_value_12;
                PyObject *tmp_dict_key_13;
                PyObject *tmp_dict_value_13;
                PyObject *tmp_list_element_7;
                PyObject *tmp_subscribed_name_8;
                PyObject *tmp_subscript_name_8;
                PyObject *tmp_left_name_1;
                PyObject *tmp_subscribed_name_9;
                PyObject *tmp_subscript_name_9;
                PyObject *tmp_right_name_1;
                PyObject *tmp_source_name_23;
                PyObject *tmp_dict_key_14;
                PyObject *tmp_dict_value_14;
                PyObject *tmp_dict_key_15;
                PyObject *tmp_dict_value_15;
                PyObject *tmp_dict_key_16;
                PyObject *tmp_dict_value_16;
                PyObject *tmp_mvar_value_18;
                PyObject *tmp_dict_key_17;
                PyObject *tmp_dict_value_17;
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_solve_ivp );

                if (unlikely( tmp_mvar_value_17 == NULL ))
                {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_ivp );
                }

                if ( tmp_mvar_value_17 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_ivp" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 91;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_11 = tmp_mvar_value_17;
                tmp_dict_key_12 = const_str_plain_fun;
                CHECK_OBJECT( var_eom );
                tmp_dict_value_12 = var_eom;
                tmp_kw_name_2 = _PyDict_NewPresized( 6 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_12, tmp_dict_value_12 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_13 = const_str_plain_t_span;
                if ( var_time == NULL )
                {
                    Py_DECREF( tmp_kw_name_2 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "time" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 91;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_subscribed_name_8 = var_time;
                tmp_subscript_name_8 = const_int_neg_1;
                tmp_list_element_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, -1 );
                if ( tmp_list_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 91;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                tmp_dict_value_13 = PyList_New( 2 );
                PyList_SET_ITEM( tmp_dict_value_13, 0, tmp_list_element_7 );
                if ( var_time == NULL )
                {
                    Py_DECREF( tmp_kw_name_2 );
                    Py_DECREF( tmp_dict_value_13 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "time" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 91;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_subscribed_name_9 = var_time;
                tmp_subscript_name_9 = const_int_neg_1;
                tmp_left_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, -1 );
                if ( tmp_left_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_kw_name_2 );
                    Py_DECREF( tmp_dict_value_13 );

                    exception_lineno = 91;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_user_event );
                tmp_source_name_23 = var_user_event;
                tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_time_delay );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_kw_name_2 );
                    Py_DECREF( tmp_dict_value_13 );
                    Py_DECREF( tmp_left_name_1 );

                    exception_lineno = 91;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                tmp_list_element_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_list_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_kw_name_2 );
                    Py_DECREF( tmp_dict_value_13 );

                    exception_lineno = 91;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                PyList_SET_ITEM( tmp_dict_value_13, 1, tmp_list_element_7 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_13, tmp_dict_value_13 );
                Py_DECREF( tmp_dict_value_13 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_14 = const_str_plain_y0;
                CHECK_OBJECT( var_S0 );
                tmp_dict_value_14 = var_S0;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_14, tmp_dict_value_14 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_15 = const_str_plain_dense_output;
                tmp_dict_value_15 = Py_True;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_15, tmp_dict_value_15 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_16 = const_str_plain_events;
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_ground );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ground );
                }

                if ( tmp_mvar_value_18 == NULL )
                {
                    Py_DECREF( tmp_kw_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ground" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 91;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_dict_value_16 = tmp_mvar_value_18;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_16, tmp_dict_value_16 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_17 = const_str_plain_max_step;
                CHECK_OBJECT( PyCell_GET( par_timestep ) );
                tmp_dict_value_17 = PyCell_GET( par_timestep );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_17, tmp_dict_value_17 );
                assert( !(tmp_res != 0) );
                frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 91;
                tmp_assign_source_35 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_11, tmp_kw_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_assign_source_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 91;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_solution;
                    var_solution = tmp_assign_source_35;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_36;
                PyObject *tmp_called_name_12;
                PyObject *tmp_source_name_24;
                PyObject *tmp_mvar_value_19;
                PyObject *tmp_args_element_name_16;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_called_name_13;
                PyObject *tmp_source_name_25;
                PyObject *tmp_mvar_value_20;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_subscribed_name_10;
                PyObject *tmp_source_name_26;
                PyObject *tmp_subscript_name_10;
                PyObject *tmp_args_element_name_18;
                PyObject *tmp_source_name_27;
                PyObject *tmp_mvar_value_21;
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 92;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_24 = tmp_mvar_value_19;
                tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_concatenate );
                if ( tmp_called_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 92;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                if ( var_altitude == NULL )
                {
                    Py_DECREF( tmp_called_name_12 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "altitude" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 92;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_tuple_element_4 = var_altitude;
                tmp_args_element_name_16 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_args_element_name_16, 0, tmp_tuple_element_4 );
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_20 == NULL )
                {
                    Py_DECREF( tmp_called_name_12 );
                    Py_DECREF( tmp_args_element_name_16 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 92;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_25 = tmp_mvar_value_20;
                tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_array );
                if ( tmp_called_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_12 );
                    Py_DECREF( tmp_args_element_name_16 );

                    exception_lineno = 92;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_solution );
                tmp_source_name_26 = var_solution;
                tmp_subscribed_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_y );
                if ( tmp_subscribed_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_12 );
                    Py_DECREF( tmp_args_element_name_16 );
                    Py_DECREF( tmp_called_name_13 );

                    exception_lineno = 92;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                tmp_subscript_name_10 = const_int_0;
                tmp_args_element_name_17 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, 0 );
                Py_DECREF( tmp_subscribed_name_10 );
                if ( tmp_args_element_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_12 );
                    Py_DECREF( tmp_args_element_name_16 );
                    Py_DECREF( tmp_called_name_13 );

                    exception_lineno = 92;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_21 == NULL ))
                {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_21 == NULL )
                {
                    Py_DECREF( tmp_called_name_12 );
                    Py_DECREF( tmp_args_element_name_16 );
                    Py_DECREF( tmp_called_name_13 );
                    Py_DECREF( tmp_args_element_name_17 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 92;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_27 = tmp_mvar_value_21;
                tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_float64 );
                if ( tmp_args_element_name_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_12 );
                    Py_DECREF( tmp_args_element_name_16 );
                    Py_DECREF( tmp_called_name_13 );
                    Py_DECREF( tmp_args_element_name_17 );

                    exception_lineno = 92;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 92;
                {
                    PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
                    tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
                }

                Py_DECREF( tmp_called_name_13 );
                Py_DECREF( tmp_args_element_name_17 );
                Py_DECREF( tmp_args_element_name_18 );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_12 );
                    Py_DECREF( tmp_args_element_name_16 );

                    exception_lineno = 92;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_args_element_name_16, 1, tmp_tuple_element_4 );
                frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 92;
                {
                    PyObject *call_args[] = { tmp_args_element_name_16 };
                    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
                }

                Py_DECREF( tmp_called_name_12 );
                Py_DECREF( tmp_args_element_name_16 );
                if ( tmp_assign_source_36 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 92;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_altitude;
                    var_altitude = tmp_assign_source_36;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_37;
                PyObject *tmp_called_name_14;
                PyObject *tmp_source_name_28;
                PyObject *tmp_mvar_value_22;
                PyObject *tmp_args_element_name_19;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_called_name_15;
                PyObject *tmp_source_name_29;
                PyObject *tmp_mvar_value_23;
                PyObject *tmp_args_element_name_20;
                PyObject *tmp_subscribed_name_11;
                PyObject *tmp_source_name_30;
                PyObject *tmp_subscript_name_11;
                PyObject *tmp_args_element_name_21;
                PyObject *tmp_source_name_31;
                PyObject *tmp_mvar_value_24;
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 93;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_28 = tmp_mvar_value_22;
                tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_concatenate );
                if ( tmp_called_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 93;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                if ( var_velocity == NULL )
                {
                    Py_DECREF( tmp_called_name_14 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "velocity" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 93;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_tuple_element_5 = var_velocity;
                tmp_args_element_name_19 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_element_name_19, 0, tmp_tuple_element_5 );
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_23 == NULL ))
                {
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_23 == NULL )
                {
                    Py_DECREF( tmp_called_name_14 );
                    Py_DECREF( tmp_args_element_name_19 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 93;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_29 = tmp_mvar_value_23;
                tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_array );
                if ( tmp_called_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_14 );
                    Py_DECREF( tmp_args_element_name_19 );

                    exception_lineno = 93;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_solution );
                tmp_source_name_30 = var_solution;
                tmp_subscribed_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_y );
                if ( tmp_subscribed_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_14 );
                    Py_DECREF( tmp_args_element_name_19 );
                    Py_DECREF( tmp_called_name_15 );

                    exception_lineno = 93;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                tmp_subscript_name_11 = const_int_pos_1;
                tmp_args_element_name_20 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_11, tmp_subscript_name_11, 1 );
                Py_DECREF( tmp_subscribed_name_11 );
                if ( tmp_args_element_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_14 );
                    Py_DECREF( tmp_args_element_name_19 );
                    Py_DECREF( tmp_called_name_15 );

                    exception_lineno = 93;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_24 == NULL ))
                {
                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_24 == NULL )
                {
                    Py_DECREF( tmp_called_name_14 );
                    Py_DECREF( tmp_args_element_name_19 );
                    Py_DECREF( tmp_called_name_15 );
                    Py_DECREF( tmp_args_element_name_20 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 93;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_31 = tmp_mvar_value_24;
                tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_float64 );
                if ( tmp_args_element_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_14 );
                    Py_DECREF( tmp_args_element_name_19 );
                    Py_DECREF( tmp_called_name_15 );
                    Py_DECREF( tmp_args_element_name_20 );

                    exception_lineno = 93;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 93;
                {
                    PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
                    tmp_tuple_element_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
                }

                Py_DECREF( tmp_called_name_15 );
                Py_DECREF( tmp_args_element_name_20 );
                Py_DECREF( tmp_args_element_name_21 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_14 );
                    Py_DECREF( tmp_args_element_name_19 );

                    exception_lineno = 93;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_args_element_name_19, 1, tmp_tuple_element_5 );
                frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 93;
                {
                    PyObject *call_args[] = { tmp_args_element_name_19 };
                    tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
                }

                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_element_name_19 );
                if ( tmp_assign_source_37 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 93;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_velocity;
                    var_velocity = tmp_assign_source_37;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_38;
                PyObject *tmp_called_name_16;
                PyObject *tmp_source_name_32;
                PyObject *tmp_mvar_value_25;
                PyObject *tmp_args_element_name_22;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_called_name_17;
                PyObject *tmp_source_name_33;
                PyObject *tmp_mvar_value_26;
                PyObject *tmp_args_element_name_23;
                PyObject *tmp_source_name_34;
                PyObject *tmp_args_element_name_24;
                PyObject *tmp_source_name_35;
                PyObject *tmp_mvar_value_27;
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 94;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_32 = tmp_mvar_value_25;
                tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_concatenate );
                if ( tmp_called_name_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 94;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                if ( var_time == NULL )
                {
                    Py_DECREF( tmp_called_name_16 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "time" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 94;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_tuple_element_6 = var_time;
                tmp_args_element_name_22 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_args_element_name_22, 0, tmp_tuple_element_6 );
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_26 == NULL ))
                {
                    tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_26 == NULL )
                {
                    Py_DECREF( tmp_called_name_16 );
                    Py_DECREF( tmp_args_element_name_22 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 94;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_33 = tmp_mvar_value_26;
                tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_array );
                if ( tmp_called_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_16 );
                    Py_DECREF( tmp_args_element_name_22 );

                    exception_lineno = 94;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_solution );
                tmp_source_name_34 = var_solution;
                tmp_args_element_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_t );
                if ( tmp_args_element_name_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_16 );
                    Py_DECREF( tmp_args_element_name_22 );
                    Py_DECREF( tmp_called_name_17 );

                    exception_lineno = 94;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_27 == NULL ))
                {
                    tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_27 == NULL )
                {
                    Py_DECREF( tmp_called_name_16 );
                    Py_DECREF( tmp_args_element_name_22 );
                    Py_DECREF( tmp_called_name_17 );
                    Py_DECREF( tmp_args_element_name_23 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 94;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_35 = tmp_mvar_value_27;
                tmp_args_element_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_float64 );
                if ( tmp_args_element_name_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_16 );
                    Py_DECREF( tmp_args_element_name_22 );
                    Py_DECREF( tmp_called_name_17 );
                    Py_DECREF( tmp_args_element_name_23 );

                    exception_lineno = 94;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 94;
                {
                    PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
                    tmp_tuple_element_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
                }

                Py_DECREF( tmp_called_name_17 );
                Py_DECREF( tmp_args_element_name_23 );
                Py_DECREF( tmp_args_element_name_24 );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_16 );
                    Py_DECREF( tmp_args_element_name_22 );

                    exception_lineno = 94;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_args_element_name_22, 1, tmp_tuple_element_6 );
                frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 94;
                {
                    PyObject *call_args[] = { tmp_args_element_name_22 };
                    tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
                }

                Py_DECREF( tmp_called_name_16 );
                Py_DECREF( tmp_args_element_name_22 );
                if ( tmp_assign_source_38 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 94;
                    type_description_1 = "ccccooooccoooooocoooocoooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_time;
                    var_time = tmp_assign_source_38;
                    Py_XDECREF( old );
                }

            }
            branch_no_4:;
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( var_user_event );
            tmp_called_instance_1 = var_user_event;
            frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 97;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_apply_action );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "ccccooooccoooooocoooocoooooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_3:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ccccooooccoooooocoooocoooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_2;
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

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_len_arg_1;
        if ( var_altitude == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "altitude" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_len_arg_1 = var_altitude;
        tmp_assign_source_39 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_index;
            assert( old != NULL );
            var_index = tmp_assign_source_39;
            Py_DECREF( old );
        }

    }
    CHECK_OBJECT( var_index );
    tmp_dictset_value = var_index;
    CHECK_OBJECT( var_flight_events );
    tmp_dictset_dict = var_flight_events;
    CHECK_OBJECT( var_event );
    tmp_dictset_key = var_event;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "ccccooooccoooooocoooocoooooooo";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ccccooooccoooooocoooocoooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_18;
        PyObject *tmp_source_name_36;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_36 = tmp_mvar_value_28;
        tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_subtract );
        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_altitude == NULL )
        {
            Py_DECREF( tmp_called_name_18 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "altitude" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_25 = var_altitude;
        CHECK_OBJECT( PyCell_GET( par_elevation_pad ) );
        tmp_args_element_name_26 = PyCell_GET( par_elevation_pad );
        frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26 };
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_called_name_18 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_altitude;
            var_altitude = tmp_assign_source_40;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_tuple_element_7;
        if ( var_time == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 104;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_7 = var_time;
        tmp_return_value = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_7 );
        CHECK_OBJECT( var_flight_events );
        tmp_tuple_element_7 = var_flight_events;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_7 );
        CHECK_OBJECT( var_altitude );
        tmp_tuple_element_7 = var_altitude;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_7 );
        if ( var_velocity == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "velocity" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 104;
            type_description_1 = "ccccooooccoooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_7 = var_velocity;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_7 );
        CHECK_OBJECT( PyCell_GET( var_alpha ) );
        tmp_tuple_element_7 = PyCell_GET( var_alpha );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_7 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9ff3f417076a4d5cab69db33cc83aaf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9ff3f417076a4d5cab69db33cc83aaf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9ff3f417076a4d5cab69db33cc83aaf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e9ff3f417076a4d5cab69db33cc83aaf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e9ff3f417076a4d5cab69db33cc83aaf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e9ff3f417076a4d5cab69db33cc83aaf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e9ff3f417076a4d5cab69db33cc83aaf,
        type_description_1,
        par_config,
        par_motor,
        par_user_events,
        par_elevation_pad,
        par_velocity_initial,
        par_alpha_initial,
        par_temperature_pad,
        par_time_max,
        par_timestep,
        var_alpha,
        var_t_start,
        var_liftoff,
        var_burnout,
        var_apogee,
        var_altitude_main,
        var_touchdown,
        var_acceleration,
        var_flight_events,
        var_eom,
        var_main_check,
        var_user_event,
        var_altitude_main_deploy,
        var_altitude,
        var_velocity,
        var_time,
        var_index,
        var_event,
        var_S0,
        var_t_end,
        var_solution
    );


    // Release cached frame.
    if ( frame_e9ff3f417076a4d5cab69db33cc83aaf == cache_frame_e9ff3f417076a4d5cab69db33cc83aaf )
    {
        Py_DECREF( frame_e9ff3f417076a4d5cab69db33cc83aaf );
    }
    cache_frame_e9ff3f417076a4d5cab69db33cc83aaf = NULL;

    assertFrameObject( frame_e9ff3f417076a4d5cab69db33cc83aaf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_motor );
    Py_DECREF( par_motor );
    par_motor = NULL;

    CHECK_OBJECT( (PyObject *)par_user_events );
    Py_DECREF( par_user_events );
    par_user_events = NULL;

    CHECK_OBJECT( (PyObject *)par_elevation_pad );
    Py_DECREF( par_elevation_pad );
    par_elevation_pad = NULL;

    CHECK_OBJECT( (PyObject *)par_velocity_initial );
    Py_DECREF( par_velocity_initial );
    par_velocity_initial = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha_initial );
    Py_DECREF( par_alpha_initial );
    par_alpha_initial = NULL;

    CHECK_OBJECT( (PyObject *)par_temperature_pad );
    Py_DECREF( par_temperature_pad );
    par_temperature_pad = NULL;

    CHECK_OBJECT( (PyObject *)par_time_max );
    Py_DECREF( par_time_max );
    par_time_max = NULL;

    CHECK_OBJECT( (PyObject *)par_timestep );
    Py_DECREF( par_timestep );
    par_timestep = NULL;

    CHECK_OBJECT( (PyObject *)var_alpha );
    Py_DECREF( var_alpha );
    var_alpha = NULL;

    CHECK_OBJECT( (PyObject *)var_t_start );
    Py_DECREF( var_t_start );
    var_t_start = NULL;

    CHECK_OBJECT( (PyObject *)var_liftoff );
    Py_DECREF( var_liftoff );
    var_liftoff = NULL;

    CHECK_OBJECT( (PyObject *)var_burnout );
    Py_DECREF( var_burnout );
    var_burnout = NULL;

    CHECK_OBJECT( (PyObject *)var_apogee );
    Py_DECREF( var_apogee );
    var_apogee = NULL;

    CHECK_OBJECT( (PyObject *)var_altitude_main );
    Py_DECREF( var_altitude_main );
    var_altitude_main = NULL;

    CHECK_OBJECT( (PyObject *)var_touchdown );
    Py_DECREF( var_touchdown );
    var_touchdown = NULL;

    CHECK_OBJECT( (PyObject *)var_acceleration );
    Py_DECREF( var_acceleration );
    var_acceleration = NULL;

    CHECK_OBJECT( (PyObject *)var_flight_events );
    Py_DECREF( var_flight_events );
    var_flight_events = NULL;

    CHECK_OBJECT( (PyObject *)var_eom );
    Py_DECREF( var_eom );
    var_eom = NULL;

    Py_XDECREF( var_main_check );
    var_main_check = NULL;

    Py_XDECREF( var_user_event );
    var_user_event = NULL;

    CHECK_OBJECT( (PyObject *)var_altitude_main_deploy );
    Py_DECREF( var_altitude_main_deploy );
    var_altitude_main_deploy = NULL;

    CHECK_OBJECT( (PyObject *)var_altitude );
    Py_DECREF( var_altitude );
    var_altitude = NULL;

    Py_XDECREF( var_velocity );
    var_velocity = NULL;

    Py_XDECREF( var_time );
    var_time = NULL;

    CHECK_OBJECT( (PyObject *)var_index );
    Py_DECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_event );
    var_event = NULL;

    Py_XDECREF( var_S0 );
    var_S0 = NULL;

    Py_XDECREF( var_t_end );
    var_t_end = NULL;

    Py_XDECREF( var_solution );
    var_solution = NULL;

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

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_motor );
    Py_DECREF( par_motor );
    par_motor = NULL;

    CHECK_OBJECT( (PyObject *)par_user_events );
    Py_DECREF( par_user_events );
    par_user_events = NULL;

    CHECK_OBJECT( (PyObject *)par_elevation_pad );
    Py_DECREF( par_elevation_pad );
    par_elevation_pad = NULL;

    CHECK_OBJECT( (PyObject *)par_velocity_initial );
    Py_DECREF( par_velocity_initial );
    par_velocity_initial = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha_initial );
    Py_DECREF( par_alpha_initial );
    par_alpha_initial = NULL;

    CHECK_OBJECT( (PyObject *)par_temperature_pad );
    Py_DECREF( par_temperature_pad );
    par_temperature_pad = NULL;

    CHECK_OBJECT( (PyObject *)par_time_max );
    Py_DECREF( par_time_max );
    par_time_max = NULL;

    CHECK_OBJECT( (PyObject *)par_timestep );
    Py_DECREF( par_timestep );
    par_timestep = NULL;

    CHECK_OBJECT( (PyObject *)var_alpha );
    Py_DECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_t_start );
    var_t_start = NULL;

    CHECK_OBJECT( (PyObject *)var_liftoff );
    Py_DECREF( var_liftoff );
    var_liftoff = NULL;

    Py_XDECREF( var_burnout );
    var_burnout = NULL;

    Py_XDECREF( var_apogee );
    var_apogee = NULL;

    Py_XDECREF( var_altitude_main );
    var_altitude_main = NULL;

    Py_XDECREF( var_touchdown );
    var_touchdown = NULL;

    CHECK_OBJECT( (PyObject *)var_acceleration );
    Py_DECREF( var_acceleration );
    var_acceleration = NULL;

    Py_XDECREF( var_flight_events );
    var_flight_events = NULL;

    Py_XDECREF( var_eom );
    var_eom = NULL;

    Py_XDECREF( var_main_check );
    var_main_check = NULL;

    Py_XDECREF( var_user_event );
    var_user_event = NULL;

    CHECK_OBJECT( (PyObject *)var_altitude_main_deploy );
    Py_DECREF( var_altitude_main_deploy );
    var_altitude_main_deploy = NULL;

    Py_XDECREF( var_altitude );
    var_altitude = NULL;

    Py_XDECREF( var_velocity );
    var_velocity = NULL;

    Py_XDECREF( var_time );
    var_time = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_event );
    var_event = NULL;

    Py_XDECREF( var_S0 );
    var_S0 = NULL;

    Py_XDECREF( var_t_end );
    var_t_end = NULL;

    Py_XDECREF( var_solution );
    var_solution = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run );
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


static PyObject *impl_model$simulation_engine$$$function_1_run$$$function_1_liftoff( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_S = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_479b3a4a27d3d255017266aac9d4af3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_479b3a4a27d3d255017266aac9d4af3f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_479b3a4a27d3d255017266aac9d4af3f, codeobj_479b3a4a27d3d255017266aac9d4af3f, module_model$simulation_engine, sizeof(void *)+sizeof(void *) );
    frame_479b3a4a27d3d255017266aac9d4af3f = cache_frame_479b3a4a27d3d255017266aac9d4af3f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_479b3a4a27d3d255017266aac9d4af3f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_479b3a4a27d3d255017266aac9d4af3f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_S );
        tmp_subscribed_name_1 = par_S;
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_float_5_0;
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_479b3a4a27d3d255017266aac9d4af3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_479b3a4a27d3d255017266aac9d4af3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_479b3a4a27d3d255017266aac9d4af3f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_479b3a4a27d3d255017266aac9d4af3f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_479b3a4a27d3d255017266aac9d4af3f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_479b3a4a27d3d255017266aac9d4af3f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_479b3a4a27d3d255017266aac9d4af3f,
        type_description_1,
        par_t,
        par_S
    );


    // Release cached frame.
    if ( frame_479b3a4a27d3d255017266aac9d4af3f == cache_frame_479b3a4a27d3d255017266aac9d4af3f )
    {
        Py_DECREF( frame_479b3a4a27d3d255017266aac9d4af3f );
    }
    cache_frame_479b3a4a27d3d255017266aac9d4af3f = NULL;

    assertFrameObject( frame_479b3a4a27d3d255017266aac9d4af3f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_1_liftoff );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_1_liftoff );
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


static PyObject *impl_model$simulation_engine$$$function_1_run$$$function_2_burnout( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_S = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_b990912474f78b5cb0a8871c24b14621;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b990912474f78b5cb0a8871c24b14621 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b990912474f78b5cb0a8871c24b14621, codeobj_b990912474f78b5cb0a8871c24b14621, module_model$simulation_engine, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b990912474f78b5cb0a8871c24b14621 = cache_frame_b990912474f78b5cb0a8871c24b14621;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b990912474f78b5cb0a8871c24b14621 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b990912474f78b5cb0a8871c24b14621 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "acceleration" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_t );
        tmp_args_element_name_1 = par_t;
        CHECK_OBJECT( par_S );
        tmp_args_element_name_2 = par_S;
        frame_b990912474f78b5cb0a8871c24b14621->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_float_0_01;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b990912474f78b5cb0a8871c24b14621 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b990912474f78b5cb0a8871c24b14621 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b990912474f78b5cb0a8871c24b14621 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b990912474f78b5cb0a8871c24b14621, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b990912474f78b5cb0a8871c24b14621->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b990912474f78b5cb0a8871c24b14621, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b990912474f78b5cb0a8871c24b14621,
        type_description_1,
        par_t,
        par_S,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_b990912474f78b5cb0a8871c24b14621 == cache_frame_b990912474f78b5cb0a8871c24b14621 )
    {
        Py_DECREF( frame_b990912474f78b5cb0a8871c24b14621 );
    }
    cache_frame_b990912474f78b5cb0a8871c24b14621 = NULL;

    assertFrameObject( frame_b990912474f78b5cb0a8871c24b14621 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_2_burnout );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_2_burnout );
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


static PyObject *impl_model$simulation_engine$$$function_1_run$$$function_3_apogee( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_S = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c8debfbdacb8807bfcb8d677b071e719;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c8debfbdacb8807bfcb8d677b071e719 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c8debfbdacb8807bfcb8d677b071e719, codeobj_c8debfbdacb8807bfcb8d677b071e719, module_model$simulation_engine, sizeof(void *)+sizeof(void *) );
    frame_c8debfbdacb8807bfcb8d677b071e719 = cache_frame_c8debfbdacb8807bfcb8d677b071e719;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c8debfbdacb8807bfcb8d677b071e719 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c8debfbdacb8807bfcb8d677b071e719 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_S );
        tmp_subscribed_name_1 = par_S;
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_float_0_01;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
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
    RESTORE_FRAME_EXCEPTION( frame_c8debfbdacb8807bfcb8d677b071e719 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8debfbdacb8807bfcb8d677b071e719 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8debfbdacb8807bfcb8d677b071e719 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c8debfbdacb8807bfcb8d677b071e719, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c8debfbdacb8807bfcb8d677b071e719->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c8debfbdacb8807bfcb8d677b071e719, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c8debfbdacb8807bfcb8d677b071e719,
        type_description_1,
        par_t,
        par_S
    );


    // Release cached frame.
    if ( frame_c8debfbdacb8807bfcb8d677b071e719 == cache_frame_c8debfbdacb8807bfcb8d677b071e719 )
    {
        Py_DECREF( frame_c8debfbdacb8807bfcb8d677b071e719 );
    }
    cache_frame_c8debfbdacb8807bfcb8d677b071e719 = NULL;

    assertFrameObject( frame_c8debfbdacb8807bfcb8d677b071e719 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_3_apogee );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_3_apogee );
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


static PyObject *impl_model$simulation_engine$$$function_1_run$$$function_4_altitude_main( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_S = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_df1fa2f8a6a41a72521b5fbfd50552c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_df1fa2f8a6a41a72521b5fbfd50552c0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_df1fa2f8a6a41a72521b5fbfd50552c0, codeobj_df1fa2f8a6a41a72521b5fbfd50552c0, module_model$simulation_engine, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_df1fa2f8a6a41a72521b5fbfd50552c0 = cache_frame_df1fa2f8a6a41a72521b5fbfd50552c0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_df1fa2f8a6a41a72521b5fbfd50552c0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_df1fa2f8a6a41a72521b5fbfd50552c0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_S );
        tmp_subscribed_name_1 = par_S;
        tmp_subscript_name_1 = const_int_0;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "elevation_pad" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "altitude_main_deploy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = PyCell_GET( self->m_closure[0] );
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df1fa2f8a6a41a72521b5fbfd50552c0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_df1fa2f8a6a41a72521b5fbfd50552c0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df1fa2f8a6a41a72521b5fbfd50552c0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_df1fa2f8a6a41a72521b5fbfd50552c0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_df1fa2f8a6a41a72521b5fbfd50552c0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_df1fa2f8a6a41a72521b5fbfd50552c0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_df1fa2f8a6a41a72521b5fbfd50552c0,
        type_description_1,
        par_t,
        par_S,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_df1fa2f8a6a41a72521b5fbfd50552c0 == cache_frame_df1fa2f8a6a41a72521b5fbfd50552c0 )
    {
        Py_DECREF( frame_df1fa2f8a6a41a72521b5fbfd50552c0 );
    }
    cache_frame_df1fa2f8a6a41a72521b5fbfd50552c0 = NULL;

    assertFrameObject( frame_df1fa2f8a6a41a72521b5fbfd50552c0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_4_altitude_main );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_4_altitude_main );
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


static PyObject *impl_model$simulation_engine$$$function_1_run$$$function_5_touchdown( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_S = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_326a031ef42534616b2d86a07c906ab6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_326a031ef42534616b2d86a07c906ab6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_326a031ef42534616b2d86a07c906ab6, codeobj_326a031ef42534616b2d86a07c906ab6, module_model$simulation_engine, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_326a031ef42534616b2d86a07c906ab6 = cache_frame_326a031ef42534616b2d86a07c906ab6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_326a031ef42534616b2d86a07c906ab6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_326a031ef42534616b2d86a07c906ab6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_S );
        tmp_subscribed_name_1 = par_S;
        tmp_subscript_name_1 = const_int_0;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "elevation_pad" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_float_0_01;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_326a031ef42534616b2d86a07c906ab6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_326a031ef42534616b2d86a07c906ab6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_326a031ef42534616b2d86a07c906ab6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_326a031ef42534616b2d86a07c906ab6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_326a031ef42534616b2d86a07c906ab6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_326a031ef42534616b2d86a07c906ab6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_326a031ef42534616b2d86a07c906ab6,
        type_description_1,
        par_t,
        par_S,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_326a031ef42534616b2d86a07c906ab6 == cache_frame_326a031ef42534616b2d86a07c906ab6 )
    {
        Py_DECREF( frame_326a031ef42534616b2d86a07c906ab6 );
    }
    cache_frame_326a031ef42534616b2d86a07c906ab6 = NULL;

    assertFrameObject( frame_326a031ef42534616b2d86a07c906ab6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_5_touchdown );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_5_touchdown );
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


static PyObject *impl_model$simulation_engine$$$function_1_run$$$function_6_acceleration( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_S = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_ac663e58a2b8898188842155b7268828;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ac663e58a2b8898188842155b7268828 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ac663e58a2b8898188842155b7268828, codeobj_ac663e58a2b8898188842155b7268828, module_model$simulation_engine, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ac663e58a2b8898188842155b7268828 = cache_frame_ac663e58a2b8898188842155b7268828;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ac663e58a2b8898188842155b7268828 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ac663e58a2b8898188842155b7268828 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_right_name_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "motor" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[2] );
        CHECK_OBJECT( par_t );
        tmp_args_element_name_1 = par_t;
        frame_ac663e58a2b8898188842155b7268828->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_thrust_at_time, call_args );
        }

        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sign );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_S );
        tmp_subscribed_name_1 = par_S;
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        frame_ac663e58a2b8898188842155b7268828->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_aero_force );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aero_force );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_left_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "aero_force" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_drag );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "config" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_S );
        tmp_subscribed_name_2 = par_S;
        tmp_subscript_name_2 = const_int_0;
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_S );
        tmp_subscribed_name_3 = par_S;
        tmp_subscript_name_3 = const_int_pos_1;
        tmp_args_element_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "alpha" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = PyCell_GET( self->m_closure[0] );
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "user_events" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = PyCell_GET( self->m_closure[3] );
        frame_ac663e58a2b8898188842155b7268828->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "config" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = PyCell_GET( self->m_closure[1] );
        tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mass );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_left_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "motor" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = PyCell_GET( self->m_closure[2] );
        CHECK_OBJECT( par_t );
        tmp_args_element_name_8 = par_t;
        frame_ac663e58a2b8898188842155b7268828->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_right_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_mass_at_time, call_args );
        }

        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_constants );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_constants );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "constants" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_GRAVITY );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac663e58a2b8898188842155b7268828 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac663e58a2b8898188842155b7268828 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac663e58a2b8898188842155b7268828 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ac663e58a2b8898188842155b7268828, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ac663e58a2b8898188842155b7268828->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ac663e58a2b8898188842155b7268828, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ac663e58a2b8898188842155b7268828,
        type_description_1,
        par_t,
        par_S,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[3]
    );


    // Release cached frame.
    if ( frame_ac663e58a2b8898188842155b7268828 == cache_frame_ac663e58a2b8898188842155b7268828 )
    {
        Py_DECREF( frame_ac663e58a2b8898188842155b7268828 );
    }
    cache_frame_ac663e58a2b8898188842155b7268828 = NULL;

    assertFrameObject( frame_ac663e58a2b8898188842155b7268828 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_6_acceleration );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_6_acceleration );
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


static PyObject *impl_model$simulation_engine$$$function_1_run$$$function_7_eom( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_S = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2a60e7f053136a58f99af27ad9b0b01d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2a60e7f053136a58f99af27ad9b0b01d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2a60e7f053136a58f99af27ad9b0b01d, codeobj_2a60e7f053136a58f99af27ad9b0b01d, module_model$simulation_engine, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2a60e7f053136a58f99af27ad9b0b01d = cache_frame_2a60e7f053136a58f99af27ad9b0b01d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2a60e7f053136a58f99af27ad9b0b01d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2a60e7f053136a58f99af27ad9b0b01d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "motor" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[2] );
        CHECK_OBJECT( par_t );
        tmp_args_element_name_1 = par_t;
        frame_2a60e7f053136a58f99af27ad9b0b01d->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_thrust_at_time, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "config" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mass );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "motor" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = PyCell_GET( self->m_closure[2] );
        CHECK_OBJECT( par_t );
        tmp_args_element_name_2 = par_t;
        frame_2a60e7f053136a58f99af27ad9b0b01d->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_mass_at_time, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_constants );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_constants );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "constants" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_GRAVITY );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oocccc";
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
        CHECK_OBJECT( par_t );
        tmp_compexpr_left_2 = par_t;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "motor" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = PyCell_GET( self->m_closure[2] );
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_time_burn );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = const_int_pos_2;
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "timestep" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_4 = PyCell_GET( self->m_closure[3] );
        tmp_right_name_3 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oocccc";
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
            PyObject *tmp_list_element_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( par_S );
            tmp_subscribed_name_1 = par_S;
            tmp_subscript_name_1 = const_int_pos_1;
            tmp_list_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oocccc";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyList_New( 2 );
            PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "acceleration" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 53;
                type_description_1 = "oocccc";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = PyCell_GET( self->m_closure[0] );
            CHECK_OBJECT( par_t );
            tmp_args_element_name_3 = par_t;
            CHECK_OBJECT( par_S );
            tmp_args_element_name_4 = par_S;
            frame_2a60e7f053136a58f99af27ad9b0b01d->m_frame.f_lineno = 53;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 53;
                type_description_1 = "oocccc";
                goto frame_exception_exit_1;
            }
            PyList_SET_ITEM( tmp_return_value, 1, tmp_list_element_1 );
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = LIST_COPY( const_list_int_0_int_0_list );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a60e7f053136a58f99af27ad9b0b01d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a60e7f053136a58f99af27ad9b0b01d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a60e7f053136a58f99af27ad9b0b01d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2a60e7f053136a58f99af27ad9b0b01d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2a60e7f053136a58f99af27ad9b0b01d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2a60e7f053136a58f99af27ad9b0b01d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2a60e7f053136a58f99af27ad9b0b01d,
        type_description_1,
        par_t,
        par_S,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[3],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_2a60e7f053136a58f99af27ad9b0b01d == cache_frame_2a60e7f053136a58f99af27ad9b0b01d )
    {
        Py_DECREF( frame_2a60e7f053136a58f99af27ad9b0b01d );
    }
    cache_frame_2a60e7f053136a58f99af27ad9b0b01d = NULL;

    assertFrameObject( frame_2a60e7f053136a58f99af27ad9b0b01d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_7_eom );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_S );
    Py_DECREF( par_S );
    par_S = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$simulation_engine$$$function_1_run$$$function_7_eom );
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



static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$simulation_engine$$$function_1_run,
        const_str_plain_run,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e9ff3f417076a4d5cab69db33cc83aaf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$simulation_engine,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_1_liftoff(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$simulation_engine$$$function_1_run$$$function_1_liftoff,
        const_str_plain_liftoff,
#if PYTHON_VERSION >= 300
        const_str_digest_e02d15916467fc0bbbd46b6531dd7a77,
#endif
        codeobj_479b3a4a27d3d255017266aac9d4af3f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$simulation_engine,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_2_burnout(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$simulation_engine$$$function_1_run$$$function_2_burnout,
        const_str_plain_burnout,
#if PYTHON_VERSION >= 300
        const_str_digest_598d564b61303f9a7956280f80d160d6,
#endif
        codeobj_b990912474f78b5cb0a8871c24b14621,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$simulation_engine,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_3_apogee(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$simulation_engine$$$function_1_run$$$function_3_apogee,
        const_str_plain_apogee,
#if PYTHON_VERSION >= 300
        const_str_digest_c3b3dce26a2cb0b484604d32bc0ce5c4,
#endif
        codeobj_c8debfbdacb8807bfcb8d677b071e719,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$simulation_engine,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_4_altitude_main(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$simulation_engine$$$function_1_run$$$function_4_altitude_main,
        const_str_plain_altitude_main,
#if PYTHON_VERSION >= 300
        const_str_digest_777b4c24c9c0f8233fa698d66f96348a,
#endif
        codeobj_df1fa2f8a6a41a72521b5fbfd50552c0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$simulation_engine,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_5_touchdown(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$simulation_engine$$$function_1_run$$$function_5_touchdown,
        const_str_plain_touchdown,
#if PYTHON_VERSION >= 300
        const_str_digest_af8cc34900ff8c86ec337c4acc15f743,
#endif
        codeobj_326a031ef42534616b2d86a07c906ab6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$simulation_engine,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_6_acceleration(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$simulation_engine$$$function_1_run$$$function_6_acceleration,
        const_str_plain_acceleration,
#if PYTHON_VERSION >= 300
        const_str_digest_5ac29c578e335af97f3bcc29afccda40,
#endif
        codeobj_ac663e58a2b8898188842155b7268828,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$simulation_engine,
        NULL,
        4
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$simulation_engine$$$function_1_run$$$function_7_eom(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$simulation_engine$$$function_1_run$$$function_7_eom,
        const_str_plain_eom,
#if PYTHON_VERSION >= 300
        const_str_digest_558b4debd834cf960a2a8dc2ad790a1b,
#endif
        codeobj_2a60e7f053136a58f99af27ad9b0b01d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$simulation_engine,
        NULL,
        4
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_model$simulation_engine =
{
    PyModuleDef_HEAD_INIT,
    "model.simulation_engine",
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

MOD_INIT_DECL( model$simulation_engine )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_model$simulation_engine );
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
    puts("model.simulation_engine: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("model.simulation_engine: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("model.simulation_engine: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmodel$simulation_engine" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_model$simulation_engine = Py_InitModule4(
        "model.simulation_engine",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_model$simulation_engine = PyModule_Create( &mdef_model$simulation_engine );
#endif

    moduledict_model$simulation_engine = MODULE_DICT( module_model$simulation_engine );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_model$simulation_engine,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_model$simulation_engine,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_model$simulation_engine,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_model$simulation_engine,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_model$simulation_engine );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ffc008172548edc425dfb8c22b0d0aa3, module_model$simulation_engine );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_e5cca7a11b79f5f14cc62dcb30bbced5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_e5cca7a11b79f5f14cc62dcb30bbced5 = MAKE_MODULE_FRAME( codeobj_e5cca7a11b79f5f14cc62dcb30bbced5, module_model$simulation_engine );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e5cca7a11b79f5f14cc62dcb30bbced5 );
    assert( Py_REFCNT( frame_e5cca7a11b79f5f14cc62dcb30bbced5 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_5f12e9ca8524b8cfc32f0aa4d1f22377;
        tmp_globals_name_1 = (PyObject *)moduledict_model$simulation_engine;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_solve_ivp_tuple;
        tmp_level_name_1 = const_int_0;
        frame_e5cca7a11b79f5f14cc62dcb30bbced5->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_solve_ivp );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_solve_ivp, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_model$simulation_engine;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_e5cca7a11b79f5f14cc62dcb30bbced5->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_10dd71b41934c8a38db95813f59d2471;
        tmp_globals_name_3 = (PyObject *)moduledict_model$simulation_engine;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_e5cca7a11b79f5f14cc62dcb30bbced5->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_2 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_entities );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_rocket_entities );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_rocket_entities, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_b798837470a010253773bdff3fb29005;
        tmp_globals_name_4 = (PyObject *)moduledict_model$simulation_engine;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_e5cca7a11b79f5f14cc62dcb30bbced5->m_frame.f_lineno = 6;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_4 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_entities );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_event_entities );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_event_entities, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_187372bd98ee54363232d41cbc94ffaa;
        tmp_globals_name_5 = (PyObject *)moduledict_model$simulation_engine;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_e5cca7a11b79f5f14cc62dcb30bbced5->m_frame.f_lineno = 7;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_6 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_entities );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_motor_data_entities );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_motor_entities, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_e241ba40a6bdc92d4f19f9af14c56d6c;
        tmp_globals_name_6 = (PyObject *)moduledict_model$simulation_engine;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_e5cca7a11b79f5f14cc62dcb30bbced5->m_frame.f_lineno = 8;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_8 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_aerodynamic_forces );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_aerodynamic_forces );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_aero_force, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_197ecfe157e9b451a973ea0f9d92345d;
        tmp_globals_name_7 = (PyObject *)moduledict_model$simulation_engine;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = Py_None;
        tmp_level_name_7 = const_int_0;
        frame_e5cca7a11b79f5f14cc62dcb30bbced5->m_frame.f_lineno = 9;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_10 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_aerodynamic_forces );
        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_atmosphere_model );
        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_atmosphere, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_digest_d24b1d27e543dd8c27ef860638dadd16;
        tmp_globals_name_8 = (PyObject *)moduledict_model$simulation_engine;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = Py_None;
        tmp_level_name_8 = const_int_0;
        frame_e5cca7a11b79f5f14cc62dcb30bbced5->m_frame.f_lineno = 10;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_flight_phase );
        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_flight_phase, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_digest_dfb57ccc0d0319c4e3975d22b497b169;
        tmp_globals_name_9 = (PyObject *)moduledict_model$simulation_engine;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = Py_None;
        tmp_level_name_9 = const_int_0;
        frame_e5cca7a11b79f5f14cc62dcb30bbced5->m_frame.f_lineno = 12;
        tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_constants );
        Py_DECREF( tmp_import_name_from_13 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_constants, tmp_assign_source_12 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5cca7a11b79f5f14cc62dcb30bbced5 );
#endif
    popFrameStack();

    assertFrameObject( frame_e5cca7a11b79f5f14cc62dcb30bbced5 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5cca7a11b79f5f14cc62dcb30bbced5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e5cca7a11b79f5f14cc62dcb30bbced5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e5cca7a11b79f5f14cc62dcb30bbced5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e5cca7a11b79f5f14cc62dcb30bbced5, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_model$simulation_engine$$$function_1_run(  );



        UPDATE_STRING_DICT1( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain_run, tmp_assign_source_13 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_model$simulation_engine, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_model$simulation_engine );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
