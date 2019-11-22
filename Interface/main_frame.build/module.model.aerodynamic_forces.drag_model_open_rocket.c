/* Generated code for Python module 'model.aerodynamic_forces.drag_model_open_rocket'
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

/* The "_module_model$aerodynamic_forces$drag_model_open_rocket" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_model$aerodynamic_forces$drag_model_open_rocket;
PyDictObject *moduledict_model$aerodynamic_forces$drag_model_open_rocket;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_type_nose;
extern PyObject *const_str_plain_Re;
static PyObject *const_str_plain_reynolds_critical;
static PyObject *const_float_0_07;
static PyObject *const_tuple_2027fd8b795fe64e05fa5787fd548fe6_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_float_1_5;
static PyObject *const_float_0_502;
extern PyObject *const_float_10000_0;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_R_s_str_plain_L_tuple;
extern PyObject *const_str_plain_max;
extern PyObject *const_float_0_09;
static PyObject *const_float_0_1095;
static PyObject *const_float_1_214;
extern PyObject *const_float_1_84;
extern PyObject *const_str_plain_interp;
static PyObject *const_str_plain_fineness_body;
static PyObject *const_str_plain_A_planform_fins;
static PyObject *const_float_3eminus_05;
extern PyObject *const_str_plain_C_D_f;
static PyObject *const_float_5_6;
static PyObject *const_float_500000_0;
static PyObject *const_tuple_423f448559c08988c4ea5d8b57af6f90_tuple;
static PyObject *const_str_plain_C_D_base;
extern PyObject *const_float_0_0002;
extern PyObject *const_str_plain_ROUGH;
static PyObject *const_float_0_088;
static PyObject *const_str_digest_9ccdae977b0850814b1ed5662e689141;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_f_n;
extern PyObject *const_float_0_25;
static PyObject *const_tuple_9f13a82dbb9738f3673adaba424c2770_tuple;
extern PyObject *const_str_plain_fineness;
extern PyObject *const_str_plain_A_ref;
extern PyObject *const_str_plain_cos;
static PyObject *const_str_plain_surface_roughness_height_lib;
extern PyObject *const_float_0_5;
static PyObject *const_tuple_205e8dd720fd9a9aa7b861a153f81e59_tuple;
extern PyObject *const_float_0_075;
static PyObject *const_str_plain_surface_roughness_height;
static PyObject *const_float_0_18;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_base_drag_coefficient;
extern PyObject *const_float_0_025;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_q_stag_q;
extern PyObject *const_str_plain_L;
static PyObject *const_float_1_328;
extern PyObject *const_float_0_08;
extern PyObject *const_float_0_95;
extern PyObject *const_float_1_1;
extern PyObject *const_str_plain_skin_friction_coefficient;
extern PyObject *const_str_plain_numpy;
static PyObject *const_float_minus_1_039;
static PyObject *const_float_0_166;
extern PyObject *const_str_plain_angle_sweep_LE;
static PyObject *const_tuple_0450de8c21664864acb051884555ebb5_tuple;
extern PyObject *const_float_1_0;
extern PyObject *const_float_2_0;
static PyObject *const_float_0_13;
extern PyObject *const_str_plain_skin_friction_drag_coefficient_body;
static PyObject *const_list_0379503006a4f967918b7326f6694c2d_list;
static PyObject *const_str_plain_C_D_TE;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_C_D_3_test;
static PyObject *const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple;
extern PyObject *const_str_plain_C_f_c;
static PyObject *const_str_plain_C_D_pressure_fins;
extern PyObject *const_str_plain_C_f;
extern PyObject *const_float_1_2;
extern PyObject *const_str_digest_4514e974e73921c7f70be582a153bdfa;
extern PyObject *const_str_plain_number_fins;
static PyObject *const_str_plain_C_f_rough;
static PyObject *const_str_plain_A_wet_body;
static PyObject *const_float_1_785;
static PyObject *const_float_0_0148;
static PyObject *const_str_plain_C_D_pressure_nose;
extern PyObject *const_str_plain_surface_finish;
static PyObject *const_str_plain_pressure_drag_coefficient_test;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_pressure_drag_coefficient_fins_rounded;
static PyObject *const_float_0_76;
extern PyObject *const_float_1_4;
extern PyObject *const_float_5_0;
extern PyObject *const_str_plain_A_frontal;
extern PyObject *const_str_plain_A_planform;
static PyObject *const_tuple_62f341cae945c3da74e6fd49a53892a4_tuple;
extern PyObject *const_float_1_6;
extern PyObject *const_str_plain_drag_coefficient;
extern PyObject *const_int_0;
static PyObject *const_float_minus_0_417;
static PyObject *const_float_2eminus_06;
static PyObject *const_str_digest_a7de9198e40db037502060e6e8786c52;
static PyObject *const_str_plain_C_D_0;
static PyObject *const_float_0_12;
static PyObject *const_int_pos_51;
extern PyObject *const_str_plain_VON_KARMEN;
extern PyObject *const_str_plain_origin;
extern PyObject *const_float_0_2;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_UNFINISHED;
extern PyObject *const_float_0_0001;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_A_wet;
extern PyObject *const_float_3_0;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_angle_sweep_LE_fins;
extern PyObject *const_float_1_8;
static PyObject *const_dict_488bf2b97567a33b17c58724ecb5544e;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_float_0_15;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain_POLISH;
static PyObject *const_float_0_032;
extern PyObject *const_str_plain_skin_friction_drag_coefficient_fins;
static PyObject *const_str_plain_C_D_data_list;
extern PyObject *const_float_1_05;
static PyObject *const_float_0_58;
extern PyObject *const_float_0_01;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_radians;
extern PyObject *const_str_plain_PAINT;
extern PyObject *const_str_plain_M;
static PyObject *const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list;
static PyObject *const_str_plain_C_f_c_rough;
static PyObject *const_str_plain_Re_cr;
static PyObject *const_str_plain_A_frontal_fins;
extern PyObject *const_float_0_06;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_tuple_str_plain_M_tuple;
static PyObject *const_str_plain_fineness_nose;
static PyObject *const_str_plain_length_body;
extern PyObject *const_int_pos_40;
extern PyObject *const_int_pos_1600;
static PyObject *const_str_plain_C_D_LE;
extern PyObject *const_float_0_9;
extern PyObject *const_float_0_85;
extern PyObject *const_str_plain_pressure_drag_coefficient_nose;
static PyObject *const_str_plain_M_data_list;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_R_s;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_fffc84e32117c4665fe725a484831e87_tuple;
extern PyObject *const_float_0_0;
static PyObject *const_float_0_035;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_type_nose = UNSTREAM_STRING_ASCII( &constant_bin[ 2192646 ], 9, 1 );
    const_str_plain_reynolds_critical = UNSTREAM_STRING_ASCII( &constant_bin[ 2192655 ], 17, 1 );
    const_float_0_07 = UNSTREAM_FLOAT( &constant_bin[ 2192672 ] );
    const_tuple_2027fd8b795fe64e05fa5787fd548fe6_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_2027fd8b795fe64e05fa5787fd548fe6_tuple, 0, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_2027fd8b795fe64e05fa5787fd548fe6_tuple, 1, const_str_plain_f_n ); Py_INCREF( const_str_plain_f_n );
    PyTuple_SET_ITEM( const_tuple_2027fd8b795fe64e05fa5787fd548fe6_tuple, 2, const_str_plain_type ); Py_INCREF( const_str_plain_type );
    const_str_plain_q_stag_q = UNSTREAM_STRING_ASCII( &constant_bin[ 2192680 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_2027fd8b795fe64e05fa5787fd548fe6_tuple, 3, const_str_plain_q_stag_q ); Py_INCREF( const_str_plain_q_stag_q );
    const_str_plain_C_D_0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2192688 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_2027fd8b795fe64e05fa5787fd548fe6_tuple, 4, const_str_plain_C_D_0 ); Py_INCREF( const_str_plain_C_D_0 );
    const_str_plain_C_D_3_test = UNSTREAM_STRING_ASCII( &constant_bin[ 2192693 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_2027fd8b795fe64e05fa5787fd548fe6_tuple, 5, const_str_plain_C_D_3_test ); Py_INCREF( const_str_plain_C_D_3_test );
    const_float_0_502 = UNSTREAM_FLOAT( &constant_bin[ 767328 ] );
    const_tuple_str_plain_R_s_str_plain_L_tuple = PyTuple_New( 2 );
    const_str_plain_R_s = UNSTREAM_STRING_ASCII( &constant_bin[ 99881 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_R_s_str_plain_L_tuple, 0, const_str_plain_R_s ); Py_INCREF( const_str_plain_R_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_R_s_str_plain_L_tuple, 1, const_str_plain_L ); Py_INCREF( const_str_plain_L );
    const_float_0_1095 = UNSTREAM_FLOAT( &constant_bin[ 2192703 ] );
    const_float_1_214 = UNSTREAM_FLOAT( &constant_bin[ 2192711 ] );
    const_str_plain_fineness_body = UNSTREAM_STRING_ASCII( &constant_bin[ 2192719 ], 13, 1 );
    const_str_plain_A_planform_fins = UNSTREAM_STRING_ASCII( &constant_bin[ 2192732 ], 15, 1 );
    const_float_3eminus_05 = UNSTREAM_FLOAT( &constant_bin[ 2192747 ] );
    const_float_5_6 = UNSTREAM_FLOAT( &constant_bin[ 2192755 ] );
    const_float_500000_0 = UNSTREAM_FLOAT( &constant_bin[ 2192763 ] );
    const_tuple_423f448559c08988c4ea5d8b57af6f90_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_423f448559c08988c4ea5d8b57af6f90_tuple, 0, const_str_plain_surface_finish ); Py_INCREF( const_str_plain_surface_finish );
    const_str_plain_surface_roughness_height_lib = UNSTREAM_STRING_ASCII( &constant_bin[ 2192771 ], 28, 1 );
    PyTuple_SET_ITEM( const_tuple_423f448559c08988c4ea5d8b57af6f90_tuple, 1, const_str_plain_surface_roughness_height_lib ); Py_INCREF( const_str_plain_surface_roughness_height_lib );
    const_str_plain_C_D_base = UNSTREAM_STRING_ASCII( &constant_bin[ 2192799 ], 8, 1 );
    const_float_0_088 = UNSTREAM_FLOAT( &constant_bin[ 2192807 ] );
    const_str_digest_9ccdae977b0850814b1ed5662e689141 = UNSTREAM_STRING_ASCII( &constant_bin[ 2192815 ], 50, 0 );
    const_tuple_9f13a82dbb9738f3673adaba424c2770_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_9f13a82dbb9738f3673adaba424c2770_tuple, 0, const_str_plain_Re ); Py_INCREF( const_str_plain_Re );
    PyTuple_SET_ITEM( const_tuple_9f13a82dbb9738f3673adaba424c2770_tuple, 1, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_9f13a82dbb9738f3673adaba424c2770_tuple, 2, const_str_plain_surface_finish ); Py_INCREF( const_str_plain_surface_finish );
    PyTuple_SET_ITEM( const_tuple_9f13a82dbb9738f3673adaba424c2770_tuple, 3, const_str_plain_L ); Py_INCREF( const_str_plain_L );
    PyTuple_SET_ITEM( const_tuple_9f13a82dbb9738f3673adaba424c2770_tuple, 4, const_str_plain_R_s ); Py_INCREF( const_str_plain_R_s );
    const_str_plain_Re_cr = UNSTREAM_STRING_ASCII( &constant_bin[ 2192865 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_9f13a82dbb9738f3673adaba424c2770_tuple, 5, const_str_plain_Re_cr ); Py_INCREF( const_str_plain_Re_cr );
    PyTuple_SET_ITEM( const_tuple_9f13a82dbb9738f3673adaba424c2770_tuple, 6, const_str_plain_C_f ); Py_INCREF( const_str_plain_C_f );
    const_str_plain_C_f_rough = UNSTREAM_STRING_ASCII( &constant_bin[ 2192870 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_9f13a82dbb9738f3673adaba424c2770_tuple, 7, const_str_plain_C_f_rough ); Py_INCREF( const_str_plain_C_f_rough );
    PyTuple_SET_ITEM( const_tuple_9f13a82dbb9738f3673adaba424c2770_tuple, 8, const_str_plain_C_f_c ); Py_INCREF( const_str_plain_C_f_c );
    const_str_plain_C_f_c_rough = UNSTREAM_STRING_ASCII( &constant_bin[ 2192879 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_9f13a82dbb9738f3673adaba424c2770_tuple, 9, const_str_plain_C_f_c_rough ); Py_INCREF( const_str_plain_C_f_c_rough );
    const_tuple_205e8dd720fd9a9aa7b861a153f81e59_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_205e8dd720fd9a9aa7b861a153f81e59_tuple, 0, const_str_plain_C_f_c ); Py_INCREF( const_str_plain_C_f_c );
    PyTuple_SET_ITEM( const_tuple_205e8dd720fd9a9aa7b861a153f81e59_tuple, 1, const_str_plain_number_fins ); Py_INCREF( const_str_plain_number_fins );
    PyTuple_SET_ITEM( const_tuple_205e8dd720fd9a9aa7b861a153f81e59_tuple, 2, const_str_plain_A_planform ); Py_INCREF( const_str_plain_A_planform );
    PyTuple_SET_ITEM( const_tuple_205e8dd720fd9a9aa7b861a153f81e59_tuple, 3, const_str_plain_A_ref ); Py_INCREF( const_str_plain_A_ref );
    const_str_plain_surface_roughness_height = UNSTREAM_STRING_ASCII( &constant_bin[ 2192771 ], 24, 1 );
    const_float_0_18 = UNSTREAM_FLOAT( &constant_bin[ 2192890 ] );
    const_float_1_328 = UNSTREAM_FLOAT( &constant_bin[ 2192898 ] );
    const_float_minus_1_039 = UNSTREAM_FLOAT( &constant_bin[ 2192906 ] );
    const_float_0_166 = UNSTREAM_FLOAT( &constant_bin[ 2192914 ] );
    const_tuple_0450de8c21664864acb051884555ebb5_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0450de8c21664864acb051884555ebb5_tuple, 0, const_str_plain_type ); Py_INCREF( const_str_plain_type );
    PyTuple_SET_ITEM( const_tuple_0450de8c21664864acb051884555ebb5_tuple, 1, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    const_str_plain_M_data_list = UNSTREAM_STRING_ASCII( &constant_bin[ 2192922 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_0450de8c21664864acb051884555ebb5_tuple, 2, const_str_plain_M_data_list ); Py_INCREF( const_str_plain_M_data_list );
    const_str_plain_C_D_data_list = UNSTREAM_STRING_ASCII( &constant_bin[ 2192933 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_0450de8c21664864acb051884555ebb5_tuple, 3, const_str_plain_C_D_data_list ); Py_INCREF( const_str_plain_C_D_data_list );
    const_float_0_13 = UNSTREAM_FLOAT( &constant_bin[ 2192946 ] );
    const_list_0379503006a4f967918b7326f6694c2d_list = PyList_New( 13 );
    PyList_SET_ITEM( const_list_0379503006a4f967918b7326f6694c2d_list, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_0379503006a4f967918b7326f6694c2d_list, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_0379503006a4f967918b7326f6694c2d_list, 2, const_float_0_01 ); Py_INCREF( const_float_0_01 );
    PyList_SET_ITEM( const_list_0379503006a4f967918b7326f6694c2d_list, 3, const_float_0_025 ); Py_INCREF( const_float_0_025 );
    PyList_SET_ITEM( const_list_0379503006a4f967918b7326f6694c2d_list, 4, const_float_0_06 ); Py_INCREF( const_float_0_06 );
    PyList_SET_ITEM( const_list_0379503006a4f967918b7326f6694c2d_list, 5, const_float_0_07 ); Py_INCREF( const_float_0_07 );
    PyList_SET_ITEM( const_list_0379503006a4f967918b7326f6694c2d_list, 6, const_float_0_075 ); Py_INCREF( const_float_0_075 );
    PyList_SET_ITEM( const_list_0379503006a4f967918b7326f6694c2d_list, 7, const_float_0_088 ); Py_INCREF( const_float_0_088 );
    PyList_SET_ITEM( const_list_0379503006a4f967918b7326f6694c2d_list, 8, const_float_0_09 ); Py_INCREF( const_float_0_09 );
    PyList_SET_ITEM( const_list_0379503006a4f967918b7326f6694c2d_list, 9, const_float_0_08 ); Py_INCREF( const_float_0_08 );
    PyList_SET_ITEM( const_list_0379503006a4f967918b7326f6694c2d_list, 10, const_float_0_075 ); Py_INCREF( const_float_0_075 );
    PyList_SET_ITEM( const_list_0379503006a4f967918b7326f6694c2d_list, 11, const_float_0_075 ); Py_INCREF( const_float_0_075 );
    PyList_SET_ITEM( const_list_0379503006a4f967918b7326f6694c2d_list, 12, const_float_0_075 ); Py_INCREF( const_float_0_075 );
    const_str_plain_C_D_TE = UNSTREAM_STRING_ASCII( &constant_bin[ 2192954 ], 6, 1 );
    const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 0, const_str_plain_Re ); Py_INCREF( const_str_plain_Re );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 1, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 2, const_str_plain_surface_finish ); Py_INCREF( const_str_plain_surface_finish );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 3, const_str_plain_A_ref ); Py_INCREF( const_str_plain_A_ref );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 4, const_str_plain_fineness_body ); Py_INCREF( const_str_plain_fineness_body );
    const_str_plain_length_body = UNSTREAM_STRING_ASCII( &constant_bin[ 2192960 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 5, const_str_plain_length_body ); Py_INCREF( const_str_plain_length_body );
    const_str_plain_A_wet_body = UNSTREAM_STRING_ASCII( &constant_bin[ 2192971 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 6, const_str_plain_A_wet_body ); Py_INCREF( const_str_plain_A_wet_body );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 7, const_str_plain_number_fins ); Py_INCREF( const_str_plain_number_fins );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 8, const_str_plain_A_planform_fins ); Py_INCREF( const_str_plain_A_planform_fins );
    const_str_plain_angle_sweep_LE_fins = UNSTREAM_STRING_ASCII( &constant_bin[ 2192981 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 9, const_str_plain_angle_sweep_LE_fins ); Py_INCREF( const_str_plain_angle_sweep_LE_fins );
    const_str_plain_A_frontal_fins = UNSTREAM_STRING_ASCII( &constant_bin[ 2193000 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 10, const_str_plain_A_frontal_fins ); Py_INCREF( const_str_plain_A_frontal_fins );
    const_str_plain_fineness_nose = UNSTREAM_STRING_ASCII( &constant_bin[ 2193014 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 11, const_str_plain_fineness_nose ); Py_INCREF( const_str_plain_fineness_nose );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 12, const_str_plain_type_nose ); Py_INCREF( const_str_plain_type_nose );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 13, const_str_plain_C_f_c ); Py_INCREF( const_str_plain_C_f_c );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 14, const_str_plain_C_D_f ); Py_INCREF( const_str_plain_C_D_f );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 15, const_str_plain_C_D_base ); Py_INCREF( const_str_plain_C_D_base );
    const_str_plain_C_D_pressure_fins = UNSTREAM_STRING_ASCII( &constant_bin[ 2193027 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 16, const_str_plain_C_D_pressure_fins ); Py_INCREF( const_str_plain_C_D_pressure_fins );
    const_str_plain_C_D_pressure_nose = UNSTREAM_STRING_ASCII( &constant_bin[ 2193044 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 17, const_str_plain_C_D_pressure_nose ); Py_INCREF( const_str_plain_C_D_pressure_nose );
    const_float_1_785 = UNSTREAM_FLOAT( &constant_bin[ 2193061 ] );
    const_float_0_0148 = UNSTREAM_FLOAT( &constant_bin[ 2193069 ] );
    const_str_plain_pressure_drag_coefficient_test = UNSTREAM_STRING_ASCII( &constant_bin[ 2193077 ], 30, 1 );
    const_float_0_76 = UNSTREAM_FLOAT( &constant_bin[ 2193107 ] );
    const_tuple_62f341cae945c3da74e6fd49a53892a4_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_62f341cae945c3da74e6fd49a53892a4_tuple, 0, const_str_plain_C_f_c ); Py_INCREF( const_str_plain_C_f_c );
    PyTuple_SET_ITEM( const_tuple_62f341cae945c3da74e6fd49a53892a4_tuple, 1, const_str_plain_fineness ); Py_INCREF( const_str_plain_fineness );
    PyTuple_SET_ITEM( const_tuple_62f341cae945c3da74e6fd49a53892a4_tuple, 2, const_str_plain_A_wet ); Py_INCREF( const_str_plain_A_wet );
    PyTuple_SET_ITEM( const_tuple_62f341cae945c3da74e6fd49a53892a4_tuple, 3, const_str_plain_A_ref ); Py_INCREF( const_str_plain_A_ref );
    const_float_minus_0_417 = UNSTREAM_FLOAT( &constant_bin[ 2193115 ] );
    const_float_2eminus_06 = UNSTREAM_FLOAT( &constant_bin[ 2193123 ] );
    const_str_digest_a7de9198e40db037502060e6e8786c52 = UNSTREAM_STRING_ASCII( &constant_bin[ 2193131 ], 56, 0 );
    const_float_0_12 = UNSTREAM_FLOAT( &constant_bin[ 2193187 ] );
    const_int_pos_51 = PyLong_FromUnsignedLong( 51ul );
    const_dict_488bf2b97567a33b17c58724ecb5544e = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_488bf2b97567a33b17c58724ecb5544e, const_str_plain_ROUGH, const_float_0_0002 );
    PyDict_SetItem( const_dict_488bf2b97567a33b17c58724ecb5544e, const_str_plain_UNFINISHED, const_float_0_0001 );
    PyDict_SetItem( const_dict_488bf2b97567a33b17c58724ecb5544e, const_str_plain_PAINT, const_float_3eminus_05 );
    PyDict_SetItem( const_dict_488bf2b97567a33b17c58724ecb5544e, const_str_plain_POLISH, const_float_2eminus_06 );
    assert( PyDict_Size( const_dict_488bf2b97567a33b17c58724ecb5544e ) == 4 );
    const_float_0_032 = UNSTREAM_FLOAT( &constant_bin[ 2193195 ] );
    const_float_0_58 = UNSTREAM_FLOAT( &constant_bin[ 2193203 ] );
    const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list = PyList_New( 13 );
    PyList_SET_ITEM( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list, 1, const_float_0_9 ); Py_INCREF( const_float_0_9 );
    PyList_SET_ITEM( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list, 2, const_float_0_95 ); Py_INCREF( const_float_0_95 );
    PyList_SET_ITEM( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list, 3, const_float_1_0 ); Py_INCREF( const_float_1_0 );
    PyList_SET_ITEM( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list, 4, const_float_1_05 ); Py_INCREF( const_float_1_05 );
    PyList_SET_ITEM( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list, 5, const_float_1_1 ); Py_INCREF( const_float_1_1 );
    PyList_SET_ITEM( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list, 6, const_float_1_2 ); Py_INCREF( const_float_1_2 );
    PyList_SET_ITEM( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list, 7, const_float_1_4 ); Py_INCREF( const_float_1_4 );
    PyList_SET_ITEM( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list, 8, const_float_1_6 ); Py_INCREF( const_float_1_6 );
    PyList_SET_ITEM( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list, 9, const_float_1_8 ); Py_INCREF( const_float_1_8 );
    PyList_SET_ITEM( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list, 10, const_float_2_0 ); Py_INCREF( const_float_2_0 );
    PyList_SET_ITEM( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list, 11, const_float_3_0 ); Py_INCREF( const_float_3_0 );
    PyList_SET_ITEM( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list, 12, const_float_5_0 ); Py_INCREF( const_float_5_0 );
    const_str_plain_C_D_LE = UNSTREAM_STRING_ASCII( &constant_bin[ 2193211 ], 6, 1 );
    const_tuple_fffc84e32117c4665fe725a484831e87_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_fffc84e32117c4665fe725a484831e87_tuple, 0, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_fffc84e32117c4665fe725a484831e87_tuple, 1, const_str_plain_angle_sweep_LE ); Py_INCREF( const_str_plain_angle_sweep_LE );
    PyTuple_SET_ITEM( const_tuple_fffc84e32117c4665fe725a484831e87_tuple, 2, const_str_plain_A_frontal ); Py_INCREF( const_str_plain_A_frontal );
    PyTuple_SET_ITEM( const_tuple_fffc84e32117c4665fe725a484831e87_tuple, 3, const_str_plain_A_ref ); Py_INCREF( const_str_plain_A_ref );
    PyTuple_SET_ITEM( const_tuple_fffc84e32117c4665fe725a484831e87_tuple, 4, const_str_plain_C_D_LE ); Py_INCREF( const_str_plain_C_D_LE );
    PyTuple_SET_ITEM( const_tuple_fffc84e32117c4665fe725a484831e87_tuple, 5, const_str_plain_C_D_TE ); Py_INCREF( const_str_plain_C_D_TE );
    const_float_0_035 = UNSTREAM_FLOAT( &constant_bin[ 2193217 ] );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_model$aerodynamic_forces$drag_model_open_rocket( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8c6422ba90ba9624a46da40fcb91a863;
static PyCodeObject *codeobj_b4e203b1746f8c31016484936211f185;
static PyCodeObject *codeobj_e36332ab8ddf22f1c7cc92d7acb206a1;
static PyCodeObject *codeobj_b0c9190bce9bac1d36d86bab1f4841a9;
static PyCodeObject *codeobj_569c30c969e68eecf616779e23ddec43;
static PyCodeObject *codeobj_ed709bd81ca4cdfdcca976bbb01960cf;
static PyCodeObject *codeobj_9e4e0d5fb47c03f06c50d5be5a15bd6b;
static PyCodeObject *codeobj_9e136d127fe504b6b3b309cde42159e0;
static PyCodeObject *codeobj_681bbea13bdf03e8f4efc4b6fed05191;
static PyCodeObject *codeobj_3cc34a2dda4ff5a25ffaa2677cfedc19;
static PyCodeObject *codeobj_86b9d6f01f5e43ed98fec3775b40c37b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_9ccdae977b0850814b1ed5662e689141 );
    codeobj_8c6422ba90ba9624a46da40fcb91a863 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_a7de9198e40db037502060e6e8786c52, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b4e203b1746f8c31016484936211f185 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_base_drag_coefficient, 65, const_tuple_str_plain_M_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e36332ab8ddf22f1c7cc92d7acb206a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_drag_coefficient, 5, const_tuple_86c30392d0a1ee7f5ed72f8fc0ea1979_tuple, 13, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b0c9190bce9bac1d36d86bab1f4841a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pressure_drag_coefficient_fins_rounded, 71, const_tuple_fffc84e32117c4665fe725a484831e87_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_569c30c969e68eecf616779e23ddec43 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pressure_drag_coefficient_nose, 88, const_tuple_2027fd8b795fe64e05fa5787fd548fe6_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ed709bd81ca4cdfdcca976bbb01960cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pressure_drag_coefficient_test, 105, const_tuple_0450de8c21664864acb051884555ebb5_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9e4e0d5fb47c03f06c50d5be5a15bd6b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reynolds_critical, 27, const_tuple_str_plain_R_s_str_plain_L_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9e136d127fe504b6b3b309cde42159e0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_skin_friction_coefficient, 31, const_tuple_9f13a82dbb9738f3673adaba424c2770_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_681bbea13bdf03e8f4efc4b6fed05191 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_skin_friction_drag_coefficient_body, 61, const_tuple_62f341cae945c3da74e6fd49a53892a4_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3cc34a2dda4ff5a25ffaa2677cfedc19 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_skin_friction_drag_coefficient_fins, 57, const_tuple_205e8dd720fd9a9aa7b861a153f81e59_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_86b9d6f01f5e43ed98fec3775b40c37b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_surface_roughness_height, 23, const_tuple_423f448559c08988c4ea5d8b57af6f90_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_10_pressure_drag_coefficient_test(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_1_drag_coefficient(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_2_surface_roughness_height(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_3_reynolds_critical(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_4_skin_friction_coefficient(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_5_skin_friction_drag_coefficient_fins(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_6_skin_friction_drag_coefficient_body(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_7_base_drag_coefficient(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_8_pressure_drag_coefficient_fins_rounded(  );


static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_9_pressure_drag_coefficient_nose(  );


// The module function definitions.
static PyObject *impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_1_drag_coefficient( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_Re = python_pars[ 0 ];
    PyObject *par_M = python_pars[ 1 ];
    PyObject *par_surface_finish = python_pars[ 2 ];
    PyObject *par_A_ref = python_pars[ 3 ];
    PyObject *par_fineness_body = python_pars[ 4 ];
    PyObject *par_length_body = python_pars[ 5 ];
    PyObject *par_A_wet_body = python_pars[ 6 ];
    PyObject *par_number_fins = python_pars[ 7 ];
    PyObject *par_A_planform_fins = python_pars[ 8 ];
    PyObject *par_angle_sweep_LE_fins = python_pars[ 9 ];
    PyObject *par_A_frontal_fins = python_pars[ 10 ];
    PyObject *par_fineness_nose = python_pars[ 11 ];
    PyObject *par_type_nose = python_pars[ 12 ];
    PyObject *var_C_f_c = NULL;
    PyObject *var_C_D_f = NULL;
    PyObject *var_C_D_base = NULL;
    PyObject *var_C_D_pressure_fins = NULL;
    PyObject *var_C_D_pressure_nose = NULL;
    struct Nuitka_FrameObject *frame_e36332ab8ddf22f1c7cc92d7acb206a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e36332ab8ddf22f1c7cc92d7acb206a1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e36332ab8ddf22f1c7cc92d7acb206a1, codeobj_e36332ab8ddf22f1c7cc92d7acb206a1, module_model$aerodynamic_forces$drag_model_open_rocket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e36332ab8ddf22f1c7cc92d7acb206a1 = cache_frame_e36332ab8ddf22f1c7cc92d7acb206a1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e36332ab8ddf22f1c7cc92d7acb206a1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e36332ab8ddf22f1c7cc92d7acb206a1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_skin_friction_coefficient );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_skin_friction_coefficient );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "skin_friction_coefficient" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 11;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_Re );
        tmp_args_element_name_1 = par_Re;
        CHECK_OBJECT( par_M );
        tmp_args_element_name_2 = par_M;
        CHECK_OBJECT( par_surface_finish );
        tmp_args_element_name_3 = par_surface_finish;
        CHECK_OBJECT( par_length_body );
        tmp_args_element_name_4 = par_length_body;
        frame_e36332ab8ddf22f1c7cc92d7acb206a1->m_frame.f_lineno = 11;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C_f_c == NULL );
        var_C_f_c = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_skin_friction_drag_coefficient_body );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_skin_friction_drag_coefficient_body );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "skin_friction_drag_coefficient_body" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 12;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_C_f_c );
        tmp_args_element_name_5 = var_C_f_c;
        CHECK_OBJECT( par_fineness_body );
        tmp_args_element_name_6 = par_fineness_body;
        CHECK_OBJECT( par_A_wet_body );
        tmp_args_element_name_7 = par_A_wet_body;
        CHECK_OBJECT( par_A_ref );
        tmp_args_element_name_8 = par_A_ref;
        frame_e36332ab8ddf22f1c7cc92d7acb206a1->m_frame.f_lineno = 12;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_skin_friction_drag_coefficient_fins );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_skin_friction_drag_coefficient_fins );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "skin_friction_drag_coefficient_fins" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 12;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_C_f_c );
        tmp_args_element_name_9 = var_C_f_c;
        CHECK_OBJECT( par_number_fins );
        tmp_args_element_name_10 = par_number_fins;
        CHECK_OBJECT( par_A_planform_fins );
        tmp_args_element_name_11 = par_A_planform_fins;
        CHECK_OBJECT( par_A_ref );
        tmp_args_element_name_12 = par_A_ref;
        frame_e36332ab8ddf22f1c7cc92d7acb206a1->m_frame.f_lineno = 12;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 12;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C_D_f == NULL );
        var_C_D_f = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_base_drag_coefficient );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base_drag_coefficient );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base_drag_coefficient" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_M );
        tmp_args_element_name_13 = par_M;
        frame_e36332ab8ddf22f1c7cc92d7acb206a1->m_frame.f_lineno = 15;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C_D_base == NULL );
        var_C_D_base = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_pressure_drag_coefficient_fins_rounded );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pressure_drag_coefficient_fins_rounded );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pressure_drag_coefficient_fins_rounded" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 18;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( par_M );
        tmp_args_element_name_14 = par_M;
        CHECK_OBJECT( par_angle_sweep_LE_fins );
        tmp_args_element_name_15 = par_angle_sweep_LE_fins;
        CHECK_OBJECT( par_A_frontal_fins );
        tmp_args_element_name_16 = par_A_frontal_fins;
        CHECK_OBJECT( par_A_ref );
        tmp_args_element_name_17 = par_A_ref;
        frame_e36332ab8ddf22f1c7cc92d7acb206a1->m_frame.f_lineno = 18;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C_D_pressure_fins == NULL );
        var_C_D_pressure_fins = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_pressure_drag_coefficient_nose );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pressure_drag_coefficient_nose );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pressure_drag_coefficient_nose" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        CHECK_OBJECT( par_M );
        tmp_args_element_name_18 = par_M;
        CHECK_OBJECT( par_fineness_nose );
        tmp_args_element_name_19 = par_fineness_nose;
        CHECK_OBJECT( par_type_nose );
        tmp_args_element_name_20 = par_type_nose;
        frame_e36332ab8ddf22f1c7cc92d7acb206a1->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C_D_pressure_nose == NULL );
        var_C_D_pressure_nose = tmp_assign_source_5;
    }
    {
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_C_D_f );
        tmp_left_name_4 = var_C_D_f;
        CHECK_OBJECT( var_C_D_base );
        tmp_right_name_2 = var_C_D_base;
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_2 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_C_D_pressure_fins );
        tmp_right_name_3 = var_C_D_pressure_fins;
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_C_D_pressure_nose );
        tmp_right_name_4 = var_C_D_pressure_nose;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e36332ab8ddf22f1c7cc92d7acb206a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e36332ab8ddf22f1c7cc92d7acb206a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e36332ab8ddf22f1c7cc92d7acb206a1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e36332ab8ddf22f1c7cc92d7acb206a1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e36332ab8ddf22f1c7cc92d7acb206a1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e36332ab8ddf22f1c7cc92d7acb206a1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e36332ab8ddf22f1c7cc92d7acb206a1,
        type_description_1,
        par_Re,
        par_M,
        par_surface_finish,
        par_A_ref,
        par_fineness_body,
        par_length_body,
        par_A_wet_body,
        par_number_fins,
        par_A_planform_fins,
        par_angle_sweep_LE_fins,
        par_A_frontal_fins,
        par_fineness_nose,
        par_type_nose,
        var_C_f_c,
        var_C_D_f,
        var_C_D_base,
        var_C_D_pressure_fins,
        var_C_D_pressure_nose
    );


    // Release cached frame.
    if ( frame_e36332ab8ddf22f1c7cc92d7acb206a1 == cache_frame_e36332ab8ddf22f1c7cc92d7acb206a1 )
    {
        Py_DECREF( frame_e36332ab8ddf22f1c7cc92d7acb206a1 );
    }
    cache_frame_e36332ab8ddf22f1c7cc92d7acb206a1 = NULL;

    assertFrameObject( frame_e36332ab8ddf22f1c7cc92d7acb206a1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_1_drag_coefficient );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_Re );
    Py_DECREF( par_Re );
    par_Re = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_surface_finish );
    Py_DECREF( par_surface_finish );
    par_surface_finish = NULL;

    CHECK_OBJECT( (PyObject *)par_A_ref );
    Py_DECREF( par_A_ref );
    par_A_ref = NULL;

    CHECK_OBJECT( (PyObject *)par_fineness_body );
    Py_DECREF( par_fineness_body );
    par_fineness_body = NULL;

    CHECK_OBJECT( (PyObject *)par_length_body );
    Py_DECREF( par_length_body );
    par_length_body = NULL;

    CHECK_OBJECT( (PyObject *)par_A_wet_body );
    Py_DECREF( par_A_wet_body );
    par_A_wet_body = NULL;

    CHECK_OBJECT( (PyObject *)par_number_fins );
    Py_DECREF( par_number_fins );
    par_number_fins = NULL;

    CHECK_OBJECT( (PyObject *)par_A_planform_fins );
    Py_DECREF( par_A_planform_fins );
    par_A_planform_fins = NULL;

    CHECK_OBJECT( (PyObject *)par_angle_sweep_LE_fins );
    Py_DECREF( par_angle_sweep_LE_fins );
    par_angle_sweep_LE_fins = NULL;

    CHECK_OBJECT( (PyObject *)par_A_frontal_fins );
    Py_DECREF( par_A_frontal_fins );
    par_A_frontal_fins = NULL;

    CHECK_OBJECT( (PyObject *)par_fineness_nose );
    Py_DECREF( par_fineness_nose );
    par_fineness_nose = NULL;

    CHECK_OBJECT( (PyObject *)par_type_nose );
    Py_DECREF( par_type_nose );
    par_type_nose = NULL;

    CHECK_OBJECT( (PyObject *)var_C_f_c );
    Py_DECREF( var_C_f_c );
    var_C_f_c = NULL;

    CHECK_OBJECT( (PyObject *)var_C_D_f );
    Py_DECREF( var_C_D_f );
    var_C_D_f = NULL;

    CHECK_OBJECT( (PyObject *)var_C_D_base );
    Py_DECREF( var_C_D_base );
    var_C_D_base = NULL;

    CHECK_OBJECT( (PyObject *)var_C_D_pressure_fins );
    Py_DECREF( var_C_D_pressure_fins );
    var_C_D_pressure_fins = NULL;

    CHECK_OBJECT( (PyObject *)var_C_D_pressure_nose );
    Py_DECREF( var_C_D_pressure_nose );
    var_C_D_pressure_nose = NULL;

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

    CHECK_OBJECT( (PyObject *)par_Re );
    Py_DECREF( par_Re );
    par_Re = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_surface_finish );
    Py_DECREF( par_surface_finish );
    par_surface_finish = NULL;

    CHECK_OBJECT( (PyObject *)par_A_ref );
    Py_DECREF( par_A_ref );
    par_A_ref = NULL;

    CHECK_OBJECT( (PyObject *)par_fineness_body );
    Py_DECREF( par_fineness_body );
    par_fineness_body = NULL;

    CHECK_OBJECT( (PyObject *)par_length_body );
    Py_DECREF( par_length_body );
    par_length_body = NULL;

    CHECK_OBJECT( (PyObject *)par_A_wet_body );
    Py_DECREF( par_A_wet_body );
    par_A_wet_body = NULL;

    CHECK_OBJECT( (PyObject *)par_number_fins );
    Py_DECREF( par_number_fins );
    par_number_fins = NULL;

    CHECK_OBJECT( (PyObject *)par_A_planform_fins );
    Py_DECREF( par_A_planform_fins );
    par_A_planform_fins = NULL;

    CHECK_OBJECT( (PyObject *)par_angle_sweep_LE_fins );
    Py_DECREF( par_angle_sweep_LE_fins );
    par_angle_sweep_LE_fins = NULL;

    CHECK_OBJECT( (PyObject *)par_A_frontal_fins );
    Py_DECREF( par_A_frontal_fins );
    par_A_frontal_fins = NULL;

    CHECK_OBJECT( (PyObject *)par_fineness_nose );
    Py_DECREF( par_fineness_nose );
    par_fineness_nose = NULL;

    CHECK_OBJECT( (PyObject *)par_type_nose );
    Py_DECREF( par_type_nose );
    par_type_nose = NULL;

    Py_XDECREF( var_C_f_c );
    var_C_f_c = NULL;

    Py_XDECREF( var_C_D_f );
    var_C_D_f = NULL;

    Py_XDECREF( var_C_D_base );
    var_C_D_base = NULL;

    Py_XDECREF( var_C_D_pressure_fins );
    var_C_D_pressure_fins = NULL;

    Py_XDECREF( var_C_D_pressure_nose );
    var_C_D_pressure_nose = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_1_drag_coefficient );
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


static PyObject *impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_2_surface_roughness_height( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_surface_finish = python_pars[ 0 ];
    PyObject *var_surface_roughness_height_lib = NULL;
    struct Nuitka_FrameObject *frame_86b9d6f01f5e43ed98fec3775b40c37b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_86b9d6f01f5e43ed98fec3775b40c37b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_Copy( const_dict_488bf2b97567a33b17c58724ecb5544e );
        assert( var_surface_roughness_height_lib == NULL );
        var_surface_roughness_height_lib = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_86b9d6f01f5e43ed98fec3775b40c37b, codeobj_86b9d6f01f5e43ed98fec3775b40c37b, module_model$aerodynamic_forces$drag_model_open_rocket, sizeof(void *)+sizeof(void *) );
    frame_86b9d6f01f5e43ed98fec3775b40c37b = cache_frame_86b9d6f01f5e43ed98fec3775b40c37b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_86b9d6f01f5e43ed98fec3775b40c37b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_86b9d6f01f5e43ed98fec3775b40c37b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dict_name_1;
        PyObject *tmp_key_name_1;
        CHECK_OBJECT( var_surface_roughness_height_lib );
        tmp_dict_name_1 = var_surface_roughness_height_lib;
        CHECK_OBJECT( par_surface_finish );
        tmp_key_name_1 = par_surface_finish;
        tmp_return_value = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86b9d6f01f5e43ed98fec3775b40c37b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_86b9d6f01f5e43ed98fec3775b40c37b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86b9d6f01f5e43ed98fec3775b40c37b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_86b9d6f01f5e43ed98fec3775b40c37b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_86b9d6f01f5e43ed98fec3775b40c37b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_86b9d6f01f5e43ed98fec3775b40c37b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_86b9d6f01f5e43ed98fec3775b40c37b,
        type_description_1,
        par_surface_finish,
        var_surface_roughness_height_lib
    );


    // Release cached frame.
    if ( frame_86b9d6f01f5e43ed98fec3775b40c37b == cache_frame_86b9d6f01f5e43ed98fec3775b40c37b )
    {
        Py_DECREF( frame_86b9d6f01f5e43ed98fec3775b40c37b );
    }
    cache_frame_86b9d6f01f5e43ed98fec3775b40c37b = NULL;

    assertFrameObject( frame_86b9d6f01f5e43ed98fec3775b40c37b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_2_surface_roughness_height );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_surface_finish );
    Py_DECREF( par_surface_finish );
    par_surface_finish = NULL;

    CHECK_OBJECT( (PyObject *)var_surface_roughness_height_lib );
    Py_DECREF( var_surface_roughness_height_lib );
    var_surface_roughness_height_lib = NULL;

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

    CHECK_OBJECT( (PyObject *)par_surface_finish );
    Py_DECREF( par_surface_finish );
    par_surface_finish = NULL;

    CHECK_OBJECT( (PyObject *)var_surface_roughness_height_lib );
    Py_DECREF( var_surface_roughness_height_lib );
    var_surface_roughness_height_lib = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_2_surface_roughness_height );
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


static PyObject *impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_3_reynolds_critical( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_R_s = python_pars[ 0 ];
    PyObject *par_L = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_9e4e0d5fb47c03f06c50d5be5a15bd6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9e4e0d5fb47c03f06c50d5be5a15bd6b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e4e0d5fb47c03f06c50d5be5a15bd6b, codeobj_9e4e0d5fb47c03f06c50d5be5a15bd6b, module_model$aerodynamic_forces$drag_model_open_rocket, sizeof(void *)+sizeof(void *) );
    frame_9e4e0d5fb47c03f06c50d5be5a15bd6b = cache_frame_9e4e0d5fb47c03f06c50d5be5a15bd6b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e4e0d5fb47c03f06c50d5be5a15bd6b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e4e0d5fb47c03f06c50d5be5a15bd6b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        tmp_left_name_1 = const_int_pos_51;
        CHECK_OBJECT( par_R_s );
        tmp_left_name_3 = par_R_s;
        CHECK_OBJECT( par_L );
        tmp_right_name_2 = par_L;
        tmp_left_name_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_float_minus_1_039;
        tmp_right_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e4e0d5fb47c03f06c50d5be5a15bd6b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e4e0d5fb47c03f06c50d5be5a15bd6b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e4e0d5fb47c03f06c50d5be5a15bd6b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e4e0d5fb47c03f06c50d5be5a15bd6b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e4e0d5fb47c03f06c50d5be5a15bd6b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e4e0d5fb47c03f06c50d5be5a15bd6b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e4e0d5fb47c03f06c50d5be5a15bd6b,
        type_description_1,
        par_R_s,
        par_L
    );


    // Release cached frame.
    if ( frame_9e4e0d5fb47c03f06c50d5be5a15bd6b == cache_frame_9e4e0d5fb47c03f06c50d5be5a15bd6b )
    {
        Py_DECREF( frame_9e4e0d5fb47c03f06c50d5be5a15bd6b );
    }
    cache_frame_9e4e0d5fb47c03f06c50d5be5a15bd6b = NULL;

    assertFrameObject( frame_9e4e0d5fb47c03f06c50d5be5a15bd6b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_3_reynolds_critical );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_R_s );
    Py_DECREF( par_R_s );
    par_R_s = NULL;

    CHECK_OBJECT( (PyObject *)par_L );
    Py_DECREF( par_L );
    par_L = NULL;

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

    CHECK_OBJECT( (PyObject *)par_R_s );
    Py_DECREF( par_R_s );
    par_R_s = NULL;

    CHECK_OBJECT( (PyObject *)par_L );
    Py_DECREF( par_L );
    par_L = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_3_reynolds_critical );
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


static PyObject *impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_4_skin_friction_coefficient( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_Re = python_pars[ 0 ];
    PyObject *par_M = python_pars[ 1 ];
    PyObject *par_surface_finish = python_pars[ 2 ];
    PyObject *par_L = python_pars[ 3 ];
    PyObject *var_R_s = NULL;
    PyObject *var_Re_cr = NULL;
    PyObject *var_C_f = NULL;
    PyObject *var_C_f_rough = NULL;
    PyObject *var_C_f_c = NULL;
    PyObject *var_C_f_c_rough = NULL;
    struct Nuitka_FrameObject *frame_9e136d127fe504b6b3b309cde42159e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9e136d127fe504b6b3b309cde42159e0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e136d127fe504b6b3b309cde42159e0, codeobj_9e136d127fe504b6b3b309cde42159e0, module_model$aerodynamic_forces$drag_model_open_rocket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9e136d127fe504b6b3b309cde42159e0 = cache_frame_9e136d127fe504b6b3b309cde42159e0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e136d127fe504b6b3b309cde42159e0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e136d127fe504b6b3b309cde42159e0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_surface_roughness_height );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_surface_roughness_height );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "surface_roughness_height" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 34;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_surface_finish );
        tmp_args_element_name_1 = par_surface_finish;
        frame_9e136d127fe504b6b3b309cde42159e0->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_R_s == NULL );
        var_R_s = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_reynolds_critical );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reynolds_critical );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reynolds_critical" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_R_s );
        tmp_args_element_name_2 = var_R_s;
        CHECK_OBJECT( par_L );
        tmp_args_element_name_3 = par_L;
        frame_9e136d127fe504b6b3b309cde42159e0->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Re_cr == NULL );
        var_Re_cr = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_Re );
        tmp_compexpr_left_1 = par_Re;
        tmp_compexpr_right_1 = const_float_10000_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
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
        tmp_return_value = const_float_0_0148;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_Re );
        tmp_compexpr_left_2 = par_Re;
        tmp_compexpr_right_2 = const_float_500000_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_4;
            tmp_left_name_1 = const_float_1_328;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_math );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "math" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 41;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_Re );
            tmp_args_element_name_4 = par_Re;
            frame_9e136d127fe504b6b3b309cde42159e0->m_frame.f_lineno = 41;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sqrt, call_args );
            }

            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_C_f == NULL );
            var_C_f = tmp_assign_source_3;
        }
        CHECK_OBJECT( var_C_f );
        tmp_return_value = var_C_f;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_right_name_4;
            PyObject *tmp_right_name_5;
            PyObject *tmp_right_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            tmp_left_name_3 = const_int_pos_1;
            tmp_left_name_6 = const_float_1_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_math );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "math" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 44;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_4;
            CHECK_OBJECT( par_Re );
            tmp_args_element_name_5 = par_Re;
            frame_9e136d127fe504b6b3b309cde42159e0->m_frame.f_lineno = 44;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_right_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_log, call_args );
            }

            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_5 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_6, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_float_5_6;
            tmp_left_name_4 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_5, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_5 = const_int_pos_2;
            tmp_right_name_2 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_3, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_7 = const_int_pos_1600;
            CHECK_OBJECT( par_Re );
            tmp_right_name_7 = par_Re;
            tmp_right_name_6 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 44;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_C_f == NULL );
            var_C_f = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_9;
            PyObject *tmp_right_name_10;
            tmp_left_name_8 = const_float_0_032;
            CHECK_OBJECT( var_R_s );
            tmp_left_name_10 = var_R_s;
            CHECK_OBJECT( par_L );
            tmp_right_name_9 = par_L;
            tmp_left_name_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_9 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_10 = const_float_0_2;
            tmp_right_name_8 = POWER_OPERATION( tmp_left_name_9, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_9 );
            if ( tmp_right_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_C_f_rough == NULL );
            var_C_f_rough = tmp_assign_source_5;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_M );
        tmp_compexpr_left_3 = par_M;
        tmp_compexpr_right_3 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_13;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_14;
            if ( var_C_f == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "C_f" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 49;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_11 = var_C_f;
            tmp_left_name_12 = const_int_pos_1;
            tmp_left_name_13 = const_float_0_09;
            CHECK_OBJECT( par_M );
            tmp_left_name_14 = par_M;
            tmp_right_name_14 = const_int_pos_2;
            tmp_right_name_13 = POWER_OPERATION( tmp_left_name_14, tmp_right_name_14 );
            if ( tmp_right_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_12 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
            Py_DECREF( tmp_right_name_13 );
            if ( tmp_right_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_11 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_12, tmp_right_name_12 );
            Py_DECREF( tmp_right_name_12 );
            if ( tmp_right_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
            Py_DECREF( tmp_right_name_11 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_C_f_c == NULL );
            var_C_f_c = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_15;
            PyObject *tmp_right_name_15;
            PyObject *tmp_left_name_16;
            PyObject *tmp_right_name_16;
            PyObject *tmp_left_name_17;
            PyObject *tmp_right_name_17;
            PyObject *tmp_left_name_18;
            PyObject *tmp_right_name_18;
            if ( var_C_f_rough == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "C_f_rough" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 50;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_15 = var_C_f_rough;
            tmp_left_name_16 = const_int_pos_1;
            tmp_left_name_17 = const_float_0_12;
            CHECK_OBJECT( par_M );
            tmp_left_name_18 = par_M;
            tmp_right_name_18 = const_int_pos_2;
            tmp_right_name_17 = POWER_OPERATION( tmp_left_name_18, tmp_right_name_18 );
            if ( tmp_right_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_16 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_17, tmp_right_name_17 );
            Py_DECREF( tmp_right_name_17 );
            if ( tmp_right_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_15 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_16, tmp_right_name_16 );
            Py_DECREF( tmp_right_name_16 );
            if ( tmp_right_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
            Py_DECREF( tmp_right_name_15 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_C_f_c_rough == NULL );
            var_C_f_c_rough = tmp_assign_source_7;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_19;
            PyObject *tmp_right_name_19;
            PyObject *tmp_left_name_20;
            PyObject *tmp_left_name_21;
            PyObject *tmp_right_name_20;
            PyObject *tmp_left_name_22;
            PyObject *tmp_right_name_21;
            PyObject *tmp_left_name_23;
            PyObject *tmp_right_name_22;
            PyObject *tmp_right_name_23;
            if ( var_C_f == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "C_f" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 52;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_19 = var_C_f;
            tmp_left_name_21 = const_int_pos_1;
            tmp_left_name_22 = const_float_0_15;
            CHECK_OBJECT( par_M );
            tmp_left_name_23 = par_M;
            tmp_right_name_22 = const_int_pos_2;
            tmp_right_name_21 = POWER_OPERATION( tmp_left_name_23, tmp_right_name_22 );
            if ( tmp_right_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_20 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_22, tmp_right_name_21 );
            Py_DECREF( tmp_right_name_21 );
            if ( tmp_right_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_20 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_21, tmp_right_name_20 );
            Py_DECREF( tmp_right_name_20 );
            if ( tmp_left_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_23 = const_float_0_58;
            tmp_right_name_19 = POWER_OPERATION( tmp_left_name_20, tmp_right_name_23 );
            Py_DECREF( tmp_left_name_20 );
            if ( tmp_right_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
            Py_DECREF( tmp_right_name_19 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_C_f_c == NULL );
            var_C_f_c = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_left_name_24;
            PyObject *tmp_right_name_24;
            PyObject *tmp_left_name_25;
            PyObject *tmp_right_name_25;
            PyObject *tmp_left_name_26;
            PyObject *tmp_right_name_26;
            PyObject *tmp_left_name_27;
            PyObject *tmp_right_name_27;
            if ( var_C_f_rough == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "C_f_rough" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 53;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_24 = var_C_f_rough;
            tmp_left_name_25 = const_int_pos_1;
            tmp_left_name_26 = const_float_0_18;
            CHECK_OBJECT( par_M );
            tmp_left_name_27 = par_M;
            tmp_right_name_27 = const_int_pos_2;
            tmp_right_name_26 = POWER_OPERATION( tmp_left_name_27, tmp_right_name_27 );
            if ( tmp_right_name_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_25 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_26, tmp_right_name_26 );
            Py_DECREF( tmp_right_name_26 );
            if ( tmp_right_name_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_24 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_25, tmp_right_name_25 );
            Py_DECREF( tmp_right_name_25 );
            if ( tmp_right_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_24 );
            Py_DECREF( tmp_right_name_24 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_C_f_c_rough == NULL );
            var_C_f_c_rough = tmp_assign_source_9;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( var_C_f_c );
        tmp_args_element_name_6 = var_C_f_c;
        CHECK_OBJECT( var_C_f_c_rough );
        tmp_args_element_name_7 = var_C_f_c_rough;
        frame_9e136d127fe504b6b3b309cde42159e0->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e136d127fe504b6b3b309cde42159e0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e136d127fe504b6b3b309cde42159e0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e136d127fe504b6b3b309cde42159e0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e136d127fe504b6b3b309cde42159e0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e136d127fe504b6b3b309cde42159e0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e136d127fe504b6b3b309cde42159e0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e136d127fe504b6b3b309cde42159e0,
        type_description_1,
        par_Re,
        par_M,
        par_surface_finish,
        par_L,
        var_R_s,
        var_Re_cr,
        var_C_f,
        var_C_f_rough,
        var_C_f_c,
        var_C_f_c_rough
    );


    // Release cached frame.
    if ( frame_9e136d127fe504b6b3b309cde42159e0 == cache_frame_9e136d127fe504b6b3b309cde42159e0 )
    {
        Py_DECREF( frame_9e136d127fe504b6b3b309cde42159e0 );
    }
    cache_frame_9e136d127fe504b6b3b309cde42159e0 = NULL;

    assertFrameObject( frame_9e136d127fe504b6b3b309cde42159e0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_4_skin_friction_coefficient );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_Re );
    Py_DECREF( par_Re );
    par_Re = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_surface_finish );
    Py_DECREF( par_surface_finish );
    par_surface_finish = NULL;

    CHECK_OBJECT( (PyObject *)par_L );
    Py_DECREF( par_L );
    par_L = NULL;

    CHECK_OBJECT( (PyObject *)var_R_s );
    Py_DECREF( var_R_s );
    var_R_s = NULL;

    CHECK_OBJECT( (PyObject *)var_Re_cr );
    Py_DECREF( var_Re_cr );
    var_Re_cr = NULL;

    Py_XDECREF( var_C_f );
    var_C_f = NULL;

    Py_XDECREF( var_C_f_rough );
    var_C_f_rough = NULL;

    Py_XDECREF( var_C_f_c );
    var_C_f_c = NULL;

    Py_XDECREF( var_C_f_c_rough );
    var_C_f_c_rough = NULL;

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

    CHECK_OBJECT( (PyObject *)par_Re );
    Py_DECREF( par_Re );
    par_Re = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_surface_finish );
    Py_DECREF( par_surface_finish );
    par_surface_finish = NULL;

    CHECK_OBJECT( (PyObject *)par_L );
    Py_DECREF( par_L );
    par_L = NULL;

    Py_XDECREF( var_R_s );
    var_R_s = NULL;

    Py_XDECREF( var_Re_cr );
    var_Re_cr = NULL;

    Py_XDECREF( var_C_f );
    var_C_f = NULL;

    Py_XDECREF( var_C_f_rough );
    var_C_f_rough = NULL;

    Py_XDECREF( var_C_f_c );
    var_C_f_c = NULL;

    Py_XDECREF( var_C_f_c_rough );
    var_C_f_c_rough = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_4_skin_friction_coefficient );
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


static PyObject *impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_5_skin_friction_drag_coefficient_fins( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_C_f_c = python_pars[ 0 ];
    PyObject *par_number_fins = python_pars[ 1 ];
    PyObject *par_A_planform = python_pars[ 2 ];
    PyObject *par_A_ref = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_3cc34a2dda4ff5a25ffaa2677cfedc19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3cc34a2dda4ff5a25ffaa2677cfedc19 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3cc34a2dda4ff5a25ffaa2677cfedc19, codeobj_3cc34a2dda4ff5a25ffaa2677cfedc19, module_model$aerodynamic_forces$drag_model_open_rocket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3cc34a2dda4ff5a25ffaa2677cfedc19 = cache_frame_3cc34a2dda4ff5a25ffaa2677cfedc19;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3cc34a2dda4ff5a25ffaa2677cfedc19 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3cc34a2dda4ff5a25ffaa2677cfedc19 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        tmp_left_name_3 = const_int_pos_2;
        CHECK_OBJECT( par_number_fins );
        tmp_right_name_1 = par_number_fins;
        tmp_left_name_2 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_3, tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_C_f_c );
        tmp_right_name_2 = par_C_f_c;
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A_planform );
        tmp_left_name_4 = par_A_planform;
        CHECK_OBJECT( par_A_ref );
        tmp_right_name_4 = par_A_ref;
        tmp_right_name_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3cc34a2dda4ff5a25ffaa2677cfedc19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3cc34a2dda4ff5a25ffaa2677cfedc19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3cc34a2dda4ff5a25ffaa2677cfedc19 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3cc34a2dda4ff5a25ffaa2677cfedc19, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3cc34a2dda4ff5a25ffaa2677cfedc19->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3cc34a2dda4ff5a25ffaa2677cfedc19, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3cc34a2dda4ff5a25ffaa2677cfedc19,
        type_description_1,
        par_C_f_c,
        par_number_fins,
        par_A_planform,
        par_A_ref
    );


    // Release cached frame.
    if ( frame_3cc34a2dda4ff5a25ffaa2677cfedc19 == cache_frame_3cc34a2dda4ff5a25ffaa2677cfedc19 )
    {
        Py_DECREF( frame_3cc34a2dda4ff5a25ffaa2677cfedc19 );
    }
    cache_frame_3cc34a2dda4ff5a25ffaa2677cfedc19 = NULL;

    assertFrameObject( frame_3cc34a2dda4ff5a25ffaa2677cfedc19 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_5_skin_friction_drag_coefficient_fins );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_C_f_c );
    Py_DECREF( par_C_f_c );
    par_C_f_c = NULL;

    CHECK_OBJECT( (PyObject *)par_number_fins );
    Py_DECREF( par_number_fins );
    par_number_fins = NULL;

    CHECK_OBJECT( (PyObject *)par_A_planform );
    Py_DECREF( par_A_planform );
    par_A_planform = NULL;

    CHECK_OBJECT( (PyObject *)par_A_ref );
    Py_DECREF( par_A_ref );
    par_A_ref = NULL;

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

    CHECK_OBJECT( (PyObject *)par_C_f_c );
    Py_DECREF( par_C_f_c );
    par_C_f_c = NULL;

    CHECK_OBJECT( (PyObject *)par_number_fins );
    Py_DECREF( par_number_fins );
    par_number_fins = NULL;

    CHECK_OBJECT( (PyObject *)par_A_planform );
    Py_DECREF( par_A_planform );
    par_A_planform = NULL;

    CHECK_OBJECT( (PyObject *)par_A_ref );
    Py_DECREF( par_A_ref );
    par_A_ref = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_5_skin_friction_drag_coefficient_fins );
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


static PyObject *impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_6_skin_friction_drag_coefficient_body( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_C_f_c = python_pars[ 0 ];
    PyObject *par_fineness = python_pars[ 1 ];
    PyObject *par_A_wet = python_pars[ 2 ];
    PyObject *par_A_ref = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_681bbea13bdf03e8f4efc4b6fed05191;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_681bbea13bdf03e8f4efc4b6fed05191 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_681bbea13bdf03e8f4efc4b6fed05191, codeobj_681bbea13bdf03e8f4efc4b6fed05191, module_model$aerodynamic_forces$drag_model_open_rocket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_681bbea13bdf03e8f4efc4b6fed05191 = cache_frame_681bbea13bdf03e8f4efc4b6fed05191;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_681bbea13bdf03e8f4efc4b6fed05191 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_681bbea13bdf03e8f4efc4b6fed05191 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        tmp_left_name_3 = const_int_pos_1;
        tmp_left_name_4 = const_float_0_5;
        CHECK_OBJECT( par_fineness );
        tmp_right_name_2 = par_fineness;
        tmp_right_name_1 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_4, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_3, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_C_f_c );
        tmp_right_name_3 = par_C_f_c;
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A_wet );
        tmp_left_name_5 = par_A_wet;
        CHECK_OBJECT( par_A_ref );
        tmp_right_name_5 = par_A_ref;
        tmp_right_name_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_681bbea13bdf03e8f4efc4b6fed05191 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_681bbea13bdf03e8f4efc4b6fed05191 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_681bbea13bdf03e8f4efc4b6fed05191 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_681bbea13bdf03e8f4efc4b6fed05191, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_681bbea13bdf03e8f4efc4b6fed05191->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_681bbea13bdf03e8f4efc4b6fed05191, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_681bbea13bdf03e8f4efc4b6fed05191,
        type_description_1,
        par_C_f_c,
        par_fineness,
        par_A_wet,
        par_A_ref
    );


    // Release cached frame.
    if ( frame_681bbea13bdf03e8f4efc4b6fed05191 == cache_frame_681bbea13bdf03e8f4efc4b6fed05191 )
    {
        Py_DECREF( frame_681bbea13bdf03e8f4efc4b6fed05191 );
    }
    cache_frame_681bbea13bdf03e8f4efc4b6fed05191 = NULL;

    assertFrameObject( frame_681bbea13bdf03e8f4efc4b6fed05191 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_6_skin_friction_drag_coefficient_body );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_C_f_c );
    Py_DECREF( par_C_f_c );
    par_C_f_c = NULL;

    CHECK_OBJECT( (PyObject *)par_fineness );
    Py_DECREF( par_fineness );
    par_fineness = NULL;

    CHECK_OBJECT( (PyObject *)par_A_wet );
    Py_DECREF( par_A_wet );
    par_A_wet = NULL;

    CHECK_OBJECT( (PyObject *)par_A_ref );
    Py_DECREF( par_A_ref );
    par_A_ref = NULL;

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

    CHECK_OBJECT( (PyObject *)par_C_f_c );
    Py_DECREF( par_C_f_c );
    par_C_f_c = NULL;

    CHECK_OBJECT( (PyObject *)par_fineness );
    Py_DECREF( par_fineness );
    par_fineness = NULL;

    CHECK_OBJECT( (PyObject *)par_A_wet );
    Py_DECREF( par_A_wet );
    par_A_wet = NULL;

    CHECK_OBJECT( (PyObject *)par_A_ref );
    Py_DECREF( par_A_ref );
    par_A_ref = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_6_skin_friction_drag_coefficient_body );
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


static PyObject *impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_7_base_drag_coefficient( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_M = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b4e203b1746f8c31016484936211f185;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b4e203b1746f8c31016484936211f185 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4e203b1746f8c31016484936211f185, codeobj_b4e203b1746f8c31016484936211f185, module_model$aerodynamic_forces$drag_model_open_rocket, sizeof(void *) );
    frame_b4e203b1746f8c31016484936211f185 = cache_frame_b4e203b1746f8c31016484936211f185;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4e203b1746f8c31016484936211f185 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4e203b1746f8c31016484936211f185 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_M );
        tmp_compexpr_left_1 = par_M;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "o";
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
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_left_name_1 = const_float_0_12;
            tmp_left_name_2 = const_float_0_13;
            CHECK_OBJECT( par_M );
            tmp_left_name_3 = par_M;
            tmp_right_name_3 = const_int_pos_2;
            tmp_right_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_ADD_FLOAT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            tmp_left_name_4 = const_float_0_25;
            CHECK_OBJECT( par_M );
            tmp_right_name_4 = par_M;
            tmp_return_value = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4e203b1746f8c31016484936211f185 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4e203b1746f8c31016484936211f185 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4e203b1746f8c31016484936211f185 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4e203b1746f8c31016484936211f185, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4e203b1746f8c31016484936211f185->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4e203b1746f8c31016484936211f185, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4e203b1746f8c31016484936211f185,
        type_description_1,
        par_M
    );


    // Release cached frame.
    if ( frame_b4e203b1746f8c31016484936211f185 == cache_frame_b4e203b1746f8c31016484936211f185 )
    {
        Py_DECREF( frame_b4e203b1746f8c31016484936211f185 );
    }
    cache_frame_b4e203b1746f8c31016484936211f185 = NULL;

    assertFrameObject( frame_b4e203b1746f8c31016484936211f185 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_7_base_drag_coefficient );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_7_base_drag_coefficient );
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


static PyObject *impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_8_pressure_drag_coefficient_fins_rounded( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_M = python_pars[ 0 ];
    PyObject *par_angle_sweep_LE = python_pars[ 1 ];
    PyObject *par_A_frontal = python_pars[ 2 ];
    PyObject *par_A_ref = python_pars[ 3 ];
    PyObject *var_C_D_LE = NULL;
    PyObject *var_C_D_TE = NULL;
    struct Nuitka_FrameObject *frame_b0c9190bce9bac1d36d86bab1f4841a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b0c9190bce9bac1d36d86bab1f4841a9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b0c9190bce9bac1d36d86bab1f4841a9, codeobj_b0c9190bce9bac1d36d86bab1f4841a9, module_model$aerodynamic_forces$drag_model_open_rocket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b0c9190bce9bac1d36d86bab1f4841a9 = cache_frame_b0c9190bce9bac1d36d86bab1f4841a9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b0c9190bce9bac1d36d86bab1f4841a9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b0c9190bce9bac1d36d86bab1f4841a9 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_M );
        tmp_compexpr_left_1 = par_M;
        tmp_compexpr_right_1 = const_float_0_9;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooooo";
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
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            PyObject *tmp_right_name_4;
            tmp_left_name_3 = const_int_pos_1;
            CHECK_OBJECT( par_M );
            tmp_left_name_4 = par_M;
            tmp_right_name_2 = const_int_pos_2;
            tmp_right_name_1 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_3, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = const_float_minus_0_417;
            tmp_left_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_int_pos_1;
            tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_C_D_LE == NULL );
            var_C_D_LE = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_M );
            tmp_compexpr_left_2 = par_M;
            tmp_compexpr_right_2 = const_float_0_9;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "oooooo";
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
            CHECK_OBJECT( par_M );
            tmp_compexpr_left_3 = par_M;
            tmp_compexpr_right_3 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "oooooo";
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                tmp_left_name_5 = const_int_pos_1;
                tmp_left_name_6 = const_float_1_785;
                CHECK_OBJECT( par_M );
                tmp_left_name_7 = par_M;
                tmp_right_name_7 = const_float_0_9;
                tmp_right_name_6 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_7, tmp_right_name_7 );
                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 77;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_5 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_right_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 77;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 77;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_C_D_LE == NULL );
                var_C_D_LE = tmp_assign_source_2;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_left_name_8;
                PyObject *tmp_left_name_9;
                PyObject *tmp_right_name_8;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_9;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_10;
                PyObject *tmp_right_name_11;
                PyObject *tmp_left_name_12;
                PyObject *tmp_right_name_12;
                PyObject *tmp_left_name_13;
                PyObject *tmp_right_name_13;
                tmp_left_name_9 = const_float_1_214;
                tmp_left_name_10 = const_float_0_502;
                CHECK_OBJECT( par_M );
                tmp_left_name_11 = par_M;
                tmp_right_name_10 = const_int_pos_2;
                tmp_right_name_9 = POWER_OPERATION( tmp_left_name_11, tmp_right_name_10 );
                if ( tmp_right_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 79;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_8 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_10, tmp_right_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_right_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 79;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_8 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
                Py_DECREF( tmp_right_name_8 );
                if ( tmp_left_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 79;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_12 = const_float_0_1095;
                CHECK_OBJECT( par_M );
                tmp_left_name_13 = par_M;
                tmp_right_name_13 = const_int_pos_4;
                tmp_right_name_12 = POWER_OPERATION( tmp_left_name_13, tmp_right_name_13 );
                if ( tmp_right_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_8 );

                    exception_lineno = 79;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_11 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
                Py_DECREF( tmp_right_name_12 );
                if ( tmp_right_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_8 );

                    exception_lineno = 79;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_11 );
                Py_DECREF( tmp_left_name_8 );
                Py_DECREF( tmp_right_name_11 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 79;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_C_D_LE == NULL );
                var_C_D_LE = tmp_assign_source_3;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_15;
        if ( var_C_D_LE == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "C_D_LE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_14 = var_C_D_LE;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_math );

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

            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cos );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_math );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "math" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_angle_sweep_LE );
        tmp_args_element_name_2 = par_angle_sweep_LE;
        frame_b0c9190bce9bac1d36d86bab1f4841a9->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_radians, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_b0c9190bce9bac1d36d86bab1f4841a9->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_15 = const_int_pos_2;
        tmp_right_name_14 = POWER_OPERATION( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_15 );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_C_D_LE;
            var_C_D_LE = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_16;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_16;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_base_drag_coefficient );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base_drag_coefficient );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base_drag_coefficient" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_M );
        tmp_args_element_name_3 = par_M;
        frame_b0c9190bce9bac1d36d86bab1f4841a9->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_left_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_16 = const_int_pos_2;
        tmp_assign_source_5 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_16, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_16 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C_D_TE == NULL );
        var_C_D_TE = tmp_assign_source_5;
    }
    {
        PyObject *tmp_left_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_17;
        PyObject *tmp_right_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        CHECK_OBJECT( var_C_D_LE );
        tmp_left_name_18 = var_C_D_LE;
        CHECK_OBJECT( var_C_D_TE );
        tmp_right_name_17 = var_C_D_TE;
        tmp_left_name_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_17 );
        if ( tmp_left_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A_frontal );
        tmp_left_name_19 = par_A_frontal;
        CHECK_OBJECT( par_A_ref );
        tmp_right_name_19 = par_A_ref;
        tmp_right_name_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
        if ( tmp_right_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_17 );

            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_18 );
        Py_DECREF( tmp_left_name_17 );
        Py_DECREF( tmp_right_name_18 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b0c9190bce9bac1d36d86bab1f4841a9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b0c9190bce9bac1d36d86bab1f4841a9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b0c9190bce9bac1d36d86bab1f4841a9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b0c9190bce9bac1d36d86bab1f4841a9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b0c9190bce9bac1d36d86bab1f4841a9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b0c9190bce9bac1d36d86bab1f4841a9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b0c9190bce9bac1d36d86bab1f4841a9,
        type_description_1,
        par_M,
        par_angle_sweep_LE,
        par_A_frontal,
        par_A_ref,
        var_C_D_LE,
        var_C_D_TE
    );


    // Release cached frame.
    if ( frame_b0c9190bce9bac1d36d86bab1f4841a9 == cache_frame_b0c9190bce9bac1d36d86bab1f4841a9 )
    {
        Py_DECREF( frame_b0c9190bce9bac1d36d86bab1f4841a9 );
    }
    cache_frame_b0c9190bce9bac1d36d86bab1f4841a9 = NULL;

    assertFrameObject( frame_b0c9190bce9bac1d36d86bab1f4841a9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_8_pressure_drag_coefficient_fins_rounded );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_angle_sweep_LE );
    Py_DECREF( par_angle_sweep_LE );
    par_angle_sweep_LE = NULL;

    CHECK_OBJECT( (PyObject *)par_A_frontal );
    Py_DECREF( par_A_frontal );
    par_A_frontal = NULL;

    CHECK_OBJECT( (PyObject *)par_A_ref );
    Py_DECREF( par_A_ref );
    par_A_ref = NULL;

    CHECK_OBJECT( (PyObject *)var_C_D_LE );
    Py_DECREF( var_C_D_LE );
    var_C_D_LE = NULL;

    CHECK_OBJECT( (PyObject *)var_C_D_TE );
    Py_DECREF( var_C_D_TE );
    var_C_D_TE = NULL;

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

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_angle_sweep_LE );
    Py_DECREF( par_angle_sweep_LE );
    par_angle_sweep_LE = NULL;

    CHECK_OBJECT( (PyObject *)par_A_frontal );
    Py_DECREF( par_A_frontal );
    par_A_frontal = NULL;

    CHECK_OBJECT( (PyObject *)par_A_ref );
    Py_DECREF( par_A_ref );
    par_A_ref = NULL;

    Py_XDECREF( var_C_D_LE );
    var_C_D_LE = NULL;

    Py_XDECREF( var_C_D_TE );
    var_C_D_TE = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_8_pressure_drag_coefficient_fins_rounded );
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


static PyObject *impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_9_pressure_drag_coefficient_nose( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_M = python_pars[ 0 ];
    PyObject *par_f_n = python_pars[ 1 ];
    PyObject *par_type = python_pars[ 2 ];
    PyObject *var_q_stag_q = NULL;
    PyObject *var_C_D_0 = NULL;
    PyObject *var_C_D_3_test = NULL;
    struct Nuitka_FrameObject *frame_569c30c969e68eecf616779e23ddec43;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_569c30c969e68eecf616779e23ddec43 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_569c30c969e68eecf616779e23ddec43, codeobj_569c30c969e68eecf616779e23ddec43, module_model$aerodynamic_forces$drag_model_open_rocket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_569c30c969e68eecf616779e23ddec43 = cache_frame_569c30c969e68eecf616779e23ddec43;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_569c30c969e68eecf616779e23ddec43 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_569c30c969e68eecf616779e23ddec43 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_M );
        tmp_compexpr_left_1 = par_M;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oooooo";
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
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            PyObject *tmp_right_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_5;
            PyObject *tmp_right_name_6;
            tmp_left_name_2 = const_int_pos_1;
            CHECK_OBJECT( par_M );
            tmp_left_name_4 = par_M;
            tmp_right_name_2 = const_int_pos_2;
            tmp_left_name_3 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_2 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = const_int_pos_4;
            tmp_right_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_M );
            tmp_left_name_6 = par_M;
            tmp_right_name_5 = const_int_pos_4;
            tmp_left_name_5 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_5 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_6 = const_int_pos_40;
            tmp_right_name_4 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_5, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_q_stag_q == NULL );
            var_q_stag_q = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_7;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_8;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_9;
            PyObject *tmp_right_name_10;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_11;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_12;
            PyObject *tmp_right_name_13;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_14;
            PyObject *tmp_left_name_15;
            PyObject *tmp_right_name_15;
            tmp_left_name_9 = const_float_1_84;
            tmp_left_name_10 = const_float_0_76;
            CHECK_OBJECT( par_M );
            tmp_left_name_11 = par_M;
            tmp_right_name_9 = const_int_pos_2;
            tmp_right_name_8 = POWER_OPERATION( tmp_left_name_11, tmp_right_name_9 );
            if ( tmp_right_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_7 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_10, tmp_right_name_8 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_8 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_9, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_12 = const_float_0_166;
            CHECK_OBJECT( par_M );
            tmp_left_name_13 = par_M;
            tmp_right_name_12 = const_int_pos_4;
            tmp_right_name_11 = POWER_OPERATION( tmp_left_name_13, tmp_right_name_12 );
            if ( tmp_right_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 94;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_10 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_12, tmp_right_name_11 );
            Py_DECREF( tmp_right_name_11 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 94;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_14 = const_float_0_035;
            CHECK_OBJECT( par_M );
            tmp_left_name_15 = par_M;
            tmp_right_name_15 = const_int_pos_6;
            tmp_right_name_14 = POWER_OPERATION( tmp_left_name_15, tmp_right_name_15 );
            if ( tmp_right_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 94;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_13 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
            Py_DECREF( tmp_right_name_14 );
            if ( tmp_right_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 94;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_13 );
            Py_DECREF( tmp_left_name_7 );
            Py_DECREF( tmp_right_name_13 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_q_stag_q == NULL );
            var_q_stag_q = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        tmp_left_name_16 = const_float_0_85;
        CHECK_OBJECT( var_q_stag_q );
        tmp_right_name_16 = var_q_stag_q;
        tmp_assign_source_3 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C_D_0 == NULL );
        var_C_D_0 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_pressure_drag_coefficient_test );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pressure_drag_coefficient_test );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pressure_drag_coefficient_test" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_type );
        tmp_args_element_name_1 = par_type;
        CHECK_OBJECT( par_M );
        tmp_args_element_name_2 = par_M;
        frame_569c30c969e68eecf616779e23ddec43->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C_D_3_test == NULL );
        var_C_D_3_test = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_C_D_3_test );
        tmp_compexpr_left_2 = var_C_D_3_test;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
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
            PyObject *tmp_left_name_17;
            PyObject *tmp_right_name_17;
            PyObject *tmp_left_name_18;
            PyObject *tmp_left_name_19;
            PyObject *tmp_right_name_18;
            PyObject *tmp_right_name_19;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_20;
            PyObject *tmp_right_name_20;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( var_C_D_0 );
            tmp_left_name_17 = var_C_D_0;
            CHECK_OBJECT( var_C_D_3_test );
            tmp_left_name_19 = var_C_D_3_test;
            CHECK_OBJECT( var_C_D_0 );
            tmp_right_name_18 = var_C_D_0;
            tmp_left_name_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_18 );
            if ( tmp_left_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_math );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_left_name_18 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "math" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 101;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_log );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_18 );

                exception_lineno = 101;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_f_n );
            tmp_left_name_20 = par_f_n;
            tmp_right_name_20 = const_int_pos_1;
            tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_20, tmp_right_name_20 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_18 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 101;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = const_int_pos_4;
            frame_569c30c969e68eecf616779e23ddec43->m_frame.f_lineno = 101;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_right_name_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_right_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_18 );

                exception_lineno = 101;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_17 = POWER_OPERATION( tmp_left_name_18, tmp_right_name_19 );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_right_name_19 );
            if ( tmp_right_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_17 );
            Py_DECREF( tmp_right_name_17 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_return_value = const_float_0_0;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_569c30c969e68eecf616779e23ddec43 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_569c30c969e68eecf616779e23ddec43 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_569c30c969e68eecf616779e23ddec43 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_569c30c969e68eecf616779e23ddec43, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_569c30c969e68eecf616779e23ddec43->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_569c30c969e68eecf616779e23ddec43, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_569c30c969e68eecf616779e23ddec43,
        type_description_1,
        par_M,
        par_f_n,
        par_type,
        var_q_stag_q,
        var_C_D_0,
        var_C_D_3_test
    );


    // Release cached frame.
    if ( frame_569c30c969e68eecf616779e23ddec43 == cache_frame_569c30c969e68eecf616779e23ddec43 )
    {
        Py_DECREF( frame_569c30c969e68eecf616779e23ddec43 );
    }
    cache_frame_569c30c969e68eecf616779e23ddec43 = NULL;

    assertFrameObject( frame_569c30c969e68eecf616779e23ddec43 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_9_pressure_drag_coefficient_nose );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_f_n );
    Py_DECREF( par_f_n );
    par_f_n = NULL;

    CHECK_OBJECT( (PyObject *)par_type );
    Py_DECREF( par_type );
    par_type = NULL;

    CHECK_OBJECT( (PyObject *)var_q_stag_q );
    Py_DECREF( var_q_stag_q );
    var_q_stag_q = NULL;

    CHECK_OBJECT( (PyObject *)var_C_D_0 );
    Py_DECREF( var_C_D_0 );
    var_C_D_0 = NULL;

    CHECK_OBJECT( (PyObject *)var_C_D_3_test );
    Py_DECREF( var_C_D_3_test );
    var_C_D_3_test = NULL;

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

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_f_n );
    Py_DECREF( par_f_n );
    par_f_n = NULL;

    CHECK_OBJECT( (PyObject *)par_type );
    Py_DECREF( par_type );
    par_type = NULL;

    Py_XDECREF( var_q_stag_q );
    var_q_stag_q = NULL;

    Py_XDECREF( var_C_D_0 );
    var_C_D_0 = NULL;

    Py_XDECREF( var_C_D_3_test );
    var_C_D_3_test = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_9_pressure_drag_coefficient_nose );
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


static PyObject *impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_10_pressure_drag_coefficient_test( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_type = python_pars[ 0 ];
    PyObject *par_M = python_pars[ 1 ];
    PyObject *var_M_data_list = NULL;
    PyObject *var_C_D_data_list = NULL;
    struct Nuitka_FrameObject *frame_ed709bd81ca4cdfdcca976bbb01960cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ed709bd81ca4cdfdcca976bbb01960cf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ed709bd81ca4cdfdcca976bbb01960cf, codeobj_ed709bd81ca4cdfdcca976bbb01960cf, module_model$aerodynamic_forces$drag_model_open_rocket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ed709bd81ca4cdfdcca976bbb01960cf = cache_frame_ed709bd81ca4cdfdcca976bbb01960cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ed709bd81ca4cdfdcca976bbb01960cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ed709bd81ca4cdfdcca976bbb01960cf ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_type );
        tmp_compexpr_left_1 = par_type;
        tmp_compexpr_right_1 = const_str_plain_VON_KARMEN;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "oooo";
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
            tmp_assign_source_1 = LIST_COPY( const_list_c6788836e06d4e27f2f0b5fa2f70ef06_list );
            assert( var_M_data_list == NULL );
            var_M_data_list = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = LIST_COPY( const_list_0379503006a4f967918b7326f6694c2d_list );
            assert( var_C_D_data_list == NULL );
            var_C_D_data_list = tmp_assign_source_2;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_interp );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_M );
        tmp_args_element_name_1 = par_M;
        if ( var_M_data_list == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "M_data_list" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = var_M_data_list;
        if ( var_C_D_data_list == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "C_D_data_list" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = var_C_D_data_list;
        frame_ed709bd81ca4cdfdcca976bbb01960cf->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed709bd81ca4cdfdcca976bbb01960cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed709bd81ca4cdfdcca976bbb01960cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed709bd81ca4cdfdcca976bbb01960cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed709bd81ca4cdfdcca976bbb01960cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed709bd81ca4cdfdcca976bbb01960cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed709bd81ca4cdfdcca976bbb01960cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ed709bd81ca4cdfdcca976bbb01960cf,
        type_description_1,
        par_type,
        par_M,
        var_M_data_list,
        var_C_D_data_list
    );


    // Release cached frame.
    if ( frame_ed709bd81ca4cdfdcca976bbb01960cf == cache_frame_ed709bd81ca4cdfdcca976bbb01960cf )
    {
        Py_DECREF( frame_ed709bd81ca4cdfdcca976bbb01960cf );
    }
    cache_frame_ed709bd81ca4cdfdcca976bbb01960cf = NULL;

    assertFrameObject( frame_ed709bd81ca4cdfdcca976bbb01960cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_10_pressure_drag_coefficient_test );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_type );
    Py_DECREF( par_type );
    par_type = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    Py_XDECREF( var_M_data_list );
    var_M_data_list = NULL;

    Py_XDECREF( var_C_D_data_list );
    var_C_D_data_list = NULL;

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

    CHECK_OBJECT( (PyObject *)par_type );
    Py_DECREF( par_type );
    par_type = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    Py_XDECREF( var_M_data_list );
    var_M_data_list = NULL;

    Py_XDECREF( var_C_D_data_list );
    var_C_D_data_list = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( model$aerodynamic_forces$drag_model_open_rocket$$$function_10_pressure_drag_coefficient_test );
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



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_10_pressure_drag_coefficient_test(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_10_pressure_drag_coefficient_test,
        const_str_plain_pressure_drag_coefficient_test,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ed709bd81ca4cdfdcca976bbb01960cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$drag_model_open_rocket,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_1_drag_coefficient(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_1_drag_coefficient,
        const_str_plain_drag_coefficient,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e36332ab8ddf22f1c7cc92d7acb206a1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$drag_model_open_rocket,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_2_surface_roughness_height(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_2_surface_roughness_height,
        const_str_plain_surface_roughness_height,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_86b9d6f01f5e43ed98fec3775b40c37b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$drag_model_open_rocket,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_3_reynolds_critical(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_3_reynolds_critical,
        const_str_plain_reynolds_critical,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9e4e0d5fb47c03f06c50d5be5a15bd6b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$drag_model_open_rocket,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_4_skin_friction_coefficient(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_4_skin_friction_coefficient,
        const_str_plain_skin_friction_coefficient,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9e136d127fe504b6b3b309cde42159e0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$drag_model_open_rocket,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_5_skin_friction_drag_coefficient_fins(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_5_skin_friction_drag_coefficient_fins,
        const_str_plain_skin_friction_drag_coefficient_fins,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3cc34a2dda4ff5a25ffaa2677cfedc19,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$drag_model_open_rocket,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_6_skin_friction_drag_coefficient_body(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_6_skin_friction_drag_coefficient_body,
        const_str_plain_skin_friction_drag_coefficient_body,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_681bbea13bdf03e8f4efc4b6fed05191,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$drag_model_open_rocket,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_7_base_drag_coefficient(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_7_base_drag_coefficient,
        const_str_plain_base_drag_coefficient,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b4e203b1746f8c31016484936211f185,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$drag_model_open_rocket,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_8_pressure_drag_coefficient_fins_rounded(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_8_pressure_drag_coefficient_fins_rounded,
        const_str_plain_pressure_drag_coefficient_fins_rounded,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b0c9190bce9bac1d36d86bab1f4841a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$drag_model_open_rocket,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_9_pressure_drag_coefficient_nose(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_model$aerodynamic_forces$drag_model_open_rocket$$$function_9_pressure_drag_coefficient_nose,
        const_str_plain_pressure_drag_coefficient_nose,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_569c30c969e68eecf616779e23ddec43,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_model$aerodynamic_forces$drag_model_open_rocket,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_model$aerodynamic_forces$drag_model_open_rocket =
{
    PyModuleDef_HEAD_INIT,
    "model.aerodynamic_forces.drag_model_open_rocket",
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

MOD_INIT_DECL( model$aerodynamic_forces$drag_model_open_rocket )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_model$aerodynamic_forces$drag_model_open_rocket );
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
    puts("model.aerodynamic_forces.drag_model_open_rocket: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("model.aerodynamic_forces.drag_model_open_rocket: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("model.aerodynamic_forces.drag_model_open_rocket: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmodel$aerodynamic_forces$drag_model_open_rocket" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_model$aerodynamic_forces$drag_model_open_rocket = Py_InitModule4(
        "model.aerodynamic_forces.drag_model_open_rocket",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_model$aerodynamic_forces$drag_model_open_rocket = PyModule_Create( &mdef_model$aerodynamic_forces$drag_model_open_rocket );
#endif

    moduledict_model$aerodynamic_forces$drag_model_open_rocket = MODULE_DICT( module_model$aerodynamic_forces$drag_model_open_rocket );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_model$aerodynamic_forces$drag_model_open_rocket,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_model$aerodynamic_forces$drag_model_open_rocket,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_model$aerodynamic_forces$drag_model_open_rocket,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_model$aerodynamic_forces$drag_model_open_rocket,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_model$aerodynamic_forces$drag_model_open_rocket );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_4514e974e73921c7f70be582a153bdfa, module_model$aerodynamic_forces$drag_model_open_rocket );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_8c6422ba90ba9624a46da40fcb91a863;
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
        UPDATE_STRING_DICT0( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_8c6422ba90ba9624a46da40fcb91a863 = MAKE_MODULE_FRAME( codeobj_8c6422ba90ba9624a46da40fcb91a863, module_model$aerodynamic_forces$drag_model_open_rocket );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8c6422ba90ba9624a46da40fcb91a863 );
    assert( Py_REFCNT( frame_8c6422ba90ba9624a46da40fcb91a863 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_math;
        tmp_globals_name_1 = (PyObject *)moduledict_model$aerodynamic_forces$drag_model_open_rocket;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_8c6422ba90ba9624a46da40fcb91a863->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_model$aerodynamic_forces$drag_model_open_rocket;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_8c6422ba90ba9624a46da40fcb91a863->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_5 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c6422ba90ba9624a46da40fcb91a863 );
#endif
    popFrameStack();

    assertFrameObject( frame_8c6422ba90ba9624a46da40fcb91a863 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c6422ba90ba9624a46da40fcb91a863 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8c6422ba90ba9624a46da40fcb91a863, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8c6422ba90ba9624a46da40fcb91a863->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8c6422ba90ba9624a46da40fcb91a863, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_1_drag_coefficient(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_drag_coefficient, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_2_surface_roughness_height(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_surface_roughness_height, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_3_reynolds_critical(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_reynolds_critical, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_4_skin_friction_coefficient(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_skin_friction_coefficient, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_5_skin_friction_drag_coefficient_fins(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_skin_friction_drag_coefficient_fins, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_6_skin_friction_drag_coefficient_body(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_skin_friction_drag_coefficient_body, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_7_base_drag_coefficient(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_base_drag_coefficient, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_8_pressure_drag_coefficient_fins_rounded(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_pressure_drag_coefficient_fins_rounded, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_9_pressure_drag_coefficient_nose(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_pressure_drag_coefficient_nose, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_model$aerodynamic_forces$drag_model_open_rocket$$$function_10_pressure_drag_coefficient_test(  );



        UPDATE_STRING_DICT1( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain_pressure_drag_coefficient_test, tmp_assign_source_15 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_model$aerodynamic_forces$drag_model_open_rocket, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_model$aerodynamic_forces$drag_model_open_rocket );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
