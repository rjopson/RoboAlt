/* Generated code for Python module 'model.flight_phase'
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

/* The "_module_model$flight_phase" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_model$flight_phase;
PyDictObject *moduledict_model$flight_phase;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_TOUCHDOWN;
extern PyObject *const_str_plain_LIFTOFF;
extern PyObject *const_str_plain_ALTITUDE_MAIN_DETECT;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_BURNOUT_DETECT;
static PyObject *const_tuple_str_plain_self_str_plain_altitude_main_deploy_tuple;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_129b8e097a5bc24591b4e867d4a933f0;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_velocity;
static PyObject *const_str_digest_970d11ac4267026c7463b7ddbe0e3ef1;
static PyObject *const_str_digest_55563f3bbfe409d1cf85e7b4b1dcf227;
static PyObject *const_str_plain_velocity_apogee;
extern PyObject *const_str_plain_FlightPhase;
extern PyObject *const_str_plain_altitude_main_deploy;
extern PyObject *const_int_pos_5;
static PyObject *const_str_plain_ALTITUDE;
static PyObject *const_tuple_str_plain_self_str_plain_acceleration_tuple;
static PyObject *const_str_plain_landing_detect;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_gyro_x;
static PyObject *const_str_plain_update_from_simulation;
extern PyObject *const_str_plain___debug__;
static PyObject *const_tuple_str_plain_self_str_plain_gyro_x_tuple;
static PyObject *const_str_plain_coast_detect;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_flight_phase;
static PyObject *const_str_plain_launch_detect;
static PyObject *const_str_plain_gyro_ground_detect;
extern PyObject *const_float_1_0;
static PyObject *const_str_digest_418195aaf47b006f3d2e0e282c45aba6;
static PyObject *const_str_plain_acceleration_takeoff;
extern PyObject *const_float_2_0;
static PyObject *const_tuple_str_plain_self_str_plain_velocity_tuple;
static PyObject *const_str_digest_5ff5087039b8323be5b613ebf9d4318d;
extern PyObject *const_str_plain_APOGEE_DETECT;
static PyObject *const_str_digest_eb98e510ab0f1d1f075f95f4706779ba;
static PyObject *const_tuple_str_plain_FlightPhase_tuple_empty_tuple;
extern PyObject *const_str_plain_LAUNCH_DETECT;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_BURNOUT;
static PyObject *const_str_plain_main_detect;
static PyObject *const_str_digest_7aa097211ca9e1e309e9b057d2d36316;
static PyObject *const_tuple_str_plain_self_str_plain_flight_event_tuple;
static PyObject *const_tuple_690c03177912e833141eeb2337ae48dc_tuple;
extern PyObject *const_str_plain_APOGEE;
extern PyObject *const_str_plain_TOUCHDOWN_DETECT;
static PyObject *const_str_plain_acceleration_coast;
static PyObject *const_str_plain_altitude_ground_detect;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_tuple_str_plain_self_str_plain_altitude_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_flight_event;
static PyObject *const_str_plain_velocity_takeoff;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_plain_apogee_detect;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain_gyro;
static PyObject *const_tuple_str_plain_self_str_plain_velocity_str_plain_acceleration_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_3e442c37cf69cd0c35191bad4577fadd;
extern PyObject *const_str_plain___module__;
extern PyObject *const_float_0_01;
extern PyObject *const_str_plain_altitude;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_ALTITUDE_MAIN;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_digest_d24b1d27e543dd8c27ef860638dadd16;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_34023d872c64064bc6293f7b87571490;
static PyObject *const_float_200_0;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_52d9c3fed46c5b9d93aaccbb4abaeee1;
extern PyObject *const_str_plain_acceleration;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_self_str_plain_altitude_main_deploy_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_altitude_main_deploy_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_altitude_main_deploy_tuple, 1, const_str_plain_altitude_main_deploy ); Py_INCREF( const_str_plain_altitude_main_deploy );
    const_str_digest_129b8e097a5bc24591b4e867d4a933f0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2203312 ], 27, 0 );
    const_str_digest_970d11ac4267026c7463b7ddbe0e3ef1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2203339 ], 21, 0 );
    const_str_digest_55563f3bbfe409d1cf85e7b4b1dcf227 = UNSTREAM_STRING_ASCII( &constant_bin[ 2203360 ], 18, 0 );
    const_str_plain_velocity_apogee = UNSTREAM_STRING_ASCII( &constant_bin[ 2203378 ], 15, 1 );
    const_str_plain_ALTITUDE = UNSTREAM_STRING_ASCII( &constant_bin[ 2195944 ], 8, 1 );
    const_tuple_str_plain_self_str_plain_acceleration_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_acceleration_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_acceleration_tuple, 1, const_str_plain_acceleration ); Py_INCREF( const_str_plain_acceleration );
    const_str_plain_landing_detect = UNSTREAM_STRING_ASCII( &constant_bin[ 2203393 ], 14, 1 );
    const_str_plain_update_from_simulation = UNSTREAM_STRING_ASCII( &constant_bin[ 2203407 ], 22, 1 );
    const_tuple_str_plain_self_str_plain_gyro_x_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_gyro_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_gyro_x_tuple, 1, const_str_plain_gyro_x ); Py_INCREF( const_str_plain_gyro_x );
    const_str_plain_coast_detect = UNSTREAM_STRING_ASCII( &constant_bin[ 2203429 ], 12, 1 );
    const_str_plain_launch_detect = UNSTREAM_STRING_ASCII( &constant_bin[ 2203441 ], 13, 1 );
    const_str_plain_gyro_ground_detect = UNSTREAM_STRING_ASCII( &constant_bin[ 2203454 ], 18, 1 );
    const_str_digest_418195aaf47b006f3d2e0e282c45aba6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2203472 ], 26, 0 );
    const_str_plain_acceleration_takeoff = UNSTREAM_STRING_ASCII( &constant_bin[ 2203498 ], 20, 1 );
    const_tuple_str_plain_self_str_plain_velocity_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_velocity_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_velocity_tuple, 1, const_str_plain_velocity ); Py_INCREF( const_str_plain_velocity );
    const_str_digest_5ff5087039b8323be5b613ebf9d4318d = UNSTREAM_STRING_ASCII( &constant_bin[ 2203518 ], 20, 0 );
    const_str_digest_eb98e510ab0f1d1f075f95f4706779ba = UNSTREAM_STRING_ASCII( &constant_bin[ 2203538 ], 23, 0 );
    const_tuple_str_plain_FlightPhase_tuple_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FlightPhase_tuple_empty_tuple, 0, const_str_plain_FlightPhase ); Py_INCREF( const_str_plain_FlightPhase );
    PyTuple_SET_ITEM( const_tuple_str_plain_FlightPhase_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_str_plain_main_detect = UNSTREAM_STRING_ASCII( &constant_bin[ 2203550 ], 11, 1 );
    const_str_digest_7aa097211ca9e1e309e9b057d2d36316 = UNSTREAM_STRING_ASCII( &constant_bin[ 2203561 ], 25, 0 );
    const_tuple_str_plain_self_str_plain_flight_event_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_flight_event_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_flight_event_tuple, 1, const_str_plain_flight_event ); Py_INCREF( const_str_plain_flight_event );
    const_tuple_690c03177912e833141eeb2337ae48dc_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_690c03177912e833141eeb2337ae48dc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_690c03177912e833141eeb2337ae48dc_tuple, 1, const_str_plain_altitude ); Py_INCREF( const_str_plain_altitude );
    PyTuple_SET_ITEM( const_tuple_690c03177912e833141eeb2337ae48dc_tuple, 2, const_str_plain_velocity ); Py_INCREF( const_str_plain_velocity );
    PyTuple_SET_ITEM( const_tuple_690c03177912e833141eeb2337ae48dc_tuple, 3, const_str_plain_acceleration ); Py_INCREF( const_str_plain_acceleration );
    const_str_plain_gyro = UNSTREAM_STRING_ASCII( &constant_bin[ 2194986 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_690c03177912e833141eeb2337ae48dc_tuple, 4, const_str_plain_gyro ); Py_INCREF( const_str_plain_gyro );
    const_str_plain_acceleration_coast = UNSTREAM_STRING_ASCII( &constant_bin[ 2203586 ], 18, 1 );
    const_str_plain_altitude_ground_detect = UNSTREAM_STRING_ASCII( &constant_bin[ 2203604 ], 22, 1 );
    const_tuple_str_plain_self_str_plain_altitude_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_altitude_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_altitude_tuple, 1, const_str_plain_altitude ); Py_INCREF( const_str_plain_altitude );
    const_str_plain_velocity_takeoff = UNSTREAM_STRING_ASCII( &constant_bin[ 2203626 ], 16, 1 );
    const_str_plain_apogee_detect = UNSTREAM_STRING_ASCII( &constant_bin[ 2203573 ], 13, 1 );
    const_tuple_str_plain_self_str_plain_velocity_str_plain_acceleration_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_velocity_str_plain_acceleration_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_velocity_str_plain_acceleration_tuple, 1, const_str_plain_velocity ); Py_INCREF( const_str_plain_velocity );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_velocity_str_plain_acceleration_tuple, 2, const_str_plain_acceleration ); Py_INCREF( const_str_plain_acceleration );
    const_str_digest_3e442c37cf69cd0c35191bad4577fadd = UNSTREAM_STRING_ASCII( &constant_bin[ 2203642 ], 34, 0 );
    const_str_digest_34023d872c64064bc6293f7b87571490 = UNSTREAM_STRING_ASCII( &constant_bin[ 2203676 ], 25, 0 );
    const_float_200_0 = UNSTREAM_FLOAT( &constant_bin[ 2203701 ] );
    const_str_digest_52d9c3fed46c5b9d93aaccbb4abaeee1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2203709 ], 24, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_model$flight_phase( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_084154392e8bc9d4e6ef6c2b0a67e94c;
static PyCodeObject *codeobj_59fec33d4a35664f219b76df6f1cbed6;
static PyCodeObject *codeobj_86aceaf67c78966b61de590f6f43a0a9;
static PyCodeObject *codeobj_39b07265a273817d597342958007d80b;
static PyCodeObject *codeobj_88dfd9cb79159cde9f9487c6d1f55541;
static PyCodeObject *codeobj_9174a9f6af6ea1755759d2dee489477e;
static PyCodeObject *codeobj_ad7c988edfc09403e5c2b0ab45b267d7;
static PyCodeObject *codeobj_1d137fef02aa1901fba037d23758dfc0;
static PyCodeObject *codeobj_3c9ef7190631d0cc0f180301b82e8983;
static PyCodeObject *codeobj_e1114be807b772733123a33ffbd0926e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_970d11ac4267026c7463b7ddbe0e3ef1 );
    codeobj_084154392e8bc9d4e6ef6c2b0a67e94c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_129b8e097a5bc24591b4e867d4a933f0, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_59fec33d4a35664f219b76df6f1cbed6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_FlightPhase, 2, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_86aceaf67c78966b61de590f6f43a0a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 4, const_tuple_str_plain_self_str_plain_altitude_main_deploy_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_39b07265a273817d597342958007d80b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_apogee_detect, 61, const_tuple_str_plain_self_str_plain_velocity_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_88dfd9cb79159cde9f9487c6d1f55541 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_coast_detect, 55, const_tuple_str_plain_self_str_plain_acceleration_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9174a9f6af6ea1755759d2dee489477e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_landing_detect, 73, const_tuple_str_plain_self_str_plain_gyro_x_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ad7c988edfc09403e5c2b0ab45b267d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_launch_detect, 49, const_tuple_str_plain_self_str_plain_velocity_str_plain_acceleration_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1d137fef02aa1901fba037d23758dfc0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_main_detect, 67, const_tuple_str_plain_self_str_plain_altitude_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3c9ef7190631d0cc0f180301b82e8983 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update, 34, const_tuple_690c03177912e833141eeb2337ae48dc_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e1114be807b772733123a33ffbd0926e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update_from_simulation, 19, const_tuple_str_plain_self_str_plain_flight_event_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_2_update_from_simulation(  );


static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_3_update(  );


static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_4_launch_detect(  );


static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_5_coast_detect(  );


static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_6_apogee_detect(  );


static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_7_main_detect(  );


static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_8_landing_detect(  );


// The module function definitions.
static PyObject *impl_model$flight_phase$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_altitude_main_deploy = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_86aceaf67c78966b61de590f6f43a0a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_86aceaf67c78966b61de590f6f43a0a9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_86aceaf67c78966b61de590f6f43a0a9, codeobj_86aceaf67c78966b61de590f6f43a0a9, module_model$flight_phase, sizeof(void *)+sizeof(void *) );
    frame_86aceaf67c78966b61de590f6f43a0a9 = cache_frame_86aceaf67c78966b61de590f6f43a0a9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_86aceaf67c78966b61de590f6f43a0a9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_86aceaf67c78966b61de590f6f43a0a9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_str_plain_LAUNCH_DETECT;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_flight_phase, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = const_str_plain_LIFTOFF;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_flight_event, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_altitude_main_deploy );
        tmp_assattr_name_3 = par_altitude_main_deploy;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_altitude_main_deploy, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = const_float_2_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_velocity_takeoff, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = const_float_1_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_acceleration_takeoff, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = const_float_0_01;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_acceleration_coast, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_name_7 = const_float_0_01;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_velocity_apogee, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = const_float_0_01;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_altitude_ground_detect, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = const_float_200_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_gyro_ground_detect, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86aceaf67c78966b61de590f6f43a0a9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86aceaf67c78966b61de590f6f43a0a9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_86aceaf67c78966b61de590f6f43a0a9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_86aceaf67c78966b61de590f6f43a0a9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_86aceaf67c78966b61de590f6f43a0a9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_86aceaf67c78966b61de590f6f43a0a9,
        type_description_1,
        par_self,
        par_altitude_main_deploy
    );


    // Release cached frame.
    if ( frame_86aceaf67c78966b61de590f6f43a0a9 == cache_frame_86aceaf67c78966b61de590f6f43a0a9 )
    {
        Py_DECREF( frame_86aceaf67c78966b61de590f6f43a0a9 );
    }
    cache_frame_86aceaf67c78966b61de590f6f43a0a9 = NULL;

    assertFrameObject( frame_86aceaf67c78966b61de590f6f43a0a9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_altitude_main_deploy );
    Py_DECREF( par_altitude_main_deploy );
    par_altitude_main_deploy = NULL;

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

    CHECK_OBJECT( (PyObject *)par_altitude_main_deploy );
    Py_DECREF( par_altitude_main_deploy );
    par_altitude_main_deploy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_1___init__ );
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


static PyObject *impl_model$flight_phase$$$function_2_update_from_simulation( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_flight_event = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e1114be807b772733123a33ffbd0926e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e1114be807b772733123a33ffbd0926e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e1114be807b772733123a33ffbd0926e, codeobj_e1114be807b772733123a33ffbd0926e, module_model$flight_phase, sizeof(void *)+sizeof(void *) );
    frame_e1114be807b772733123a33ffbd0926e = cache_frame_e1114be807b772733123a33ffbd0926e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e1114be807b772733123a33ffbd0926e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e1114be807b772733123a33ffbd0926e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_flight_event );
        tmp_compexpr_left_1 = par_flight_event;
        tmp_compexpr_right_1 = const_str_plain_LIFTOFF;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = const_int_0;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_flight_phase, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_flight_event );
            tmp_compexpr_left_2 = par_flight_event;
            tmp_compexpr_right_2 = const_str_plain_BURNOUT;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "oo";
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
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                tmp_assattr_name_2 = const_int_pos_1;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_flight_phase, tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 24;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( par_flight_event );
                tmp_compexpr_left_3 = par_flight_event;
                tmp_compexpr_right_3 = const_str_plain_APOGEE;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 25;
                    type_description_1 = "oo";
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
                    PyObject *tmp_assattr_name_3;
                    PyObject *tmp_assattr_target_3;
                    tmp_assattr_name_3 = const_int_pos_2;
                    CHECK_OBJECT( par_self );
                    tmp_assattr_target_3 = par_self;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_flight_phase, tmp_assattr_name_3 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 26;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    CHECK_OBJECT( par_flight_event );
                    tmp_compexpr_left_4 = par_flight_event;
                    tmp_compexpr_right_4 = const_str_plain_ALTITUDE_MAIN;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 27;
                        type_description_1 = "oo";
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
                        PyObject *tmp_assattr_name_4;
                        PyObject *tmp_assattr_target_4;
                        tmp_assattr_name_4 = const_int_pos_3;
                        CHECK_OBJECT( par_self );
                        tmp_assattr_target_4 = par_self;
                        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_flight_phase, tmp_assattr_name_4 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 28;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                    }
                    goto branch_end_4;
                    branch_no_4:;
                    {
                        nuitka_bool tmp_condition_result_5;
                        PyObject *tmp_compexpr_left_5;
                        PyObject *tmp_compexpr_right_5;
                        CHECK_OBJECT( par_flight_event );
                        tmp_compexpr_left_5 = par_flight_event;
                        tmp_compexpr_right_5 = const_str_plain_TOUCHDOWN;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 29;
                            type_description_1 = "oo";
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
                            PyObject *tmp_assattr_name_5;
                            PyObject *tmp_assattr_target_5;
                            tmp_assattr_name_5 = const_int_pos_4;
                            CHECK_OBJECT( par_self );
                            tmp_assattr_target_5 = par_self;
                            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_flight_phase, tmp_assattr_name_5 );
                            if ( tmp_result == false )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 30;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                        }
                        goto branch_end_5;
                        branch_no_5:;
                        {
                            PyObject *tmp_assattr_name_6;
                            PyObject *tmp_assattr_target_6;
                            tmp_assattr_name_6 = const_int_pos_5;
                            CHECK_OBJECT( par_self );
                            tmp_assattr_target_6 = par_self;
                            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_flight_phase, tmp_assattr_name_6 );
                            if ( tmp_result == false )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 32;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                        }
                        branch_end_5:;
                    }
                    branch_end_4:;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1114be807b772733123a33ffbd0926e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1114be807b772733123a33ffbd0926e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1114be807b772733123a33ffbd0926e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1114be807b772733123a33ffbd0926e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1114be807b772733123a33ffbd0926e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1114be807b772733123a33ffbd0926e,
        type_description_1,
        par_self,
        par_flight_event
    );


    // Release cached frame.
    if ( frame_e1114be807b772733123a33ffbd0926e == cache_frame_e1114be807b772733123a33ffbd0926e )
    {
        Py_DECREF( frame_e1114be807b772733123a33ffbd0926e );
    }
    cache_frame_e1114be807b772733123a33ffbd0926e = NULL;

    assertFrameObject( frame_e1114be807b772733123a33ffbd0926e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_2_update_from_simulation );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_flight_event );
    Py_DECREF( par_flight_event );
    par_flight_event = NULL;

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

    CHECK_OBJECT( (PyObject *)par_flight_event );
    Py_DECREF( par_flight_event );
    par_flight_event = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_2_update_from_simulation );
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


static PyObject *impl_model$flight_phase$$$function_3_update( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_altitude = python_pars[ 1 ];
    PyObject *par_velocity = python_pars[ 2 ];
    PyObject *par_acceleration = python_pars[ 3 ];
    PyObject *par_gyro = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_3c9ef7190631d0cc0f180301b82e8983;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3c9ef7190631d0cc0f180301b82e8983 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3c9ef7190631d0cc0f180301b82e8983, codeobj_3c9ef7190631d0cc0f180301b82e8983, module_model$flight_phase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3c9ef7190631d0cc0f180301b82e8983 = cache_frame_3c9ef7190631d0cc0f180301b82e8983;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3c9ef7190631d0cc0f180301b82e8983 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3c9ef7190631d0cc0f180301b82e8983 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flight_phase );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_LAUNCH_DETECT;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooo";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT( par_velocity );
            tmp_args_element_name_1 = par_velocity;
            CHECK_OBJECT( par_acceleration );
            tmp_args_element_name_2 = par_acceleration;
            frame_3c9ef7190631d0cc0f180301b82e8983->m_frame.f_lineno = 37;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_launch_detect, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_flight_phase );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_str_plain_BURNOUT_DETECT;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;
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
                PyObject *tmp_called_instance_2;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( par_self );
                tmp_called_instance_2 = par_self;
                CHECK_OBJECT( par_acceleration );
                tmp_args_element_name_3 = par_acceleration;
                frame_3c9ef7190631d0cc0f180301b82e8983->m_frame.f_lineno = 39;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_coast_detect, call_args );
                }

                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 39;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT( par_self );
                tmp_source_name_3 = par_self;
                tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_flight_phase );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 40;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_3 = const_str_plain_APOGEE_DETECT;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 40;
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
                    PyObject *tmp_called_instance_3;
                    PyObject *tmp_call_result_3;
                    PyObject *tmp_args_element_name_4;
                    CHECK_OBJECT( par_self );
                    tmp_called_instance_3 = par_self;
                    CHECK_OBJECT( par_velocity );
                    tmp_args_element_name_4 = par_velocity;
                    frame_3c9ef7190631d0cc0f180301b82e8983->m_frame.f_lineno = 41;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_4 };
                        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_apogee_detect, call_args );
                    }

                    if ( tmp_call_result_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 41;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_3 );
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_source_name_4;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_4 = par_self;
                    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_flight_phase );
                    if ( tmp_compexpr_left_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 42;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_4 = const_str_plain_ALTITUDE_MAIN_DETECT;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    Py_DECREF( tmp_compexpr_left_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 42;
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
                        PyObject *tmp_called_instance_4;
                        PyObject *tmp_call_result_4;
                        PyObject *tmp_args_element_name_5;
                        CHECK_OBJECT( par_self );
                        tmp_called_instance_4 = par_self;
                        CHECK_OBJECT( par_altitude );
                        tmp_args_element_name_5 = par_altitude;
                        frame_3c9ef7190631d0cc0f180301b82e8983->m_frame.f_lineno = 43;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_5 };
                            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_main_detect, call_args );
                        }

                        if ( tmp_call_result_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 43;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_4 );
                    }
                    goto branch_end_4;
                    branch_no_4:;
                    {
                        nuitka_bool tmp_condition_result_5;
                        PyObject *tmp_compexpr_left_5;
                        PyObject *tmp_compexpr_right_5;
                        PyObject *tmp_source_name_5;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_5 = par_self;
                        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_flight_phase );
                        if ( tmp_compexpr_left_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 44;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_compexpr_right_5 = const_str_plain_TOUCHDOWN_DETECT;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                        Py_DECREF( tmp_compexpr_left_5 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 44;
                            type_description_1 = "ooooo";
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
                            PyObject *tmp_called_instance_5;
                            PyObject *tmp_call_result_5;
                            PyObject *tmp_args_element_name_6;
                            CHECK_OBJECT( par_self );
                            tmp_called_instance_5 = par_self;
                            CHECK_OBJECT( par_gyro );
                            tmp_args_element_name_6 = par_gyro;
                            frame_3c9ef7190631d0cc0f180301b82e8983->m_frame.f_lineno = 45;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_6 };
                                tmp_call_result_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_landing_detect, call_args );
                            }

                            if ( tmp_call_result_5 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 45;
                                type_description_1 = "ooooo";
                                goto frame_exception_exit_1;
                            }
                            Py_DECREF( tmp_call_result_5 );
                        }
                        branch_no_5:;
                    }
                    branch_end_4:;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c9ef7190631d0cc0f180301b82e8983 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c9ef7190631d0cc0f180301b82e8983 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3c9ef7190631d0cc0f180301b82e8983, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3c9ef7190631d0cc0f180301b82e8983->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3c9ef7190631d0cc0f180301b82e8983, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3c9ef7190631d0cc0f180301b82e8983,
        type_description_1,
        par_self,
        par_altitude,
        par_velocity,
        par_acceleration,
        par_gyro
    );


    // Release cached frame.
    if ( frame_3c9ef7190631d0cc0f180301b82e8983 == cache_frame_3c9ef7190631d0cc0f180301b82e8983 )
    {
        Py_DECREF( frame_3c9ef7190631d0cc0f180301b82e8983 );
    }
    cache_frame_3c9ef7190631d0cc0f180301b82e8983 = NULL;

    assertFrameObject( frame_3c9ef7190631d0cc0f180301b82e8983 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_3_update );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_altitude );
    Py_DECREF( par_altitude );
    par_altitude = NULL;

    CHECK_OBJECT( (PyObject *)par_velocity );
    Py_DECREF( par_velocity );
    par_velocity = NULL;

    CHECK_OBJECT( (PyObject *)par_acceleration );
    Py_DECREF( par_acceleration );
    par_acceleration = NULL;

    CHECK_OBJECT( (PyObject *)par_gyro );
    Py_DECREF( par_gyro );
    par_gyro = NULL;

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

    CHECK_OBJECT( (PyObject *)par_altitude );
    Py_DECREF( par_altitude );
    par_altitude = NULL;

    CHECK_OBJECT( (PyObject *)par_velocity );
    Py_DECREF( par_velocity );
    par_velocity = NULL;

    CHECK_OBJECT( (PyObject *)par_acceleration );
    Py_DECREF( par_acceleration );
    par_acceleration = NULL;

    CHECK_OBJECT( (PyObject *)par_gyro );
    Py_DECREF( par_gyro );
    par_gyro = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_3_update );
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


static PyObject *impl_model$flight_phase$$$function_4_launch_detect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_velocity = python_pars[ 1 ];
    PyObject *par_acceleration = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_ad7c988edfc09403e5c2b0ab45b267d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ad7c988edfc09403e5c2b0ab45b267d7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ad7c988edfc09403e5c2b0ab45b267d7, codeobj_ad7c988edfc09403e5c2b0ab45b267d7, module_model$flight_phase, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ad7c988edfc09403e5c2b0ab45b267d7 = cache_frame_ad7c988edfc09403e5c2b0ab45b267d7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ad7c988edfc09403e5c2b0ab45b267d7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ad7c988edfc09403e5c2b0ab45b267d7 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_velocity );
        tmp_compexpr_left_1 = par_velocity;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_velocity_takeoff );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = const_str_plain_BURNOUT_DETECT;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_flight_phase, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = const_str_plain_BURNOUT;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_flight_event, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad7c988edfc09403e5c2b0ab45b267d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad7c988edfc09403e5c2b0ab45b267d7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ad7c988edfc09403e5c2b0ab45b267d7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ad7c988edfc09403e5c2b0ab45b267d7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ad7c988edfc09403e5c2b0ab45b267d7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ad7c988edfc09403e5c2b0ab45b267d7,
        type_description_1,
        par_self,
        par_velocity,
        par_acceleration
    );


    // Release cached frame.
    if ( frame_ad7c988edfc09403e5c2b0ab45b267d7 == cache_frame_ad7c988edfc09403e5c2b0ab45b267d7 )
    {
        Py_DECREF( frame_ad7c988edfc09403e5c2b0ab45b267d7 );
    }
    cache_frame_ad7c988edfc09403e5c2b0ab45b267d7 = NULL;

    assertFrameObject( frame_ad7c988edfc09403e5c2b0ab45b267d7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_4_launch_detect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_velocity );
    Py_DECREF( par_velocity );
    par_velocity = NULL;

    CHECK_OBJECT( (PyObject *)par_acceleration );
    Py_DECREF( par_acceleration );
    par_acceleration = NULL;

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

    CHECK_OBJECT( (PyObject *)par_velocity );
    Py_DECREF( par_velocity );
    par_velocity = NULL;

    CHECK_OBJECT( (PyObject *)par_acceleration );
    Py_DECREF( par_acceleration );
    par_acceleration = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_4_launch_detect );
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


static PyObject *impl_model$flight_phase$$$function_5_coast_detect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_acceleration = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_88dfd9cb79159cde9f9487c6d1f55541;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_88dfd9cb79159cde9f9487c6d1f55541 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_88dfd9cb79159cde9f9487c6d1f55541, codeobj_88dfd9cb79159cde9f9487c6d1f55541, module_model$flight_phase, sizeof(void *)+sizeof(void *) );
    frame_88dfd9cb79159cde9f9487c6d1f55541 = cache_frame_88dfd9cb79159cde9f9487c6d1f55541;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_88dfd9cb79159cde9f9487c6d1f55541 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_88dfd9cb79159cde9f9487c6d1f55541 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_acceleration );
        tmp_compexpr_left_1 = par_acceleration;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_acceleration_coast );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = const_str_plain_APOGEE_DETECT;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_flight_phase, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = const_str_plain_APOGEE;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_flight_event, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88dfd9cb79159cde9f9487c6d1f55541 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88dfd9cb79159cde9f9487c6d1f55541 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_88dfd9cb79159cde9f9487c6d1f55541, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_88dfd9cb79159cde9f9487c6d1f55541->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_88dfd9cb79159cde9f9487c6d1f55541, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_88dfd9cb79159cde9f9487c6d1f55541,
        type_description_1,
        par_self,
        par_acceleration
    );


    // Release cached frame.
    if ( frame_88dfd9cb79159cde9f9487c6d1f55541 == cache_frame_88dfd9cb79159cde9f9487c6d1f55541 )
    {
        Py_DECREF( frame_88dfd9cb79159cde9f9487c6d1f55541 );
    }
    cache_frame_88dfd9cb79159cde9f9487c6d1f55541 = NULL;

    assertFrameObject( frame_88dfd9cb79159cde9f9487c6d1f55541 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_5_coast_detect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_acceleration );
    Py_DECREF( par_acceleration );
    par_acceleration = NULL;

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

    CHECK_OBJECT( (PyObject *)par_acceleration );
    Py_DECREF( par_acceleration );
    par_acceleration = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_5_coast_detect );
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


static PyObject *impl_model$flight_phase$$$function_6_apogee_detect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_velocity = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_39b07265a273817d597342958007d80b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_39b07265a273817d597342958007d80b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_39b07265a273817d597342958007d80b, codeobj_39b07265a273817d597342958007d80b, module_model$flight_phase, sizeof(void *)+sizeof(void *) );
    frame_39b07265a273817d597342958007d80b = cache_frame_39b07265a273817d597342958007d80b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_39b07265a273817d597342958007d80b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_39b07265a273817d597342958007d80b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_velocity );
        tmp_compexpr_left_1 = par_velocity;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_velocity_apogee );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = const_str_plain_ALTITUDE_MAIN_DETECT;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_flight_phase, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = const_str_plain_ALTITUDE;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_flight_event, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_39b07265a273817d597342958007d80b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_39b07265a273817d597342958007d80b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_39b07265a273817d597342958007d80b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_39b07265a273817d597342958007d80b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_39b07265a273817d597342958007d80b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_39b07265a273817d597342958007d80b,
        type_description_1,
        par_self,
        par_velocity
    );


    // Release cached frame.
    if ( frame_39b07265a273817d597342958007d80b == cache_frame_39b07265a273817d597342958007d80b )
    {
        Py_DECREF( frame_39b07265a273817d597342958007d80b );
    }
    cache_frame_39b07265a273817d597342958007d80b = NULL;

    assertFrameObject( frame_39b07265a273817d597342958007d80b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_6_apogee_detect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_velocity );
    Py_DECREF( par_velocity );
    par_velocity = NULL;

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

    CHECK_OBJECT( (PyObject *)par_velocity );
    Py_DECREF( par_velocity );
    par_velocity = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_6_apogee_detect );
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


static PyObject *impl_model$flight_phase$$$function_7_main_detect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_altitude = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_1d137fef02aa1901fba037d23758dfc0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1d137fef02aa1901fba037d23758dfc0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1d137fef02aa1901fba037d23758dfc0, codeobj_1d137fef02aa1901fba037d23758dfc0, module_model$flight_phase, sizeof(void *)+sizeof(void *) );
    frame_1d137fef02aa1901fba037d23758dfc0 = cache_frame_1d137fef02aa1901fba037d23758dfc0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1d137fef02aa1901fba037d23758dfc0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1d137fef02aa1901fba037d23758dfc0 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_altitude );
        tmp_compexpr_left_1 = par_altitude;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_altitude_main_deploy );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = const_str_plain_TOUCHDOWN_DETECT;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_flight_phase, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = const_str_plain_TOUCHDOWN;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_flight_event, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d137fef02aa1901fba037d23758dfc0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d137fef02aa1901fba037d23758dfc0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1d137fef02aa1901fba037d23758dfc0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1d137fef02aa1901fba037d23758dfc0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1d137fef02aa1901fba037d23758dfc0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1d137fef02aa1901fba037d23758dfc0,
        type_description_1,
        par_self,
        par_altitude
    );


    // Release cached frame.
    if ( frame_1d137fef02aa1901fba037d23758dfc0 == cache_frame_1d137fef02aa1901fba037d23758dfc0 )
    {
        Py_DECREF( frame_1d137fef02aa1901fba037d23758dfc0 );
    }
    cache_frame_1d137fef02aa1901fba037d23758dfc0 = NULL;

    assertFrameObject( frame_1d137fef02aa1901fba037d23758dfc0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_7_main_detect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_altitude );
    Py_DECREF( par_altitude );
    par_altitude = NULL;

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

    CHECK_OBJECT( (PyObject *)par_altitude );
    Py_DECREF( par_altitude );
    par_altitude = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_7_main_detect );
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


static PyObject *impl_model$flight_phase$$$function_8_landing_detect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_gyro_x = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_9174a9f6af6ea1755759d2dee489477e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9174a9f6af6ea1755759d2dee489477e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9174a9f6af6ea1755759d2dee489477e, codeobj_9174a9f6af6ea1755759d2dee489477e, module_model$flight_phase, sizeof(void *)+sizeof(void *) );
    frame_9174a9f6af6ea1755759d2dee489477e = cache_frame_9174a9f6af6ea1755759d2dee489477e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9174a9f6af6ea1755759d2dee489477e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9174a9f6af6ea1755759d2dee489477e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_str_plain_TOUCHDOWN;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_flight_event, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9174a9f6af6ea1755759d2dee489477e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9174a9f6af6ea1755759d2dee489477e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9174a9f6af6ea1755759d2dee489477e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9174a9f6af6ea1755759d2dee489477e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9174a9f6af6ea1755759d2dee489477e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9174a9f6af6ea1755759d2dee489477e,
        type_description_1,
        par_self,
        par_gyro_x
    );


    // Release cached frame.
    if ( frame_9174a9f6af6ea1755759d2dee489477e == cache_frame_9174a9f6af6ea1755759d2dee489477e )
    {
        Py_DECREF( frame_9174a9f6af6ea1755759d2dee489477e );
    }
    cache_frame_9174a9f6af6ea1755759d2dee489477e = NULL;

    assertFrameObject( frame_9174a9f6af6ea1755759d2dee489477e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_8_landing_detect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_gyro_x );
    Py_DECREF( par_gyro_x );
    par_gyro_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_gyro_x );
    Py_DECREF( par_gyro_x );
    par_gyro_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$flight_phase$$$function_8_landing_detect );
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



static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$flight_phase$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_5ff5087039b8323be5b613ebf9d4318d,
#endif
        codeobj_86aceaf67c78966b61de590f6f43a0a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$flight_phase,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_2_update_from_simulation(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$flight_phase$$$function_2_update_from_simulation,
        const_str_plain_update_from_simulation,
#if PYTHON_VERSION >= 300
        const_str_digest_3e442c37cf69cd0c35191bad4577fadd,
#endif
        codeobj_e1114be807b772733123a33ffbd0926e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$flight_phase,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_3_update(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$flight_phase$$$function_3_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 300
        const_str_digest_55563f3bbfe409d1cf85e7b4b1dcf227,
#endif
        codeobj_3c9ef7190631d0cc0f180301b82e8983,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$flight_phase,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_4_launch_detect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$flight_phase$$$function_4_launch_detect,
        const_str_plain_launch_detect,
#if PYTHON_VERSION >= 300
        const_str_digest_34023d872c64064bc6293f7b87571490,
#endif
        codeobj_ad7c988edfc09403e5c2b0ab45b267d7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$flight_phase,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_5_coast_detect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$flight_phase$$$function_5_coast_detect,
        const_str_plain_coast_detect,
#if PYTHON_VERSION >= 300
        const_str_digest_52d9c3fed46c5b9d93aaccbb4abaeee1,
#endif
        codeobj_88dfd9cb79159cde9f9487c6d1f55541,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$flight_phase,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_6_apogee_detect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$flight_phase$$$function_6_apogee_detect,
        const_str_plain_apogee_detect,
#if PYTHON_VERSION >= 300
        const_str_digest_7aa097211ca9e1e309e9b057d2d36316,
#endif
        codeobj_39b07265a273817d597342958007d80b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$flight_phase,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_7_main_detect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$flight_phase$$$function_7_main_detect,
        const_str_plain_main_detect,
#if PYTHON_VERSION >= 300
        const_str_digest_eb98e510ab0f1d1f075f95f4706779ba,
#endif
        codeobj_1d137fef02aa1901fba037d23758dfc0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$flight_phase,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$flight_phase$$$function_8_landing_detect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$flight_phase$$$function_8_landing_detect,
        const_str_plain_landing_detect,
#if PYTHON_VERSION >= 300
        const_str_digest_418195aaf47b006f3d2e0e282c45aba6,
#endif
        codeobj_9174a9f6af6ea1755759d2dee489477e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$flight_phase,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_model$flight_phase =
{
    PyModuleDef_HEAD_INIT,
    "model.flight_phase",
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

MOD_INIT_DECL( model$flight_phase )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_model$flight_phase );
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
    puts("model.flight_phase: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("model.flight_phase: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("model.flight_phase: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmodel$flight_phase" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_model$flight_phase = Py_InitModule4(
        "model.flight_phase",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_model$flight_phase = PyModule_Create( &mdef_model$flight_phase );
#endif

    moduledict_model$flight_phase = MODULE_DICT( module_model$flight_phase );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_model$flight_phase,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_model$flight_phase,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_model$flight_phase,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_model$flight_phase,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_model$flight_phase );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_d24b1d27e543dd8c27ef860638dadd16, module_model$flight_phase );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_084154392e8bc9d4e6ef6c2b0a67e94c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_model$flight_phase_2 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_59fec33d4a35664f219b76df6f1cbed6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_59fec33d4a35664f219b76df6f1cbed6_2 = NULL;
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
        UPDATE_STRING_DICT0( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_084154392e8bc9d4e6ef6c2b0a67e94c = MAKE_MODULE_FRAME( codeobj_084154392e8bc9d4e6ef6c2b0a67e94c, module_model$flight_phase );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_084154392e8bc9d4e6ef6c2b0a67e94c );
    assert( Py_REFCNT( frame_084154392e8bc9d4e6ef6c2b0a67e94c ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
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


            exception_lineno = 2;

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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_empty;
        tmp_assign_source_5 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_5;
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


            exception_lineno = 2;

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


            exception_lineno = 2;

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
            PyObject *tmp_assign_source_6;
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


                exception_lineno = 2;

                goto try_except_handler_1;
            }
            tmp_args_name_1 = const_tuple_str_plain_FlightPhase_tuple_empty_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_084154392e8bc9d4e6ef6c2b0a67e94c->m_frame.f_lineno = 2;
            tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 2;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_6;
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


                exception_lineno = 2;

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


                    exception_lineno = 2;

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

                    exception_lineno = 2;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 2;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 2;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_7;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_8;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_model$flight_phase_2 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_d24b1d27e543dd8c27ef860638dadd16;
        tmp_res = PyObject_SetItem( locals_model$flight_phase_2, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_FlightPhase;
        tmp_res = PyObject_SetItem( locals_model$flight_phase_2, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_59fec33d4a35664f219b76df6f1cbed6_2, codeobj_59fec33d4a35664f219b76df6f1cbed6, module_model$flight_phase, sizeof(void *) );
        frame_59fec33d4a35664f219b76df6f1cbed6_2 = cache_frame_59fec33d4a35664f219b76df6f1cbed6_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_59fec33d4a35664f219b76df6f1cbed6_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_59fec33d4a35664f219b76df6f1cbed6_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_model$flight_phase$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_model$flight_phase_2, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_model$flight_phase$$$function_2_update_from_simulation(  );



        tmp_res = PyObject_SetItem( locals_model$flight_phase_2, const_str_plain_update_from_simulation, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_model$flight_phase$$$function_3_update(  );



        tmp_res = PyObject_SetItem( locals_model$flight_phase_2, const_str_plain_update, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_model$flight_phase$$$function_4_launch_detect(  );



        tmp_res = PyObject_SetItem( locals_model$flight_phase_2, const_str_plain_launch_detect, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_model$flight_phase$$$function_5_coast_detect(  );



        tmp_res = PyObject_SetItem( locals_model$flight_phase_2, const_str_plain_coast_detect, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_model$flight_phase$$$function_6_apogee_detect(  );



        tmp_res = PyObject_SetItem( locals_model$flight_phase_2, const_str_plain_apogee_detect, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_model$flight_phase$$$function_7_main_detect(  );



        tmp_res = PyObject_SetItem( locals_model$flight_phase_2, const_str_plain_main_detect, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_model$flight_phase$$$function_8_landing_detect(  );



        tmp_res = PyObject_SetItem( locals_model$flight_phase_2, const_str_plain_landing_detect, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_59fec33d4a35664f219b76df6f1cbed6_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_59fec33d4a35664f219b76df6f1cbed6_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_59fec33d4a35664f219b76df6f1cbed6_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_59fec33d4a35664f219b76df6f1cbed6_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_59fec33d4a35664f219b76df6f1cbed6_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_59fec33d4a35664f219b76df6f1cbed6_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_59fec33d4a35664f219b76df6f1cbed6_2 == cache_frame_59fec33d4a35664f219b76df6f1cbed6_2 )
        {
            Py_DECREF( frame_59fec33d4a35664f219b76df6f1cbed6_2 );
        }
        cache_frame_59fec33d4a35664f219b76df6f1cbed6_2 = NULL;

        assertFrameObject( frame_59fec33d4a35664f219b76df6f1cbed6_2 );

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
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_FlightPhase;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_empty;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_model$flight_phase_2;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_084154392e8bc9d4e6ef6c2b0a67e94c->m_frame.f_lineno = 2;
            tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 2;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_9;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_8 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_8 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( model$flight_phase );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_model$flight_phase_2 );
        locals_model$flight_phase_2 = NULL;
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

        Py_DECREF( locals_model$flight_phase_2 );
        locals_model$flight_phase_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( model$flight_phase );
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
        NUITKA_CANNOT_GET_HERE( model$flight_phase );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 2;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain_FlightPhase, tmp_assign_source_8 );
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
    RESTORE_FRAME_EXCEPTION( frame_084154392e8bc9d4e6ef6c2b0a67e94c );
#endif
    popFrameStack();

    assertFrameObject( frame_084154392e8bc9d4e6ef6c2b0a67e94c );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_084154392e8bc9d4e6ef6c2b0a67e94c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_084154392e8bc9d4e6ef6c2b0a67e94c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_084154392e8bc9d4e6ef6c2b0a67e94c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_084154392e8bc9d4e6ef6c2b0a67e94c, exception_lineno );
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
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_model$flight_phase, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_model$flight_phase );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
