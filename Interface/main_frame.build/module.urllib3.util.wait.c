/* Generated code for Python module 'urllib3.util.wait'
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

/* The "_module_urllib3$util$wait" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$wait;
PyDictObject *moduledict_urllib3$util$wait;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_poll_obj_tuple;
extern PyObject *const_str_plain_args;
extern PyObject *const_tuple_int_pos_3_int_pos_5_tuple;
static PyObject *const_tuple_2faa611ece05dfe251d963da262dbcb7_tuple;
extern PyObject *const_str_plain_fn;
static PyObject *const_tuple_str_digest_d971e987b803540088bf5c2f9c8029d3_tuple;
extern PyObject *const_tuple_str_plain_partial_tuple;
extern PyObject *const_str_plain_None;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_read;
static PyObject *const_tuple_str_plain_monotonic_tuple;
static PyObject *const_str_plain_wait_for_socket;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_errno;
extern PyObject *const_str_plain_time;
static PyObject *const_str_plain_select_wait_for_socket;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_wait_for_read;
static PyObject *const_str_digest_d4b4230713465b3db317e462a98dc2e6;
extern PyObject *const_str_plain_sock;
static PyObject *const_str_plain_do_poll;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
static PyObject *const_str_plain__have_working_poll;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_wait_for_write;
extern PyObject *const_str_plain_mask;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_rcheck;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_POLLIN;
static PyObject *const_str_digest_4b56500d01b3fee5d65c9e1ca5d7a24b;
static PyObject *const_str_digest_d971e987b803540088bf5c2f9c8029d3;
static PyObject *const_tuple_type_AttributeError_type_OSError_tuple;
static PyObject *const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple;
extern PyObject *const_str_plain_error;
static PyObject *const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple;
static PyObject *const_str_digest_9fee63ab089d8ffa84a45aa3db97c377;
extern PyObject *const_float_inf;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_POLLOUT;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple;
static PyObject *const_str_plain_deadline;
static PyObject *const_tuple_str_plain_sock_str_plain_timeout_tuple;
static PyObject *const_list_0f3719a68b319eac70aa05da51950d41_list;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_EINTR;
extern PyObject *const_str_plain_NoWayToWaitForSocketError;
extern PyObject *const_int_pos_1000;
extern PyObject *const_str_plain_register;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_select;
static PyObject *const_str_digest_ba4902da016df054e34a5eb31317683f;
static PyObject *const_str_plain_wready;
extern PyObject *const_str_plain_monotonic;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_c21f3ba11788d793953e7f6f01c16ac0;
extern PyObject *const_tuple_type_Exception_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_functools;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_poll_wait_for_socket;
extern PyObject *const_str_plain_partial;
static PyObject *const_str_digest_d47e372f7598b75180e9e0f6f1e0d266;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_version_info;
static PyObject *const_str_plain_null_wait_for_socket;
static PyObject *const_str_plain__retry_on_intr;
static PyObject *const_str_plain_poll_obj;
extern PyObject *const_tuple_false_false_none_tuple;
static PyObject *const_str_plain_wcheck;
static PyObject *const_str_plain_xready;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_poll;
static PyObject *const_tuple_str_plain_fn_str_plain_timeout_tuple;
static PyObject *const_str_plain_rready;
static PyObject *const_str_digest_2793acd2a9eb309196b14c7196b7f975;
static PyObject *const_tuple_str_plain_t_str_plain_poll_obj_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_poll_obj_tuple = PyTuple_New( 1 );
    const_str_plain_poll_obj = UNSTREAM_STRING_ASCII( &constant_bin[ 5937099 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_poll_obj_tuple, 0, const_str_plain_poll_obj ); Py_INCREF( const_str_plain_poll_obj );
    const_tuple_2faa611ece05dfe251d963da262dbcb7_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_2faa611ece05dfe251d963da262dbcb7_tuple, 0, const_str_plain_NoWayToWaitForSocketError ); Py_INCREF( const_str_plain_NoWayToWaitForSocketError );
    PyTuple_SET_ITEM( const_tuple_2faa611ece05dfe251d963da262dbcb7_tuple, 1, const_tuple_type_Exception_tuple ); Py_INCREF( const_tuple_type_Exception_tuple );
    const_tuple_str_digest_d971e987b803540088bf5c2f9c8029d3_tuple = PyTuple_New( 1 );
    const_str_digest_d971e987b803540088bf5c2f9c8029d3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5937107 ], 30, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d971e987b803540088bf5c2f9c8029d3_tuple, 0, const_str_digest_d971e987b803540088bf5c2f9c8029d3 ); Py_INCREF( const_str_digest_d971e987b803540088bf5c2f9c8029d3 );
    const_tuple_str_plain_monotonic_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_monotonic_tuple, 0, const_str_plain_monotonic ); Py_INCREF( const_str_plain_monotonic );
    const_str_plain_wait_for_socket = UNSTREAM_STRING_ASCII( &constant_bin[ 5937137 ], 15, 1 );
    const_str_plain_select_wait_for_socket = UNSTREAM_STRING_ASCII( &constant_bin[ 5937152 ], 22, 1 );
    const_str_digest_d4b4230713465b3db317e462a98dc2e6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5937174 ], 37, 0 );
    const_str_plain_do_poll = UNSTREAM_STRING_ASCII( &constant_bin[ 5937204 ], 7, 1 );
    const_str_plain__have_working_poll = UNSTREAM_STRING_ASCII( &constant_bin[ 5937211 ], 18, 1 );
    const_str_plain_rcheck = UNSTREAM_STRING_ASCII( &constant_bin[ 3937067 ], 6, 1 );
    const_str_digest_4b56500d01b3fee5d65c9e1ca5d7a24b = UNSTREAM_STRING_ASCII( &constant_bin[ 5937229 ], 135, 0 );
    const_tuple_type_AttributeError_type_OSError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_type_AttributeError_type_OSError_tuple, 0, (PyObject *)PyExc_AttributeError ); Py_INCREF( (PyObject *)PyExc_AttributeError );
    PyTuple_SET_ITEM( const_tuple_type_AttributeError_type_OSError_tuple, 1, (PyObject *)PyExc_OSError ); Py_INCREF( (PyObject *)PyExc_OSError );
    const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple, 0, const_str_plain_fn ); Py_INCREF( const_str_plain_fn );
    PyTuple_SET_ITEM( const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple, 1, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    const_str_plain_deadline = UNSTREAM_STRING_ASCII( &constant_bin[ 5937364 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple, 2, const_str_plain_deadline ); Py_INCREF( const_str_plain_deadline );
    PyTuple_SET_ITEM( const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple, 3, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 1, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 2, const_str_plain_write ); Py_INCREF( const_str_plain_write );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 3, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 4, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 5, const_str_plain_poll_obj ); Py_INCREF( const_str_plain_poll_obj );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 6, const_str_plain_do_poll ); Py_INCREF( const_str_plain_do_poll );
    const_str_digest_9fee63ab089d8ffa84a45aa3db97c377 = UNSTREAM_STRING_ASCII( &constant_bin[ 5937372 ], 17, 0 );
    const_str_plain_POLLOUT = UNSTREAM_STRING_ASCII( &constant_bin[ 5937389 ], 7, 1 );
    const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 1, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 2, const_str_plain_write ); Py_INCREF( const_str_plain_write );
    PyTuple_SET_ITEM( const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 3, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 4, const_str_plain_rcheck ); Py_INCREF( const_str_plain_rcheck );
    const_str_plain_wcheck = UNSTREAM_STRING_ASCII( &constant_bin[ 5937396 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 5, const_str_plain_wcheck ); Py_INCREF( const_str_plain_wcheck );
    PyTuple_SET_ITEM( const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 6, const_str_plain_fn ); Py_INCREF( const_str_plain_fn );
    const_str_plain_rready = UNSTREAM_STRING_ASCII( &constant_bin[ 5937402 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 7, const_str_plain_rready ); Py_INCREF( const_str_plain_rready );
    const_str_plain_wready = UNSTREAM_STRING_ASCII( &constant_bin[ 5937408 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 8, const_str_plain_wready ); Py_INCREF( const_str_plain_wready );
    const_str_plain_xready = UNSTREAM_STRING_ASCII( &constant_bin[ 5937414 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 9, const_str_plain_xready ); Py_INCREF( const_str_plain_xready );
    const_tuple_str_plain_sock_str_plain_timeout_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_timeout_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_timeout_tuple, 1, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    const_list_0f3719a68b319eac70aa05da51950d41_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_0f3719a68b319eac70aa05da51950d41_list, 0, const_str_plain_NoWayToWaitForSocketError ); Py_INCREF( const_str_plain_NoWayToWaitForSocketError );
    PyList_SET_ITEM( const_list_0f3719a68b319eac70aa05da51950d41_list, 1, const_str_plain_wait_for_read ); Py_INCREF( const_str_plain_wait_for_read );
    PyList_SET_ITEM( const_list_0f3719a68b319eac70aa05da51950d41_list, 2, const_str_plain_wait_for_write ); Py_INCREF( const_str_plain_wait_for_write );
    const_str_digest_ba4902da016df054e34a5eb31317683f = UNSTREAM_STRING_ASCII( &constant_bin[ 5937420 ], 20, 0 );
    const_str_digest_c21f3ba11788d793953e7f6f01c16ac0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5937440 ], 135, 0 );
    const_str_plain_poll_wait_for_socket = UNSTREAM_STRING_ASCII( &constant_bin[ 5937174 ], 20, 1 );
    const_str_digest_d47e372f7598b75180e9e0f6f1e0d266 = UNSTREAM_STRING_ASCII( &constant_bin[ 5937575 ], 50, 0 );
    const_str_plain_null_wait_for_socket = UNSTREAM_STRING_ASCII( &constant_bin[ 5937625 ], 20, 1 );
    const_str_plain__retry_on_intr = UNSTREAM_STRING_ASCII( &constant_bin[ 5937645 ], 14, 1 );
    const_tuple_str_plain_fn_str_plain_timeout_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fn_str_plain_timeout_tuple, 0, const_str_plain_fn ); Py_INCREF( const_str_plain_fn );
    PyTuple_SET_ITEM( const_tuple_str_plain_fn_str_plain_timeout_tuple, 1, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    const_str_digest_2793acd2a9eb309196b14c7196b7f975 = UNSTREAM_STRING_ASCII( &constant_bin[ 5937659 ], 26, 0 );
    const_tuple_str_plain_t_str_plain_poll_obj_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_poll_obj_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_poll_obj_tuple, 1, const_str_plain_poll_obj ); Py_INCREF( const_str_plain_poll_obj );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$wait( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8aa15f629f0affaa4ad9d71167c593c8;
static PyCodeObject *codeobj_439e6bbcf159194936084429dbef6358;
static PyCodeObject *codeobj_d56a9c710bc6d967b5a834c03b3c085c;
static PyCodeObject *codeobj_229eb8f40db9a98c38342867a14da363;
static PyCodeObject *codeobj_39dc3df532da8e73a6db8c2b3bad367f;
static PyCodeObject *codeobj_664b749d7006053aaf5b1a0ddec5c656;
static PyCodeObject *codeobj_8ef4eccc9de1846f360c2ab1de1a879b;
static PyCodeObject *codeobj_4b0ccfee5a662613ed48b683f8ea1038;
static PyCodeObject *codeobj_dfe16dc3d2486cd0c6daf6caa8ec6659;
static PyCodeObject *codeobj_d36784eef8f46d4b1dd9df1842498ff3;
static PyCodeObject *codeobj_c80defce66347f6d8a2b4f2b9d563d7b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_ba4902da016df054e34a5eb31317683f );
    codeobj_8aa15f629f0affaa4ad9d71167c593c8 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2793acd2a9eb309196b14c7196b7f975, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_439e6bbcf159194936084429dbef6358 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__have_working_poll, 111, const_tuple_str_plain_poll_obj_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d56a9c710bc6d967b5a834c03b3c085c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__retry_on_intr, 41, const_tuple_str_plain_fn_str_plain_timeout_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_229eb8f40db9a98c38342867a14da363 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__retry_on_intr, 45, const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_39dc3df532da8e73a6db8c2b3bad367f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_do_poll, 99, const_tuple_str_plain_t_str_plain_poll_obj_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_664b749d7006053aaf5b1a0ddec5c656 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_null_wait_for_socket, 107, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_8ef4eccc9de1846f360c2ab1de1a879b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_poll_wait_for_socket, 87, const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4b0ccfee5a662613ed48b683f8ea1038 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_select_wait_for_socket, 68, const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dfe16dc3d2486cd0c6daf6caa8ec6659 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wait_for_read, 139, const_tuple_str_plain_sock_str_plain_timeout_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d36784eef8f46d4b1dd9df1842498ff3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wait_for_socket, 124, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_c80defce66347f6d8a2b4f2b9d563d7b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wait_for_write, 146, const_tuple_str_plain_sock_str_plain_timeout_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_1__retry_on_intr(  );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_2__retry_on_intr(  );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_3_select_wait_for_socket( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll(  );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_5_null_wait_for_socket(  );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_6__have_working_poll(  );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_7_wait_for_socket(  );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_8_wait_for_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_9_wait_for_write( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$util$wait$$$function_1__retry_on_intr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fn = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_d56a9c710bc6d967b5a834c03b3c085c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d56a9c710bc6d967b5a834c03b3c085c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d56a9c710bc6d967b5a834c03b3c085c, codeobj_d56a9c710bc6d967b5a834c03b3c085c, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_d56a9c710bc6d967b5a834c03b3c085c = cache_frame_d56a9c710bc6d967b5a834c03b3c085c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d56a9c710bc6d967b5a834c03b3c085c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d56a9c710bc6d967b5a834c03b3c085c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_fn );
        tmp_called_name_1 = par_fn;
        CHECK_OBJECT( par_timeout );
        tmp_args_element_name_1 = par_timeout;
        frame_d56a9c710bc6d967b5a834c03b3c085c->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d56a9c710bc6d967b5a834c03b3c085c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d56a9c710bc6d967b5a834c03b3c085c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d56a9c710bc6d967b5a834c03b3c085c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d56a9c710bc6d967b5a834c03b3c085c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d56a9c710bc6d967b5a834c03b3c085c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d56a9c710bc6d967b5a834c03b3c085c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d56a9c710bc6d967b5a834c03b3c085c,
        type_description_1,
        par_fn,
        par_timeout
    );


    // Release cached frame.
    if ( frame_d56a9c710bc6d967b5a834c03b3c085c == cache_frame_d56a9c710bc6d967b5a834c03b3c085c )
    {
        Py_DECREF( frame_d56a9c710bc6d967b5a834c03b3c085c );
    }
    cache_frame_d56a9c710bc6d967b5a834c03b3c085c = NULL;

    assertFrameObject( frame_d56a9c710bc6d967b5a834c03b3c085c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_1__retry_on_intr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_1__retry_on_intr );
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


static PyObject *impl_urllib3$util$wait$$$function_2__retry_on_intr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fn = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    PyObject *var_deadline = NULL;
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_229eb8f40db9a98c38342867a14da363;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_229eb8f40db9a98c38342867a14da363 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_229eb8f40db9a98c38342867a14da363, codeobj_229eb8f40db9a98c38342867a14da363, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_229eb8f40db9a98c38342867a14da363 = cache_frame_229eb8f40db9a98c38342867a14da363;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_229eb8f40db9a98c38342867a14da363 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_229eb8f40db9a98c38342867a14da363 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_timeout );
        tmp_compexpr_left_1 = par_timeout;
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
            tmp_assign_source_1 = const_float_inf;
            assert( var_deadline == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_deadline = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_monotonic );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_monotonic );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "monotonic" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 49;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_229eb8f40db9a98c38342867a14da363->m_frame.f_lineno = 49;
            tmp_left_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_timeout );
            tmp_right_name_1 = par_timeout;
            tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_deadline == NULL );
            var_deadline = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_fn );
        tmp_called_name_2 = par_fn;
        if ( par_timeout == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_1 = par_timeout;
        frame_229eb8f40db9a98c38342867a14da363->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_2__retry_on_intr );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_229eb8f40db9a98c38342867a14da363, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_229eb8f40db9a98c38342867a14da363, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_1 = PyExc_OSError;
        tmp_compexpr_right_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_2, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 55;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_error );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_right_2 );

            exception_lineno = 55;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        PyTuple_SET_ITEM( tmp_compexpr_right_2, 1, tmp_tuple_element_1 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto try_except_handler_3;
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
            tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
            {
                PyObject *old = var_e;
                var_e = tmp_assign_source_3;
                Py_INCREF( var_e );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( var_e );
            tmp_source_name_2 = var_e;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_args );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_errno );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "errno" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_EINTR );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_3 );

                exception_lineno = 57;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "oooo";
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 58;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_229eb8f40db9a98c38342867a14da363->m_frame) frame_229eb8f40db9a98c38342867a14da363->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooo";
            goto try_except_handler_4;
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_4;
                CHECK_OBJECT( var_deadline );
                tmp_left_name_2 = var_deadline;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_monotonic );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_monotonic );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "monotonic" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 60;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_3 = tmp_mvar_value_4;
                frame_229eb8f40db9a98c38342867a14da363->m_frame.f_lineno = 60;
                tmp_right_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 60;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 60;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = par_timeout;
                    par_timeout = tmp_assign_source_4;
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( par_timeout );
                tmp_compexpr_left_4 = par_timeout;
                tmp_compexpr_right_4 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 61;
                    type_description_1 = "oooo";
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
                    PyObject *tmp_assign_source_5;
                    tmp_assign_source_5 = const_int_0;
                    {
                        PyObject *old = par_timeout;
                        assert( old != NULL );
                        par_timeout = tmp_assign_source_5;
                        Py_INCREF( par_timeout );
                        Py_DECREF( old );
                    }

                }
                branch_no_4:;
            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT( par_timeout );
                tmp_compexpr_left_5 = par_timeout;
                tmp_compexpr_right_5 = const_float_inf;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 63;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
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
                    PyObject *tmp_assign_source_6;
                    tmp_assign_source_6 = Py_None;
                    {
                        PyObject *old = par_timeout;
                        assert( old != NULL );
                        par_timeout = tmp_assign_source_6;
                        Py_INCREF( par_timeout );
                        Py_DECREF( old );
                    }

                }
                branch_no_5:;
            }
            goto try_continue_handler_4;
            branch_end_3:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_2__retry_on_intr );
        return NULL;
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

        Py_XDECREF( var_e );
        var_e = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // try continue handler code:
        try_continue_handler_4:;
        Py_XDECREF( var_e );
        var_e = NULL;

        goto try_continue_handler_3;
        // End of try:
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 52;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_229eb8f40db9a98c38342867a14da363->m_frame) frame_229eb8f40db9a98c38342867a14da363->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooo";
        goto try_except_handler_3;
        branch_end_2:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_2__retry_on_intr );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // try continue handler code:
    try_continue_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto loop_start_1;
    // End of try:
    // End of try:
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_229eb8f40db9a98c38342867a14da363 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_229eb8f40db9a98c38342867a14da363 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_229eb8f40db9a98c38342867a14da363 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_229eb8f40db9a98c38342867a14da363, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_229eb8f40db9a98c38342867a14da363->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_229eb8f40db9a98c38342867a14da363, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_229eb8f40db9a98c38342867a14da363,
        type_description_1,
        par_fn,
        par_timeout,
        var_deadline,
        var_e
    );


    // Release cached frame.
    if ( frame_229eb8f40db9a98c38342867a14da363 == cache_frame_229eb8f40db9a98c38342867a14da363 )
    {
        Py_DECREF( frame_229eb8f40db9a98c38342867a14da363 );
    }
    cache_frame_229eb8f40db9a98c38342867a14da363 = NULL;

    assertFrameObject( frame_229eb8f40db9a98c38342867a14da363 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_2__retry_on_intr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)var_deadline );
    Py_DECREF( var_deadline );
    var_deadline = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( var_deadline );
    var_deadline = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_2__retry_on_intr );
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


static PyObject *impl_urllib3$util$wait$$$function_3_select_wait_for_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_read = python_pars[ 1 ];
    PyObject *par_write = python_pars[ 2 ];
    PyObject *par_timeout = python_pars[ 3 ];
    PyObject *var_rcheck = NULL;
    PyObject *var_wcheck = NULL;
    PyObject *var_fn = NULL;
    PyObject *var_rready = NULL;
    PyObject *var_wready = NULL;
    PyObject *var_xready = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4b0ccfee5a662613ed48b683f8ea1038;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4b0ccfee5a662613ed48b683f8ea1038 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4b0ccfee5a662613ed48b683f8ea1038, codeobj_4b0ccfee5a662613ed48b683f8ea1038, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4b0ccfee5a662613ed48b683f8ea1038 = cache_frame_4b0ccfee5a662613ed48b683f8ea1038;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4b0ccfee5a662613ed48b683f8ea1038 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4b0ccfee5a662613ed48b683f8ea1038 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( par_read );
        tmp_operand_name_1 = par_read;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_write );
        tmp_operand_name_2 = par_write;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_make_exception_arg_1 = const_str_digest_d47e372f7598b75180e9e0f6f1e0d266;
            frame_4b0ccfee5a662613ed48b683f8ea1038->m_frame.f_lineno = 70;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 70;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_rcheck == NULL );
        var_rcheck = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( var_wcheck == NULL );
        var_wcheck = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_read );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_read );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( var_rcheck );
            tmp_called_instance_1 = var_rcheck;
            CHECK_OBJECT( par_sock );
            tmp_args_element_name_1 = par_sock;
            frame_4b0ccfee5a662613ed48b683f8ea1038->m_frame.f_lineno = 74;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_write );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_write );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_wcheck );
            tmp_called_instance_2 = var_wcheck;
            CHECK_OBJECT( par_sock );
            tmp_args_element_name_2 = par_sock;
            frame_4b0ccfee5a662613ed48b683f8ea1038->m_frame.f_lineno = 76;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_partial );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_partial );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "partial" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_select );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_rcheck );
        tmp_args_element_name_4 = var_rcheck;
        CHECK_OBJECT( var_wcheck );
        tmp_args_element_name_5 = var_wcheck;
        CHECK_OBJECT( var_wcheck );
        tmp_args_element_name_6 = var_wcheck;
        frame_4b0ccfee5a662613ed48b683f8ea1038->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_fn == NULL );
        var_fn = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__retry_on_intr );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_retry_on_intr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_fn );
        tmp_args_element_name_7 = var_fn;
        CHECK_OBJECT( par_timeout );
        tmp_args_element_name_8 = par_timeout;
        frame_4b0ccfee5a662613ed48b683f8ea1038->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooooooooo";
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
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 83;
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
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 83;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 83;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 83;
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

            type_description_1 = "oooooooooo";
            exception_lineno = 83;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert( var_rready == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_rready = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert( var_wready == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_wready = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        assert( var_xready == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_xready = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_value_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        CHECK_OBJECT( var_rready );
        tmp_or_left_value_1 = var_rready;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( var_wready );
        tmp_or_left_value_2 = var_wready;
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT( var_xready );
        tmp_or_right_value_2 = var_xready;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_value_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_value_name_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b0ccfee5a662613ed48b683f8ea1038 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b0ccfee5a662613ed48b683f8ea1038 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b0ccfee5a662613ed48b683f8ea1038 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4b0ccfee5a662613ed48b683f8ea1038, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4b0ccfee5a662613ed48b683f8ea1038->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4b0ccfee5a662613ed48b683f8ea1038, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4b0ccfee5a662613ed48b683f8ea1038,
        type_description_1,
        par_sock,
        par_read,
        par_write,
        par_timeout,
        var_rcheck,
        var_wcheck,
        var_fn,
        var_rready,
        var_wready,
        var_xready
    );


    // Release cached frame.
    if ( frame_4b0ccfee5a662613ed48b683f8ea1038 == cache_frame_4b0ccfee5a662613ed48b683f8ea1038 )
    {
        Py_DECREF( frame_4b0ccfee5a662613ed48b683f8ea1038 );
    }
    cache_frame_4b0ccfee5a662613ed48b683f8ea1038 = NULL;

    assertFrameObject( frame_4b0ccfee5a662613ed48b683f8ea1038 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_3_select_wait_for_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_read );
    Py_DECREF( par_read );
    par_read = NULL;

    CHECK_OBJECT( (PyObject *)par_write );
    Py_DECREF( par_write );
    par_write = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)var_rcheck );
    Py_DECREF( var_rcheck );
    var_rcheck = NULL;

    CHECK_OBJECT( (PyObject *)var_wcheck );
    Py_DECREF( var_wcheck );
    var_wcheck = NULL;

    CHECK_OBJECT( (PyObject *)var_fn );
    Py_DECREF( var_fn );
    var_fn = NULL;

    CHECK_OBJECT( (PyObject *)var_rready );
    Py_DECREF( var_rready );
    var_rready = NULL;

    CHECK_OBJECT( (PyObject *)var_wready );
    Py_DECREF( var_wready );
    var_wready = NULL;

    CHECK_OBJECT( (PyObject *)var_xready );
    Py_DECREF( var_xready );
    var_xready = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_read );
    Py_DECREF( par_read );
    par_read = NULL;

    CHECK_OBJECT( (PyObject *)par_write );
    Py_DECREF( par_write );
    par_write = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( var_rcheck );
    var_rcheck = NULL;

    Py_XDECREF( var_wcheck );
    var_wcheck = NULL;

    Py_XDECREF( var_fn );
    var_fn = NULL;

    Py_XDECREF( var_rready );
    var_rready = NULL;

    Py_XDECREF( var_wready );
    var_wready = NULL;

    Py_XDECREF( var_xready );
    var_xready = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_3_select_wait_for_socket );
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


static PyObject *impl_urllib3$util$wait$$$function_4_poll_wait_for_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_read = python_pars[ 1 ];
    PyObject *par_write = python_pars[ 2 ];
    PyObject *par_timeout = python_pars[ 3 ];
    PyObject *var_mask = NULL;
    struct Nuitka_CellObject *var_poll_obj = PyCell_EMPTY();
    PyObject *var_do_poll = NULL;
    struct Nuitka_FrameObject *frame_8ef4eccc9de1846f360c2ab1de1a879b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8ef4eccc9de1846f360c2ab1de1a879b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8ef4eccc9de1846f360c2ab1de1a879b, codeobj_8ef4eccc9de1846f360c2ab1de1a879b, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8ef4eccc9de1846f360c2ab1de1a879b = cache_frame_8ef4eccc9de1846f360c2ab1de1a879b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8ef4eccc9de1846f360c2ab1de1a879b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8ef4eccc9de1846f360c2ab1de1a879b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( par_read );
        tmp_operand_name_1 = par_read;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_write );
        tmp_operand_name_2 = par_write;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_make_exception_arg_1 = const_str_digest_d47e372f7598b75180e9e0f6f1e0d266;
            frame_8ef4eccc9de1846f360c2ab1de1a879b->m_frame.f_lineno = 89;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 89;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert( var_mask == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_mask = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_read );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_read );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oooooco";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_left_name_1 = const_int_0;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 92;
                type_description_1 = "oooooco";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_POLLIN );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooco";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooco";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_mask;
                assert( old != NULL );
                var_mask = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_write );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_write );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "oooooco";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( var_mask );
            tmp_left_name_2 = var_mask;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 94;
                type_description_1 = "oooooco";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_POLLOUT );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "oooooco";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "oooooco";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = tmp_left_name_2;
            var_mask = tmp_assign_source_3;

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_8ef4eccc9de1846f360c2ab1de1a879b->m_frame.f_lineno = 95;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_poll );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_poll_obj ) == NULL );
        PyCell_SET( var_poll_obj, tmp_assign_source_4 );

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( PyCell_GET( var_poll_obj ) );
        tmp_source_name_3 = PyCell_GET( var_poll_obj );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_register );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_sock );
        tmp_args_element_name_1 = par_sock;
        if ( var_mask == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mask" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 96;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = var_mask;
        frame_8ef4eccc9de1846f360c2ab1de1a879b->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_5)->m_closure[0] = var_poll_obj;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_5)->m_closure[0] );


        assert( var_do_poll == NULL );
        var_do_poll = tmp_assign_source_5;
    }
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__retry_on_intr );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_retry_on_intr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 104;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_do_poll );
        tmp_args_element_name_3 = var_do_poll;
        CHECK_OBJECT( par_timeout );
        tmp_args_element_name_4 = par_timeout;
        frame_8ef4eccc9de1846f360c2ab1de1a879b->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_value_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_value_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        Py_DECREF( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ef4eccc9de1846f360c2ab1de1a879b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ef4eccc9de1846f360c2ab1de1a879b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ef4eccc9de1846f360c2ab1de1a879b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8ef4eccc9de1846f360c2ab1de1a879b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8ef4eccc9de1846f360c2ab1de1a879b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8ef4eccc9de1846f360c2ab1de1a879b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8ef4eccc9de1846f360c2ab1de1a879b,
        type_description_1,
        par_sock,
        par_read,
        par_write,
        par_timeout,
        var_mask,
        var_poll_obj,
        var_do_poll
    );


    // Release cached frame.
    if ( frame_8ef4eccc9de1846f360c2ab1de1a879b == cache_frame_8ef4eccc9de1846f360c2ab1de1a879b )
    {
        Py_DECREF( frame_8ef4eccc9de1846f360c2ab1de1a879b );
    }
    cache_frame_8ef4eccc9de1846f360c2ab1de1a879b = NULL;

    assertFrameObject( frame_8ef4eccc9de1846f360c2ab1de1a879b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_4_poll_wait_for_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_read );
    Py_DECREF( par_read );
    par_read = NULL;

    CHECK_OBJECT( (PyObject *)par_write );
    Py_DECREF( par_write );
    par_write = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_poll_obj );
    Py_DECREF( var_poll_obj );
    var_poll_obj = NULL;

    CHECK_OBJECT( (PyObject *)var_do_poll );
    Py_DECREF( var_do_poll );
    var_do_poll = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_read );
    Py_DECREF( par_read );
    par_read = NULL;

    CHECK_OBJECT( (PyObject *)par_write );
    Py_DECREF( par_write );
    par_write = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_poll_obj );
    Py_DECREF( var_poll_obj );
    var_poll_obj = NULL;

    Py_XDECREF( var_do_poll );
    var_do_poll = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_4_poll_wait_for_socket );
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


static PyObject *impl_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_39dc3df532da8e73a6db8c2b3bad367f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_39dc3df532da8e73a6db8c2b3bad367f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_39dc3df532da8e73a6db8c2b3bad367f, codeobj_39dc3df532da8e73a6db8c2b3bad367f, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_39dc3df532da8e73a6db8c2b3bad367f = cache_frame_39dc3df532da8e73a6db8c2b3bad367f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_39dc3df532da8e73a6db8c2b3bad367f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_39dc3df532da8e73a6db8c2b3bad367f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_t );
        tmp_compexpr_left_1 = par_t;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_t );
            tmp_left_name_1 = par_t;
            tmp_right_name_1 = const_int_pos_1000;
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = tmp_left_name_1;
            par_t = tmp_assign_source_1;

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "poll_obj" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_t );
        tmp_args_element_name_1 = par_t;
        frame_39dc3df532da8e73a6db8c2b3bad367f->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_poll, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_39dc3df532da8e73a6db8c2b3bad367f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_39dc3df532da8e73a6db8c2b3bad367f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_39dc3df532da8e73a6db8c2b3bad367f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_39dc3df532da8e73a6db8c2b3bad367f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_39dc3df532da8e73a6db8c2b3bad367f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_39dc3df532da8e73a6db8c2b3bad367f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_39dc3df532da8e73a6db8c2b3bad367f,
        type_description_1,
        par_t,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_39dc3df532da8e73a6db8c2b3bad367f == cache_frame_39dc3df532da8e73a6db8c2b3bad367f )
    {
        Py_DECREF( frame_39dc3df532da8e73a6db8c2b3bad367f );
    }
    cache_frame_39dc3df532da8e73a6db8c2b3bad367f = NULL;

    assertFrameObject( frame_39dc3df532da8e73a6db8c2b3bad367f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

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

    Py_XDECREF( par_t );
    par_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll );
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


static PyObject *impl_urllib3$util$wait$$$function_5_null_wait_for_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_664b749d7006053aaf5b1a0ddec5c656;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_664b749d7006053aaf5b1a0ddec5c656 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_664b749d7006053aaf5b1a0ddec5c656, codeobj_664b749d7006053aaf5b1a0ddec5c656, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_664b749d7006053aaf5b1a0ddec5c656 = cache_frame_664b749d7006053aaf5b1a0ddec5c656;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_664b749d7006053aaf5b1a0ddec5c656 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_664b749d7006053aaf5b1a0ddec5c656 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NoWayToWaitForSocketError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_664b749d7006053aaf5b1a0ddec5c656->m_frame.f_lineno = 108;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_d971e987b803540088bf5c2f9c8029d3_tuple, 0 ) );

        if ( tmp_raise_type_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 108;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_664b749d7006053aaf5b1a0ddec5c656 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_664b749d7006053aaf5b1a0ddec5c656 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_664b749d7006053aaf5b1a0ddec5c656, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_664b749d7006053aaf5b1a0ddec5c656->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_664b749d7006053aaf5b1a0ddec5c656, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_664b749d7006053aaf5b1a0ddec5c656,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_664b749d7006053aaf5b1a0ddec5c656 == cache_frame_664b749d7006053aaf5b1a0ddec5c656 )
    {
        Py_DECREF( frame_664b749d7006053aaf5b1a0ddec5c656 );
    }
    cache_frame_664b749d7006053aaf5b1a0ddec5c656 = NULL;

    assertFrameObject( frame_664b749d7006053aaf5b1a0ddec5c656 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_5_null_wait_for_socket );
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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_5_null_wait_for_socket );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_urllib3$util$wait$$$function_6__have_working_poll( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_poll_obj = NULL;
    struct Nuitka_FrameObject *frame_439e6bbcf159194936084429dbef6358;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_439e6bbcf159194936084429dbef6358 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_439e6bbcf159194936084429dbef6358, codeobj_439e6bbcf159194936084429dbef6358, module_urllib3$util$wait, sizeof(void *) );
    frame_439e6bbcf159194936084429dbef6358 = cache_frame_439e6bbcf159194936084429dbef6358;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_439e6bbcf159194936084429dbef6358 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_439e6bbcf159194936084429dbef6358 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;
            type_description_1 = "o";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_439e6bbcf159194936084429dbef6358->m_frame.f_lineno = 116;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_poll );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        assert( var_poll_obj == NULL );
        var_poll_obj = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__retry_on_intr );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_retry_on_intr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;
            type_description_1 = "o";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_poll_obj );
        tmp_source_name_1 = var_poll_obj;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_poll );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_args_element_name_2 = const_int_0;
        frame_439e6bbcf159194936084429dbef6358->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_439e6bbcf159194936084429dbef6358, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_439e6bbcf159194936084429dbef6358, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = const_tuple_type_AttributeError_type_OSError_tuple;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "o";
            goto try_except_handler_3;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 115;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_439e6bbcf159194936084429dbef6358->m_frame) frame_439e6bbcf159194936084429dbef6358->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "o";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_6__have_working_poll );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_439e6bbcf159194936084429dbef6358 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_439e6bbcf159194936084429dbef6358 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_439e6bbcf159194936084429dbef6358 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_439e6bbcf159194936084429dbef6358, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_439e6bbcf159194936084429dbef6358->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_439e6bbcf159194936084429dbef6358, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_439e6bbcf159194936084429dbef6358,
        type_description_1,
        var_poll_obj
    );


    // Release cached frame.
    if ( frame_439e6bbcf159194936084429dbef6358 == cache_frame_439e6bbcf159194936084429dbef6358 )
    {
        Py_DECREF( frame_439e6bbcf159194936084429dbef6358 );
    }
    cache_frame_439e6bbcf159194936084429dbef6358 = NULL;

    assertFrameObject( frame_439e6bbcf159194936084429dbef6358 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_6__have_working_poll );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_poll_obj );
    var_poll_obj = NULL;

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

    Py_XDECREF( var_poll_obj );
    var_poll_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_6__have_working_poll );
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


static PyObject *impl_urllib3$util$wait$$$function_7_wait_for_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_d36784eef8f46d4b1dd9df1842498ff3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d36784eef8f46d4b1dd9df1842498ff3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d36784eef8f46d4b1dd9df1842498ff3, codeobj_d36784eef8f46d4b1dd9df1842498ff3, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_d36784eef8f46d4b1dd9df1842498ff3 = cache_frame_d36784eef8f46d4b1dd9df1842498ff3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d36784eef8f46d4b1dd9df1842498ff3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d36784eef8f46d4b1dd9df1842498ff3 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__have_working_poll );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__have_working_poll );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_have_working_poll" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_d36784eef8f46d4b1dd9df1842498ff3->m_frame.f_lineno = 130;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 130;
            type_description_1 = "oo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_poll_wait_for_socket );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poll_wait_for_socket );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "poll_wait_for_socket" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 131;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_assign_source_1 = tmp_mvar_value_2;
            UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket, tmp_assign_source_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_attribute_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 132;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_3;
            tmp_attribute_name_1 = const_str_plain_select;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 132;
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_mvar_value_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select_wait_for_socket );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select_wait_for_socket );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select_wait_for_socket" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 133;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_assign_source_2 = tmp_mvar_value_4;
                UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket, tmp_assign_source_2 );
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_mvar_value_5;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_null_wait_for_socket );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_null_wait_for_socket );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "null_wait_for_socket" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 135;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_assign_source_3 = tmp_mvar_value_5;
                UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket, tmp_assign_source_3 );
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wait_for_socket );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wait_for_socket" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_6;
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d36784eef8f46d4b1dd9df1842498ff3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d36784eef8f46d4b1dd9df1842498ff3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d36784eef8f46d4b1dd9df1842498ff3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d36784eef8f46d4b1dd9df1842498ff3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d36784eef8f46d4b1dd9df1842498ff3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d36784eef8f46d4b1dd9df1842498ff3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d36784eef8f46d4b1dd9df1842498ff3,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_d36784eef8f46d4b1dd9df1842498ff3 == cache_frame_d36784eef8f46d4b1dd9df1842498ff3 )
    {
        Py_DECREF( frame_d36784eef8f46d4b1dd9df1842498ff3 );
    }
    cache_frame_d36784eef8f46d4b1dd9df1842498ff3 = NULL;

    assertFrameObject( frame_d36784eef8f46d4b1dd9df1842498ff3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_7_wait_for_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_7_wait_for_socket );
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


static PyObject *impl_urllib3$util$wait$$$function_8_wait_for_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_dfe16dc3d2486cd0c6daf6caa8ec6659;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_dfe16dc3d2486cd0c6daf6caa8ec6659 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dfe16dc3d2486cd0c6daf6caa8ec6659, codeobj_dfe16dc3d2486cd0c6daf6caa8ec6659, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_dfe16dc3d2486cd0c6daf6caa8ec6659 = cache_frame_dfe16dc3d2486cd0c6daf6caa8ec6659;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dfe16dc3d2486cd0c6daf6caa8ec6659 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dfe16dc3d2486cd0c6daf6caa8ec6659 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wait_for_socket );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wait_for_socket" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 143;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_sock );
        tmp_tuple_element_1 = par_sock;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_read;
        tmp_dict_value_1 = Py_True;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_timeout;
        CHECK_OBJECT( par_timeout );
        tmp_dict_value_2 = par_timeout;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_dfe16dc3d2486cd0c6daf6caa8ec6659->m_frame.f_lineno = 143;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfe16dc3d2486cd0c6daf6caa8ec6659 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfe16dc3d2486cd0c6daf6caa8ec6659 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfe16dc3d2486cd0c6daf6caa8ec6659 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dfe16dc3d2486cd0c6daf6caa8ec6659, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dfe16dc3d2486cd0c6daf6caa8ec6659->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dfe16dc3d2486cd0c6daf6caa8ec6659, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dfe16dc3d2486cd0c6daf6caa8ec6659,
        type_description_1,
        par_sock,
        par_timeout
    );


    // Release cached frame.
    if ( frame_dfe16dc3d2486cd0c6daf6caa8ec6659 == cache_frame_dfe16dc3d2486cd0c6daf6caa8ec6659 )
    {
        Py_DECREF( frame_dfe16dc3d2486cd0c6daf6caa8ec6659 );
    }
    cache_frame_dfe16dc3d2486cd0c6daf6caa8ec6659 = NULL;

    assertFrameObject( frame_dfe16dc3d2486cd0c6daf6caa8ec6659 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_8_wait_for_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_8_wait_for_read );
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


static PyObject *impl_urllib3$util$wait$$$function_9_wait_for_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c80defce66347f6d8a2b4f2b9d563d7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c80defce66347f6d8a2b4f2b9d563d7b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c80defce66347f6d8a2b4f2b9d563d7b, codeobj_c80defce66347f6d8a2b4f2b9d563d7b, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_c80defce66347f6d8a2b4f2b9d563d7b = cache_frame_c80defce66347f6d8a2b4f2b9d563d7b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c80defce66347f6d8a2b4f2b9d563d7b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c80defce66347f6d8a2b4f2b9d563d7b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wait_for_socket );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wait_for_socket" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_sock );
        tmp_tuple_element_1 = par_sock;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_write;
        tmp_dict_value_1 = Py_True;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_timeout;
        CHECK_OBJECT( par_timeout );
        tmp_dict_value_2 = par_timeout;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_c80defce66347f6d8a2b4f2b9d563d7b->m_frame.f_lineno = 150;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c80defce66347f6d8a2b4f2b9d563d7b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c80defce66347f6d8a2b4f2b9d563d7b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c80defce66347f6d8a2b4f2b9d563d7b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c80defce66347f6d8a2b4f2b9d563d7b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c80defce66347f6d8a2b4f2b9d563d7b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c80defce66347f6d8a2b4f2b9d563d7b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c80defce66347f6d8a2b4f2b9d563d7b,
        type_description_1,
        par_sock,
        par_timeout
    );


    // Release cached frame.
    if ( frame_c80defce66347f6d8a2b4f2b9d563d7b == cache_frame_c80defce66347f6d8a2b4f2b9d563d7b )
    {
        Py_DECREF( frame_c80defce66347f6d8a2b4f2b9d563d7b );
    }
    cache_frame_c80defce66347f6d8a2b4f2b9d563d7b = NULL;

    assertFrameObject( frame_c80defce66347f6d8a2b4f2b9d563d7b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_9_wait_for_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_9_wait_for_write );
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



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_1__retry_on_intr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_1__retry_on_intr,
        const_str_plain__retry_on_intr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d56a9c710bc6d967b5a834c03b3c085c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_2__retry_on_intr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_2__retry_on_intr,
        const_str_plain__retry_on_intr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_229eb8f40db9a98c38342867a14da363,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_3_select_wait_for_socket( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_3_select_wait_for_socket,
        const_str_plain_select_wait_for_socket,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4b0ccfee5a662613ed48b683f8ea1038,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_4_poll_wait_for_socket,
        const_str_plain_poll_wait_for_socket,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8ef4eccc9de1846f360c2ab1de1a879b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll,
        const_str_plain_do_poll,
#if PYTHON_VERSION >= 300
        const_str_digest_d4b4230713465b3db317e462a98dc2e6,
#endif
        codeobj_39dc3df532da8e73a6db8c2b3bad367f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_5_null_wait_for_socket(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_5_null_wait_for_socket,
        const_str_plain_null_wait_for_socket,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_664b749d7006053aaf5b1a0ddec5c656,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_6__have_working_poll(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_6__have_working_poll,
        const_str_plain__have_working_poll,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_439e6bbcf159194936084429dbef6358,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_7_wait_for_socket(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_7_wait_for_socket,
        const_str_plain_wait_for_socket,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d36784eef8f46d4b1dd9df1842498ff3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_8_wait_for_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_8_wait_for_read,
        const_str_plain_wait_for_read,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dfe16dc3d2486cd0c6daf6caa8ec6659,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        const_str_digest_4b56500d01b3fee5d65c9e1ca5d7a24b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_9_wait_for_write( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_9_wait_for_write,
        const_str_plain_wait_for_write,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c80defce66347f6d8a2b4f2b9d563d7b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        const_str_digest_c21f3ba11788d793953e7f6f01c16ac0,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$wait =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.wait",
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

MOD_INIT_DECL( urllib3$util$wait )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$wait );
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
    puts("urllib3.util.wait: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.wait: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.wait: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$wait" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$wait = Py_InitModule4(
        "urllib3.util.wait",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$util$wait = PyModule_Create( &mdef_urllib3$util$wait );
#endif

    moduledict_urllib3$util$wait = MODULE_DICT( module_urllib3$util$wait );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_urllib3$util$wait,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$wait,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$wait,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$wait,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$util$wait );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_9fee63ab089d8ffa84a45aa3db97c377, module_urllib3$util$wait );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_8aa15f629f0affaa4ad9d71167c593c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_urllib3$util$wait_13 = NULL;
    PyObject *tmp_dictset_value;
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
        UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_8aa15f629f0affaa4ad9d71167c593c8 = MAKE_MODULE_FRAME( codeobj_8aa15f629f0affaa4ad9d71167c593c8, module_urllib3$util$wait );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8aa15f629f0affaa4ad9d71167c593c8 );
    assert( Py_REFCNT( frame_8aa15f629f0affaa4ad9d71167c593c8 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_errno;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$wait;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_8aa15f629f0affaa4ad9d71167c593c8->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_errno, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_functools;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$wait;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_partial_tuple;
        tmp_level_name_2 = const_int_0;
        frame_8aa15f629f0affaa4ad9d71167c593c8->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_partial );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_partial, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_select;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$wait;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_8aa15f629f0affaa4ad9d71167c593c8->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_sys;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util$wait;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_8aa15f629f0affaa4ad9d71167c593c8->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        assert( !(tmp_assign_source_7 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_time;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$util$wait;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_monotonic_tuple;
        tmp_level_name_5 = const_int_0;
        frame_8aa15f629f0affaa4ad9d71167c593c8->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        assert( !(tmp_import_name_from_2 == NULL) );
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_monotonic );
        Py_DECREF( tmp_import_name_from_2 );
        assert( !(tmp_assign_source_8 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_monotonic, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = LIST_COPY( const_list_0f3719a68b319eac70aa05da51950d41_list );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
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


            exception_lineno = 13;

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


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_1 != NULL );
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_type_Exception_tuple;
        tmp_assign_source_11 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_11;
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


            exception_lineno = 13;

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


            exception_lineno = 13;

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
            PyObject *tmp_assign_source_12;
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


                exception_lineno = 13;

                goto try_except_handler_1;
            }
            tmp_args_name_1 = const_tuple_2faa611ece05dfe251d963da262dbcb7_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_8aa15f629f0affaa4ad9d71167c593c8->m_frame.f_lineno = 13;
            tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 13;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_12;
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


                exception_lineno = 13;

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


                    exception_lineno = 13;

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

                    exception_lineno = 13;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 13;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 13;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_13;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_urllib3$util$wait_13 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9fee63ab089d8ffa84a45aa3db97c377;
        tmp_res = PyObject_SetItem( locals_urllib3$util$wait_13, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_NoWayToWaitForSocketError;
        tmp_res = PyObject_SetItem( locals_urllib3$util$wait_13, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_NoWayToWaitForSocketError;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_type_Exception_tuple;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_urllib3$util$wait_13;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_8aa15f629f0affaa4ad9d71167c593c8->m_frame.f_lineno = 13;
            tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 13;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_14 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_14 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$wait );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_urllib3$util$wait_13 );
        locals_urllib3$util$wait_13 = NULL;
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

        Py_DECREF( locals_urllib3$util$wait_13 );
        locals_urllib3$util$wait_13 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$wait );
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
        NUITKA_CANNOT_GET_HERE( urllib3$util$wait );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 13;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError, tmp_assign_source_14 );
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
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_version_info );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_int_pos_3_int_pos_5_tuple;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = MAKE_FUNCTION_urllib3$util$wait$$$function_1__retry_on_intr(  );



            UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr, tmp_assign_source_16 );
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = MAKE_FUNCTION_urllib3$util$wait$$$function_2__retry_on_intr(  );



            UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr, tmp_assign_source_17 );
        }
        branch_end_4:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8aa15f629f0affaa4ad9d71167c593c8 );
#endif
    popFrameStack();

    assertFrameObject( frame_8aa15f629f0affaa4ad9d71167c593c8 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8aa15f629f0affaa4ad9d71167c593c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8aa15f629f0affaa4ad9d71167c593c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8aa15f629f0affaa4ad9d71167c593c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8aa15f629f0affaa4ad9d71167c593c8, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_false_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_18 = MAKE_FUNCTION_urllib3$util$wait$$$function_3_select_wait_for_socket( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select_wait_for_socket, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_false_false_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_19 = MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_poll_wait_for_socket, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_urllib3$util$wait$$$function_5_null_wait_for_socket(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_null_wait_for_socket, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_urllib3$util$wait$$$function_6__have_working_poll(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__have_working_poll, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_urllib3$util$wait$$$function_7_wait_for_socket(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_23 = MAKE_FUNCTION_urllib3$util$wait$$$function_8_wait_for_read( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_read, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_24 = MAKE_FUNCTION_urllib3$util$wait$$$function_9_wait_for_write( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_write, tmp_assign_source_24 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_urllib3$util$wait );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
