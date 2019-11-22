/* Generated code for Python module 'numpy.fft.helper'
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

/* The "_module_numpy$fft$helper" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$fft$helper;
PyDictObject *moduledict_numpy$fft$helper;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_digest_b53f3811d9d65c912707e9b896ba9934;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_list_d3376bb1f7f4aa67004298e8d81c0177_list;
extern PyObject *const_str_plain_integer;
static PyObject *const_str_digest_7f758ac54808ea34c4859bf8ed8acc13;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_p2;
extern PyObject *const_str_plain_array_function_dispatch;
static PyObject *const_str_plain_rfftfreq;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_91a6e65509cfbbe4ba154cabdb7becca;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_f88810d4a47a40e84c75c6333ccc123f_tuple;
extern PyObject *const_str_plain_results;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_00b8dacfebebc032e30b6140ef9a0f5b;
extern PyObject *const_str_plain_shift;
static PyObject *const_tuple_str_plain_x_str_plain_axes_tuple;
extern PyObject *const_float_1_0;
extern PyObject *const_int_0;
static PyObject *const_str_digest_1f896e1cd39c960c2dfcf70d6b941e75;
static PyObject *const_str_digest_4ef7001003be7e06506ab78ccaae217c;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_val;
static PyObject *const_tuple_1952086625b3b75894ff16424526eb36_tuple;
extern PyObject *const_str_plain_p1;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
static PyObject *const_str_digest_708fb3f4a116de82c9da5a93983f8013;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_dim;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_digest_576644db5145960717a957e6a5504ec5;
static PyObject *const_tuple_str_plain_ax_str_plain_x_tuple;
static PyObject *const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple;
extern PyObject *const_str_plain_axes;
extern PyObject *const_str_plain_N;
static PyObject *const_tuple_str_plain_x_str_plain_axes_str_plain_shift_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_module;
static PyObject *const_str_plain_fftshift;
extern PyObject *const_str_plain_shape;
extern PyObject *const_tuple_str_plain_array_function_dispatch_str_plain_set_module_tuple;
static PyObject *const_str_digest_6e0eae01eab538a2a2beb3f00b247b51;
extern PyObject *const_tuple_str_plain_integer_types_tuple;
extern PyObject *const_str_digest_3ebbb82d9800d0665e0803be07081408;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_integer_types;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_ifftshift;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain__fftshift_dispatcher;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_int_pos_2;
extern PyObject *const_tuple_float_1_0_tuple;
extern PyObject *const_str_plain_fftfreq;
extern PyObject *const_tuple_str_plain_dim_tuple;
extern PyObject *const_dict_c0d9920cdb2d132dd609908b9aa6b9e2;
static PyObject *const_str_digest_466a2021b7031ac96596f95bb84e1a9d;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_ax;
extern PyObject *const_str_plain_set_module;
extern PyObject *const_tuple_str_digest_b53f3811d9d65c912707e9b896ba9934_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_dict_6ccf1996a79e7bc95b345c0d39aef510;
extern PyObject *const_str_plain_roll;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_list_d3376bb1f7f4aa67004298e8d81c0177_list = PyList_New( 4 );
    const_str_plain_fftshift = UNSTREAM_STRING_ASCII( &constant_bin[ 2814888 ], 8, 1 );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 0, const_str_plain_fftshift ); Py_INCREF( const_str_plain_fftshift );
    const_str_plain_ifftshift = UNSTREAM_STRING_ASCII( &constant_bin[ 2814896 ], 9, 1 );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 1, const_str_plain_ifftshift ); Py_INCREF( const_str_plain_ifftshift );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 2, const_str_plain_fftfreq ); Py_INCREF( const_str_plain_fftfreq );
    const_str_plain_rfftfreq = UNSTREAM_STRING_ASCII( &constant_bin[ 2814905 ], 8, 1 );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 3, const_str_plain_rfftfreq ); Py_INCREF( const_str_plain_rfftfreq );
    const_str_digest_7f758ac54808ea34c4859bf8ed8acc13 = UNSTREAM_STRING_ASCII( &constant_bin[ 2814913 ], 1124, 0 );
    const_str_digest_91a6e65509cfbbe4ba154cabdb7becca = UNSTREAM_STRING_ASCII( &constant_bin[ 2816037 ], 16, 0 );
    const_tuple_f88810d4a47a40e84c75c6333ccc123f_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f88810d4a47a40e84c75c6333ccc123f_tuple, 0, const_str_plain_integer ); Py_INCREF( const_str_plain_integer );
    PyTuple_SET_ITEM( const_tuple_f88810d4a47a40e84c75c6333ccc123f_tuple, 1, const_str_plain_empty ); Py_INCREF( const_str_plain_empty );
    PyTuple_SET_ITEM( const_tuple_f88810d4a47a40e84c75c6333ccc123f_tuple, 2, const_str_plain_arange ); Py_INCREF( const_str_plain_arange );
    PyTuple_SET_ITEM( const_tuple_f88810d4a47a40e84c75c6333ccc123f_tuple, 3, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_f88810d4a47a40e84c75c6333ccc123f_tuple, 4, const_str_plain_roll ); Py_INCREF( const_str_plain_roll );
    const_str_digest_00b8dacfebebc032e30b6140ef9a0f5b = UNSTREAM_STRING_ASCII( &constant_bin[ 2816053 ], 19, 0 );
    const_tuple_str_plain_x_str_plain_axes_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_axes_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_axes_tuple, 1, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    const_str_digest_1f896e1cd39c960c2dfcf70d6b941e75 = UNSTREAM_STRING_ASCII( &constant_bin[ 2816072 ], 815, 0 );
    const_str_digest_4ef7001003be7e06506ab78ccaae217c = UNSTREAM_STRING_ASCII( &constant_bin[ 2816887 ], 42, 0 );
    const_tuple_1952086625b3b75894ff16424526eb36_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 2, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 3, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 4, const_str_plain_results ); Py_INCREF( const_str_plain_results );
    const_str_digest_708fb3f4a116de82c9da5a93983f8013 = UNSTREAM_STRING_ASCII( &constant_bin[ 2816929 ], 1069, 0 );
    const_str_digest_576644db5145960717a957e6a5504ec5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2817998 ], 22, 0 );
    const_tuple_str_plain_ax_str_plain_x_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ax_str_plain_x_tuple, 0, const_str_plain_ax ); Py_INCREF( const_str_plain_ax );
    PyTuple_SET_ITEM( const_tuple_str_plain_ax_str_plain_x_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 2, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 3, const_str_plain_results ); Py_INCREF( const_str_plain_results );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 4, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 5, const_str_plain_p1 ); Py_INCREF( const_str_plain_p1 );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 6, const_str_plain_p2 ); Py_INCREF( const_str_plain_p2 );
    const_tuple_str_plain_x_str_plain_axes_str_plain_shift_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_axes_str_plain_shift_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_axes_str_plain_shift_tuple, 1, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_axes_str_plain_shift_tuple, 2, const_str_plain_shift ); Py_INCREF( const_str_plain_shift );
    const_str_digest_6e0eae01eab538a2a2beb3f00b247b51 = UNSTREAM_STRING_ASCII( &constant_bin[ 2818020 ], 1343, 0 );
    const_str_plain__fftshift_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 2819363 ], 20, 1 );
    const_str_digest_466a2021b7031ac96596f95bb84e1a9d = UNSTREAM_STRING_ASCII( &constant_bin[ 2819383 ], 25, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$fft$helper( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c24d970a6eb1006b9865e9e172a22ac0;
static PyCodeObject *codeobj_337f87a8691d5b22a7b33ac2d347c012;
static PyCodeObject *codeobj_1fc9b4fde4bc4a22735edc4239567d7d;
static PyCodeObject *codeobj_06082423cde4bdc9ede300d04257d27e;
static PyCodeObject *codeobj_478fee477f8b74a7b50725539ef12926;
static PyCodeObject *codeobj_db201ed6685de9de6b89331a692be115;
static PyCodeObject *codeobj_cd09f784beaf74828ea3dd7d6988fdc8;
static PyCodeObject *codeobj_bbb2e1cc2806390d4176ff2322d0b480;
static PyCodeObject *codeobj_144ecfc12caaea18ff858aa82369f866;
static PyCodeObject *codeobj_f26c5a1bc67848589a031012a8d5f051;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_00b8dacfebebc032e30b6140ef9a0f5b );
    codeobj_c24d970a6eb1006b9865e9e172a22ac0 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 70, const_tuple_str_plain_dim_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_337f87a8691d5b22a7b33ac2d347c012 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 74, const_tuple_str_plain_ax_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1fc9b4fde4bc4a22735edc4239567d7d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 117, const_tuple_str_plain_dim_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_06082423cde4bdc9ede300d04257d27e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 121, const_tuple_str_plain_ax_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_478fee477f8b74a7b50725539ef12926 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_466a2021b7031ac96596f95bb84e1a9d, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_db201ed6685de9de6b89331a692be115 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fftshift_dispatcher, 18, const_tuple_str_plain_x_str_plain_axes_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cd09f784beaf74828ea3dd7d6988fdc8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fftfreq, 126, const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bbb2e1cc2806390d4176ff2322d0b480 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fftshift, 22, const_tuple_str_plain_x_str_plain_axes_str_plain_shift_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_144ecfc12caaea18ff858aa82369f866 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifftshift, 79, const_tuple_str_plain_x_str_plain_axes_str_plain_shift_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f26c5a1bc67848589a031012a8d5f051 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfftfreq, 175, const_tuple_1952086625b3b75894ff16424526eb36_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_1__fftshift_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_2_fftshift( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_3_ifftshift( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_4_fftfreq( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_5_rfftfreq( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$fft$helper$$$function_1__fftshift_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_axes = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_1__fftshift_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_1__fftshift_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$helper$$$function_2_fftshift( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_axes = python_pars[ 1 ];
    PyObject *var_shift = NULL;
    PyObject *outline_0_var_dim = NULL;
    PyObject *outline_1_var_ax = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_bbb2e1cc2806390d4176ff2322d0b480;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_c24d970a6eb1006b9865e9e172a22ac0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_c24d970a6eb1006b9865e9e172a22ac0_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_337f87a8691d5b22a7b33ac2d347c012_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_337f87a8691d5b22a7b33ac2d347c012_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bbb2e1cc2806390d4176ff2322d0b480 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bbb2e1cc2806390d4176ff2322d0b480, codeobj_bbb2e1cc2806390d4176ff2322d0b480, module_numpy$fft$helper, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bbb2e1cc2806390d4176ff2322d0b480 = cache_frame_bbb2e1cc2806390d4176ff2322d0b480;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bbb2e1cc2806390d4176ff2322d0b480 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bbb2e1cc2806390d4176ff2322d0b480 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_bbb2e1cc2806390d4176ff2322d0b480->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_axes );
        tmp_compexpr_left_1 = par_axes;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_tuple_arg_1;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_x );
            tmp_source_name_1 = par_x;
            tmp_xrange_low_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
            if ( tmp_xrange_low_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
            Py_DECREF( tmp_xrange_low_1 );
            if ( tmp_tuple_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = PySequence_Tuple( tmp_tuple_arg_1 );
            Py_DECREF( tmp_tuple_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_axes;
                assert( old != NULL );
                par_axes = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_3;
            // Tried code:
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_source_name_2;
                CHECK_OBJECT( par_x );
                tmp_source_name_2 = par_x;
                tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
                if ( tmp_iter_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
                Py_DECREF( tmp_iter_arg_1 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_4;
            }
            {
                PyObject *tmp_assign_source_5;
                tmp_assign_source_5 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_5;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_c24d970a6eb1006b9865e9e172a22ac0_2, codeobj_c24d970a6eb1006b9865e9e172a22ac0, module_numpy$fft$helper, sizeof(void *) );
            frame_c24d970a6eb1006b9865e9e172a22ac0_2 = cache_frame_c24d970a6eb1006b9865e9e172a22ac0_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_c24d970a6eb1006b9865e9e172a22ac0_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_c24d970a6eb1006b9865e9e172a22ac0_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
                tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_6 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "o";
                        exception_lineno = 70;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_7;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_dim;
                    outline_0_var_dim = tmp_assign_source_7;
                    Py_INCREF( outline_0_var_dim );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( outline_0_var_dim );
                tmp_left_name_1 = outline_0_var_dim;
                tmp_right_name_1 = const_int_pos_2;
                tmp_append_value_1 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_assign_source_3 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_assign_source_3 );
            goto try_return_handler_3;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_2_fftshift );
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
            Py_DECREF( tmp_listcomp_1__$0 );
            tmp_listcomp_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
            Py_DECREF( tmp_listcomp_1__contraction );
            tmp_listcomp_1__contraction = NULL;

            Py_XDECREF( tmp_listcomp_1__iter_value_0 );
            tmp_listcomp_1__iter_value_0 = NULL;

            goto frame_return_exit_2;
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

            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
            Py_DECREF( tmp_listcomp_1__$0 );
            tmp_listcomp_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
            Py_DECREF( tmp_listcomp_1__contraction );
            tmp_listcomp_1__contraction = NULL;

            Py_XDECREF( tmp_listcomp_1__iter_value_0 );
            tmp_listcomp_1__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_2;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_c24d970a6eb1006b9865e9e172a22ac0_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_c24d970a6eb1006b9865e9e172a22ac0_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_2;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_c24d970a6eb1006b9865e9e172a22ac0_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_c24d970a6eb1006b9865e9e172a22ac0_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_c24d970a6eb1006b9865e9e172a22ac0_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_c24d970a6eb1006b9865e9e172a22ac0_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_c24d970a6eb1006b9865e9e172a22ac0_2,
                type_description_2,
                outline_0_var_dim
            );


            // Release cached frame.
            if ( frame_c24d970a6eb1006b9865e9e172a22ac0_2 == cache_frame_c24d970a6eb1006b9865e9e172a22ac0_2 )
            {
                Py_DECREF( frame_c24d970a6eb1006b9865e9e172a22ac0_2 );
            }
            cache_frame_c24d970a6eb1006b9865e9e172a22ac0_2 = NULL;

            assertFrameObject( frame_c24d970a6eb1006b9865e9e172a22ac0_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "ooo";
            goto try_except_handler_2;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_2_fftshift );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            Py_XDECREF( outline_0_var_dim );
            outline_0_var_dim = NULL;

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

            Py_XDECREF( outline_0_var_dim );
            outline_0_var_dim = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_2_fftshift );
            return NULL;
            outline_exception_1:;
            exception_lineno = 70;
            goto frame_exception_exit_1;
            outline_result_1:;
            assert( var_shift == NULL );
            var_shift = tmp_assign_source_3;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_axes );
            tmp_isinstance_inst_1 = par_axes;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "integer_types" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 71;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_1 = tmp_mvar_value_2;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
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
                PyObject *tmp_assign_source_8;
                PyObject *tmp_left_name_2;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT( par_x );
                tmp_source_name_3 = par_x;
                tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
                if ( tmp_subscribed_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_axes );
                tmp_subscript_name_1 = par_axes;
                tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscribed_name_1 );
                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_2 = const_int_pos_2;
                tmp_assign_source_8 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                assert( var_shift == NULL );
                var_shift = tmp_assign_source_8;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_9;
                // Tried code:
                {
                    PyObject *tmp_assign_source_10;
                    PyObject *tmp_iter_arg_2;
                    CHECK_OBJECT( par_axes );
                    tmp_iter_arg_2 = par_axes;
                    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
                    if ( tmp_assign_source_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 74;
                        type_description_1 = "ooo";
                        goto try_except_handler_4;
                    }
                    assert( tmp_listcomp_2__$0 == NULL );
                    tmp_listcomp_2__$0 = tmp_assign_source_10;
                }
                {
                    PyObject *tmp_assign_source_11;
                    tmp_assign_source_11 = PyList_New( 0 );
                    assert( tmp_listcomp_2__contraction == NULL );
                    tmp_listcomp_2__contraction = tmp_assign_source_11;
                }
                MAKE_OR_REUSE_FRAME( cache_frame_337f87a8691d5b22a7b33ac2d347c012_3, codeobj_337f87a8691d5b22a7b33ac2d347c012, module_numpy$fft$helper, sizeof(void *)+sizeof(void *) );
                frame_337f87a8691d5b22a7b33ac2d347c012_3 = cache_frame_337f87a8691d5b22a7b33ac2d347c012_3;

                // Push the new frame as the currently active one.
                pushFrameStack( frame_337f87a8691d5b22a7b33ac2d347c012_3 );

                // Mark the frame object as in use, ref count 1 will be up for reuse.
                assert( Py_REFCNT( frame_337f87a8691d5b22a7b33ac2d347c012_3 ) == 2 ); // Frame stack

                // Framed code:
                // Tried code:
                loop_start_2:;
                {
                    PyObject *tmp_next_source_2;
                    PyObject *tmp_assign_source_12;
                    CHECK_OBJECT( tmp_listcomp_2__$0 );
                    tmp_next_source_2 = tmp_listcomp_2__$0;
                    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_2 );
                    if ( tmp_assign_source_12 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_2;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_2 = "oo";
                            exception_lineno = 74;
                            goto try_except_handler_5;
                        }
                    }

                    {
                        PyObject *old = tmp_listcomp_2__iter_value_0;
                        tmp_listcomp_2__iter_value_0 = tmp_assign_source_12;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_13;
                    CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
                    tmp_assign_source_13 = tmp_listcomp_2__iter_value_0;
                    {
                        PyObject *old = outline_1_var_ax;
                        outline_1_var_ax = tmp_assign_source_13;
                        Py_INCREF( outline_1_var_ax );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_append_list_2;
                    PyObject *tmp_append_value_2;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_subscribed_name_2;
                    PyObject *tmp_source_name_4;
                    PyObject *tmp_subscript_name_2;
                    PyObject *tmp_right_name_3;
                    CHECK_OBJECT( tmp_listcomp_2__contraction );
                    tmp_append_list_2 = tmp_listcomp_2__contraction;
                    CHECK_OBJECT( par_x );
                    tmp_source_name_4 = par_x;
                    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
                    if ( tmp_subscribed_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 74;
                        type_description_2 = "oo";
                        goto try_except_handler_5;
                    }
                    CHECK_OBJECT( outline_1_var_ax );
                    tmp_subscript_name_2 = outline_1_var_ax;
                    tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                    Py_DECREF( tmp_subscribed_name_2 );
                    if ( tmp_left_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 74;
                        type_description_2 = "oo";
                        goto try_except_handler_5;
                    }
                    tmp_right_name_3 = const_int_pos_2;
                    tmp_append_value_2 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
                    Py_DECREF( tmp_left_name_3 );
                    if ( tmp_append_value_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 74;
                        type_description_2 = "oo";
                        goto try_except_handler_5;
                    }
                    assert( PyList_Check( tmp_append_list_2 ) );
                    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
                    Py_DECREF( tmp_append_value_2 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 74;
                        type_description_2 = "oo";
                        goto try_except_handler_5;
                    }
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 74;
                    type_description_2 = "oo";
                    goto try_except_handler_5;
                }
                goto loop_start_2;
                loop_end_2:;
                CHECK_OBJECT( tmp_listcomp_2__contraction );
                tmp_assign_source_9 = tmp_listcomp_2__contraction;
                Py_INCREF( tmp_assign_source_9 );
                goto try_return_handler_5;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_2_fftshift );
                return NULL;
                // Return handler code:
                try_return_handler_5:;
                CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
                Py_DECREF( tmp_listcomp_2__$0 );
                tmp_listcomp_2__$0 = NULL;

                CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
                Py_DECREF( tmp_listcomp_2__contraction );
                tmp_listcomp_2__contraction = NULL;

                Py_XDECREF( tmp_listcomp_2__iter_value_0 );
                tmp_listcomp_2__iter_value_0 = NULL;

                goto frame_return_exit_3;
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

                CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
                Py_DECREF( tmp_listcomp_2__$0 );
                tmp_listcomp_2__$0 = NULL;

                CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
                Py_DECREF( tmp_listcomp_2__contraction );
                tmp_listcomp_2__contraction = NULL;

                Py_XDECREF( tmp_listcomp_2__iter_value_0 );
                tmp_listcomp_2__iter_value_0 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_3;
                exception_value = exception_keeper_value_3;
                exception_tb = exception_keeper_tb_3;
                exception_lineno = exception_keeper_lineno_3;

                goto frame_exception_exit_3;
                // End of try:

#if 0
                RESTORE_FRAME_EXCEPTION( frame_337f87a8691d5b22a7b33ac2d347c012_3 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto frame_no_exception_2;

                frame_return_exit_3:;
#if 0
                RESTORE_FRAME_EXCEPTION( frame_337f87a8691d5b22a7b33ac2d347c012_3 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto try_return_handler_4;

                frame_exception_exit_3:;

#if 0
                RESTORE_FRAME_EXCEPTION( frame_337f87a8691d5b22a7b33ac2d347c012_3 );
#endif

                if ( exception_tb == NULL )
                {
                    exception_tb = MAKE_TRACEBACK( frame_337f87a8691d5b22a7b33ac2d347c012_3, exception_lineno );
                }
                else if ( exception_tb->tb_frame != &frame_337f87a8691d5b22a7b33ac2d347c012_3->m_frame )
                {
                    exception_tb = ADD_TRACEBACK( exception_tb, frame_337f87a8691d5b22a7b33ac2d347c012_3, exception_lineno );
                }

                // Attachs locals to frame if any.
                Nuitka_Frame_AttachLocals(
                    (struct Nuitka_FrameObject *)frame_337f87a8691d5b22a7b33ac2d347c012_3,
                    type_description_2,
                    outline_1_var_ax,
                    par_x
                );


                // Release cached frame.
                if ( frame_337f87a8691d5b22a7b33ac2d347c012_3 == cache_frame_337f87a8691d5b22a7b33ac2d347c012_3 )
                {
                    Py_DECREF( frame_337f87a8691d5b22a7b33ac2d347c012_3 );
                }
                cache_frame_337f87a8691d5b22a7b33ac2d347c012_3 = NULL;

                assertFrameObject( frame_337f87a8691d5b22a7b33ac2d347c012_3 );

                // Put the previous frame back on top.
                popFrameStack();

                // Return the error.
                goto nested_frame_exit_2;

                frame_no_exception_2:;
                goto skip_nested_handling_2;
                nested_frame_exit_2:;
                type_description_1 = "ooo";
                goto try_except_handler_4;
                skip_nested_handling_2:;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_2_fftshift );
                return NULL;
                // Return handler code:
                try_return_handler_4:;
                Py_XDECREF( outline_1_var_ax );
                outline_1_var_ax = NULL;

                goto outline_result_2;
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

                Py_XDECREF( outline_1_var_ax );
                outline_1_var_ax = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_4;
                exception_value = exception_keeper_value_4;
                exception_tb = exception_keeper_tb_4;
                exception_lineno = exception_keeper_lineno_4;

                goto outline_exception_2;
                // End of try:
                // Return statement must have exited already.
                NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_2_fftshift );
                return NULL;
                outline_exception_2:;
                exception_lineno = 74;
                goto frame_exception_exit_1;
                outline_result_2:;
                assert( var_shift == NULL );
                var_shift = tmp_assign_source_9;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_roll );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_roll );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "roll" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        if ( var_shift == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "shift" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = var_shift;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_4 = par_axes;
        frame_bbb2e1cc2806390d4176ff2322d0b480->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbb2e1cc2806390d4176ff2322d0b480 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbb2e1cc2806390d4176ff2322d0b480 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbb2e1cc2806390d4176ff2322d0b480 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bbb2e1cc2806390d4176ff2322d0b480, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bbb2e1cc2806390d4176ff2322d0b480->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bbb2e1cc2806390d4176ff2322d0b480, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bbb2e1cc2806390d4176ff2322d0b480,
        type_description_1,
        par_x,
        par_axes,
        var_shift
    );


    // Release cached frame.
    if ( frame_bbb2e1cc2806390d4176ff2322d0b480 == cache_frame_bbb2e1cc2806390d4176ff2322d0b480 )
    {
        Py_DECREF( frame_bbb2e1cc2806390d4176ff2322d0b480 );
    }
    cache_frame_bbb2e1cc2806390d4176ff2322d0b480 = NULL;

    assertFrameObject( frame_bbb2e1cc2806390d4176ff2322d0b480 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_2_fftshift );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    Py_XDECREF( var_shift );
    var_shift = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_axes );
    par_axes = NULL;

    Py_XDECREF( var_shift );
    var_shift = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_2_fftshift );
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


static PyObject *impl_numpy$fft$helper$$$function_3_ifftshift( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_axes = python_pars[ 1 ];
    PyObject *var_shift = NULL;
    PyObject *outline_0_var_dim = NULL;
    PyObject *outline_1_var_ax = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_144ecfc12caaea18ff858aa82369f866;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_1fc9b4fde4bc4a22735edc4239567d7d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1fc9b4fde4bc4a22735edc4239567d7d_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_06082423cde4bdc9ede300d04257d27e_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_06082423cde4bdc9ede300d04257d27e_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_144ecfc12caaea18ff858aa82369f866 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_144ecfc12caaea18ff858aa82369f866, codeobj_144ecfc12caaea18ff858aa82369f866, module_numpy$fft$helper, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_144ecfc12caaea18ff858aa82369f866 = cache_frame_144ecfc12caaea18ff858aa82369f866;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_144ecfc12caaea18ff858aa82369f866 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_144ecfc12caaea18ff858aa82369f866 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_144ecfc12caaea18ff858aa82369f866->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_axes );
        tmp_compexpr_left_1 = par_axes;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_tuple_arg_1;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_x );
            tmp_source_name_1 = par_x;
            tmp_xrange_low_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
            if ( tmp_xrange_low_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
            Py_DECREF( tmp_xrange_low_1 );
            if ( tmp_tuple_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = PySequence_Tuple( tmp_tuple_arg_1 );
            Py_DECREF( tmp_tuple_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_axes;
                assert( old != NULL );
                par_axes = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_3;
            // Tried code:
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_source_name_2;
                CHECK_OBJECT( par_x );
                tmp_source_name_2 = par_x;
                tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
                if ( tmp_iter_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 117;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
                Py_DECREF( tmp_iter_arg_1 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 117;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_4;
            }
            {
                PyObject *tmp_assign_source_5;
                tmp_assign_source_5 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_5;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_1fc9b4fde4bc4a22735edc4239567d7d_2, codeobj_1fc9b4fde4bc4a22735edc4239567d7d, module_numpy$fft$helper, sizeof(void *) );
            frame_1fc9b4fde4bc4a22735edc4239567d7d_2 = cache_frame_1fc9b4fde4bc4a22735edc4239567d7d_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_1fc9b4fde4bc4a22735edc4239567d7d_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_1fc9b4fde4bc4a22735edc4239567d7d_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
                tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_6 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "o";
                        exception_lineno = 117;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_7;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_dim;
                    outline_0_var_dim = tmp_assign_source_7;
                    Py_INCREF( outline_0_var_dim );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( outline_0_var_dim );
                tmp_left_name_1 = outline_0_var_dim;
                tmp_right_name_1 = const_int_pos_2;
                tmp_operand_name_1 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_operand_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 117;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
                tmp_append_value_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
                Py_DECREF( tmp_operand_name_1 );
                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 117;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 117;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_assign_source_3 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_assign_source_3 );
            goto try_return_handler_3;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_3_ifftshift );
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
            Py_DECREF( tmp_listcomp_1__$0 );
            tmp_listcomp_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
            Py_DECREF( tmp_listcomp_1__contraction );
            tmp_listcomp_1__contraction = NULL;

            Py_XDECREF( tmp_listcomp_1__iter_value_0 );
            tmp_listcomp_1__iter_value_0 = NULL;

            goto frame_return_exit_2;
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

            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
            Py_DECREF( tmp_listcomp_1__$0 );
            tmp_listcomp_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
            Py_DECREF( tmp_listcomp_1__contraction );
            tmp_listcomp_1__contraction = NULL;

            Py_XDECREF( tmp_listcomp_1__iter_value_0 );
            tmp_listcomp_1__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_2;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_1fc9b4fde4bc4a22735edc4239567d7d_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_1fc9b4fde4bc4a22735edc4239567d7d_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_2;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_1fc9b4fde4bc4a22735edc4239567d7d_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_1fc9b4fde4bc4a22735edc4239567d7d_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_1fc9b4fde4bc4a22735edc4239567d7d_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_1fc9b4fde4bc4a22735edc4239567d7d_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_1fc9b4fde4bc4a22735edc4239567d7d_2,
                type_description_2,
                outline_0_var_dim
            );


            // Release cached frame.
            if ( frame_1fc9b4fde4bc4a22735edc4239567d7d_2 == cache_frame_1fc9b4fde4bc4a22735edc4239567d7d_2 )
            {
                Py_DECREF( frame_1fc9b4fde4bc4a22735edc4239567d7d_2 );
            }
            cache_frame_1fc9b4fde4bc4a22735edc4239567d7d_2 = NULL;

            assertFrameObject( frame_1fc9b4fde4bc4a22735edc4239567d7d_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "ooo";
            goto try_except_handler_2;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_3_ifftshift );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            Py_XDECREF( outline_0_var_dim );
            outline_0_var_dim = NULL;

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

            Py_XDECREF( outline_0_var_dim );
            outline_0_var_dim = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_3_ifftshift );
            return NULL;
            outline_exception_1:;
            exception_lineno = 117;
            goto frame_exception_exit_1;
            outline_result_1:;
            assert( var_shift == NULL );
            var_shift = tmp_assign_source_3;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_axes );
            tmp_isinstance_inst_1 = par_axes;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "integer_types" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 118;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_1 = tmp_mvar_value_2;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
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
                PyObject *tmp_assign_source_8;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT( par_x );
                tmp_source_name_3 = par_x;
                tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
                if ( tmp_subscribed_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 119;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_axes );
                tmp_subscript_name_1 = par_axes;
                tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscribed_name_1 );
                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 119;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_2 = const_int_pos_2;
                tmp_operand_name_2 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                if ( tmp_operand_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 119;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_8 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
                Py_DECREF( tmp_operand_name_2 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 119;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                assert( var_shift == NULL );
                var_shift = tmp_assign_source_8;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_9;
                // Tried code:
                {
                    PyObject *tmp_assign_source_10;
                    PyObject *tmp_iter_arg_2;
                    CHECK_OBJECT( par_axes );
                    tmp_iter_arg_2 = par_axes;
                    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
                    if ( tmp_assign_source_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 121;
                        type_description_1 = "ooo";
                        goto try_except_handler_4;
                    }
                    assert( tmp_listcomp_2__$0 == NULL );
                    tmp_listcomp_2__$0 = tmp_assign_source_10;
                }
                {
                    PyObject *tmp_assign_source_11;
                    tmp_assign_source_11 = PyList_New( 0 );
                    assert( tmp_listcomp_2__contraction == NULL );
                    tmp_listcomp_2__contraction = tmp_assign_source_11;
                }
                MAKE_OR_REUSE_FRAME( cache_frame_06082423cde4bdc9ede300d04257d27e_3, codeobj_06082423cde4bdc9ede300d04257d27e, module_numpy$fft$helper, sizeof(void *)+sizeof(void *) );
                frame_06082423cde4bdc9ede300d04257d27e_3 = cache_frame_06082423cde4bdc9ede300d04257d27e_3;

                // Push the new frame as the currently active one.
                pushFrameStack( frame_06082423cde4bdc9ede300d04257d27e_3 );

                // Mark the frame object as in use, ref count 1 will be up for reuse.
                assert( Py_REFCNT( frame_06082423cde4bdc9ede300d04257d27e_3 ) == 2 ); // Frame stack

                // Framed code:
                // Tried code:
                loop_start_2:;
                {
                    PyObject *tmp_next_source_2;
                    PyObject *tmp_assign_source_12;
                    CHECK_OBJECT( tmp_listcomp_2__$0 );
                    tmp_next_source_2 = tmp_listcomp_2__$0;
                    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_2 );
                    if ( tmp_assign_source_12 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_2;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_2 = "oo";
                            exception_lineno = 121;
                            goto try_except_handler_5;
                        }
                    }

                    {
                        PyObject *old = tmp_listcomp_2__iter_value_0;
                        tmp_listcomp_2__iter_value_0 = tmp_assign_source_12;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_13;
                    CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
                    tmp_assign_source_13 = tmp_listcomp_2__iter_value_0;
                    {
                        PyObject *old = outline_1_var_ax;
                        outline_1_var_ax = tmp_assign_source_13;
                        Py_INCREF( outline_1_var_ax );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_append_list_2;
                    PyObject *tmp_append_value_2;
                    PyObject *tmp_operand_name_3;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_subscribed_name_2;
                    PyObject *tmp_source_name_4;
                    PyObject *tmp_subscript_name_2;
                    PyObject *tmp_right_name_3;
                    CHECK_OBJECT( tmp_listcomp_2__contraction );
                    tmp_append_list_2 = tmp_listcomp_2__contraction;
                    CHECK_OBJECT( par_x );
                    tmp_source_name_4 = par_x;
                    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
                    if ( tmp_subscribed_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 121;
                        type_description_2 = "oo";
                        goto try_except_handler_5;
                    }
                    CHECK_OBJECT( outline_1_var_ax );
                    tmp_subscript_name_2 = outline_1_var_ax;
                    tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                    Py_DECREF( tmp_subscribed_name_2 );
                    if ( tmp_left_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 121;
                        type_description_2 = "oo";
                        goto try_except_handler_5;
                    }
                    tmp_right_name_3 = const_int_pos_2;
                    tmp_operand_name_3 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
                    Py_DECREF( tmp_left_name_3 );
                    if ( tmp_operand_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 121;
                        type_description_2 = "oo";
                        goto try_except_handler_5;
                    }
                    tmp_append_value_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
                    Py_DECREF( tmp_operand_name_3 );
                    if ( tmp_append_value_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 121;
                        type_description_2 = "oo";
                        goto try_except_handler_5;
                    }
                    assert( PyList_Check( tmp_append_list_2 ) );
                    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
                    Py_DECREF( tmp_append_value_2 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 121;
                        type_description_2 = "oo";
                        goto try_except_handler_5;
                    }
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 121;
                    type_description_2 = "oo";
                    goto try_except_handler_5;
                }
                goto loop_start_2;
                loop_end_2:;
                CHECK_OBJECT( tmp_listcomp_2__contraction );
                tmp_assign_source_9 = tmp_listcomp_2__contraction;
                Py_INCREF( tmp_assign_source_9 );
                goto try_return_handler_5;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_3_ifftshift );
                return NULL;
                // Return handler code:
                try_return_handler_5:;
                CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
                Py_DECREF( tmp_listcomp_2__$0 );
                tmp_listcomp_2__$0 = NULL;

                CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
                Py_DECREF( tmp_listcomp_2__contraction );
                tmp_listcomp_2__contraction = NULL;

                Py_XDECREF( tmp_listcomp_2__iter_value_0 );
                tmp_listcomp_2__iter_value_0 = NULL;

                goto frame_return_exit_3;
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

                CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
                Py_DECREF( tmp_listcomp_2__$0 );
                tmp_listcomp_2__$0 = NULL;

                CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
                Py_DECREF( tmp_listcomp_2__contraction );
                tmp_listcomp_2__contraction = NULL;

                Py_XDECREF( tmp_listcomp_2__iter_value_0 );
                tmp_listcomp_2__iter_value_0 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_3;
                exception_value = exception_keeper_value_3;
                exception_tb = exception_keeper_tb_3;
                exception_lineno = exception_keeper_lineno_3;

                goto frame_exception_exit_3;
                // End of try:

#if 0
                RESTORE_FRAME_EXCEPTION( frame_06082423cde4bdc9ede300d04257d27e_3 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto frame_no_exception_2;

                frame_return_exit_3:;
#if 0
                RESTORE_FRAME_EXCEPTION( frame_06082423cde4bdc9ede300d04257d27e_3 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto try_return_handler_4;

                frame_exception_exit_3:;

#if 0
                RESTORE_FRAME_EXCEPTION( frame_06082423cde4bdc9ede300d04257d27e_3 );
#endif

                if ( exception_tb == NULL )
                {
                    exception_tb = MAKE_TRACEBACK( frame_06082423cde4bdc9ede300d04257d27e_3, exception_lineno );
                }
                else if ( exception_tb->tb_frame != &frame_06082423cde4bdc9ede300d04257d27e_3->m_frame )
                {
                    exception_tb = ADD_TRACEBACK( exception_tb, frame_06082423cde4bdc9ede300d04257d27e_3, exception_lineno );
                }

                // Attachs locals to frame if any.
                Nuitka_Frame_AttachLocals(
                    (struct Nuitka_FrameObject *)frame_06082423cde4bdc9ede300d04257d27e_3,
                    type_description_2,
                    outline_1_var_ax,
                    par_x
                );


                // Release cached frame.
                if ( frame_06082423cde4bdc9ede300d04257d27e_3 == cache_frame_06082423cde4bdc9ede300d04257d27e_3 )
                {
                    Py_DECREF( frame_06082423cde4bdc9ede300d04257d27e_3 );
                }
                cache_frame_06082423cde4bdc9ede300d04257d27e_3 = NULL;

                assertFrameObject( frame_06082423cde4bdc9ede300d04257d27e_3 );

                // Put the previous frame back on top.
                popFrameStack();

                // Return the error.
                goto nested_frame_exit_2;

                frame_no_exception_2:;
                goto skip_nested_handling_2;
                nested_frame_exit_2:;
                type_description_1 = "ooo";
                goto try_except_handler_4;
                skip_nested_handling_2:;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_3_ifftshift );
                return NULL;
                // Return handler code:
                try_return_handler_4:;
                Py_XDECREF( outline_1_var_ax );
                outline_1_var_ax = NULL;

                goto outline_result_2;
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

                Py_XDECREF( outline_1_var_ax );
                outline_1_var_ax = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_4;
                exception_value = exception_keeper_value_4;
                exception_tb = exception_keeper_tb_4;
                exception_lineno = exception_keeper_lineno_4;

                goto outline_exception_2;
                // End of try:
                // Return statement must have exited already.
                NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_3_ifftshift );
                return NULL;
                outline_exception_2:;
                exception_lineno = 121;
                goto frame_exception_exit_1;
                outline_result_2:;
                assert( var_shift == NULL );
                var_shift = tmp_assign_source_9;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_roll );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_roll );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "roll" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        if ( var_shift == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "shift" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = var_shift;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_4 = par_axes;
        frame_144ecfc12caaea18ff858aa82369f866->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_144ecfc12caaea18ff858aa82369f866 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_144ecfc12caaea18ff858aa82369f866 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_144ecfc12caaea18ff858aa82369f866 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_144ecfc12caaea18ff858aa82369f866, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_144ecfc12caaea18ff858aa82369f866->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_144ecfc12caaea18ff858aa82369f866, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_144ecfc12caaea18ff858aa82369f866,
        type_description_1,
        par_x,
        par_axes,
        var_shift
    );


    // Release cached frame.
    if ( frame_144ecfc12caaea18ff858aa82369f866 == cache_frame_144ecfc12caaea18ff858aa82369f866 )
    {
        Py_DECREF( frame_144ecfc12caaea18ff858aa82369f866 );
    }
    cache_frame_144ecfc12caaea18ff858aa82369f866 = NULL;

    assertFrameObject( frame_144ecfc12caaea18ff858aa82369f866 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_3_ifftshift );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    Py_XDECREF( var_shift );
    var_shift = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_axes );
    par_axes = NULL;

    Py_XDECREF( var_shift );
    var_shift = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_3_ifftshift );
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


static PyObject *impl_numpy$fft$helper$$$function_4_fftfreq( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *var_val = NULL;
    PyObject *var_results = NULL;
    PyObject *var_N = NULL;
    PyObject *var_p1 = NULL;
    PyObject *var_p2 = NULL;
    struct Nuitka_FrameObject *frame_cd09f784beaf74828ea3dd7d6988fdc8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cd09f784beaf74828ea3dd7d6988fdc8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cd09f784beaf74828ea3dd7d6988fdc8, codeobj_cd09f784beaf74828ea3dd7d6988fdc8, module_numpy$fft$helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cd09f784beaf74828ea3dd7d6988fdc8 = cache_frame_cd09f784beaf74828ea3dd7d6988fdc8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cd09f784beaf74828ea3dd7d6988fdc8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cd09f784beaf74828ea3dd7d6988fdc8 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_n );
        tmp_isinstance_inst_1 = par_n;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "integer_types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_576644db5145960717a957e6a5504ec5;
            frame_cd09f784beaf74828ea3dd7d6988fdc8->m_frame.f_lineno = 164;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 164;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_1 = const_float_1_0;
        CHECK_OBJECT( par_n );
        tmp_left_name_2 = par_n;
        CHECK_OBJECT( par_d );
        tmp_right_name_2 = par_d;
        tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_val == NULL );
        var_val = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_empty );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_empty );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "empty" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 166;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_1 = par_n;
        tmp_args_element_name_2 = (PyObject *)&PyLong_Type;
        frame_cd09f784beaf74828ea3dd7d6988fdc8->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_results == NULL );
        var_results = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_n );
        tmp_left_name_5 = par_n;
        tmp_right_name_3 = const_int_pos_1;
        tmp_left_name_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_5, tmp_right_name_3 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_2;
        tmp_left_name_3 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_int_pos_1;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_N == NULL );
        var_N = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "arange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 168;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        tmp_tuple_element_1 = const_int_0;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_N );
        tmp_tuple_element_1 = var_N;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_cd09f784beaf74828ea3dd7d6988fdc8->m_frame.f_lineno = 168;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p1 == NULL );
        var_p1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_p1 );
        tmp_ass_subvalue_1 = var_p1;
        CHECK_OBJECT( var_results );
        tmp_ass_subscribed_1 = var_results;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_N );
        tmp_stop_name_1 = var_N;
        tmp_step_name_1 = Py_None;
        tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_ass_subscript_1 == NULL) );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "arange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 170;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_n );
        tmp_left_name_6 = par_n;
        tmp_right_name_6 = const_int_pos_2;
        tmp_operand_name_2 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_0;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_cd09f784beaf74828ea3dd7d6988fdc8->m_frame.f_lineno = 170;
        tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p2 == NULL );
        var_p2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( var_p2 );
        tmp_ass_subvalue_2 = var_p2;
        CHECK_OBJECT( var_results );
        tmp_ass_subscribed_2 = var_results;
        CHECK_OBJECT( var_N );
        tmp_start_name_2 = var_N;
        tmp_stop_name_2 = Py_None;
        tmp_step_name_2 = Py_None;
        tmp_ass_subscript_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_ass_subscript_2 == NULL) );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscript_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_results );
        tmp_left_name_7 = var_results;
        CHECK_OBJECT( var_val );
        tmp_right_name_7 = var_val;
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd09f784beaf74828ea3dd7d6988fdc8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd09f784beaf74828ea3dd7d6988fdc8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd09f784beaf74828ea3dd7d6988fdc8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cd09f784beaf74828ea3dd7d6988fdc8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cd09f784beaf74828ea3dd7d6988fdc8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cd09f784beaf74828ea3dd7d6988fdc8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cd09f784beaf74828ea3dd7d6988fdc8,
        type_description_1,
        par_n,
        par_d,
        var_val,
        var_results,
        var_N,
        var_p1,
        var_p2
    );


    // Release cached frame.
    if ( frame_cd09f784beaf74828ea3dd7d6988fdc8 == cache_frame_cd09f784beaf74828ea3dd7d6988fdc8 )
    {
        Py_DECREF( frame_cd09f784beaf74828ea3dd7d6988fdc8 );
    }
    cache_frame_cd09f784beaf74828ea3dd7d6988fdc8 = NULL;

    assertFrameObject( frame_cd09f784beaf74828ea3dd7d6988fdc8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_4_fftfreq );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)var_val );
    Py_DECREF( var_val );
    var_val = NULL;

    CHECK_OBJECT( (PyObject *)var_results );
    Py_DECREF( var_results );
    var_results = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_p1 );
    Py_DECREF( var_p1 );
    var_p1 = NULL;

    CHECK_OBJECT( (PyObject *)var_p2 );
    Py_DECREF( var_p2 );
    var_p2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_results );
    var_results = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_p1 );
    var_p1 = NULL;

    Py_XDECREF( var_p2 );
    var_p2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_4_fftfreq );
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


static PyObject *impl_numpy$fft$helper$$$function_5_rfftfreq( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *var_val = NULL;
    PyObject *var_N = NULL;
    PyObject *var_results = NULL;
    struct Nuitka_FrameObject *frame_f26c5a1bc67848589a031012a8d5f051;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f26c5a1bc67848589a031012a8d5f051 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f26c5a1bc67848589a031012a8d5f051, codeobj_f26c5a1bc67848589a031012a8d5f051, module_numpy$fft$helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f26c5a1bc67848589a031012a8d5f051 = cache_frame_f26c5a1bc67848589a031012a8d5f051;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f26c5a1bc67848589a031012a8d5f051 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f26c5a1bc67848589a031012a8d5f051 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_n );
        tmp_isinstance_inst_1 = par_n;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "integer_types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "ooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_576644db5145960717a957e6a5504ec5;
            frame_f26c5a1bc67848589a031012a8d5f051->m_frame.f_lineno = 220;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 220;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_1 = const_float_1_0;
        CHECK_OBJECT( par_n );
        tmp_left_name_2 = par_n;
        CHECK_OBJECT( par_d );
        tmp_right_name_2 = par_d;
        tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_val == NULL );
        var_val = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_n );
        tmp_left_name_4 = par_n;
        tmp_right_name_3 = const_int_pos_2;
        tmp_left_name_3 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_N == NULL );
        var_N = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "arange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_tuple_element_1 = const_int_0;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_N );
        tmp_tuple_element_1 = var_N;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_f26c5a1bc67848589a031012a8d5f051->m_frame.f_lineno = 223;
        tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_results == NULL );
        var_results = tmp_assign_source_3;
    }
    {
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_results );
        tmp_left_name_5 = var_results;
        CHECK_OBJECT( var_val );
        tmp_right_name_5 = var_val;
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f26c5a1bc67848589a031012a8d5f051 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f26c5a1bc67848589a031012a8d5f051 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f26c5a1bc67848589a031012a8d5f051 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f26c5a1bc67848589a031012a8d5f051, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f26c5a1bc67848589a031012a8d5f051->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f26c5a1bc67848589a031012a8d5f051, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f26c5a1bc67848589a031012a8d5f051,
        type_description_1,
        par_n,
        par_d,
        var_val,
        var_N,
        var_results
    );


    // Release cached frame.
    if ( frame_f26c5a1bc67848589a031012a8d5f051 == cache_frame_f26c5a1bc67848589a031012a8d5f051 )
    {
        Py_DECREF( frame_f26c5a1bc67848589a031012a8d5f051 );
    }
    cache_frame_f26c5a1bc67848589a031012a8d5f051 = NULL;

    assertFrameObject( frame_f26c5a1bc67848589a031012a8d5f051 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_5_rfftfreq );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)var_val );
    Py_DECREF( var_val );
    var_val = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_results );
    Py_DECREF( var_results );
    var_results = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_results );
    var_results = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_5_rfftfreq );
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



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_1__fftshift_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_1__fftshift_dispatcher,
        const_str_plain__fftshift_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_db201ed6685de9de6b89331a692be115,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$helper,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_2_fftshift( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_2_fftshift,
        const_str_plain_fftshift,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bbb2e1cc2806390d4176ff2322d0b480,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$helper,
        const_str_digest_7f758ac54808ea34c4859bf8ed8acc13,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_3_ifftshift( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_3_ifftshift,
        const_str_plain_ifftshift,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_144ecfc12caaea18ff858aa82369f866,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$helper,
        const_str_digest_1f896e1cd39c960c2dfcf70d6b941e75,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_4_fftfreq( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_4_fftfreq,
        const_str_plain_fftfreq,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cd09f784beaf74828ea3dd7d6988fdc8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$helper,
        const_str_digest_708fb3f4a116de82c9da5a93983f8013,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_5_rfftfreq( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_5_rfftfreq,
        const_str_plain_rfftfreq,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f26c5a1bc67848589a031012a8d5f051,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$helper,
        const_str_digest_6e0eae01eab538a2a2beb3f00b247b51,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$fft$helper =
{
    PyModuleDef_HEAD_INIT,
    "numpy.fft.helper",
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

MOD_INIT_DECL( numpy$fft$helper )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$fft$helper );
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
    puts("numpy.fft.helper: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.fft.helper: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.fft.helper: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$fft$helper" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$fft$helper = Py_InitModule4(
        "numpy.fft.helper",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$fft$helper = PyModule_Create( &mdef_numpy$fft$helper );
#endif

    moduledict_numpy$fft$helper = MODULE_DICT( module_numpy$fft$helper );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$fft$helper,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$fft$helper,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$fft$helper,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$fft$helper,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$fft$helper );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_91a6e65509cfbbe4ba154cabdb7becca, module_numpy$fft$helper );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_478fee477f8b74a7b50725539ef12926;
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
        tmp_assign_source_1 = const_str_digest_4ef7001003be7e06506ab78ccaae217c;
        UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_478fee477f8b74a7b50725539ef12926 = MAKE_MODULE_FRAME( codeobj_478fee477f8b74a7b50725539ef12926, module_numpy$fft$helper );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_478fee477f8b74a7b50725539ef12926 );
    assert( Py_REFCNT( frame_478fee477f8b74a7b50725539ef12926 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_478fee477f8b74a7b50725539ef12926->m_frame.f_lineno = 5;
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


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$fft$helper;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_integer_types_tuple;
        tmp_level_name_1 = const_int_0;
        frame_478fee477f8b74a7b50725539ef12926->m_frame.f_lineno = 7;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_integer_types );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$fft$helper;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_f88810d4a47a40e84c75c6333ccc123f_tuple;
        tmp_level_name_2 = const_int_0;
        frame_478fee477f8b74a7b50725539ef12926->m_frame.f_lineno = 8;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_integer );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_empty );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_empty, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_arange );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_asarray );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_roll );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_roll, tmp_assign_source_14 );
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_3ebbb82d9800d0665e0803be07081408;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$fft$helper;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_array_function_dispatch_str_plain_set_module_tuple;
        tmp_level_name_3 = const_int_0;
        frame_478fee477f8b74a7b50725539ef12926->m_frame.f_lineno = 9;
        tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_array_function_dispatch );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_11 = tmp_import_from_3__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_set_module );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_set_module, tmp_assign_source_17 );
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
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = LIST_COPY( const_list_d3376bb1f7f4aa67004298e8d81c0177_list );
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "integer_types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "integer" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_4;
        tmp_right_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_20 = MAKE_FUNCTION_numpy$fft$helper$$$function_1__fftshift_dispatcher( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain__fftshift_dispatcher, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_defaults_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain__fftshift_dispatcher );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftshift_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_tuple_element_2 = tmp_mvar_value_6;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c0d9920cdb2d132dd609908b9aa6b9e2 );
        frame_478fee477f8b74a7b50725539ef12926->m_frame.f_lineno = 22;
        tmp_called_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_args_element_name_1 = MAKE_FUNCTION_numpy$fft$helper$$$function_2_fftshift( tmp_defaults_2 );



        frame_478fee477f8b74a7b50725539ef12926->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_fftshift, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_3;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain__fftshift_dispatcher );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftshift_dispatcher );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftshift_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = tmp_mvar_value_8;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_c0d9920cdb2d132dd609908b9aa6b9e2 );
        frame_478fee477f8b74a7b50725539ef12926->m_frame.f_lineno = 79;
        tmp_called_name_3 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$fft$helper$$$function_3_ifftshift( tmp_defaults_3 );



        frame_478fee477f8b74a7b50725539ef12926->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_ifftshift, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_defaults_4;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_9;
        frame_478fee477f8b74a7b50725539ef12926->m_frame.f_lineno = 126;
        tmp_called_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_digest_b53f3811d9d65c912707e9b896ba9934_tuple, 0 ) );

        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = const_tuple_float_1_0_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_args_element_name_3 = MAKE_FUNCTION_numpy$fft$helper$$$function_4_fftfreq( tmp_defaults_4 );



        frame_478fee477f8b74a7b50725539ef12926->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_fftfreq, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_7;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_defaults_5;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_10;
        frame_478fee477f8b74a7b50725539ef12926->m_frame.f_lineno = 175;
        tmp_called_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_str_digest_b53f3811d9d65c912707e9b896ba9934_tuple, 0 ) );

        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_defaults_5 = const_tuple_float_1_0_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$fft$helper$$$function_5_rfftfreq( tmp_defaults_5 );



        frame_478fee477f8b74a7b50725539ef12926->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_rfftfreq, tmp_assign_source_24 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_478fee477f8b74a7b50725539ef12926 );
#endif
    popFrameStack();

    assertFrameObject( frame_478fee477f8b74a7b50725539ef12926 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_478fee477f8b74a7b50725539ef12926 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_478fee477f8b74a7b50725539ef12926, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_478fee477f8b74a7b50725539ef12926->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_478fee477f8b74a7b50725539ef12926, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$fft$helper );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
