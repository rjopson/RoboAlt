/* Generated code for Python module 'model.aerodynamic_forces.aerodynamic_forces'
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

/* The "_module_model$aerodynamic_forces$aerodynamic_forces" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_model$aerodynamic_forces$aerodynamic_forces;
PyDictObject *moduledict_model$aerodynamic_forces$aerodynamic_forces;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_atmosphere_model;
static PyObject *const_str_digest_9ac16338b27d48eb82508c4ace1c68eb;
extern PyObject *const_str_plain_Re;
extern PyObject *const_str_digest_197ecfe157e9b451a973ea0f9d92345d;
extern PyObject *const_str_plain_entity;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_action;
extern PyObject *const_str_plain_position;
static PyObject *const_tuple_str_plain_density_air_str_plain_velocity_rocket_tuple;
extern PyObject *const_str_plain_gamma;
extern PyObject *const_str_plain_get_density;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_3f39b3691e72da200903746f8a705cb9_tuple;
extern PyObject *const_str_plain_A_fin;
extern PyObject *const_str_plain_velocity;
extern PyObject *const_str_plain_deployed;
static PyObject *const_tuple_9d5ebeb3d192ecbc42f26ab387924d5e_tuple;
static PyObject *const_str_plain_cp_moment_sum;
extern PyObject *const_str_plain_C_D_f;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_drag_coefficient_axial_config;
extern PyObject *const_str_plain_N;
static PyObject *const_tuple_str_plain_velocity_rocket_str_plain_speed_sound_tuple;
static PyObject *const_str_plain_r_t;
extern PyObject *const_str_digest_10dd71b41934c8a38db95813f59d2471;
static PyObject *const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple;
extern PyObject *const_str_plain_instance;
static PyObject *const_str_plain_density_air;
extern PyObject *const_str_plain_rocket_entities;
extern PyObject *const_str_plain_f_n;
static PyObject *const_str_plain_stability_model_open_rocket;
static PyObject *const_str_plain_length_rocket;
extern PyObject *const_str_plain_A_ref;
extern PyObject *const_str_plain_fineness;
extern PyObject *const_str_plain_drag;
extern PyObject *const_str_plain_A_L;
extern PyObject *const_str_plain_center_pressure_location_fin;
static PyObject *const_str_plain_normal_force_derivative_coefficient_part;
extern PyObject *const_float_0_5;
extern PyObject *const_str_plain_AR;
static PyObject *const_str_plain_cn_part;
static PyObject *const_tuple_str_plain_config_str_plain_part_str_plain_M_tuple;
extern PyObject *const_str_plain_children;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_base_drag_coefficient;
extern PyObject *const_str_plain_L;
static PyObject *const_tuple_4cc0f6d30ac9b867ec3fbfe775ef88f3_tuple;
extern PyObject *const_str_plain_fineness_ratio;
static PyObject *const_tuple_57b985d795d7121637289e19489af685_tuple;
extern PyObject *const_str_plain_skin_friction_coefficient;
extern PyObject *const_str_plain_area_aft;
extern PyObject *const_str_plain_get_flat_part_list;
extern PyObject *const_str_plain_angle_sweep_LE;
extern PyObject *const_str_plain_part_list;
extern PyObject *const_str_plain_Nosecone;
extern PyObject *const_str_plain_MAC;
extern PyObject *const_str_plain_area_reference;
static PyObject *const_tuple_c50d88b2497ba6e8221df77fdcbee71f_tuple;
extern PyObject *const_str_digest_e5a23d879bd3200463118fe6789df98f;
extern PyObject *const_str_plain_get_drag;
extern PyObject *const_str_plain_Fins;
extern PyObject *const_str_plain_skin_friction_drag_coefficient_body;
extern PyObject *const_str_plain_aerodynamic_forces;
static PyObject *const_str_digest_0eee54720925f221d32de06ea1cd75e3;
static PyObject *const_str_plain_get_drag_deployed;
extern PyObject *const_str_plain_alpha;
static PyObject *const_tuple_str_plain_mach_number_tuple;
static PyObject *const_tuple_e2d8753e3924aa49aada90a48f58de64_tuple;
extern PyObject *const_str_plain_beta;
extern PyObject *const_str_plain_fin_shape;
extern PyObject *const_str_plain_A_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_V;
extern PyObject *const_str_plain_atmosphere;
static PyObject *const_str_plain_drag_coefficient_part;
extern PyObject *const_str_plain_C_f_c;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_dynamic_pressure;
extern PyObject *const_str_plain_C_f;
static PyObject *const_tuple_4b6a61e2b037da485386b62297515593_tuple;
extern PyObject *const_str_plain_span;
extern PyObject *const_str_plain_distance_from_nose;
extern PyObject *const_str_digest_4514e974e73921c7f70be582a153bdfa;
extern PyObject *const_str_plain_number_fins;
static PyObject *const_str_plain_drag_coefficient_pressure_part;
static PyObject *const_str_digest_33c9ca9911dc41f1b9c41a2f556322f0;
static PyObject *const_str_plain_distance_normalized;
extern PyObject *const_str_plain_area_forward;
static PyObject *const_str_plain_drag_deployed;
static PyObject *const_str_plain_cn_sum;
extern PyObject *const_str_plain_surface_finish;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_config;
extern PyObject *const_str_plain_user_event;
extern PyObject *const_str_plain_MAC_LE_from_root_LE;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_pressure_drag_coefficient_fins_rounded;
extern PyObject *const_str_plain_aspect_ratio;
extern PyObject *const_str_digest_e241ba40a6bdc92d4f19f9af14c56d6c;
extern PyObject *const_str_plain_TubeBody;
extern PyObject *const_str_plain_A_frontal;
extern PyObject *const_str_plain_A_planform;
static PyObject *const_str_plain_drag_model_open_rocket;
static PyObject *const_tuple_e3ac32a01c48bb2125511b37d3ca283e_tuple;
extern PyObject *const_str_plain_drag_coefficient;
static PyObject *const_str_plain_velocity_rocket;
static PyObject *const_str_plain_drag_coefficient_base_part;
extern PyObject *const_int_0;
static PyObject *const_tuple_float_1_5eminus_05_tuple;
extern PyObject *const_str_plain_EXTERNAL;
extern PyObject *const_str_plain_nose_type;
extern PyObject *const_str_plain_user_events;
static PyObject *const_str_plain_radius_parent_body;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain_part;
extern PyObject *const_str_plain_angle_sweep_mid;
extern PyObject *const_str_plain_area_frontal;
static PyObject *const_str_plain_atmosphere_flight;
extern PyObject *const_str_plain_DEPLOY_PARACHUTE;
static PyObject *const_str_plain_center_pressure_location_part;
extern PyObject *const_str_plain_A_wet;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_drag_coefficient_friction_part;
extern PyObject *const_str_plain_entities;
static PyObject *const_str_plain_center_pressure_location_config;
extern PyObject *const_str_plain_area_planform;
static PyObject *const_str_plain_cp_dist;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_normal_force_coefficient_derivative_body;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain_part_use;
extern PyObject *const_str_plain_area;
static PyObject *const_str_plain_C_D_b;
static PyObject *const_str_plain_stability;
extern PyObject *const_str_plain_skin_friction_drag_coefficient_fins;
static PyObject *const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple;
extern PyObject *const_str_plain_StandardAtmosphere;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain_get_speed_sound;
extern PyObject *const_str_plain_mach_number;
extern PyObject *const_str_plain_normal_force_coefficient_derivative_fins;
extern PyObject *const_str_plain_speed_sound;
extern PyObject *const_str_plain_instance_list;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain_center_pressure_location_body;
extern PyObject *const_str_plain_volume;
static PyObject *const_str_plain_C_D_p;
extern PyObject *const_str_plain_child;
static PyObject *const_str_plain_prandtl_factor;
extern PyObject *const_str_plain_pressure_drag_coefficient_nose;
extern PyObject *const_str_plain_area_surface;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_reynolds_number;
static PyObject *const_float_1_5eminus_05;
extern PyObject *const_float_0_0;
static PyObject *const_str_plain_viscosity;
extern PyObject *const_str_plain_number;
static PyObject *const_str_plain_C_D;
static PyObject *const_str_plain_C_D_axial;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_9ac16338b27d48eb82508c4ace1c68eb = UNSTREAM_STRING_ASCII( &constant_bin[ 2191061 ], 46, 0 );
    const_tuple_str_plain_density_air_str_plain_velocity_rocket_tuple = PyTuple_New( 2 );
    const_str_plain_density_air = UNSTREAM_STRING_ASCII( &constant_bin[ 2191107 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_density_air_str_plain_velocity_rocket_tuple, 0, const_str_plain_density_air ); Py_INCREF( const_str_plain_density_air );
    const_str_plain_velocity_rocket = UNSTREAM_STRING_ASCII( &constant_bin[ 2191118 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_density_air_str_plain_velocity_rocket_tuple, 1, const_str_plain_velocity_rocket ); Py_INCREF( const_str_plain_velocity_rocket );
    const_tuple_3f39b3691e72da200903746f8a705cb9_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_3f39b3691e72da200903746f8a705cb9_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_3f39b3691e72da200903746f8a705cb9_tuple, 1, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    PyTuple_SET_ITEM( const_tuple_3f39b3691e72da200903746f8a705cb9_tuple, 2, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_3f39b3691e72da200903746f8a705cb9_tuple, 3, const_str_plain_beta ); Py_INCREF( const_str_plain_beta );
    const_str_plain_distance_normalized = UNSTREAM_STRING_ASCII( &constant_bin[ 2191133 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_3f39b3691e72da200903746f8a705cb9_tuple, 4, const_str_plain_distance_normalized ); Py_INCREF( const_str_plain_distance_normalized );
    const_tuple_9d5ebeb3d192ecbc42f26ab387924d5e_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_9d5ebeb3d192ecbc42f26ab387924d5e_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_9d5ebeb3d192ecbc42f26ab387924d5e_tuple, 1, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_9d5ebeb3d192ecbc42f26ab387924d5e_tuple, 2, const_str_plain_alpha ); Py_INCREF( const_str_plain_alpha );
    PyTuple_SET_ITEM( const_tuple_9d5ebeb3d192ecbc42f26ab387924d5e_tuple, 3, const_str_plain_beta ); Py_INCREF( const_str_plain_beta );
    PyTuple_SET_ITEM( const_tuple_9d5ebeb3d192ecbc42f26ab387924d5e_tuple, 4, const_str_plain_gamma ); Py_INCREF( const_str_plain_gamma );
    const_str_plain_cn_sum = UNSTREAM_STRING_ASCII( &constant_bin[ 2191152 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_9d5ebeb3d192ecbc42f26ab387924d5e_tuple, 5, const_str_plain_cn_sum ); Py_INCREF( const_str_plain_cn_sum );
    PyTuple_SET_ITEM( const_tuple_9d5ebeb3d192ecbc42f26ab387924d5e_tuple, 6, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    const_str_plain_cn_part = UNSTREAM_STRING_ASCII( &constant_bin[ 2191158 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_9d5ebeb3d192ecbc42f26ab387924d5e_tuple, 7, const_str_plain_cn_part ); Py_INCREF( const_str_plain_cn_part );
    PyTuple_SET_ITEM( const_tuple_9d5ebeb3d192ecbc42f26ab387924d5e_tuple, 8, const_str_plain_child ); Py_INCREF( const_str_plain_child );
    const_str_plain_cp_moment_sum = UNSTREAM_STRING_ASCII( &constant_bin[ 2191165 ], 13, 1 );
    const_tuple_str_plain_velocity_rocket_str_plain_speed_sound_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_velocity_rocket_str_plain_speed_sound_tuple, 0, const_str_plain_velocity_rocket ); Py_INCREF( const_str_plain_velocity_rocket );
    PyTuple_SET_ITEM( const_tuple_str_plain_velocity_rocket_str_plain_speed_sound_tuple, 1, const_str_plain_speed_sound ); Py_INCREF( const_str_plain_speed_sound );
    const_str_plain_r_t = UNSTREAM_STRING_ASCII( &constant_bin[ 4167 ], 3, 1 );
    const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple, 1, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple, 2, const_str_plain_alpha ); Py_INCREF( const_str_plain_alpha );
    PyTuple_SET_ITEM( const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple, 3, const_str_plain_beta ); Py_INCREF( const_str_plain_beta );
    PyTuple_SET_ITEM( const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple, 4, const_str_plain_gamma ); Py_INCREF( const_str_plain_gamma );
    PyTuple_SET_ITEM( const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple, 5, const_str_plain_cn_sum ); Py_INCREF( const_str_plain_cn_sum );
    PyTuple_SET_ITEM( const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple, 6, const_str_plain_cp_moment_sum ); Py_INCREF( const_str_plain_cp_moment_sum );
    PyTuple_SET_ITEM( const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple, 7, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    PyTuple_SET_ITEM( const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple, 8, const_str_plain_cn_part ); Py_INCREF( const_str_plain_cn_part );
    const_str_plain_cp_dist = UNSTREAM_STRING_ASCII( &constant_bin[ 1785194 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple, 9, const_str_plain_cp_dist ); Py_INCREF( const_str_plain_cp_dist );
    PyTuple_SET_ITEM( const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple, 10, const_str_plain_child ); Py_INCREF( const_str_plain_child );
    const_str_plain_stability_model_open_rocket = UNSTREAM_STRING_ASCII( &constant_bin[ 2191178 ], 27, 1 );
    const_str_plain_length_rocket = UNSTREAM_STRING_ASCII( &constant_bin[ 2191205 ], 13, 1 );
    const_str_plain_normal_force_derivative_coefficient_part = UNSTREAM_STRING_ASCII( &constant_bin[ 2191218 ], 40, 1 );
    const_tuple_str_plain_config_str_plain_part_str_plain_M_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_config_str_plain_part_str_plain_M_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_str_plain_config_str_plain_part_str_plain_M_tuple, 1, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    PyTuple_SET_ITEM( const_tuple_str_plain_config_str_plain_part_str_plain_M_tuple, 2, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    const_tuple_4cc0f6d30ac9b867ec3fbfe775ef88f3_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_4cc0f6d30ac9b867ec3fbfe775ef88f3_tuple, 0, const_str_plain_velocity_rocket ); Py_INCREF( const_str_plain_velocity_rocket );
    PyTuple_SET_ITEM( const_tuple_4cc0f6d30ac9b867ec3fbfe775ef88f3_tuple, 1, const_str_plain_length_rocket ); Py_INCREF( const_str_plain_length_rocket );
    const_str_plain_viscosity = UNSTREAM_STRING_ASCII( &constant_bin[ 2191258 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_4cc0f6d30ac9b867ec3fbfe775ef88f3_tuple, 2, const_str_plain_viscosity ); Py_INCREF( const_str_plain_viscosity );
    const_tuple_57b985d795d7121637289e19489af685_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_57b985d795d7121637289e19489af685_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_57b985d795d7121637289e19489af685_tuple, 1, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    PyTuple_SET_ITEM( const_tuple_57b985d795d7121637289e19489af685_tuple, 2, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_57b985d795d7121637289e19489af685_tuple, 3, const_str_plain_alpha ); Py_INCREF( const_str_plain_alpha );
    PyTuple_SET_ITEM( const_tuple_57b985d795d7121637289e19489af685_tuple, 4, const_str_plain_beta ); Py_INCREF( const_str_plain_beta );
    PyTuple_SET_ITEM( const_tuple_57b985d795d7121637289e19489af685_tuple, 5, const_str_plain_gamma ); Py_INCREF( const_str_plain_gamma );
    const_tuple_c50d88b2497ba6e8221df77fdcbee71f_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c50d88b2497ba6e8221df77fdcbee71f_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_c50d88b2497ba6e8221df77fdcbee71f_tuple, 1, const_str_plain_user_events ); Py_INCREF( const_str_plain_user_events );
    PyTuple_SET_ITEM( const_tuple_c50d88b2497ba6e8221df77fdcbee71f_tuple, 2, const_str_plain_density_air ); Py_INCREF( const_str_plain_density_air );
    PyTuple_SET_ITEM( const_tuple_c50d88b2497ba6e8221df77fdcbee71f_tuple, 3, const_str_plain_velocity ); Py_INCREF( const_str_plain_velocity );
    const_str_plain_drag_deployed = UNSTREAM_STRING_ASCII( &constant_bin[ 2191267 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_c50d88b2497ba6e8221df77fdcbee71f_tuple, 4, const_str_plain_drag_deployed ); Py_INCREF( const_str_plain_drag_deployed );
    PyTuple_SET_ITEM( const_tuple_c50d88b2497ba6e8221df77fdcbee71f_tuple, 5, const_str_plain_user_event ); Py_INCREF( const_str_plain_user_event );
    const_str_digest_0eee54720925f221d32de06ea1cd75e3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2191280 ], 42, 1 );
    const_str_plain_get_drag_deployed = UNSTREAM_STRING_ASCII( &constant_bin[ 2191322 ], 17, 1 );
    const_tuple_str_plain_mach_number_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_mach_number_tuple, 0, const_str_plain_mach_number ); Py_INCREF( const_str_plain_mach_number );
    const_tuple_e2d8753e3924aa49aada90a48f58de64_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_e2d8753e3924aa49aada90a48f58de64_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_e2d8753e3924aa49aada90a48f58de64_tuple, 1, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    PyTuple_SET_ITEM( const_tuple_e2d8753e3924aa49aada90a48f58de64_tuple, 2, const_str_plain_Re ); Py_INCREF( const_str_plain_Re );
    PyTuple_SET_ITEM( const_tuple_e2d8753e3924aa49aada90a48f58de64_tuple, 3, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    const_str_plain_C_D_p = UNSTREAM_STRING_ASCII( &constant_bin[ 2191339 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_e2d8753e3924aa49aada90a48f58de64_tuple, 4, const_str_plain_C_D_p ); Py_INCREF( const_str_plain_C_D_p );
    const_str_plain_C_D_b = UNSTREAM_STRING_ASCII( &constant_bin[ 2191344 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_e2d8753e3924aa49aada90a48f58de64_tuple, 5, const_str_plain_C_D_b ); Py_INCREF( const_str_plain_C_D_b );
    PyTuple_SET_ITEM( const_tuple_e2d8753e3924aa49aada90a48f58de64_tuple, 6, const_str_plain_C_D_f ); Py_INCREF( const_str_plain_C_D_f );
    const_str_plain_drag_coefficient_part = UNSTREAM_STRING_ASCII( &constant_bin[ 2191349 ], 21, 1 );
    const_tuple_4b6a61e2b037da485386b62297515593_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4b6a61e2b037da485386b62297515593_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_4b6a61e2b037da485386b62297515593_tuple, 1, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_4b6a61e2b037da485386b62297515593_tuple, 2, const_str_plain_Re ); Py_INCREF( const_str_plain_Re );
    const_str_plain_C_D = UNSTREAM_STRING_ASCII( &constant_bin[ 424172 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_4b6a61e2b037da485386b62297515593_tuple, 3, const_str_plain_C_D ); Py_INCREF( const_str_plain_C_D );
    PyTuple_SET_ITEM( const_tuple_4b6a61e2b037da485386b62297515593_tuple, 4, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    const_str_plain_drag_coefficient_pressure_part = UNSTREAM_STRING_ASCII( &constant_bin[ 2191370 ], 30, 1 );
    const_str_digest_33c9ca9911dc41f1b9c41a2f556322f0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2191400 ], 52, 0 );
    const_str_plain_drag_model_open_rocket = UNSTREAM_STRING_ASCII( &constant_bin[ 2191452 ], 22, 1 );
    const_tuple_e3ac32a01c48bb2125511b37d3ca283e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e3ac32a01c48bb2125511b37d3ca283e_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_e3ac32a01c48bb2125511b37d3ca283e_tuple, 1, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    PyTuple_SET_ITEM( const_tuple_e3ac32a01c48bb2125511b37d3ca283e_tuple, 2, const_str_plain_Re ); Py_INCREF( const_str_plain_Re );
    PyTuple_SET_ITEM( const_tuple_e3ac32a01c48bb2125511b37d3ca283e_tuple, 3, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_e3ac32a01c48bb2125511b37d3ca283e_tuple, 4, const_str_plain_C_f ); Py_INCREF( const_str_plain_C_f );
    const_str_plain_drag_coefficient_base_part = UNSTREAM_STRING_ASCII( &constant_bin[ 2191474 ], 26, 1 );
    const_tuple_float_1_5eminus_05_tuple = PyTuple_New( 1 );
    const_float_1_5eminus_05 = UNSTREAM_FLOAT( &constant_bin[ 2191500 ] );
    PyTuple_SET_ITEM( const_tuple_float_1_5eminus_05_tuple, 0, const_float_1_5eminus_05 ); Py_INCREF( const_float_1_5eminus_05 );
    const_str_plain_radius_parent_body = UNSTREAM_STRING_ASCII( &constant_bin[ 2191508 ], 18, 1 );
    const_str_plain_atmosphere_flight = UNSTREAM_STRING_ASCII( &constant_bin[ 2191526 ], 17, 1 );
    const_str_plain_center_pressure_location_part = UNSTREAM_STRING_ASCII( &constant_bin[ 2191543 ], 29, 1 );
    const_str_plain_drag_coefficient_friction_part = UNSTREAM_STRING_ASCII( &constant_bin[ 2191572 ], 30, 1 );
    const_str_plain_center_pressure_location_config = UNSTREAM_STRING_ASCII( &constant_bin[ 2191602 ], 31, 1 );
    const_str_plain_stability = UNSTREAM_STRING_ASCII( &constant_bin[ 2191178 ], 9, 1 );
    const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple, 1, const_str_plain_position ); Py_INCREF( const_str_plain_position );
    PyTuple_SET_ITEM( const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple, 2, const_str_plain_velocity ); Py_INCREF( const_str_plain_velocity );
    PyTuple_SET_ITEM( const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple, 3, const_str_plain_alpha ); Py_INCREF( const_str_plain_alpha );
    PyTuple_SET_ITEM( const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple, 4, const_str_plain_user_events ); Py_INCREF( const_str_plain_user_events );
    PyTuple_SET_ITEM( const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple, 5, const_str_plain_atmosphere_flight ); Py_INCREF( const_str_plain_atmosphere_flight );
    PyTuple_SET_ITEM( const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple, 6, const_str_plain_density_air ); Py_INCREF( const_str_plain_density_air );
    PyTuple_SET_ITEM( const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple, 7, const_str_plain_speed_sound ); Py_INCREF( const_str_plain_speed_sound );
    PyTuple_SET_ITEM( const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple, 8, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple, 9, const_str_plain_Re ); Py_INCREF( const_str_plain_Re );
    PyTuple_SET_ITEM( const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple, 10, const_str_plain_drag_deployed ); Py_INCREF( const_str_plain_drag_deployed );
    const_str_plain_C_D_axial = UNSTREAM_STRING_ASCII( &constant_bin[ 2191633 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple, 11, const_str_plain_C_D_axial ); Py_INCREF( const_str_plain_C_D_axial );
    const_str_plain_prandtl_factor = UNSTREAM_STRING_ASCII( &constant_bin[ 2191642 ], 14, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_model$aerodynamic_forces$aerodynamic_forces( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f5c2645ee5e793e029c9868001155789;
static PyCodeObject *codeobj_3feb6766b6d0eaab23d245f0ad6bf0f4;
static PyCodeObject *codeobj_e80239ba30f18ca5ec621420ea0c832b;
static PyCodeObject *codeobj_0905ecfa0395089c30c816f692ef3342;
static PyCodeObject *codeobj_970734456eb0c04935a351b77e08724a;
static PyCodeObject *codeobj_c2a4b1073dc614ad71fed62b1b48deaa;
static PyCodeObject *codeobj_dbb79bde1f82bd3dea8dbdd37c8ed702;
static PyCodeObject *codeobj_3fb71a04860dece97499696e3d56adfc;
static PyCodeObject *codeobj_1b2d66e877ba24bbac020a17e85ff604;
static PyCodeObject *codeobj_debd6ecf3d69ab88a31a4d119e3cbfd4;
static PyCodeObject *codeobj_4f48d56f64a9fddffee8413d434e9828;
static PyCodeObject *codeobj_7ba842738e3b7eef34d03ef7fcc80bff;
static PyCodeObject *codeobj_7607b278b9dec0df1a591a385f8d68b8;
static PyCodeObject *codeobj_70e787dd540981d02dcad6af19ac9b28;
static PyCodeObject *codeobj_ebb47bc6be3e90df6e2b705c327bf00a;
static PyCodeObject *codeobj_90846cd8fc38a1e432067503d4ff66ee;
static PyCodeObject *codeobj_ce4c0b441588145ef8288469c172c369;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_9ac16338b27d48eb82508c4ace1c68eb );
    codeobj_f5c2645ee5e793e029c9868001155789 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_33c9ca9911dc41f1b9c41a2f556322f0, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3feb6766b6d0eaab23d245f0ad6bf0f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_beta, 21, const_tuple_str_plain_mach_number_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e80239ba30f18ca5ec621420ea0c832b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_center_pressure_location_config, 120, const_tuple_7cbd9afbbf5c49a4be8a0dbc96cd42ee_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0905ecfa0395089c30c816f692ef3342 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_center_pressure_location_part, 140, const_tuple_3f39b3691e72da200903746f8a705cb9_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_970734456eb0c04935a351b77e08724a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_drag_coefficient_axial_config, 52, const_tuple_4b6a61e2b037da485386b62297515593_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c2a4b1073dc614ad71fed62b1b48deaa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_drag_coefficient_base_part, 79, const_tuple_str_plain_config_str_plain_part_str_plain_M_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dbb79bde1f82bd3dea8dbdd37c8ed702 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_drag_coefficient_friction_part, 85, const_tuple_e3ac32a01c48bb2125511b37d3ca283e_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3fb71a04860dece97499696e3d56adfc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_drag_coefficient_part, 62, const_tuple_e2d8753e3924aa49aada90a48f58de64_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1b2d66e877ba24bbac020a17e85ff604 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_drag_coefficient_pressure_part, 69, const_tuple_str_plain_config_str_plain_part_str_plain_M_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_debd6ecf3d69ab88a31a4d119e3cbfd4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dynamic_pressure, 18, const_tuple_str_plain_density_air_str_plain_velocity_rocket_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4f48d56f64a9fddffee8413d434e9828 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_drag, 24, const_tuple_5d581bb5bc4809a373bb798a02045dbb_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7ba842738e3b7eef34d03ef7fcc80bff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_drag_deployed, 42, const_tuple_c50d88b2497ba6e8221df77fdcbee71f_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7607b278b9dec0df1a591a385f8d68b8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mach_number, 9, const_tuple_str_plain_velocity_rocket_str_plain_speed_sound_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_70e787dd540981d02dcad6af19ac9b28 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0eee54720925f221d32de06ea1cd75e3, 97, const_tuple_9d5ebeb3d192ecbc42f26ab387924d5e_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ebb47bc6be3e90df6e2b705c327bf00a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normal_force_derivative_coefficient_part, 112, const_tuple_57b985d795d7121637289e19489af685_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_90846cd8fc38a1e432067503d4ff66ee = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prandtl_factor, 15, const_tuple_str_plain_mach_number_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce4c0b441588145ef8288469c172c369 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reynolds_number, 12, const_tuple_4cc0f6d30ac9b867ec3fbfe775ef88f3_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_10_drag_coefficient_pressure_part(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_11_drag_coefficient_base_part(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_12_drag_coefficient_friction_part(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_13_normal_force_derivative_coefficient_config(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_14_normal_force_derivative_coefficient_part(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_15_center_pressure_location_config(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_16_center_pressure_location_part(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_1_mach_number(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_2_reynolds_number( PyObject *defaults );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_3_prandtl_factor(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_4_dynamic_pressure(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_5_beta(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_6_get_drag( PyObject *defaults );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_7_get_drag_deployed(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_8_drag_coefficient_axial_config(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_9_drag_coefficient_part(  );


// The module function definitions.
static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_1_mach_number( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_velocity_rocket = python_pars[ 0 ];
    PyObject *par_speed_sound = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_7607b278b9dec0df1a591a385f8d68b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7607b278b9dec0df1a591a385f8d68b8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7607b278b9dec0df1a591a385f8d68b8, codeobj_7607b278b9dec0df1a591a385f8d68b8, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *) );
    frame_7607b278b9dec0df1a591a385f8d68b8 = cache_frame_7607b278b9dec0df1a591a385f8d68b8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7607b278b9dec0df1a591a385f8d68b8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7607b278b9dec0df1a591a385f8d68b8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_velocity_rocket );
        tmp_left_name_1 = par_velocity_rocket;
        CHECK_OBJECT( par_speed_sound );
        tmp_right_name_1 = par_speed_sound;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7607b278b9dec0df1a591a385f8d68b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7607b278b9dec0df1a591a385f8d68b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7607b278b9dec0df1a591a385f8d68b8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7607b278b9dec0df1a591a385f8d68b8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7607b278b9dec0df1a591a385f8d68b8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7607b278b9dec0df1a591a385f8d68b8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7607b278b9dec0df1a591a385f8d68b8,
        type_description_1,
        par_velocity_rocket,
        par_speed_sound
    );


    // Release cached frame.
    if ( frame_7607b278b9dec0df1a591a385f8d68b8 == cache_frame_7607b278b9dec0df1a591a385f8d68b8 )
    {
        Py_DECREF( frame_7607b278b9dec0df1a591a385f8d68b8 );
    }
    cache_frame_7607b278b9dec0df1a591a385f8d68b8 = NULL;

    assertFrameObject( frame_7607b278b9dec0df1a591a385f8d68b8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_1_mach_number );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_velocity_rocket );
    Py_DECREF( par_velocity_rocket );
    par_velocity_rocket = NULL;

    CHECK_OBJECT( (PyObject *)par_speed_sound );
    Py_DECREF( par_speed_sound );
    par_speed_sound = NULL;

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

    CHECK_OBJECT( (PyObject *)par_velocity_rocket );
    Py_DECREF( par_velocity_rocket );
    par_velocity_rocket = NULL;

    CHECK_OBJECT( (PyObject *)par_speed_sound );
    Py_DECREF( par_speed_sound );
    par_speed_sound = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_1_mach_number );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_2_reynolds_number( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_velocity_rocket = python_pars[ 0 ];
    PyObject *par_length_rocket = python_pars[ 1 ];
    PyObject *par_viscosity = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_ce4c0b441588145ef8288469c172c369;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ce4c0b441588145ef8288469c172c369 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce4c0b441588145ef8288469c172c369, codeobj_ce4c0b441588145ef8288469c172c369, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ce4c0b441588145ef8288469c172c369 = cache_frame_ce4c0b441588145ef8288469c172c369;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce4c0b441588145ef8288469c172c369 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce4c0b441588145ef8288469c172c369 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_velocity_rocket );
        tmp_left_name_2 = par_velocity_rocket;
        CHECK_OBJECT( par_length_rocket );
        tmp_right_name_1 = par_length_rocket;
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_viscosity );
        tmp_right_name_2 = par_viscosity;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce4c0b441588145ef8288469c172c369 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce4c0b441588145ef8288469c172c369 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce4c0b441588145ef8288469c172c369 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce4c0b441588145ef8288469c172c369, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce4c0b441588145ef8288469c172c369->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce4c0b441588145ef8288469c172c369, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce4c0b441588145ef8288469c172c369,
        type_description_1,
        par_velocity_rocket,
        par_length_rocket,
        par_viscosity
    );


    // Release cached frame.
    if ( frame_ce4c0b441588145ef8288469c172c369 == cache_frame_ce4c0b441588145ef8288469c172c369 )
    {
        Py_DECREF( frame_ce4c0b441588145ef8288469c172c369 );
    }
    cache_frame_ce4c0b441588145ef8288469c172c369 = NULL;

    assertFrameObject( frame_ce4c0b441588145ef8288469c172c369 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_2_reynolds_number );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_velocity_rocket );
    Py_DECREF( par_velocity_rocket );
    par_velocity_rocket = NULL;

    CHECK_OBJECT( (PyObject *)par_length_rocket );
    Py_DECREF( par_length_rocket );
    par_length_rocket = NULL;

    CHECK_OBJECT( (PyObject *)par_viscosity );
    Py_DECREF( par_viscosity );
    par_viscosity = NULL;

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

    CHECK_OBJECT( (PyObject *)par_velocity_rocket );
    Py_DECREF( par_velocity_rocket );
    par_velocity_rocket = NULL;

    CHECK_OBJECT( (PyObject *)par_length_rocket );
    Py_DECREF( par_length_rocket );
    par_length_rocket = NULL;

    CHECK_OBJECT( (PyObject *)par_viscosity );
    Py_DECREF( par_viscosity );
    par_viscosity = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_2_reynolds_number );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_3_prandtl_factor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mach_number = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_90846cd8fc38a1e432067503d4ff66ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_90846cd8fc38a1e432067503d4ff66ee = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_90846cd8fc38a1e432067503d4ff66ee, codeobj_90846cd8fc38a1e432067503d4ff66ee, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *) );
    frame_90846cd8fc38a1e432067503d4ff66ee = cache_frame_90846cd8fc38a1e432067503d4ff66ee;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_90846cd8fc38a1e432067503d4ff66ee );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_90846cd8fc38a1e432067503d4ff66ee ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_left_name_1 = const_int_pos_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_beta );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_beta );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "beta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_mach_number );
        tmp_args_element_name_1 = par_mach_number;
        frame_90846cd8fc38a1e432067503d4ff66ee->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_90846cd8fc38a1e432067503d4ff66ee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_90846cd8fc38a1e432067503d4ff66ee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_90846cd8fc38a1e432067503d4ff66ee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_90846cd8fc38a1e432067503d4ff66ee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_90846cd8fc38a1e432067503d4ff66ee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_90846cd8fc38a1e432067503d4ff66ee, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_90846cd8fc38a1e432067503d4ff66ee,
        type_description_1,
        par_mach_number
    );


    // Release cached frame.
    if ( frame_90846cd8fc38a1e432067503d4ff66ee == cache_frame_90846cd8fc38a1e432067503d4ff66ee )
    {
        Py_DECREF( frame_90846cd8fc38a1e432067503d4ff66ee );
    }
    cache_frame_90846cd8fc38a1e432067503d4ff66ee = NULL;

    assertFrameObject( frame_90846cd8fc38a1e432067503d4ff66ee );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_3_prandtl_factor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_mach_number );
    Py_DECREF( par_mach_number );
    par_mach_number = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mach_number );
    Py_DECREF( par_mach_number );
    par_mach_number = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_3_prandtl_factor );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_4_dynamic_pressure( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_density_air = python_pars[ 0 ];
    PyObject *par_velocity_rocket = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_debd6ecf3d69ab88a31a4d119e3cbfd4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_debd6ecf3d69ab88a31a4d119e3cbfd4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_debd6ecf3d69ab88a31a4d119e3cbfd4, codeobj_debd6ecf3d69ab88a31a4d119e3cbfd4, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *) );
    frame_debd6ecf3d69ab88a31a4d119e3cbfd4 = cache_frame_debd6ecf3d69ab88a31a4d119e3cbfd4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_debd6ecf3d69ab88a31a4d119e3cbfd4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_debd6ecf3d69ab88a31a4d119e3cbfd4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_left_name_2 = const_float_0_5;
        CHECK_OBJECT( par_density_air );
        tmp_right_name_1 = par_density_air;
        tmp_left_name_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_velocity_rocket );
        tmp_left_name_3 = par_velocity_rocket;
        tmp_right_name_3 = const_int_pos_2;
        tmp_right_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_debd6ecf3d69ab88a31a4d119e3cbfd4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_debd6ecf3d69ab88a31a4d119e3cbfd4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_debd6ecf3d69ab88a31a4d119e3cbfd4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_debd6ecf3d69ab88a31a4d119e3cbfd4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_debd6ecf3d69ab88a31a4d119e3cbfd4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_debd6ecf3d69ab88a31a4d119e3cbfd4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_debd6ecf3d69ab88a31a4d119e3cbfd4,
        type_description_1,
        par_density_air,
        par_velocity_rocket
    );


    // Release cached frame.
    if ( frame_debd6ecf3d69ab88a31a4d119e3cbfd4 == cache_frame_debd6ecf3d69ab88a31a4d119e3cbfd4 )
    {
        Py_DECREF( frame_debd6ecf3d69ab88a31a4d119e3cbfd4 );
    }
    cache_frame_debd6ecf3d69ab88a31a4d119e3cbfd4 = NULL;

    assertFrameObject( frame_debd6ecf3d69ab88a31a4d119e3cbfd4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_4_dynamic_pressure );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_density_air );
    Py_DECREF( par_density_air );
    par_density_air = NULL;

    CHECK_OBJECT( (PyObject *)par_velocity_rocket );
    Py_DECREF( par_velocity_rocket );
    par_velocity_rocket = NULL;

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

    CHECK_OBJECT( (PyObject *)par_density_air );
    Py_DECREF( par_density_air );
    par_density_air = NULL;

    CHECK_OBJECT( (PyObject *)par_velocity_rocket );
    Py_DECREF( par_velocity_rocket );
    par_velocity_rocket = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_4_dynamic_pressure );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_5_beta( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mach_number = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3feb6766b6d0eaab23d245f0ad6bf0f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3feb6766b6d0eaab23d245f0ad6bf0f4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3feb6766b6d0eaab23d245f0ad6bf0f4, codeobj_3feb6766b6d0eaab23d245f0ad6bf0f4, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *) );
    frame_3feb6766b6d0eaab23d245f0ad6bf0f4 = cache_frame_3feb6766b6d0eaab23d245f0ad6bf0f4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3feb6766b6d0eaab23d245f0ad6bf0f4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3feb6766b6d0eaab23d245f0ad6bf0f4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_math );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "math" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sqrt );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( par_mach_number );
        tmp_left_name_2 = par_mach_number;
        tmp_right_name_1 = const_int_pos_2;
        tmp_left_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_1;
        tmp_args_element_name_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3feb6766b6d0eaab23d245f0ad6bf0f4->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3feb6766b6d0eaab23d245f0ad6bf0f4->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3feb6766b6d0eaab23d245f0ad6bf0f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3feb6766b6d0eaab23d245f0ad6bf0f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3feb6766b6d0eaab23d245f0ad6bf0f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3feb6766b6d0eaab23d245f0ad6bf0f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3feb6766b6d0eaab23d245f0ad6bf0f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3feb6766b6d0eaab23d245f0ad6bf0f4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3feb6766b6d0eaab23d245f0ad6bf0f4,
        type_description_1,
        par_mach_number
    );


    // Release cached frame.
    if ( frame_3feb6766b6d0eaab23d245f0ad6bf0f4 == cache_frame_3feb6766b6d0eaab23d245f0ad6bf0f4 )
    {
        Py_DECREF( frame_3feb6766b6d0eaab23d245f0ad6bf0f4 );
    }
    cache_frame_3feb6766b6d0eaab23d245f0ad6bf0f4 = NULL;

    assertFrameObject( frame_3feb6766b6d0eaab23d245f0ad6bf0f4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_5_beta );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_mach_number );
    Py_DECREF( par_mach_number );
    par_mach_number = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mach_number );
    Py_DECREF( par_mach_number );
    par_mach_number = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_5_beta );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_6_get_drag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_config = python_pars[ 0 ];
    PyObject *par_position = python_pars[ 1 ];
    PyObject *par_velocity = python_pars[ 2 ];
    PyObject *par_alpha = python_pars[ 3 ];
    PyObject *par_user_events = python_pars[ 4 ];
    PyObject *var_atmosphere_flight = NULL;
    PyObject *var_density_air = NULL;
    PyObject *var_speed_sound = NULL;
    PyObject *var_M = NULL;
    PyObject *var_Re = NULL;
    PyObject *var_drag_deployed = NULL;
    PyObject *var_C_D_axial = NULL;
    struct Nuitka_FrameObject *frame_4f48d56f64a9fddffee8413d434e9828;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4f48d56f64a9fddffee8413d434e9828 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4f48d56f64a9fddffee8413d434e9828, codeobj_4f48d56f64a9fddffee8413d434e9828, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4f48d56f64a9fddffee8413d434e9828 = cache_frame_4f48d56f64a9fddffee8413d434e9828;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f48d56f64a9fddffee8413d434e9828 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f48d56f64a9fddffee8413d434e9828 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_atmosphere );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atmosphere );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atmosphere" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_4f48d56f64a9fddffee8413d434e9828->m_frame.f_lineno = 27;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_StandardAtmosphere );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_atmosphere_flight == NULL );
        var_atmosphere_flight = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_atmosphere_flight );
        tmp_called_instance_2 = var_atmosphere_flight;
        CHECK_OBJECT( par_position );
        tmp_args_element_name_1 = par_position;
        frame_4f48d56f64a9fddffee8413d434e9828->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get_density, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_density_air == NULL );
        var_density_air = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_atmosphere_flight );
        tmp_called_instance_3 = var_atmosphere_flight;
        CHECK_OBJECT( par_position );
        tmp_args_element_name_2 = par_position;
        frame_4f48d56f64a9fddffee8413d434e9828->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get_speed_sound, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_speed_sound == NULL );
        var_speed_sound = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_mach_number );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mach_number );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mach_number" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 32;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_dict_key_1 = const_str_plain_velocity_rocket;
        CHECK_OBJECT( par_velocity );
        tmp_dict_value_1 = par_velocity;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_speed_sound;
        CHECK_OBJECT( var_speed_sound );
        tmp_dict_value_2 = var_speed_sound;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_4f48d56f64a9fddffee8413d434e9828->m_frame.f_lineno = 32;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M == NULL );
        var_M = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_reynolds_number );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reynolds_number );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reynolds_number" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        tmp_dict_key_3 = const_str_plain_velocity_rocket;
        CHECK_OBJECT( par_velocity );
        tmp_dict_value_3 = par_velocity;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_length_rocket;
        CHECK_OBJECT( par_config );
        tmp_source_name_1 = par_config;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_length );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 33;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_4f48d56f64a9fddffee8413d434e9828->m_frame.f_lineno = 33;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Re == NULL );
        var_Re = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_get_drag_deployed );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_drag_deployed );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_drag_deployed" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_config );
        tmp_args_element_name_3 = par_config;
        CHECK_OBJECT( par_user_events );
        tmp_args_element_name_4 = par_user_events;
        CHECK_OBJECT( var_density_air );
        tmp_args_element_name_5 = var_density_air;
        CHECK_OBJECT( par_velocity );
        tmp_args_element_name_6 = par_velocity;
        frame_4f48d56f64a9fddffee8413d434e9828->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_drag_deployed == NULL );
        var_drag_deployed = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_drag_deployed );
        tmp_compexpr_left_1 = var_drag_deployed;
        tmp_compexpr_right_1 = const_float_0_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oooooooooooo";
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
        CHECK_OBJECT( var_drag_deployed );
        tmp_return_value = var_drag_deployed;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag_coefficient_axial_config );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_drag_coefficient_axial_config );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "drag_coefficient_axial_config" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 39;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_5;
            CHECK_OBJECT( par_config );
            tmp_args_element_name_7 = par_config;
            CHECK_OBJECT( var_M );
            tmp_args_element_name_8 = var_M;
            CHECK_OBJECT( var_Re );
            tmp_args_element_name_9 = var_Re;
            frame_4f48d56f64a9fddffee8413d434e9828->m_frame.f_lineno = 39;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
            }

            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_C_D_axial == NULL );
            var_C_D_axial = tmp_assign_source_7;
        }
        {
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_3;
            PyObject *tmp_right_name_4;
            PyObject *tmp_source_name_2;
            PyObject *tmp_right_name_5;
            tmp_left_name_4 = const_float_0_5;
            CHECK_OBJECT( var_density_air );
            tmp_right_name_1 = var_density_air;
            tmp_left_name_3 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_4, tmp_right_name_1 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_velocity );
            tmp_left_name_5 = par_velocity;
            tmp_right_name_3 = const_int_pos_2;
            tmp_right_name_2 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 40;
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


                exception_lineno = 40;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_config );
            tmp_source_name_2 = par_config;
            tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_area_reference );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 40;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_C_D_axial );
            tmp_right_name_5 = var_C_D_axial;
            tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f48d56f64a9fddffee8413d434e9828 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f48d56f64a9fddffee8413d434e9828 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f48d56f64a9fddffee8413d434e9828 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f48d56f64a9fddffee8413d434e9828, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f48d56f64a9fddffee8413d434e9828->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f48d56f64a9fddffee8413d434e9828, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4f48d56f64a9fddffee8413d434e9828,
        type_description_1,
        par_config,
        par_position,
        par_velocity,
        par_alpha,
        par_user_events,
        var_atmosphere_flight,
        var_density_air,
        var_speed_sound,
        var_M,
        var_Re,
        var_drag_deployed,
        var_C_D_axial
    );


    // Release cached frame.
    if ( frame_4f48d56f64a9fddffee8413d434e9828 == cache_frame_4f48d56f64a9fddffee8413d434e9828 )
    {
        Py_DECREF( frame_4f48d56f64a9fddffee8413d434e9828 );
    }
    cache_frame_4f48d56f64a9fddffee8413d434e9828 = NULL;

    assertFrameObject( frame_4f48d56f64a9fddffee8413d434e9828 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_6_get_drag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_position );
    Py_DECREF( par_position );
    par_position = NULL;

    CHECK_OBJECT( (PyObject *)par_velocity );
    Py_DECREF( par_velocity );
    par_velocity = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_user_events );
    Py_DECREF( par_user_events );
    par_user_events = NULL;

    CHECK_OBJECT( (PyObject *)var_atmosphere_flight );
    Py_DECREF( var_atmosphere_flight );
    var_atmosphere_flight = NULL;

    CHECK_OBJECT( (PyObject *)var_density_air );
    Py_DECREF( var_density_air );
    var_density_air = NULL;

    CHECK_OBJECT( (PyObject *)var_speed_sound );
    Py_DECREF( var_speed_sound );
    var_speed_sound = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_Re );
    Py_DECREF( var_Re );
    var_Re = NULL;

    CHECK_OBJECT( (PyObject *)var_drag_deployed );
    Py_DECREF( var_drag_deployed );
    var_drag_deployed = NULL;

    Py_XDECREF( var_C_D_axial );
    var_C_D_axial = NULL;

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

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_position );
    Py_DECREF( par_position );
    par_position = NULL;

    CHECK_OBJECT( (PyObject *)par_velocity );
    Py_DECREF( par_velocity );
    par_velocity = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_user_events );
    Py_DECREF( par_user_events );
    par_user_events = NULL;

    Py_XDECREF( var_atmosphere_flight );
    var_atmosphere_flight = NULL;

    Py_XDECREF( var_density_air );
    var_density_air = NULL;

    Py_XDECREF( var_speed_sound );
    var_speed_sound = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_Re );
    var_Re = NULL;

    Py_XDECREF( var_drag_deployed );
    var_drag_deployed = NULL;

    Py_XDECREF( var_C_D_axial );
    var_C_D_axial = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_6_get_drag );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_7_get_drag_deployed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_config = python_pars[ 0 ];
    PyObject *par_user_events = python_pars[ 1 ];
    PyObject *par_density_air = python_pars[ 2 ];
    PyObject *par_velocity = python_pars[ 3 ];
    PyObject *var_drag_deployed = NULL;
    PyObject *var_user_event = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_7ba842738e3b7eef34d03ef7fcc80bff;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7ba842738e3b7eef34d03ef7fcc80bff = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_float_0_0;
        assert( var_drag_deployed == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_drag_deployed = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ba842738e3b7eef34d03ef7fcc80bff, codeobj_7ba842738e3b7eef34d03ef7fcc80bff, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7ba842738e3b7eef34d03ef7fcc80bff = cache_frame_7ba842738e3b7eef34d03ef7fcc80bff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ba842738e3b7eef34d03ef7fcc80bff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ba842738e3b7eef34d03ef7fcc80bff ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_user_events );
        tmp_iter_arg_1 = par_user_events;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                exception_lineno = 45;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_user_event;
            var_user_event = tmp_assign_source_4;
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
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_action );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_str_plain_DEPLOY_PARACHUTE;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oooooo";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( var_user_event );
            tmp_source_name_2 = var_user_event;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_deployed );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_compexpr_right_2 = Py_True;
            tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_2 );
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
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_left_name_3;
                PyObject *tmp_left_name_4;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_2;
                PyObject *tmp_right_name_3;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_4;
                PyObject *tmp_right_name_5;
                PyObject *tmp_source_name_3;
                PyObject *tmp_source_name_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_right_name_6;
                PyObject *tmp_source_name_6;
                PyObject *tmp_source_name_7;
                PyObject *tmp_source_name_8;
                if ( var_drag_deployed == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "drag_deployed" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 48;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }

                tmp_left_name_1 = var_drag_deployed;
                tmp_left_name_5 = const_float_0_5;
                CHECK_OBJECT( par_density_air );
                tmp_right_name_2 = par_density_air;
                tmp_left_name_4 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_5, tmp_right_name_2 );
                if ( tmp_left_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 48;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( par_velocity );
                tmp_left_name_6 = par_velocity;
                tmp_right_name_4 = const_int_pos_2;
                tmp_right_name_3 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_4 );
                if ( tmp_right_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_4 );

                    exception_lineno = 48;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_left_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_4 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_left_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 48;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_user_event );
                tmp_source_name_5 = var_user_event;
                tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_instance );
                if ( tmp_source_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_3 );

                    exception_lineno = 48;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_part );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_source_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_3 );

                    exception_lineno = 48;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_area );
                Py_DECREF( tmp_source_name_3 );
                if ( tmp_right_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_3 );

                    exception_lineno = 48;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_left_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 48;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_user_event );
                tmp_source_name_8 = var_user_event;
                tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_instance );
                if ( tmp_source_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 48;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_part );
                Py_DECREF( tmp_source_name_7 );
                if ( tmp_source_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 48;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_drag_coefficient );
                Py_DECREF( tmp_source_name_6 );
                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 48;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_6 );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 48;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 48;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_5 = tmp_left_name_1;
                var_drag_deployed = tmp_assign_source_5;

            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oooooo";
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

    if ( var_drag_deployed == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "drag_deployed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_drag_deployed;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ba842738e3b7eef34d03ef7fcc80bff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ba842738e3b7eef34d03ef7fcc80bff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ba842738e3b7eef34d03ef7fcc80bff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ba842738e3b7eef34d03ef7fcc80bff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ba842738e3b7eef34d03ef7fcc80bff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ba842738e3b7eef34d03ef7fcc80bff, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ba842738e3b7eef34d03ef7fcc80bff,
        type_description_1,
        par_config,
        par_user_events,
        par_density_air,
        par_velocity,
        var_drag_deployed,
        var_user_event
    );


    // Release cached frame.
    if ( frame_7ba842738e3b7eef34d03ef7fcc80bff == cache_frame_7ba842738e3b7eef34d03ef7fcc80bff )
    {
        Py_DECREF( frame_7ba842738e3b7eef34d03ef7fcc80bff );
    }
    cache_frame_7ba842738e3b7eef34d03ef7fcc80bff = NULL;

    assertFrameObject( frame_7ba842738e3b7eef34d03ef7fcc80bff );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_7_get_drag_deployed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_user_events );
    Py_DECREF( par_user_events );
    par_user_events = NULL;

    CHECK_OBJECT( (PyObject *)par_density_air );
    Py_DECREF( par_density_air );
    par_density_air = NULL;

    CHECK_OBJECT( (PyObject *)par_velocity );
    Py_DECREF( par_velocity );
    par_velocity = NULL;

    Py_XDECREF( var_drag_deployed );
    var_drag_deployed = NULL;

    Py_XDECREF( var_user_event );
    var_user_event = NULL;

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

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_user_events );
    Py_DECREF( par_user_events );
    par_user_events = NULL;

    CHECK_OBJECT( (PyObject *)par_density_air );
    Py_DECREF( par_density_air );
    par_density_air = NULL;

    CHECK_OBJECT( (PyObject *)par_velocity );
    Py_DECREF( par_velocity );
    par_velocity = NULL;

    Py_XDECREF( var_drag_deployed );
    var_drag_deployed = NULL;

    Py_XDECREF( var_user_event );
    var_user_event = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_7_get_drag_deployed );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_8_drag_coefficient_axial_config( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_config = python_pars[ 0 ];
    PyObject *par_M = python_pars[ 1 ];
    PyObject *par_Re = python_pars[ 2 ];
    PyObject *var_C_D = NULL;
    PyObject *var_part = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_970734456eb0c04935a351b77e08724a;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_970734456eb0c04935a351b77e08724a = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_float_0_0;
        assert( var_C_D == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_C_D = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_970734456eb0c04935a351b77e08724a, codeobj_970734456eb0c04935a351b77e08724a, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_970734456eb0c04935a351b77e08724a = cache_frame_970734456eb0c04935a351b77e08724a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_970734456eb0c04935a351b77e08724a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_970734456eb0c04935a351b77e08724a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_config );
        tmp_called_instance_1 = par_config;
        frame_970734456eb0c04935a351b77e08724a->m_frame.f_lineno = 55;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_flat_part_list );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                exception_lineno = 55;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_part;
            var_part = tmp_assign_source_4;
            Py_INCREF( var_part );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_part );
        tmp_source_name_1 = var_part;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_part_use );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_str_plain_EXTERNAL;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            if ( var_C_D == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "C_D" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }

            tmp_left_name_1 = var_C_D;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag_coefficient_part );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_drag_coefficient_part );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "drag_coefficient_part" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_config );
            tmp_args_element_name_1 = par_config;
            CHECK_OBJECT( var_part );
            tmp_args_element_name_2 = var_part;
            CHECK_OBJECT( par_Re );
            tmp_args_element_name_3 = par_Re;
            CHECK_OBJECT( par_M );
            tmp_args_element_name_4 = par_M;
            frame_970734456eb0c04935a351b77e08724a->m_frame.f_lineno = 57;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
            }

            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_5 = tmp_left_name_1;
            var_C_D = tmp_assign_source_5;

        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooo";
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

    if ( var_C_D == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "C_D" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_C_D;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_970734456eb0c04935a351b77e08724a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_970734456eb0c04935a351b77e08724a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_970734456eb0c04935a351b77e08724a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_970734456eb0c04935a351b77e08724a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_970734456eb0c04935a351b77e08724a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_970734456eb0c04935a351b77e08724a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_970734456eb0c04935a351b77e08724a,
        type_description_1,
        par_config,
        par_M,
        par_Re,
        var_C_D,
        var_part
    );


    // Release cached frame.
    if ( frame_970734456eb0c04935a351b77e08724a == cache_frame_970734456eb0c04935a351b77e08724a )
    {
        Py_DECREF( frame_970734456eb0c04935a351b77e08724a );
    }
    cache_frame_970734456eb0c04935a351b77e08724a = NULL;

    assertFrameObject( frame_970734456eb0c04935a351b77e08724a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_8_drag_coefficient_axial_config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_Re );
    Py_DECREF( par_Re );
    par_Re = NULL;

    Py_XDECREF( var_C_D );
    var_C_D = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

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

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_Re );
    Py_DECREF( par_Re );
    par_Re = NULL;

    Py_XDECREF( var_C_D );
    var_C_D = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_8_drag_coefficient_axial_config );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_9_drag_coefficient_part( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_config = python_pars[ 0 ];
    PyObject *par_part = python_pars[ 1 ];
    PyObject *par_Re = python_pars[ 2 ];
    PyObject *par_M = python_pars[ 3 ];
    PyObject *var_C_D_p = NULL;
    PyObject *var_C_D_b = NULL;
    PyObject *var_C_D_f = NULL;
    struct Nuitka_FrameObject *frame_3fb71a04860dece97499696e3d56adfc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3fb71a04860dece97499696e3d56adfc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3fb71a04860dece97499696e3d56adfc, codeobj_3fb71a04860dece97499696e3d56adfc, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3fb71a04860dece97499696e3d56adfc = cache_frame_3fb71a04860dece97499696e3d56adfc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3fb71a04860dece97499696e3d56adfc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3fb71a04860dece97499696e3d56adfc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag_coefficient_pressure_part );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_drag_coefficient_pressure_part );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "drag_coefficient_pressure_part" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_config );
        tmp_args_element_name_1 = par_config;
        CHECK_OBJECT( par_part );
        tmp_args_element_name_2 = par_part;
        CHECK_OBJECT( par_M );
        tmp_args_element_name_3 = par_M;
        frame_3fb71a04860dece97499696e3d56adfc->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C_D_p == NULL );
        var_C_D_p = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag_coefficient_base_part );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_drag_coefficient_base_part );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "drag_coefficient_base_part" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_config );
        tmp_args_element_name_4 = par_config;
        CHECK_OBJECT( par_part );
        tmp_args_element_name_5 = par_part;
        CHECK_OBJECT( par_M );
        tmp_args_element_name_6 = par_M;
        frame_3fb71a04860dece97499696e3d56adfc->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C_D_b == NULL );
        var_C_D_b = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag_coefficient_friction_part );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_drag_coefficient_friction_part );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "drag_coefficient_friction_part" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_config );
        tmp_args_element_name_7 = par_config;
        CHECK_OBJECT( par_part );
        tmp_args_element_name_8 = par_part;
        CHECK_OBJECT( par_Re );
        tmp_args_element_name_9 = par_Re;
        CHECK_OBJECT( par_M );
        tmp_args_element_name_10 = par_M;
        frame_3fb71a04860dece97499696e3d56adfc->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C_D_f == NULL );
        var_C_D_f = tmp_assign_source_3;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_C_D_p );
        tmp_left_name_2 = var_C_D_p;
        CHECK_OBJECT( var_C_D_b );
        tmp_right_name_1 = var_C_D_b;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_C_D_f );
        tmp_right_name_2 = var_C_D_f;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fb71a04860dece97499696e3d56adfc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fb71a04860dece97499696e3d56adfc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fb71a04860dece97499696e3d56adfc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3fb71a04860dece97499696e3d56adfc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3fb71a04860dece97499696e3d56adfc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3fb71a04860dece97499696e3d56adfc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3fb71a04860dece97499696e3d56adfc,
        type_description_1,
        par_config,
        par_part,
        par_Re,
        par_M,
        var_C_D_p,
        var_C_D_b,
        var_C_D_f
    );


    // Release cached frame.
    if ( frame_3fb71a04860dece97499696e3d56adfc == cache_frame_3fb71a04860dece97499696e3d56adfc )
    {
        Py_DECREF( frame_3fb71a04860dece97499696e3d56adfc );
    }
    cache_frame_3fb71a04860dece97499696e3d56adfc = NULL;

    assertFrameObject( frame_3fb71a04860dece97499696e3d56adfc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_9_drag_coefficient_part );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_part );
    Py_DECREF( par_part );
    par_part = NULL;

    CHECK_OBJECT( (PyObject *)par_Re );
    Py_DECREF( par_Re );
    par_Re = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)var_C_D_p );
    Py_DECREF( var_C_D_p );
    var_C_D_p = NULL;

    CHECK_OBJECT( (PyObject *)var_C_D_b );
    Py_DECREF( var_C_D_b );
    var_C_D_b = NULL;

    CHECK_OBJECT( (PyObject *)var_C_D_f );
    Py_DECREF( var_C_D_f );
    var_C_D_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_part );
    Py_DECREF( par_part );
    par_part = NULL;

    CHECK_OBJECT( (PyObject *)par_Re );
    Py_DECREF( par_Re );
    par_Re = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    Py_XDECREF( var_C_D_p );
    var_C_D_p = NULL;

    Py_XDECREF( var_C_D_b );
    var_C_D_b = NULL;

    Py_XDECREF( var_C_D_f );
    var_C_D_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_9_drag_coefficient_part );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_10_drag_coefficient_pressure_part( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_config = python_pars[ 0 ];
    PyObject *par_part = python_pars[ 1 ];
    PyObject *par_M = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_1b2d66e877ba24bbac020a17e85ff604;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1b2d66e877ba24bbac020a17e85ff604 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1b2d66e877ba24bbac020a17e85ff604, codeobj_1b2d66e877ba24bbac020a17e85ff604, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1b2d66e877ba24bbac020a17e85ff604 = cache_frame_1b2d66e877ba24bbac020a17e85ff604;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1b2d66e877ba24bbac020a17e85ff604 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1b2d66e877ba24bbac020a17e85ff604 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_part );
        tmp_type_arg_1 = par_part;
        tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_compexpr_left_1 == NULL) );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_entity );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_entity );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "entity" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 71;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Nosecone );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 71;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_source_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_drag );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "drag" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 72;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pressure_drag_coefficient_nose );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_M;
            CHECK_OBJECT( par_M );
            tmp_dict_value_1 = par_M;
            tmp_kw_name_1 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_f_n;
            CHECK_OBJECT( par_part );
            tmp_source_name_3 = par_part;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fineness_ratio );
            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 72;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_type;
            CHECK_OBJECT( par_part );
            tmp_source_name_4 = par_part;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_nose_type );
            if ( tmp_dict_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 72;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
            Py_DECREF( tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_1b2d66e877ba24bbac020a17e85ff604->m_frame.f_lineno = 72;
            tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "ooo";
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
            PyObject *tmp_type_arg_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( par_part );
            tmp_type_arg_2 = par_part;
            tmp_compexpr_left_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_compexpr_left_2 == NULL) );
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_entity );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_entity );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "entity" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 73;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_3;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Fins );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_2 );

                exception_lineno = 73;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_source_name_7;
                PyObject *tmp_source_name_8;
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                PyObject *tmp_source_name_9;
                PyObject *tmp_dict_key_7;
                PyObject *tmp_dict_value_7;
                PyObject *tmp_source_name_10;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_drag );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "drag" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 74;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_6 = tmp_mvar_value_4;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_pressure_drag_coefficient_fins_rounded );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 74;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_key_4 = const_str_plain_M;
                CHECK_OBJECT( par_M );
                tmp_dict_value_4 = par_M;
                tmp_kw_name_2 = _PyDict_NewPresized( 4 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_5 = const_str_plain_angle_sweep_LE;
                CHECK_OBJECT( par_part );
                tmp_source_name_8 = par_part;
                tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_fin_shape );
                if ( tmp_source_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 74;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_angle_sweep_LE );
                Py_DECREF( tmp_source_name_7 );
                if ( tmp_dict_value_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 74;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
                Py_DECREF( tmp_dict_value_5 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_6 = const_str_plain_A_frontal;
                CHECK_OBJECT( par_part );
                tmp_source_name_9 = par_part;
                tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_area_frontal );
                if ( tmp_dict_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 74;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
                Py_DECREF( tmp_dict_value_6 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_7 = const_str_plain_A_ref;
                CHECK_OBJECT( par_config );
                tmp_source_name_10 = par_config;
                tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_area_reference );
                if ( tmp_dict_value_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 74;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
                Py_DECREF( tmp_dict_value_7 );
                assert( !(tmp_res != 0) );
                frame_1b2d66e877ba24bbac020a17e85ff604->m_frame.f_lineno = 74;
                tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 74;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_type_arg_3;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_5;
                CHECK_OBJECT( par_part );
                tmp_type_arg_3 = par_part;
                tmp_compexpr_left_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
                assert( !(tmp_compexpr_left_3 == NULL) );
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_entity );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_entity );
                }

                if ( tmp_mvar_value_5 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "entity" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 75;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_11 = tmp_mvar_value_5;
                tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_TubeBody );
                if ( tmp_compexpr_right_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );

                    exception_lineno = 75;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                Py_DECREF( tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 75;
                    type_description_1 = "ooo";
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
                tmp_return_value = const_int_0;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                goto branch_end_3;
                branch_no_3:;
                tmp_return_value = Py_None;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b2d66e877ba24bbac020a17e85ff604 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b2d66e877ba24bbac020a17e85ff604 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b2d66e877ba24bbac020a17e85ff604 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1b2d66e877ba24bbac020a17e85ff604, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1b2d66e877ba24bbac020a17e85ff604->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1b2d66e877ba24bbac020a17e85ff604, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1b2d66e877ba24bbac020a17e85ff604,
        type_description_1,
        par_config,
        par_part,
        par_M
    );


    // Release cached frame.
    if ( frame_1b2d66e877ba24bbac020a17e85ff604 == cache_frame_1b2d66e877ba24bbac020a17e85ff604 )
    {
        Py_DECREF( frame_1b2d66e877ba24bbac020a17e85ff604 );
    }
    cache_frame_1b2d66e877ba24bbac020a17e85ff604 = NULL;

    assertFrameObject( frame_1b2d66e877ba24bbac020a17e85ff604 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_10_drag_coefficient_pressure_part );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_part );
    Py_DECREF( par_part );
    par_part = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

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

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_part );
    Py_DECREF( par_part );
    par_part = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_10_drag_coefficient_pressure_part );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_11_drag_coefficient_base_part( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_config = python_pars[ 0 ];
    PyObject *par_part = python_pars[ 1 ];
    PyObject *par_M = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_c2a4b1073dc614ad71fed62b1b48deaa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c2a4b1073dc614ad71fed62b1b48deaa = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c2a4b1073dc614ad71fed62b1b48deaa, codeobj_c2a4b1073dc614ad71fed62b1b48deaa, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c2a4b1073dc614ad71fed62b1b48deaa = cache_frame_c2a4b1073dc614ad71fed62b1b48deaa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c2a4b1073dc614ad71fed62b1b48deaa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c2a4b1073dc614ad71fed62b1b48deaa ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_part );
        tmp_source_name_1 = par_part;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_config );
        tmp_source_name_4 = par_config;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_instance_list );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_source_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_part );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_drag );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "drag" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 82;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_M );
            tmp_args_element_name_1 = par_M;
            frame_c2a4b1073dc614ad71fed62b1b48deaa->m_frame.f_lineno = 82;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_base_drag_coefficient, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = const_int_0;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2a4b1073dc614ad71fed62b1b48deaa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2a4b1073dc614ad71fed62b1b48deaa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2a4b1073dc614ad71fed62b1b48deaa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c2a4b1073dc614ad71fed62b1b48deaa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c2a4b1073dc614ad71fed62b1b48deaa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c2a4b1073dc614ad71fed62b1b48deaa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c2a4b1073dc614ad71fed62b1b48deaa,
        type_description_1,
        par_config,
        par_part,
        par_M
    );


    // Release cached frame.
    if ( frame_c2a4b1073dc614ad71fed62b1b48deaa == cache_frame_c2a4b1073dc614ad71fed62b1b48deaa )
    {
        Py_DECREF( frame_c2a4b1073dc614ad71fed62b1b48deaa );
    }
    cache_frame_c2a4b1073dc614ad71fed62b1b48deaa = NULL;

    assertFrameObject( frame_c2a4b1073dc614ad71fed62b1b48deaa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_11_drag_coefficient_base_part );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_part );
    Py_DECREF( par_part );
    par_part = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

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

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_part );
    Py_DECREF( par_part );
    par_part = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_11_drag_coefficient_base_part );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_12_drag_coefficient_friction_part( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_config = python_pars[ 0 ];
    PyObject *par_part = python_pars[ 1 ];
    PyObject *par_Re = python_pars[ 2 ];
    PyObject *par_M = python_pars[ 3 ];
    PyObject *var_C_f = NULL;
    struct Nuitka_FrameObject *frame_dbb79bde1f82bd3dea8dbdd37c8ed702;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dbb79bde1f82bd3dea8dbdd37c8ed702 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dbb79bde1f82bd3dea8dbdd37c8ed702, codeobj_dbb79bde1f82bd3dea8dbdd37c8ed702, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dbb79bde1f82bd3dea8dbdd37c8ed702 = cache_frame_dbb79bde1f82bd3dea8dbdd37c8ed702;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dbb79bde1f82bd3dea8dbdd37c8ed702 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dbb79bde1f82bd3dea8dbdd37c8ed702 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_drag );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "drag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_skin_friction_coefficient );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_Re );
        tmp_args_element_name_1 = par_Re;
        CHECK_OBJECT( par_M );
        tmp_args_element_name_2 = par_M;
        CHECK_OBJECT( par_part );
        tmp_source_name_2 = par_part;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_surface_finish );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_config );
        tmp_source_name_3 = par_config;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_length );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_dbb79bde1f82bd3dea8dbdd37c8ed702->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C_f == NULL );
        var_C_f = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( par_part );
        tmp_type_arg_1 = par_part;
        tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_compexpr_left_1 == NULL) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_entity );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_entity );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "entity" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_2;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_TubeBody );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "ooooo";
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
        CHECK_OBJECT( par_part );
        tmp_type_arg_2 = par_part;
        tmp_compexpr_left_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
        assert( !(tmp_compexpr_left_2 == NULL) );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_entity );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_entity );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "entity" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Nosecone );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "ooooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_source_name_9;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_drag );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "drag" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 92;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_4;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_skin_friction_drag_coefficient_body );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_C_f_c;
            CHECK_OBJECT( var_C_f );
            tmp_dict_value_1 = var_C_f;
            tmp_kw_name_1 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_fineness;
            CHECK_OBJECT( par_config );
            tmp_source_name_7 = par_config;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_fineness_ratio );
            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 92;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_A_wet;
            CHECK_OBJECT( par_part );
            tmp_source_name_8 = par_part;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_area_surface );
            if ( tmp_dict_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 92;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
            Py_DECREF( tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_A_ref;
            CHECK_OBJECT( par_config );
            tmp_source_name_9 = par_config;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_area_reference );
            if ( tmp_dict_value_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 92;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
            Py_DECREF( tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            frame_dbb79bde1f82bd3dea8dbdd37c8ed702->m_frame.f_lineno = 92;
            tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_type_arg_3;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_5;
            CHECK_OBJECT( par_part );
            tmp_type_arg_3 = par_part;
            tmp_compexpr_left_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
            assert( !(tmp_compexpr_left_3 == NULL) );
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_entity );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_entity );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "entity" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 93;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_10 = tmp_mvar_value_5;
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_Fins );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_3 );

                exception_lineno = 93;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
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
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                PyObject *tmp_source_name_12;
                PyObject *tmp_dict_key_7;
                PyObject *tmp_dict_value_7;
                PyObject *tmp_source_name_13;
                PyObject *tmp_source_name_14;
                PyObject *tmp_dict_key_8;
                PyObject *tmp_dict_value_8;
                PyObject *tmp_source_name_15;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_drag );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "drag" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 94;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_11 = tmp_mvar_value_6;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_skin_friction_drag_coefficient_fins );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 94;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_key_5 = const_str_plain_C_f_c;
                CHECK_OBJECT( var_C_f );
                tmp_dict_value_5 = var_C_f;
                tmp_kw_name_2 = _PyDict_NewPresized( 4 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_6 = const_str_plain_number_fins;
                CHECK_OBJECT( par_part );
                tmp_source_name_12 = par_part;
                tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_number );
                if ( tmp_dict_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 94;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
                Py_DECREF( tmp_dict_value_6 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_7 = const_str_plain_A_planform;
                CHECK_OBJECT( par_part );
                tmp_source_name_14 = par_part;
                tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_fin_shape );
                if ( tmp_source_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 94;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_area_planform );
                Py_DECREF( tmp_source_name_13 );
                if ( tmp_dict_value_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 94;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
                Py_DECREF( tmp_dict_value_7 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_8 = const_str_plain_A_ref;
                CHECK_OBJECT( par_config );
                tmp_source_name_15 = par_config;
                tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_area_reference );
                if ( tmp_dict_value_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 94;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
                Py_DECREF( tmp_dict_value_8 );
                assert( !(tmp_res != 0) );
                frame_dbb79bde1f82bd3dea8dbdd37c8ed702->m_frame.f_lineno = 94;
                tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 94;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_return_value = Py_None;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbb79bde1f82bd3dea8dbdd37c8ed702 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbb79bde1f82bd3dea8dbdd37c8ed702 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbb79bde1f82bd3dea8dbdd37c8ed702 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dbb79bde1f82bd3dea8dbdd37c8ed702, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dbb79bde1f82bd3dea8dbdd37c8ed702->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dbb79bde1f82bd3dea8dbdd37c8ed702, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dbb79bde1f82bd3dea8dbdd37c8ed702,
        type_description_1,
        par_config,
        par_part,
        par_Re,
        par_M,
        var_C_f
    );


    // Release cached frame.
    if ( frame_dbb79bde1f82bd3dea8dbdd37c8ed702 == cache_frame_dbb79bde1f82bd3dea8dbdd37c8ed702 )
    {
        Py_DECREF( frame_dbb79bde1f82bd3dea8dbdd37c8ed702 );
    }
    cache_frame_dbb79bde1f82bd3dea8dbdd37c8ed702 = NULL;

    assertFrameObject( frame_dbb79bde1f82bd3dea8dbdd37c8ed702 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_12_drag_coefficient_friction_part );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_part );
    Py_DECREF( par_part );
    par_part = NULL;

    CHECK_OBJECT( (PyObject *)par_Re );
    Py_DECREF( par_Re );
    par_Re = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)var_C_f );
    Py_DECREF( var_C_f );
    var_C_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_part );
    Py_DECREF( par_part );
    par_part = NULL;

    CHECK_OBJECT( (PyObject *)par_Re );
    Py_DECREF( par_Re );
    par_Re = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    Py_XDECREF( var_C_f );
    var_C_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_12_drag_coefficient_friction_part );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_13_normal_force_derivative_coefficient_config( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_config = python_pars[ 0 ];
    PyObject *par_M = python_pars[ 1 ];
    PyObject *par_alpha = python_pars[ 2 ];
    PyObject *par_beta = python_pars[ 3 ];
    PyObject *par_gamma = python_pars[ 4 ];
    PyObject *var_cn_sum = NULL;
    PyObject *var_part = NULL;
    PyObject *var_cn_part = NULL;
    PyObject *var_child = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_70e787dd540981d02dcad6af19ac9b28;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_70e787dd540981d02dcad6af19ac9b28 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_float_0_0;
        assert( var_cn_sum == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_cn_sum = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_70e787dd540981d02dcad6af19ac9b28, codeobj_70e787dd540981d02dcad6af19ac9b28, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_70e787dd540981d02dcad6af19ac9b28 = cache_frame_70e787dd540981d02dcad6af19ac9b28;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_70e787dd540981d02dcad6af19ac9b28 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_70e787dd540981d02dcad6af19ac9b28 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_config );
        tmp_source_name_1 = par_config;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_part_list );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooo";
                exception_lineno = 100;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_part;
            var_part = tmp_assign_source_4;
            Py_INCREF( var_part );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_part );
        tmp_source_name_2 = var_part;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_part_use );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_str_plain_EXTERNAL;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_normal_force_derivative_coefficient_part );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normal_force_derivative_coefficient_part );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normal_force_derivative_coefficient_part" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 102;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_dict_key_1 = const_str_plain_config;
            CHECK_OBJECT( par_config );
            tmp_dict_value_1 = par_config;
            tmp_kw_name_1 = _PyDict_NewPresized( 6 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_part;
            CHECK_OBJECT( var_part );
            tmp_dict_value_2 = var_part;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_M;
            CHECK_OBJECT( par_M );
            tmp_dict_value_3 = par_M;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_alpha;
            CHECK_OBJECT( par_alpha );
            tmp_dict_value_4 = par_alpha;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_beta;
            CHECK_OBJECT( par_beta );
            tmp_dict_value_5 = par_beta;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_6 = const_str_plain_gamma;
            CHECK_OBJECT( par_gamma );
            tmp_dict_value_6 = par_gamma;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            frame_70e787dd540981d02dcad6af19ac9b28->m_frame.f_lineno = 102;
            tmp_assign_source_5 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_cn_part;
                var_cn_part = tmp_assign_source_5;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            if ( var_cn_sum == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cn_sum" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 103;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }

            tmp_left_name_1 = var_cn_sum;
            CHECK_OBJECT( var_cn_part );
            tmp_right_name_1 = var_cn_part;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = tmp_left_name_1;
            var_cn_sum = tmp_assign_source_6;

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( var_part );
            tmp_source_name_3 = var_part;
            tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_children );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_for_loop_2__for_iterator;
                tmp_for_loop_2__for_iterator = tmp_assign_source_7;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
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
                    type_description_1 = "ooooooooo";
                    exception_lineno = 106;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_9 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_child;
                var_child = tmp_assign_source_9;
                Py_INCREF( var_child );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_kw_name_2;
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
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_normal_force_derivative_coefficient_part );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normal_force_derivative_coefficient_part );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normal_force_derivative_coefficient_part" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 107;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            tmp_dict_key_7 = const_str_plain_config;
            CHECK_OBJECT( par_config );
            tmp_dict_value_7 = par_config;
            tmp_kw_name_2 = _PyDict_NewPresized( 6 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_8 = const_str_plain_part;
            CHECK_OBJECT( var_child );
            tmp_dict_value_8 = var_child;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_9 = const_str_plain_M;
            CHECK_OBJECT( par_M );
            tmp_dict_value_9 = par_M;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_10 = const_str_plain_alpha;
            CHECK_OBJECT( par_alpha );
            tmp_dict_value_10 = par_alpha;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_10, tmp_dict_value_10 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_11 = const_str_plain_beta;
            CHECK_OBJECT( par_beta );
            tmp_dict_value_11 = par_beta;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_11, tmp_dict_value_11 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_12 = const_str_plain_gamma;
            CHECK_OBJECT( par_gamma );
            tmp_dict_value_12 = par_gamma;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_12, tmp_dict_value_12 );
            assert( !(tmp_res != 0) );
            frame_70e787dd540981d02dcad6af19ac9b28->m_frame.f_lineno = 107;
            tmp_assign_source_10 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = var_cn_part;
                assert( old != NULL );
                var_cn_part = tmp_assign_source_10;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( var_cn_sum );
            tmp_left_name_2 = var_cn_sum;
            CHECK_OBJECT( var_cn_part );
            tmp_right_name_2 = var_cn_part;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_11 = tmp_left_name_2;
            var_cn_sum = tmp_assign_source_11;

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
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

        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    if ( var_cn_sum == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cn_sum" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_cn_sum;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_70e787dd540981d02dcad6af19ac9b28 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_70e787dd540981d02dcad6af19ac9b28 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_70e787dd540981d02dcad6af19ac9b28 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_70e787dd540981d02dcad6af19ac9b28, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_70e787dd540981d02dcad6af19ac9b28->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_70e787dd540981d02dcad6af19ac9b28, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_70e787dd540981d02dcad6af19ac9b28,
        type_description_1,
        par_config,
        par_M,
        par_alpha,
        par_beta,
        par_gamma,
        var_cn_sum,
        var_part,
        var_cn_part,
        var_child
    );


    // Release cached frame.
    if ( frame_70e787dd540981d02dcad6af19ac9b28 == cache_frame_70e787dd540981d02dcad6af19ac9b28 )
    {
        Py_DECREF( frame_70e787dd540981d02dcad6af19ac9b28 );
    }
    cache_frame_70e787dd540981d02dcad6af19ac9b28 = NULL;

    assertFrameObject( frame_70e787dd540981d02dcad6af19ac9b28 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_13_normal_force_derivative_coefficient_config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_beta );
    Py_DECREF( par_beta );
    par_beta = NULL;

    CHECK_OBJECT( (PyObject *)par_gamma );
    Py_DECREF( par_gamma );
    par_gamma = NULL;

    Py_XDECREF( var_cn_sum );
    var_cn_sum = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_cn_part );
    var_cn_part = NULL;

    Py_XDECREF( var_child );
    var_child = NULL;

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

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_beta );
    Py_DECREF( par_beta );
    par_beta = NULL;

    CHECK_OBJECT( (PyObject *)par_gamma );
    Py_DECREF( par_gamma );
    par_gamma = NULL;

    Py_XDECREF( var_cn_sum );
    var_cn_sum = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_cn_part );
    var_cn_part = NULL;

    Py_XDECREF( var_child );
    var_child = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_13_normal_force_derivative_coefficient_config );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_14_normal_force_derivative_coefficient_part( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_config = python_pars[ 0 ];
    PyObject *par_part = python_pars[ 1 ];
    PyObject *par_M = python_pars[ 2 ];
    PyObject *par_alpha = python_pars[ 3 ];
    PyObject *par_beta = python_pars[ 4 ];
    PyObject *par_gamma = python_pars[ 5 ];
    struct Nuitka_FrameObject *frame_ebb47bc6be3e90df6e2b705c327bf00a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ebb47bc6be3e90df6e2b705c327bf00a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ebb47bc6be3e90df6e2b705c327bf00a, codeobj_ebb47bc6be3e90df6e2b705c327bf00a, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ebb47bc6be3e90df6e2b705c327bf00a = cache_frame_ebb47bc6be3e90df6e2b705c327bf00a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ebb47bc6be3e90df6e2b705c327bf00a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ebb47bc6be3e90df6e2b705c327bf00a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_part );
        tmp_type_arg_1 = par_part;
        tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_compexpr_left_1 == NULL) );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_entity );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_entity );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "entity" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_TubeBody );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
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
        CHECK_OBJECT( par_part );
        tmp_type_arg_2 = par_part;
        tmp_compexpr_left_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
        assert( !(tmp_compexpr_left_2 == NULL) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_entity );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_entity );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "entity" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Nosecone );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_stability );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stability );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stability" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 115;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_normal_force_coefficient_derivative_body );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_A_ref;
            CHECK_OBJECT( par_config );
            tmp_source_name_4 = par_config;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_area_reference );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 115;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_A_L;
            CHECK_OBJECT( par_part );
            tmp_source_name_5 = par_part;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_area_aft );
            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 115;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_A_0;
            CHECK_OBJECT( par_part );
            tmp_source_name_6 = par_part;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_area_forward );
            if ( tmp_dict_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 115;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
            Py_DECREF( tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_A_planform;
            CHECK_OBJECT( par_part );
            tmp_source_name_7 = par_part;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_area_planform );
            if ( tmp_dict_value_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 115;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
            Py_DECREF( tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_alpha;
            CHECK_OBJECT( par_alpha );
            tmp_dict_value_5 = par_alpha;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            frame_ebb47bc6be3e90df6e2b705c327bf00a->m_frame.f_lineno = 115;
            tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_type_arg_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( par_part );
            tmp_type_arg_3 = par_part;
            tmp_compexpr_left_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
            assert( !(tmp_compexpr_left_3 == NULL) );
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_entity );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_entity );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "entity" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 116;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_4;
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Fins );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_3 );

                exception_lineno = 116;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                PyObject *tmp_source_name_10;
                PyObject *tmp_dict_key_7;
                PyObject *tmp_dict_value_7;
                PyObject *tmp_source_name_11;
                PyObject *tmp_source_name_12;
                PyObject *tmp_dict_key_8;
                PyObject *tmp_dict_value_8;
                PyObject *tmp_source_name_13;
                PyObject *tmp_source_name_14;
                PyObject *tmp_dict_key_9;
                PyObject *tmp_dict_value_9;
                PyObject *tmp_source_name_15;
                PyObject *tmp_source_name_16;
                PyObject *tmp_dict_key_10;
                PyObject *tmp_dict_value_10;
                PyObject *tmp_source_name_17;
                PyObject *tmp_dict_key_11;
                PyObject *tmp_dict_value_11;
                PyObject *tmp_source_name_18;
                PyObject *tmp_dict_key_12;
                PyObject *tmp_dict_value_12;
                PyObject *tmp_dict_key_13;
                PyObject *tmp_dict_value_13;
                PyObject *tmp_dict_key_14;
                PyObject *tmp_dict_value_14;
                PyObject *tmp_dict_key_15;
                PyObject *tmp_dict_value_15;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_stability );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stability );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stability" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 117;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_9 = tmp_mvar_value_5;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_normal_force_coefficient_derivative_fins );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 117;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_key_6 = const_str_plain_A_ref;
                CHECK_OBJECT( par_config );
                tmp_source_name_10 = par_config;
                tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_area_reference );
                if ( tmp_dict_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 117;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_kw_name_2 = _PyDict_NewPresized( 10 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
                Py_DECREF( tmp_dict_value_6 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_7 = const_str_plain_A_fin;
                CHECK_OBJECT( par_part );
                tmp_source_name_12 = par_part;
                tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_fin_shape );
                if ( tmp_source_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 117;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_area_planform );
                Py_DECREF( tmp_source_name_11 );
                if ( tmp_dict_value_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 117;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
                Py_DECREF( tmp_dict_value_7 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_8 = const_str_plain_span;
                CHECK_OBJECT( par_part );
                tmp_source_name_14 = par_part;
                tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_fin_shape );
                if ( tmp_source_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 117;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_span );
                Py_DECREF( tmp_source_name_13 );
                if ( tmp_dict_value_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 117;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
                Py_DECREF( tmp_dict_value_8 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_9 = const_str_plain_angle_sweep_mid;
                CHECK_OBJECT( par_part );
                tmp_source_name_16 = par_part;
                tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_fin_shape );
                if ( tmp_source_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 117;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_angle_sweep_mid );
                Py_DECREF( tmp_source_name_15 );
                if ( tmp_dict_value_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 117;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_9, tmp_dict_value_9 );
                Py_DECREF( tmp_dict_value_9 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_10 = const_str_plain_N;
                CHECK_OBJECT( par_part );
                tmp_source_name_17 = par_part;
                tmp_dict_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_number );
                if ( tmp_dict_value_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 117;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_10, tmp_dict_value_10 );
                Py_DECREF( tmp_dict_value_10 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_11 = const_str_plain_r_t;
                CHECK_OBJECT( par_part );
                tmp_source_name_18 = par_part;
                tmp_dict_value_11 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_radius_parent_body );
                if ( tmp_dict_value_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 117;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_11, tmp_dict_value_11 );
                Py_DECREF( tmp_dict_value_11 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_12 = const_str_plain_M;
                CHECK_OBJECT( par_M );
                tmp_dict_value_12 = par_M;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_12, tmp_dict_value_12 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_13 = const_str_plain_beta;
                CHECK_OBJECT( par_beta );
                tmp_dict_value_13 = par_beta;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_13, tmp_dict_value_13 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_14 = const_str_plain_gamma;
                CHECK_OBJECT( par_gamma );
                tmp_dict_value_14 = par_gamma;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_14, tmp_dict_value_14 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_15 = const_str_plain_alpha;
                CHECK_OBJECT( par_alpha );
                tmp_dict_value_15 = par_alpha;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_15, tmp_dict_value_15 );
                assert( !(tmp_res != 0) );
                frame_ebb47bc6be3e90df6e2b705c327bf00a->m_frame.f_lineno = 117;
                tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 117;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_return_value = Py_None;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ebb47bc6be3e90df6e2b705c327bf00a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ebb47bc6be3e90df6e2b705c327bf00a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ebb47bc6be3e90df6e2b705c327bf00a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ebb47bc6be3e90df6e2b705c327bf00a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ebb47bc6be3e90df6e2b705c327bf00a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ebb47bc6be3e90df6e2b705c327bf00a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ebb47bc6be3e90df6e2b705c327bf00a,
        type_description_1,
        par_config,
        par_part,
        par_M,
        par_alpha,
        par_beta,
        par_gamma
    );


    // Release cached frame.
    if ( frame_ebb47bc6be3e90df6e2b705c327bf00a == cache_frame_ebb47bc6be3e90df6e2b705c327bf00a )
    {
        Py_DECREF( frame_ebb47bc6be3e90df6e2b705c327bf00a );
    }
    cache_frame_ebb47bc6be3e90df6e2b705c327bf00a = NULL;

    assertFrameObject( frame_ebb47bc6be3e90df6e2b705c327bf00a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_14_normal_force_derivative_coefficient_part );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_part );
    Py_DECREF( par_part );
    par_part = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_beta );
    Py_DECREF( par_beta );
    par_beta = NULL;

    CHECK_OBJECT( (PyObject *)par_gamma );
    Py_DECREF( par_gamma );
    par_gamma = NULL;

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

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_part );
    Py_DECREF( par_part );
    par_part = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_beta );
    Py_DECREF( par_beta );
    par_beta = NULL;

    CHECK_OBJECT( (PyObject *)par_gamma );
    Py_DECREF( par_gamma );
    par_gamma = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_14_normal_force_derivative_coefficient_part );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_15_center_pressure_location_config( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_config = python_pars[ 0 ];
    PyObject *par_M = python_pars[ 1 ];
    PyObject *par_alpha = python_pars[ 2 ];
    PyObject *par_beta = python_pars[ 3 ];
    PyObject *par_gamma = python_pars[ 4 ];
    PyObject *var_cn_sum = NULL;
    PyObject *var_cp_moment_sum = NULL;
    PyObject *var_part = NULL;
    PyObject *var_cn_part = NULL;
    PyObject *var_cp_dist = NULL;
    PyObject *var_child = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e80239ba30f18ca5ec621420ea0c832b;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e80239ba30f18ca5ec621420ea0c832b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_float_0_0;
        assert( var_cn_sum == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_cn_sum = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_float_0_0;
        assert( var_cp_moment_sum == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_cp_moment_sum = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e80239ba30f18ca5ec621420ea0c832b, codeobj_e80239ba30f18ca5ec621420ea0c832b, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e80239ba30f18ca5ec621420ea0c832b = cache_frame_e80239ba30f18ca5ec621420ea0c832b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e80239ba30f18ca5ec621420ea0c832b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e80239ba30f18ca5ec621420ea0c832b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_config );
        tmp_source_name_1 = par_config;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_part_list );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooooooooooo";
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
                type_description_1 = "ooooooooooo";
                exception_lineno = 124;
                goto try_except_handler_2;
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
            PyObject *old = var_part;
            var_part = tmp_assign_source_5;
            Py_INCREF( var_part );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_part );
        tmp_source_name_2 = var_part;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_part_use );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_str_plain_EXTERNAL;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_normal_force_derivative_coefficient_part );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normal_force_derivative_coefficient_part );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normal_force_derivative_coefficient_part" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 126;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_dict_key_1 = const_str_plain_config;
            CHECK_OBJECT( par_config );
            tmp_dict_value_1 = par_config;
            tmp_kw_name_1 = _PyDict_NewPresized( 6 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_part;
            CHECK_OBJECT( var_part );
            tmp_dict_value_2 = var_part;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_M;
            CHECK_OBJECT( par_M );
            tmp_dict_value_3 = par_M;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_alpha;
            CHECK_OBJECT( par_alpha );
            tmp_dict_value_4 = par_alpha;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_beta;
            CHECK_OBJECT( par_beta );
            tmp_dict_value_5 = par_beta;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_6 = const_str_plain_gamma;
            CHECK_OBJECT( par_gamma );
            tmp_dict_value_6 = par_gamma;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            frame_e80239ba30f18ca5ec621420ea0c832b->m_frame.f_lineno = 126;
            tmp_assign_source_6 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 126;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_cn_part;
                var_cn_part = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_center_pressure_location_part );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_center_pressure_location_part );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "center_pressure_location_part" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 127;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            tmp_dict_key_7 = const_str_plain_config;
            CHECK_OBJECT( par_config );
            tmp_dict_value_7 = par_config;
            tmp_kw_name_2 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_8 = const_str_plain_part;
            CHECK_OBJECT( var_part );
            tmp_dict_value_8 = var_part;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_9 = const_str_plain_M;
            CHECK_OBJECT( par_M );
            tmp_dict_value_9 = par_M;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_10 = const_str_plain_beta;
            CHECK_OBJECT( par_beta );
            tmp_dict_value_10 = par_beta;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_10, tmp_dict_value_10 );
            assert( !(tmp_res != 0) );
            frame_e80239ba30f18ca5ec621420ea0c832b->m_frame.f_lineno = 127;
            tmp_assign_source_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 127;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_cp_dist;
                var_cp_dist = tmp_assign_source_7;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            if ( var_cn_sum == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cn_sum" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 128;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }

            tmp_left_name_1 = var_cn_sum;
            CHECK_OBJECT( var_cn_part );
            tmp_right_name_1 = var_cn_part;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_8 = tmp_left_name_1;
            var_cn_sum = tmp_assign_source_8;

        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            if ( var_cp_moment_sum == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cp_moment_sum" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 129;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }

            tmp_left_name_2 = var_cp_moment_sum;
            CHECK_OBJECT( var_cn_part );
            tmp_left_name_3 = var_cn_part;
            CHECK_OBJECT( var_cp_dist );
            tmp_right_name_3 = var_cp_dist;
            tmp_right_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 129;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 129;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_9 = tmp_left_name_2;
            var_cp_moment_sum = tmp_assign_source_9;

        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( var_part );
            tmp_source_name_3 = var_part;
            tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_children );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 132;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 132;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_for_loop_2__for_iterator;
                tmp_for_loop_2__for_iterator = tmp_assign_source_10;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooo";
                    exception_lineno = 132;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_11;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_12 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_child;
                var_child = tmp_assign_source_12;
                Py_INCREF( var_child );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_normal_force_derivative_coefficient_part );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normal_force_derivative_coefficient_part );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normal_force_derivative_coefficient_part" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 133;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            tmp_dict_key_11 = const_str_plain_config;
            CHECK_OBJECT( par_config );
            tmp_dict_value_11 = par_config;
            tmp_kw_name_3 = _PyDict_NewPresized( 6 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_11, tmp_dict_value_11 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_12 = const_str_plain_part;
            CHECK_OBJECT( var_child );
            tmp_dict_value_12 = var_child;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_12, tmp_dict_value_12 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_13 = const_str_plain_M;
            CHECK_OBJECT( par_M );
            tmp_dict_value_13 = par_M;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_13, tmp_dict_value_13 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_14 = const_str_plain_alpha;
            CHECK_OBJECT( par_alpha );
            tmp_dict_value_14 = par_alpha;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_14, tmp_dict_value_14 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_15 = const_str_plain_beta;
            CHECK_OBJECT( par_beta );
            tmp_dict_value_15 = par_beta;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_15, tmp_dict_value_15 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_16 = const_str_plain_gamma;
            CHECK_OBJECT( par_gamma );
            tmp_dict_value_16 = par_gamma;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_16, tmp_dict_value_16 );
            assert( !(tmp_res != 0) );
            frame_e80239ba30f18ca5ec621420ea0c832b->m_frame.f_lineno = 133;
            tmp_assign_source_13 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 133;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = var_cn_part;
                assert( old != NULL );
                var_cn_part = tmp_assign_source_13;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_kw_name_4;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_center_pressure_location_part );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_center_pressure_location_part );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "center_pressure_location_part" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 134;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            tmp_dict_key_17 = const_str_plain_config;
            CHECK_OBJECT( par_config );
            tmp_dict_value_17 = par_config;
            tmp_kw_name_4 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_17, tmp_dict_value_17 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_18 = const_str_plain_part;
            CHECK_OBJECT( var_child );
            tmp_dict_value_18 = var_child;
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_18, tmp_dict_value_18 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_19 = const_str_plain_M;
            CHECK_OBJECT( par_M );
            tmp_dict_value_19 = par_M;
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_19, tmp_dict_value_19 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_20 = const_str_plain_beta;
            CHECK_OBJECT( par_beta );
            tmp_dict_value_20 = par_beta;
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_20, tmp_dict_value_20 );
            assert( !(tmp_res != 0) );
            frame_e80239ba30f18ca5ec621420ea0c832b->m_frame.f_lineno = 134;
            tmp_assign_source_14 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = var_cp_dist;
                assert( old != NULL );
                var_cp_dist = tmp_assign_source_14;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_cn_sum );
            tmp_left_name_4 = var_cn_sum;
            CHECK_OBJECT( var_cn_part );
            tmp_right_name_4 = var_cn_part;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_15 = tmp_left_name_4;
            var_cn_sum = tmp_assign_source_15;

        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( var_cp_moment_sum );
            tmp_left_name_5 = var_cp_moment_sum;
            CHECK_OBJECT( var_cn_part );
            tmp_left_name_6 = var_cn_part;
            CHECK_OBJECT( var_cp_dist );
            tmp_right_name_6 = var_cp_dist;
            tmp_right_name_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_16 = tmp_left_name_5;
            var_cp_moment_sum = tmp_assign_source_16;

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
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

        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        if ( var_cp_moment_sum == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cp_moment_sum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 139;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_7 = var_cp_moment_sum;
        if ( var_cn_sum == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cn_sum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 139;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_7 = var_cn_sum;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e80239ba30f18ca5ec621420ea0c832b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e80239ba30f18ca5ec621420ea0c832b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e80239ba30f18ca5ec621420ea0c832b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e80239ba30f18ca5ec621420ea0c832b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e80239ba30f18ca5ec621420ea0c832b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e80239ba30f18ca5ec621420ea0c832b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e80239ba30f18ca5ec621420ea0c832b,
        type_description_1,
        par_config,
        par_M,
        par_alpha,
        par_beta,
        par_gamma,
        var_cn_sum,
        var_cp_moment_sum,
        var_part,
        var_cn_part,
        var_cp_dist,
        var_child
    );


    // Release cached frame.
    if ( frame_e80239ba30f18ca5ec621420ea0c832b == cache_frame_e80239ba30f18ca5ec621420ea0c832b )
    {
        Py_DECREF( frame_e80239ba30f18ca5ec621420ea0c832b );
    }
    cache_frame_e80239ba30f18ca5ec621420ea0c832b = NULL;

    assertFrameObject( frame_e80239ba30f18ca5ec621420ea0c832b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_15_center_pressure_location_config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_beta );
    Py_DECREF( par_beta );
    par_beta = NULL;

    CHECK_OBJECT( (PyObject *)par_gamma );
    Py_DECREF( par_gamma );
    par_gamma = NULL;

    Py_XDECREF( var_cn_sum );
    var_cn_sum = NULL;

    Py_XDECREF( var_cp_moment_sum );
    var_cp_moment_sum = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_cn_part );
    var_cn_part = NULL;

    Py_XDECREF( var_cp_dist );
    var_cp_dist = NULL;

    Py_XDECREF( var_child );
    var_child = NULL;

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

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_beta );
    Py_DECREF( par_beta );
    par_beta = NULL;

    CHECK_OBJECT( (PyObject *)par_gamma );
    Py_DECREF( par_gamma );
    par_gamma = NULL;

    Py_XDECREF( var_cn_sum );
    var_cn_sum = NULL;

    Py_XDECREF( var_cp_moment_sum );
    var_cp_moment_sum = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_cn_part );
    var_cn_part = NULL;

    Py_XDECREF( var_cp_dist );
    var_cp_dist = NULL;

    Py_XDECREF( var_child );
    var_child = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_15_center_pressure_location_config );
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


static PyObject *impl_model$aerodynamic_forces$aerodynamic_forces$$$function_16_center_pressure_location_part( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_config = python_pars[ 0 ];
    PyObject *par_part = python_pars[ 1 ];
    PyObject *par_M = python_pars[ 2 ];
    PyObject *par_beta = python_pars[ 3 ];
    PyObject *var_distance_normalized = NULL;
    struct Nuitka_FrameObject *frame_0905ecfa0395089c30c816f692ef3342;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0905ecfa0395089c30c816f692ef3342 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0905ecfa0395089c30c816f692ef3342, codeobj_0905ecfa0395089c30c816f692ef3342, module_model$aerodynamic_forces$aerodynamic_forces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0905ecfa0395089c30c816f692ef3342 = cache_frame_0905ecfa0395089c30c816f692ef3342;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0905ecfa0395089c30c816f692ef3342 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0905ecfa0395089c30c816f692ef3342 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_part );
        tmp_type_arg_1 = par_part;
        tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_compexpr_left_1 == NULL) );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_entity );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_entity );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "entity" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Nosecone );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_part );
            tmp_source_name_2 = par_part;
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_distance_from_nose );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_stability );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stability );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_left_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stability" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 143;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_center_pressure_location_body );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 143;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_L;
            CHECK_OBJECT( par_part );
            tmp_source_name_4 = par_part;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_length );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 143;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_A_L;
            CHECK_OBJECT( par_part );
            tmp_source_name_5 = par_part;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_area_aft );
            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 143;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_V;
            CHECK_OBJECT( par_part );
            tmp_source_name_6 = par_part;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_volume );
            if ( tmp_dict_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 143;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
            Py_DECREF( tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_0905ecfa0395089c30c816f692ef3342->m_frame.f_lineno = 143;
            tmp_right_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 143;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;
                type_description_1 = "ooooo";
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
            PyObject *tmp_type_arg_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( par_part );
            tmp_type_arg_2 = par_part;
            tmp_compexpr_left_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_compexpr_left_2 == NULL) );
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_entity );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_entity );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "entity" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 144;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_3;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_TubeBody );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_2 );

                exception_lineno = 144;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 144;
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
                PyObject *tmp_left_name_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_right_name_2;
                PyObject *tmp_left_name_3;
                PyObject *tmp_source_name_9;
                PyObject *tmp_right_name_3;
                CHECK_OBJECT( par_part );
                tmp_source_name_8 = par_part;
                tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_distance_from_nose );
                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 145;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_part );
                tmp_source_name_9 = par_part;
                tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_length );
                if ( tmp_left_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 145;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_3 = const_int_pos_2;
                tmp_right_name_2 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_3 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 145;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 145;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_type_arg_3;
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_4;
                CHECK_OBJECT( par_part );
                tmp_type_arg_3 = par_part;
                tmp_compexpr_left_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
                assert( !(tmp_compexpr_left_3 == NULL) );
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_entity );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_entity );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "entity" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 146;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_10 = tmp_mvar_value_4;
                tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_Fins );
                if ( tmp_compexpr_right_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );

                    exception_lineno = 146;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                Py_DECREF( tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 146;
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
                    PyObject *tmp_assign_source_1;
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_11;
                    PyObject *tmp_mvar_value_5;
                    PyObject *tmp_kw_name_2;
                    PyObject *tmp_dict_key_4;
                    PyObject *tmp_dict_value_4;
                    PyObject *tmp_dict_key_5;
                    PyObject *tmp_dict_value_5;
                    PyObject *tmp_dict_key_6;
                    PyObject *tmp_dict_value_6;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_source_name_13;
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_stability );

                    if (unlikely( tmp_mvar_value_5 == NULL ))
                    {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stability );
                    }

                    if ( tmp_mvar_value_5 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stability" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 149;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_11 = tmp_mvar_value_5;
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_center_pressure_location_fin );
                    if ( tmp_called_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 149;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_dict_key_4 = const_str_plain_M;
                    CHECK_OBJECT( par_M );
                    tmp_dict_value_4 = par_M;
                    tmp_kw_name_2 = _PyDict_NewPresized( 3 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_5 = const_str_plain_beta;
                    CHECK_OBJECT( par_beta );
                    tmp_dict_value_5 = par_beta;
                    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_6 = const_str_plain_AR;
                    CHECK_OBJECT( par_part );
                    tmp_source_name_13 = par_part;
                    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_fin_shape );
                    if ( tmp_source_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );
                        Py_DECREF( tmp_kw_name_2 );

                        exception_lineno = 149;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_aspect_ratio );
                    Py_DECREF( tmp_source_name_12 );
                    if ( tmp_dict_value_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );
                        Py_DECREF( tmp_kw_name_2 );

                        exception_lineno = 149;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
                    Py_DECREF( tmp_dict_value_6 );
                    assert( !(tmp_res != 0) );
                    frame_0905ecfa0395089c30c816f692ef3342->m_frame.f_lineno = 149;
                    tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_2 );
                    if ( tmp_assign_source_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 149;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_distance_normalized == NULL );
                    var_distance_normalized = tmp_assign_source_1;
                }
                {
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_right_name_4;
                    PyObject *tmp_left_name_6;
                    PyObject *tmp_right_name_5;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_source_name_16;
                    PyObject *tmp_right_name_6;
                    PyObject *tmp_source_name_17;
                    PyObject *tmp_source_name_18;
                    CHECK_OBJECT( par_part );
                    tmp_source_name_14 = par_part;
                    tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_distance_from_nose );
                    if ( tmp_left_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 152;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_distance_normalized );
                    tmp_left_name_6 = var_distance_normalized;
                    CHECK_OBJECT( par_part );
                    tmp_source_name_16 = par_part;
                    tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_fin_shape );
                    if ( tmp_source_name_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_5 );

                        exception_lineno = 152;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_MAC );
                    Py_DECREF( tmp_source_name_15 );
                    if ( tmp_right_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_5 );

                        exception_lineno = 152;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
                    Py_DECREF( tmp_right_name_5 );
                    if ( tmp_right_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_5 );

                        exception_lineno = 152;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_4 );
                    Py_DECREF( tmp_left_name_5 );
                    Py_DECREF( tmp_right_name_4 );
                    if ( tmp_left_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 152;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_part );
                    tmp_source_name_18 = par_part;
                    tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_fin_shape );
                    if ( tmp_source_name_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_4 );

                        exception_lineno = 152;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_MAC_LE_from_root_LE );
                    Py_DECREF( tmp_source_name_17 );
                    if ( tmp_right_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_4 );

                        exception_lineno = 152;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_6 );
                    Py_DECREF( tmp_left_name_4 );
                    Py_DECREF( tmp_right_name_6 );
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 152;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                goto branch_end_3;
                branch_no_3:;
                tmp_return_value = Py_None;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0905ecfa0395089c30c816f692ef3342 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0905ecfa0395089c30c816f692ef3342 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0905ecfa0395089c30c816f692ef3342 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0905ecfa0395089c30c816f692ef3342, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0905ecfa0395089c30c816f692ef3342->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0905ecfa0395089c30c816f692ef3342, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0905ecfa0395089c30c816f692ef3342,
        type_description_1,
        par_config,
        par_part,
        par_M,
        par_beta,
        var_distance_normalized
    );


    // Release cached frame.
    if ( frame_0905ecfa0395089c30c816f692ef3342 == cache_frame_0905ecfa0395089c30c816f692ef3342 )
    {
        Py_DECREF( frame_0905ecfa0395089c30c816f692ef3342 );
    }
    cache_frame_0905ecfa0395089c30c816f692ef3342 = NULL;

    assertFrameObject( frame_0905ecfa0395089c30c816f692ef3342 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_16_center_pressure_location_part );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_part );
    Py_DECREF( par_part );
    par_part = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_beta );
    Py_DECREF( par_beta );
    par_beta = NULL;

    Py_XDECREF( var_distance_normalized );
    var_distance_normalized = NULL;

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

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_part );
    Py_DECREF( par_part );
    par_part = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_beta );
    Py_DECREF( par_beta );
    par_beta = NULL;

    Py_XDECREF( var_distance_normalized );
    var_distance_normalized = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$aerodynamic_forces$$$function_16_center_pressure_location_part );
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



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_10_drag_coefficient_pressure_part(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_10_drag_coefficient_pressure_part,
        const_str_plain_drag_coefficient_pressure_part,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1b2d66e877ba24bbac020a17e85ff604,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_11_drag_coefficient_base_part(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_11_drag_coefficient_base_part,
        const_str_plain_drag_coefficient_base_part,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c2a4b1073dc614ad71fed62b1b48deaa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_12_drag_coefficient_friction_part(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_12_drag_coefficient_friction_part,
        const_str_plain_drag_coefficient_friction_part,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dbb79bde1f82bd3dea8dbdd37c8ed702,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_13_normal_force_derivative_coefficient_config(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_13_normal_force_derivative_coefficient_config,
        const_str_digest_0eee54720925f221d32de06ea1cd75e3,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_70e787dd540981d02dcad6af19ac9b28,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_14_normal_force_derivative_coefficient_part(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_14_normal_force_derivative_coefficient_part,
        const_str_plain_normal_force_derivative_coefficient_part,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ebb47bc6be3e90df6e2b705c327bf00a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_15_center_pressure_location_config(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_15_center_pressure_location_config,
        const_str_plain_center_pressure_location_config,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e80239ba30f18ca5ec621420ea0c832b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_16_center_pressure_location_part(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_16_center_pressure_location_part,
        const_str_plain_center_pressure_location_part,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0905ecfa0395089c30c816f692ef3342,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_1_mach_number(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_1_mach_number,
        const_str_plain_mach_number,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7607b278b9dec0df1a591a385f8d68b8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_2_reynolds_number( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_2_reynolds_number,
        const_str_plain_reynolds_number,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ce4c0b441588145ef8288469c172c369,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_3_prandtl_factor(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_3_prandtl_factor,
        const_str_plain_prandtl_factor,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_90846cd8fc38a1e432067503d4ff66ee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_4_dynamic_pressure(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_4_dynamic_pressure,
        const_str_plain_dynamic_pressure,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_debd6ecf3d69ab88a31a4d119e3cbfd4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_5_beta(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_5_beta,
        const_str_plain_beta,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3feb6766b6d0eaab23d245f0ad6bf0f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_6_get_drag( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_6_get_drag,
        const_str_plain_get_drag,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4f48d56f64a9fddffee8413d434e9828,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_7_get_drag_deployed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_7_get_drag_deployed,
        const_str_plain_get_drag_deployed,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7ba842738e3b7eef34d03ef7fcc80bff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_8_drag_coefficient_axial_config(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_8_drag_coefficient_axial_config,
        const_str_plain_drag_coefficient_axial_config,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_970734456eb0c04935a351b77e08724a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_9_drag_coefficient_part(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$aerodynamic_forces$$$function_9_drag_coefficient_part,
        const_str_plain_drag_coefficient_part,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3fb71a04860dece97499696e3d56adfc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$aerodynamic_forces,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_model$aerodynamic_forces$aerodynamic_forces =
{
    PyModuleDef_HEAD_INIT,
    "model.aerodynamic_forces.aerodynamic_forces",
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

MOD_INIT_DECL( model$aerodynamic_forces$aerodynamic_forces )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_model$aerodynamic_forces$aerodynamic_forces );
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
    puts("model.aerodynamic_forces.aerodynamic_forces: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("model.aerodynamic_forces.aerodynamic_forces: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("model.aerodynamic_forces.aerodynamic_forces: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmodel$aerodynamic_forces$aerodynamic_forces" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_model$aerodynamic_forces$aerodynamic_forces = Py_InitModule4(
        "model.aerodynamic_forces.aerodynamic_forces",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_model$aerodynamic_forces$aerodynamic_forces = PyModule_Create( &mdef_model$aerodynamic_forces$aerodynamic_forces );
#endif

    moduledict_model$aerodynamic_forces$aerodynamic_forces = MODULE_DICT( module_model$aerodynamic_forces$aerodynamic_forces );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_model$aerodynamic_forces$aerodynamic_forces,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_model$aerodynamic_forces$aerodynamic_forces,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_model$aerodynamic_forces$aerodynamic_forces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_model$aerodynamic_forces$aerodynamic_forces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_model$aerodynamic_forces$aerodynamic_forces );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_e241ba40a6bdc92d4f19f9af14c56d6c, module_model$aerodynamic_forces$aerodynamic_forces );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_f5c2645ee5e793e029c9868001155789;
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
        UPDATE_STRING_DICT0( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_f5c2645ee5e793e029c9868001155789 = MAKE_MODULE_FRAME( codeobj_f5c2645ee5e793e029c9868001155789, module_model$aerodynamic_forces$aerodynamic_forces );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f5c2645ee5e793e029c9868001155789 );
    assert( Py_REFCNT( frame_f5c2645ee5e793e029c9868001155789 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_math;
        tmp_globals_name_1 = (PyObject *)moduledict_model$aerodynamic_forces$aerodynamic_forces;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_f5c2645ee5e793e029c9868001155789->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_4514e974e73921c7f70be582a153bdfa;
        tmp_globals_name_2 = (PyObject *)moduledict_model$aerodynamic_forces$aerodynamic_forces;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_f5c2645ee5e793e029c9868001155789->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_1 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_aerodynamic_forces );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_drag_model_open_rocket );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_e5a23d879bd3200463118fe6789df98f;
        tmp_globals_name_3 = (PyObject *)moduledict_model$aerodynamic_forces$aerodynamic_forces;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_f5c2645ee5e793e029c9868001155789->m_frame.f_lineno = 5;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_3 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_aerodynamic_forces );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_stability_model_open_rocket );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_stability, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_197ecfe157e9b451a973ea0f9d92345d;
        tmp_globals_name_4 = (PyObject *)moduledict_model$aerodynamic_forces$aerodynamic_forces;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_f5c2645ee5e793e029c9868001155789->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_5 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_aerodynamic_forces );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_atmosphere_model );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_atmosphere, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_10dd71b41934c8a38db95813f59d2471;
        tmp_globals_name_5 = (PyObject *)moduledict_model$aerodynamic_forces$aerodynamic_forces;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_f5c2645ee5e793e029c9868001155789->m_frame.f_lineno = 7;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_7 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_entities );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_rocket_entities );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_entity, tmp_assign_source_8 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5c2645ee5e793e029c9868001155789 );
#endif
    popFrameStack();

    assertFrameObject( frame_f5c2645ee5e793e029c9868001155789 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5c2645ee5e793e029c9868001155789 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f5c2645ee5e793e029c9868001155789, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f5c2645ee5e793e029c9868001155789->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f5c2645ee5e793e029c9868001155789, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_1_mach_number(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_mach_number, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_float_1_5eminus_05_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_10 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_2_reynolds_number( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_reynolds_number, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_3_prandtl_factor(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_prandtl_factor, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_4_dynamic_pressure(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_dynamic_pressure, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_5_beta(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_beta, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = PyList_New( 0 );
        tmp_defaults_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_1 );
        tmp_assign_source_14 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_6_get_drag( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_get_drag, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_7_get_drag_deployed(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_get_drag_deployed, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_8_drag_coefficient_axial_config(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag_coefficient_axial_config, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_9_drag_coefficient_part(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag_coefficient_part, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_10_drag_coefficient_pressure_part(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag_coefficient_pressure_part, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_11_drag_coefficient_base_part(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag_coefficient_base_part, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_12_drag_coefficient_friction_part(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_drag_coefficient_friction_part, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_13_normal_force_derivative_coefficient_config(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_digest_0eee54720925f221d32de06ea1cd75e3, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_14_normal_force_derivative_coefficient_part(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_normal_force_derivative_coefficient_part, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_15_center_pressure_location_config(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_center_pressure_location_config, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_FUNCTION_model$aerodynamic_forces$aerodynamic_forces$$$function_16_center_pressure_location_part(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain_center_pressure_location_part, tmp_assign_source_24 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$aerodynamic_forces, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_model$aerodynamic_forces$aerodynamic_forces );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
