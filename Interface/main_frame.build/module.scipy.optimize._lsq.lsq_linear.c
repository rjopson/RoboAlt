/* Generated code for Python module 'scipy.optimize._lsq.lsq_linear'
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

/* The "_module_scipy$optimize$_lsq$lsq_linear" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_lsq$lsq_linear;
PyDictObject *moduledict_scipy$optimize$_lsq$lsq_linear;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_str_plain_in_bounds_str_plain_compute_grad_tuple;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_07fd1337aed552031f161814061d606d;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_OptimizeResult;
extern PyObject *const_float_1eminus_10;
static PyObject *const_str_digest_0fbe7c5a95f31e3e51aa466974a89c50;
static PyObject *const_str_digest_00b78135b4a6ecaba5da30d2b56b77cc;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_trf_linear;
extern PyObject *const_str_plain_ndim;
static PyObject *const_str_digest_660872988390ef1420c7d39080597dfa;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_atol;
static PyObject *const_str_digest_96b3fcc45c794feab4e1b7de7f5e2de2;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_0eca47de0281f443ffdcbd3ff463fe17;
extern PyObject *const_str_plain_rcond;
extern PyObject *const_str_plain_optimality;
extern PyObject *const_float_0_5;
extern PyObject *const_str_digest_1ee27a5ab623d3ef0007e49d2ec50770;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_83a2f16d3685494685be6db622430de6;
static PyObject *const_str_digest_5dad65a5628d277b7f433e9b0d1ca108;
extern PyObject *const_str_plain_prepare_bounds;
static PyObject *const_str_digest_21fd6c68869d8e3e9adff4b54f10b57c;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_list_int_0_int_pos_1_int_pos_2_list;
extern PyObject *const_dict_b0fdee5929e45cce232cdc90181b443c;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_f7e51a4b769b8c83ccfd729843537850;
extern PyObject *const_str_plain_float;
static PyObject *const_str_digest_71e52e8c2ec1493a3f404da1d3e922d4;
extern PyObject *const_str_plain_compute_grad;
extern PyObject *const_str_plain_message;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_digest_7724ce46d846b7d1c328068a3b7c4876;
extern PyObject *const_str_plain_ub;
extern PyObject *const_list_none_str_plain_exact_str_plain_lsmr_list;
static PyObject *const_str_digest_b7f4f2c62cdb1cae7d4d2f04e9b5a6ec;
extern PyObject *const_str_plain_nit;
extern PyObject *const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202;
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_1102427dc411f29e4c6cd5110dc98ff3;
extern PyObject *const_str_plain_issparse;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_lsmr;
static PyObject *const_str_digest_f075111011e56ef86f2d266a517b6245;
static PyObject *const_str_digest_0725b85ba37ac37f698348bfff19398b;
extern PyObject *const_str_digest_8783708b6421c71a0892a844e756fb02;
static PyObject *const_tuple_8f9c8b4fd89d95267830c05a942779fd_tuple;
extern PyObject *const_tuple_str_plain_bounds_str_plain_n_str_plain_lb_str_plain_ub_tuple;
static PyObject *const_dict_5af6d8bb4e99fe52c60560c82ded5a23;
extern PyObject *const_str_plain_atleast_2d;
extern PyObject *const_str_plain_active_mask;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ord;
static PyObject *const_str_digest_988116d86fb98eb8d7f8a7c51c5e1b0a;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_TERMINATION_MESSAGES;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_str_digest_76fb96cfe2fc255d7965949474fa0e30;
extern PyObject *const_str_plain_atleast_1d;
extern PyObject *const_str_plain_lsq_linear;
static PyObject *const_str_digest_875dc9b2bd29c143c85d5b1d051a4cf8;
extern PyObject *const_str_plain_trf;
extern PyObject *const_str_plain_lstsq;
extern PyObject *const_str_plain_exact;
static PyObject *const_str_digest_1bd8956afbae89031bda764e2638d885;
extern PyObject *const_str_plain_initial_cost;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_str_plain_bvls_tuple;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_e298991da24a7b51a8f37e5d8a0cab03;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_digest_67fa1f04f35248a47090b7758e6d070f;
extern PyObject *const_tuple_str_plain_OptimizeResult_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
extern PyObject *const_str_plain_LinearOperator;
extern PyObject *const_str_plain_cost;
static PyObject *const_tuple_str_plain_trf_linear_tuple;
extern PyObject *const_str_plain_print;
extern PyObject *const_int_pos_3;
extern PyObject *const_tuple_str_plain_b_tuple;
extern PyObject *const_str_digest_402cb6c6f6e609cdac72fc0009ef2885;
extern PyObject *const_str_plain_lb;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_in_bounds;
extern PyObject *const_tuple_str_plain_issparse_str_plain_csr_matrix_tuple;
extern PyObject *const_str_plain_csr_matrix;
extern PyObject *const_tuple_str_plain_norm_tuple;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_bounds;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_bvls;
extern PyObject *const_str_digest_a0dfa9cb56b41095d297f9de64891d65;
static PyObject *const_tuple_str_plain_LinearOperator_str_plain_lsmr_tuple;
extern PyObject *const_str_plain_resize;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_common;
extern PyObject *const_str_plain_btol;
extern PyObject *const_str_plain_success;
static PyObject *const_list_str_plain_trf_str_plain_bvls_list;
extern PyObject *const_str_digest_caaf3fa400764a871c9fd9a69e283cce;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_in_bounds_str_plain_compute_grad_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_in_bounds_str_plain_compute_grad_tuple, 0, const_str_plain_in_bounds ); Py_INCREF( const_str_plain_in_bounds );
    PyTuple_SET_ITEM( const_tuple_str_plain_in_bounds_str_plain_compute_grad_tuple, 1, const_str_plain_compute_grad ); Py_INCREF( const_str_plain_compute_grad );
    const_str_digest_07fd1337aed552031f161814061d606d = UNSTREAM_STRING_ASCII( &constant_bin[ 4935746 ], 60, 0 );
    const_str_digest_0fbe7c5a95f31e3e51aa466974a89c50 = UNSTREAM_STRING_ASCII( &constant_bin[ 4935806 ], 24, 0 );
    const_str_digest_00b78135b4a6ecaba5da30d2b56b77cc = UNSTREAM_STRING_ASCII( &constant_bin[ 4935830 ], 99, 0 );
    const_str_digest_660872988390ef1420c7d39080597dfa = UNSTREAM_STRING_ASCII( &constant_bin[ 4935929 ], 8099, 0 );
    const_str_digest_96b3fcc45c794feab4e1b7de7f5e2de2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4944028 ], 69, 0 );
    const_str_digest_0eca47de0281f443ffdcbd3ff463fe17 = UNSTREAM_STRING_ASCII( &constant_bin[ 4944097 ], 50, 0 );
    const_str_digest_83a2f16d3685494685be6db622430de6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4944147 ], 33, 0 );
    const_str_digest_5dad65a5628d277b7f433e9b0d1ca108 = UNSTREAM_STRING_ASCII( &constant_bin[ 4944180 ], 68, 0 );
    const_str_digest_21fd6c68869d8e3e9adff4b54f10b57c = UNSTREAM_STRING_ASCII( &constant_bin[ 4944248 ], 38, 0 );
    const_str_digest_f7e51a4b769b8c83ccfd729843537850 = UNSTREAM_STRING_ASCII( &constant_bin[ 4944286 ], 54, 0 );
    const_str_digest_71e52e8c2ec1493a3f404da1d3e922d4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4944340 ], 66, 0 );
    const_str_digest_7724ce46d846b7d1c328068a3b7c4876 = UNSTREAM_STRING_ASCII( &constant_bin[ 4944406 ], 32, 0 );
    const_str_digest_b7f4f2c62cdb1cae7d4d2f04e9b5a6ec = UNSTREAM_STRING_ASCII( &constant_bin[ 4944438 ], 50, 0 );
    const_str_digest_1102427dc411f29e4c6cd5110dc98ff3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4944488 ], 41, 0 );
    const_str_digest_f075111011e56ef86f2d266a517b6245 = UNSTREAM_STRING_ASCII( &constant_bin[ 4944529 ], 34, 0 );
    const_str_digest_0725b85ba37ac37f698348bfff19398b = UNSTREAM_STRING_ASCII( &constant_bin[ 4944563 ], 39, 0 );
    const_tuple_8f9c8b4fd89d95267830c05a942779fd_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4944602 ], 157 );
    const_dict_5af6d8bb4e99fe52c60560c82ded5a23 = _PyDict_NewPresized( 5 );
    PyDict_SetItem( const_dict_5af6d8bb4e99fe52c60560c82ded5a23, const_int_neg_1, const_str_digest_71e52e8c2ec1493a3f404da1d3e922d4 );
    const_str_digest_67fa1f04f35248a47090b7758e6d070f = UNSTREAM_STRING_ASCII( &constant_bin[ 4944759 ], 45, 0 );
    PyDict_SetItem( const_dict_5af6d8bb4e99fe52c60560c82ded5a23, const_int_0, const_str_digest_67fa1f04f35248a47090b7758e6d070f );
    PyDict_SetItem( const_dict_5af6d8bb4e99fe52c60560c82ded5a23, const_int_pos_1, const_str_digest_f7e51a4b769b8c83ccfd729843537850 );
    PyDict_SetItem( const_dict_5af6d8bb4e99fe52c60560c82ded5a23, const_int_pos_2, const_str_digest_07fd1337aed552031f161814061d606d );
    PyDict_SetItem( const_dict_5af6d8bb4e99fe52c60560c82ded5a23, const_int_pos_3, const_str_digest_21fd6c68869d8e3e9adff4b54f10b57c );
    assert( PyDict_Size( const_dict_5af6d8bb4e99fe52c60560c82ded5a23 ) == 5 );
    const_str_digest_988116d86fb98eb8d7f8a7c51c5e1b0a = UNSTREAM_STRING_ASCII( &constant_bin[ 4944804 ], 35, 0 );
    const_str_digest_76fb96cfe2fc255d7965949474fa0e30 = UNSTREAM_STRING_ASCII( &constant_bin[ 4944839 ], 66, 0 );
    const_str_digest_875dc9b2bd29c143c85d5b1d051a4cf8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4944905 ], 44, 0 );
    const_str_digest_1bd8956afbae89031bda764e2638d885 = UNSTREAM_STRING_ASCII( &constant_bin[ 4944949 ], 40, 0 );
    const_tuple_str_plain_bvls_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_bvls_tuple, 0, const_str_plain_bvls ); Py_INCREF( const_str_plain_bvls );
    const_str_digest_e298991da24a7b51a8f37e5d8a0cab03 = UNSTREAM_STRING_ASCII( &constant_bin[ 4944571 ], 30, 0 );
    const_tuple_str_plain_trf_linear_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_trf_linear_tuple, 0, const_str_plain_trf_linear ); Py_INCREF( const_str_plain_trf_linear );
    const_tuple_str_plain_LinearOperator_str_plain_lsmr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LinearOperator_str_plain_lsmr_tuple, 0, const_str_plain_LinearOperator ); Py_INCREF( const_str_plain_LinearOperator );
    PyTuple_SET_ITEM( const_tuple_str_plain_LinearOperator_str_plain_lsmr_tuple, 1, const_str_plain_lsmr ); Py_INCREF( const_str_plain_lsmr );
    const_list_str_plain_trf_str_plain_bvls_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_trf_str_plain_bvls_list, 0, const_str_plain_trf ); Py_INCREF( const_str_plain_trf );
    PyList_SET_ITEM( const_list_str_plain_trf_str_plain_bvls_list, 1, const_str_plain_bvls ); Py_INCREF( const_str_plain_bvls );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_lsq$lsq_linear( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_00f22d9fed2fa2a01b191670541b1a09;
static PyCodeObject *codeobj_c3741de8eb34a8395bb8c76c2b208ed6;
static PyCodeObject *codeobj_e121a4428d56fc3d352f428be586b0db;
static PyCodeObject *codeobj_f2f83a5a83f2ff6fa535ca2204ff2512;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_83a2f16d3685494685be6db622430de6 );
    codeobj_00f22d9fed2fa2a01b191670541b1a09 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 16, const_tuple_str_plain_b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c3741de8eb34a8395bb8c76c2b208ed6 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0725b85ba37ac37f698348bfff19398b, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e121a4428d56fc3d352f428be586b0db = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lsq_linear, 36, const_tuple_8f9c8b4fd89d95267830c05a942779fd_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f2f83a5a83f2ff6fa535ca2204ff2512 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prepare_bounds, 15, const_tuple_str_plain_bounds_str_plain_n_str_plain_lb_str_plain_ub_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$lsq_linear$$$function_1_prepare_bounds(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$lsq_linear$$$function_2_lsq_linear( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$optimize$_lsq$lsq_linear$$$function_1_prepare_bounds( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bounds = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *outline_0_var_b = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f2f83a5a83f2ff6fa535ca2204ff2512;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_00f22d9fed2fa2a01b191670541b1a09_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_00f22d9fed2fa2a01b191670541b1a09_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_f2f83a5a83f2ff6fa535ca2204ff2512 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f2f83a5a83f2ff6fa535ca2204ff2512, codeobj_f2f83a5a83f2ff6fa535ca2204ff2512, module_scipy$optimize$_lsq$lsq_linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f2f83a5a83f2ff6fa535ca2204ff2512 = cache_frame_f2f83a5a83f2ff6fa535ca2204ff2512;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f2f83a5a83f2ff6fa535ca2204ff2512 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f2f83a5a83f2ff6fa535ca2204ff2512 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_bounds );
            tmp_iter_arg_2 = par_bounds;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_00f22d9fed2fa2a01b191670541b1a09_2, codeobj_00f22d9fed2fa2a01b191670541b1a09, module_scipy$optimize$_lsq$lsq_linear, sizeof(void *) );
        frame_00f22d9fed2fa2a01b191670541b1a09_2 = cache_frame_00f22d9fed2fa2a01b191670541b1a09_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_00f22d9fed2fa2a01b191670541b1a09_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_00f22d9fed2fa2a01b191670541b1a09_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
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
                    type_description_2 = "o";
                    exception_lineno = 16;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_b;
                outline_0_var_b = tmp_assign_source_5;
                Py_INCREF( outline_0_var_b );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 16;
                type_description_2 = "o";
                goto try_except_handler_4;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( outline_0_var_b );
            tmp_tuple_element_1 = outline_0_var_b;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
            frame_00f22d9fed2fa2a01b191670541b1a09_2->m_frame.f_lineno = 16;
            tmp_append_value_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_iter_arg_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_iter_arg_1 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$lsq_linear$$$function_1_prepare_bounds );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_4:;
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
        RESTORE_FRAME_EXCEPTION( frame_00f22d9fed2fa2a01b191670541b1a09_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_00f22d9fed2fa2a01b191670541b1a09_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_00f22d9fed2fa2a01b191670541b1a09_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_00f22d9fed2fa2a01b191670541b1a09_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_00f22d9fed2fa2a01b191670541b1a09_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_00f22d9fed2fa2a01b191670541b1a09_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_00f22d9fed2fa2a01b191670541b1a09_2,
            type_description_2,
            outline_0_var_b
        );


        // Release cached frame.
        if ( frame_00f22d9fed2fa2a01b191670541b1a09_2 == cache_frame_00f22d9fed2fa2a01b191670541b1a09_2 )
        {
            Py_DECREF( frame_00f22d9fed2fa2a01b191670541b1a09_2 );
        }
        cache_frame_00f22d9fed2fa2a01b191670541b1a09_2 = NULL;

        assertFrameObject( frame_00f22d9fed2fa2a01b191670541b1a09_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$lsq_linear$$$function_1_prepare_bounds );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF( outline_0_var_b );
        outline_0_var_b = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_b );
        outline_0_var_b = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$lsq_linear$$$function_1_prepare_bounds );
        return NULL;
        outline_exception_1:;
        exception_lineno = 16;
        goto try_except_handler_2;
        outline_result_1:;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
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


            type_description_1 = "oooo";
            exception_lineno = 16;
            goto try_except_handler_5;
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


            type_description_1 = "oooo";
            exception_lineno = 16;
            goto try_except_handler_5;
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

                    type_description_1 = "oooo";
                    exception_lineno = 16;
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

            type_description_1 = "oooo";
            exception_lineno = 16;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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
        assert( var_lb == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_lb = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert( var_ub == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_ub = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_lb );
        tmp_source_name_2 = var_lb;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 19;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( var_lb );
            tmp_args_element_name_1 = var_lb;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_2 = par_n;
            frame_f2f83a5a83f2ff6fa535ca2204ff2512->m_frame.f_lineno = 19;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_resize, call_args );
            }

            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 19;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_lb;
                assert( old != NULL );
                var_lb = tmp_assign_source_10;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( var_ub );
        tmp_source_name_3 = var_ub;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooo";
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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 22;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_3;
            CHECK_OBJECT( var_ub );
            tmp_args_element_name_3 = var_ub;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_4 = par_n;
            frame_f2f83a5a83f2ff6fa535ca2204ff2512->m_frame.f_lineno = 22;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_resize, call_args );
            }

            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_ub;
                assert( old != NULL );
                var_ub = tmp_assign_source_11;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2f83a5a83f2ff6fa535ca2204ff2512 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2f83a5a83f2ff6fa535ca2204ff2512 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f2f83a5a83f2ff6fa535ca2204ff2512, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f2f83a5a83f2ff6fa535ca2204ff2512->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f2f83a5a83f2ff6fa535ca2204ff2512, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f2f83a5a83f2ff6fa535ca2204ff2512,
        type_description_1,
        par_bounds,
        par_n,
        var_lb,
        var_ub
    );


    // Release cached frame.
    if ( frame_f2f83a5a83f2ff6fa535ca2204ff2512 == cache_frame_f2f83a5a83f2ff6fa535ca2204ff2512 )
    {
        Py_DECREF( frame_f2f83a5a83f2ff6fa535ca2204ff2512 );
    }
    cache_frame_f2f83a5a83f2ff6fa535ca2204ff2512 = NULL;

    assertFrameObject( frame_f2f83a5a83f2ff6fa535ca2204ff2512 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( var_lb );
        tmp_tuple_element_2 = var_lb;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_ub );
        tmp_tuple_element_2 = var_ub;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$lsq_linear$$$function_1_prepare_bounds );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_lb );
    Py_DECREF( var_lb );
    var_lb = NULL;

    CHECK_OBJECT( (PyObject *)var_ub );
    Py_DECREF( var_ub );
    var_ub = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_lb );
    var_lb = NULL;

    Py_XDECREF( var_ub );
    var_ub = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$lsq_linear$$$function_1_prepare_bounds );
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


static PyObject *impl_scipy$optimize$_lsq$lsq_linear$$$function_2_lsq_linear( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_bounds = python_pars[ 2 ];
    PyObject *par_method = python_pars[ 3 ];
    PyObject *par_tol = python_pars[ 4 ];
    PyObject *par_lsq_solver = python_pars[ 5 ];
    PyObject *par_lsmr_tol = python_pars[ 6 ];
    PyObject *par_max_iter = python_pars[ 7 ];
    PyObject *par_verbose = python_pars[ 8 ];
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *var_x_lsq = NULL;
    PyObject *var_r = NULL;
    PyObject *var_cost = NULL;
    PyObject *var_termination_message = NULL;
    PyObject *var_g = NULL;
    PyObject *var_g_norm = NULL;
    PyObject *var_res = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e121a4428d56fc3d352f428be586b0db;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e121a4428d56fc3d352f428be586b0db = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e121a4428d56fc3d352f428be586b0db, codeobj_e121a4428d56fc3d352f428be586b0db, module_scipy$optimize$_lsq$lsq_linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e121a4428d56fc3d352f428be586b0db = cache_frame_e121a4428d56fc3d352f428be586b0db;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e121a4428d56fc3d352f428be586b0db );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e121a4428d56fc3d352f428be586b0db ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_1 = par_method;
        tmp_compexpr_right_1 = LIST_COPY( const_list_str_plain_trf_str_plain_bvls_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooNoooo";
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
            tmp_make_exception_arg_1 = const_str_digest_7724ce46d846b7d1c328068a3b7c4876;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 219;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 219;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_lsq_solver );
        tmp_compexpr_left_2 = par_lsq_solver;
        tmp_compexpr_right_2 = LIST_COPY( const_list_none_str_plain_exact_str_plain_lsmr_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooNoooo";
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
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_1102427dc411f29e4c6cd5110dc98ff3;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 222;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 222;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_verbose );
        tmp_compexpr_left_3 = par_verbose;
        tmp_compexpr_right_3 = LIST_COPY( const_list_int_0_int_pos_1_int_pos_2_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_make_exception_arg_3 = const_str_digest_402cb6c6f6e609cdac72fc0009ef2885;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 225;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 225;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_issparse );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issparse" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_csr_matrix );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_matrix" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 228;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_2 = par_A;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 228;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 228;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        goto branch_end_4;
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( par_A );
            tmp_isinstance_inst_1 = par_A;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_LinearOperator );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearOperator" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 229;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_1 = tmp_mvar_value_3;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 230;
                    type_description_1 = "ooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_1 = tmp_mvar_value_4;
                CHECK_OBJECT( par_A );
                tmp_args_element_name_3 = par_A;
                frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 230;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_atleast_2d, call_args );
                }

                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 230;
                    type_description_1 = "ooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_A;
                    assert( old != NULL );
                    par_A = tmp_assign_source_2;
                    Py_DECREF( old );
                }

            }
            branch_no_5:;
        }
        branch_end_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_4 = par_method;
        tmp_compexpr_right_4 = const_str_plain_bvls;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooNoooo";
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
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( par_lsq_solver );
            tmp_compexpr_left_5 = par_lsq_solver;
            tmp_compexpr_right_5 = const_str_plain_lsmr;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;
                type_description_1 = "ooooooooooooooooNoooo";
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
                PyObject *tmp_raise_type_4;
                PyObject *tmp_make_exception_arg_4;
                tmp_make_exception_arg_4 = const_str_digest_b7f4f2c62cdb1cae7d4d2f04e9b5a6ec;
                frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 234;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_4 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_4 == NULL) );
                exception_type = tmp_raise_type_4;
                exception_lineno = 234;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            branch_no_7:;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_5;
            if ( par_A == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 237;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_inst_2 = par_A;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 237;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_5;
            tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndarray );
            if ( tmp_isinstance_cls_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            Py_DECREF( tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_5;
                PyObject *tmp_make_exception_arg_5;
                tmp_make_exception_arg_5 = const_str_digest_5dad65a5628d277b7f433e9b0d1ca108;
                frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 238;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_5 };
                    tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_5 == NULL) );
                exception_type = tmp_raise_type_5;
                exception_lineno = 238;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            branch_no_8:;
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_lsq_solver );
        tmp_compexpr_left_6 = par_lsq_solver;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_9 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_6;
            if ( par_A == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 242;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_inst_3 = par_A;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 242;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_6;
            tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndarray );
            if ( tmp_isinstance_cls_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 242;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
            Py_DECREF( tmp_isinstance_cls_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 242;
                type_description_1 = "ooooooooooooooooNoooo";
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
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = const_str_plain_exact;
                {
                    PyObject *old = par_lsq_solver;
                    assert( old != NULL );
                    par_lsq_solver = tmp_assign_source_3;
                    Py_INCREF( par_lsq_solver );
                    Py_DECREF( old );
                }

            }
            goto branch_end_10;
            branch_no_10:;
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = const_str_plain_lsmr;
                {
                    PyObject *old = par_lsq_solver;
                    assert( old != NULL );
                    par_lsq_solver = tmp_assign_source_4;
                    Py_INCREF( par_lsq_solver );
                    Py_DECREF( old );
                }

            }
            branch_end_10:;
        }
        goto branch_end_9;
        branch_no_9:;
        {
            nuitka_bool tmp_condition_result_11;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_isinstance_inst_4;
            PyObject *tmp_isinstance_cls_4;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_7;
            CHECK_OBJECT( par_lsq_solver );
            tmp_compexpr_left_7 = par_lsq_solver;
            tmp_compexpr_right_7 = const_str_plain_exact;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 246;
                type_description_1 = "ooooooooooooooooNoooo";
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
            if ( par_A == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 246;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_inst_4 = par_A;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 246;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_7;
            tmp_isinstance_cls_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndarray );
            if ( tmp_isinstance_cls_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 246;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
            Py_DECREF( tmp_isinstance_cls_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 246;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 246;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_11 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_11 = tmp_and_left_value_1;
            and_end_1:;
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
                PyObject *tmp_raise_type_6;
                PyObject *tmp_make_exception_arg_6;
                tmp_make_exception_arg_6 = const_str_digest_76fb96cfe2fc255d7965949474fa0e30;
                frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 247;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_6 };
                    tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_6 == NULL) );
                exception_type = tmp_raise_type_6;
                exception_lineno = 247;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            branch_no_11:;
        }
        branch_end_9:;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_4;
        if ( par_A == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = par_A;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_8 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_raise_type_7;
            PyObject *tmp_make_exception_arg_7;
            tmp_make_exception_arg_7 = const_str_digest_988116d86fb98eb8d7f8a7c51c5e1b0a;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 251;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_7 };
                tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_7 == NULL) );
            exception_type = tmp_raise_type_7;
            exception_lineno = 251;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        branch_no_12:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_bounds );
        tmp_len_arg_2 = par_bounds;
        tmp_compexpr_left_9 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        Py_DECREF( tmp_compexpr_left_9 );
        assert( !(tmp_res == -1) );
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
        {
            PyObject *tmp_raise_type_8;
            PyObject *tmp_make_exception_arg_8;
            tmp_make_exception_arg_8 = const_str_digest_1ee27a5ab623d3ef0007e49d2ec50770;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 254;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_8 };
                tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_8 == NULL) );
            exception_type = tmp_raise_type_8;
            exception_lineno = 254;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT( par_max_iter );
        tmp_compexpr_left_10 = par_max_iter;
        tmp_compexpr_right_10 = Py_None;
        tmp_and_left_value_2 = ( tmp_compexpr_left_10 != tmp_compexpr_right_10 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_max_iter );
        tmp_compexpr_left_11 = par_max_iter;
        tmp_compexpr_right_11 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_14 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_14 = tmp_and_left_value_2;
        and_end_2:;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_14;
        }
        else
        {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_raise_type_9;
            PyObject *tmp_make_exception_arg_9;
            tmp_make_exception_arg_9 = const_str_digest_875dc9b2bd29c143c85d5b1d051a4cf8;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 257;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_9 };
                tmp_raise_type_9 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_9 == NULL) );
            exception_type = tmp_raise_type_9;
            exception_lineno = 257;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        branch_no_14:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_5;
        if ( par_A == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooNoooo";
            goto try_except_handler_2;
        }

        tmp_source_name_5 = par_A;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooNoooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooNoooo";
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


            type_description_1 = "ooooooooooooooooNoooo";
            exception_lineno = 259;
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


            type_description_1 = "ooooooooooooooooNoooo";
            exception_lineno = 259;
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

                    type_description_1 = "ooooooooooooooooNoooo";
                    exception_lineno = 259;
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

            type_description_1 = "ooooooooooooooooNoooo";
            exception_lineno = 259;
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
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_m = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_n = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_8;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_4 = par_b;
        frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_atleast_1d, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_b );
        tmp_source_name_6 = par_b;
        tmp_compexpr_left_12 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
        if ( tmp_compexpr_left_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_12 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
        Py_DECREF( tmp_compexpr_left_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_10;
            PyObject *tmp_make_exception_arg_10;
            tmp_make_exception_arg_10 = const_str_digest_f075111011e56ef86f2d266a517b6245;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 263;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_10 };
                tmp_raise_type_10 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_10 == NULL) );
            exception_type = tmp_raise_type_10;
            exception_lineno = 263;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        branch_no_15:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_b );
        tmp_source_name_7 = par_b;
        tmp_compexpr_left_13 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_size );
        if ( tmp_compexpr_left_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_m );
        tmp_compexpr_right_13 = var_m;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        Py_DECREF( tmp_compexpr_left_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_11;
            PyObject *tmp_make_exception_arg_11;
            tmp_make_exception_arg_11 = const_str_digest_1bd8956afbae89031bda764e2638d885;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 266;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_11 };
                tmp_raise_type_11 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_11 == NULL) );
            exception_type = tmp_raise_type_11;
            exception_lineno = 266;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        branch_no_16:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_prepare_bounds );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_prepare_bounds );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "prepare_bounds" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooNoooo";
            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_9;
        CHECK_OBJECT( par_bounds );
        tmp_args_element_name_5 = par_bounds;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_6 = var_n;
        frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 268;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooNoooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooNoooo";
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


            type_description_1 = "ooooooooooooooooNoooo";
            exception_lineno = 268;
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


            type_description_1 = "ooooooooooooooooNoooo";
            exception_lineno = 268;
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

                    type_description_1 = "ooooooooooooooooNoooo";
                    exception_lineno = 268;
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

            type_description_1 = "ooooooooooooooooNoooo";
            exception_lineno = 268;
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
        assert( var_lb == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_lb = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
        assert( var_ub == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_ub = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_17;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        PyObject *tmp_source_name_8;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_source_name_9;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( var_lb );
        tmp_source_name_8 = var_lb;
        tmp_compexpr_left_14 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
        if ( tmp_compexpr_left_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_tuple_element_1 = var_n;
        tmp_compexpr_right_14 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_14, 0, tmp_tuple_element_1 );
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
        Py_DECREF( tmp_compexpr_left_14 );
        Py_DECREF( tmp_compexpr_right_14 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_3 == 1 )
        {
            goto and_right_3;
        }
        else
        {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT( var_ub );
        tmp_source_name_9 = var_ub;
        tmp_compexpr_left_15 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
        if ( tmp_compexpr_left_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_tuple_element_2 = var_n;
        tmp_compexpr_right_15 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_compexpr_right_15, 0, tmp_tuple_element_2 );
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
        Py_DECREF( tmp_compexpr_left_15 );
        Py_DECREF( tmp_compexpr_right_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_17 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_17 = tmp_and_left_value_3;
        and_end_3:;
        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_17;
        }
        else
        {
            goto branch_no_17;
        }
        branch_yes_17:;
        {
            PyObject *tmp_raise_type_12;
            PyObject *tmp_make_exception_arg_12;
            tmp_make_exception_arg_12 = const_str_digest_0fbe7c5a95f31e3e51aa466974a89c50;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 271;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_12 };
                tmp_raise_type_12 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_12 == NULL) );
            exception_type = tmp_raise_type_12;
            exception_lineno = 271;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        branch_no_17:;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        int tmp_truth_name_2;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_10;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_any );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lb );
        tmp_compexpr_left_16 = var_lb;
        CHECK_OBJECT( var_ub );
        tmp_compexpr_right_16 = var_ub;
        tmp_args_element_name_7 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
            PyObject *tmp_raise_type_13;
            PyObject *tmp_make_exception_arg_13;
            tmp_make_exception_arg_13 = const_str_digest_caaf3fa400764a871c9fd9a69e283cce;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 274;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_13 };
                tmp_raise_type_13 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_13 == NULL) );
            exception_type = tmp_raise_type_13;
            exception_lineno = 274;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        branch_no_18:;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        if ( par_lsq_solver == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lsq_solver" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_17 = par_lsq_solver;
        tmp_compexpr_right_17 = const_str_plain_exact;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
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
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_11;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 278;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = tmp_mvar_value_11;
            tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_linalg );
            if ( tmp_source_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_lstsq );
            Py_DECREF( tmp_source_name_11 );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            if ( par_A == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 278;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_3 = par_A;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( par_b );
            tmp_tuple_element_3 = par_b;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_3 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_b0fdee5929e45cce232cdc90181b443c );
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 278;
            tmp_subscribed_name_1 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_16 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            assert( var_x_lsq == NULL );
            var_x_lsq = tmp_assign_source_16;
        }
        goto branch_end_19;
        branch_no_19:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_compexpr_left_18;
            PyObject *tmp_compexpr_right_18;
            if ( par_lsq_solver == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lsq_solver" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 279;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_18 = par_lsq_solver;
            tmp_compexpr_right_18 = const_str_plain_lsmr;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_18, tmp_compexpr_right_18 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_20 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_17;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_called_name_6;
                PyObject *tmp_mvar_value_12;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_subscript_name_2;
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_lsmr );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lsmr );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lsmr" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 280;
                    type_description_1 = "ooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_6 = tmp_mvar_value_12;
                if ( par_A == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 280;
                    type_description_1 = "ooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_4 = par_A;
                tmp_args_name_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( par_b );
                tmp_tuple_element_4 = par_b;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
                tmp_dict_key_1 = const_str_plain_atol;
                CHECK_OBJECT( par_tol );
                tmp_dict_value_1 = par_tol;
                tmp_kw_name_2 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_2 = const_str_plain_btol;
                CHECK_OBJECT( par_tol );
                tmp_dict_value_2 = par_tol;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 280;
                tmp_subscribed_name_2 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_subscribed_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 280;
                    type_description_1 = "ooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_2 = const_int_0;
                tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
                Py_DECREF( tmp_subscribed_name_2 );
                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 280;
                    type_description_1 = "ooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }
                assert( var_x_lsq == NULL );
                var_x_lsq = tmp_assign_source_17;
            }
            branch_no_20:;
        }
        branch_end_19:;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        int tmp_truth_name_3;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_in_bounds );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_in_bounds );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "in_bounds" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 282;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_13;
        if ( var_x_lsq == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x_lsq" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 282;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_8 = var_x_lsq;
        CHECK_OBJECT( var_lb );
        tmp_args_element_name_9 = var_lb;
        CHECK_OBJECT( var_ub );
        tmp_args_element_name_10 = var_ub;
        frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 282;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_21 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_13;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_right_name_1;
            if ( par_A == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 283;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_13 = par_A;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_dot );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            if ( var_x_lsq == NULL )
            {
                Py_DECREF( tmp_called_name_8 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x_lsq" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 283;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_11 = var_x_lsq;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 283;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_b );
            tmp_right_name_1 = par_b;
            tmp_assign_source_18 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            assert( var_r == NULL );
            var_r = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            tmp_left_name_2 = const_float_0_5;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 284;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_14;
            CHECK_OBJECT( var_r );
            tmp_args_element_name_12 = var_r;
            CHECK_OBJECT( var_r );
            tmp_args_element_name_13 = var_r;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 284;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
                tmp_right_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 284;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_19 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 284;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            assert( var_cost == NULL );
            var_cost = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_subscript_name_3;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_TERMINATION_MESSAGES );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TERMINATION_MESSAGES );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TERMINATION_MESSAGES" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 286;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_3 = tmp_mvar_value_15;
            tmp_subscript_name_3 = const_int_pos_3;
            tmp_assign_source_20 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 3 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 286;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            assert( var_termination_message == NULL );
            var_termination_message = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_compute_grad );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_grad );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_grad" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 287;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_9 = tmp_mvar_value_16;
            if ( par_A == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 287;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_14 = par_A;
            CHECK_OBJECT( var_r );
            tmp_args_element_name_15 = var_r;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 287;
            {
                PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
            }

            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 287;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            assert( var_g == NULL );
            var_g = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_18;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_norm );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 288;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_10 = tmp_mvar_value_17;
            CHECK_OBJECT( var_g );
            tmp_tuple_element_5 = var_g;
            tmp_args_name_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
            tmp_dict_key_3 = const_str_plain_ord;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_18 == NULL ))
            {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_18 == NULL )
            {
                Py_DECREF( tmp_args_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 288;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_14 = tmp_mvar_value_18;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_inf );
            if ( tmp_dict_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_3 );

                exception_lineno = 288;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
            Py_DECREF( tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 288;
            tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 288;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            assert( var_g_norm == NULL );
            var_g_norm = tmp_assign_source_22;
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_compexpr_left_19;
            PyObject *tmp_compexpr_right_19;
            CHECK_OBJECT( par_verbose );
            tmp_compexpr_left_19 = par_verbose;
            tmp_compexpr_right_19 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_19, tmp_compexpr_right_19 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 290;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_22 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_22;
            }
            else
            {
                goto branch_no_22;
            }
            branch_yes_22:;
            {
                PyObject *tmp_called_name_11;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_16;
                tmp_called_name_11 = LOOKUP_BUILTIN( const_str_plain_print );
                assert( tmp_called_name_11 != NULL );
                CHECK_OBJECT( var_termination_message );
                tmp_args_element_name_16 = var_termination_message;
                frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 291;
                {
                    PyObject *call_args[] = { tmp_args_element_name_16 };
                    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
                }

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 291;
                    type_description_1 = "ooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            {
                PyObject *tmp_called_name_12;
                PyObject *tmp_call_result_5;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_args_element_name_18;
                PyObject *tmp_args_element_name_19;
                tmp_called_name_12 = LOOKUP_BUILTIN( const_str_plain_print );
                assert( tmp_called_name_12 != NULL );
                tmp_called_instance_4 = const_str_digest_0eca47de0281f443ffdcbd3ff463fe17;
                CHECK_OBJECT( var_cost );
                tmp_args_element_name_18 = var_cost;
                CHECK_OBJECT( var_g_norm );
                tmp_args_element_name_19 = var_g_norm;
                frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 292;
                {
                    PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
                    tmp_args_element_name_17 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_format, call_args );
                }

                if ( tmp_args_element_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 292;
                    type_description_1 = "ooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }
                frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 292;
                {
                    PyObject *call_args[] = { tmp_args_element_name_17 };
                    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
                }

                Py_DECREF( tmp_args_element_name_17 );
                if ( tmp_call_result_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 292;
                    type_description_1 = "ooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_5 );
            }
            branch_no_22:;
        }
        {
            PyObject *tmp_called_name_13;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_kw_name_4;
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
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 295;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_13 = tmp_mvar_value_19;
            tmp_dict_key_4 = const_str_plain_x;
            if ( var_x_lsq == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x_lsq" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 296;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_4 = var_x_lsq;
            tmp_kw_name_4 = _PyDict_NewPresized( 9 );
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_fun;
            CHECK_OBJECT( var_r );
            tmp_dict_value_5 = var_r;
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_6 = const_str_plain_cost;
            CHECK_OBJECT( var_cost );
            tmp_dict_value_6 = var_cost;
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_7 = const_str_plain_optimality;
            CHECK_OBJECT( var_g_norm );
            tmp_dict_value_7 = var_g_norm;
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_8 = const_str_plain_active_mask;
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_20 == NULL ))
            {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_20 == NULL )
            {
                Py_DECREF( tmp_kw_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 297;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_20;
            CHECK_OBJECT( var_n );
            tmp_args_element_name_20 = var_n;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 297;
            {
                PyObject *call_args[] = { tmp_args_element_name_20 };
                tmp_dict_value_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_zeros, call_args );
            }

            if ( tmp_dict_value_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_kw_name_4 );

                exception_lineno = 297;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_8, tmp_dict_value_8 );
            Py_DECREF( tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_9 = const_str_plain_nit;
            tmp_dict_value_9 = const_int_0;
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_10 = const_str_plain_status;
            tmp_dict_value_10 = const_int_pos_3;
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_10, tmp_dict_value_10 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_11 = const_str_plain_message;
            CHECK_OBJECT( var_termination_message );
            tmp_dict_value_11 = var_termination_message;
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_11, tmp_dict_value_11 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_12 = const_str_plain_success;
            tmp_dict_value_12 = Py_True;
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_12, tmp_dict_value_12 );
            assert( !(tmp_res != 0) );
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 295;
            tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_13, tmp_kw_name_4 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_21:;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_compexpr_left_20;
        PyObject *tmp_compexpr_right_20;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_20 = par_method;
        tmp_compexpr_right_20 = const_str_plain_trf;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_20, tmp_compexpr_right_20 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_23 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_23;
        }
        else
        {
            goto branch_no_23;
        }
        branch_yes_23:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_14;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_args_element_name_29;
            PyObject *tmp_args_element_name_30;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_trf_linear );

            if (unlikely( tmp_mvar_value_21 == NULL ))
            {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trf_linear );
            }

            if ( tmp_mvar_value_21 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "trf_linear" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 301;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_14 = tmp_mvar_value_21;
            if ( par_A == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 301;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_21 = par_A;
            CHECK_OBJECT( par_b );
            tmp_args_element_name_22 = par_b;
            if ( var_x_lsq == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x_lsq" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 301;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_23 = var_x_lsq;
            CHECK_OBJECT( var_lb );
            tmp_args_element_name_24 = var_lb;
            CHECK_OBJECT( var_ub );
            tmp_args_element_name_25 = var_ub;
            CHECK_OBJECT( par_tol );
            tmp_args_element_name_26 = par_tol;
            if ( par_lsq_solver == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lsq_solver" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 301;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_27 = par_lsq_solver;
            CHECK_OBJECT( par_lsmr_tol );
            tmp_args_element_name_28 = par_lsmr_tol;
            CHECK_OBJECT( par_max_iter );
            tmp_args_element_name_29 = par_max_iter;
            CHECK_OBJECT( par_verbose );
            tmp_args_element_name_30 = par_verbose;
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 301;
            {
                PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30 };
                tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS10( tmp_called_name_14, call_args );
            }

            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 301;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_23;
        }
        goto branch_end_23;
        branch_no_23:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_compexpr_left_21;
            PyObject *tmp_compexpr_right_21;
            CHECK_OBJECT( par_method );
            tmp_compexpr_left_21 = par_method;
            tmp_compexpr_right_21 = const_str_plain_bvls;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_21, tmp_compexpr_right_21 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_24 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_24;
            }
            else
            {
                goto branch_no_24;
            }
            branch_yes_24:;
            {
                PyObject *tmp_assign_source_24;
                PyObject *tmp_called_name_15;
                PyObject *tmp_mvar_value_22;
                PyObject *tmp_args_element_name_31;
                PyObject *tmp_args_element_name_32;
                PyObject *tmp_args_element_name_33;
                PyObject *tmp_args_element_name_34;
                PyObject *tmp_args_element_name_35;
                PyObject *tmp_args_element_name_36;
                PyObject *tmp_args_element_name_37;
                PyObject *tmp_args_element_name_38;
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_bvls );

                if (unlikely( tmp_mvar_value_22 == NULL ))
                {
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bvls );
                }

                if ( tmp_mvar_value_22 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bvls" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 304;
                    type_description_1 = "ooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_15 = tmp_mvar_value_22;
                if ( par_A == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 304;
                    type_description_1 = "ooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_31 = par_A;
                CHECK_OBJECT( par_b );
                tmp_args_element_name_32 = par_b;
                if ( var_x_lsq == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x_lsq" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 304;
                    type_description_1 = "ooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_33 = var_x_lsq;
                CHECK_OBJECT( var_lb );
                tmp_args_element_name_34 = var_lb;
                CHECK_OBJECT( var_ub );
                tmp_args_element_name_35 = var_ub;
                CHECK_OBJECT( par_tol );
                tmp_args_element_name_36 = par_tol;
                CHECK_OBJECT( par_max_iter );
                tmp_args_element_name_37 = par_max_iter;
                CHECK_OBJECT( par_verbose );
                tmp_args_element_name_38 = par_verbose;
                frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 304;
                {
                    PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_37, tmp_args_element_name_38 };
                    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_15, call_args );
                }

                if ( tmp_assign_source_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 304;
                    type_description_1 = "ooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }
                assert( var_res == NULL );
                var_res = tmp_assign_source_24;
            }
            branch_no_24:;
        }
        branch_end_23:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_source_name_15;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_TERMINATION_MESSAGES );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TERMINATION_MESSAGES );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TERMINATION_MESSAGES" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_4 = tmp_mvar_value_23;
        if ( var_res == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = var_res;
        tmp_subscript_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_status );
        if ( tmp_subscript_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        if ( var_res == NULL )
        {
            Py_DECREF( tmp_assattr_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = var_res;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_message, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_compexpr_left_22;
        PyObject *tmp_compexpr_right_22;
        PyObject *tmp_source_name_16;
        PyObject *tmp_assattr_target_2;
        if ( var_res == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 307;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_16 = var_res;
        tmp_compexpr_left_22 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_status );
        if ( tmp_compexpr_left_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_22 = const_int_0;
        tmp_assattr_name_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_22, tmp_compexpr_right_22 );
        Py_DECREF( tmp_compexpr_left_22 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        if ( var_res == NULL )
        {
            Py_DECREF( tmp_assattr_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 307;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = var_res;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_success, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_compexpr_left_23;
        PyObject *tmp_compexpr_right_23;
        CHECK_OBJECT( par_verbose );
        tmp_compexpr_left_23 = par_verbose;
        tmp_compexpr_right_23 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_23, tmp_compexpr_right_23 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_25 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_25;
        }
        else
        {
            goto branch_no_25;
        }
        branch_yes_25:;
        {
            PyObject *tmp_called_name_16;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_39;
            PyObject *tmp_source_name_17;
            tmp_called_name_16 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_16 != NULL );
            if ( var_res == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 310;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_17 = var_res;
            tmp_args_element_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_message );
            if ( tmp_args_element_name_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 310;
            {
                PyObject *call_args[] = { tmp_args_element_name_39 };
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
            }

            Py_DECREF( tmp_args_element_name_39 );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        {
            PyObject *tmp_called_name_17;
            PyObject *tmp_call_result_7;
            PyObject *tmp_args_element_name_40;
            PyObject *tmp_called_name_18;
            PyObject *tmp_source_name_18;
            PyObject *tmp_args_element_name_41;
            PyObject *tmp_source_name_19;
            PyObject *tmp_args_element_name_42;
            PyObject *tmp_source_name_20;
            PyObject *tmp_args_element_name_43;
            PyObject *tmp_source_name_21;
            PyObject *tmp_args_element_name_44;
            PyObject *tmp_source_name_22;
            tmp_called_name_17 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_17 != NULL );
            tmp_source_name_18 = const_str_digest_00b78135b4a6ecaba5da30d2b56b77cc;
            tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_format );
            assert( !(tmp_called_name_18 == NULL) );
            if ( var_res == NULL )
            {
                Py_DECREF( tmp_called_name_18 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 313;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_19 = var_res;
            tmp_args_element_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_nit );
            if ( tmp_args_element_name_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_18 );

                exception_lineno = 313;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            if ( var_res == NULL )
            {
                Py_DECREF( tmp_called_name_18 );
                Py_DECREF( tmp_args_element_name_41 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 313;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_20 = var_res;
            tmp_args_element_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_initial_cost );
            if ( tmp_args_element_name_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_18 );
                Py_DECREF( tmp_args_element_name_41 );

                exception_lineno = 313;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            if ( var_res == NULL )
            {
                Py_DECREF( tmp_called_name_18 );
                Py_DECREF( tmp_args_element_name_41 );
                Py_DECREF( tmp_args_element_name_42 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 313;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_21 = var_res;
            tmp_args_element_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_cost );
            if ( tmp_args_element_name_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_18 );
                Py_DECREF( tmp_args_element_name_41 );
                Py_DECREF( tmp_args_element_name_42 );

                exception_lineno = 313;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            if ( var_res == NULL )
            {
                Py_DECREF( tmp_called_name_18 );
                Py_DECREF( tmp_args_element_name_41 );
                Py_DECREF( tmp_args_element_name_42 );
                Py_DECREF( tmp_args_element_name_43 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 313;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_22 = var_res;
            tmp_args_element_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_optimality );
            if ( tmp_args_element_name_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_18 );
                Py_DECREF( tmp_args_element_name_41 );
                Py_DECREF( tmp_args_element_name_42 );
                Py_DECREF( tmp_args_element_name_43 );

                exception_lineno = 313;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 311;
            {
                PyObject *call_args[] = { tmp_args_element_name_41, tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44 };
                tmp_args_element_name_40 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_18, call_args );
            }

            Py_DECREF( tmp_called_name_18 );
            Py_DECREF( tmp_args_element_name_41 );
            Py_DECREF( tmp_args_element_name_42 );
            Py_DECREF( tmp_args_element_name_43 );
            Py_DECREF( tmp_args_element_name_44 );
            if ( tmp_args_element_name_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            frame_e121a4428d56fc3d352f428be586b0db->m_frame.f_lineno = 311;
            {
                PyObject *call_args[] = { tmp_args_element_name_40 };
                tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
            }

            Py_DECREF( tmp_args_element_name_40 );
            if ( tmp_call_result_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_7 );
        }
        branch_no_25:;
    }
    {
        PyObject *tmp_attrdel_target_1;
        if ( var_res == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_attrdel_target_1 = var_res;
        tmp_res = PyObject_DelAttr( tmp_attrdel_target_1, const_str_plain_initial_cost );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
    }
    if ( var_res == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 317;
        type_description_1 = "ooooooooooooooooNoooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_res;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e121a4428d56fc3d352f428be586b0db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e121a4428d56fc3d352f428be586b0db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e121a4428d56fc3d352f428be586b0db );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e121a4428d56fc3d352f428be586b0db, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e121a4428d56fc3d352f428be586b0db->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e121a4428d56fc3d352f428be586b0db, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e121a4428d56fc3d352f428be586b0db,
        type_description_1,
        par_A,
        par_b,
        par_bounds,
        par_method,
        par_tol,
        par_lsq_solver,
        par_lsmr_tol,
        par_max_iter,
        par_verbose,
        var_m,
        var_n,
        var_lb,
        var_ub,
        var_x_lsq,
        var_r,
        var_cost,
        NULL,
        var_termination_message,
        var_g,
        var_g_norm,
        var_res
    );


    // Release cached frame.
    if ( frame_e121a4428d56fc3d352f428be586b0db == cache_frame_e121a4428d56fc3d352f428be586b0db )
    {
        Py_DECREF( frame_e121a4428d56fc3d352f428be586b0db );
    }
    cache_frame_e121a4428d56fc3d352f428be586b0db = NULL;

    assertFrameObject( frame_e121a4428d56fc3d352f428be586b0db );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$lsq_linear$$$function_2_lsq_linear );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( par_lsq_solver );
    par_lsq_solver = NULL;

    CHECK_OBJECT( (PyObject *)par_lsmr_tol );
    Py_DECREF( par_lsmr_tol );
    par_lsmr_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_max_iter );
    Py_DECREF( par_max_iter );
    par_max_iter = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_lb );
    Py_DECREF( var_lb );
    var_lb = NULL;

    CHECK_OBJECT( (PyObject *)var_ub );
    Py_DECREF( var_ub );
    var_ub = NULL;

    Py_XDECREF( var_x_lsq );
    var_x_lsq = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_termination_message );
    var_termination_message = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_g_norm );
    var_g_norm = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    Py_XDECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( par_lsq_solver );
    par_lsq_solver = NULL;

    CHECK_OBJECT( (PyObject *)par_lsmr_tol );
    Py_DECREF( par_lsmr_tol );
    par_lsmr_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_max_iter );
    Py_DECREF( par_max_iter );
    par_max_iter = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_lb );
    var_lb = NULL;

    Py_XDECREF( var_ub );
    var_ub = NULL;

    Py_XDECREF( var_x_lsq );
    var_x_lsq = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_termination_message );
    var_termination_message = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_g_norm );
    var_g_norm = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$lsq_linear$$$function_2_lsq_linear );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$lsq_linear$$$function_1_prepare_bounds(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$lsq_linear$$$function_1_prepare_bounds,
        const_str_plain_prepare_bounds,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f2f83a5a83f2ff6fa535ca2204ff2512,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$lsq_linear,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$lsq_linear$$$function_2_lsq_linear( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$lsq_linear$$$function_2_lsq_linear,
        const_str_plain_lsq_linear,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e121a4428d56fc3d352f428be586b0db,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$lsq_linear,
        const_str_digest_660872988390ef1420c7d39080597dfa,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_lsq$lsq_linear =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._lsq.lsq_linear",
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

MOD_INIT_DECL( scipy$optimize$_lsq$lsq_linear )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_lsq$lsq_linear );
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
    puts("scipy.optimize._lsq.lsq_linear: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._lsq.lsq_linear: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._lsq.lsq_linear: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_lsq$lsq_linear" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_lsq$lsq_linear = Py_InitModule4(
        "scipy.optimize._lsq.lsq_linear",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_lsq$lsq_linear = PyModule_Create( &mdef_scipy$optimize$_lsq$lsq_linear );
#endif

    moduledict_scipy$optimize$_lsq$lsq_linear = MODULE_DICT( module_scipy$optimize$_lsq$lsq_linear );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_lsq$lsq_linear,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_lsq$lsq_linear,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$lsq_linear,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$lsq_linear,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_lsq$lsq_linear );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_e298991da24a7b51a8f37e5d8a0cab03, module_scipy$optimize$_lsq$lsq_linear );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_c3741de8eb34a8395bb8c76c2b208ed6;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_96b3fcc45c794feab4e1b7de7f5e2de2;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_c3741de8eb34a8395bb8c76c2b208ed6 = MAKE_MODULE_FRAME( codeobj_c3741de8eb34a8395bb8c76c2b208ed6, module_scipy$optimize$_lsq$lsq_linear );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c3741de8eb34a8395bb8c76c2b208ed6 );
    assert( Py_REFCNT( frame_c3741de8eb34a8395bb8c76c2b208ed6 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_c3741de8eb34a8395bb8c76c2b208ed6->m_frame.f_lineno = 2;
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_lsq$lsq_linear;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_c3741de8eb34a8395bb8c76c2b208ed6->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_lsq$lsq_linear;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_norm_tuple;
        tmp_level_name_2 = const_int_0;
        frame_c3741de8eb34a8395bb8c76c2b208ed6->m_frame.f_lineno = 5;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_norm );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_lsq$lsq_linear;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_issparse_str_plain_csr_matrix_tuple;
        tmp_level_name_3 = const_int_0;
        frame_c3741de8eb34a8395bb8c76c2b208ed6->m_frame.f_lineno = 6;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

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
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_issparse );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_issparse, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_csr_matrix );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_csr_matrix, tmp_assign_source_12 );
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_8783708b6421c71a0892a844e756fb02;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_lsq$lsq_linear;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_LinearOperator_str_plain_lsmr_tuple;
        tmp_level_name_4 = const_int_0;
        frame_c3741de8eb34a8395bb8c76c2b208ed6->m_frame.f_lineno = 7;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_7 = tmp_import_from_3__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_LinearOperator );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_LinearOperator, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_lsmr );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_lsmr, tmp_assign_source_15 );
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_a0dfa9cb56b41095d297f9de64891d65;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$optimize$_lsq$lsq_linear;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_OptimizeResult_tuple;
        tmp_level_name_5 = const_int_0;
        frame_c3741de8eb34a8395bb8c76c2b208ed6->m_frame.f_lineno = 8;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_OptimizeResult );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_OptimizeResult, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_common;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$optimize$_lsq$lsq_linear;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_in_bounds_str_plain_compute_grad_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_c3741de8eb34a8395bb8c76c2b208ed6->m_frame.f_lineno = 10;
        tmp_assign_source_17 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_10 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$optimize$_lsq$lsq_linear,
                const_str_plain_in_bounds,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_in_bounds );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_in_bounds, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_11 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$optimize$_lsq$lsq_linear,
                const_str_plain_compute_grad,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_compute_grad );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_compute_grad, tmp_assign_source_19 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_trf_linear;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$optimize$_lsq$lsq_linear;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_trf_linear_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_c3741de8eb34a8395bb8c76c2b208ed6->m_frame.f_lineno = 11;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$optimize$_lsq$lsq_linear,
                const_str_plain_trf_linear,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_trf_linear );
        }

        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_trf_linear, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_bvls;
        tmp_globals_name_8 = (PyObject *)moduledict_scipy$optimize$_lsq$lsq_linear;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_bvls_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_c3741de8eb34a8395bb8c76c2b208ed6->m_frame.f_lineno = 12;
        tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_13 ) )
        {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_scipy$optimize$_lsq$lsq_linear,
                const_str_plain_bvls,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_bvls );
        }

        Py_DECREF( tmp_import_name_from_13 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_bvls, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_scipy$optimize$_lsq$lsq_linear$$$function_1_prepare_bounds(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_prepare_bounds, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = PyDict_Copy( const_dict_5af6d8bb4e99fe52c60560c82ded5a23 );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_TERMINATION_MESSAGES, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inf );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_defaults_1 = PyTuple_New( 7 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_str_plain_trf;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_float_1eminus_10;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 5, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 6, tmp_tuple_element_1 );
        tmp_assign_source_24 = MAKE_FUNCTION_scipy$optimize$_lsq$lsq_linear$$$function_2_lsq_linear( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain_lsq_linear, tmp_assign_source_24 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3741de8eb34a8395bb8c76c2b208ed6 );
#endif
    popFrameStack();

    assertFrameObject( frame_c3741de8eb34a8395bb8c76c2b208ed6 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3741de8eb34a8395bb8c76c2b208ed6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c3741de8eb34a8395bb8c76c2b208ed6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c3741de8eb34a8395bb8c76c2b208ed6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c3741de8eb34a8395bb8c76c2b208ed6, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$lsq_linear, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_lsq$lsq_linear );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
