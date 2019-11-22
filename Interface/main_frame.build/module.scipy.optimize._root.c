/* Generated code for Python module 'scipy.optimize._root'
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

/* The "_module_scipy$optimize$_root" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_root;
PyDictObject *moduledict_scipy$optimize$_root;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_ier;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_xatol;
static PyObject *const_str_digest_0ce67f4c7dcf2eaa0181aa8827d63dd6;
extern PyObject *const_str_plain_fatol;
extern PyObject *const_str_plain_inf;
static PyObject *const_str_plain__root_leastsq;
extern PyObject *const_str_plain_LinearMixing;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_OptimizeResult;
extern PyObject *const_float_1_49012eminus_08;
extern PyObject *const_str_plain_broyden1;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_d918247a15e69b4b0e33aa8db57efefa;
extern PyObject *const_str_plain_Anderson;
static PyObject *const_tuple_00057c76e5d8f9990c3e77555a0d1b21_tuple;
static PyObject *const_str_digest_def73bc48da041929dfafddc1f99cc1c;
extern PyObject *const_str_plain_minpack;
extern PyObject *const_str_plain_jac;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_49de4e0595ec78a5bec013714c7815cd;
static PyObject *const_str_digest_e1d91470958de1115d7371124989c941;
extern PyObject *const_str_plain_diagbroyden;
extern PyObject *const_str_plain__root_hybr;
extern PyObject *const_str_plain_KrylovJacobian;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_excitingmixing;
static PyObject *const_tuple_tuple_empty_str_plain_hybr_none_none_none_none_tuple;
static PyObject *const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple;
extern PyObject *const_str_plain_callable;
extern PyObject *const_str_plain_func;
extern PyObject *const_tuple_str_plain_fvec_tuple;
extern PyObject *const_str_plain_eps;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_anderson;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_root;
extern PyObject *const_str_plain_factor;
extern PyObject *const_str_plain_diag;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_maxfev;
extern PyObject *const_str_plain_BroydenSecond;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_digest_c88389693d9d476899c1c6e170568469;
extern PyObject *const_tuple_a1260224019a7d5492a023f893da1edd_tuple;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_status;
static PyObject *const_str_plain__callback;
static PyObject *const_str_plain__root_excitingmixing_doc;
static PyObject *const_str_digest_75860c60b9292a8e561a3df75742e216;
extern PyObject *const_str_plain_x_tol;
extern PyObject *const_str_plain_linearmixing;
extern PyObject *const_str_plain_x0;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_col_deriv;
extern PyObject *const_str_plain_xtol;
extern PyObject *const_str_plain_maxiter;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_fun;
static PyObject *const_str_digest_a0b8470aacc209359b39cdf8e0ad4e9f;
static PyObject *const_tuple_d79117c123f5d3bd6a3776b4090a8ff2_tuple;
extern PyObject *const_str_plain_MemoizeJac;
extern PyObject *const_tuple_str_plain_x_str_plain_func_str_plain_args_tuple;
static PyObject *const_tuple_f461ee18533118239b4e6bd967b00f86_tuple;
static PyObject *const_str_digest_119ad745c6a9974ca40e160d7cbf3aa6;
static PyObject *const_tuple_str_digest_72a358c0cf8be062ecca060acdcbcbd3_tuple;
extern PyObject *const_str_plain_ftol;
extern PyObject *const_str_plain_sol;
extern PyObject *const_str_plain_Dfun;
extern PyObject *const_str_plain__check_unknown_options;
extern PyObject *const_str_plain_RuntimeWarning;
static PyObject *const_str_digest_960e9cf3338dff87c7f403b0fc15c0f8;
extern PyObject *const_str_plain_gtol;
static PyObject *const_str_digest_1d7c42f708a785ade06c7b68aba36869;
extern PyObject *const_str_plain_BroydenFirst;
static PyObject *const_str_digest_ee4fa23f56a35904419fd3c8fe4f9c99;
static PyObject *const_str_plain__root_broyden1_doc;
static PyObject *const_str_plain__root_linearmixing_doc;
extern PyObject *const_str_plain_verbose;
static PyObject *const_str_plain__spectral;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_jacobian;
static PyObject *const_tuple_5396a2c560e4082db1e4f941e9fbce32_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_iter;
static PyObject *const_tuple_str_plain__root_df_sane_tuple;
extern PyObject *const_str_plain_pop;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_hybr_str_plain_lm_tuple;
extern PyObject *const_str_plain_msg;
extern PyObject *const_tuple_str_plain_callable_tuple;
static PyObject *const_list_str_plain_root_list;
static PyObject *const_str_digest_84ef70c7d3963026782f73c3205af254;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_2a972fe546c2e0e08572bf2f89912cf9;
static PyObject *const_str_plain_cov_x;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_line_search;
extern PyObject *const_str_plain_meth;
extern PyObject *const_str_plain_setdefault;
extern PyObject *const_str_plain_callback;
static PyObject *const_str_plain__warn_jac_unused;
static PyObject *const_str_plain_raise_exception;
static PyObject *const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple;
extern PyObject *const_str_plain_unknown_options;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_full_output;
extern PyObject *const_str_plain_optimize;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_a6ac7b23c79d2c95575fcb80fee9f860;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_f_rtol;
extern PyObject *const_str_plain_derivative;
extern PyObject *const_str_plain_armijo;
static PyObject *const_str_plain__root_broyden2_doc;
extern PyObject *const_str_plain_f_tol;
static PyObject *const_str_plain_tol_norm;
static PyObject *const_tuple_str_plain_nonlin_tuple;
extern PyObject *const_str_plain_broyden2;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_x_rtol;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain__root_hybr_str_plain_leastsq_tuple;
static PyObject *const_str_plain__root_diagbroyden_doc;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_digest_b21697a8dbf086a46d9ca589af9912aa;
extern PyObject *const_str_plain_epsfcn;
extern PyObject *const_str_plain_DiagBroyden;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_krylov;
extern PyObject *const_str_plain_fvec;
extern PyObject *const_tuple_str_plain_warn_tuple;
static PyObject *const_tuple_str_plain_jac_str_plain_method_tuple;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_lm;
extern PyObject *const_str_plain_leastsq;
extern PyObject *const_str_plain_method;
static PyObject *const_str_plain__root_krylov_doc;
extern PyObject *const_str_plain_ExcitingMixing;
static PyObject *const_str_digest_7e7c58c0cf3249e7e7b914c1a04b560b;
static PyObject *const_str_digest_dfcf7c7bfb1872f43ecd93e293d9ae84;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain__root_df_sane;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain__method;
extern PyObject *const_str_plain_nonlin;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_empty;
static PyObject *const_str_plain__root_anderson_doc;
static PyObject *const_str_plain_hybr;
extern PyObject *const_tuple_int_pos_1_int_pos_2_int_pos_3_int_pos_4_tuple;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_nonlin_solve;
extern PyObject *const_int_pos_100;
extern PyObject *const_str_plain_success;
static PyObject *const_str_plain__root_nonlin_solve;
static PyObject *const_str_digest_72a358c0cf8be062ecca060acdcbcbd3;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_0ce67f4c7dcf2eaa0181aa8827d63dd6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4998442 ], 1706, 0 );
    const_str_plain__root_leastsq = UNSTREAM_STRING_ASCII( &constant_bin[ 5000148 ], 13, 1 );
    const_str_digest_d918247a15e69b4b0e33aa8db57efefa = UNSTREAM_STRING_ASCII( &constant_bin[ 5000161 ], 20, 0 );
    const_tuple_00057c76e5d8f9990c3e77555a0d1b21_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5000181 ], 208 );
    const_str_digest_def73bc48da041929dfafddc1f99cc1c = UNSTREAM_STRING_ASCII( &constant_bin[ 5000389 ], 2623, 0 );
    const_str_digest_49de4e0595ec78a5bec013714c7815cd = UNSTREAM_STRING_ASCII( &constant_bin[ 5003012 ], 29, 0 );
    const_str_digest_e1d91470958de1115d7371124989c941 = UNSTREAM_STRING_ASCII( &constant_bin[ 5003041 ], 35, 0 );
    const_tuple_tuple_empty_str_plain_hybr_none_none_none_none_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_str_plain_hybr_none_none_none_none_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_str_plain_hybr = UNSTREAM_STRING_ASCII( &constant_bin[ 4702691 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_str_plain_hybr_none_none_none_none_tuple, 1, const_str_plain_hybr ); Py_INCREF( const_str_plain_hybr );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_str_plain_hybr_none_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_str_plain_hybr_none_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_str_plain_hybr_none_none_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_str_plain_hybr_none_none_none_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 5, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 7, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 8, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 9, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 10, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 11, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 12, const_str_plain_armijo ); Py_INCREF( const_str_plain_armijo );
    PyTuple_SET_ITEM( const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple, 13, Py_None ); Py_INCREF( Py_None );
    const_str_plain__callback = UNSTREAM_STRING_ASCII( &constant_bin[ 930869 ], 9, 1 );
    const_str_plain__root_excitingmixing_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5003076 ], 24, 1 );
    const_str_digest_75860c60b9292a8e561a3df75742e216 = UNSTREAM_STRING_ASCII( &constant_bin[ 5003100 ], 2713, 0 );
    const_str_digest_a0b8470aacc209359b39cdf8e0ad4e9f = UNSTREAM_STRING_ASCII( &constant_bin[ 5005813 ], 1218, 0 );
    const_tuple_d79117c123f5d3bd6a3776b4090a8ff2_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_d79117c123f5d3bd6a3776b4090a8ff2_tuple, 0, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_d79117c123f5d3bd6a3776b4090a8ff2_tuple, 1, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_d79117c123f5d3bd6a3776b4090a8ff2_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_d79117c123f5d3bd6a3776b4090a8ff2_tuple, 3, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_d79117c123f5d3bd6a3776b4090a8ff2_tuple, 4, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_d79117c123f5d3bd6a3776b4090a8ff2_tuple, 5, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_d79117c123f5d3bd6a3776b4090a8ff2_tuple, 6, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    PyTuple_SET_ITEM( const_tuple_d79117c123f5d3bd6a3776b4090a8ff2_tuple, 7, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_d79117c123f5d3bd6a3776b4090a8ff2_tuple, 8, const_str_plain_meth ); Py_INCREF( const_str_plain_meth );
    PyTuple_SET_ITEM( const_tuple_d79117c123f5d3bd6a3776b4090a8ff2_tuple, 9, const_str_plain_sol ); Py_INCREF( const_str_plain_sol );
    const_tuple_f461ee18533118239b4e6bd967b00f86_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_f461ee18533118239b4e6bd967b00f86_tuple, 0, const_str_plain_broyden1 ); Py_INCREF( const_str_plain_broyden1 );
    PyTuple_SET_ITEM( const_tuple_f461ee18533118239b4e6bd967b00f86_tuple, 1, const_str_plain_broyden2 ); Py_INCREF( const_str_plain_broyden2 );
    PyTuple_SET_ITEM( const_tuple_f461ee18533118239b4e6bd967b00f86_tuple, 2, const_str_plain_anderson ); Py_INCREF( const_str_plain_anderson );
    PyTuple_SET_ITEM( const_tuple_f461ee18533118239b4e6bd967b00f86_tuple, 3, const_str_plain_linearmixing ); Py_INCREF( const_str_plain_linearmixing );
    PyTuple_SET_ITEM( const_tuple_f461ee18533118239b4e6bd967b00f86_tuple, 4, const_str_plain_diagbroyden ); Py_INCREF( const_str_plain_diagbroyden );
    PyTuple_SET_ITEM( const_tuple_f461ee18533118239b4e6bd967b00f86_tuple, 5, const_str_plain_excitingmixing ); Py_INCREF( const_str_plain_excitingmixing );
    PyTuple_SET_ITEM( const_tuple_f461ee18533118239b4e6bd967b00f86_tuple, 6, const_str_plain_krylov ); Py_INCREF( const_str_plain_krylov );
    const_str_digest_119ad745c6a9974ca40e160d7cbf3aa6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5007031 ], 1459, 0 );
    const_tuple_str_digest_72a358c0cf8be062ecca060acdcbcbd3_tuple = PyTuple_New( 1 );
    const_str_digest_72a358c0cf8be062ecca060acdcbcbd3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5008490 ], 7, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_72a358c0cf8be062ecca060acdcbcbd3_tuple, 0, const_str_digest_72a358c0cf8be062ecca060acdcbcbd3 ); Py_INCREF( const_str_digest_72a358c0cf8be062ecca060acdcbcbd3 );
    const_str_digest_960e9cf3338dff87c7f403b0fc15c0f8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5008497 ], 1598, 0 );
    const_str_digest_1d7c42f708a785ade06c7b68aba36869 = UNSTREAM_STRING_ASCII( &constant_bin[ 5010095 ], 5255, 0 );
    const_str_digest_ee4fa23f56a35904419fd3c8fe4f9c99 = UNSTREAM_STRING_ASCII( &constant_bin[ 5015350 ], 112, 0 );
    const_str_plain__root_broyden1_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5015462 ], 18, 1 );
    const_str_plain__root_linearmixing_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5015480 ], 22, 1 );
    const_str_plain__spectral = UNSTREAM_STRING_ASCII( &constant_bin[ 780363 ], 9, 1 );
    const_tuple_5396a2c560e4082db1e4f941e9fbce32_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_5396a2c560e4082db1e4f941e9fbce32_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_5396a2c560e4082db1e4f941e9fbce32_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5396a2c560e4082db1e4f941e9fbce32_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_5396a2c560e4082db1e4f941e9fbce32_tuple, 3, const_float_1_49012eminus_08 ); Py_INCREF( const_float_1_49012eminus_08 );
    PyTuple_SET_ITEM( const_tuple_5396a2c560e4082db1e4f941e9fbce32_tuple, 4, const_float_1_49012eminus_08 ); Py_INCREF( const_float_1_49012eminus_08 );
    PyTuple_SET_ITEM( const_tuple_5396a2c560e4082db1e4f941e9fbce32_tuple, 5, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    PyTuple_SET_ITEM( const_tuple_5396a2c560e4082db1e4f941e9fbce32_tuple, 6, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_5396a2c560e4082db1e4f941e9fbce32_tuple, 7, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    PyTuple_SET_ITEM( const_tuple_5396a2c560e4082db1e4f941e9fbce32_tuple, 8, const_int_pos_100 ); Py_INCREF( const_int_pos_100 );
    PyTuple_SET_ITEM( const_tuple_5396a2c560e4082db1e4f941e9fbce32_tuple, 9, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain__root_df_sane_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__root_df_sane_tuple, 0, const_str_plain__root_df_sane ); Py_INCREF( const_str_plain__root_df_sane );
    const_tuple_str_plain_hybr_str_plain_lm_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hybr_str_plain_lm_tuple, 0, const_str_plain_hybr ); Py_INCREF( const_str_plain_hybr );
    PyTuple_SET_ITEM( const_tuple_str_plain_hybr_str_plain_lm_tuple, 1, const_str_plain_lm ); Py_INCREF( const_str_plain_lm );
    const_list_str_plain_root_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_root_list, 0, const_str_plain_root ); Py_INCREF( const_str_plain_root );
    const_str_digest_84ef70c7d3963026782f73c3205af254 = UNSTREAM_STRING_ASCII( &constant_bin[ 5015502 ], 1457, 0 );
    const_str_digest_2a972fe546c2e0e08572bf2f89912cf9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5016959 ], 2708, 0 );
    const_str_plain_cov_x = UNSTREAM_STRING_ASCII( &constant_bin[ 5019667 ], 5, 1 );
    const_str_plain__warn_jac_unused = UNSTREAM_STRING_ASCII( &constant_bin[ 5019672 ], 16, 1 );
    const_str_plain_raise_exception = UNSTREAM_STRING_ASCII( &constant_bin[ 5019688 ], 15, 1 );
    const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 1, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 3, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 4, const_str_plain_col_deriv ); Py_INCREF( const_str_plain_col_deriv );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 5, const_str_plain_xtol ); Py_INCREF( const_str_plain_xtol );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 6, const_str_plain_ftol ); Py_INCREF( const_str_plain_ftol );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 7, const_str_plain_gtol ); Py_INCREF( const_str_plain_gtol );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 8, const_str_plain_maxiter ); Py_INCREF( const_str_plain_maxiter );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 9, const_str_plain_eps ); Py_INCREF( const_str_plain_eps );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 10, const_str_plain_factor ); Py_INCREF( const_str_plain_factor );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 11, const_str_plain_diag ); Py_INCREF( const_str_plain_diag );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 12, const_str_plain_unknown_options ); Py_INCREF( const_str_plain_unknown_options );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 13, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 14, const_str_plain_cov_x ); Py_INCREF( const_str_plain_cov_x );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 15, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 16, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 17, const_str_plain_ier ); Py_INCREF( const_str_plain_ier );
    PyTuple_SET_ITEM( const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 18, const_str_plain_sol ); Py_INCREF( const_str_plain_sol );
    const_str_digest_a6ac7b23c79d2c95575fcb80fee9f860 = UNSTREAM_STRING_ASCII( &constant_bin[ 5019703 ], 42, 0 );
    const_str_plain__root_broyden2_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5019745 ], 18, 1 );
    const_str_plain_tol_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 4999367 ], 8, 1 );
    const_tuple_str_plain_nonlin_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_nonlin_tuple, 0, const_str_plain_nonlin ); Py_INCREF( const_str_plain_nonlin );
    const_tuple_str_plain__root_hybr_str_plain_leastsq_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain__root_hybr_str_plain_leastsq_tuple, 0, const_str_plain__root_hybr ); Py_INCREF( const_str_plain__root_hybr );
    PyTuple_SET_ITEM( const_tuple_str_plain__root_hybr_str_plain_leastsq_tuple, 1, const_str_plain_leastsq ); Py_INCREF( const_str_plain_leastsq );
    const_str_plain__root_diagbroyden_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5019763 ], 21, 1 );
    const_tuple_str_plain_jac_str_plain_method_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_jac_str_plain_method_tuple, 0, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_str_plain_jac_str_plain_method_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    const_str_plain__root_krylov_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5019784 ], 16, 1 );
    const_str_digest_7e7c58c0cf3249e7e7b914c1a04b560b = UNSTREAM_STRING_ASCII( &constant_bin[ 5019800 ], 23, 0 );
    const_str_digest_dfcf7c7bfb1872f43ecd93e293d9ae84 = UNSTREAM_STRING_ASCII( &constant_bin[ 5019823 ], 29, 0 );
    const_str_plain__root_anderson_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5019852 ], 18, 1 );
    const_str_plain__root_nonlin_solve = UNSTREAM_STRING_ASCII( &constant_bin[ 5019823 ], 18, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_root( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_30e54f704738b041ae4a0ed2242d55aa;
static PyCodeObject *codeobj_ea4760c988e1dee0e049b178ccfb79b9;
static PyCodeObject *codeobj_996371d280206eb79639ec81da733cc3;
static PyCodeObject *codeobj_d8f13d7d054161fbc5793a4ac32770bc;
static PyCodeObject *codeobj_860be5066fa12dedc1ba36b4c342a5b3;
static PyCodeObject *codeobj_7fa65bc80f0227eb710704491ab9598d;
static PyCodeObject *codeobj_d78db3af49dcf71b8611f1ecc9437a9f;
static PyCodeObject *codeobj_0043b3f6abd6c0526e6c0cbf4ce8d552;
static PyCodeObject *codeobj_959ce572759ae8d95bb90b3575d18eac;
static PyCodeObject *codeobj_c02e3ad48884dcb9e3024f961a7e265e;
static PyCodeObject *codeobj_7e4e821c14cce42d0ee4c412c924dff6;
static PyCodeObject *codeobj_ef6030c853ebb8da8db3fa73b676d031;
static PyCodeObject *codeobj_9e7579c24e07e709b6ab698c97669edc;
static PyCodeObject *codeobj_0ebc43c23b7634f6e74d7d75ee98bd7e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7e7c58c0cf3249e7e7b914c1a04b560b );
    codeobj_30e54f704738b041ae4a0ed2242d55aa = MAKE_CODEOBJ( module_filename_obj, const_str_digest_49de4e0595ec78a5bec013714c7815cd, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_ea4760c988e1dee0e049b178ccfb79b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_anderson_doc, 436, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_996371d280206eb79639ec81da733cc3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_broyden1_doc, 307, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d8f13d7d054161fbc5793a4ac32770bc = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_broyden2_doc, 371, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_860be5066fa12dedc1ba36b4c342a5b3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_diagbroyden_doc, 515, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_7fa65bc80f0227eb710704491ab9598d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_excitingmixing_doc, 552, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d78db3af49dcf71b8611f1ecc9437a9f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_krylov_doc, 592, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0043b3f6abd6c0526e6c0cbf4ce8d552 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_leastsq, 212, const_tuple_42ca118648af39c754d10e5c0dd82b85_tuple, 12, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_959ce572759ae8d95bb90b3575d18eac = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_linearmixing_doc, 478, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_c02e3ad48884dcb9e3024f961a7e265e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_nonlin_solve, 260, const_tuple_00057c76e5d8f9990c3e77555a0d1b21_tuple, 16, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_7e4e821c14cce42d0ee4c412c924dff6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__warn_jac_unused, 206, const_tuple_str_plain_jac_str_plain_method_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ef6030c853ebb8da8db3fa73b676d031 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_f, 287, const_tuple_str_plain_x_str_plain_func_str_plain_args_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_9e7579c24e07e709b6ab698c97669edc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_f, 290, const_tuple_str_plain_x_str_plain_func_str_plain_args_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_0ebc43c23b7634f6e74d7d75ee98bd7e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_root, 24, const_tuple_d79117c123f5d3bd6a3776b4090a8ff2_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_10__root_excitingmixing_doc(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_11__root_krylov_doc(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_1_root( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_2__warn_jac_unused(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_3__root_leastsq( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_4__root_nonlin_solve( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_1_f(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_2_f(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_5__root_broyden1_doc(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_6__root_broyden2_doc(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_7__root_anderson_doc(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_8__root_linearmixing_doc(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_9__root_diagbroyden_doc(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_root$$$function_1_root( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_method = python_pars[ 3 ];
    PyObject *par_jac = python_pars[ 4 ];
    PyObject *par_tol = python_pars[ 5 ];
    PyObject *par_callback = python_pars[ 6 ];
    PyObject *par_options = python_pars[ 7 ];
    PyObject *var_meth = NULL;
    PyObject *var_sol = NULL;
    struct Nuitka_FrameObject *frame_0ebc43c23b7634f6e74d7d75ee98bd7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0ebc43c23b7634f6e74d7d75ee98bd7e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0ebc43c23b7634f6e74d7d75ee98bd7e, codeobj_0ebc43c23b7634f6e74d7d75ee98bd7e, module_scipy$optimize$_root, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0ebc43c23b7634f6e74d7d75ee98bd7e = cache_frame_0ebc43c23b7634f6e74d7d75ee98bd7e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0ebc43c23b7634f6e74d7d75ee98bd7e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0ebc43c23b7634f6e74d7d75ee98bd7e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_args );
        tmp_isinstance_inst_1 = par_args;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_args );
            tmp_tuple_element_1 = par_args;
            tmp_assign_source_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
            {
                PyObject *old = par_args;
                assert( old != NULL );
                par_args = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_method );
        tmp_called_instance_1 = par_method;
        frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame.f_lineno = 156;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_meth == NULL );
        var_meth = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_options );
        tmp_compexpr_left_1 = par_options;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_assign_source_3 = PyDict_New();
            {
                PyObject *old = par_options;
                assert( old != NULL );
                par_options = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_callback );
        tmp_compexpr_left_2 = par_callback;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_3 = var_meth;
        tmp_compexpr_right_3 = const_tuple_str_plain_hybr_str_plain_lm_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 161;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_left_name_1 = const_str_digest_e1d91470958de1115d7371124989c941;
            CHECK_OBJECT( par_method );
            tmp_right_name_1 = par_method;
            tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_args_element_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 162;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_2 = tmp_mvar_value_2;
            frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame.f_lineno = 161;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_callable );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_callable );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "callable" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 165;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_jac );
        tmp_args_element_name_3 = par_jac;
        frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_4 = var_meth;
        tmp_compexpr_right_4 = const_tuple_str_plain_hybr_str_plain_lm_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_value_name_1;
            CHECK_OBJECT( par_jac );
            tmp_value_name_1 = par_jac;
            tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_MemoizeJac );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MemoizeJac );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MemoizeJac" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 167;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_4;
                CHECK_OBJECT( par_fun );
                tmp_args_element_name_4 = par_fun;
                frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame.f_lineno = 167;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 167;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_fun;
                    assert( old != NULL );
                    par_fun = tmp_assign_source_4;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_source_name_1;
                CHECK_OBJECT( par_fun );
                tmp_source_name_1 = par_fun;
                tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_derivative );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 168;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_jac;
                    assert( old != NULL );
                    par_jac = tmp_assign_source_5;
                    Py_DECREF( old );
                }

            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_assign_source_6;
                tmp_assign_source_6 = Py_None;
                {
                    PyObject *old = par_jac;
                    assert( old != NULL );
                    par_jac = tmp_assign_source_6;
                    Py_INCREF( par_jac );
                    Py_DECREF( old );
                }

            }
            branch_end_5:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_left_5 = par_tol;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_dict_seq_1;
            CHECK_OBJECT( par_options );
            tmp_dict_seq_1 = par_options;
            tmp_assign_source_7 = TO_DICT( tmp_dict_seq_1, NULL );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_options;
                assert( old != NULL );
                par_options = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( var_meth );
            tmp_compexpr_left_6 = var_meth;
            tmp_compexpr_right_6 = const_tuple_str_plain_hybr_str_plain_lm_tuple;
            tmp_res = PySequence_Contains( tmp_compexpr_right_6, tmp_compexpr_left_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_7 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_instance_2;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                CHECK_OBJECT( par_options );
                tmp_called_instance_2 = par_options;
                tmp_args_element_name_5 = const_str_plain_xtol;
                CHECK_OBJECT( par_tol );
                tmp_args_element_name_6 = par_tol;
                frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame.f_lineno = 176;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_setdefault, call_args );
                }

                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 176;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            goto branch_end_7;
            branch_no_7:;
            {
                nuitka_bool tmp_condition_result_8;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                CHECK_OBJECT( var_meth );
                tmp_compexpr_left_7 = var_meth;
                tmp_compexpr_right_7 = const_tuple_str_digest_72a358c0cf8be062ecca060acdcbcbd3_tuple;
                tmp_res = PySequence_Contains( tmp_compexpr_right_7, tmp_compexpr_left_7 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 177;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_8 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_called_instance_3;
                    PyObject *tmp_call_result_3;
                    PyObject *tmp_args_element_name_7;
                    PyObject *tmp_args_element_name_8;
                    CHECK_OBJECT( par_options );
                    tmp_called_instance_3 = par_options;
                    tmp_args_element_name_7 = const_str_plain_ftol;
                    CHECK_OBJECT( par_tol );
                    tmp_args_element_name_8 = par_tol;
                    frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame.f_lineno = 178;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                        tmp_call_result_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_setdefault, call_args );
                    }

                    if ( tmp_call_result_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 178;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_3 );
                }
                goto branch_end_8;
                branch_no_8:;
                {
                    nuitka_bool tmp_condition_result_9;
                    PyObject *tmp_compexpr_left_8;
                    PyObject *tmp_compexpr_right_8;
                    CHECK_OBJECT( var_meth );
                    tmp_compexpr_left_8 = var_meth;
                    tmp_compexpr_right_8 = const_tuple_f461ee18533118239b4e6bd967b00f86_tuple;
                    tmp_res = PySequence_Contains( tmp_compexpr_right_8, tmp_compexpr_left_8 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 179;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_9 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_called_instance_4;
                        PyObject *tmp_call_result_4;
                        PyObject *tmp_args_element_name_9;
                        PyObject *tmp_args_element_name_10;
                        CHECK_OBJECT( par_options );
                        tmp_called_instance_4 = par_options;
                        tmp_args_element_name_9 = const_str_plain_xtol;
                        CHECK_OBJECT( par_tol );
                        tmp_args_element_name_10 = par_tol;
                        frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame.f_lineno = 181;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_setdefault, call_args );
                        }

                        if ( tmp_call_result_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 181;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_4 );
                    }
                    {
                        PyObject *tmp_called_name_4;
                        PyObject *tmp_source_name_2;
                        PyObject *tmp_call_result_5;
                        PyObject *tmp_args_element_name_11;
                        PyObject *tmp_args_element_name_12;
                        PyObject *tmp_source_name_3;
                        PyObject *tmp_mvar_value_5;
                        CHECK_OBJECT( par_options );
                        tmp_source_name_2 = par_options;
                        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_setdefault );
                        if ( tmp_called_name_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 182;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_args_element_name_11 = const_str_plain_xatol;
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_np );

                        if (unlikely( tmp_mvar_value_5 == NULL ))
                        {
                            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                        }

                        if ( tmp_mvar_value_5 == NULL )
                        {
                            Py_DECREF( tmp_called_name_4 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 182;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_3 = tmp_mvar_value_5;
                        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_inf );
                        if ( tmp_args_element_name_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_4 );

                            exception_lineno = 182;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame.f_lineno = 182;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                        }

                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_args_element_name_12 );
                        if ( tmp_call_result_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 182;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_5 );
                    }
                    {
                        PyObject *tmp_called_name_5;
                        PyObject *tmp_source_name_4;
                        PyObject *tmp_call_result_6;
                        PyObject *tmp_args_element_name_13;
                        PyObject *tmp_args_element_name_14;
                        PyObject *tmp_source_name_5;
                        PyObject *tmp_mvar_value_6;
                        CHECK_OBJECT( par_options );
                        tmp_source_name_4 = par_options;
                        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_setdefault );
                        if ( tmp_called_name_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 183;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_args_element_name_13 = const_str_plain_ftol;
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_np );

                        if (unlikely( tmp_mvar_value_6 == NULL ))
                        {
                            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                        }

                        if ( tmp_mvar_value_6 == NULL )
                        {
                            Py_DECREF( tmp_called_name_5 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 183;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_5 = tmp_mvar_value_6;
                        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_inf );
                        if ( tmp_args_element_name_14 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_5 );

                            exception_lineno = 183;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame.f_lineno = 183;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                        }

                        Py_DECREF( tmp_called_name_5 );
                        Py_DECREF( tmp_args_element_name_14 );
                        if ( tmp_call_result_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 183;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_6 );
                    }
                    {
                        PyObject *tmp_called_name_6;
                        PyObject *tmp_source_name_6;
                        PyObject *tmp_call_result_7;
                        PyObject *tmp_args_element_name_15;
                        PyObject *tmp_args_element_name_16;
                        PyObject *tmp_source_name_7;
                        PyObject *tmp_mvar_value_7;
                        CHECK_OBJECT( par_options );
                        tmp_source_name_6 = par_options;
                        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_setdefault );
                        if ( tmp_called_name_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 184;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_args_element_name_15 = const_str_plain_fatol;
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_np );

                        if (unlikely( tmp_mvar_value_7 == NULL ))
                        {
                            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                        }

                        if ( tmp_mvar_value_7 == NULL )
                        {
                            Py_DECREF( tmp_called_name_6 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 184;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_7 = tmp_mvar_value_7;
                        tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_inf );
                        if ( tmp_args_element_name_16 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_6 );

                            exception_lineno = 184;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame.f_lineno = 184;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
                        }

                        Py_DECREF( tmp_called_name_6 );
                        Py_DECREF( tmp_args_element_name_16 );
                        if ( tmp_call_result_7 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 184;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_7 );
                    }
                    branch_no_9:;
                }
                branch_end_8:;
            }
            branch_end_7:;
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_9 = var_meth;
        tmp_compexpr_right_9 = const_str_plain_hybr;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dircall_arg4_1;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_hybr );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__root_hybr );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_root_hybr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 187;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_8;
            if ( par_fun == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 187;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_2 = par_fun;
            tmp_dircall_arg2_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_x0 );
            tmp_tuple_element_2 = par_x0;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_2 );
            tmp_dict_key_1 = const_str_plain_args;
            CHECK_OBJECT( par_args );
            tmp_dict_value_1 = par_args;
            tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_jac;
            if ( par_jac == NULL )
            {
                Py_DECREF( tmp_dircall_arg2_1 );
                Py_DECREF( tmp_dircall_arg3_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 187;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_2 = par_jac;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            if ( par_options == NULL )
            {
                Py_DECREF( tmp_dircall_arg2_1 );
                Py_DECREF( tmp_dircall_arg3_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 187;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg4_1 = par_options;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_assign_source_8 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_sol == NULL );
            var_sol = tmp_assign_source_8;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            CHECK_OBJECT( var_meth );
            tmp_compexpr_left_10 = var_meth;
            tmp_compexpr_right_10 = const_str_plain_lm;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
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
                PyObject *tmp_assign_source_9;
                PyObject *tmp_dircall_arg1_2;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_dircall_arg2_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_dircall_arg3_2;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                PyObject *tmp_dircall_arg4_2;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_leastsq );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__root_leastsq );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_root_leastsq" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 189;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dircall_arg1_2 = tmp_mvar_value_9;
                if ( par_fun == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 189;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_3 = par_fun;
                tmp_dircall_arg2_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( par_x0 );
                tmp_tuple_element_3 = par_x0;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_3 );
                tmp_dict_key_3 = const_str_plain_args;
                CHECK_OBJECT( par_args );
                tmp_dict_value_3 = par_args;
                tmp_dircall_arg3_2 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_4 = const_str_plain_jac;
                if ( par_jac == NULL )
                {
                    Py_DECREF( tmp_dircall_arg2_2 );
                    Py_DECREF( tmp_dircall_arg3_2 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 189;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dict_value_4 = par_jac;
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_4, tmp_dict_value_4 );
                assert( !(tmp_res != 0) );
                if ( par_options == NULL )
                {
                    Py_DECREF( tmp_dircall_arg2_2 );
                    Py_DECREF( tmp_dircall_arg3_2 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 189;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dircall_arg4_2 = par_options;
                Py_INCREF( tmp_dircall_arg1_2 );
                Py_INCREF( tmp_dircall_arg4_2 );

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
                    tmp_assign_source_9 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                }
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 189;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_sol == NULL );
                var_sol = tmp_assign_source_9;
            }
            goto branch_end_11;
            branch_no_11:;
            {
                nuitka_bool tmp_condition_result_12;
                PyObject *tmp_compexpr_left_11;
                PyObject *tmp_compexpr_right_11;
                CHECK_OBJECT( var_meth );
                tmp_compexpr_left_11 = var_meth;
                tmp_compexpr_right_11 = const_str_digest_72a358c0cf8be062ecca060acdcbcbd3;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 190;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_called_name_7;
                    PyObject *tmp_mvar_value_10;
                    PyObject *tmp_call_result_8;
                    PyObject *tmp_args_element_name_17;
                    PyObject *tmp_args_element_name_18;
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__warn_jac_unused );

                    if (unlikely( tmp_mvar_value_10 == NULL ))
                    {
                        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__warn_jac_unused );
                    }

                    if ( tmp_mvar_value_10 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_warn_jac_unused" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 191;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_7 = tmp_mvar_value_10;
                    if ( par_jac == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 191;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_17 = par_jac;
                    CHECK_OBJECT( par_method );
                    tmp_args_element_name_18 = par_method;
                    frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame.f_lineno = 191;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
                        tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
                    }

                    if ( tmp_call_result_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 191;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_8 );
                }
                {
                    PyObject *tmp_assign_source_10;
                    PyObject *tmp_dircall_arg1_3;
                    PyObject *tmp_mvar_value_11;
                    PyObject *tmp_dircall_arg2_3;
                    PyObject *tmp_tuple_element_4;
                    PyObject *tmp_dircall_arg3_3;
                    PyObject *tmp_dict_key_5;
                    PyObject *tmp_dict_value_5;
                    PyObject *tmp_dict_key_6;
                    PyObject *tmp_dict_value_6;
                    PyObject *tmp_dircall_arg4_3;
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_df_sane );

                    if (unlikely( tmp_mvar_value_11 == NULL ))
                    {
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__root_df_sane );
                    }

                    if ( tmp_mvar_value_11 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_root_df_sane" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 192;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_dircall_arg1_3 = tmp_mvar_value_11;
                    if ( par_fun == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 192;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_tuple_element_4 = par_fun;
                    tmp_dircall_arg2_3 = PyTuple_New( 2 );
                    Py_INCREF( tmp_tuple_element_4 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_4 );
                    CHECK_OBJECT( par_x0 );
                    tmp_tuple_element_4 = par_x0;
                    Py_INCREF( tmp_tuple_element_4 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 1, tmp_tuple_element_4 );
                    tmp_dict_key_5 = const_str_plain_args;
                    CHECK_OBJECT( par_args );
                    tmp_dict_value_5 = par_args;
                    tmp_dircall_arg3_3 = _PyDict_NewPresized( 2 );
                    tmp_res = PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_5, tmp_dict_value_5 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_6 = const_str_plain_callback;
                    CHECK_OBJECT( par_callback );
                    tmp_dict_value_6 = par_callback;
                    tmp_res = PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_6, tmp_dict_value_6 );
                    assert( !(tmp_res != 0) );
                    if ( par_options == NULL )
                    {
                        Py_DECREF( tmp_dircall_arg2_3 );
                        Py_DECREF( tmp_dircall_arg3_3 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 193;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_dircall_arg4_3 = par_options;
                    Py_INCREF( tmp_dircall_arg1_3 );
                    Py_INCREF( tmp_dircall_arg4_3 );

                    {
                        PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3, tmp_dircall_arg4_3};
                        tmp_assign_source_10 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                    }
                    if ( tmp_assign_source_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 192;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_sol == NULL );
                    var_sol = tmp_assign_source_10;
                }
                goto branch_end_12;
                branch_no_12:;
                {
                    nuitka_bool tmp_condition_result_13;
                    PyObject *tmp_compexpr_left_12;
                    PyObject *tmp_compexpr_right_12;
                    CHECK_OBJECT( var_meth );
                    tmp_compexpr_left_12 = var_meth;
                    tmp_compexpr_right_12 = const_tuple_f461ee18533118239b4e6bd967b00f86_tuple;
                    tmp_res = PySequence_Contains( tmp_compexpr_right_12, tmp_compexpr_left_12 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 194;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_13 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_called_name_8;
                        PyObject *tmp_mvar_value_12;
                        PyObject *tmp_call_result_9;
                        PyObject *tmp_args_element_name_19;
                        PyObject *tmp_args_element_name_20;
                        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__warn_jac_unused );

                        if (unlikely( tmp_mvar_value_12 == NULL ))
                        {
                            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__warn_jac_unused );
                        }

                        if ( tmp_mvar_value_12 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_warn_jac_unused" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 196;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_8 = tmp_mvar_value_12;
                        if ( par_jac == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 196;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_args_element_name_19 = par_jac;
                        CHECK_OBJECT( par_method );
                        tmp_args_element_name_20 = par_method;
                        frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame.f_lineno = 196;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
                            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
                        }

                        if ( tmp_call_result_9 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 196;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_9 );
                    }
                    {
                        PyObject *tmp_assign_source_11;
                        PyObject *tmp_dircall_arg1_4;
                        PyObject *tmp_mvar_value_13;
                        PyObject *tmp_dircall_arg2_4;
                        PyObject *tmp_tuple_element_5;
                        PyObject *tmp_dircall_arg3_4;
                        PyObject *tmp_dict_key_7;
                        PyObject *tmp_dict_value_7;
                        PyObject *tmp_dict_key_8;
                        PyObject *tmp_dict_value_8;
                        PyObject *tmp_dict_key_9;
                        PyObject *tmp_dict_value_9;
                        PyObject *tmp_dict_key_10;
                        PyObject *tmp_dict_value_10;
                        PyObject *tmp_dircall_arg4_4;
                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_nonlin_solve );

                        if (unlikely( tmp_mvar_value_13 == NULL ))
                        {
                            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__root_nonlin_solve );
                        }

                        if ( tmp_mvar_value_13 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_root_nonlin_solve" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 197;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_dircall_arg1_4 = tmp_mvar_value_13;
                        if ( par_fun == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 197;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_tuple_element_5 = par_fun;
                        tmp_dircall_arg2_4 = PyTuple_New( 2 );
                        Py_INCREF( tmp_tuple_element_5 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_4, 0, tmp_tuple_element_5 );
                        CHECK_OBJECT( par_x0 );
                        tmp_tuple_element_5 = par_x0;
                        Py_INCREF( tmp_tuple_element_5 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_4, 1, tmp_tuple_element_5 );
                        tmp_dict_key_7 = const_str_plain_args;
                        CHECK_OBJECT( par_args );
                        tmp_dict_value_7 = par_args;
                        tmp_dircall_arg3_4 = _PyDict_NewPresized( 4 );
                        tmp_res = PyDict_SetItem( tmp_dircall_arg3_4, tmp_dict_key_7, tmp_dict_value_7 );
                        assert( !(tmp_res != 0) );
                        tmp_dict_key_8 = const_str_plain_jac;
                        if ( par_jac == NULL )
                        {
                            Py_DECREF( tmp_dircall_arg2_4 );
                            Py_DECREF( tmp_dircall_arg3_4 );
                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 197;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_dict_value_8 = par_jac;
                        tmp_res = PyDict_SetItem( tmp_dircall_arg3_4, tmp_dict_key_8, tmp_dict_value_8 );
                        assert( !(tmp_res != 0) );
                        tmp_dict_key_9 = const_str_plain__method;
                        CHECK_OBJECT( var_meth );
                        tmp_dict_value_9 = var_meth;
                        tmp_res = PyDict_SetItem( tmp_dircall_arg3_4, tmp_dict_key_9, tmp_dict_value_9 );
                        assert( !(tmp_res != 0) );
                        tmp_dict_key_10 = const_str_plain__callback;
                        CHECK_OBJECT( par_callback );
                        tmp_dict_value_10 = par_callback;
                        tmp_res = PyDict_SetItem( tmp_dircall_arg3_4, tmp_dict_key_10, tmp_dict_value_10 );
                        assert( !(tmp_res != 0) );
                        if ( par_options == NULL )
                        {
                            Py_DECREF( tmp_dircall_arg2_4 );
                            Py_DECREF( tmp_dircall_arg3_4 );
                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 199;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_dircall_arg4_4 = par_options;
                        Py_INCREF( tmp_dircall_arg1_4 );
                        Py_INCREF( tmp_dircall_arg4_4 );

                        {
                            PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4, tmp_dircall_arg3_4, tmp_dircall_arg4_4};
                            tmp_assign_source_11 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                        }
                        if ( tmp_assign_source_11 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 197;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_sol == NULL );
                        var_sol = tmp_assign_source_11;
                    }
                    goto branch_end_13;
                    branch_no_13:;
                    {
                        PyObject *tmp_raise_type_1;
                        PyObject *tmp_make_exception_arg_1;
                        PyObject *tmp_left_name_2;
                        PyObject *tmp_right_name_2;
                        tmp_left_name_2 = const_str_digest_b21697a8dbf086a46d9ca589af9912aa;
                        CHECK_OBJECT( par_method );
                        tmp_right_name_2 = par_method;
                        tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                        if ( tmp_make_exception_arg_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 201;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame.f_lineno = 201;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_1 };
                            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        Py_DECREF( tmp_make_exception_arg_1 );
                        assert( !(tmp_raise_type_1 == NULL) );
                        exception_type = tmp_raise_type_1;
                        exception_lineno = 201;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_end_13:;
                }
                branch_end_12:;
            }
            branch_end_11:;
        }
        branch_end_10:;
    }
    if ( var_sol == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sol" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_sol;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ebc43c23b7634f6e74d7d75ee98bd7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ebc43c23b7634f6e74d7d75ee98bd7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ebc43c23b7634f6e74d7d75ee98bd7e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ebc43c23b7634f6e74d7d75ee98bd7e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ebc43c23b7634f6e74d7d75ee98bd7e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ebc43c23b7634f6e74d7d75ee98bd7e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0ebc43c23b7634f6e74d7d75ee98bd7e,
        type_description_1,
        par_fun,
        par_x0,
        par_args,
        par_method,
        par_jac,
        par_tol,
        par_callback,
        par_options,
        var_meth,
        var_sol
    );


    // Release cached frame.
    if ( frame_0ebc43c23b7634f6e74d7d75ee98bd7e == cache_frame_0ebc43c23b7634f6e74d7d75ee98bd7e )
    {
        Py_DECREF( frame_0ebc43c23b7634f6e74d7d75ee98bd7e );
    }
    cache_frame_0ebc43c23b7634f6e74d7d75ee98bd7e = NULL;

    assertFrameObject( frame_0ebc43c23b7634f6e74d7d75ee98bd7e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_1_root );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)var_meth );
    Py_DECREF( var_meth );
    var_meth = NULL;

    Py_XDECREF( var_sol );
    var_sol = NULL;

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

    Py_XDECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_meth );
    var_meth = NULL;

    Py_XDECREF( var_sol );
    var_sol = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_1_root );
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


static PyObject *impl_scipy$optimize$_root$$$function_2__warn_jac_unused( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jac = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_7e4e821c14cce42d0ee4c412c924dff6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7e4e821c14cce42d0ee4c412c924dff6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7e4e821c14cce42d0ee4c412c924dff6, codeobj_7e4e821c14cce42d0ee4c412c924dff6, module_scipy$optimize$_root, sizeof(void *)+sizeof(void *) );
    frame_7e4e821c14cce42d0ee4c412c924dff6 = cache_frame_7e4e821c14cce42d0ee4c412c924dff6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7e4e821c14cce42d0ee4c412c924dff6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7e4e821c14cce42d0ee4c412c924dff6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_jac );
        tmp_compexpr_left_1 = par_jac;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 208;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_left_name_1 = const_str_digest_a6ac7b23c79d2c95575fcb80fee9f860;
            CHECK_OBJECT( par_method );
            tmp_tuple_element_1 = par_method;
            tmp_right_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_args_element_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 209;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_2 = tmp_mvar_value_2;
            frame_7e4e821c14cce42d0ee4c412c924dff6->m_frame.f_lineno = 208;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e4e821c14cce42d0ee4c412c924dff6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e4e821c14cce42d0ee4c412c924dff6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7e4e821c14cce42d0ee4c412c924dff6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7e4e821c14cce42d0ee4c412c924dff6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7e4e821c14cce42d0ee4c412c924dff6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7e4e821c14cce42d0ee4c412c924dff6,
        type_description_1,
        par_jac,
        par_method
    );


    // Release cached frame.
    if ( frame_7e4e821c14cce42d0ee4c412c924dff6 == cache_frame_7e4e821c14cce42d0ee4c412c924dff6 )
    {
        Py_DECREF( frame_7e4e821c14cce42d0ee4c412c924dff6 );
    }
    cache_frame_7e4e821c14cce42d0ee4c412c924dff6 = NULL;

    assertFrameObject( frame_7e4e821c14cce42d0ee4c412c924dff6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_2__warn_jac_unused );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

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

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_2__warn_jac_unused );
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


static PyObject *impl_scipy$optimize$_root$$$function_3__root_leastsq( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_jac = python_pars[ 3 ];
    PyObject *par_col_deriv = python_pars[ 4 ];
    PyObject *par_xtol = python_pars[ 5 ];
    PyObject *par_ftol = python_pars[ 6 ];
    PyObject *par_gtol = python_pars[ 7 ];
    PyObject *par_maxiter = python_pars[ 8 ];
    PyObject *par_eps = python_pars[ 9 ];
    PyObject *par_factor = python_pars[ 10 ];
    PyObject *par_diag = python_pars[ 11 ];
    PyObject *par_unknown_options = python_pars[ 12 ];
    PyObject *var_x = NULL;
    PyObject *var_cov_x = NULL;
    PyObject *var_info = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_ier = NULL;
    PyObject *var_sol = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0043b3f6abd6c0526e6c0cbf4ce8d552;
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
    static struct Nuitka_FrameObject *cache_frame_0043b3f6abd6c0526e6c0cbf4ce8d552 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0043b3f6abd6c0526e6c0cbf4ce8d552, codeobj_0043b3f6abd6c0526e6c0cbf4ce8d552, module_scipy$optimize$_root, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0043b3f6abd6c0526e6c0cbf4ce8d552 = cache_frame_0043b3f6abd6c0526e6c0cbf4ce8d552;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0043b3f6abd6c0526e6c0cbf4ce8d552 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0043b3f6abd6c0526e6c0cbf4ce8d552 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__check_unknown_options );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_unknown_options );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_unknown_options" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 246;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_unknown_options );
        tmp_args_element_name_1 = par_unknown_options;
        frame_0043b3f6abd6c0526e6c0cbf4ce8d552->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
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
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_leastsq );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_leastsq );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "leastsq" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 247;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_func );
        tmp_tuple_element_1 = par_func;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_x0 );
        tmp_tuple_element_1 = par_x0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_args;
        CHECK_OBJECT( par_args );
        tmp_dict_value_1 = par_args;
        tmp_kw_name_1 = _PyDict_NewPresized( 11 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_Dfun;
        CHECK_OBJECT( par_jac );
        tmp_dict_value_2 = par_jac;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_full_output;
        tmp_dict_value_3 = Py_True;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_col_deriv;
        CHECK_OBJECT( par_col_deriv );
        tmp_dict_value_4 = par_col_deriv;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_xtol;
        CHECK_OBJECT( par_xtol );
        tmp_dict_value_5 = par_xtol;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_ftol;
        CHECK_OBJECT( par_ftol );
        tmp_dict_value_6 = par_ftol;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_gtol;
        CHECK_OBJECT( par_gtol );
        tmp_dict_value_7 = par_gtol;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_maxfev;
        CHECK_OBJECT( par_maxiter );
        tmp_dict_value_8 = par_maxiter;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_epsfcn;
        CHECK_OBJECT( par_eps );
        tmp_dict_value_9 = par_eps;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_factor;
        CHECK_OBJECT( par_factor );
        tmp_dict_value_10 = par_factor;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_diag;
        CHECK_OBJECT( par_diag );
        tmp_dict_value_11 = par_diag;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        frame_0043b3f6abd6c0526e6c0cbf4ce8d552->m_frame.f_lineno = 247;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 5 );
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 247;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 5 );
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 247;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 5 );
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 247;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_4, 3, 5 );
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 247;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_5, 4, 5 );
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 247;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_5 == NULL );
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_6;
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
                    exception_lineno = 247;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 247;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_x = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert( var_cov_x == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_cov_x = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert( var_info == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_info = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
        assert( var_msg == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_msg = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_5;
        assert( var_ier == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_ier = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_called_instance_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_dict_key_12 = const_str_plain_x;
        CHECK_OBJECT( var_x );
        tmp_dict_value_12 = var_x;
        tmp_kw_name_2 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_12, tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_13 = const_str_plain_message;
        CHECK_OBJECT( var_msg );
        tmp_dict_value_13 = var_msg;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_13, tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_14 = const_str_plain_status;
        CHECK_OBJECT( var_ier );
        tmp_dict_value_14 = var_ier;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_14, tmp_dict_value_14 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_15 = const_str_plain_success;
        CHECK_OBJECT( var_ier );
        tmp_compexpr_left_1 = var_ier;
        tmp_compexpr_right_1 = const_tuple_int_pos_1_int_pos_2_int_pos_3_int_pos_4_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 254;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_15 = ( tmp_res == 1 ) ? Py_True : Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_15, tmp_dict_value_15 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_16 = const_str_plain_cov_x;
        CHECK_OBJECT( var_cov_x );
        tmp_dict_value_16 = var_cov_x;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_16, tmp_dict_value_16 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_17 = const_str_plain_fun;
        CHECK_OBJECT( var_info );
        tmp_called_instance_1 = var_info;
        frame_0043b3f6abd6c0526e6c0cbf4ce8d552->m_frame.f_lineno = 255;
        tmp_dict_value_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_fvec_tuple, 0 ) );

        if ( tmp_dict_value_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_17, tmp_dict_value_17 );
        Py_DECREF( tmp_dict_value_17 );
        assert( !(tmp_res != 0) );
        frame_0043b3f6abd6c0526e6c0cbf4ce8d552->m_frame.f_lineno = 253;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sol == NULL );
        var_sol = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_sol );
        tmp_called_instance_2 = var_sol;
        CHECK_OBJECT( var_info );
        tmp_args_element_name_2 = var_info;
        frame_0043b3f6abd6c0526e6c0cbf4ce8d552->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_update, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0043b3f6abd6c0526e6c0cbf4ce8d552 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0043b3f6abd6c0526e6c0cbf4ce8d552 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0043b3f6abd6c0526e6c0cbf4ce8d552, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0043b3f6abd6c0526e6c0cbf4ce8d552->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0043b3f6abd6c0526e6c0cbf4ce8d552, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0043b3f6abd6c0526e6c0cbf4ce8d552,
        type_description_1,
        par_func,
        par_x0,
        par_args,
        par_jac,
        par_col_deriv,
        par_xtol,
        par_ftol,
        par_gtol,
        par_maxiter,
        par_eps,
        par_factor,
        par_diag,
        par_unknown_options,
        var_x,
        var_cov_x,
        var_info,
        var_msg,
        var_ier,
        var_sol
    );


    // Release cached frame.
    if ( frame_0043b3f6abd6c0526e6c0cbf4ce8d552 == cache_frame_0043b3f6abd6c0526e6c0cbf4ce8d552 )
    {
        Py_DECREF( frame_0043b3f6abd6c0526e6c0cbf4ce8d552 );
    }
    cache_frame_0043b3f6abd6c0526e6c0cbf4ce8d552 = NULL;

    assertFrameObject( frame_0043b3f6abd6c0526e6c0cbf4ce8d552 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_sol );
    tmp_return_value = var_sol;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_3__root_leastsq );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_col_deriv );
    Py_DECREF( par_col_deriv );
    par_col_deriv = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_eps );
    Py_DECREF( par_eps );
    par_eps = NULL;

    CHECK_OBJECT( (PyObject *)par_factor );
    Py_DECREF( par_factor );
    par_factor = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_cov_x );
    Py_DECREF( var_cov_x );
    var_cov_x = NULL;

    CHECK_OBJECT( (PyObject *)var_info );
    Py_DECREF( var_info );
    var_info = NULL;

    CHECK_OBJECT( (PyObject *)var_msg );
    Py_DECREF( var_msg );
    var_msg = NULL;

    CHECK_OBJECT( (PyObject *)var_ier );
    Py_DECREF( var_ier );
    var_ier = NULL;

    CHECK_OBJECT( (PyObject *)var_sol );
    Py_DECREF( var_sol );
    var_sol = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_col_deriv );
    Py_DECREF( par_col_deriv );
    par_col_deriv = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_eps );
    Py_DECREF( par_eps );
    par_eps = NULL;

    CHECK_OBJECT( (PyObject *)par_factor );
    Py_DECREF( par_factor );
    par_factor = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_cov_x );
    var_cov_x = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    Py_XDECREF( var_ier );
    var_ier = NULL;

    Py_XDECREF( var_sol );
    var_sol = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_3__root_leastsq );
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


static PyObject *impl_scipy$optimize$_root$$$function_4__root_nonlin_solve( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_x0 = python_pars[ 1 ];
    struct Nuitka_CellObject *par_args = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *par_jac = python_pars[ 3 ];
    PyObject *par__callback = python_pars[ 4 ];
    PyObject *par__method = python_pars[ 5 ];
    PyObject *par_nit = python_pars[ 6 ];
    PyObject *par_disp = python_pars[ 7 ];
    PyObject *par_maxiter = python_pars[ 8 ];
    PyObject *par_ftol = python_pars[ 9 ];
    PyObject *par_fatol = python_pars[ 10 ];
    PyObject *par_xtol = python_pars[ 11 ];
    PyObject *par_xatol = python_pars[ 12 ];
    PyObject *par_tol_norm = python_pars[ 13 ];
    PyObject *par_line_search = python_pars[ 14 ];
    PyObject *par_jac_options = python_pars[ 15 ];
    PyObject *par_unknown_options = python_pars[ 16 ];
    PyObject *var_f_tol = NULL;
    PyObject *var_f_rtol = NULL;
    PyObject *var_x_tol = NULL;
    PyObject *var_x_rtol = NULL;
    PyObject *var_verbose = NULL;
    PyObject *var_jacobian = NULL;
    PyObject *var_f = NULL;
    PyObject *var_x = NULL;
    PyObject *var_info = NULL;
    PyObject *var_sol = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c02e3ad48884dcb9e3024f961a7e265e;
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
    static struct Nuitka_FrameObject *cache_frame_c02e3ad48884dcb9e3024f961a7e265e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c02e3ad48884dcb9e3024f961a7e265e, codeobj_c02e3ad48884dcb9e3024f961a7e265e, module_scipy$optimize$_root, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c02e3ad48884dcb9e3024f961a7e265e = cache_frame_c02e3ad48884dcb9e3024f961a7e265e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c02e3ad48884dcb9e3024f961a7e265e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c02e3ad48884dcb9e3024f961a7e265e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__check_unknown_options );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_unknown_options );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_unknown_options" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 266;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_unknown_options );
        tmp_args_element_name_1 = par_unknown_options;
        frame_c02e3ad48884dcb9e3024f961a7e265e->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( par_fatol );
        tmp_assign_source_1 = par_fatol;
        assert( var_f_tol == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_f_tol = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( par_ftol );
        tmp_assign_source_2 = par_ftol;
        assert( var_f_rtol == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_f_rtol = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( par_xatol );
        tmp_assign_source_3 = par_xatol;
        assert( var_x_tol == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_x_tol = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( par_xtol );
        tmp_assign_source_4 = par_xtol;
        assert( var_x_rtol == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_x_rtol = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( par_disp );
        tmp_assign_source_5 = par_disp;
        assert( var_verbose == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_verbose = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_jac_options );
        tmp_compexpr_left_1 = par_jac_options;
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
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = PyDict_New();
            {
                PyObject *old = par_jac_options;
                assert( old != NULL );
                par_jac_options = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_subscript_name_1;
        tmp_dict_key_1 = const_str_plain_broyden1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_nonlin );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nonlin );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nonlin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 276;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_BroydenFirst );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscribed_name_1 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_subscribed_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_broyden2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_nonlin );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nonlin );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_subscribed_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nonlin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_BroydenSecond );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 277;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_subscribed_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_anderson;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_nonlin );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nonlin );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_subscribed_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nonlin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 278;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Anderson );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 278;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_subscribed_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_linearmixing;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_nonlin );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nonlin );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_subscribed_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nonlin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 279;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_LinearMixing );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 279;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_subscribed_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_diagbroyden;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_nonlin );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nonlin );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_subscribed_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nonlin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 280;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_6;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_DiagBroyden );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 280;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_subscribed_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_excitingmixing;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_nonlin );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nonlin );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_subscribed_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nonlin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 281;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_7;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ExcitingMixing );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 281;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_subscribed_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_krylov;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_nonlin );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nonlin );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_subscribed_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nonlin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 282;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_8;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_KrylovJacobian );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 282;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_subscribed_name_1, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par__method );
        tmp_subscript_name_1 = par__method;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_jacobian == NULL );
        var_jacobian = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( PyCell_GET( par_args ) );
        tmp_truth_name_1 = CHECK_IF_TRUE( PyCell_GET( par_args ) );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( par_jac );
            tmp_truth_name_2 = CHECK_IF_TRUE( par_jac );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 286;
                type_description_1 = "cocoooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_8;
                tmp_assign_source_8 = MAKE_FUNCTION_scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_1_f(  );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] = par_args;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] = par_func;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] );


                assert( var_f == NULL );
                var_f = tmp_assign_source_8;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_9;
                tmp_assign_source_9 = MAKE_FUNCTION_scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_2_f(  );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] = par_args;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[1] = par_func;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[1] );


                assert( var_f == NULL );
                var_f = tmp_assign_source_9;
            }
            branch_end_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( PyCell_GET( par_func ) );
            tmp_assign_source_10 = PyCell_GET( par_func );
            assert( var_f == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_f = tmp_assign_source_10;
        }
        branch_end_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
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
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_nonlin );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nonlin );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nonlin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 295;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_8 = tmp_mvar_value_9;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_nonlin_solve );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if ( var_f == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 295;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = var_f;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_x0 );
        tmp_tuple_element_1 = par_x0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_8 = const_str_plain_jacobian;
        CHECK_OBJECT( var_jacobian );
        tmp_dircall_arg1_1 = var_jacobian;
        CHECK_OBJECT( par_jac_options );
        tmp_dircall_arg2_1 = par_jac_options;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_dict_value_8 = impl___internal__$$$function_3_complex_call_helper_star_dict( dir_call_args );
        }
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 295;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_iter;
        CHECK_OBJECT( par_nit );
        tmp_dict_value_9 = par_nit;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_verbose;
        CHECK_OBJECT( var_verbose );
        tmp_dict_value_10 = var_verbose;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_maxiter;
        CHECK_OBJECT( par_maxiter );
        tmp_dict_value_11 = par_maxiter;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_12 = const_str_plain_f_tol;
        CHECK_OBJECT( var_f_tol );
        tmp_dict_value_12 = var_f_tol;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_12, tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_13 = const_str_plain_f_rtol;
        CHECK_OBJECT( var_f_rtol );
        tmp_dict_value_13 = var_f_rtol;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_13, tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_14 = const_str_plain_x_tol;
        CHECK_OBJECT( var_x_tol );
        tmp_dict_value_14 = var_x_tol;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_14, tmp_dict_value_14 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_15 = const_str_plain_x_rtol;
        CHECK_OBJECT( var_x_rtol );
        tmp_dict_value_15 = var_x_rtol;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_15, tmp_dict_value_15 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_16 = const_str_plain_tol_norm;
        CHECK_OBJECT( par_tol_norm );
        tmp_dict_value_16 = par_tol_norm;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_16, tmp_dict_value_16 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_17 = const_str_plain_line_search;
        CHECK_OBJECT( par_line_search );
        tmp_dict_value_17 = par_line_search;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_17, tmp_dict_value_17 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_18 = const_str_plain_callback;
        CHECK_OBJECT( par__callback );
        tmp_dict_value_18 = par__callback;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_18, tmp_dict_value_18 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_19 = const_str_plain_full_output;
        tmp_dict_value_19 = Py_True;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_19, tmp_dict_value_19 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_20 = const_str_plain_raise_exception;
        tmp_dict_value_20 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_20, tmp_dict_value_20 );
        assert( !(tmp_res != 0) );
        frame_c02e3ad48884dcb9e3024f961a7e265e->m_frame.f_lineno = 295;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "cocoooooooooooooooooooooooo";
            exception_lineno = 295;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "cocoooooooooooooooooooooooo";
            exception_lineno = 295;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
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

                    type_description_1 = "cocoooooooooooooooooooooooo";
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "cocoooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_x = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
        assert( var_info == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_info = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 303;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_10;
        tmp_dict_key_21 = const_str_plain_x;
        CHECK_OBJECT( var_x );
        tmp_dict_value_21 = var_x;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_21, tmp_dict_value_21 );
        assert( !(tmp_res != 0) );
        frame_c02e3ad48884dcb9e3024f961a7e265e->m_frame.f_lineno = 303;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sol == NULL );
        var_sol = tmp_assign_source_16;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_sol );
        tmp_called_instance_1 = var_sol;
        CHECK_OBJECT( var_info );
        tmp_args_element_name_2 = var_info;
        frame_c02e3ad48884dcb9e3024f961a7e265e->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "cocoooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c02e3ad48884dcb9e3024f961a7e265e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c02e3ad48884dcb9e3024f961a7e265e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c02e3ad48884dcb9e3024f961a7e265e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c02e3ad48884dcb9e3024f961a7e265e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c02e3ad48884dcb9e3024f961a7e265e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c02e3ad48884dcb9e3024f961a7e265e,
        type_description_1,
        par_func,
        par_x0,
        par_args,
        par_jac,
        par__callback,
        par__method,
        par_nit,
        par_disp,
        par_maxiter,
        par_ftol,
        par_fatol,
        par_xtol,
        par_xatol,
        par_tol_norm,
        par_line_search,
        par_jac_options,
        par_unknown_options,
        var_f_tol,
        var_f_rtol,
        var_x_tol,
        var_x_rtol,
        var_verbose,
        var_jacobian,
        var_f,
        var_x,
        var_info,
        var_sol
    );


    // Release cached frame.
    if ( frame_c02e3ad48884dcb9e3024f961a7e265e == cache_frame_c02e3ad48884dcb9e3024f961a7e265e )
    {
        Py_DECREF( frame_c02e3ad48884dcb9e3024f961a7e265e );
    }
    cache_frame_c02e3ad48884dcb9e3024f961a7e265e = NULL;

    assertFrameObject( frame_c02e3ad48884dcb9e3024f961a7e265e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_sol );
    tmp_return_value = var_sol;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_4__root_nonlin_solve );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par__callback );
    Py_DECREF( par__callback );
    par__callback = NULL;

    CHECK_OBJECT( (PyObject *)par__method );
    Py_DECREF( par__method );
    par__method = NULL;

    CHECK_OBJECT( (PyObject *)par_nit );
    Py_DECREF( par_nit );
    par_nit = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_fatol );
    Py_DECREF( par_fatol );
    par_fatol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_xatol );
    Py_DECREF( par_xatol );
    par_xatol = NULL;

    CHECK_OBJECT( (PyObject *)par_tol_norm );
    Py_DECREF( par_tol_norm );
    par_tol_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_line_search );
    Py_DECREF( par_line_search );
    par_line_search = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_options );
    Py_DECREF( par_jac_options );
    par_jac_options = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    CHECK_OBJECT( (PyObject *)var_f_tol );
    Py_DECREF( var_f_tol );
    var_f_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_f_rtol );
    Py_DECREF( var_f_rtol );
    var_f_rtol = NULL;

    CHECK_OBJECT( (PyObject *)var_x_tol );
    Py_DECREF( var_x_tol );
    var_x_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_x_rtol );
    Py_DECREF( var_x_rtol );
    var_x_rtol = NULL;

    CHECK_OBJECT( (PyObject *)var_verbose );
    Py_DECREF( var_verbose );
    var_verbose = NULL;

    CHECK_OBJECT( (PyObject *)var_jacobian );
    Py_DECREF( var_jacobian );
    var_jacobian = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_info );
    Py_DECREF( var_info );
    var_info = NULL;

    CHECK_OBJECT( (PyObject *)var_sol );
    Py_DECREF( var_sol );
    var_sol = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par__callback );
    Py_DECREF( par__callback );
    par__callback = NULL;

    CHECK_OBJECT( (PyObject *)par__method );
    Py_DECREF( par__method );
    par__method = NULL;

    CHECK_OBJECT( (PyObject *)par_nit );
    Py_DECREF( par_nit );
    par_nit = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_fatol );
    Py_DECREF( par_fatol );
    par_fatol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_xatol );
    Py_DECREF( par_xatol );
    par_xatol = NULL;

    CHECK_OBJECT( (PyObject *)par_tol_norm );
    Py_DECREF( par_tol_norm );
    par_tol_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_line_search );
    Py_DECREF( par_line_search );
    par_line_search = NULL;

    Py_XDECREF( par_jac_options );
    par_jac_options = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    Py_XDECREF( var_f_tol );
    var_f_tol = NULL;

    Py_XDECREF( var_f_rtol );
    var_f_rtol = NULL;

    Py_XDECREF( var_x_tol );
    var_x_tol = NULL;

    Py_XDECREF( var_x_rtol );
    var_x_rtol = NULL;

    Py_XDECREF( var_verbose );
    var_verbose = NULL;

    Py_XDECREF( var_jacobian );
    var_jacobian = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_sol );
    var_sol = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_4__root_nonlin_solve );
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


static PyObject *impl_scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_1_f( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_ef6030c853ebb8da8db3fa73b676d031;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ef6030c853ebb8da8db3fa73b676d031 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ef6030c853ebb8da8db3fa73b676d031, codeobj_ef6030c853ebb8da8db3fa73b676d031, module_scipy$optimize$_root, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ef6030c853ebb8da8db3fa73b676d031 = cache_frame_ef6030c853ebb8da8db3fa73b676d031;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ef6030c853ebb8da8db3fa73b676d031 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ef6030c853ebb8da8db3fa73b676d031 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_subscript_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 288;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 288;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = PyCell_GET( self->m_closure[0] );
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_subscribed_name_1 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef6030c853ebb8da8db3fa73b676d031 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef6030c853ebb8da8db3fa73b676d031 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef6030c853ebb8da8db3fa73b676d031 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef6030c853ebb8da8db3fa73b676d031, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef6030c853ebb8da8db3fa73b676d031->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef6030c853ebb8da8db3fa73b676d031, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef6030c853ebb8da8db3fa73b676d031,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_ef6030c853ebb8da8db3fa73b676d031 == cache_frame_ef6030c853ebb8da8db3fa73b676d031 )
    {
        Py_DECREF( frame_ef6030c853ebb8da8db3fa73b676d031 );
    }
    cache_frame_ef6030c853ebb8da8db3fa73b676d031 = NULL;

    assertFrameObject( frame_ef6030c853ebb8da8db3fa73b676d031 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_1_f );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_1_f );
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


static PyObject *impl_scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_2_f( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_9e7579c24e07e709b6ab698c97669edc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9e7579c24e07e709b6ab698c97669edc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e7579c24e07e709b6ab698c97669edc, codeobj_9e7579c24e07e709b6ab698c97669edc, module_scipy$optimize$_root, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9e7579c24e07e709b6ab698c97669edc = cache_frame_9e7579c24e07e709b6ab698c97669edc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e7579c24e07e709b6ab698c97669edc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e7579c24e07e709b6ab698c97669edc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = PyCell_GET( self->m_closure[0] );
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e7579c24e07e709b6ab698c97669edc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e7579c24e07e709b6ab698c97669edc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e7579c24e07e709b6ab698c97669edc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e7579c24e07e709b6ab698c97669edc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e7579c24e07e709b6ab698c97669edc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e7579c24e07e709b6ab698c97669edc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e7579c24e07e709b6ab698c97669edc,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_9e7579c24e07e709b6ab698c97669edc == cache_frame_9e7579c24e07e709b6ab698c97669edc )
    {
        Py_DECREF( frame_9e7579c24e07e709b6ab698c97669edc );
    }
    cache_frame_9e7579c24e07e709b6ab698c97669edc = NULL;

    assertFrameObject( frame_9e7579c24e07e709b6ab698c97669edc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_2_f );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_2_f );
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


static PyObject *impl_scipy$optimize$_root$$$function_5__root_broyden1_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_5__root_broyden1_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root$$$function_6__root_broyden2_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_6__root_broyden2_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root$$$function_7__root_anderson_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_7__root_anderson_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root$$$function_8__root_linearmixing_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_8__root_linearmixing_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root$$$function_9__root_diagbroyden_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_9__root_diagbroyden_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root$$$function_10__root_excitingmixing_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_10__root_excitingmixing_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root$$$function_11__root_krylov_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root$$$function_11__root_krylov_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_10__root_excitingmixing_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root$$$function_10__root_excitingmixing_doc,
        const_str_plain__root_excitingmixing_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7fa65bc80f0227eb710704491ab9598d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root,
        const_str_digest_960e9cf3338dff87c7f403b0fc15c0f8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_11__root_krylov_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root$$$function_11__root_krylov_doc,
        const_str_plain__root_krylov_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d78db3af49dcf71b8611f1ecc9437a9f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root,
        const_str_digest_75860c60b9292a8e561a3df75742e216,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_1_root( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root$$$function_1_root,
        const_str_plain_root,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0ebc43c23b7634f6e74d7d75ee98bd7e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root,
        const_str_digest_1d7c42f708a785ade06c7b68aba36869,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_2__warn_jac_unused(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root$$$function_2__warn_jac_unused,
        const_str_plain__warn_jac_unused,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7e4e821c14cce42d0ee4c412c924dff6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_3__root_leastsq( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root$$$function_3__root_leastsq,
        const_str_plain__root_leastsq,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0043b3f6abd6c0526e6c0cbf4ce8d552,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root,
        const_str_digest_a0b8470aacc209359b39cdf8e0ad4e9f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_4__root_nonlin_solve( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root$$$function_4__root_nonlin_solve,
        const_str_plain__root_nonlin_solve,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c02e3ad48884dcb9e3024f961a7e265e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_1_f(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_1_f,
        const_str_plain_f,
#if PYTHON_VERSION >= 300
        const_str_digest_dfcf7c7bfb1872f43ecd93e293d9ae84,
#endif
        codeobj_ef6030c853ebb8da8db3fa73b676d031,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_2_f(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root$$$function_4__root_nonlin_solve$$$function_2_f,
        const_str_plain_f,
#if PYTHON_VERSION >= 300
        const_str_digest_dfcf7c7bfb1872f43ecd93e293d9ae84,
#endif
        codeobj_9e7579c24e07e709b6ab698c97669edc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_5__root_broyden1_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root$$$function_5__root_broyden1_doc,
        const_str_plain__root_broyden1_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_996371d280206eb79639ec81da733cc3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root,
        const_str_digest_2a972fe546c2e0e08572bf2f89912cf9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_6__root_broyden2_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root$$$function_6__root_broyden2_doc,
        const_str_plain__root_broyden2_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d8f13d7d054161fbc5793a4ac32770bc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root,
        const_str_digest_def73bc48da041929dfafddc1f99cc1c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_7__root_anderson_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root$$$function_7__root_anderson_doc,
        const_str_plain__root_anderson_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ea4760c988e1dee0e049b178ccfb79b9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root,
        const_str_digest_0ce67f4c7dcf2eaa0181aa8827d63dd6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_8__root_linearmixing_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root$$$function_8__root_linearmixing_doc,
        const_str_plain__root_linearmixing_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_959ce572759ae8d95bb90b3575d18eac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root,
        const_str_digest_119ad745c6a9974ca40e160d7cbf3aa6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root$$$function_9__root_diagbroyden_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root$$$function_9__root_diagbroyden_doc,
        const_str_plain__root_diagbroyden_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_860be5066fa12dedc1ba36b4c342a5b3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root,
        const_str_digest_84ef70c7d3963026782f73c3205af254,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_root =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._root",
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

MOD_INIT_DECL( scipy$optimize$_root )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_root );
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
    puts("scipy.optimize._root: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._root: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._root: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_root" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_root = Py_InitModule4(
        "scipy.optimize._root",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_root = PyModule_Create( &mdef_scipy$optimize$_root );
#endif

    moduledict_scipy$optimize$_root = MODULE_DICT( module_scipy$optimize$_root );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_root,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_root,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_root,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_root,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_root );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_d918247a15e69b4b0e33aa8db57efefa, module_scipy$optimize$_root );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_30e54f704738b041ae4a0ed2242d55aa;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_ee4fa23f56a35904419fd3c8fe4f9c99;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_30e54f704738b041ae4a0ed2242d55aa = MAKE_MODULE_FRAME( codeobj_30e54f704738b041ae4a0ed2242d55aa, module_scipy$optimize$_root );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_30e54f704738b041ae4a0ed2242d55aa );
    assert( Py_REFCNT( frame_30e54f704738b041ae4a0ed2242d55aa ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_30e54f704738b041ae4a0ed2242d55aa->m_frame.f_lineno = 8;
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


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_assign_source_8 = LIST_COPY( const_list_str_plain_root_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_root;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_30e54f704738b041ae4a0ed2242d55aa->m_frame.f_lineno = 12;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_c88389693d9d476899c1c6e170568469;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_root;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_callable_tuple;
        tmp_level_name_2 = const_int_0;
        frame_30e54f704738b041ae4a0ed2242d55aa->m_frame.f_lineno = 14;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_callable );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_callable, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_warnings;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_root;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_warn_tuple;
        tmp_level_name_3 = const_int_0;
        frame_30e54f704738b041ae4a0ed2242d55aa->m_frame.f_lineno = 16;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_warn );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_warn, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_optimize;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_root;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_a1260224019a7d5492a023f893da1edd_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_30e54f704738b041ae4a0ed2242d55aa->m_frame.f_lineno = 18;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$optimize$_root,
                const_str_plain_MemoizeJac,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_MemoizeJac );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_MemoizeJac, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$optimize$_root,
                const_str_plain_OptimizeResult,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_OptimizeResult );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_OptimizeResult, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$optimize$_root,
                const_str_plain__check_unknown_options,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain__check_unknown_options );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__check_unknown_options, tmp_assign_source_15 );
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_minpack;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$optimize$_root;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain__root_hybr_str_plain_leastsq_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_30e54f704738b041ae4a0ed2242d55aa->m_frame.f_lineno = 19;
        tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$optimize$_root,
                const_str_plain__root_hybr,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__root_hybr );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_hybr, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$optimize$_root,
                const_str_plain_leastsq,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_leastsq );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_leastsq, tmp_assign_source_18 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain__spectral;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$optimize$_root;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain__root_df_sane_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_30e54f704738b041ae4a0ed2242d55aa->m_frame.f_lineno = 20;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$optimize$_root,
                const_str_plain__root_df_sane,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain__root_df_sane );
        }

        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_df_sane, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_empty;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$optimize$_root;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_nonlin_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_30e54f704738b041ae4a0ed2242d55aa->m_frame.f_lineno = 21;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$optimize$_root,
                const_str_plain_nonlin,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_nonlin );
        }

        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_nonlin, tmp_assign_source_20 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30e54f704738b041ae4a0ed2242d55aa );
#endif
    popFrameStack();

    assertFrameObject( frame_30e54f704738b041ae4a0ed2242d55aa );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30e54f704738b041ae4a0ed2242d55aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_30e54f704738b041ae4a0ed2242d55aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_30e54f704738b041ae4a0ed2242d55aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_30e54f704738b041ae4a0ed2242d55aa, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_tuple_empty_str_plain_hybr_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_21 = MAKE_FUNCTION_scipy$optimize$_root$$$function_1_root( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain_root, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_scipy$optimize$_root$$$function_2__warn_jac_unused(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__warn_jac_unused, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_5396a2c560e4082db1e4f941e9fbce32_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_23 = MAKE_FUNCTION_scipy$optimize$_root$$$function_3__root_leastsq( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_leastsq, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_836780df2f8ad68247f0965bfc1cf894_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_24 = MAKE_FUNCTION_scipy$optimize$_root$$$function_4__root_nonlin_solve( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_nonlin_solve, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_scipy$optimize$_root$$$function_5__root_broyden1_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_broyden1_doc, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_scipy$optimize$_root$$$function_6__root_broyden2_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_broyden2_doc, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_scipy$optimize$_root$$$function_7__root_anderson_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_anderson_doc, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_scipy$optimize$_root$$$function_8__root_linearmixing_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_linearmixing_doc, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_scipy$optimize$_root$$$function_9__root_diagbroyden_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_diagbroyden_doc, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_FUNCTION_scipy$optimize$_root$$$function_10__root_excitingmixing_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_excitingmixing_doc, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_scipy$optimize$_root$$$function_11__root_krylov_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain__root_krylov_doc, tmp_assign_source_31 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_root );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
