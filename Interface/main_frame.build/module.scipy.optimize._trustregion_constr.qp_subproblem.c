/* Generated code for Python module 'scipy.optimize._trustregion_constr.qp_subproblem'
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

/* The "_module_scipy$optimize$_trustregion_constr$qp_subproblem" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_trustregion_constr$qp_subproblem;
PyDictObject *moduledict_scipy$optimize$_trustregion_constr$qp_subproblem;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_a7cc3470190672a73d371270c9260cf9_tuple;
static PyObject *const_list_0c3a99b10261af7636f4be1bd284cb4c_list;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_77591f2e62628f9f8e80948a4120323e;
extern PyObject *const_str_plain_sorted;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_str_plain_origin_point;
extern PyObject *const_str_plain_inf;
static PyObject *const_str_digest_8cc4fb5cfacca949900cccf6fc60a09e;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_solve;
static PyObject *const_str_plain_kkt_vec;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_zeros_like;
extern PyObject *const_str_plain_x1;
extern PyObject *const_str_plain_allvecs;
static PyObject *const_str_plain_tb_s;
extern PyObject *const_tuple_false_false_tuple;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_a;
static PyObject *const_str_plain_sphere_info;
extern PyObject *const_tuple_int_0_int_0_false_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_sqrt_discriminant;
static PyObject *const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple;
static PyObject *const_tuple_str_plain_linalg_str_plain_bmat_str_plain_csc_matrix_tuple;
extern PyObject *const_str_plain_minimum;
extern PyObject *const_str_plain_m;
static PyObject *const_str_plain_intersect;
extern PyObject *const_str_plain_H;
static PyObject *const_str_plain_not_zero_d;
static PyObject *const_str_plain_kkt_matrix;
extern PyObject *const_str_plain_bmat;
static PyObject *const_dict_4dfb153181fa9d20811c6920b20cb8bf;
extern PyObject *const_str_plain_isinf;
extern PyObject *const_str_plain_full;
extern PyObject *const_tuple_str_plain_copysign_tuple;
extern PyObject *const_str_plain_Y;
static PyObject *const_tuple_d7549175b868875e5a6d37de07e19b52_tuple;
extern PyObject *const_str_plain_hstack;
static PyObject *const_str_digest_2a3c6f08f17d8e171fe5e6858bfe83ee;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_discriminant;
static PyObject *const_str_plain_ta_b;
extern PyObject *const_float_0_1;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_intersect_s;
extern PyObject *const_str_plain_lu;
static PyObject *const_str_plain_tb_b;
extern PyObject *const_str_plain_n;
extern PyObject *const_int_neg_2;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_g;
static PyObject *const_str_plain_reinforce_box_boundaries;
static PyObject *const_str_digest_7273c41be14e90588a900b3cadcba50c;
static PyObject *const_str_plain_zero_d;
extern PyObject *const_str_plain_all;
static PyObject *const_float_1eminus_25;
extern PyObject *const_str_plain_alpha;
extern PyObject *const_str_plain_box_intersections;
static PyObject *const_tuple_eb90a3127aeaa47a43fda733f6b0cdaf_tuple;
static PyObject *const_str_digest_606c04355fa450fae1dc3094c0a2b0ae;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
static PyObject *const_str_digest_ae30b5ed6718be83882dd52e5b4dada1;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_ub;
static PyObject *const_str_digest_4ca9940868ffb7b6607526372839914f;
static PyObject *const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_aux;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_96c65eba12d002441284c4c0c54ec1a8;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_d09452476437838336ef85c20f5e2798;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_tb;
extern PyObject *const_str_plain_ta;
extern PyObject *const_str_plain_splu;
static PyObject *const_str_digest_8d968cced04fd40093fef48a76809a77;
static PyObject *const_str_plain_extra_info;
extern PyObject *const_tuple_str_plain_x_str_plain_lb_str_plain_ub_tuple;
static PyObject *const_str_plain_intersect_b;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_modified_dogleg;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_c;
static PyObject *const_str_plain_box_info;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_niter;
static PyObject *const_str_plain_kkt_sol;
extern PyObject *const_str_plain_trust_radius;
static PyObject *const_str_plain_eqp_kktfact;
static PyObject *const_str_plain_box_sphere_intersections;
static PyObject *const_str_digest_6992e9966002e103f5b93f52a6fbb633;
extern PyObject *const_str_plain_logical_not;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_projected_cg;
extern PyObject *const_str_plain_math;
static PyObject *const_str_digest_07b5a8a2cf98ad82e12c0f2977245793;
extern PyObject *const_str_plain__;
static PyObject *const_str_plain_ta_s;
extern PyObject *const_str_plain_csc_matrix;
extern PyObject *const_str_plain_dot;
static PyObject *const_str_digest_6bf8b1b8e4ee9fa66a6506e3921f5f91;
static PyObject *const_str_plain_entire_line;
static PyObject *const_str_plain_A_g;
extern PyObject *const_float_0_01;
extern PyObject *const_str_plain_stop_cond;
extern PyObject *const_str_plain_z;
static PyObject *const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple;
static PyObject *const_str_plain_t_ub;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
static PyObject *const_str_plain_t_lb;
extern PyObject *const_str_plain_hits_boundary;
extern PyObject *const_str_plain_cauchy_point;
extern PyObject *const_str_plain_maximum;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_copysign;
static PyObject *const_dict_e4eecd5312f97ebdcf17ee25172fb05e;
extern PyObject *const_str_plain_lb;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_str_plain_inside_box_boundaries;
extern PyObject *const_str_plain_T;
static PyObject *const_str_plain_sphere_intersections;
static PyObject *const_str_digest_3909a94a3182a6e823caad540343a5b1;
extern PyObject *const_tuple_str_plain_norm_tuple;
extern PyObject *const_str_plain_x2;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_newton_point;
static PyObject *const_str_plain_lagrange_multipliers;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_a7cc3470190672a73d371270c9260cf9_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_a7cc3470190672a73d371270c9260cf9_tuple, 0, const_str_plain_H ); Py_INCREF( const_str_plain_H );
    PyTuple_SET_ITEM( const_tuple_a7cc3470190672a73d371270c9260cf9_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_a7cc3470190672a73d371270c9260cf9_tuple, 2, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_a7cc3470190672a73d371270c9260cf9_tuple, 3, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_a7cc3470190672a73d371270c9260cf9_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_a7cc3470190672a73d371270c9260cf9_tuple, 5, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_str_plain_kkt_matrix = UNSTREAM_STRING_ASCII( &constant_bin[ 5095733 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_a7cc3470190672a73d371270c9260cf9_tuple, 6, const_str_plain_kkt_matrix ); Py_INCREF( const_str_plain_kkt_matrix );
    const_str_plain_kkt_vec = UNSTREAM_STRING_ASCII( &constant_bin[ 5095743 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_a7cc3470190672a73d371270c9260cf9_tuple, 7, const_str_plain_kkt_vec ); Py_INCREF( const_str_plain_kkt_vec );
    PyTuple_SET_ITEM( const_tuple_a7cc3470190672a73d371270c9260cf9_tuple, 8, const_str_plain_lu ); Py_INCREF( const_str_plain_lu );
    const_str_plain_kkt_sol = UNSTREAM_STRING_ASCII( &constant_bin[ 5095750 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_a7cc3470190672a73d371270c9260cf9_tuple, 9, const_str_plain_kkt_sol ); Py_INCREF( const_str_plain_kkt_sol );
    PyTuple_SET_ITEM( const_tuple_a7cc3470190672a73d371270c9260cf9_tuple, 10, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_lagrange_multipliers = UNSTREAM_STRING_ASCII( &constant_bin[ 5095757 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_a7cc3470190672a73d371270c9260cf9_tuple, 11, const_str_plain_lagrange_multipliers ); Py_INCREF( const_str_plain_lagrange_multipliers );
    const_list_0c3a99b10261af7636f4be1bd284cb4c_list = PyList_New( 7 );
    const_str_plain_eqp_kktfact = UNSTREAM_STRING_ASCII( &constant_bin[ 5095777 ], 11, 1 );
    PyList_SET_ITEM( const_list_0c3a99b10261af7636f4be1bd284cb4c_list, 0, const_str_plain_eqp_kktfact ); Py_INCREF( const_str_plain_eqp_kktfact );
    const_str_plain_sphere_intersections = UNSTREAM_STRING_ASCII( &constant_bin[ 5095788 ], 20, 1 );
    PyList_SET_ITEM( const_list_0c3a99b10261af7636f4be1bd284cb4c_list, 1, const_str_plain_sphere_intersections ); Py_INCREF( const_str_plain_sphere_intersections );
    PyList_SET_ITEM( const_list_0c3a99b10261af7636f4be1bd284cb4c_list, 2, const_str_plain_box_intersections ); Py_INCREF( const_str_plain_box_intersections );
    const_str_plain_box_sphere_intersections = UNSTREAM_STRING_ASCII( &constant_bin[ 5095808 ], 24, 1 );
    PyList_SET_ITEM( const_list_0c3a99b10261af7636f4be1bd284cb4c_list, 3, const_str_plain_box_sphere_intersections ); Py_INCREF( const_str_plain_box_sphere_intersections );
    const_str_plain_inside_box_boundaries = UNSTREAM_STRING_ASCII( &constant_bin[ 5095832 ], 21, 1 );
    PyList_SET_ITEM( const_list_0c3a99b10261af7636f4be1bd284cb4c_list, 4, const_str_plain_inside_box_boundaries ); Py_INCREF( const_str_plain_inside_box_boundaries );
    PyList_SET_ITEM( const_list_0c3a99b10261af7636f4be1bd284cb4c_list, 5, const_str_plain_modified_dogleg ); Py_INCREF( const_str_plain_modified_dogleg );
    PyList_SET_ITEM( const_list_0c3a99b10261af7636f4be1bd284cb4c_list, 6, const_str_plain_projected_cg ); Py_INCREF( const_str_plain_projected_cg );
    const_str_digest_77591f2e62628f9f8e80948a4120323e = UNSTREAM_STRING_ASCII( &constant_bin[ 5095853 ], 25, 0 );
    const_str_plain_origin_point = UNSTREAM_STRING_ASCII( &constant_bin[ 5095878 ], 12, 1 );
    const_str_digest_8cc4fb5cfacca949900cccf6fc60a09e = UNSTREAM_STRING_ASCII( &constant_bin[ 5095890 ], 57, 0 );
    const_str_plain_tb_s = UNSTREAM_STRING_ASCII( &constant_bin[ 5095947 ], 4, 1 );
    const_str_plain_sphere_info = UNSTREAM_STRING_ASCII( &constant_bin[ 5095951 ], 11, 1 );
    const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple, 0, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple, 2, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple, 3, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    const_str_plain_entire_line = UNSTREAM_STRING_ASCII( &constant_bin[ 5095962 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple, 4, const_str_plain_entire_line ); Py_INCREF( const_str_plain_entire_line );
    const_str_plain_zero_d = UNSTREAM_STRING_ASCII( &constant_bin[ 2579450 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple, 5, const_str_plain_zero_d ); Py_INCREF( const_str_plain_zero_d );
    const_str_plain_intersect = UNSTREAM_STRING_ASCII( &constant_bin[ 940149 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple, 6, const_str_plain_intersect ); Py_INCREF( const_str_plain_intersect );
    const_str_plain_not_zero_d = UNSTREAM_STRING_ASCII( &constant_bin[ 5095973 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple, 7, const_str_plain_not_zero_d ); Py_INCREF( const_str_plain_not_zero_d );
    const_str_plain_t_lb = UNSTREAM_STRING_ASCII( &constant_bin[ 4725886 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple, 8, const_str_plain_t_lb ); Py_INCREF( const_str_plain_t_lb );
    const_str_plain_t_ub = UNSTREAM_STRING_ASCII( &constant_bin[ 4725895 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple, 9, const_str_plain_t_ub ); Py_INCREF( const_str_plain_t_ub );
    PyTuple_SET_ITEM( const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple, 10, const_str_plain_ta ); Py_INCREF( const_str_plain_ta );
    PyTuple_SET_ITEM( const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple, 11, const_str_plain_tb ); Py_INCREF( const_str_plain_tb );
    const_tuple_str_plain_linalg_str_plain_bmat_str_plain_csc_matrix_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_linalg_str_plain_bmat_str_plain_csc_matrix_tuple, 0, const_str_plain_linalg ); Py_INCREF( const_str_plain_linalg );
    PyTuple_SET_ITEM( const_tuple_str_plain_linalg_str_plain_bmat_str_plain_csc_matrix_tuple, 1, const_str_plain_bmat ); Py_INCREF( const_str_plain_bmat );
    PyTuple_SET_ITEM( const_tuple_str_plain_linalg_str_plain_bmat_str_plain_csc_matrix_tuple, 2, const_str_plain_csc_matrix ); Py_INCREF( const_str_plain_csc_matrix );
    const_dict_4dfb153181fa9d20811c6920b20cb8bf = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_4dfb153181fa9d20811c6920b20cb8bf, const_str_plain_entire_line, Py_True );
    assert( PyDict_Size( const_dict_4dfb153181fa9d20811c6920b20cb8bf ) == 1 );
    const_tuple_d7549175b868875e5a6d37de07e19b52_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 0, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 2, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 3, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 4, const_str_plain_trust_radius ); Py_INCREF( const_str_plain_trust_radius );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 5, const_str_plain_entire_line ); Py_INCREF( const_str_plain_entire_line );
    const_str_plain_extra_info = UNSTREAM_STRING_ASCII( &constant_bin[ 5095983 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 6, const_str_plain_extra_info ); Py_INCREF( const_str_plain_extra_info );
    const_str_plain_ta_b = UNSTREAM_STRING_ASCII( &constant_bin[ 772878 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 7, const_str_plain_ta_b ); Py_INCREF( const_str_plain_ta_b );
    const_str_plain_tb_b = UNSTREAM_STRING_ASCII( &constant_bin[ 5095993 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 8, const_str_plain_tb_b ); Py_INCREF( const_str_plain_tb_b );
    const_str_plain_intersect_b = UNSTREAM_STRING_ASCII( &constant_bin[ 5095997 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 9, const_str_plain_intersect_b ); Py_INCREF( const_str_plain_intersect_b );
    const_str_plain_ta_s = UNSTREAM_STRING_ASCII( &constant_bin[ 2609 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 10, const_str_plain_ta_s ); Py_INCREF( const_str_plain_ta_s );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 11, const_str_plain_tb_s ); Py_INCREF( const_str_plain_tb_s );
    const_str_plain_intersect_s = UNSTREAM_STRING_ASCII( &constant_bin[ 5096008 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 12, const_str_plain_intersect_s ); Py_INCREF( const_str_plain_intersect_s );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 13, const_str_plain_ta ); Py_INCREF( const_str_plain_ta );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 14, const_str_plain_tb ); Py_INCREF( const_str_plain_tb );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 15, const_str_plain_intersect ); Py_INCREF( const_str_plain_intersect );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 16, const_str_plain_sphere_info ); Py_INCREF( const_str_plain_sphere_info );
    const_str_plain_box_info = UNSTREAM_STRING_ASCII( &constant_bin[ 5096019 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 17, const_str_plain_box_info ); Py_INCREF( const_str_plain_box_info );
    const_str_digest_2a3c6f08f17d8e171fe5e6858bfe83ee = UNSTREAM_STRING_ASCII( &constant_bin[ 5096027 ], 46, 0 );
    const_str_plain_discriminant = UNSTREAM_STRING_ASCII( &constant_bin[ 5096073 ], 12, 1 );
    const_str_plain_reinforce_box_boundaries = UNSTREAM_STRING_ASCII( &constant_bin[ 5096085 ], 24, 1 );
    const_str_digest_7273c41be14e90588a900b3cadcba50c = UNSTREAM_STRING_ASCII( &constant_bin[ 5096109 ], 51, 0 );
    const_float_1eminus_25 = UNSTREAM_FLOAT( &constant_bin[ 5096160 ] );
    const_tuple_eb90a3127aeaa47a43fda733f6b0cdaf_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5096168 ], 294 );
    const_str_digest_606c04355fa450fae1dc3094c0a2b0ae = UNSTREAM_STRING_ASCII( &constant_bin[ 5096462 ], 2018, 0 );
    const_str_digest_ae30b5ed6718be83882dd52e5b4dada1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5098480 ], 718, 0 );
    const_str_digest_4ca9940868ffb7b6607526372839914f = UNSTREAM_STRING_ASCII( &constant_bin[ 5099198 ], 23, 0 );
    const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 1, const_str_plain_Y ); Py_INCREF( const_str_plain_Y );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 3, const_str_plain_trust_radius ); Py_INCREF( const_str_plain_trust_radius );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 4, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 5, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 6, const_str_plain_newton_point ); Py_INCREF( const_str_plain_newton_point );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 7, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 8, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    const_str_plain_A_g = UNSTREAM_STRING_ASCII( &constant_bin[ 5094385 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 9, const_str_plain_A_g ); Py_INCREF( const_str_plain_A_g );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 10, const_str_plain_cauchy_point ); Py_INCREF( const_str_plain_cauchy_point );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 11, const_str_plain_origin_point ); Py_INCREF( const_str_plain_origin_point );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 12, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 13, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 14, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 15, const_str_plain_alpha ); Py_INCREF( const_str_plain_alpha );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 16, const_str_plain_intersect ); Py_INCREF( const_str_plain_intersect );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 17, const_str_plain_x1 ); Py_INCREF( const_str_plain_x1 );
    PyTuple_SET_ITEM( const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 18, const_str_plain_x2 ); Py_INCREF( const_str_plain_x2 );
    const_str_digest_96c65eba12d002441284c4c0c54ec1a8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5099221 ], 57, 0 );
    const_str_digest_d09452476437838336ef85c20f5e2798 = UNSTREAM_STRING_ASCII( &constant_bin[ 5095898 ], 48, 0 );
    const_str_digest_8d968cced04fd40093fef48a76809a77 = UNSTREAM_STRING_ASCII( &constant_bin[ 5099278 ], 3235, 0 );
    const_str_digest_6992e9966002e103f5b93f52a6fbb633 = UNSTREAM_STRING_ASCII( &constant_bin[ 5102513 ], 1859, 0 );
    const_str_digest_07b5a8a2cf98ad82e12c0f2977245793 = UNSTREAM_STRING_ASCII( &constant_bin[ 5104372 ], 1080, 0 );
    const_str_digest_6bf8b1b8e4ee9fa66a6506e3921f5f91 = UNSTREAM_STRING_ASCII( &constant_bin[ 5105452 ], 1317, 0 );
    const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 0, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 2, const_str_plain_trust_radius ); Py_INCREF( const_str_plain_trust_radius );
    PyTuple_SET_ITEM( const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 3, const_str_plain_entire_line ); Py_INCREF( const_str_plain_entire_line );
    PyTuple_SET_ITEM( const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 4, const_str_plain_ta ); Py_INCREF( const_str_plain_ta );
    PyTuple_SET_ITEM( const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 5, const_str_plain_tb ); Py_INCREF( const_str_plain_tb );
    PyTuple_SET_ITEM( const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 6, const_str_plain_intersect ); Py_INCREF( const_str_plain_intersect );
    PyTuple_SET_ITEM( const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 7, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 8, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 9, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 10, const_str_plain_discriminant ); Py_INCREF( const_str_plain_discriminant );
    PyTuple_SET_ITEM( const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 11, const_str_plain_sqrt_discriminant ); Py_INCREF( const_str_plain_sqrt_discriminant );
    PyTuple_SET_ITEM( const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 12, const_str_plain_aux ); Py_INCREF( const_str_plain_aux );
    const_dict_e4eecd5312f97ebdcf17ee25172fb05e = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_e4eecd5312f97ebdcf17ee25172fb05e, const_str_plain_niter, const_int_0 );
    PyDict_SetItem( const_dict_e4eecd5312f97ebdcf17ee25172fb05e, const_str_plain_stop_cond, const_int_pos_2 );
    PyDict_SetItem( const_dict_e4eecd5312f97ebdcf17ee25172fb05e, const_str_plain_hits_boundary, Py_True );
    assert( PyDict_Size( const_dict_e4eecd5312f97ebdcf17ee25172fb05e ) == 3 );
    const_str_digest_3909a94a3182a6e823caad540343a5b1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5106769 ], 51, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_trustregion_constr$qp_subproblem( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a8bfd30bf46a2dde52b1036f502c43a4;
static PyCodeObject *codeobj_355a0b9b6b487cf199f6b2ae15c993ea;
static PyCodeObject *codeobj_4ac45f550ce5ee7082e2413b858efddc;
static PyCodeObject *codeobj_96a2600d6885b9af4f8374dc1f43ba22;
static PyCodeObject *codeobj_57469c5b6429216315e0d77831d6a3c8;
static PyCodeObject *codeobj_e87026034e19521fc476b273a70fdc21;
static PyCodeObject *codeobj_4970ddbb3f1fff539ebb29770691faee;
static PyCodeObject *codeobj_026d2846f9b950415f757bcab7f1da9c;
static PyCodeObject *codeobj_68efe24c6338864a15f01fbc6ed6465e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_3909a94a3182a6e823caad540343a5b1 );
    codeobj_a8bfd30bf46a2dde52b1036f502c43a4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8cc4fb5cfacca949900cccf6fc60a09e, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_355a0b9b6b487cf199f6b2ae15c993ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_box_intersections, 152, const_tuple_50fd003aca4ba9cf8bfd60d67dea1153_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4ac45f550ce5ee7082e2413b858efddc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_box_sphere_intersections, 237, const_tuple_d7549175b868875e5a6d37de07e19b52_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_96a2600d6885b9af4f8374dc1f43ba22 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_eqp_kktfact, 21, const_tuple_a7cc3470190672a73d371270c9260cf9_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_57469c5b6429216315e0d77831d6a3c8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_inside_box_boundaries, 306, const_tuple_str_plain_x_str_plain_lb_str_plain_ub_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e87026034e19521fc476b273a70fdc21 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_modified_dogleg, 316, const_tuple_ae1353cff3bc3a2f843b87f7a20bf300_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4970ddbb3f1fff539ebb29770691faee = MAKE_CODEOBJ( module_filename_obj, const_str_plain_projected_cg, 412, const_tuple_eb90a3127aeaa47a43fda733f6b0cdaf_tuple, 12, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_026d2846f9b950415f757bcab7f1da9c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reinforce_box_boundaries, 311, const_tuple_str_plain_x_str_plain_lb_str_plain_ub_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_68efe24c6338864a15f01fbc6ed6465e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sphere_intersections, 66, const_tuple_0df22998957167966aac2ceb3c6ef6d8_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_1_eqp_kktfact(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_2_sphere_intersections( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_3_box_intersections( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_4_box_sphere_intersections( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_5_inside_box_boundaries(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_6_reinforce_box_boundaries(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_7_modified_dogleg(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_8_projected_cg( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_1_eqp_kktfact( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_H = python_pars[ 0 ];
    PyObject *par_c = python_pars[ 1 ];
    PyObject *par_A = python_pars[ 2 ];
    PyObject *par_b = python_pars[ 3 ];
    PyObject *var_n = NULL;
    PyObject *var_m = NULL;
    PyObject *var_kkt_matrix = NULL;
    PyObject *var_kkt_vec = NULL;
    PyObject *var_lu = NULL;
    PyObject *var_kkt_sol = NULL;
    PyObject *var_x = NULL;
    PyObject *var_lagrange_multipliers = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_96a2600d6885b9af4f8374dc1f43ba22;
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
    static struct Nuitka_FrameObject *cache_frame_96a2600d6885b9af4f8374dc1f43ba22 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_96a2600d6885b9af4f8374dc1f43ba22, codeobj_96a2600d6885b9af4f8374dc1f43ba22, module_scipy$optimize$_trustregion_constr$qp_subproblem, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_96a2600d6885b9af4f8374dc1f43ba22 = cache_frame_96a2600d6885b9af4f8374dc1f43ba22;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_96a2600d6885b9af4f8374dc1f43ba22 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_96a2600d6885b9af4f8374dc1f43ba22 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 45;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_1 = par_c;
        frame_96a2600d6885b9af4f8374dc1f43ba22->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_shape, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oooooooooooo";
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 45;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 45;
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

            type_description_1 = "oooooooooooo";
            exception_lineno = 45;
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
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_n = tmp_assign_source_3;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 46;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_2 = par_b;
        frame_96a2600d6885b9af4f8374dc1f43ba22->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_shape, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oooooooooooo";
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 46;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 46;
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

            type_description_1 = "oooooooooooo";
            exception_lineno = 46;
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
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_m = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_list_element_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_list_element_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_csc_matrix );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 51;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_bmat );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bmat );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bmat" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 51;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_H );
        tmp_list_element_2 = par_H;
        tmp_list_element_1 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_list_element_1, 0, tmp_list_element_2 );
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_T );
        if ( tmp_list_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_list_element_1 );

            exception_lineno = 51;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_list_element_1, 1, tmp_list_element_2 );
        tmp_args_element_name_4 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_args_element_name_4, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_A );
        tmp_list_element_3 = par_A;
        tmp_list_element_1 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_3 );
        PyList_SET_ITEM( tmp_list_element_1, 0, tmp_list_element_3 );
        tmp_list_element_3 = Py_None;
        Py_INCREF( tmp_list_element_3 );
        PyList_SET_ITEM( tmp_list_element_1, 1, tmp_list_element_3 );
        PyList_SET_ITEM( tmp_args_element_name_4, 1, tmp_list_element_1 );
        frame_96a2600d6885b9af4f8374dc1f43ba22->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96a2600d6885b9af4f8374dc1f43ba22->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_kkt_matrix == NULL );
        var_kkt_matrix = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_list_element_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 53;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_5;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hstack );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c );
        tmp_operand_name_1 = par_c;
        tmp_list_element_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_list_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 53;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_args_element_name_5, 0, tmp_list_element_4 );
        CHECK_OBJECT( par_b );
        tmp_operand_name_2 = par_b;
        tmp_list_element_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        if ( tmp_list_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 53;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_5, 1, tmp_list_element_4 );
        frame_96a2600d6885b9af4f8374dc1f43ba22->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_kkt_vec == NULL );
        var_kkt_vec = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_linalg );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linalg );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "linalg" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 58;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_6;
        CHECK_OBJECT( var_kkt_matrix );
        tmp_args_element_name_6 = var_kkt_matrix;
        frame_96a2600d6885b9af4f8374dc1f43ba22->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_splu, call_args );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lu == NULL );
        var_lu = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_lu );
        tmp_called_instance_4 = var_lu;
        CHECK_OBJECT( var_kkt_vec );
        tmp_args_element_name_7 = var_kkt_vec;
        frame_96a2600d6885b9af4f8374dc1f43ba22->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_solve, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_kkt_sol == NULL );
        var_kkt_sol = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_kkt_sol );
        tmp_subscribed_name_1 = var_kkt_sol;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_stop_name_1 = var_n;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( var_kkt_sol );
        tmp_subscribed_name_2 = var_kkt_sol;
        CHECK_OBJECT( var_n );
        tmp_start_name_2 = var_n;
        CHECK_OBJECT( var_n );
        tmp_left_name_1 = var_n;
        CHECK_OBJECT( var_m );
        tmp_right_name_1 = var_m;
        tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_operand_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lagrange_multipliers == NULL );
        var_lagrange_multipliers = tmp_assign_source_12;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_96a2600d6885b9af4f8374dc1f43ba22 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_96a2600d6885b9af4f8374dc1f43ba22 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_96a2600d6885b9af4f8374dc1f43ba22, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_96a2600d6885b9af4f8374dc1f43ba22->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_96a2600d6885b9af4f8374dc1f43ba22, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_96a2600d6885b9af4f8374dc1f43ba22,
        type_description_1,
        par_H,
        par_c,
        par_A,
        par_b,
        var_n,
        var_m,
        var_kkt_matrix,
        var_kkt_vec,
        var_lu,
        var_kkt_sol,
        var_x,
        var_lagrange_multipliers
    );


    // Release cached frame.
    if ( frame_96a2600d6885b9af4f8374dc1f43ba22 == cache_frame_96a2600d6885b9af4f8374dc1f43ba22 )
    {
        Py_DECREF( frame_96a2600d6885b9af4f8374dc1f43ba22 );
    }
    cache_frame_96a2600d6885b9af4f8374dc1f43ba22 = NULL;

    assertFrameObject( frame_96a2600d6885b9af4f8374dc1f43ba22 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_x );
        tmp_tuple_element_1 = var_x;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_lagrange_multipliers );
        tmp_tuple_element_1 = var_lagrange_multipliers;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_1_eqp_kktfact );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_H );
    Py_DECREF( par_H );
    par_H = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_kkt_matrix );
    Py_DECREF( var_kkt_matrix );
    var_kkt_matrix = NULL;

    CHECK_OBJECT( (PyObject *)var_kkt_vec );
    Py_DECREF( var_kkt_vec );
    var_kkt_vec = NULL;

    CHECK_OBJECT( (PyObject *)var_lu );
    Py_DECREF( var_lu );
    var_lu = NULL;

    CHECK_OBJECT( (PyObject *)var_kkt_sol );
    Py_DECREF( var_kkt_sol );
    var_kkt_sol = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_lagrange_multipliers );
    Py_DECREF( var_lagrange_multipliers );
    var_lagrange_multipliers = NULL;

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

    CHECK_OBJECT( (PyObject *)par_H );
    Py_DECREF( par_H );
    par_H = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_kkt_matrix );
    var_kkt_matrix = NULL;

    Py_XDECREF( var_kkt_vec );
    var_kkt_vec = NULL;

    Py_XDECREF( var_lu );
    var_lu = NULL;

    Py_XDECREF( var_kkt_sol );
    var_kkt_sol = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_1_eqp_kktfact );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_2_sphere_intersections( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *par_trust_radius = python_pars[ 2 ];
    PyObject *par_entire_line = python_pars[ 3 ];
    PyObject *var_ta = NULL;
    PyObject *var_tb = NULL;
    nuitka_bool var_intersect = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *var_c = NULL;
    PyObject *var_discriminant = NULL;
    PyObject *var_sqrt_discriminant = NULL;
    PyObject *var_aux = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_68efe24c6338864a15f01fbc6ed6465e;
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
    static struct Nuitka_FrameObject *cache_frame_68efe24c6338864a15f01fbc6ed6465e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_68efe24c6338864a15f01fbc6ed6465e, codeobj_68efe24c6338864a15f01fbc6ed6465e, module_scipy$optimize$_trustregion_constr$qp_subproblem, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_68efe24c6338864a15f01fbc6ed6465e = cache_frame_68efe24c6338864a15f01fbc6ed6465e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_68efe24c6338864a15f01fbc6ed6465e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_68efe24c6338864a15f01fbc6ed6465e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_d );
        tmp_args_element_name_1 = par_d;
        frame_68efe24c6338864a15f01fbc6ed6465e->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooboooooo";
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
        tmp_return_value = const_tuple_int_0_int_0_false_tuple;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 102;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_trust_radius );
        tmp_args_element_name_2 = par_trust_radius;
        frame_68efe24c6338864a15f01fbc6ed6465e->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isinf, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 102;
            type_description_1 = "ooooooboooooo";
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
            nuitka_bool tmp_condition_result_3;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_entire_line );
            tmp_truth_name_2 = CHECK_IF_TRUE( par_entire_line );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "ooooooboooooo";
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
                PyObject *tmp_assign_source_1;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_source_name_1;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 104;
                    type_description_1 = "ooooooboooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_1 = tmp_mvar_value_3;
                tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
                if ( tmp_operand_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;
                    type_description_1 = "ooooooboooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
                Py_DECREF( tmp_operand_name_1 );
                if ( tmp_assign_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;
                    type_description_1 = "ooooooboooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_ta == NULL );
                var_ta = tmp_assign_source_1;
            }
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_source_name_2;
                PyObject *tmp_mvar_value_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 105;
                    type_description_1 = "ooooooboooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_2 = tmp_mvar_value_4;
                tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inf );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 105;
                    type_description_1 = "ooooooboooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_tb == NULL );
                var_tb = tmp_assign_source_2;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = const_int_0;
                assert( var_ta == NULL );
                Py_INCREF( tmp_assign_source_3 );
                var_ta = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = const_int_pos_1;
                assert( var_tb == NULL );
                Py_INCREF( tmp_assign_source_4 );
                var_tb = tmp_assign_source_4;
            }
            branch_end_3:;
        }
        {
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( var_ta );
            tmp_tuple_element_1 = var_ta;
            tmp_return_value = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_tb );
            tmp_tuple_element_1 = var_tb;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            tmp_tuple_element_1 = Py_True;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 112;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        CHECK_OBJECT( par_d );
        tmp_args_element_name_3 = par_d;
        CHECK_OBJECT( par_d );
        tmp_args_element_name_4 = par_d;
        frame_68efe24c6338864a15f01fbc6ed6465e->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        assert( var_a == NULL );
        var_a = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_left_name_1 = const_int_pos_2;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 113;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_6;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_5 = par_z;
        CHECK_OBJECT( par_d );
        tmp_args_element_name_6 = par_d;
        frame_68efe24c6338864a15f01fbc6ed6465e->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        assert( var_b == NULL );
        var_b = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 114;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_7;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_7 = par_z;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_8 = par_z;
        frame_68efe24c6338864a15f01fbc6ed6465e->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_left_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_trust_radius );
        tmp_left_name_3 = par_trust_radius;
        tmp_right_name_3 = const_int_pos_2;
        tmp_right_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 114;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        assert( var_c == NULL );
        var_c = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_b );
        tmp_left_name_5 = var_b;
        CHECK_OBJECT( var_b );
        tmp_right_name_4 = var_b;
        tmp_left_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = const_int_pos_4;
        CHECK_OBJECT( var_a );
        tmp_right_name_6 = var_a;
        tmp_left_name_6 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_7, tmp_right_name_6 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 115;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_c );
        tmp_right_name_7 = var_c;
        tmp_right_name_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 115;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        assert( var_discriminant == NULL );
        var_discriminant = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_discriminant );
        tmp_compexpr_left_2 = var_discriminant;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooooboooooo";
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
        tmp_return_value = const_tuple_int_0_int_0_false_tuple;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 119;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_8;
        CHECK_OBJECT( var_discriminant );
        tmp_args_element_name_9 = var_discriminant;
        frame_68efe24c6338864a15f01fbc6ed6465e->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_sqrt, call_args );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sqrt_discriminant == NULL );
        var_sqrt_discriminant = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( var_b );
        tmp_left_name_8 = var_b;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_copysign );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copysign );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "copysign" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 128;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_9;
        CHECK_OBJECT( var_sqrt_discriminant );
        tmp_args_element_name_10 = var_sqrt_discriminant;
        CHECK_OBJECT( var_b );
        tmp_args_element_name_11 = var_b;
        frame_68efe24c6338864a15f01fbc6ed6465e->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_right_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        assert( var_aux == NULL );
        var_aux = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_9;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( var_aux );
        tmp_operand_name_2 = var_aux;
        tmp_left_name_9 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_10 = const_int_pos_2;
        CHECK_OBJECT( var_a );
        tmp_right_name_10 = var_a;
        tmp_right_name_9 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 129;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ta == NULL );
        var_ta = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        tmp_left_name_12 = const_int_neg_2;
        CHECK_OBJECT( var_c );
        tmp_right_name_11 = var_c;
        tmp_left_name_11 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_12, tmp_right_name_11 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_aux );
        tmp_right_name_12 = var_aux;
        tmp_assign_source_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_11 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tb == NULL );
        var_tb = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_list_element_1;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_sorted );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( var_ta );
        tmp_list_element_1 = var_ta;
        tmp_args_element_name_12 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_12, 0, tmp_list_element_1 );
        CHECK_OBJECT( var_tb );
        tmp_list_element_1 = var_tb;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_12, 1, tmp_list_element_1 );
        frame_68efe24c6338864a15f01fbc6ed6465e->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooooboooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooooboooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "ooooooboooooo";
            exception_lineno = 131;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "ooooooboooooo";
            exception_lineno = 131;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_15;
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

                    type_description_1 = "ooooooboooooo";
                    exception_lineno = 131;
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

            type_description_1 = "ooooooboooooo";
            exception_lineno = 131;
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
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_ta;
            assert( old != NULL );
            var_ta = tmp_assign_source_16;
            Py_INCREF( var_ta );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_tb;
            assert( old != NULL );
            var_tb = tmp_assign_source_17;
            Py_INCREF( var_tb );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_entire_line );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_entire_line );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_assign_source_18;
            tmp_assign_source_18 = NUITKA_BOOL_TRUE;
            var_intersect = tmp_assign_source_18;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_tb );
            tmp_compexpr_left_3 = var_tb;
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooooooboooooo";
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
            CHECK_OBJECT( var_ta );
            tmp_compexpr_left_4 = var_ta;
            tmp_compexpr_right_4 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooooooboooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_6 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_6 = tmp_or_left_value_1;
            or_end_1:;
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
                nuitka_bool tmp_assign_source_19;
                tmp_assign_source_19 = NUITKA_BOOL_FALSE;
                var_intersect = tmp_assign_source_19;
            }
            {
                PyObject *tmp_assign_source_20;
                tmp_assign_source_20 = const_int_0;
                {
                    PyObject *old = var_ta;
                    assert( old != NULL );
                    var_ta = tmp_assign_source_20;
                    Py_INCREF( var_ta );
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_21;
                tmp_assign_source_21 = const_int_0;
                {
                    PyObject *old = var_tb;
                    assert( old != NULL );
                    var_tb = tmp_assign_source_21;
                    Py_INCREF( var_tb );
                    Py_DECREF( old );
                }

            }
            goto branch_end_6;
            branch_no_6:;
            {
                nuitka_bool tmp_assign_source_22;
                tmp_assign_source_22 = NUITKA_BOOL_TRUE;
                var_intersect = tmp_assign_source_22;
            }
            {
                PyObject *tmp_assign_source_23;
                PyObject *tmp_called_name_4;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_args_element_name_14;
                tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_max );
                assert( tmp_called_name_4 != NULL );
                tmp_args_element_name_13 = const_int_0;
                CHECK_OBJECT( var_ta );
                tmp_args_element_name_14 = var_ta;
                frame_68efe24c6338864a15f01fbc6ed6465e->m_frame.f_lineno = 146;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                if ( tmp_assign_source_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 146;
                    type_description_1 = "ooooooboooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_ta;
                    assert( old != NULL );
                    var_ta = tmp_assign_source_23;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_24;
                PyObject *tmp_called_name_5;
                PyObject *tmp_args_element_name_15;
                PyObject *tmp_args_element_name_16;
                tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_min );
                assert( tmp_called_name_5 != NULL );
                tmp_args_element_name_15 = const_int_pos_1;
                CHECK_OBJECT( var_tb );
                tmp_args_element_name_16 = var_tb;
                frame_68efe24c6338864a15f01fbc6ed6465e->m_frame.f_lineno = 147;
                {
                    PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                }

                if ( tmp_assign_source_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 147;
                    type_description_1 = "ooooooboooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_tb;
                    assert( old != NULL );
                    var_tb = tmp_assign_source_24;
                    Py_DECREF( old );
                }

            }
            branch_end_6:;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_tuple_element_2;
        if ( var_ta == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_ta;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        if ( var_tb == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tb" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_tb;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        if ( var_intersect == NUITKA_BOOL_UNASSIGNED )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "intersect" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_1 = "ooooooboooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = ( var_intersect == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_68efe24c6338864a15f01fbc6ed6465e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_68efe24c6338864a15f01fbc6ed6465e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_68efe24c6338864a15f01fbc6ed6465e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_68efe24c6338864a15f01fbc6ed6465e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_68efe24c6338864a15f01fbc6ed6465e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_68efe24c6338864a15f01fbc6ed6465e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_68efe24c6338864a15f01fbc6ed6465e,
        type_description_1,
        par_z,
        par_d,
        par_trust_radius,
        par_entire_line,
        var_ta,
        var_tb,
        (int)var_intersect,
        var_a,
        var_b,
        var_c,
        var_discriminant,
        var_sqrt_discriminant,
        var_aux
    );


    // Release cached frame.
    if ( frame_68efe24c6338864a15f01fbc6ed6465e == cache_frame_68efe24c6338864a15f01fbc6ed6465e )
    {
        Py_DECREF( frame_68efe24c6338864a15f01fbc6ed6465e );
    }
    cache_frame_68efe24c6338864a15f01fbc6ed6465e = NULL;

    assertFrameObject( frame_68efe24c6338864a15f01fbc6ed6465e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_2_sphere_intersections );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_radius );
    Py_DECREF( par_trust_radius );
    par_trust_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_entire_line );
    Py_DECREF( par_entire_line );
    par_entire_line = NULL;

    Py_XDECREF( var_ta );
    var_ta = NULL;

    Py_XDECREF( var_tb );
    var_tb = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_discriminant );
    var_discriminant = NULL;

    Py_XDECREF( var_sqrt_discriminant );
    var_sqrt_discriminant = NULL;

    Py_XDECREF( var_aux );
    var_aux = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_radius );
    Py_DECREF( par_trust_radius );
    par_trust_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_entire_line );
    Py_DECREF( par_entire_line );
    par_entire_line = NULL;

    Py_XDECREF( var_ta );
    var_ta = NULL;

    Py_XDECREF( var_tb );
    var_tb = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_discriminant );
    var_discriminant = NULL;

    Py_XDECREF( var_sqrt_discriminant );
    var_sqrt_discriminant = NULL;

    Py_XDECREF( var_aux );
    var_aux = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_2_sphere_intersections );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_3_box_intersections( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *par_lb = python_pars[ 2 ];
    PyObject *par_ub = python_pars[ 3 ];
    PyObject *par_entire_line = python_pars[ 4 ];
    PyObject *var_zero_d = NULL;
    nuitka_bool var_intersect = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_not_zero_d = NULL;
    PyObject *var_t_lb = NULL;
    PyObject *var_t_ub = NULL;
    PyObject *var_ta = NULL;
    PyObject *var_tb = NULL;
    struct Nuitka_FrameObject *frame_355a0b9b6b487cf199f6b2ae15c993ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_355a0b9b6b487cf199f6b2ae15c993ea = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_355a0b9b6b487cf199f6b2ae15c993ea, codeobj_355a0b9b6b487cf199f6b2ae15c993ea, module_scipy$optimize$_trustregion_constr$qp_subproblem, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_355a0b9b6b487cf199f6b2ae15c993ea = cache_frame_355a0b9b6b487cf199f6b2ae15c993ea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_355a0b9b6b487cf199f6b2ae15c993ea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_355a0b9b6b487cf199f6b2ae15c993ea ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 189;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_z;
            assert( old != NULL );
            par_z = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 190;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_d );
        tmp_args_element_name_2 = par_d;
        frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_d;
            assert( old != NULL );
            par_d = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 191;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_3 = par_lb;
        frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_lb;
            assert( old != NULL );
            par_lb = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 192;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_4 = par_ub;
        frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ub;
            assert( old != NULL );
            par_ub = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 194;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_5;
        CHECK_OBJECT( par_d );
        tmp_args_element_name_5 = par_d;
        frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooooobooooo";
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
        tmp_return_value = const_tuple_int_0_int_0_false_tuple;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_d );
        tmp_compexpr_left_2 = par_d;
        tmp_compexpr_right_2 = const_int_0;
        tmp_assign_source_5 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        assert( var_zero_d == NULL );
        var_zero_d = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_z );
        tmp_subscribed_name_1 = par_z;
        CHECK_OBJECT( var_zero_d );
        tmp_subscript_name_1 = var_zero_d;
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_lb );
        tmp_subscribed_name_2 = par_lb;
        CHECK_OBJECT( var_zero_d );
        tmp_subscript_name_2 = var_zero_d;
        tmp_compexpr_right_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 201;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 201;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_any );
        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 201;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_z );
        tmp_subscribed_name_3 = par_z;
        CHECK_OBJECT( var_zero_d );
        tmp_subscript_name_3 = var_zero_d;
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ub );
        tmp_subscribed_name_4 = par_ub;
        CHECK_OBJECT( var_zero_d );
        tmp_subscript_name_4 = var_zero_d;
        tmp_compexpr_right_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 201;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 201;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_any );
        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 201;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
        tmp_return_value = const_tuple_int_0_int_0_false_tuple;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 205;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = tmp_mvar_value_6;
        CHECK_OBJECT( var_zero_d );
        tmp_args_element_name_6 = var_zero_d;
        frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_logical_not, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        assert( var_not_zero_d == NULL );
        var_not_zero_d = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( par_z );
        tmp_subscribed_name_5 = par_z;
        CHECK_OBJECT( var_not_zero_d );
        tmp_subscript_name_5 = var_not_zero_d;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_z;
            assert( old != NULL );
            par_z = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT( par_d );
        tmp_subscribed_name_6 = par_d;
        CHECK_OBJECT( var_not_zero_d );
        tmp_subscript_name_6 = var_not_zero_d;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_d;
            assert( old != NULL );
            par_d = tmp_assign_source_8;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT( par_lb );
        tmp_subscribed_name_7 = par_lb;
        CHECK_OBJECT( var_not_zero_d );
        tmp_subscript_name_7 = var_not_zero_d;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_lb;
            assert( old != NULL );
            par_lb = tmp_assign_source_9;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT( par_ub );
        tmp_subscribed_name_8 = par_ub;
        CHECK_OBJECT( var_not_zero_d );
        tmp_subscript_name_8 = var_not_zero_d;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ub;
            assert( old != NULL );
            par_ub = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_lb );
        tmp_left_name_2 = par_lb;
        CHECK_OBJECT( par_z );
        tmp_right_name_1 = par_z;
        tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_d );
        tmp_right_name_2 = par_d;
        tmp_assign_source_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        assert( var_t_lb == NULL );
        var_t_lb = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_ub );
        tmp_left_name_4 = par_ub;
        CHECK_OBJECT( par_z );
        tmp_right_name_3 = par_z;
        tmp_left_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_d );
        tmp_right_name_4 = par_d;
        tmp_assign_source_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        assert( var_t_ub == NULL );
        var_t_ub = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_2 != NULL );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 215;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_7;
        CHECK_OBJECT( var_t_lb );
        tmp_args_element_name_8 = var_t_lb;
        CHECK_OBJECT( var_t_ub );
        tmp_args_element_name_9 = var_t_ub;
        frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_args_element_name_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_minimum, call_args );
        }

        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ta == NULL );
        var_ta = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_3 != NULL );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 216;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = tmp_mvar_value_8;
        CHECK_OBJECT( var_t_lb );
        tmp_args_element_name_11 = var_t_lb;
        CHECK_OBJECT( var_t_ub );
        tmp_args_element_name_12 = var_t_ub;
        frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_args_element_name_10 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_9, const_str_plain_maximum, call_args );
        }

        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tb == NULL );
        var_tb = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_ta );
        tmp_compexpr_left_5 = var_ta;
        CHECK_OBJECT( var_tb );
        tmp_compexpr_right_5 = var_tb;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oooooobooooo";
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
            nuitka_bool tmp_assign_source_15;
            tmp_assign_source_15 = NUITKA_BOOL_TRUE;
            var_intersect = tmp_assign_source_15;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_assign_source_16;
            tmp_assign_source_16 = NUITKA_BOOL_FALSE;
            var_intersect = tmp_assign_source_16;
        }
        branch_end_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_entire_line );
        tmp_operand_name_1 = par_entire_line;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oooooobooooo";
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
            nuitka_bool tmp_condition_result_5;
            int tmp_or_left_truth_2;
            nuitka_bool tmp_or_left_value_2;
            nuitka_bool tmp_or_right_value_2;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( var_tb );
            tmp_compexpr_left_6 = var_tb;
            tmp_compexpr_right_6 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 225;
                type_description_1 = "oooooobooooo";
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
            CHECK_OBJECT( var_ta );
            tmp_compexpr_left_7 = var_ta;
            tmp_compexpr_right_7 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 225;
                type_description_1 = "oooooobooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_5 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_condition_result_5 = tmp_or_left_value_2;
            or_end_2:;
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
                nuitka_bool tmp_assign_source_17;
                tmp_assign_source_17 = NUITKA_BOOL_FALSE;
                var_intersect = tmp_assign_source_17;
            }
            {
                PyObject *tmp_assign_source_18;
                tmp_assign_source_18 = const_int_0;
                {
                    PyObject *old = var_ta;
                    assert( old != NULL );
                    var_ta = tmp_assign_source_18;
                    Py_INCREF( var_ta );
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_19;
                tmp_assign_source_19 = const_int_0;
                {
                    PyObject *old = var_tb;
                    assert( old != NULL );
                    var_tb = tmp_assign_source_19;
                    Py_INCREF( var_tb );
                    Py_DECREF( old );
                }

            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_assign_source_20;
                PyObject *tmp_called_name_4;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_args_element_name_14;
                tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_max );
                assert( tmp_called_name_4 != NULL );
                tmp_args_element_name_13 = const_int_0;
                CHECK_OBJECT( var_ta );
                tmp_args_element_name_14 = var_ta;
                frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 231;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                if ( tmp_assign_source_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 231;
                    type_description_1 = "oooooobooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_ta;
                    assert( old != NULL );
                    var_ta = tmp_assign_source_20;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_21;
                PyObject *tmp_called_name_5;
                PyObject *tmp_args_element_name_15;
                PyObject *tmp_args_element_name_16;
                tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_min );
                assert( tmp_called_name_5 != NULL );
                tmp_args_element_name_15 = const_int_pos_1;
                CHECK_OBJECT( var_tb );
                tmp_args_element_name_16 = var_tb;
                frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame.f_lineno = 232;
                {
                    PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                }

                if ( tmp_assign_source_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 232;
                    type_description_1 = "oooooobooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_tb;
                    assert( old != NULL );
                    var_tb = tmp_assign_source_21;
                    Py_DECREF( old );
                }

            }
            branch_end_5:;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_tuple_element_1;
        if ( var_ta == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 234;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_ta;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( var_tb == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tb" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 234;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_tb;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        if ( var_intersect == NUITKA_BOOL_UNASSIGNED )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "intersect" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 234;
            type_description_1 = "oooooobooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = ( var_intersect == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_355a0b9b6b487cf199f6b2ae15c993ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_355a0b9b6b487cf199f6b2ae15c993ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_355a0b9b6b487cf199f6b2ae15c993ea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_355a0b9b6b487cf199f6b2ae15c993ea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_355a0b9b6b487cf199f6b2ae15c993ea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_355a0b9b6b487cf199f6b2ae15c993ea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_355a0b9b6b487cf199f6b2ae15c993ea,
        type_description_1,
        par_z,
        par_d,
        par_lb,
        par_ub,
        par_entire_line,
        var_zero_d,
        (int)var_intersect,
        var_not_zero_d,
        var_t_lb,
        var_t_ub,
        var_ta,
        var_tb
    );


    // Release cached frame.
    if ( frame_355a0b9b6b487cf199f6b2ae15c993ea == cache_frame_355a0b9b6b487cf199f6b2ae15c993ea )
    {
        Py_DECREF( frame_355a0b9b6b487cf199f6b2ae15c993ea );
    }
    cache_frame_355a0b9b6b487cf199f6b2ae15c993ea = NULL;

    assertFrameObject( frame_355a0b9b6b487cf199f6b2ae15c993ea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_3_box_intersections );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_entire_line );
    Py_DECREF( par_entire_line );
    par_entire_line = NULL;

    Py_XDECREF( var_zero_d );
    var_zero_d = NULL;

    Py_XDECREF( var_not_zero_d );
    var_not_zero_d = NULL;

    Py_XDECREF( var_t_lb );
    var_t_lb = NULL;

    Py_XDECREF( var_t_ub );
    var_t_ub = NULL;

    Py_XDECREF( var_ta );
    var_ta = NULL;

    Py_XDECREF( var_tb );
    var_tb = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_entire_line );
    Py_DECREF( par_entire_line );
    par_entire_line = NULL;

    Py_XDECREF( var_zero_d );
    var_zero_d = NULL;

    Py_XDECREF( var_not_zero_d );
    var_not_zero_d = NULL;

    Py_XDECREF( var_t_lb );
    var_t_lb = NULL;

    Py_XDECREF( var_t_ub );
    var_t_ub = NULL;

    Py_XDECREF( var_ta );
    var_ta = NULL;

    Py_XDECREF( var_tb );
    var_tb = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_3_box_intersections );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_4_box_sphere_intersections( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *par_lb = python_pars[ 2 ];
    PyObject *par_ub = python_pars[ 3 ];
    PyObject *par_trust_radius = python_pars[ 4 ];
    PyObject *par_entire_line = python_pars[ 5 ];
    PyObject *par_extra_info = python_pars[ 6 ];
    PyObject *var_ta_b = NULL;
    PyObject *var_tb_b = NULL;
    PyObject *var_intersect_b = NULL;
    PyObject *var_ta_s = NULL;
    PyObject *var_tb_s = NULL;
    PyObject *var_intersect_s = NULL;
    PyObject *var_ta = NULL;
    PyObject *var_tb = NULL;
    nuitka_bool var_intersect = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_sphere_info = NULL;
    PyObject *var_box_info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4ac45f550ce5ee7082e2413b858efddc;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4ac45f550ce5ee7082e2413b858efddc = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ac45f550ce5ee7082e2413b858efddc, codeobj_4ac45f550ce5ee7082e2413b858efddc, module_scipy$optimize$_trustregion_constr$qp_subproblem, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4ac45f550ce5ee7082e2413b858efddc = cache_frame_4ac45f550ce5ee7082e2413b858efddc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ac45f550ce5ee7082e2413b858efddc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ac45f550ce5ee7082e2413b858efddc ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_box_intersections );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_box_intersections );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "box_intersections" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooboo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        CHECK_OBJECT( par_d );
        tmp_args_element_name_2 = par_d;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_3 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_4 = par_ub;
        CHECK_OBJECT( par_entire_line );
        tmp_args_element_name_5 = par_entire_line;
        frame_4ac45f550ce5ee7082e2413b858efddc->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "oooooooooooooooboo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "oooooooooooooooboo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


            type_description_1 = "oooooooooooooooboo";
            exception_lineno = 286;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "oooooooooooooooboo";
            exception_lineno = 286;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


            type_description_1 = "oooooooooooooooboo";
            exception_lineno = 286;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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

                    type_description_1 = "oooooooooooooooboo";
                    exception_lineno = 286;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooooooboo";
            exception_lineno = 286;
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
        assert( var_ta_b == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_ta_b = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_tb_b == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_tb_b = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert( var_intersect_b == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_intersect_b = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_sphere_intersections );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sphere_intersections );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sphere_intersections" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 288;
            type_description_1 = "oooooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_6 = par_z;
        CHECK_OBJECT( par_d );
        tmp_args_element_name_7 = par_d;
        CHECK_OBJECT( par_trust_radius );
        tmp_args_element_name_8 = par_trust_radius;
        CHECK_OBJECT( par_entire_line );
        tmp_args_element_name_9 = par_entire_line;
        frame_4ac45f550ce5ee7082e2413b858efddc->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooboo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_4, 0, 3 );
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


            type_description_1 = "oooooooooooooooboo";
            exception_lineno = 288;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_5, 1, 3 );
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


            type_description_1 = "oooooooooooooooboo";
            exception_lineno = 288;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_6, 2, 3 );
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


            type_description_1 = "oooooooooooooooboo";
            exception_lineno = 288;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_11;
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

                    type_description_1 = "oooooooooooooooboo";
                    exception_lineno = 288;
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

            type_description_1 = "oooooooooooooooboo";
            exception_lineno = 288;
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
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
        assert( var_ta_s == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_ta_s = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        assert( var_tb_s == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_tb_s = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_3;
        assert( var_intersect_s == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_intersect_s = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 291;
            type_description_1 = "oooooooooooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_ta_b );
        tmp_args_element_name_10 = var_ta_b;
        CHECK_OBJECT( var_ta_s );
        tmp_args_element_name_11 = var_ta_s;
        frame_4ac45f550ce5ee7082e2413b858efddc->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_15 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_maximum, call_args );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooboo";
            goto frame_exception_exit_1;
        }
        assert( var_ta == NULL );
        var_ta = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 292;
            type_description_1 = "oooooooooooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_tb_b );
        tmp_args_element_name_12 = var_tb_b;
        CHECK_OBJECT( var_tb_s );
        tmp_args_element_name_13 = var_tb_s;
        frame_4ac45f550ce5ee7082e2413b858efddc->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_assign_source_16 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_minimum, call_args );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "oooooooooooooooboo";
            goto frame_exception_exit_1;
        }
        assert( var_tb == NULL );
        var_tb = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_intersect_b );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_intersect_b );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_intersect_s );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_intersect_s );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooboo";
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
        CHECK_OBJECT( var_ta );
        tmp_compexpr_left_1 = var_ta;
        CHECK_OBJECT( var_tb );
        tmp_compexpr_right_1 = var_tb;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_assign_source_17;
            tmp_assign_source_17 = NUITKA_BOOL_TRUE;
            var_intersect = tmp_assign_source_17;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_assign_source_18;
            tmp_assign_source_18 = NUITKA_BOOL_FALSE;
            var_intersect = tmp_assign_source_18;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_extra_info );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_extra_info );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooboo";
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
            PyObject *tmp_assign_source_19;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_1 = const_str_plain_ta;
            CHECK_OBJECT( var_ta_s );
            tmp_dict_value_1 = var_ta_s;
            tmp_assign_source_19 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_tb;
            CHECK_OBJECT( var_tb_s );
            tmp_dict_value_2 = var_tb_s;
            tmp_res = PyDict_SetItem( tmp_assign_source_19, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_intersect;
            CHECK_OBJECT( var_intersect_s );
            tmp_dict_value_3 = var_intersect_s;
            tmp_res = PyDict_SetItem( tmp_assign_source_19, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            assert( var_sphere_info == NULL );
            var_sphere_info = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_dict_key_4 = const_str_plain_ta;
            CHECK_OBJECT( var_ta_b );
            tmp_dict_value_4 = var_ta_b;
            tmp_assign_source_20 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_tb;
            CHECK_OBJECT( var_tb_b );
            tmp_dict_value_5 = var_tb_b;
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_6 = const_str_plain_intersect;
            CHECK_OBJECT( var_intersect_b );
            tmp_dict_value_6 = var_intersect_b;
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            assert( var_box_info == NULL );
            var_box_info = tmp_assign_source_20;
        }
        {
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( var_ta );
            tmp_tuple_element_1 = var_ta;
            tmp_return_value = PyTuple_New( 5 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_tb );
            tmp_tuple_element_1 = var_tb;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            assert( var_intersect != NUITKA_BOOL_UNASSIGNED);
            tmp_tuple_element_1 = ( var_intersect == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( var_sphere_info );
            tmp_tuple_element_1 = var_sphere_info;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
            CHECK_OBJECT( var_box_info );
            tmp_tuple_element_1 = var_box_info;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_tuple_element_2;
            CHECK_OBJECT( var_ta );
            tmp_tuple_element_2 = var_ta;
            tmp_return_value = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_tb );
            tmp_tuple_element_2 = var_tb;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            assert( var_intersect != NUITKA_BOOL_UNASSIGNED);
            tmp_tuple_element_2 = ( var_intersect == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ac45f550ce5ee7082e2413b858efddc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ac45f550ce5ee7082e2413b858efddc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ac45f550ce5ee7082e2413b858efddc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ac45f550ce5ee7082e2413b858efddc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ac45f550ce5ee7082e2413b858efddc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ac45f550ce5ee7082e2413b858efddc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ac45f550ce5ee7082e2413b858efddc,
        type_description_1,
        par_z,
        par_d,
        par_lb,
        par_ub,
        par_trust_radius,
        par_entire_line,
        par_extra_info,
        var_ta_b,
        var_tb_b,
        var_intersect_b,
        var_ta_s,
        var_tb_s,
        var_intersect_s,
        var_ta,
        var_tb,
        (int)var_intersect,
        var_sphere_info,
        var_box_info
    );


    // Release cached frame.
    if ( frame_4ac45f550ce5ee7082e2413b858efddc == cache_frame_4ac45f550ce5ee7082e2413b858efddc )
    {
        Py_DECREF( frame_4ac45f550ce5ee7082e2413b858efddc );
    }
    cache_frame_4ac45f550ce5ee7082e2413b858efddc = NULL;

    assertFrameObject( frame_4ac45f550ce5ee7082e2413b858efddc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_4_box_sphere_intersections );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_radius );
    Py_DECREF( par_trust_radius );
    par_trust_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_entire_line );
    Py_DECREF( par_entire_line );
    par_entire_line = NULL;

    CHECK_OBJECT( (PyObject *)par_extra_info );
    Py_DECREF( par_extra_info );
    par_extra_info = NULL;

    CHECK_OBJECT( (PyObject *)var_ta_b );
    Py_DECREF( var_ta_b );
    var_ta_b = NULL;

    CHECK_OBJECT( (PyObject *)var_tb_b );
    Py_DECREF( var_tb_b );
    var_tb_b = NULL;

    CHECK_OBJECT( (PyObject *)var_intersect_b );
    Py_DECREF( var_intersect_b );
    var_intersect_b = NULL;

    CHECK_OBJECT( (PyObject *)var_ta_s );
    Py_DECREF( var_ta_s );
    var_ta_s = NULL;

    CHECK_OBJECT( (PyObject *)var_tb_s );
    Py_DECREF( var_tb_s );
    var_tb_s = NULL;

    CHECK_OBJECT( (PyObject *)var_intersect_s );
    Py_DECREF( var_intersect_s );
    var_intersect_s = NULL;

    CHECK_OBJECT( (PyObject *)var_ta );
    Py_DECREF( var_ta );
    var_ta = NULL;

    CHECK_OBJECT( (PyObject *)var_tb );
    Py_DECREF( var_tb );
    var_tb = NULL;

    Py_XDECREF( var_sphere_info );
    var_sphere_info = NULL;

    Py_XDECREF( var_box_info );
    var_box_info = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_radius );
    Py_DECREF( par_trust_radius );
    par_trust_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_entire_line );
    Py_DECREF( par_entire_line );
    par_entire_line = NULL;

    CHECK_OBJECT( (PyObject *)par_extra_info );
    Py_DECREF( par_extra_info );
    par_extra_info = NULL;

    Py_XDECREF( var_ta_b );
    var_ta_b = NULL;

    Py_XDECREF( var_tb_b );
    var_tb_b = NULL;

    Py_XDECREF( var_intersect_b );
    var_intersect_b = NULL;

    Py_XDECREF( var_ta_s );
    var_ta_s = NULL;

    Py_XDECREF( var_tb_s );
    var_tb_s = NULL;

    Py_XDECREF( var_intersect_s );
    var_intersect_s = NULL;

    Py_XDECREF( var_ta );
    var_ta = NULL;

    Py_XDECREF( var_tb );
    var_tb = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_4_box_sphere_intersections );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_5_inside_box_boundaries( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_lb = python_pars[ 1 ];
    PyObject *par_ub = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_57469c5b6429216315e0d77831d6a3c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_57469c5b6429216315e0d77831d6a3c8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_57469c5b6429216315e0d77831d6a3c8, codeobj_57469c5b6429216315e0d77831d6a3c8, module_scipy$optimize$_trustregion_constr$qp_subproblem, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_57469c5b6429216315e0d77831d6a3c8 = cache_frame_57469c5b6429216315e0d77831d6a3c8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_57469c5b6429216315e0d77831d6a3c8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_57469c5b6429216315e0d77831d6a3c8 ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_lb );
        tmp_compexpr_left_1 = par_lb;
        CHECK_OBJECT( par_x );
        tmp_compexpr_right_1 = par_x;
        tmp_called_instance_1 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_57469c5b6429216315e0d77831d6a3c8->m_frame.f_lineno = 308;
        tmp_and_left_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_all );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 308;
            type_description_1 = "ooo";
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
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_2 = par_x;
        CHECK_OBJECT( par_ub );
        tmp_compexpr_right_2 = par_ub;
        tmp_called_instance_2 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_57469c5b6429216315e0d77831d6a3c8->m_frame.f_lineno = 308;
        tmp_and_right_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_all );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57469c5b6429216315e0d77831d6a3c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_57469c5b6429216315e0d77831d6a3c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57469c5b6429216315e0d77831d6a3c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_57469c5b6429216315e0d77831d6a3c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_57469c5b6429216315e0d77831d6a3c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_57469c5b6429216315e0d77831d6a3c8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_57469c5b6429216315e0d77831d6a3c8,
        type_description_1,
        par_x,
        par_lb,
        par_ub
    );


    // Release cached frame.
    if ( frame_57469c5b6429216315e0d77831d6a3c8 == cache_frame_57469c5b6429216315e0d77831d6a3c8 )
    {
        Py_DECREF( frame_57469c5b6429216315e0d77831d6a3c8 );
    }
    cache_frame_57469c5b6429216315e0d77831d6a3c8 = NULL;

    assertFrameObject( frame_57469c5b6429216315e0d77831d6a3c8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_5_inside_box_boundaries );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

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

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_5_inside_box_boundaries );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_6_reinforce_box_boundaries( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_lb = python_pars[ 1 ];
    PyObject *par_ub = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_026d2846f9b950415f757bcab7f1da9c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_026d2846f9b950415f757bcab7f1da9c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_026d2846f9b950415f757bcab7f1da9c, codeobj_026d2846f9b950415f757bcab7f1da9c, module_scipy$optimize$_trustregion_constr$qp_subproblem, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_026d2846f9b950415f757bcab7f1da9c = cache_frame_026d2846f9b950415f757bcab7f1da9c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_026d2846f9b950415f757bcab7f1da9c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_026d2846f9b950415f757bcab7f1da9c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_minimum );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_3 = par_lb;
        frame_026d2846f9b950415f757bcab7f1da9c->m_frame.f_lineno = 313;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_maximum, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_4 = par_ub;
        frame_026d2846f9b950415f757bcab7f1da9c->m_frame.f_lineno = 313;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_026d2846f9b950415f757bcab7f1da9c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_026d2846f9b950415f757bcab7f1da9c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_026d2846f9b950415f757bcab7f1da9c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_026d2846f9b950415f757bcab7f1da9c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_026d2846f9b950415f757bcab7f1da9c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_026d2846f9b950415f757bcab7f1da9c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_026d2846f9b950415f757bcab7f1da9c,
        type_description_1,
        par_x,
        par_lb,
        par_ub
    );


    // Release cached frame.
    if ( frame_026d2846f9b950415f757bcab7f1da9c == cache_frame_026d2846f9b950415f757bcab7f1da9c )
    {
        Py_DECREF( frame_026d2846f9b950415f757bcab7f1da9c );
    }
    cache_frame_026d2846f9b950415f757bcab7f1da9c = NULL;

    assertFrameObject( frame_026d2846f9b950415f757bcab7f1da9c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_6_reinforce_box_boundaries );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

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

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_6_reinforce_box_boundaries );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_7_modified_dogleg( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_Y = python_pars[ 1 ];
    PyObject *par_b = python_pars[ 2 ];
    PyObject *par_trust_radius = python_pars[ 3 ];
    PyObject *par_lb = python_pars[ 4 ];
    PyObject *par_ub = python_pars[ 5 ];
    PyObject *var_newton_point = NULL;
    PyObject *var_x = NULL;
    PyObject *var_g = NULL;
    PyObject *var_A_g = NULL;
    PyObject *var_cauchy_point = NULL;
    PyObject *var_origin_point = NULL;
    PyObject *var_z = NULL;
    PyObject *var_p = NULL;
    PyObject *var__ = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_intersect = NULL;
    PyObject *var_x1 = NULL;
    PyObject *var_x2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e87026034e19521fc476b273a70fdc21;
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
    static struct Nuitka_FrameObject *cache_frame_e87026034e19521fc476b273a70fdc21 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e87026034e19521fc476b273a70fdc21, codeobj_e87026034e19521fc476b273a70fdc21, module_scipy$optimize$_trustregion_constr$qp_subproblem, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e87026034e19521fc476b273a70fdc21 = cache_frame_e87026034e19521fc476b273a70fdc21;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e87026034e19521fc476b273a70fdc21 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e87026034e19521fc476b273a70fdc21 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_Y );
        tmp_called_instance_1 = par_Y;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_1 = par_b;
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_newton_point == NULL );
        var_newton_point = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_inside_box_boundaries );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inside_box_boundaries );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "inside_box_boundaries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_newton_point );
        tmp_args_element_name_2 = var_newton_point;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_3 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_4 = par_ub;
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 366;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_newton_point );
        tmp_args_element_name_5 = var_newton_point;
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_trust_radius );
        tmp_compexpr_right_1 = par_trust_radius;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
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
            PyObject *tmp_assign_source_2;
            CHECK_OBJECT( var_newton_point );
            tmp_assign_source_2 = var_newton_point;
            assert( var_x == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_x = tmp_assign_source_2;
        }
        CHECK_OBJECT( var_x );
        tmp_return_value = var_x;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_T );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_args_element_name_6 = par_b;
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 372;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_g == NULL );
        var_g = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_A );
        tmp_called_instance_3 = par_A;
        CHECK_OBJECT( var_g );
        tmp_args_element_name_7 = var_g;
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 375;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A_g == NULL );
        var_A_g = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_3;
        CHECK_OBJECT( var_g );
        tmp_args_element_name_8 = var_g;
        CHECK_OBJECT( var_g );
        tmp_args_element_name_9 = var_g;
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 376;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_operand_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_4;
        CHECK_OBJECT( var_A_g );
        tmp_args_element_name_10 = var_A_g;
        CHECK_OBJECT( var_A_g );
        tmp_args_element_name_11 = var_A_g;
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 376;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_g );
        tmp_right_name_2 = var_g;
        tmp_assign_source_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cauchy_point == NULL );
        var_cauchy_point = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 378;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_5;
        CHECK_OBJECT( var_cauchy_point );
        tmp_args_element_name_12 = var_cauchy_point;
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_zeros_like, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_origin_point == NULL );
        var_origin_point = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( var_cauchy_point );
        tmp_assign_source_7 = var_cauchy_point;
        assert( var_z == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_z = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_newton_point );
        tmp_left_name_3 = var_newton_point;
        CHECK_OBJECT( var_cauchy_point );
        tmp_right_name_3 = var_cauchy_point;
        tmp_assign_source_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p == NULL );
        var_p = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_box_sphere_intersections );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_box_sphere_intersections );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "box_sphere_intersections" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_6;
        CHECK_OBJECT( var_z );
        tmp_args_element_name_13 = var_z;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_14 = var_p;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_15 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_16 = par_ub;
        CHECK_OBJECT( par_trust_radius );
        tmp_args_element_name_17 = par_trust_radius;
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 384;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 384;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 384;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 384;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_12;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 384;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 384;
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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        assert( var__ == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var__ = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        assert( var_alpha == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_alpha = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_3;
        assert( var_intersect == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_intersect = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_intersect );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_intersect );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_16;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_z );
            tmp_left_name_4 = var_z;
            CHECK_OBJECT( var_alpha );
            tmp_left_name_5 = var_alpha;
            CHECK_OBJECT( var_p );
            tmp_right_name_5 = var_p;
            tmp_right_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 387;
                type_description_1 = "ooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 387;
                type_description_1 = "ooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_x1 == NULL );
            var_x1 = tmp_assign_source_16;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( var_origin_point );
            tmp_assign_source_17 = var_origin_point;
            {
                PyObject *old = var_z;
                assert( old != NULL );
                var_z = tmp_assign_source_17;
                Py_INCREF( var_z );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( var_cauchy_point );
            tmp_assign_source_18 = var_cauchy_point;
            {
                PyObject *old = var_p;
                assert( old != NULL );
                var_p = tmp_assign_source_18;
                Py_INCREF( var_p );
                Py_DECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_args_element_name_22;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_box_sphere_intersections );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_box_sphere_intersections );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "box_sphere_intersections" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 393;
                type_description_1 = "ooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_4 = tmp_mvar_value_7;
            CHECK_OBJECT( var_z );
            tmp_args_element_name_18 = var_z;
            CHECK_OBJECT( var_p );
            tmp_args_element_name_19 = var_p;
            CHECK_OBJECT( par_lb );
            tmp_args_element_name_20 = par_lb;
            CHECK_OBJECT( par_ub );
            tmp_args_element_name_21 = par_ub;
            CHECK_OBJECT( par_trust_radius );
            tmp_args_element_name_22 = par_trust_radius;
            frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 393;
            {
                PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_4, call_args );
            }

            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 393;
                type_description_1 = "ooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 393;
                type_description_1 = "ooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_19;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_4, 0, 3 );
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


                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 393;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_5, 1, 3 );
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


                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 393;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_6, 2, 3 );
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


                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 393;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_3 == NULL );
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_22;
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

                        type_description_1 = "ooooooooooooooooooo";
                        exception_lineno = 393;
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

                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 393;
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
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_23 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var__;
                assert( old != NULL );
                var__ = tmp_assign_source_23;
                Py_INCREF( var__ );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_24 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_alpha;
                assert( old != NULL );
                var_alpha = tmp_assign_source_24;
                Py_INCREF( var_alpha );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
            tmp_assign_source_25 = tmp_tuple_unpack_2__element_3;
            {
                PyObject *old = var__;
                assert( old != NULL );
                var__ = tmp_assign_source_25;
                Py_INCREF( var__ );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            CHECK_OBJECT( var_z );
            tmp_left_name_6 = var_z;
            CHECK_OBJECT( var_alpha );
            tmp_left_name_7 = var_alpha;
            CHECK_OBJECT( var_p );
            tmp_right_name_7 = var_p;
            tmp_right_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 395;
                type_description_1 = "ooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 395;
                type_description_1 = "ooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_x1 == NULL );
            var_x1 = tmp_assign_source_26;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( var_origin_point );
        tmp_assign_source_27 = var_origin_point;
        {
            PyObject *old = var_z;
            assert( old != NULL );
            var_z = tmp_assign_source_27;
            Py_INCREF( var_z );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( var_newton_point );
        tmp_assign_source_28 = var_newton_point;
        {
            PyObject *old = var_p;
            assert( old != NULL );
            var_p = tmp_assign_source_28;
            Py_INCREF( var_p );
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_box_sphere_intersections );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_box_sphere_intersections );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "box_sphere_intersections" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 401;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_5 = tmp_mvar_value_8;
        CHECK_OBJECT( var_z );
        tmp_args_element_name_23 = var_z;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_24 = var_p;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_25 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_26 = par_ub;
        CHECK_OBJECT( par_trust_radius );
        tmp_args_element_name_27 = par_trust_radius;
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 401;
        {
            PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_5, call_args );
        }

        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_29 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_3__source_iter == NULL );
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT( tmp_unpack_7, 0, 3 );
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 401;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_1 == NULL );
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_8, 1, 3 );
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 401;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_2 == NULL );
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_9, 2, 3 );
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 401;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_3 == NULL );
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_32;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 401;
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

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 401;
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
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_33 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_33;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_34 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_alpha;
            assert( old != NULL );
            var_alpha = tmp_assign_source_34;
            Py_INCREF( var_alpha );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
        tmp_assign_source_35 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_35;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( var_z );
        tmp_left_name_8 = var_z;
        CHECK_OBJECT( var_alpha );
        tmp_left_name_9 = var_alpha;
        CHECK_OBJECT( var_p );
        tmp_right_name_9 = var_p;
        tmp_right_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x2 == NULL );
        var_x2 = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_left_name_10;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_right_name_10;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_left_name_11;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_right_name_11;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_9;
        CHECK_OBJECT( par_A );
        tmp_called_instance_7 = par_A;
        CHECK_OBJECT( var_x1 );
        tmp_args_element_name_29 = var_x1;
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = { tmp_args_element_name_29 };
            tmp_left_name_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_right_name_10 = par_b;
        tmp_args_element_name_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_10 );
        if ( tmp_args_element_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = { tmp_args_element_name_28 };
            tmp_compexpr_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_28 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_10;
        CHECK_OBJECT( par_A );
        tmp_called_instance_8 = par_A;
        CHECK_OBJECT( var_x2 );
        tmp_args_element_name_31 = var_x2;
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = { tmp_args_element_name_31 };
            tmp_left_name_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_right_name_11 = par_b;
        tmp_args_element_name_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_11 );
        if ( tmp_args_element_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e87026034e19521fc476b273a70fdc21->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = { tmp_args_element_name_30 };
            tmp_compexpr_right_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_30 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooo";
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
        CHECK_OBJECT( var_x1 );
        tmp_return_value = var_x1;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_3;
        branch_no_3:;
        CHECK_OBJECT( var_x2 );
        tmp_return_value = var_x2;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e87026034e19521fc476b273a70fdc21 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e87026034e19521fc476b273a70fdc21 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e87026034e19521fc476b273a70fdc21 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e87026034e19521fc476b273a70fdc21, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e87026034e19521fc476b273a70fdc21->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e87026034e19521fc476b273a70fdc21, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e87026034e19521fc476b273a70fdc21,
        type_description_1,
        par_A,
        par_Y,
        par_b,
        par_trust_radius,
        par_lb,
        par_ub,
        var_newton_point,
        var_x,
        var_g,
        var_A_g,
        var_cauchy_point,
        var_origin_point,
        var_z,
        var_p,
        var__,
        var_alpha,
        var_intersect,
        var_x1,
        var_x2
    );


    // Release cached frame.
    if ( frame_e87026034e19521fc476b273a70fdc21 == cache_frame_e87026034e19521fc476b273a70fdc21 )
    {
        Py_DECREF( frame_e87026034e19521fc476b273a70fdc21 );
    }
    cache_frame_e87026034e19521fc476b273a70fdc21 = NULL;

    assertFrameObject( frame_e87026034e19521fc476b273a70fdc21 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_7_modified_dogleg );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_Y );
    Py_DECREF( par_Y );
    par_Y = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_radius );
    Py_DECREF( par_trust_radius );
    par_trust_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)var_newton_point );
    Py_DECREF( var_newton_point );
    var_newton_point = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_A_g );
    var_A_g = NULL;

    Py_XDECREF( var_cauchy_point );
    var_cauchy_point = NULL;

    Py_XDECREF( var_origin_point );
    var_origin_point = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_intersect );
    var_intersect = NULL;

    Py_XDECREF( var_x1 );
    var_x1 = NULL;

    Py_XDECREF( var_x2 );
    var_x2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_Y );
    Py_DECREF( par_Y );
    par_Y = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_radius );
    Py_DECREF( par_trust_radius );
    par_trust_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    Py_XDECREF( var_newton_point );
    var_newton_point = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_A_g );
    var_A_g = NULL;

    Py_XDECREF( var_cauchy_point );
    var_cauchy_point = NULL;

    Py_XDECREF( var_origin_point );
    var_origin_point = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_intersect );
    var_intersect = NULL;

    Py_XDECREF( var_x1 );
    var_x1 = NULL;

    Py_XDECREF( var_x2 );
    var_x2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_7_modified_dogleg );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_8_projected_cg( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_H = python_pars[ 0 ];
    PyObject *par_c = python_pars[ 1 ];
    PyObject *par_Z = python_pars[ 2 ];
    PyObject *par_Y = python_pars[ 3 ];
    PyObject *par_b = python_pars[ 4 ];
    PyObject *par_trust_radius = python_pars[ 5 ];
    PyObject *par_lb = python_pars[ 6 ];
    PyObject *par_ub = python_pars[ 7 ];
    PyObject *par_tol = python_pars[ 8 ];
    PyObject *par_max_iter = python_pars[ 9 ];
    PyObject *par_max_infeasible_iter = python_pars[ 10 ];
    PyObject *par_return_all = python_pars[ 11 ];
    PyObject *var_n = NULL;
    PyObject *var_m = NULL;
    PyObject *var_x = NULL;
    PyObject *var_r = NULL;
    PyObject *var_g = NULL;
    PyObject *var_p = NULL;
    PyObject *var_allvecs = NULL;
    PyObject *var_H_p = NULL;
    PyObject *var_rt_g = NULL;
    PyObject *var_tr_distance = NULL;
    PyObject *var_info = NULL;
    PyObject *var_hits_boundary = NULL;
    PyObject *var_stop_cond = NULL;
    PyObject *var_counter = NULL;
    PyObject *var_last_feasible_x = NULL;
    PyObject *var_k = NULL;
    PyObject *var_i = NULL;
    PyObject *var_pt_H_p = NULL;
    PyObject *var__ = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_intersect = NULL;
    PyObject *var_x_next = NULL;
    PyObject *var_theta = NULL;
    PyObject *var_r_next = NULL;
    PyObject *var_g_next = NULL;
    PyObject *var_rt_g_next = NULL;
    PyObject *var_beta = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__element_3 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4970ddbb3f1fff539ebb29770691faee;
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
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
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
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_4970ddbb3f1fff539ebb29770691faee = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4970ddbb3f1fff539ebb29770691faee, codeobj_4970ddbb3f1fff539ebb29770691faee, module_scipy$optimize$_trustregion_constr$qp_subproblem, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4970ddbb3f1fff539ebb29770691faee = cache_frame_4970ddbb3f1fff539ebb29770691faee;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4970ddbb3f1fff539ebb29770691faee );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4970ddbb3f1fff539ebb29770691faee ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 494;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_1 = par_c;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 494;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_shape, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 494;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 494;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            exception_lineno = 494;
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

                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    exception_lineno = 494;
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

            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            exception_lineno = 494;
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
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_n = tmp_assign_source_3;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 495;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_2 = par_b;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 495;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_shape, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            exception_lineno = 495;
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

                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    exception_lineno = 495;
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

            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            exception_lineno = 495;
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
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_m = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_Y );
        tmp_source_name_1 = par_Y;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 498;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_operand_name_1 = par_b;
        tmp_args_element_name_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 498;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 498;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 498;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_Z );
        tmp_source_name_2 = par_Z;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dot );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 499;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_H );
        tmp_called_instance_3 = par_H;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_5 = var_x;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 499;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 499;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c );
        tmp_right_name_1 = par_c;
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 499;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 499;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 499;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_Z );
        tmp_called_instance_4 = par_Z;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_6 = var_r;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 500;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 500;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_g == NULL );
        var_g = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_g );
        tmp_operand_name_2 = var_g;
        tmp_assign_source_10 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 501;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p == NULL );
        var_p = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_return_all );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_return_all );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_list_element_1;
            CHECK_OBJECT( var_x );
            tmp_list_element_1 = var_x;
            tmp_assign_source_11 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_11, 0, tmp_list_element_1 );
            assert( var_allvecs == NULL );
            var_allvecs = tmp_assign_source_11;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_H );
        tmp_called_instance_5 = par_H;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_7 = var_p;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 507;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 507;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_H_p == NULL );
        var_H_p = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 508;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_g );
        tmp_args_element_name_8 = var_g;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 508;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_2;
        tmp_assign_source_13 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rt_g == NULL );
        var_rt_g = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( par_trust_radius );
        tmp_left_name_3 = par_trust_radius;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 511;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_9 = var_x;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 511;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 511;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 511;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tr_distance == NULL );
        var_tr_distance = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_tr_distance );
        tmp_compexpr_left_1 = var_tr_distance;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 512;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_2a3c6f08f17d8e171fe5e6858bfe83ee;
            frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 513;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 513;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_tr_distance );
            tmp_compexpr_left_2 = var_tr_distance;
            tmp_compexpr_right_2 = const_float_1eminus_25;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 517;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_15;
                tmp_assign_source_15 = PyDict_Copy( const_dict_e4eecd5312f97ebdcf17ee25172fb05e );
                assert( var_info == NULL );
                var_info = tmp_assign_source_15;
            }
            {
                nuitka_bool tmp_condition_result_4;
                int tmp_truth_name_2;
                CHECK_OBJECT( par_return_all );
                tmp_truth_name_2 = CHECK_IF_TRUE( par_return_all );
                if ( tmp_truth_name_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 519;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
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
                {
                    PyObject *tmp_called_instance_6;
                    PyObject *tmp_call_result_1;
                    PyObject *tmp_args_element_name_10;
                    if ( var_allvecs == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allvecs" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 520;
                        type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_6 = var_allvecs;
                    CHECK_OBJECT( var_x );
                    tmp_args_element_name_10 = var_x;
                    frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 520;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10 };
                        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_append, call_args );
                    }

                    if ( tmp_call_result_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 520;
                        type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_1 );
                }
                if ( var_allvecs == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allvecs" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 521;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dictset_value = var_allvecs;
                CHECK_OBJECT( var_info );
                tmp_dictset_dict = var_info;
                tmp_dictset_key = const_str_plain_allvecs;
                tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
                assert( !(tmp_res != 0) );
                branch_no_4:;
            }
            {
                PyObject *tmp_tuple_element_1;
                CHECK_OBJECT( var_x );
                tmp_tuple_element_1 = var_x;
                tmp_return_value = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( var_info );
                tmp_tuple_element_1 = var_info;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
                goto frame_return_exit_1;
            }
            branch_no_3:;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_left_3 = par_tol;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_args_element_name_15;
            tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_5 != NULL );
            tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_6 != NULL );
            tmp_left_name_4 = const_float_0_01;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 526;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_7 = tmp_mvar_value_5;
            CHECK_OBJECT( var_rt_g );
            tmp_args_element_name_13 = var_rt_g;
            frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 526;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_right_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_sqrt, call_args );
            }

            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 526;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_12 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 526;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_5 = const_float_0_1;
            CHECK_OBJECT( var_rt_g );
            tmp_right_name_5 = var_rt_g;
            tmp_args_element_name_14 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_12 );

                exception_lineno = 526;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 526;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_14 };
                tmp_args_element_name_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_12 );
            Py_DECREF( tmp_args_element_name_14 );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 526;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_15 = const_float_1eminus_25;
            frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 526;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_15 };
                tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 526;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_tol;
                assert( old != NULL );
                par_tol = tmp_assign_source_16;
                Py_DECREF( old );
            }

        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_lb );
        tmp_compexpr_left_4 = par_lb;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 529;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_6;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_full );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 529;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_n );
            tmp_args_element_name_16 = var_n;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_called_name_7 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 529;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_7;
            tmp_operand_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_inf );
            if ( tmp_operand_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 529;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_17 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
            Py_DECREF( tmp_operand_name_3 );
            if ( tmp_args_element_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 529;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 529;
            {
                PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
                tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 529;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_lb;
                assert( old != NULL );
                par_lb = tmp_assign_source_17;
                Py_DECREF( old );
            }

        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_ub );
        tmp_compexpr_left_5 = par_ub;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_7 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 531;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_8;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_full );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 531;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_n );
            tmp_args_element_name_18 = var_n;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_called_name_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 531;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_9;
            tmp_args_element_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_inf );
            if ( tmp_args_element_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_8 );

                exception_lineno = 531;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 531;
            {
                PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
                tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_19 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 531;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ub;
                assert( old != NULL );
                par_ub = tmp_assign_source_18;
                Py_DECREF( old );
            }

        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_max_iter );
        tmp_compexpr_left_6 = par_max_iter;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_8 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_19;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( var_n );
            tmp_left_name_6 = var_n;
            CHECK_OBJECT( var_m );
            tmp_right_name_6 = var_m;
            tmp_assign_source_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 534;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_max_iter;
                assert( old != NULL );
                par_max_iter = tmp_assign_source_19;
                Py_DECREF( old );
            }

        }
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_9 != NULL );
        CHECK_OBJECT( par_max_iter );
        tmp_args_element_name_20 = par_max_iter;
        CHECK_OBJECT( var_n );
        tmp_left_name_7 = var_n;
        CHECK_OBJECT( var_m );
        tmp_right_name_7 = var_m;
        tmp_args_element_name_21 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_args_element_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 535;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 535;
        {
            PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_21 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 535;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_max_iter;
            assert( old != NULL );
            par_max_iter = tmp_assign_source_20;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( par_max_infeasible_iter );
        tmp_compexpr_left_7 = par_max_infeasible_iter;
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_9 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_21;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            CHECK_OBJECT( var_n );
            tmp_left_name_8 = var_n;
            CHECK_OBJECT( var_m );
            tmp_right_name_8 = var_m;
            tmp_assign_source_21 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 538;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_max_infeasible_iter;
                assert( old != NULL );
                par_max_infeasible_iter = tmp_assign_source_21;
                Py_DECREF( old );
            }

        }
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = Py_False;
        assert( var_hits_boundary == NULL );
        Py_INCREF( tmp_assign_source_22 );
        var_hits_boundary = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = const_int_pos_1;
        assert( var_stop_cond == NULL );
        Py_INCREF( tmp_assign_source_23 );
        var_stop_cond = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = const_int_0;
        assert( var_counter == NULL );
        Py_INCREF( tmp_assign_source_24 );
        var_counter = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_22;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 543;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_10;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_22 = var_x;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 543;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_assign_source_25 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_zeros_like, call_args );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 543;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_last_feasible_x == NULL );
        var_last_feasible_x = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = const_int_0;
        assert( var_k == NULL );
        Py_INCREF( tmp_assign_source_26 );
        var_k = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( par_max_iter );
        tmp_xrange_low_1 = par_max_iter;
        tmp_iter_arg_3 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_27;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_28 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_28 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                exception_lineno = 545;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_29 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_29;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT( var_rt_g );
        tmp_compexpr_left_8 = var_rt_g;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_8 = par_tol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 547;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
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
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = const_int_pos_4;
            {
                PyObject *old = var_stop_cond;
                assert( old != NULL );
                var_stop_cond = tmp_assign_source_30;
                Py_INCREF( var_stop_cond );
                Py_DECREF( old );
            }

        }
        goto loop_end_1;
        branch_no_10:;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( var_k );
        tmp_left_name_9 = var_k;
        tmp_right_name_9 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 550;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_31 = tmp_left_name_9;
        var_k = tmp_assign_source_31;

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_name_23;
        CHECK_OBJECT( var_H_p );
        tmp_called_instance_9 = var_H_p;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_23 = var_p;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 552;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_assign_source_32 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 552;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_pt_H_p;
            var_pt_H_p = tmp_assign_source_32;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( var_pt_H_p );
        tmp_compexpr_left_9 = var_pt_H_p;
        tmp_compexpr_right_9 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 554;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_10;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_24;
            int tmp_truth_name_3;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 555;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_called_instance_10 = tmp_mvar_value_11;
            CHECK_OBJECT( par_trust_radius );
            tmp_args_element_name_24 = par_trust_radius;
            frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 555;
            {
                PyObject *call_args[] = { tmp_args_element_name_24 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_isinf, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 555;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 555;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_condition_result_12 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_96c65eba12d002441284c4c0c54ec1a8;
                frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 556;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 556;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            goto branch_end_12;
            branch_no_12:;
            // Tried code:
            {
                PyObject *tmp_assign_source_33;
                PyObject *tmp_iter_arg_4;
                PyObject *tmp_called_name_10;
                PyObject *tmp_mvar_value_12;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_1;
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_box_sphere_intersections );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_box_sphere_intersections );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "box_sphere_intersections" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 560;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }

                tmp_called_name_10 = tmp_mvar_value_12;
                CHECK_OBJECT( var_x );
                tmp_tuple_element_2 = var_x;
                tmp_args_name_1 = PyTuple_New( 5 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( var_p );
                tmp_tuple_element_2 = var_p;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
                CHECK_OBJECT( par_lb );
                tmp_tuple_element_2 = par_lb;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_2 );
                CHECK_OBJECT( par_ub );
                tmp_tuple_element_2 = par_ub;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_2 );
                CHECK_OBJECT( par_trust_radius );
                tmp_tuple_element_2 = par_trust_radius;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 4, tmp_tuple_element_2 );
                tmp_kw_name_1 = PyDict_Copy( const_dict_4dfb153181fa9d20811c6920b20cb8bf );
                frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 560;
                tmp_iter_arg_4 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_iter_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 560;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_4 );
                Py_DECREF( tmp_iter_arg_4 );
                if ( tmp_assign_source_33 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 560;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                assert( tmp_tuple_unpack_3__source_iter == NULL );
                tmp_tuple_unpack_3__source_iter = tmp_assign_source_33;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_34;
                PyObject *tmp_unpack_3;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_unpack_3 = tmp_tuple_unpack_3__source_iter;
                tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_3, 0, 3 );
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


                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    exception_lineno = 560;
                    goto try_except_handler_8;
                }
                assert( tmp_tuple_unpack_3__element_1 == NULL );
                tmp_tuple_unpack_3__element_1 = tmp_assign_source_34;
            }
            {
                PyObject *tmp_assign_source_35;
                PyObject *tmp_unpack_4;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_unpack_4 = tmp_tuple_unpack_3__source_iter;
                tmp_assign_source_35 = UNPACK_NEXT( tmp_unpack_4, 1, 3 );
                if ( tmp_assign_source_35 == NULL )
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


                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    exception_lineno = 560;
                    goto try_except_handler_8;
                }
                assert( tmp_tuple_unpack_3__element_2 == NULL );
                tmp_tuple_unpack_3__element_2 = tmp_assign_source_35;
            }
            {
                PyObject *tmp_assign_source_36;
                PyObject *tmp_unpack_5;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
                tmp_assign_source_36 = UNPACK_NEXT( tmp_unpack_5, 2, 3 );
                if ( tmp_assign_source_36 == NULL )
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


                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    exception_lineno = 560;
                    goto try_except_handler_8;
                }
                assert( tmp_tuple_unpack_3__element_3 == NULL );
                tmp_tuple_unpack_3__element_3 = tmp_assign_source_36;
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

                            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                            exception_lineno = 560;
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
                    PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    exception_lineno = 560;
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

            Py_XDECREF( tmp_tuple_unpack_3__element_3 );
            tmp_tuple_unpack_3__element_3 = NULL;

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
                PyObject *tmp_assign_source_37;
                CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
                tmp_assign_source_37 = tmp_tuple_unpack_3__element_1;
                {
                    PyObject *old = var__;
                    var__ = tmp_assign_source_37;
                    Py_INCREF( var__ );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_3__element_1 );
            tmp_tuple_unpack_3__element_1 = NULL;

            {
                PyObject *tmp_assign_source_38;
                CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
                tmp_assign_source_38 = tmp_tuple_unpack_3__element_2;
                {
                    PyObject *old = var_alpha;
                    var_alpha = tmp_assign_source_38;
                    Py_INCREF( var_alpha );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_3__element_2 );
            tmp_tuple_unpack_3__element_2 = NULL;

            {
                PyObject *tmp_assign_source_39;
                CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
                tmp_assign_source_39 = tmp_tuple_unpack_3__element_3;
                {
                    PyObject *old = var_intersect;
                    var_intersect = tmp_assign_source_39;
                    Py_INCREF( var_intersect );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_3__element_3 );
            tmp_tuple_unpack_3__element_3 = NULL;

            {
                nuitka_bool tmp_condition_result_13;
                int tmp_truth_name_4;
                CHECK_OBJECT( var_intersect );
                tmp_truth_name_4 = CHECK_IF_TRUE( var_intersect );
                if ( tmp_truth_name_4 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 563;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_condition_result_13 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_40;
                    PyObject *tmp_left_name_10;
                    PyObject *tmp_right_name_10;
                    PyObject *tmp_left_name_11;
                    PyObject *tmp_right_name_11;
                    CHECK_OBJECT( var_x );
                    tmp_left_name_10 = var_x;
                    CHECK_OBJECT( var_alpha );
                    tmp_left_name_11 = var_alpha;
                    CHECK_OBJECT( var_p );
                    tmp_right_name_11 = var_p;
                    tmp_right_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
                    if ( tmp_right_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 564;
                        type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                        goto try_except_handler_6;
                    }
                    tmp_assign_source_40 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
                    Py_DECREF( tmp_right_name_10 );
                    if ( tmp_assign_source_40 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 564;
                        type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                        goto try_except_handler_6;
                    }
                    {
                        PyObject *old = var_x;
                        assert( old != NULL );
                        var_x = tmp_assign_source_40;
                        Py_DECREF( old );
                    }

                }
                branch_no_13:;
            }
            {
                PyObject *tmp_assign_source_41;
                PyObject *tmp_called_name_11;
                PyObject *tmp_mvar_value_13;
                PyObject *tmp_args_element_name_25;
                PyObject *tmp_args_element_name_26;
                PyObject *tmp_args_element_name_27;
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_reinforce_box_boundaries );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reinforce_box_boundaries );
                }

                if ( tmp_mvar_value_13 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reinforce_box_boundaries" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 567;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_called_name_11 = tmp_mvar_value_13;
                if ( var_x == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 567;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_args_element_name_25 = var_x;
                CHECK_OBJECT( par_lb );
                tmp_args_element_name_26 = par_lb;
                CHECK_OBJECT( par_ub );
                tmp_args_element_name_27 = par_ub;
                frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 567;
                {
                    PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
                    tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
                }

                if ( tmp_assign_source_41 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 567;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = var_x;
                    var_x = tmp_assign_source_41;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_42;
                tmp_assign_source_42 = const_int_pos_3;
                {
                    PyObject *old = var_stop_cond;
                    assert( old != NULL );
                    var_stop_cond = tmp_assign_source_42;
                    Py_INCREF( var_stop_cond );
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_43;
                tmp_assign_source_43 = Py_True;
                {
                    PyObject *old = var_hits_boundary;
                    assert( old != NULL );
                    var_hits_boundary = tmp_assign_source_43;
                    Py_INCREF( var_hits_boundary );
                    Py_DECREF( old );
                }

            }
            goto loop_end_1;
            branch_end_12:;
        }
        branch_no_11:;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT( var_rt_g );
        tmp_left_name_12 = var_rt_g;
        CHECK_OBJECT( var_pt_H_p );
        tmp_right_name_12 = var_pt_H_p;
        tmp_assign_source_44 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 574;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_alpha;
            var_alpha = tmp_assign_source_44;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT( var_x );
        tmp_left_name_13 = var_x;
        CHECK_OBJECT( var_alpha );
        tmp_left_name_14 = var_alpha;
        CHECK_OBJECT( var_p );
        tmp_right_name_14 = var_p;
        tmp_right_name_13 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 575;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_45 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 575;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_x_next;
            var_x_next = tmp_assign_source_45;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_28;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 578;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_source_name_7 = tmp_mvar_value_14;
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_linalg );
        if ( tmp_called_instance_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 578;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_x_next );
        tmp_args_element_name_28 = var_x_next;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 578;
        {
            PyObject *call_args[] = { tmp_args_element_name_28 };
            tmp_compexpr_left_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_norm, call_args );
        }

        Py_DECREF( tmp_called_instance_11 );
        if ( tmp_compexpr_left_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 578;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( par_trust_radius );
        tmp_compexpr_right_10 = par_trust_radius;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        Py_DECREF( tmp_compexpr_left_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 578;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_name_12;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_args_element_name_29;
            PyObject *tmp_args_element_name_30;
            PyObject *tmp_left_name_15;
            PyObject *tmp_right_name_15;
            PyObject *tmp_args_element_name_31;
            PyObject *tmp_args_element_name_32;
            PyObject *tmp_args_element_name_33;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_box_sphere_intersections );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_box_sphere_intersections );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "box_sphere_intersections" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 580;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }

            tmp_called_name_12 = tmp_mvar_value_15;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_29 = var_x;
            CHECK_OBJECT( var_alpha );
            tmp_left_name_15 = var_alpha;
            CHECK_OBJECT( var_p );
            tmp_right_name_15 = var_p;
            tmp_args_element_name_30 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
            if ( tmp_args_element_name_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 580;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            CHECK_OBJECT( par_lb );
            tmp_args_element_name_31 = par_lb;
            CHECK_OBJECT( par_ub );
            tmp_args_element_name_32 = par_ub;
            CHECK_OBJECT( par_trust_radius );
            tmp_args_element_name_33 = par_trust_radius;
            frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 580;
            {
                PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33 };
                tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_args_element_name_30 );
            if ( tmp_iter_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 580;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            tmp_assign_source_46 = MAKE_ITERATOR( tmp_iter_arg_5 );
            Py_DECREF( tmp_iter_arg_5 );
            if ( tmp_assign_source_46 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 580;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_4__source_iter == NULL );
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_46;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_47 = UNPACK_NEXT( tmp_unpack_6, 0, 3 );
            if ( tmp_assign_source_47 == NULL )
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


                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                exception_lineno = 580;
                goto try_except_handler_10;
            }
            assert( tmp_tuple_unpack_4__element_1 == NULL );
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_47;
        }
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_48 = UNPACK_NEXT( tmp_unpack_7, 1, 3 );
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


                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                exception_lineno = 580;
                goto try_except_handler_10;
            }
            assert( tmp_tuple_unpack_4__element_2 == NULL );
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_48;
        }
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_49 = UNPACK_NEXT( tmp_unpack_8, 2, 3 );
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


                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                exception_lineno = 580;
                goto try_except_handler_10;
            }
            assert( tmp_tuple_unpack_4__element_3 == NULL );
            tmp_tuple_unpack_4__element_3 = tmp_assign_source_49;
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

                        type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                        exception_lineno = 580;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                exception_lineno = 580;
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
                PyObject *old = var__;
                var__ = tmp_assign_source_50;
                Py_INCREF( var__ );
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
                PyObject *old = var_theta;
                var_theta = tmp_assign_source_51;
                Py_INCREF( var_theta );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        {
            PyObject *tmp_assign_source_52;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_3 );
            tmp_assign_source_52 = tmp_tuple_unpack_4__element_3;
            {
                PyObject *old = var_intersect;
                var_intersect = tmp_assign_source_52;
                Py_INCREF( var_intersect );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_3 );
        tmp_tuple_unpack_4__element_3 = NULL;

        {
            nuitka_bool tmp_condition_result_15;
            int tmp_truth_name_5;
            CHECK_OBJECT( var_intersect );
            tmp_truth_name_5 = CHECK_IF_TRUE( var_intersect );
            if ( tmp_truth_name_5 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 583;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_condition_result_15 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_53;
                PyObject *tmp_left_name_16;
                PyObject *tmp_right_name_16;
                PyObject *tmp_left_name_17;
                PyObject *tmp_left_name_18;
                PyObject *tmp_right_name_17;
                PyObject *tmp_right_name_18;
                CHECK_OBJECT( var_x );
                tmp_left_name_16 = var_x;
                CHECK_OBJECT( var_theta );
                tmp_left_name_18 = var_theta;
                CHECK_OBJECT( var_alpha );
                tmp_right_name_17 = var_alpha;
                tmp_left_name_17 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_17 );
                if ( tmp_left_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 584;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( var_p );
                tmp_right_name_18 = var_p;
                tmp_right_name_16 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_18 );
                Py_DECREF( tmp_left_name_17 );
                if ( tmp_right_name_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 584;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_assign_source_53 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
                Py_DECREF( tmp_right_name_16 );
                if ( tmp_assign_source_53 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 584;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = var_x;
                    assert( old != NULL );
                    var_x = tmp_assign_source_53;
                    Py_DECREF( old );
                }

            }
            branch_no_15:;
        }
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_called_name_13;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_34;
            PyObject *tmp_args_element_name_35;
            PyObject *tmp_args_element_name_36;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_reinforce_box_boundaries );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reinforce_box_boundaries );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reinforce_box_boundaries" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 587;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_called_name_13 = tmp_mvar_value_16;
            if ( var_x == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 587;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_args_element_name_34 = var_x;
            CHECK_OBJECT( par_lb );
            tmp_args_element_name_35 = par_lb;
            CHECK_OBJECT( par_ub );
            tmp_args_element_name_36 = par_ub;
            frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 587;
            {
                PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36 };
                tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
            }

            if ( tmp_assign_source_54 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 587;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_54;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_55;
            tmp_assign_source_55 = const_int_pos_2;
            {
                PyObject *old = var_stop_cond;
                assert( old != NULL );
                var_stop_cond = tmp_assign_source_55;
                Py_INCREF( var_stop_cond );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_56;
            tmp_assign_source_56 = Py_True;
            {
                PyObject *old = var_hits_boundary;
                assert( old != NULL );
                var_hits_boundary = tmp_assign_source_56;
                Py_INCREF( var_hits_boundary );
                Py_DECREF( old );
            }

        }
        goto loop_end_1;
        branch_no_14:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_args_element_name_39;
        int tmp_truth_name_6;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_inside_box_boundaries );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inside_box_boundaries );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "inside_box_boundaries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 594;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_14 = tmp_mvar_value_17;
        CHECK_OBJECT( var_x_next );
        tmp_args_element_name_37 = var_x_next;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_38 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_39 = par_ub;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 594;
        {
            PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 594;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 594;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_16 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
            PyObject *tmp_assign_source_57;
            tmp_assign_source_57 = const_int_0;
            {
                PyObject *old = var_counter;
                var_counter = tmp_assign_source_57;
                Py_INCREF( var_counter );
                Py_XDECREF( old );
            }

        }
        goto branch_end_16;
        branch_no_16:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_left_name_19;
            PyObject *tmp_right_name_19;
            if ( var_counter == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "counter" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 597;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_left_name_19 = var_counter;
            tmp_right_name_19 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_19, tmp_right_name_19 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 597;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_58 = tmp_left_name_19;
            var_counter = tmp_assign_source_58;

        }
        branch_end_16:;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT( var_counter );
        tmp_compexpr_left_11 = var_counter;
        tmp_compexpr_right_11 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 599;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_17;
        }
        else
        {
            goto branch_no_17;
        }
        branch_yes_17:;
        // Tried code:
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_name_15;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_element_name_40;
            PyObject *tmp_args_element_name_41;
            PyObject *tmp_left_name_20;
            PyObject *tmp_right_name_20;
            PyObject *tmp_args_element_name_42;
            PyObject *tmp_args_element_name_43;
            PyObject *tmp_args_element_name_44;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_box_sphere_intersections );

            if (unlikely( tmp_mvar_value_18 == NULL ))
            {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_box_sphere_intersections );
            }

            if ( tmp_mvar_value_18 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "box_sphere_intersections" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 600;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }

            tmp_called_name_15 = tmp_mvar_value_18;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_40 = var_x;
            CHECK_OBJECT( var_alpha );
            tmp_left_name_20 = var_alpha;
            CHECK_OBJECT( var_p );
            tmp_right_name_20 = var_p;
            tmp_args_element_name_41 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_20 );
            if ( tmp_args_element_name_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 600;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            CHECK_OBJECT( par_lb );
            tmp_args_element_name_42 = par_lb;
            CHECK_OBJECT( par_ub );
            tmp_args_element_name_43 = par_ub;
            CHECK_OBJECT( par_trust_radius );
            tmp_args_element_name_44 = par_trust_radius;
            frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 600;
            {
                PyObject *call_args[] = { tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44 };
                tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_15, call_args );
            }

            Py_DECREF( tmp_args_element_name_41 );
            if ( tmp_iter_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 600;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_59 = MAKE_ITERATOR( tmp_iter_arg_6 );
            Py_DECREF( tmp_iter_arg_6 );
            if ( tmp_assign_source_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 600;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__source_iter;
                tmp_tuple_unpack_5__source_iter = tmp_assign_source_59;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_60 = UNPACK_NEXT( tmp_unpack_9, 0, 3 );
            if ( tmp_assign_source_60 == NULL )
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


                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                exception_lineno = 600;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_1;
                tmp_tuple_unpack_5__element_1 = tmp_assign_source_60;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_61 = UNPACK_NEXT( tmp_unpack_10, 1, 3 );
            if ( tmp_assign_source_61 == NULL )
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


                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                exception_lineno = 600;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_2;
                tmp_tuple_unpack_5__element_2 = tmp_assign_source_61;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_62 = UNPACK_NEXT( tmp_unpack_11, 2, 3 );
            if ( tmp_assign_source_62 == NULL )
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


                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                exception_lineno = 600;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_3;
                tmp_tuple_unpack_5__element_3 = tmp_assign_source_62;
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

                        type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                        exception_lineno = 600;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                exception_lineno = 600;
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

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_6;
        // End of try:
        try_end_10:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
        Py_DECREF( tmp_tuple_unpack_5__source_iter );
        tmp_tuple_unpack_5__source_iter = NULL;

        {
            PyObject *tmp_assign_source_63;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
            tmp_assign_source_63 = tmp_tuple_unpack_5__element_1;
            {
                PyObject *old = var__;
                var__ = tmp_assign_source_63;
                Py_INCREF( var__ );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        {
            PyObject *tmp_assign_source_64;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
            tmp_assign_source_64 = tmp_tuple_unpack_5__element_2;
            {
                PyObject *old = var_theta;
                var_theta = tmp_assign_source_64;
                Py_INCREF( var_theta );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_2 );
        tmp_tuple_unpack_5__element_2 = NULL;

        {
            PyObject *tmp_assign_source_65;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_3 );
            tmp_assign_source_65 = tmp_tuple_unpack_5__element_3;
            {
                PyObject *old = var_intersect;
                var_intersect = tmp_assign_source_65;
                Py_INCREF( var_intersect );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_3 );
        tmp_tuple_unpack_5__element_3 = NULL;

        {
            nuitka_bool tmp_condition_result_18;
            int tmp_truth_name_7;
            CHECK_OBJECT( var_intersect );
            tmp_truth_name_7 = CHECK_IF_TRUE( var_intersect );
            if ( tmp_truth_name_7 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 602;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_condition_result_18 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_18;
            }
            else
            {
                goto branch_no_18;
            }
            branch_yes_18:;
            {
                PyObject *tmp_assign_source_66;
                PyObject *tmp_left_name_21;
                PyObject *tmp_right_name_21;
                PyObject *tmp_left_name_22;
                PyObject *tmp_left_name_23;
                PyObject *tmp_right_name_22;
                PyObject *tmp_right_name_23;
                CHECK_OBJECT( var_x );
                tmp_left_name_21 = var_x;
                CHECK_OBJECT( var_theta );
                tmp_left_name_23 = var_theta;
                CHECK_OBJECT( var_alpha );
                tmp_right_name_22 = var_alpha;
                tmp_left_name_22 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_22 );
                if ( tmp_left_name_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 603;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( var_p );
                tmp_right_name_23 = var_p;
                tmp_right_name_21 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_23 );
                Py_DECREF( tmp_left_name_22 );
                if ( tmp_right_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 603;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_assign_source_66 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_21 );
                Py_DECREF( tmp_right_name_21 );
                if ( tmp_assign_source_66 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 603;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = var_last_feasible_x;
                    var_last_feasible_x = tmp_assign_source_66;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_67;
                PyObject *tmp_called_name_16;
                PyObject *tmp_mvar_value_19;
                PyObject *tmp_args_element_name_45;
                PyObject *tmp_args_element_name_46;
                PyObject *tmp_args_element_name_47;
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_reinforce_box_boundaries );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reinforce_box_boundaries );
                }

                if ( tmp_mvar_value_19 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reinforce_box_boundaries" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 606;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_called_name_16 = tmp_mvar_value_19;
                CHECK_OBJECT( var_last_feasible_x );
                tmp_args_element_name_45 = var_last_feasible_x;
                CHECK_OBJECT( par_lb );
                tmp_args_element_name_46 = par_lb;
                CHECK_OBJECT( par_ub );
                tmp_args_element_name_47 = par_ub;
                frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 606;
                {
                    PyObject *call_args[] = { tmp_args_element_name_45, tmp_args_element_name_46, tmp_args_element_name_47 };
                    tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
                }

                if ( tmp_assign_source_67 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 606;
                    type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = var_last_feasible_x;
                    assert( old != NULL );
                    var_last_feasible_x = tmp_assign_source_67;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_68;
                tmp_assign_source_68 = const_int_0;
                {
                    PyObject *old = var_counter;
                    assert( old != NULL );
                    var_counter = tmp_assign_source_68;
                    Py_INCREF( var_counter );
                    Py_DECREF( old );
                }

            }
            branch_no_18:;
        }
        branch_no_17:;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        if ( var_counter == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "counter" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 610;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_compexpr_left_12 = var_counter;
        CHECK_OBJECT( par_max_infeasible_iter );
        tmp_compexpr_right_12 = par_max_infeasible_iter;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 610;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_19;
        }
        else
        {
            goto branch_no_19;
        }
        branch_yes_19:;
        goto loop_end_1;
        branch_no_19:;
    }
    {
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_8;
        CHECK_OBJECT( par_return_all );
        tmp_truth_name_8 = CHECK_IF_TRUE( par_return_all );
        if ( tmp_truth_name_8 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 613;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_20 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_20;
        }
        else
        {
            goto branch_no_20;
        }
        branch_yes_20:;
        {
            PyObject *tmp_called_instance_12;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_48;
            if ( var_allvecs == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allvecs" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 614;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_called_instance_12 = var_allvecs;
            CHECK_OBJECT( var_x_next );
            tmp_args_element_name_48 = var_x_next;
            frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 614;
            {
                PyObject *call_args[] = { tmp_args_element_name_48 };
                tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 614;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_20:;
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_24;
        PyObject *tmp_left_name_25;
        PyObject *tmp_right_name_25;
        CHECK_OBJECT( var_r );
        tmp_left_name_24 = var_r;
        CHECK_OBJECT( var_alpha );
        tmp_left_name_25 = var_alpha;
        CHECK_OBJECT( var_H_p );
        tmp_right_name_25 = var_H_p;
        tmp_right_name_24 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_25, tmp_right_name_25 );
        if ( tmp_right_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 617;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_69 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_24 );
        Py_DECREF( tmp_right_name_24 );
        if ( tmp_assign_source_69 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 617;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r_next;
            var_r_next = tmp_assign_source_69;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_name_49;
        CHECK_OBJECT( par_Z );
        tmp_called_instance_13 = par_Z;
        CHECK_OBJECT( var_r_next );
        tmp_args_element_name_49 = var_r_next;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 619;
        {
            PyObject *call_args[] = { tmp_args_element_name_49 };
            tmp_assign_source_70 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_70 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 619;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g_next;
            var_g_next = tmp_assign_source_70;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_left_name_26;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_right_name_26;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 621;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_17 = tmp_mvar_value_20;
        CHECK_OBJECT( var_g_next );
        tmp_args_element_name_50 = var_g_next;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 621;
        {
            PyObject *call_args[] = { tmp_args_element_name_50 };
            tmp_left_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        if ( tmp_left_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 621;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_name_26 = const_int_pos_2;
        tmp_assign_source_71 = POWER_OPERATION( tmp_left_name_26, tmp_right_name_26 );
        Py_DECREF( tmp_left_name_26 );
        if ( tmp_assign_source_71 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 621;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_rt_g_next;
            var_rt_g_next = tmp_assign_source_71;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_left_name_27;
        PyObject *tmp_right_name_27;
        CHECK_OBJECT( var_rt_g_next );
        tmp_left_name_27 = var_rt_g_next;
        CHECK_OBJECT( var_rt_g );
        tmp_right_name_27 = var_rt_g;
        tmp_assign_source_72 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_27, tmp_right_name_27 );
        if ( tmp_assign_source_72 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 622;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_beta;
            var_beta = tmp_assign_source_72;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_left_name_28;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_right_name_28;
        PyObject *tmp_left_name_29;
        PyObject *tmp_right_name_29;
        CHECK_OBJECT( var_g_next );
        tmp_operand_name_4 = var_g_next;
        tmp_left_name_28 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
        if ( tmp_left_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 623;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_beta );
        tmp_left_name_29 = var_beta;
        CHECK_OBJECT( var_p );
        tmp_right_name_29 = var_p;
        tmp_right_name_28 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_29, tmp_right_name_29 );
        if ( tmp_right_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_28 );

            exception_lineno = 623;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_73 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_28, tmp_right_name_28 );
        Py_DECREF( tmp_left_name_28 );
        Py_DECREF( tmp_right_name_28 );
        if ( tmp_assign_source_73 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 623;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_p;
            assert( old != NULL );
            var_p = tmp_assign_source_73;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT( var_x_next );
        tmp_assign_source_74 = var_x_next;
        {
            PyObject *old = var_x;
            assert( old != NULL );
            var_x = tmp_assign_source_74;
            Py_INCREF( var_x );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT( var_g_next );
        tmp_assign_source_75 = var_g_next;
        {
            PyObject *old = var_g;
            assert( old != NULL );
            var_g = tmp_assign_source_75;
            Py_INCREF( var_g );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_76;
        CHECK_OBJECT( var_g_next );
        tmp_assign_source_76 = var_g_next;
        {
            PyObject *old = var_r;
            assert( old != NULL );
            var_r = tmp_assign_source_76;
            Py_INCREF( var_r );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_left_name_30;
        PyObject *tmp_called_name_18;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_right_name_30;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 628;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_18 = tmp_mvar_value_21;
        CHECK_OBJECT( var_g );
        tmp_args_element_name_51 = var_g;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 628;
        {
            PyObject *call_args[] = { tmp_args_element_name_51 };
            tmp_left_name_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        if ( tmp_left_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 628;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_name_30 = const_int_pos_2;
        tmp_assign_source_77 = POWER_OPERATION( tmp_left_name_30, tmp_right_name_30 );
        Py_DECREF( tmp_left_name_30 );
        if ( tmp_assign_source_77 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 628;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_rt_g;
            assert( old != NULL );
            var_rt_g = tmp_assign_source_77;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_name_52;
        CHECK_OBJECT( par_H );
        tmp_called_instance_14 = par_H;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_52 = var_p;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 629;
        {
            PyObject *call_args[] = { tmp_args_element_name_52 };
            tmp_assign_source_78 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_78 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 629;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_H_p;
            assert( old != NULL );
            var_H_p = tmp_assign_source_78;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_6:;
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
    try_end_11:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_args_element_name_55;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_inside_box_boundaries );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inside_box_boundaries );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "inside_box_boundaries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 631;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_19 = tmp_mvar_value_22;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 631;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_53 = var_x;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_54 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_55 = par_ub;
        frame_4970ddbb3f1fff539ebb29770691faee->m_frame.f_lineno = 631;
        {
            PyObject *call_args[] = { tmp_args_element_name_53, tmp_args_element_name_54, tmp_args_element_name_55 };
            tmp_operand_name_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_19, call_args );
        }

        if ( tmp_operand_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 631;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
        Py_DECREF( tmp_operand_name_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 631;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_21 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_21;
        }
        else
        {
            goto branch_no_21;
        }
        branch_yes_21:;
        {
            PyObject *tmp_assign_source_79;
            if ( var_last_feasible_x == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "last_feasible_x" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 632;
                type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_assign_source_79 = var_last_feasible_x;
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_79;
                Py_INCREF( var_x );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_80;
            tmp_assign_source_80 = Py_True;
            {
                PyObject *old = var_hits_boundary;
                var_hits_boundary = tmp_assign_source_80;
                Py_INCREF( var_hits_boundary );
                Py_XDECREF( old );
            }

        }
        branch_no_21:;
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_1 = const_str_plain_niter;
        if ( var_k == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "k" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 634;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = var_k;
        tmp_assign_source_81 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assign_source_81, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_stop_cond;
        if ( var_stop_cond == NULL )
        {
            Py_DECREF( tmp_assign_source_81 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stop_cond" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 634;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = var_stop_cond;
        tmp_res = PyDict_SetItem( tmp_assign_source_81, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_hits_boundary;
        if ( var_hits_boundary == NULL )
        {
            Py_DECREF( tmp_assign_source_81 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hits_boundary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 635;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = var_hits_boundary;
        tmp_res = PyDict_SetItem( tmp_assign_source_81, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        assert( var_info == NULL );
        var_info = tmp_assign_source_81;
    }
    {
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_9;
        CHECK_OBJECT( par_return_all );
        tmp_truth_name_9 = CHECK_IF_TRUE( par_return_all );
        if ( tmp_truth_name_9 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 636;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_22;
        }
        else
        {
            goto branch_no_22;
        }
        branch_yes_22:;
        if ( var_allvecs == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allvecs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 637;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dictset_value = var_allvecs;
        CHECK_OBJECT( var_info );
        tmp_dictset_dict = var_info;
        tmp_dictset_key = const_str_plain_allvecs;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_22:;
    }
    {
        PyObject *tmp_tuple_element_3;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 638;
            type_description_1 = "ooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = var_x;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_info );
        tmp_tuple_element_3 = var_info;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4970ddbb3f1fff539ebb29770691faee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4970ddbb3f1fff539ebb29770691faee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4970ddbb3f1fff539ebb29770691faee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4970ddbb3f1fff539ebb29770691faee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4970ddbb3f1fff539ebb29770691faee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4970ddbb3f1fff539ebb29770691faee, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4970ddbb3f1fff539ebb29770691faee,
        type_description_1,
        par_H,
        par_c,
        par_Z,
        par_Y,
        par_b,
        par_trust_radius,
        par_lb,
        par_ub,
        par_tol,
        par_max_iter,
        par_max_infeasible_iter,
        par_return_all,
        NULL,
        var_n,
        var_m,
        var_x,
        var_r,
        var_g,
        var_p,
        var_allvecs,
        var_H_p,
        var_rt_g,
        var_tr_distance,
        var_info,
        var_hits_boundary,
        var_stop_cond,
        var_counter,
        var_last_feasible_x,
        var_k,
        var_i,
        var_pt_H_p,
        var__,
        var_alpha,
        var_intersect,
        var_x_next,
        var_theta,
        var_r_next,
        var_g_next,
        var_rt_g_next,
        var_beta
    );


    // Release cached frame.
    if ( frame_4970ddbb3f1fff539ebb29770691faee == cache_frame_4970ddbb3f1fff539ebb29770691faee )
    {
        Py_DECREF( frame_4970ddbb3f1fff539ebb29770691faee );
    }
    cache_frame_4970ddbb3f1fff539ebb29770691faee = NULL;

    assertFrameObject( frame_4970ddbb3f1fff539ebb29770691faee );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_8_projected_cg );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_H );
    Py_DECREF( par_H );
    par_H = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_Z );
    Py_DECREF( par_Z );
    par_Z = NULL;

    CHECK_OBJECT( (PyObject *)par_Y );
    Py_DECREF( par_Y );
    par_Y = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_radius );
    Py_DECREF( par_trust_radius );
    par_trust_radius = NULL;

    Py_XDECREF( par_lb );
    par_lb = NULL;

    Py_XDECREF( par_ub );
    par_ub = NULL;

    Py_XDECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_max_iter );
    Py_DECREF( par_max_iter );
    par_max_iter = NULL;

    Py_XDECREF( par_max_infeasible_iter );
    par_max_infeasible_iter = NULL;

    CHECK_OBJECT( (PyObject *)par_return_all );
    Py_DECREF( par_return_all );
    par_return_all = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_allvecs );
    var_allvecs = NULL;

    Py_XDECREF( var_H_p );
    var_H_p = NULL;

    Py_XDECREF( var_rt_g );
    var_rt_g = NULL;

    CHECK_OBJECT( (PyObject *)var_tr_distance );
    Py_DECREF( var_tr_distance );
    var_tr_distance = NULL;

    CHECK_OBJECT( (PyObject *)var_info );
    Py_DECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_hits_boundary );
    var_hits_boundary = NULL;

    Py_XDECREF( var_stop_cond );
    var_stop_cond = NULL;

    Py_XDECREF( var_counter );
    var_counter = NULL;

    Py_XDECREF( var_last_feasible_x );
    var_last_feasible_x = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_pt_H_p );
    var_pt_H_p = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_intersect );
    var_intersect = NULL;

    Py_XDECREF( var_x_next );
    var_x_next = NULL;

    Py_XDECREF( var_theta );
    var_theta = NULL;

    Py_XDECREF( var_r_next );
    var_r_next = NULL;

    Py_XDECREF( var_g_next );
    var_g_next = NULL;

    Py_XDECREF( var_rt_g_next );
    var_rt_g_next = NULL;

    Py_XDECREF( var_beta );
    var_beta = NULL;

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

    CHECK_OBJECT( (PyObject *)par_H );
    Py_DECREF( par_H );
    par_H = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_Z );
    Py_DECREF( par_Z );
    par_Z = NULL;

    CHECK_OBJECT( (PyObject *)par_Y );
    Py_DECREF( par_Y );
    par_Y = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_radius );
    Py_DECREF( par_trust_radius );
    par_trust_radius = NULL;

    Py_XDECREF( par_lb );
    par_lb = NULL;

    Py_XDECREF( par_ub );
    par_ub = NULL;

    Py_XDECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( par_max_iter );
    par_max_iter = NULL;

    Py_XDECREF( par_max_infeasible_iter );
    par_max_infeasible_iter = NULL;

    CHECK_OBJECT( (PyObject *)par_return_all );
    Py_DECREF( par_return_all );
    par_return_all = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_allvecs );
    var_allvecs = NULL;

    Py_XDECREF( var_H_p );
    var_H_p = NULL;

    Py_XDECREF( var_rt_g );
    var_rt_g = NULL;

    Py_XDECREF( var_tr_distance );
    var_tr_distance = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_hits_boundary );
    var_hits_boundary = NULL;

    Py_XDECREF( var_stop_cond );
    var_stop_cond = NULL;

    Py_XDECREF( var_counter );
    var_counter = NULL;

    Py_XDECREF( var_last_feasible_x );
    var_last_feasible_x = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_pt_H_p );
    var_pt_H_p = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_intersect );
    var_intersect = NULL;

    Py_XDECREF( var_x_next );
    var_x_next = NULL;

    Py_XDECREF( var_theta );
    var_theta = NULL;

    Py_XDECREF( var_r_next );
    var_r_next = NULL;

    Py_XDECREF( var_g_next );
    var_g_next = NULL;

    Py_XDECREF( var_rt_g_next );
    var_rt_g_next = NULL;

    Py_XDECREF( var_beta );
    var_beta = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$qp_subproblem$$$function_8_projected_cg );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_1_eqp_kktfact(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_1_eqp_kktfact,
        const_str_plain_eqp_kktfact,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_96a2600d6885b9af4f8374dc1f43ba22,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$qp_subproblem,
        const_str_digest_ae30b5ed6718be83882dd52e5b4dada1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_2_sphere_intersections( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_2_sphere_intersections,
        const_str_plain_sphere_intersections,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_68efe24c6338864a15f01fbc6ed6465e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$qp_subproblem,
        const_str_digest_07b5a8a2cf98ad82e12c0f2977245793,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_3_box_intersections( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_3_box_intersections,
        const_str_plain_box_intersections,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_355a0b9b6b487cf199f6b2ae15c993ea,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$qp_subproblem,
        const_str_digest_6bf8b1b8e4ee9fa66a6506e3921f5f91,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_4_box_sphere_intersections( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_4_box_sphere_intersections,
        const_str_plain_box_sphere_intersections,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4ac45f550ce5ee7082e2413b858efddc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$qp_subproblem,
        const_str_digest_606c04355fa450fae1dc3094c0a2b0ae,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_5_inside_box_boundaries(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_5_inside_box_boundaries,
        const_str_plain_inside_box_boundaries,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_57469c5b6429216315e0d77831d6a3c8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$qp_subproblem,
        const_str_digest_4ca9940868ffb7b6607526372839914f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_6_reinforce_box_boundaries(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_6_reinforce_box_boundaries,
        const_str_plain_reinforce_box_boundaries,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_026d2846f9b950415f757bcab7f1da9c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$qp_subproblem,
        const_str_digest_77591f2e62628f9f8e80948a4120323e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_7_modified_dogleg(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_7_modified_dogleg,
        const_str_plain_modified_dogleg,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e87026034e19521fc476b273a70fdc21,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$qp_subproblem,
        const_str_digest_6992e9966002e103f5b93f52a6fbb633,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_8_projected_cg( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_8_projected_cg,
        const_str_plain_projected_cg,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4970ddbb3f1fff539ebb29770691faee,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$qp_subproblem,
        const_str_digest_8d968cced04fd40093fef48a76809a77,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_trustregion_constr$qp_subproblem =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._trustregion_constr.qp_subproblem",
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

MOD_INIT_DECL( scipy$optimize$_trustregion_constr$qp_subproblem )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_trustregion_constr$qp_subproblem );
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
    puts("scipy.optimize._trustregion_constr.qp_subproblem: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trustregion_constr.qp_subproblem: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trustregion_constr.qp_subproblem: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_trustregion_constr$qp_subproblem" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_trustregion_constr$qp_subproblem = Py_InitModule4(
        "scipy.optimize._trustregion_constr.qp_subproblem",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_trustregion_constr$qp_subproblem = PyModule_Create( &mdef_scipy$optimize$_trustregion_constr$qp_subproblem );
#endif

    moduledict_scipy$optimize$_trustregion_constr$qp_subproblem = MODULE_DICT( module_scipy$optimize$_trustregion_constr$qp_subproblem );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_trustregion_constr$qp_subproblem,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_trustregion_constr$qp_subproblem,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_constr$qp_subproblem,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_constr$qp_subproblem,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_trustregion_constr$qp_subproblem );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_d09452476437838336ef85c20f5e2798, module_scipy$optimize$_trustregion_constr$qp_subproblem );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_a8bfd30bf46a2dde52b1036f502c43a4;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_7273c41be14e90588a900b3cadcba50c;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a8bfd30bf46a2dde52b1036f502c43a4 = MAKE_MODULE_FRAME( codeobj_a8bfd30bf46a2dde52b1036f502c43a4, module_scipy$optimize$_trustregion_constr$qp_subproblem );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a8bfd30bf46a2dde52b1036f502c43a4 );
    assert( Py_REFCNT( frame_a8bfd30bf46a2dde52b1036f502c43a4 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_a8bfd30bf46a2dde52b1036f502c43a4->m_frame.f_lineno = 3;
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


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$qp_subproblem;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_linalg_str_plain_bmat_str_plain_csc_matrix_tuple;
        tmp_level_name_1 = const_int_0;
        frame_a8bfd30bf46a2dde52b1036f502c43a4->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_linalg );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_linalg, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_bmat );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_bmat, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_csc_matrix );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_csc_matrix, tmp_assign_source_11 );
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_math;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$qp_subproblem;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_copysign_tuple;
        tmp_level_name_2 = const_int_0;
        frame_a8bfd30bf46a2dde52b1036f502c43a4->m_frame.f_lineno = 5;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_import_name_from_7 == NULL) );
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_copysign );
        Py_DECREF( tmp_import_name_from_7 );
        assert( !(tmp_assign_source_12 == NULL) );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_copysign, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_numpy;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$qp_subproblem;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_a8bfd30bf46a2dde52b1036f502c43a4->m_frame.f_lineno = 6;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$qp_subproblem;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_norm_tuple;
        tmp_level_name_4 = const_int_0;
        frame_a8bfd30bf46a2dde52b1036f502c43a4->m_frame.f_lineno = 7;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_norm );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = LIST_COPY( const_list_0c3a99b10261af7636f4be1bd284cb4c_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_1_eqp_kktfact(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_eqp_kktfact, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_17 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_2_sphere_intersections( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_sphere_intersections, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_18 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_3_box_intersections( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_box_intersections, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_false_false_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_19 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_4_box_sphere_intersections( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_box_sphere_intersections, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_5_inside_box_boundaries(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_inside_box_boundaries, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_6_reinforce_box_boundaries(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_reinforce_box_boundaries, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_7_modified_dogleg(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_modified_dogleg, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_4;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 412;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = PyTuple_New( 7 );
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
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 4, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 5, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 6, tmp_tuple_element_1 );
        tmp_assign_source_23 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$qp_subproblem$$$function_8_projected_cg( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain_projected_cg, tmp_assign_source_23 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8bfd30bf46a2dde52b1036f502c43a4 );
#endif
    popFrameStack();

    assertFrameObject( frame_a8bfd30bf46a2dde52b1036f502c43a4 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8bfd30bf46a2dde52b1036f502c43a4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8bfd30bf46a2dde52b1036f502c43a4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8bfd30bf46a2dde52b1036f502c43a4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8bfd30bf46a2dde52b1036f502c43a4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$qp_subproblem, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_trustregion_constr$qp_subproblem );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
