/* Generated code for Python module 'serial.tools.list_ports_posix'
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

/* The "_module_serial$tools$list_ports_posix" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial$tools$list_ports_posix;
PyDictObject *moduledict_serial$tools$list_ports_posix;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_f192fef695f7baf504b534bfe984101b;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_linux;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_devices;
extern PyObject *const_tuple_str_plain_list_ports_common_tuple;
static PyObject *const_str_digest_72e1a7d9aa9f26469ed8a3c27cab74fd;
extern PyObject *const_tuple_str_plain_comports_tuple;
extern PyObject *const_str_digest_74372215f5519ff8756ee03eda5d95ea;
extern PyObject *const_str_digest_2f35a414b84420362cdb81f3d8e8aedb;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_None;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_5;
extern PyObject *const_tuple_str_plain_include_links_str_plain_devices_tuple;
extern PyObject *const_str_plain_glob;
static PyObject *const_tuple_str_digest_733b6dd03cbfb518cf03d92f549b829b_tuple;
static PyObject *const_str_digest_8c0bc807ad3b2a78d899d7e99b38bc3f;
extern PyObject *const_str_plain_platform;
extern PyObject *const_slice_none_int_pos_2_none;
extern PyObject *const_str_plain_serial;
extern PyObject *const_tuple_str_plain_d_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_extend;
static PyObject *const_str_plain_sunos;
extern PyObject *const_slice_none_int_pos_7_none;
extern PyObject *const_str_plain_netbsd;
static PyObject *const_tuple_str_digest_f192fef695f7baf504b534bfe984101b_tuple;
static PyObject *const_tuple_str_digest_76aad4bd7acf194276968dc8693bb5e4_tuple;
static PyObject *const_str_plain_aix;
static PyObject *const_str_digest_20fca8073682dff5bf94a8064843c2ad;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_158aa7b7259bce694fd44ae6ee91d02b;
extern PyObject *const_str_digest_26b4054632d3988ebc1074dfd77ea34a;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_plain_VERSION;
extern PyObject *const_str_plain_list_ports_common;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_ListPortInfo;
extern PyObject *const_str_plain_include_links;
static PyObject *const_tuple_str_digest_24b5de8fc282062553f3ce7da430fb12_tuple;
static PyObject *const_str_digest_24b5de8fc282062553f3ce7da430fb12;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_cygwin;
static PyObject *const_str_digest_1f028782a1940c5f518d5e74a79732c7;
extern PyObject *const_str_plain_freebsd;
extern PyObject *const_slice_none_int_pos_6_none;
extern PyObject *const_int_0;
static PyObject *const_str_digest_76a14c73d5ce25b5e3d5362a82a952f0;
extern PyObject *const_slice_none_int_pos_3_none;
extern PyObject *const_str_plain_comports;
extern PyObject *const_slice_none_int_pos_5_none;
static PyObject *const_tuple_str_digest_1f028782a1940c5f518d5e74a79732c7_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_slice_none_int_pos_4_none;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_0ff654475e2fe7bcac49891bc5e18513;
static PyObject *const_str_digest_733b6dd03cbfb518cf03d92f549b829b;
extern PyObject *const_str_plain_bsd;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_digest_76aad4bd7acf194276968dc8693bb5e4;
extern PyObject *const_str_plain_plat;
static PyObject *const_tuple_str_digest_8c0bc807ad3b2a78d899d7e99b38bc3f_tuple;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_write;
static PyObject *const_str_plain_hp;
static PyObject *const_tuple_str_digest_20fca8073682dff5bf94a8064843c2ad_tuple;
extern PyObject *const_str_digest_2a9b9e88acca55347e5ef4ae4b4dfd80;
extern PyObject *const_int_pos_7;
static PyObject *const_str_digest_7dfb605e9e3ae06edd8ffb7dd8657e16;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_darwin;
static PyObject *const_str_plain_irix;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_digest_93adf274967dbdde392469d6e717df1f;
static PyObject *const_str_digest_c263d5bb3d3cf3a6253560205ee8ad74;
extern PyObject *const_tuple_str_digest_93adf274967dbdde392469d6e717df1f_tuple;
extern PyObject *const_str_plain_list_links;
extern PyObject *const_str_plain_openbsd;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_f192fef695f7baf504b534bfe984101b = UNSTREAM_STRING_ASCII( &constant_bin[ 5824169 ], 25, 0 );
    const_str_digest_72e1a7d9aa9f26469ed8a3c27cab74fd = UNSTREAM_STRING_ASCII( &constant_bin[ 5824194 ], 273, 0 );
    const_tuple_str_digest_733b6dd03cbfb518cf03d92f549b829b_tuple = PyTuple_New( 1 );
    const_str_digest_733b6dd03cbfb518cf03d92f549b829b = UNSTREAM_STRING_ASCII( &constant_bin[ 5824467 ], 10, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_733b6dd03cbfb518cf03d92f549b829b_tuple, 0, const_str_digest_733b6dd03cbfb518cf03d92f549b829b ); Py_INCREF( const_str_digest_733b6dd03cbfb518cf03d92f549b829b );
    const_str_digest_8c0bc807ad3b2a78d899d7e99b38bc3f = UNSTREAM_STRING_ASCII( &constant_bin[ 5824477 ], 10, 0 );
    const_str_plain_sunos = UNSTREAM_STRING_ASCII( &constant_bin[ 1321895 ], 5, 1 );
    const_tuple_str_digest_f192fef695f7baf504b534bfe984101b_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_f192fef695f7baf504b534bfe984101b_tuple, 0, const_str_digest_f192fef695f7baf504b534bfe984101b ); Py_INCREF( const_str_digest_f192fef695f7baf504b534bfe984101b );
    const_tuple_str_digest_76aad4bd7acf194276968dc8693bb5e4_tuple = PyTuple_New( 1 );
    const_str_digest_76aad4bd7acf194276968dc8693bb5e4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5824487 ], 11, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_76aad4bd7acf194276968dc8693bb5e4_tuple, 0, const_str_digest_76aad4bd7acf194276968dc8693bb5e4 ); Py_INCREF( const_str_digest_76aad4bd7acf194276968dc8693bb5e4 );
    const_str_plain_aix = UNSTREAM_STRING_ASCII( &constant_bin[ 5824498 ], 3, 1 );
    const_str_digest_20fca8073682dff5bf94a8064843c2ad = UNSTREAM_STRING_ASCII( &constant_bin[ 5824501 ], 9, 0 );
    const_tuple_str_digest_24b5de8fc282062553f3ce7da430fb12_tuple = PyTuple_New( 1 );
    const_str_digest_24b5de8fc282062553f3ce7da430fb12 = UNSTREAM_STRING_ASCII( &constant_bin[ 5824169 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_24b5de8fc282062553f3ce7da430fb12_tuple, 0, const_str_digest_24b5de8fc282062553f3ce7da430fb12 ); Py_INCREF( const_str_digest_24b5de8fc282062553f3ce7da430fb12 );
    const_str_digest_1f028782a1940c5f518d5e74a79732c7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5824467 ], 9, 0 );
    const_str_digest_76a14c73d5ce25b5e3d5362a82a952f0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5824510 ], 56, 0 );
    const_tuple_str_digest_1f028782a1940c5f518d5e74a79732c7_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_1f028782a1940c5f518d5e74a79732c7_tuple, 0, const_str_digest_1f028782a1940c5f518d5e74a79732c7 ); Py_INCREF( const_str_digest_1f028782a1940c5f518d5e74a79732c7 );
    const_str_digest_0ff654475e2fe7bcac49891bc5e18513 = UNSTREAM_STRING_ASCII( &constant_bin[ 5824566 ], 32, 0 );
    const_tuple_str_digest_8c0bc807ad3b2a78d899d7e99b38bc3f_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_8c0bc807ad3b2a78d899d7e99b38bc3f_tuple, 0, const_str_digest_8c0bc807ad3b2a78d899d7e99b38bc3f ); Py_INCREF( const_str_digest_8c0bc807ad3b2a78d899d7e99b38bc3f );
    const_str_plain_hp = UNSTREAM_STRING_ASCII( &constant_bin[ 60010 ], 2, 1 );
    const_tuple_str_digest_20fca8073682dff5bf94a8064843c2ad_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_20fca8073682dff5bf94a8064843c2ad_tuple, 0, const_str_digest_20fca8073682dff5bf94a8064843c2ad ); Py_INCREF( const_str_digest_20fca8073682dff5bf94a8064843c2ad );
    const_str_digest_7dfb605e9e3ae06edd8ffb7dd8657e16 = UNSTREAM_STRING_ASCII( &constant_bin[ 5824598 ], 308, 0 );
    const_str_plain_irix = UNSTREAM_STRING_ASCII( &constant_bin[ 5824906 ], 4, 1 );
    const_str_digest_c263d5bb3d3cf3a6253560205ee8ad74 = UNSTREAM_STRING_ASCII( &constant_bin[ 5824910 ], 38, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial$tools$list_ports_posix( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_369c6f5906a69245b7139ffd98bed17c;
static PyCodeObject *codeobj_fe1fce58ce656d9211d0a6350c855b98;
static PyCodeObject *codeobj_1d1326646facfa193a6f9acfd67d3fc0;
static PyCodeObject *codeobj_a014134da24eae4031f49f82435c375f;
static PyCodeObject *codeobj_3488aae48159e5c0f4e04eadddbc2c7e;
static PyCodeObject *codeobj_a793c1ec1fbb9223ed222159a108ab87;
static PyCodeObject *codeobj_7bf1a2909c4402786d2e8dc27104e6ce;
static PyCodeObject *codeobj_fadb86f83ce425512c37969031350363;
static PyCodeObject *codeobj_df5da72b8e1a2f46b38055613277d5c2;
static PyCodeObject *codeobj_3d5db857d1a58ece456c645c3e0e4e51;
static PyCodeObject *codeobj_e699d62837c4e24962a44902089d1414;
static PyCodeObject *codeobj_cd2f2f7488eb186e12dfc4a3bad70fd6;
static PyCodeObject *codeobj_171a84ccc9c1dcd0931c2f70c5ab41fb;
static PyCodeObject *codeobj_81b80732e4b32d1191f544bdd1d48759;
static PyCodeObject *codeobj_adcb2df86b1acd9fb1f70deb875c7467;
static PyCodeObject *codeobj_abd7c6b0b8d8c091fff2c614530c970d;
static PyCodeObject *codeobj_4304d6d9a01fd7a695d30b3eb92e86d5;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_0ff654475e2fe7bcac49891bc5e18513 );
    codeobj_369c6f5906a69245b7139ffd98bed17c = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 41, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fe1fce58ce656d9211d0a6350c855b98 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 48, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1d1326646facfa193a6f9acfd67d3fc0 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 55, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a014134da24eae4031f49f82435c375f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 63, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3488aae48159e5c0f4e04eadddbc2c7e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 71, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a793c1ec1fbb9223ed222159a108ab87 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 79, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7bf1a2909c4402786d2e8dc27104e6ce = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 87, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fadb86f83ce425512c37969031350363 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 95, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_df5da72b8e1a2f46b38055613277d5c2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c263d5bb3d3cf3a6253560205ee8ad74, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3d5db857d1a58ece456c645c3e0e4e51 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_comports, 37, const_tuple_str_plain_include_links_str_plain_devices_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e699d62837c4e24962a44902089d1414 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_comports, 44, const_tuple_str_plain_include_links_str_plain_devices_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cd2f2f7488eb186e12dfc4a3bad70fd6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_comports, 51, const_tuple_str_plain_include_links_str_plain_devices_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_171a84ccc9c1dcd0931c2f70c5ab41fb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_comports, 58, const_tuple_str_plain_include_links_str_plain_devices_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_81b80732e4b32d1191f544bdd1d48759 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_comports, 66, const_tuple_str_plain_include_links_str_plain_devices_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_adcb2df86b1acd9fb1f70deb875c7467 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_comports, 74, const_tuple_str_plain_include_links_str_plain_devices_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_abd7c6b0b8d8c091fff2c614530c970d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_comports, 82, const_tuple_str_plain_include_links_str_plain_devices_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4304d6d9a01fd7a695d30b3eb92e86d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_comports, 90, const_tuple_str_plain_include_links_str_plain_devices_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_1_comports( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_2_comports( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_3_comports( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_4_comports( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_5_comports( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_6_comports( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_7_comports( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_8_comports( PyObject *defaults );


// The module function definitions.
static PyObject *impl_serial$tools$list_ports_posix$$$function_1_comports( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_include_links = python_pars[ 0 ];
    PyObject *var_devices = NULL;
    PyObject *outline_0_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_3d5db857d1a58ece456c645c3e0e4e51;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_369c6f5906a69245b7139ffd98bed17c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_369c6f5906a69245b7139ffd98bed17c_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_3d5db857d1a58ece456c645c3e0e4e51 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3d5db857d1a58ece456c645c3e0e4e51, codeobj_3d5db857d1a58ece456c645c3e0e4e51, module_serial$tools$list_ports_posix, sizeof(void *)+sizeof(void *) );
    frame_3d5db857d1a58ece456c645c3e0e4e51 = cache_frame_3d5db857d1a58ece456c645c3e0e4e51;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3d5db857d1a58ece456c645c3e0e4e51 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3d5db857d1a58ece456c645c3e0e4e51 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "glob" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_3d5db857d1a58ece456c645c3e0e4e51->m_frame.f_lineno = 38;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_glob, &PyTuple_GET_ITEM( const_tuple_str_digest_93adf274967dbdde392469d6e717df1f_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_devices == NULL );
        var_devices = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_include_links );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_include_links );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_devices );
            tmp_source_name_1 = var_devices;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 40;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_devices );
            tmp_args_element_name_2 = var_devices;
            frame_3d5db857d1a58ece456c645c3e0e4e51->m_frame.f_lineno = 40;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_list_links, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 40;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_3d5db857d1a58ece456c645c3e0e4e51->m_frame.f_lineno = 40;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_devices );
        tmp_iter_arg_1 = var_devices;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "oo";
            goto try_except_handler_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_369c6f5906a69245b7139ffd98bed17c_2, codeobj_369c6f5906a69245b7139ffd98bed17c, module_serial$tools$list_ports_posix, sizeof(void *) );
    frame_369c6f5906a69245b7139ffd98bed17c_2 = cache_frame_369c6f5906a69245b7139ffd98bed17c_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_369c6f5906a69245b7139ffd98bed17c_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_369c6f5906a69245b7139ffd98bed17c_2 ) == 2 ); // Frame stack

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
                exception_lineno = 41;
                goto try_except_handler_3;
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
            PyObject *old = outline_0_var_d;
            outline_0_var_d = tmp_assign_source_5;
            Py_INCREF( outline_0_var_d );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;
            type_description_2 = "o";
            goto try_except_handler_3;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( outline_0_var_d );
        tmp_args_element_name_3 = outline_0_var_d;
        frame_369c6f5906a69245b7139ffd98bed17c_2->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ListPortInfo, call_args );
        }

        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
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


            exception_lineno = 41;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_1_comports );
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
    RESTORE_FRAME_EXCEPTION( frame_369c6f5906a69245b7139ffd98bed17c_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_369c6f5906a69245b7139ffd98bed17c_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_369c6f5906a69245b7139ffd98bed17c_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_369c6f5906a69245b7139ffd98bed17c_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_369c6f5906a69245b7139ffd98bed17c_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_369c6f5906a69245b7139ffd98bed17c_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_369c6f5906a69245b7139ffd98bed17c_2,
        type_description_2,
        outline_0_var_d
    );


    // Release cached frame.
    if ( frame_369c6f5906a69245b7139ffd98bed17c_2 == cache_frame_369c6f5906a69245b7139ffd98bed17c_2 )
    {
        Py_DECREF( frame_369c6f5906a69245b7139ffd98bed17c_2 );
    }
    cache_frame_369c6f5906a69245b7139ffd98bed17c_2 = NULL;

    assertFrameObject( frame_369c6f5906a69245b7139ffd98bed17c_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_1_comports );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

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

    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_1_comports );
    return NULL;
    outline_exception_1:;
    exception_lineno = 41;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d5db857d1a58ece456c645c3e0e4e51 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d5db857d1a58ece456c645c3e0e4e51 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d5db857d1a58ece456c645c3e0e4e51 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3d5db857d1a58ece456c645c3e0e4e51, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3d5db857d1a58ece456c645c3e0e4e51->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3d5db857d1a58ece456c645c3e0e4e51, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3d5db857d1a58ece456c645c3e0e4e51,
        type_description_1,
        par_include_links,
        var_devices
    );


    // Release cached frame.
    if ( frame_3d5db857d1a58ece456c645c3e0e4e51 == cache_frame_3d5db857d1a58ece456c645c3e0e4e51 )
    {
        Py_DECREF( frame_3d5db857d1a58ece456c645c3e0e4e51 );
    }
    cache_frame_3d5db857d1a58ece456c645c3e0e4e51 = NULL;

    assertFrameObject( frame_3d5db857d1a58ece456c645c3e0e4e51 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_1_comports );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    CHECK_OBJECT( (PyObject *)var_devices );
    Py_DECREF( var_devices );
    var_devices = NULL;

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

    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    Py_XDECREF( var_devices );
    var_devices = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_1_comports );
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


static PyObject *impl_serial$tools$list_ports_posix$$$function_2_comports( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_include_links = python_pars[ 0 ];
    PyObject *var_devices = NULL;
    PyObject *outline_0_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_e699d62837c4e24962a44902089d1414;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_fe1fce58ce656d9211d0a6350c855b98_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_fe1fce58ce656d9211d0a6350c855b98_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_e699d62837c4e24962a44902089d1414 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e699d62837c4e24962a44902089d1414, codeobj_e699d62837c4e24962a44902089d1414, module_serial$tools$list_ports_posix, sizeof(void *)+sizeof(void *) );
    frame_e699d62837c4e24962a44902089d1414 = cache_frame_e699d62837c4e24962a44902089d1414;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e699d62837c4e24962a44902089d1414 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e699d62837c4e24962a44902089d1414 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "glob" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_e699d62837c4e24962a44902089d1414->m_frame.f_lineno = 45;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_glob, &PyTuple_GET_ITEM( const_tuple_str_digest_24b5de8fc282062553f3ce7da430fb12_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_devices == NULL );
        var_devices = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_include_links );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_include_links );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_devices );
            tmp_source_name_1 = var_devices;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 47;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_devices );
            tmp_args_element_name_2 = var_devices;
            frame_e699d62837c4e24962a44902089d1414->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_list_links, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 47;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_e699d62837c4e24962a44902089d1414->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_devices );
        tmp_iter_arg_1 = var_devices;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oo";
            goto try_except_handler_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_fe1fce58ce656d9211d0a6350c855b98_2, codeobj_fe1fce58ce656d9211d0a6350c855b98, module_serial$tools$list_ports_posix, sizeof(void *) );
    frame_fe1fce58ce656d9211d0a6350c855b98_2 = cache_frame_fe1fce58ce656d9211d0a6350c855b98_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fe1fce58ce656d9211d0a6350c855b98_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fe1fce58ce656d9211d0a6350c855b98_2 ) == 2 ); // Frame stack

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
                exception_lineno = 48;
                goto try_except_handler_3;
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
            PyObject *old = outline_0_var_d;
            outline_0_var_d = tmp_assign_source_5;
            Py_INCREF( outline_0_var_d );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            type_description_2 = "o";
            goto try_except_handler_3;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( outline_0_var_d );
        tmp_args_element_name_3 = outline_0_var_d;
        frame_fe1fce58ce656d9211d0a6350c855b98_2->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ListPortInfo, call_args );
        }

        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
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


            exception_lineno = 48;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_2_comports );
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
    RESTORE_FRAME_EXCEPTION( frame_fe1fce58ce656d9211d0a6350c855b98_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe1fce58ce656d9211d0a6350c855b98_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe1fce58ce656d9211d0a6350c855b98_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fe1fce58ce656d9211d0a6350c855b98_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fe1fce58ce656d9211d0a6350c855b98_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fe1fce58ce656d9211d0a6350c855b98_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fe1fce58ce656d9211d0a6350c855b98_2,
        type_description_2,
        outline_0_var_d
    );


    // Release cached frame.
    if ( frame_fe1fce58ce656d9211d0a6350c855b98_2 == cache_frame_fe1fce58ce656d9211d0a6350c855b98_2 )
    {
        Py_DECREF( frame_fe1fce58ce656d9211d0a6350c855b98_2 );
    }
    cache_frame_fe1fce58ce656d9211d0a6350c855b98_2 = NULL;

    assertFrameObject( frame_fe1fce58ce656d9211d0a6350c855b98_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_2_comports );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

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

    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_2_comports );
    return NULL;
    outline_exception_1:;
    exception_lineno = 48;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e699d62837c4e24962a44902089d1414 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e699d62837c4e24962a44902089d1414 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e699d62837c4e24962a44902089d1414 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e699d62837c4e24962a44902089d1414, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e699d62837c4e24962a44902089d1414->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e699d62837c4e24962a44902089d1414, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e699d62837c4e24962a44902089d1414,
        type_description_1,
        par_include_links,
        var_devices
    );


    // Release cached frame.
    if ( frame_e699d62837c4e24962a44902089d1414 == cache_frame_e699d62837c4e24962a44902089d1414 )
    {
        Py_DECREF( frame_e699d62837c4e24962a44902089d1414 );
    }
    cache_frame_e699d62837c4e24962a44902089d1414 = NULL;

    assertFrameObject( frame_e699d62837c4e24962a44902089d1414 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_2_comports );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    CHECK_OBJECT( (PyObject *)var_devices );
    Py_DECREF( var_devices );
    var_devices = NULL;

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

    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    Py_XDECREF( var_devices );
    var_devices = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_2_comports );
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


static PyObject *impl_serial$tools$list_ports_posix$$$function_3_comports( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_include_links = python_pars[ 0 ];
    PyObject *var_devices = NULL;
    PyObject *outline_0_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_cd2f2f7488eb186e12dfc4a3bad70fd6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_1d1326646facfa193a6f9acfd67d3fc0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1d1326646facfa193a6f9acfd67d3fc0_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_cd2f2f7488eb186e12dfc4a3bad70fd6 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cd2f2f7488eb186e12dfc4a3bad70fd6, codeobj_cd2f2f7488eb186e12dfc4a3bad70fd6, module_serial$tools$list_ports_posix, sizeof(void *)+sizeof(void *) );
    frame_cd2f2f7488eb186e12dfc4a3bad70fd6 = cache_frame_cd2f2f7488eb186e12dfc4a3bad70fd6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cd2f2f7488eb186e12dfc4a3bad70fd6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cd2f2f7488eb186e12dfc4a3bad70fd6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "glob" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_cd2f2f7488eb186e12dfc4a3bad70fd6->m_frame.f_lineno = 52;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_glob, &PyTuple_GET_ITEM( const_tuple_str_digest_f192fef695f7baf504b534bfe984101b_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_devices == NULL );
        var_devices = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_include_links );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_include_links );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_devices );
            tmp_source_name_1 = var_devices;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 54;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_devices );
            tmp_args_element_name_2 = var_devices;
            frame_cd2f2f7488eb186e12dfc4a3bad70fd6->m_frame.f_lineno = 54;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_list_links, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 54;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_cd2f2f7488eb186e12dfc4a3bad70fd6->m_frame.f_lineno = 54;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_devices );
        tmp_iter_arg_1 = var_devices;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oo";
            goto try_except_handler_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_1d1326646facfa193a6f9acfd67d3fc0_2, codeobj_1d1326646facfa193a6f9acfd67d3fc0, module_serial$tools$list_ports_posix, sizeof(void *) );
    frame_1d1326646facfa193a6f9acfd67d3fc0_2 = cache_frame_1d1326646facfa193a6f9acfd67d3fc0_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1d1326646facfa193a6f9acfd67d3fc0_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1d1326646facfa193a6f9acfd67d3fc0_2 ) == 2 ); // Frame stack

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
                exception_lineno = 55;
                goto try_except_handler_3;
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
            PyObject *old = outline_0_var_d;
            outline_0_var_d = tmp_assign_source_5;
            Py_INCREF( outline_0_var_d );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 55;
            type_description_2 = "o";
            goto try_except_handler_3;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( outline_0_var_d );
        tmp_args_element_name_3 = outline_0_var_d;
        frame_1d1326646facfa193a6f9acfd67d3fc0_2->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ListPortInfo, call_args );
        }

        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
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


            exception_lineno = 55;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_3_comports );
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
    RESTORE_FRAME_EXCEPTION( frame_1d1326646facfa193a6f9acfd67d3fc0_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d1326646facfa193a6f9acfd67d3fc0_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d1326646facfa193a6f9acfd67d3fc0_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1d1326646facfa193a6f9acfd67d3fc0_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1d1326646facfa193a6f9acfd67d3fc0_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1d1326646facfa193a6f9acfd67d3fc0_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1d1326646facfa193a6f9acfd67d3fc0_2,
        type_description_2,
        outline_0_var_d
    );


    // Release cached frame.
    if ( frame_1d1326646facfa193a6f9acfd67d3fc0_2 == cache_frame_1d1326646facfa193a6f9acfd67d3fc0_2 )
    {
        Py_DECREF( frame_1d1326646facfa193a6f9acfd67d3fc0_2 );
    }
    cache_frame_1d1326646facfa193a6f9acfd67d3fc0_2 = NULL;

    assertFrameObject( frame_1d1326646facfa193a6f9acfd67d3fc0_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_3_comports );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

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

    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_3_comports );
    return NULL;
    outline_exception_1:;
    exception_lineno = 55;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd2f2f7488eb186e12dfc4a3bad70fd6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd2f2f7488eb186e12dfc4a3bad70fd6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd2f2f7488eb186e12dfc4a3bad70fd6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cd2f2f7488eb186e12dfc4a3bad70fd6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cd2f2f7488eb186e12dfc4a3bad70fd6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cd2f2f7488eb186e12dfc4a3bad70fd6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cd2f2f7488eb186e12dfc4a3bad70fd6,
        type_description_1,
        par_include_links,
        var_devices
    );


    // Release cached frame.
    if ( frame_cd2f2f7488eb186e12dfc4a3bad70fd6 == cache_frame_cd2f2f7488eb186e12dfc4a3bad70fd6 )
    {
        Py_DECREF( frame_cd2f2f7488eb186e12dfc4a3bad70fd6 );
    }
    cache_frame_cd2f2f7488eb186e12dfc4a3bad70fd6 = NULL;

    assertFrameObject( frame_cd2f2f7488eb186e12dfc4a3bad70fd6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_3_comports );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    CHECK_OBJECT( (PyObject *)var_devices );
    Py_DECREF( var_devices );
    var_devices = NULL;

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

    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    Py_XDECREF( var_devices );
    var_devices = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_3_comports );
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


static PyObject *impl_serial$tools$list_ports_posix$$$function_4_comports( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_include_links = python_pars[ 0 ];
    PyObject *var_devices = NULL;
    PyObject *outline_0_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_171a84ccc9c1dcd0931c2f70c5ab41fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_a014134da24eae4031f49f82435c375f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a014134da24eae4031f49f82435c375f_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_171a84ccc9c1dcd0931c2f70c5ab41fb = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_171a84ccc9c1dcd0931c2f70c5ab41fb, codeobj_171a84ccc9c1dcd0931c2f70c5ab41fb, module_serial$tools$list_ports_posix, sizeof(void *)+sizeof(void *) );
    frame_171a84ccc9c1dcd0931c2f70c5ab41fb = cache_frame_171a84ccc9c1dcd0931c2f70c5ab41fb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_171a84ccc9c1dcd0931c2f70c5ab41fb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_171a84ccc9c1dcd0931c2f70c5ab41fb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "glob" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_171a84ccc9c1dcd0931c2f70c5ab41fb->m_frame.f_lineno = 60;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_glob, &PyTuple_GET_ITEM( const_tuple_str_digest_20fca8073682dff5bf94a8064843c2ad_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_devices == NULL );
        var_devices = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_include_links );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_include_links );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_devices );
            tmp_source_name_1 = var_devices;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 62;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_devices );
            tmp_args_element_name_2 = var_devices;
            frame_171a84ccc9c1dcd0931c2f70c5ab41fb->m_frame.f_lineno = 62;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_list_links, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 62;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_171a84ccc9c1dcd0931c2f70c5ab41fb->m_frame.f_lineno = 62;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_devices );
        tmp_iter_arg_1 = var_devices;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oo";
            goto try_except_handler_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_a014134da24eae4031f49f82435c375f_2, codeobj_a014134da24eae4031f49f82435c375f, module_serial$tools$list_ports_posix, sizeof(void *) );
    frame_a014134da24eae4031f49f82435c375f_2 = cache_frame_a014134da24eae4031f49f82435c375f_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a014134da24eae4031f49f82435c375f_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a014134da24eae4031f49f82435c375f_2 ) == 2 ); // Frame stack

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
                exception_lineno = 63;
                goto try_except_handler_3;
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
            PyObject *old = outline_0_var_d;
            outline_0_var_d = tmp_assign_source_5;
            Py_INCREF( outline_0_var_d );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 63;
            type_description_2 = "o";
            goto try_except_handler_3;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( outline_0_var_d );
        tmp_args_element_name_3 = outline_0_var_d;
        frame_a014134da24eae4031f49f82435c375f_2->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ListPortInfo, call_args );
        }

        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
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


            exception_lineno = 63;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_4_comports );
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
    RESTORE_FRAME_EXCEPTION( frame_a014134da24eae4031f49f82435c375f_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a014134da24eae4031f49f82435c375f_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a014134da24eae4031f49f82435c375f_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a014134da24eae4031f49f82435c375f_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a014134da24eae4031f49f82435c375f_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a014134da24eae4031f49f82435c375f_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a014134da24eae4031f49f82435c375f_2,
        type_description_2,
        outline_0_var_d
    );


    // Release cached frame.
    if ( frame_a014134da24eae4031f49f82435c375f_2 == cache_frame_a014134da24eae4031f49f82435c375f_2 )
    {
        Py_DECREF( frame_a014134da24eae4031f49f82435c375f_2 );
    }
    cache_frame_a014134da24eae4031f49f82435c375f_2 = NULL;

    assertFrameObject( frame_a014134da24eae4031f49f82435c375f_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_4_comports );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

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

    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_4_comports );
    return NULL;
    outline_exception_1:;
    exception_lineno = 63;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_171a84ccc9c1dcd0931c2f70c5ab41fb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_171a84ccc9c1dcd0931c2f70c5ab41fb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_171a84ccc9c1dcd0931c2f70c5ab41fb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_171a84ccc9c1dcd0931c2f70c5ab41fb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_171a84ccc9c1dcd0931c2f70c5ab41fb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_171a84ccc9c1dcd0931c2f70c5ab41fb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_171a84ccc9c1dcd0931c2f70c5ab41fb,
        type_description_1,
        par_include_links,
        var_devices
    );


    // Release cached frame.
    if ( frame_171a84ccc9c1dcd0931c2f70c5ab41fb == cache_frame_171a84ccc9c1dcd0931c2f70c5ab41fb )
    {
        Py_DECREF( frame_171a84ccc9c1dcd0931c2f70c5ab41fb );
    }
    cache_frame_171a84ccc9c1dcd0931c2f70c5ab41fb = NULL;

    assertFrameObject( frame_171a84ccc9c1dcd0931c2f70c5ab41fb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_4_comports );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    CHECK_OBJECT( (PyObject *)var_devices );
    Py_DECREF( var_devices );
    var_devices = NULL;

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

    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    Py_XDECREF( var_devices );
    var_devices = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_4_comports );
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


static PyObject *impl_serial$tools$list_ports_posix$$$function_5_comports( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_include_links = python_pars[ 0 ];
    PyObject *var_devices = NULL;
    PyObject *outline_0_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_81b80732e4b32d1191f544bdd1d48759;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_3488aae48159e5c0f4e04eadddbc2c7e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_3488aae48159e5c0f4e04eadddbc2c7e_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_81b80732e4b32d1191f544bdd1d48759 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_81b80732e4b32d1191f544bdd1d48759, codeobj_81b80732e4b32d1191f544bdd1d48759, module_serial$tools$list_ports_posix, sizeof(void *)+sizeof(void *) );
    frame_81b80732e4b32d1191f544bdd1d48759 = cache_frame_81b80732e4b32d1191f544bdd1d48759;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_81b80732e4b32d1191f544bdd1d48759 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_81b80732e4b32d1191f544bdd1d48759 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "glob" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_81b80732e4b32d1191f544bdd1d48759->m_frame.f_lineno = 68;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_glob, &PyTuple_GET_ITEM( const_tuple_str_digest_8c0bc807ad3b2a78d899d7e99b38bc3f_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_devices == NULL );
        var_devices = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_include_links );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_include_links );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_devices );
            tmp_source_name_1 = var_devices;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 70;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_devices );
            tmp_args_element_name_2 = var_devices;
            frame_81b80732e4b32d1191f544bdd1d48759->m_frame.f_lineno = 70;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_list_links, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 70;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_81b80732e4b32d1191f544bdd1d48759->m_frame.f_lineno = 70;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_devices );
        tmp_iter_arg_1 = var_devices;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "oo";
            goto try_except_handler_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_3488aae48159e5c0f4e04eadddbc2c7e_2, codeobj_3488aae48159e5c0f4e04eadddbc2c7e, module_serial$tools$list_ports_posix, sizeof(void *) );
    frame_3488aae48159e5c0f4e04eadddbc2c7e_2 = cache_frame_3488aae48159e5c0f4e04eadddbc2c7e_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3488aae48159e5c0f4e04eadddbc2c7e_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3488aae48159e5c0f4e04eadddbc2c7e_2 ) == 2 ); // Frame stack

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
                exception_lineno = 71;
                goto try_except_handler_3;
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
            PyObject *old = outline_0_var_d;
            outline_0_var_d = tmp_assign_source_5;
            Py_INCREF( outline_0_var_d );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 71;
            type_description_2 = "o";
            goto try_except_handler_3;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( outline_0_var_d );
        tmp_args_element_name_3 = outline_0_var_d;
        frame_3488aae48159e5c0f4e04eadddbc2c7e_2->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ListPortInfo, call_args );
        }

        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
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


            exception_lineno = 71;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_5_comports );
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
    RESTORE_FRAME_EXCEPTION( frame_3488aae48159e5c0f4e04eadddbc2c7e_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3488aae48159e5c0f4e04eadddbc2c7e_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3488aae48159e5c0f4e04eadddbc2c7e_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3488aae48159e5c0f4e04eadddbc2c7e_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3488aae48159e5c0f4e04eadddbc2c7e_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3488aae48159e5c0f4e04eadddbc2c7e_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3488aae48159e5c0f4e04eadddbc2c7e_2,
        type_description_2,
        outline_0_var_d
    );


    // Release cached frame.
    if ( frame_3488aae48159e5c0f4e04eadddbc2c7e_2 == cache_frame_3488aae48159e5c0f4e04eadddbc2c7e_2 )
    {
        Py_DECREF( frame_3488aae48159e5c0f4e04eadddbc2c7e_2 );
    }
    cache_frame_3488aae48159e5c0f4e04eadddbc2c7e_2 = NULL;

    assertFrameObject( frame_3488aae48159e5c0f4e04eadddbc2c7e_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_5_comports );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

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

    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_5_comports );
    return NULL;
    outline_exception_1:;
    exception_lineno = 71;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b80732e4b32d1191f544bdd1d48759 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b80732e4b32d1191f544bdd1d48759 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b80732e4b32d1191f544bdd1d48759 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_81b80732e4b32d1191f544bdd1d48759, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_81b80732e4b32d1191f544bdd1d48759->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_81b80732e4b32d1191f544bdd1d48759, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_81b80732e4b32d1191f544bdd1d48759,
        type_description_1,
        par_include_links,
        var_devices
    );


    // Release cached frame.
    if ( frame_81b80732e4b32d1191f544bdd1d48759 == cache_frame_81b80732e4b32d1191f544bdd1d48759 )
    {
        Py_DECREF( frame_81b80732e4b32d1191f544bdd1d48759 );
    }
    cache_frame_81b80732e4b32d1191f544bdd1d48759 = NULL;

    assertFrameObject( frame_81b80732e4b32d1191f544bdd1d48759 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_5_comports );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    CHECK_OBJECT( (PyObject *)var_devices );
    Py_DECREF( var_devices );
    var_devices = NULL;

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

    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    Py_XDECREF( var_devices );
    var_devices = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_5_comports );
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


static PyObject *impl_serial$tools$list_ports_posix$$$function_6_comports( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_include_links = python_pars[ 0 ];
    PyObject *var_devices = NULL;
    PyObject *outline_0_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_adcb2df86b1acd9fb1f70deb875c7467;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_a793c1ec1fbb9223ed222159a108ab87_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a793c1ec1fbb9223ed222159a108ab87_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_adcb2df86b1acd9fb1f70deb875c7467 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_adcb2df86b1acd9fb1f70deb875c7467, codeobj_adcb2df86b1acd9fb1f70deb875c7467, module_serial$tools$list_ports_posix, sizeof(void *)+sizeof(void *) );
    frame_adcb2df86b1acd9fb1f70deb875c7467 = cache_frame_adcb2df86b1acd9fb1f70deb875c7467;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_adcb2df86b1acd9fb1f70deb875c7467 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_adcb2df86b1acd9fb1f70deb875c7467 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "glob" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_adcb2df86b1acd9fb1f70deb875c7467->m_frame.f_lineno = 76;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_glob, &PyTuple_GET_ITEM( const_tuple_str_digest_76aad4bd7acf194276968dc8693bb5e4_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_devices == NULL );
        var_devices = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_include_links );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_include_links );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_devices );
            tmp_source_name_1 = var_devices;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 78;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_devices );
            tmp_args_element_name_2 = var_devices;
            frame_adcb2df86b1acd9fb1f70deb875c7467->m_frame.f_lineno = 78;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_list_links, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 78;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_adcb2df86b1acd9fb1f70deb875c7467->m_frame.f_lineno = 78;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_devices );
        tmp_iter_arg_1 = var_devices;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oo";
            goto try_except_handler_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_a793c1ec1fbb9223ed222159a108ab87_2, codeobj_a793c1ec1fbb9223ed222159a108ab87, module_serial$tools$list_ports_posix, sizeof(void *) );
    frame_a793c1ec1fbb9223ed222159a108ab87_2 = cache_frame_a793c1ec1fbb9223ed222159a108ab87_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a793c1ec1fbb9223ed222159a108ab87_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a793c1ec1fbb9223ed222159a108ab87_2 ) == 2 ); // Frame stack

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
                exception_lineno = 79;
                goto try_except_handler_3;
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
            PyObject *old = outline_0_var_d;
            outline_0_var_d = tmp_assign_source_5;
            Py_INCREF( outline_0_var_d );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 79;
            type_description_2 = "o";
            goto try_except_handler_3;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( outline_0_var_d );
        tmp_args_element_name_3 = outline_0_var_d;
        frame_a793c1ec1fbb9223ed222159a108ab87_2->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ListPortInfo, call_args );
        }

        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
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


            exception_lineno = 79;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_6_comports );
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
    RESTORE_FRAME_EXCEPTION( frame_a793c1ec1fbb9223ed222159a108ab87_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a793c1ec1fbb9223ed222159a108ab87_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a793c1ec1fbb9223ed222159a108ab87_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a793c1ec1fbb9223ed222159a108ab87_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a793c1ec1fbb9223ed222159a108ab87_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a793c1ec1fbb9223ed222159a108ab87_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a793c1ec1fbb9223ed222159a108ab87_2,
        type_description_2,
        outline_0_var_d
    );


    // Release cached frame.
    if ( frame_a793c1ec1fbb9223ed222159a108ab87_2 == cache_frame_a793c1ec1fbb9223ed222159a108ab87_2 )
    {
        Py_DECREF( frame_a793c1ec1fbb9223ed222159a108ab87_2 );
    }
    cache_frame_a793c1ec1fbb9223ed222159a108ab87_2 = NULL;

    assertFrameObject( frame_a793c1ec1fbb9223ed222159a108ab87_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_6_comports );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

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

    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_6_comports );
    return NULL;
    outline_exception_1:;
    exception_lineno = 79;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adcb2df86b1acd9fb1f70deb875c7467 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_adcb2df86b1acd9fb1f70deb875c7467 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adcb2df86b1acd9fb1f70deb875c7467 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_adcb2df86b1acd9fb1f70deb875c7467, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_adcb2df86b1acd9fb1f70deb875c7467->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_adcb2df86b1acd9fb1f70deb875c7467, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_adcb2df86b1acd9fb1f70deb875c7467,
        type_description_1,
        par_include_links,
        var_devices
    );


    // Release cached frame.
    if ( frame_adcb2df86b1acd9fb1f70deb875c7467 == cache_frame_adcb2df86b1acd9fb1f70deb875c7467 )
    {
        Py_DECREF( frame_adcb2df86b1acd9fb1f70deb875c7467 );
    }
    cache_frame_adcb2df86b1acd9fb1f70deb875c7467 = NULL;

    assertFrameObject( frame_adcb2df86b1acd9fb1f70deb875c7467 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_6_comports );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    CHECK_OBJECT( (PyObject *)var_devices );
    Py_DECREF( var_devices );
    var_devices = NULL;

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

    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    Py_XDECREF( var_devices );
    var_devices = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_6_comports );
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


static PyObject *impl_serial$tools$list_ports_posix$$$function_7_comports( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_include_links = python_pars[ 0 ];
    PyObject *var_devices = NULL;
    PyObject *outline_0_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_abd7c6b0b8d8c091fff2c614530c970d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_7bf1a2909c4402786d2e8dc27104e6ce_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_7bf1a2909c4402786d2e8dc27104e6ce_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_abd7c6b0b8d8c091fff2c614530c970d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_abd7c6b0b8d8c091fff2c614530c970d, codeobj_abd7c6b0b8d8c091fff2c614530c970d, module_serial$tools$list_ports_posix, sizeof(void *)+sizeof(void *) );
    frame_abd7c6b0b8d8c091fff2c614530c970d = cache_frame_abd7c6b0b8d8c091fff2c614530c970d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_abd7c6b0b8d8c091fff2c614530c970d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_abd7c6b0b8d8c091fff2c614530c970d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "glob" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_abd7c6b0b8d8c091fff2c614530c970d->m_frame.f_lineno = 84;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_glob, &PyTuple_GET_ITEM( const_tuple_str_digest_733b6dd03cbfb518cf03d92f549b829b_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_devices == NULL );
        var_devices = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_include_links );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_include_links );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_devices );
            tmp_source_name_1 = var_devices;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 86;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_devices );
            tmp_args_element_name_2 = var_devices;
            frame_abd7c6b0b8d8c091fff2c614530c970d->m_frame.f_lineno = 86;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_list_links, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 86;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_abd7c6b0b8d8c091fff2c614530c970d->m_frame.f_lineno = 86;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_devices );
        tmp_iter_arg_1 = var_devices;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oo";
            goto try_except_handler_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_7bf1a2909c4402786d2e8dc27104e6ce_2, codeobj_7bf1a2909c4402786d2e8dc27104e6ce, module_serial$tools$list_ports_posix, sizeof(void *) );
    frame_7bf1a2909c4402786d2e8dc27104e6ce_2 = cache_frame_7bf1a2909c4402786d2e8dc27104e6ce_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7bf1a2909c4402786d2e8dc27104e6ce_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7bf1a2909c4402786d2e8dc27104e6ce_2 ) == 2 ); // Frame stack

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
                exception_lineno = 87;
                goto try_except_handler_3;
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
            PyObject *old = outline_0_var_d;
            outline_0_var_d = tmp_assign_source_5;
            Py_INCREF( outline_0_var_d );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 87;
            type_description_2 = "o";
            goto try_except_handler_3;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( outline_0_var_d );
        tmp_args_element_name_3 = outline_0_var_d;
        frame_7bf1a2909c4402786d2e8dc27104e6ce_2->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ListPortInfo, call_args );
        }

        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
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


            exception_lineno = 87;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_7_comports );
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
    RESTORE_FRAME_EXCEPTION( frame_7bf1a2909c4402786d2e8dc27104e6ce_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bf1a2909c4402786d2e8dc27104e6ce_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bf1a2909c4402786d2e8dc27104e6ce_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7bf1a2909c4402786d2e8dc27104e6ce_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7bf1a2909c4402786d2e8dc27104e6ce_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7bf1a2909c4402786d2e8dc27104e6ce_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7bf1a2909c4402786d2e8dc27104e6ce_2,
        type_description_2,
        outline_0_var_d
    );


    // Release cached frame.
    if ( frame_7bf1a2909c4402786d2e8dc27104e6ce_2 == cache_frame_7bf1a2909c4402786d2e8dc27104e6ce_2 )
    {
        Py_DECREF( frame_7bf1a2909c4402786d2e8dc27104e6ce_2 );
    }
    cache_frame_7bf1a2909c4402786d2e8dc27104e6ce_2 = NULL;

    assertFrameObject( frame_7bf1a2909c4402786d2e8dc27104e6ce_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_7_comports );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

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

    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_7_comports );
    return NULL;
    outline_exception_1:;
    exception_lineno = 87;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abd7c6b0b8d8c091fff2c614530c970d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_abd7c6b0b8d8c091fff2c614530c970d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abd7c6b0b8d8c091fff2c614530c970d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_abd7c6b0b8d8c091fff2c614530c970d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_abd7c6b0b8d8c091fff2c614530c970d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_abd7c6b0b8d8c091fff2c614530c970d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_abd7c6b0b8d8c091fff2c614530c970d,
        type_description_1,
        par_include_links,
        var_devices
    );


    // Release cached frame.
    if ( frame_abd7c6b0b8d8c091fff2c614530c970d == cache_frame_abd7c6b0b8d8c091fff2c614530c970d )
    {
        Py_DECREF( frame_abd7c6b0b8d8c091fff2c614530c970d );
    }
    cache_frame_abd7c6b0b8d8c091fff2c614530c970d = NULL;

    assertFrameObject( frame_abd7c6b0b8d8c091fff2c614530c970d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_7_comports );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    CHECK_OBJECT( (PyObject *)var_devices );
    Py_DECREF( var_devices );
    var_devices = NULL;

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

    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    Py_XDECREF( var_devices );
    var_devices = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_7_comports );
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


static PyObject *impl_serial$tools$list_ports_posix$$$function_8_comports( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_include_links = python_pars[ 0 ];
    PyObject *var_devices = NULL;
    PyObject *outline_0_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4304d6d9a01fd7a695d30b3eb92e86d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_fadb86f83ce425512c37969031350363_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_fadb86f83ce425512c37969031350363_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_4304d6d9a01fd7a695d30b3eb92e86d5 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4304d6d9a01fd7a695d30b3eb92e86d5, codeobj_4304d6d9a01fd7a695d30b3eb92e86d5, module_serial$tools$list_ports_posix, sizeof(void *)+sizeof(void *) );
    frame_4304d6d9a01fd7a695d30b3eb92e86d5 = cache_frame_4304d6d9a01fd7a695d30b3eb92e86d5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4304d6d9a01fd7a695d30b3eb92e86d5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4304d6d9a01fd7a695d30b3eb92e86d5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "glob" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_4304d6d9a01fd7a695d30b3eb92e86d5->m_frame.f_lineno = 92;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_glob, &PyTuple_GET_ITEM( const_tuple_str_digest_1f028782a1940c5f518d5e74a79732c7_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_devices == NULL );
        var_devices = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_include_links );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_include_links );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_devices );
            tmp_source_name_1 = var_devices;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 94;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_devices );
            tmp_args_element_name_2 = var_devices;
            frame_4304d6d9a01fd7a695d30b3eb92e86d5->m_frame.f_lineno = 94;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_list_links, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 94;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_4304d6d9a01fd7a695d30b3eb92e86d5->m_frame.f_lineno = 94;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_devices );
        tmp_iter_arg_1 = var_devices;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oo";
            goto try_except_handler_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_fadb86f83ce425512c37969031350363_2, codeobj_fadb86f83ce425512c37969031350363, module_serial$tools$list_ports_posix, sizeof(void *) );
    frame_fadb86f83ce425512c37969031350363_2 = cache_frame_fadb86f83ce425512c37969031350363_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fadb86f83ce425512c37969031350363_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fadb86f83ce425512c37969031350363_2 ) == 2 ); // Frame stack

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
                exception_lineno = 95;
                goto try_except_handler_3;
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
            PyObject *old = outline_0_var_d;
            outline_0_var_d = tmp_assign_source_5;
            Py_INCREF( outline_0_var_d );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;
            type_description_2 = "o";
            goto try_except_handler_3;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( outline_0_var_d );
        tmp_args_element_name_3 = outline_0_var_d;
        frame_fadb86f83ce425512c37969031350363_2->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ListPortInfo, call_args );
        }

        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
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


            exception_lineno = 95;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_8_comports );
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
    RESTORE_FRAME_EXCEPTION( frame_fadb86f83ce425512c37969031350363_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fadb86f83ce425512c37969031350363_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fadb86f83ce425512c37969031350363_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fadb86f83ce425512c37969031350363_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fadb86f83ce425512c37969031350363_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fadb86f83ce425512c37969031350363_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fadb86f83ce425512c37969031350363_2,
        type_description_2,
        outline_0_var_d
    );


    // Release cached frame.
    if ( frame_fadb86f83ce425512c37969031350363_2 == cache_frame_fadb86f83ce425512c37969031350363_2 )
    {
        Py_DECREF( frame_fadb86f83ce425512c37969031350363_2 );
    }
    cache_frame_fadb86f83ce425512c37969031350363_2 = NULL;

    assertFrameObject( frame_fadb86f83ce425512c37969031350363_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_8_comports );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

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

    Py_XDECREF( outline_0_var_d );
    outline_0_var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_8_comports );
    return NULL;
    outline_exception_1:;
    exception_lineno = 95;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4304d6d9a01fd7a695d30b3eb92e86d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4304d6d9a01fd7a695d30b3eb92e86d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4304d6d9a01fd7a695d30b3eb92e86d5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4304d6d9a01fd7a695d30b3eb92e86d5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4304d6d9a01fd7a695d30b3eb92e86d5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4304d6d9a01fd7a695d30b3eb92e86d5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4304d6d9a01fd7a695d30b3eb92e86d5,
        type_description_1,
        par_include_links,
        var_devices
    );


    // Release cached frame.
    if ( frame_4304d6d9a01fd7a695d30b3eb92e86d5 == cache_frame_4304d6d9a01fd7a695d30b3eb92e86d5 )
    {
        Py_DECREF( frame_4304d6d9a01fd7a695d30b3eb92e86d5 );
    }
    cache_frame_4304d6d9a01fd7a695d30b3eb92e86d5 = NULL;

    assertFrameObject( frame_4304d6d9a01fd7a695d30b3eb92e86d5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_8_comports );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    CHECK_OBJECT( (PyObject *)var_devices );
    Py_DECREF( var_devices );
    var_devices = NULL;

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

    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    Py_XDECREF( var_devices );
    var_devices = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_posix$$$function_8_comports );
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



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_1_comports( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_posix$$$function_1_comports,
        const_str_plain_comports,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3d5db857d1a58ece456c645c3e0e4e51,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_posix,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_2_comports( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_posix$$$function_2_comports,
        const_str_plain_comports,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e699d62837c4e24962a44902089d1414,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_posix,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_3_comports( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_posix$$$function_3_comports,
        const_str_plain_comports,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cd2f2f7488eb186e12dfc4a3bad70fd6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_posix,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_4_comports( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_posix$$$function_4_comports,
        const_str_plain_comports,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_171a84ccc9c1dcd0931c2f70c5ab41fb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_76a14c73d5ce25b5e3d5362a82a952f0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_5_comports( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_posix$$$function_5_comports,
        const_str_plain_comports,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_81b80732e4b32d1191f544bdd1d48759,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_76a14c73d5ce25b5e3d5362a82a952f0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_6_comports( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_posix$$$function_6_comports,
        const_str_plain_comports,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_adcb2df86b1acd9fb1f70deb875c7467,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_76a14c73d5ce25b5e3d5362a82a952f0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_7_comports( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_posix$$$function_7_comports,
        const_str_plain_comports,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_abd7c6b0b8d8c091fff2c614530c970d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_76a14c73d5ce25b5e3d5362a82a952f0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_8_comports( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_posix$$$function_8_comports,
        const_str_plain_comports,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4304d6d9a01fd7a695d30b3eb92e86d5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_76a14c73d5ce25b5e3d5362a82a952f0,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$tools$list_ports_posix =
{
    PyModuleDef_HEAD_INIT,
    "serial.tools.list_ports_posix",
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

MOD_INIT_DECL( serial$tools$list_ports_posix )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$tools$list_ports_posix );
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
    puts("serial.tools.list_ports_posix: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.tools.list_ports_posix: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.tools.list_ports_posix: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserial$tools$list_ports_posix" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$tools$list_ports_posix = Py_InitModule4(
        "serial.tools.list_ports_posix",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_serial$tools$list_ports_posix = PyModule_Create( &mdef_serial$tools$list_ports_posix );
#endif

    moduledict_serial$tools$list_ports_posix = MODULE_DICT( module_serial$tools$list_ports_posix );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_serial$tools$list_ports_posix,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_serial$tools$list_ports_posix,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_serial$tools$list_ports_posix,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_serial$tools$list_ports_posix,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_serial$tools$list_ports_posix );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_74372215f5519ff8756ee03eda5d95ea, module_serial$tools$list_ports_posix );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_df5da72b8e1a2f46b38055613277d5c2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_72e1a7d9aa9f26469ed8a3c27cab74fd;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_df5da72b8e1a2f46b38055613277d5c2 = MAKE_MODULE_FRAME( codeobj_df5da72b8e1a2f46b38055613277d5c2, module_serial$tools$list_ports_posix );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_df5da72b8e1a2f46b38055613277d5c2 );
    assert( Py_REFCNT( frame_df5da72b8e1a2f46b38055613277d5c2 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_glob;
        tmp_globals_name_1 = (PyObject *)moduledict_serial$tools$list_ports_posix;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_df5da72b8e1a2f46b38055613277d5c2->m_frame.f_lineno = 19;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_serial$tools$list_ports_posix;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_df5da72b8e1a2f46b38055613277d5c2->m_frame.f_lineno = 20;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_os;
        tmp_globals_name_3 = (PyObject *)moduledict_serial$tools$list_ports_posix;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_df5da72b8e1a2f46b38055613277d5c2->m_frame.f_lineno = 21;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_2a9b9e88acca55347e5ef4ae4b4dfd80;
        tmp_globals_name_4 = (PyObject *)moduledict_serial$tools$list_ports_posix;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_list_ports_common_tuple;
        tmp_level_name_4 = const_int_0;
        frame_df5da72b8e1a2f46b38055613277d5c2->m_frame.f_lineno = 22;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_list_ports_common );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_list_ports_common, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_sys );

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

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_platform );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        frame_df5da72b8e1a2f46b38055613277d5c2->m_frame.f_lineno = 25;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat, tmp_assign_source_8 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_subscribed_name_1 = tmp_mvar_value_4;
        tmp_subscript_name_1 = const_slice_none_int_pos_5_none;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_linux;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

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
            PyObject *tmp_assign_source_9;
            PyObject *tmp_import_name_from_2;
            PyObject *tmp_name_name_5;
            PyObject *tmp_globals_name_5;
            PyObject *tmp_locals_name_5;
            PyObject *tmp_fromlist_name_5;
            PyObject *tmp_level_name_5;
            tmp_name_name_5 = const_str_digest_2f35a414b84420362cdb81f3d8e8aedb;
            tmp_globals_name_5 = (PyObject *)moduledict_serial$tools$list_ports_posix;
            tmp_locals_name_5 = Py_None;
            tmp_fromlist_name_5 = const_tuple_str_plain_comports_tuple;
            tmp_level_name_5 = const_int_0;
            frame_df5da72b8e1a2f46b38055613277d5c2->m_frame.f_lineno = 28;
            tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
            if ( tmp_import_name_from_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_comports );
            Py_DECREF( tmp_import_name_from_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_9 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "plat" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 30;

                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_2 = tmp_mvar_value_5;
            tmp_subscript_name_2 = const_slice_none_int_pos_6_none;
            tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;

                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_str_plain_darwin;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;

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
                PyObject *tmp_assign_source_10;
                PyObject *tmp_import_name_from_3;
                PyObject *tmp_name_name_6;
                PyObject *tmp_globals_name_6;
                PyObject *tmp_locals_name_6;
                PyObject *tmp_fromlist_name_6;
                PyObject *tmp_level_name_6;
                tmp_name_name_6 = const_str_digest_158aa7b7259bce694fd44ae6ee91d02b;
                tmp_globals_name_6 = (PyObject *)moduledict_serial$tools$list_ports_posix;
                tmp_locals_name_6 = Py_None;
                tmp_fromlist_name_6 = const_tuple_str_plain_comports_tuple;
                tmp_level_name_6 = const_int_0;
                frame_df5da72b8e1a2f46b38055613277d5c2->m_frame.f_lineno = 31;
                tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
                if ( tmp_import_name_from_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 31;

                    goto frame_exception_exit_1;
                }
                tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_comports );
                Py_DECREF( tmp_import_name_from_3 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 31;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_10 );
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_mvar_value_6;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "plat" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 33;

                    goto frame_exception_exit_1;
                }

                tmp_compexpr_left_3 = tmp_mvar_value_6;
                tmp_compexpr_right_3 = const_str_plain_cygwin;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 33;

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
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_defaults_1;
                    tmp_defaults_1 = const_tuple_false_tuple;
                    Py_INCREF( tmp_defaults_1 );
                    tmp_assign_source_11 = MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_1_comports( tmp_defaults_1 );



                    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_11 );
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_subscribed_name_3;
                    PyObject *tmp_mvar_value_7;
                    PyObject *tmp_subscript_name_3;
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

                    if (unlikely( tmp_mvar_value_7 == NULL ))
                    {
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
                    }

                    if ( tmp_mvar_value_7 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "plat" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 43;

                        goto frame_exception_exit_1;
                    }

                    tmp_subscribed_name_3 = tmp_mvar_value_7;
                    tmp_subscript_name_3 = const_slice_none_int_pos_7_none;
                    tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                    if ( tmp_compexpr_left_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 43;

                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_4 = const_str_plain_openbsd;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    Py_DECREF( tmp_compexpr_left_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 43;

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
                        PyObject *tmp_assign_source_12;
                        PyObject *tmp_defaults_2;
                        tmp_defaults_2 = const_tuple_false_tuple;
                        Py_INCREF( tmp_defaults_2 );
                        tmp_assign_source_12 = MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_2_comports( tmp_defaults_2 );



                        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_12 );
                    }
                    goto branch_end_4;
                    branch_no_4:;
                    {
                        nuitka_bool tmp_condition_result_5;
                        int tmp_or_left_truth_1;
                        nuitka_bool tmp_or_left_value_1;
                        nuitka_bool tmp_or_right_value_1;
                        PyObject *tmp_compexpr_left_5;
                        PyObject *tmp_compexpr_right_5;
                        PyObject *tmp_subscribed_name_4;
                        PyObject *tmp_mvar_value_8;
                        PyObject *tmp_subscript_name_4;
                        PyObject *tmp_compexpr_left_6;
                        PyObject *tmp_compexpr_right_6;
                        PyObject *tmp_subscribed_name_5;
                        PyObject *tmp_mvar_value_9;
                        PyObject *tmp_subscript_name_5;
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

                        if (unlikely( tmp_mvar_value_8 == NULL ))
                        {
                            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
                        }

                        if ( tmp_mvar_value_8 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "plat" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 50;

                            goto frame_exception_exit_1;
                        }

                        tmp_subscribed_name_4 = tmp_mvar_value_8;
                        tmp_subscript_name_4 = const_slice_none_int_pos_3_none;
                        tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                        if ( tmp_compexpr_left_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 50;

                            goto frame_exception_exit_1;
                        }
                        tmp_compexpr_right_5 = const_str_plain_bsd;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                        Py_DECREF( tmp_compexpr_left_5 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 50;

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
                        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

                        if (unlikely( tmp_mvar_value_9 == NULL ))
                        {
                            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
                        }

                        if ( tmp_mvar_value_9 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "plat" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 50;

                            goto frame_exception_exit_1;
                        }

                        tmp_subscribed_name_5 = tmp_mvar_value_9;
                        tmp_subscript_name_5 = const_slice_none_int_pos_7_none;
                        tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                        if ( tmp_compexpr_left_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 50;

                            goto frame_exception_exit_1;
                        }
                        tmp_compexpr_right_6 = const_str_plain_freebsd;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                        Py_DECREF( tmp_compexpr_left_6 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 50;

                            goto frame_exception_exit_1;
                        }
                        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        tmp_condition_result_5 = tmp_or_right_value_1;
                        goto or_end_1;
                        or_left_1:;
                        tmp_condition_result_5 = tmp_or_left_value_1;
                        or_end_1:;
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
                            PyObject *tmp_assign_source_13;
                            PyObject *tmp_defaults_3;
                            tmp_defaults_3 = const_tuple_false_tuple;
                            Py_INCREF( tmp_defaults_3 );
                            tmp_assign_source_13 = MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_3_comports( tmp_defaults_3 );



                            UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_13 );
                        }
                        goto branch_end_5;
                        branch_no_5:;
                        {
                            nuitka_bool tmp_condition_result_6;
                            PyObject *tmp_compexpr_left_7;
                            PyObject *tmp_compexpr_right_7;
                            PyObject *tmp_subscribed_name_6;
                            PyObject *tmp_mvar_value_10;
                            PyObject *tmp_subscript_name_6;
                            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

                            if (unlikely( tmp_mvar_value_10 == NULL ))
                            {
                                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
                            }

                            if ( tmp_mvar_value_10 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "plat" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 57;

                                goto frame_exception_exit_1;
                            }

                            tmp_subscribed_name_6 = tmp_mvar_value_10;
                            tmp_subscript_name_6 = const_slice_none_int_pos_6_none;
                            tmp_compexpr_left_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                            if ( tmp_compexpr_left_7 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 57;

                                goto frame_exception_exit_1;
                            }
                            tmp_compexpr_right_7 = const_str_plain_netbsd;
                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                            Py_DECREF( tmp_compexpr_left_7 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 57;

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
                                PyObject *tmp_assign_source_14;
                                PyObject *tmp_defaults_4;
                                tmp_defaults_4 = const_tuple_false_tuple;
                                Py_INCREF( tmp_defaults_4 );
                                tmp_assign_source_14 = MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_4_comports( tmp_defaults_4 );



                                UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_14 );
                            }
                            goto branch_end_6;
                            branch_no_6:;
                            {
                                nuitka_bool tmp_condition_result_7;
                                PyObject *tmp_compexpr_left_8;
                                PyObject *tmp_compexpr_right_8;
                                PyObject *tmp_subscribed_name_7;
                                PyObject *tmp_mvar_value_11;
                                PyObject *tmp_subscript_name_7;
                                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

                                if (unlikely( tmp_mvar_value_11 == NULL ))
                                {
                                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
                                }

                                if ( tmp_mvar_value_11 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "plat" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 65;

                                    goto frame_exception_exit_1;
                                }

                                tmp_subscribed_name_7 = tmp_mvar_value_11;
                                tmp_subscript_name_7 = const_slice_none_int_pos_4_none;
                                tmp_compexpr_left_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                                if ( tmp_compexpr_left_8 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 65;

                                    goto frame_exception_exit_1;
                                }
                                tmp_compexpr_right_8 = const_str_plain_irix;
                                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                                Py_DECREF( tmp_compexpr_left_8 );
                                if ( tmp_res == -1 )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 65;

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
                                    PyObject *tmp_assign_source_15;
                                    PyObject *tmp_defaults_5;
                                    tmp_defaults_5 = const_tuple_false_tuple;
                                    Py_INCREF( tmp_defaults_5 );
                                    tmp_assign_source_15 = MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_5_comports( tmp_defaults_5 );



                                    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_15 );
                                }
                                goto branch_end_7;
                                branch_no_7:;
                                {
                                    nuitka_bool tmp_condition_result_8;
                                    PyObject *tmp_compexpr_left_9;
                                    PyObject *tmp_compexpr_right_9;
                                    PyObject *tmp_subscribed_name_8;
                                    PyObject *tmp_mvar_value_12;
                                    PyObject *tmp_subscript_name_8;
                                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

                                    if (unlikely( tmp_mvar_value_12 == NULL ))
                                    {
                                        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
                                    }

                                    if ( tmp_mvar_value_12 == NULL )
                                    {

                                        exception_type = PyExc_NameError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "plat" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 73;

                                        goto frame_exception_exit_1;
                                    }

                                    tmp_subscribed_name_8 = tmp_mvar_value_12;
                                    tmp_subscript_name_8 = const_slice_none_int_pos_2_none;
                                    tmp_compexpr_left_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
                                    if ( tmp_compexpr_left_9 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 73;

                                        goto frame_exception_exit_1;
                                    }
                                    tmp_compexpr_right_9 = const_str_plain_hp;
                                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                                    Py_DECREF( tmp_compexpr_left_9 );
                                    if ( tmp_res == -1 )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 73;

                                        goto frame_exception_exit_1;
                                    }
                                    tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                                        PyObject *tmp_assign_source_16;
                                        PyObject *tmp_defaults_6;
                                        tmp_defaults_6 = const_tuple_false_tuple;
                                        Py_INCREF( tmp_defaults_6 );
                                        tmp_assign_source_16 = MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_6_comports( tmp_defaults_6 );



                                        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_16 );
                                    }
                                    goto branch_end_8;
                                    branch_no_8:;
                                    {
                                        nuitka_bool tmp_condition_result_9;
                                        PyObject *tmp_compexpr_left_10;
                                        PyObject *tmp_compexpr_right_10;
                                        PyObject *tmp_subscribed_name_9;
                                        PyObject *tmp_mvar_value_13;
                                        PyObject *tmp_subscript_name_9;
                                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

                                        if (unlikely( tmp_mvar_value_13 == NULL ))
                                        {
                                            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
                                        }

                                        if ( tmp_mvar_value_13 == NULL )
                                        {

                                            exception_type = PyExc_NameError;
                                            Py_INCREF( exception_type );
                                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "plat" );
                                            exception_tb = NULL;
                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                            CHAIN_EXCEPTION( exception_value );

                                            exception_lineno = 81;

                                            goto frame_exception_exit_1;
                                        }

                                        tmp_subscribed_name_9 = tmp_mvar_value_13;
                                        tmp_subscript_name_9 = const_slice_none_int_pos_5_none;
                                        tmp_compexpr_left_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
                                        if ( tmp_compexpr_left_10 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 81;

                                            goto frame_exception_exit_1;
                                        }
                                        tmp_compexpr_right_10 = const_str_plain_sunos;
                                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                                        Py_DECREF( tmp_compexpr_left_10 );
                                        if ( tmp_res == -1 )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 81;

                                            goto frame_exception_exit_1;
                                        }
                                        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                                            PyObject *tmp_assign_source_17;
                                            PyObject *tmp_defaults_7;
                                            tmp_defaults_7 = const_tuple_false_tuple;
                                            Py_INCREF( tmp_defaults_7 );
                                            tmp_assign_source_17 = MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_7_comports( tmp_defaults_7 );



                                            UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_17 );
                                        }
                                        goto branch_end_9;
                                        branch_no_9:;
                                        {
                                            nuitka_bool tmp_condition_result_10;
                                            PyObject *tmp_compexpr_left_11;
                                            PyObject *tmp_compexpr_right_11;
                                            PyObject *tmp_subscribed_name_10;
                                            PyObject *tmp_mvar_value_14;
                                            PyObject *tmp_subscript_name_10;
                                            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

                                            if (unlikely( tmp_mvar_value_14 == NULL ))
                                            {
                                                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
                                            }

                                            if ( tmp_mvar_value_14 == NULL )
                                            {

                                                exception_type = PyExc_NameError;
                                                Py_INCREF( exception_type );
                                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "plat" );
                                                exception_tb = NULL;
                                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                CHAIN_EXCEPTION( exception_value );

                                                exception_lineno = 89;

                                                goto frame_exception_exit_1;
                                            }

                                            tmp_subscribed_name_10 = tmp_mvar_value_14;
                                            tmp_subscript_name_10 = const_slice_none_int_pos_3_none;
                                            tmp_compexpr_left_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
                                            if ( tmp_compexpr_left_11 == NULL )
                                            {
                                                assert( ERROR_OCCURRED() );

                                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                exception_lineno = 89;

                                                goto frame_exception_exit_1;
                                            }
                                            tmp_compexpr_right_11 = const_str_plain_aix;
                                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_11, tmp_compexpr_right_11 );
                                            Py_DECREF( tmp_compexpr_left_11 );
                                            if ( tmp_res == -1 )
                                            {
                                                assert( ERROR_OCCURRED() );

                                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                exception_lineno = 89;

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
                                                PyObject *tmp_assign_source_18;
                                                PyObject *tmp_defaults_8;
                                                tmp_defaults_8 = const_tuple_false_tuple;
                                                Py_INCREF( tmp_defaults_8 );
                                                tmp_assign_source_18 = MAKE_FUNCTION_serial$tools$list_ports_posix$$$function_8_comports( tmp_defaults_8 );



                                                UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_18 );
                                            }
                                            goto branch_end_10;
                                            branch_no_10:;
                                            {
                                                PyObject *tmp_assign_source_19;
                                                PyObject *tmp_name_name_7;
                                                PyObject *tmp_globals_name_7;
                                                PyObject *tmp_locals_name_7;
                                                PyObject *tmp_fromlist_name_7;
                                                PyObject *tmp_level_name_7;
                                                tmp_name_name_7 = const_str_plain_serial;
                                                tmp_globals_name_7 = (PyObject *)moduledict_serial$tools$list_ports_posix;
                                                tmp_locals_name_7 = Py_None;
                                                tmp_fromlist_name_7 = Py_None;
                                                tmp_level_name_7 = const_int_0;
                                                frame_df5da72b8e1a2f46b38055613277d5c2->m_frame.f_lineno = 99;
                                                tmp_assign_source_19 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
                                                if ( tmp_assign_source_19 == NULL )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                    exception_lineno = 99;

                                                    goto frame_exception_exit_1;
                                                }
                                                UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_serial, tmp_assign_source_19 );
                                            }
                                            {
                                                PyObject *tmp_called_name_1;
                                                PyObject *tmp_source_name_2;
                                                PyObject *tmp_source_name_3;
                                                PyObject *tmp_mvar_value_15;
                                                PyObject *tmp_call_result_1;
                                                PyObject *tmp_args_element_name_1;
                                                PyObject *tmp_called_name_2;
                                                PyObject *tmp_source_name_4;
                                                PyObject *tmp_args_element_name_2;
                                                PyObject *tmp_source_name_5;
                                                PyObject *tmp_mvar_value_16;
                                                PyObject *tmp_args_element_name_3;
                                                PyObject *tmp_source_name_6;
                                                PyObject *tmp_mvar_value_17;
                                                PyObject *tmp_args_element_name_4;
                                                PyObject *tmp_source_name_7;
                                                PyObject *tmp_mvar_value_18;
                                                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_sys );

                                                if (unlikely( tmp_mvar_value_15 == NULL ))
                                                {
                                                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
                                                }

                                                if ( tmp_mvar_value_15 == NULL )
                                                {

                                                    exception_type = PyExc_NameError;
                                                    Py_INCREF( exception_type );
                                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                                                    exception_tb = NULL;
                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                    CHAIN_EXCEPTION( exception_value );

                                                    exception_lineno = 100;

                                                    goto frame_exception_exit_1;
                                                }

                                                tmp_source_name_3 = tmp_mvar_value_15;
                                                tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_stderr );
                                                if ( tmp_source_name_2 == NULL )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                    exception_lineno = 100;

                                                    goto frame_exception_exit_1;
                                                }
                                                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_write );
                                                Py_DECREF( tmp_source_name_2 );
                                                if ( tmp_called_name_1 == NULL )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                    exception_lineno = 100;

                                                    goto frame_exception_exit_1;
                                                }
                                                tmp_source_name_4 = const_str_digest_7dfb605e9e3ae06edd8ffb7dd8657e16;
                                                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_format );
                                                assert( !(tmp_called_name_2 == NULL) );
                                                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_sys );

                                                if (unlikely( tmp_mvar_value_16 == NULL ))
                                                {
                                                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
                                                }

                                                if ( tmp_mvar_value_16 == NULL )
                                                {
                                                    Py_DECREF( tmp_called_name_1 );
                                                    Py_DECREF( tmp_called_name_2 );
                                                    exception_type = PyExc_NameError;
                                                    Py_INCREF( exception_type );
                                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                                                    exception_tb = NULL;
                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                    CHAIN_EXCEPTION( exception_value );

                                                    exception_lineno = 111;

                                                    goto frame_exception_exit_1;
                                                }

                                                tmp_source_name_5 = tmp_mvar_value_16;
                                                tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_platform );
                                                if ( tmp_args_element_name_2 == NULL )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                                    Py_DECREF( tmp_called_name_1 );
                                                    Py_DECREF( tmp_called_name_2 );

                                                    exception_lineno = 111;

                                                    goto frame_exception_exit_1;
                                                }
                                                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

                                                if (unlikely( tmp_mvar_value_17 == NULL ))
                                                {
                                                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                                                }

                                                if ( tmp_mvar_value_17 == NULL )
                                                {
                                                    Py_DECREF( tmp_called_name_1 );
                                                    Py_DECREF( tmp_called_name_2 );
                                                    Py_DECREF( tmp_args_element_name_2 );
                                                    exception_type = PyExc_NameError;
                                                    Py_INCREF( exception_type );
                                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                                                    exception_tb = NULL;
                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                    CHAIN_EXCEPTION( exception_value );

                                                    exception_lineno = 111;

                                                    goto frame_exception_exit_1;
                                                }

                                                tmp_source_name_6 = tmp_mvar_value_17;
                                                tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_name );
                                                if ( tmp_args_element_name_3 == NULL )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                                    Py_DECREF( tmp_called_name_1 );
                                                    Py_DECREF( tmp_called_name_2 );
                                                    Py_DECREF( tmp_args_element_name_2 );

                                                    exception_lineno = 111;

                                                    goto frame_exception_exit_1;
                                                }
                                                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_serial );

                                                if (unlikely( tmp_mvar_value_18 == NULL ))
                                                {
                                                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
                                                }

                                                if ( tmp_mvar_value_18 == NULL )
                                                {
                                                    Py_DECREF( tmp_called_name_1 );
                                                    Py_DECREF( tmp_called_name_2 );
                                                    Py_DECREF( tmp_args_element_name_2 );
                                                    Py_DECREF( tmp_args_element_name_3 );
                                                    exception_type = PyExc_NameError;
                                                    Py_INCREF( exception_type );
                                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
                                                    exception_tb = NULL;
                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                    CHAIN_EXCEPTION( exception_value );

                                                    exception_lineno = 111;

                                                    goto frame_exception_exit_1;
                                                }

                                                tmp_source_name_7 = tmp_mvar_value_18;
                                                tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_VERSION );
                                                if ( tmp_args_element_name_4 == NULL )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                                    Py_DECREF( tmp_called_name_1 );
                                                    Py_DECREF( tmp_called_name_2 );
                                                    Py_DECREF( tmp_args_element_name_2 );
                                                    Py_DECREF( tmp_args_element_name_3 );

                                                    exception_lineno = 111;

                                                    goto frame_exception_exit_1;
                                                }
                                                frame_df5da72b8e1a2f46b38055613277d5c2->m_frame.f_lineno = 111;
                                                {
                                                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                                                    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
                                                }

                                                Py_DECREF( tmp_called_name_2 );
                                                Py_DECREF( tmp_args_element_name_2 );
                                                Py_DECREF( tmp_args_element_name_3 );
                                                Py_DECREF( tmp_args_element_name_4 );
                                                if ( tmp_args_element_name_1 == NULL )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                                    Py_DECREF( tmp_called_name_1 );

                                                    exception_lineno = 111;

                                                    goto frame_exception_exit_1;
                                                }
                                                frame_df5da72b8e1a2f46b38055613277d5c2->m_frame.f_lineno = 100;
                                                {
                                                    PyObject *call_args[] = { tmp_args_element_name_1 };
                                                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                                                }

                                                Py_DECREF( tmp_called_name_1 );
                                                Py_DECREF( tmp_args_element_name_1 );
                                                if ( tmp_call_result_1 == NULL )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                    exception_lineno = 100;

                                                    goto frame_exception_exit_1;
                                                }
                                                Py_DECREF( tmp_call_result_1 );
                                            }
                                            {
                                                PyObject *tmp_raise_type_1;
                                                PyObject *tmp_make_exception_arg_1;
                                                PyObject *tmp_called_name_3;
                                                PyObject *tmp_source_name_8;
                                                PyObject *tmp_args_element_name_5;
                                                PyObject *tmp_source_name_9;
                                                PyObject *tmp_mvar_value_19;
                                                tmp_source_name_8 = const_str_digest_26b4054632d3988ebc1074dfd77ea34a;
                                                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_format );
                                                assert( !(tmp_called_name_3 == NULL) );
                                                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

                                                if (unlikely( tmp_mvar_value_19 == NULL ))
                                                {
                                                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                                                }

                                                if ( tmp_mvar_value_19 == NULL )
                                                {
                                                    Py_DECREF( tmp_called_name_3 );
                                                    exception_type = PyExc_NameError;
                                                    Py_INCREF( exception_type );
                                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                                                    exception_tb = NULL;
                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                    CHAIN_EXCEPTION( exception_value );

                                                    exception_lineno = 112;

                                                    goto frame_exception_exit_1;
                                                }

                                                tmp_source_name_9 = tmp_mvar_value_19;
                                                tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_name );
                                                if ( tmp_args_element_name_5 == NULL )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                                    Py_DECREF( tmp_called_name_3 );

                                                    exception_lineno = 112;

                                                    goto frame_exception_exit_1;
                                                }
                                                frame_df5da72b8e1a2f46b38055613277d5c2->m_frame.f_lineno = 112;
                                                {
                                                    PyObject *call_args[] = { tmp_args_element_name_5 };
                                                    tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                                                }

                                                Py_DECREF( tmp_called_name_3 );
                                                Py_DECREF( tmp_args_element_name_5 );
                                                if ( tmp_make_exception_arg_1 == NULL )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                    exception_lineno = 112;

                                                    goto frame_exception_exit_1;
                                                }
                                                frame_df5da72b8e1a2f46b38055613277d5c2->m_frame.f_lineno = 112;
                                                {
                                                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                                                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, call_args );
                                                }

                                                Py_DECREF( tmp_make_exception_arg_1 );
                                                assert( !(tmp_raise_type_1 == NULL) );
                                                exception_type = tmp_raise_type_1;
                                                exception_lineno = 112;
                                                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

                                                goto frame_exception_exit_1;
                                            }
                                            branch_end_10:;
                                        }
                                        branch_end_9:;
                                    }
                                    branch_end_8:;
                                }
                                branch_end_7:;
                            }
                            branch_end_6:;
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_df5da72b8e1a2f46b38055613277d5c2 );
#endif
    popFrameStack();

    assertFrameObject( frame_df5da72b8e1a2f46b38055613277d5c2 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_df5da72b8e1a2f46b38055613277d5c2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_df5da72b8e1a2f46b38055613277d5c2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_df5da72b8e1a2f46b38055613277d5c2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_df5da72b8e1a2f46b38055613277d5c2, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_serial$tools$list_ports_posix );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
