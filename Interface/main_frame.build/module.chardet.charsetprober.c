/* Generated code for Python module 'chardet.charsetprober'
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

/* The "_module_chardet$charsetprober" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$charsetprober;
PyDictObject *moduledict_chardet$charsetprober;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_isalpha;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_lang_filter_tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e;
static PyObject *const_tuple_str_plain_buf_tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_5750e5d38f91740e3dfa72c2f8aea9ca;
static PyObject *const_str_digest_d3adad97b2e012729b196682491f28f6;
static PyObject *const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_enums;
extern PyObject *const_bytes_chr_62;
extern PyObject *const_str_plain_sub;
extern PyObject *const_str_plain_filter_high_byte_only;
extern PyObject *const_str_plain_staticmethod;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_get_confidence;
static PyObject *const_str_digest_3f2cd01d68aea2af9a8754bded3275a2;
extern PyObject *const_tuple_str_plain_self_str_plain_buf_tuple;
extern PyObject *const_str_plain_DETECTING;
static PyObject *const_str_digest_107260837257a24dd33ded2c68b97b85;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
static PyObject *const_bytes_chr_128;
extern PyObject *const_str_plain_extend;
extern PyObject *const_float_0_95;
static PyObject *const_tuple_str_digest_ac7ef1983d08896f64f0a36d2144c0a1_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_lang_filter;
static PyObject *const_str_plain_filtered;
static PyObject *const_str_digest_70ca23c973c1a0de004c414967a80408;
static PyObject *const_str_plain_last_char;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_filter_with_english_letters;
static PyObject *const_str_digest_40c7f3390d5eadc8b2a301a24554493c;
extern PyObject *const_slice_int_neg_1_none_none;
static PyObject *const_bytes_digest_857f6e4ae06e44e10e00b0636ed9e207;
static PyObject *const_tuple_str_plain_CharSetProber_tuple_type_object_tuple_tuple;
static PyObject *const_tuple_bytes_chr_32_tuple;
static PyObject *const_str_plain_in_tag;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_tuple_str_plain_ProbingState_tuple;
extern PyObject *const_str_plain_buf;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ProbingState;
static PyObject *const_str_digest_4ae3f27cfecb11378d7a141dcab11fb0;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_70860d60d1c19777c3acac2081cae1e7;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_9688abd04bb43b8a7c1d48e86da4b0a2;
extern PyObject *const_str_plain_prev;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_word;
static PyObject *const_str_plain_buf_char;
extern PyObject *const_bytes_chr_60;
extern PyObject *const_str_plain_SHORTCUT_THRESHOLD;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_bytes_chr_32;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_bytes_digest_809dc873a952db29517e931db92b9f36;
static PyObject *const_str_digest_9514cd9de70ec5ab00b90cedb8906b68;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_fe608024ba381559514d14d9008cc45a;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_words;
static PyObject *const_str_plain_curr;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_findall;
extern PyObject *const_str_plain_logger;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_CharSetProber;
static PyObject *const_str_digest_bea83a9d5361fcbb9b98d9a9a4698d32;
static PyObject *const_str_digest_a2306906b635701a588506e0b76133b0;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain__state;
static PyObject *const_str_digest_ac7ef1983d08896f64f0a36d2144c0a1;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_feed;
extern PyObject *const_float_0_0;
static PyObject *const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple;
extern PyObject *const_str_plain_filter_international_words;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_buf_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_buf_tuple, 0, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    const_str_digest_5750e5d38f91740e3dfa72c2f8aea9ca = UNSTREAM_STRING_ASCII( &constant_bin[ 142868 ], 19, 0 );
    const_str_digest_d3adad97b2e012729b196682491f28f6 = UNSTREAM_STRING_ASCII( &constant_bin[ 142887 ], 40, 0 );
    const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 0, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    const_str_plain_filtered = UNSTREAM_STRING_ASCII( &constant_bin[ 142927 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 1, const_str_plain_filtered ); Py_INCREF( const_str_plain_filtered );
    const_str_plain_in_tag = UNSTREAM_STRING_ASCII( &constant_bin[ 142935 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 2, const_str_plain_in_tag ); Py_INCREF( const_str_plain_in_tag );
    PyTuple_SET_ITEM( const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 3, const_str_plain_prev ); Py_INCREF( const_str_plain_prev );
    const_str_plain_curr = UNSTREAM_STRING_ASCII( &constant_bin[ 9851 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 4, const_str_plain_curr ); Py_INCREF( const_str_plain_curr );
    const_str_plain_buf_char = UNSTREAM_STRING_ASCII( &constant_bin[ 142941 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 5, const_str_plain_buf_char ); Py_INCREF( const_str_plain_buf_char );
    const_str_digest_3f2cd01d68aea2af9a8754bded3275a2 = UNSTREAM_STRING_ASCII( &constant_bin[ 142949 ], 41, 0 );
    const_str_digest_107260837257a24dd33ded2c68b97b85 = UNSTREAM_STRING_ASCII( &constant_bin[ 142990 ], 19, 0 );
    const_bytes_chr_128 = UNSTREAM_BYTES( &constant_bin[ 73586 ], 1 );
    const_tuple_str_digest_ac7ef1983d08896f64f0a36d2144c0a1_tuple = PyTuple_New( 1 );
    const_str_digest_ac7ef1983d08896f64f0a36d2144c0a1 = UNSTREAM_STRING_ASCII( &constant_bin[ 143009 ], 21, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_ac7ef1983d08896f64f0a36d2144c0a1_tuple, 0, const_str_digest_ac7ef1983d08896f64f0a36d2144c0a1 ); Py_INCREF( const_str_digest_ac7ef1983d08896f64f0a36d2144c0a1 );
    const_str_digest_70ca23c973c1a0de004c414967a80408 = UNSTREAM_STRING_ASCII( &constant_bin[ 143030 ], 18, 0 );
    const_str_plain_last_char = UNSTREAM_STRING_ASCII( &constant_bin[ 143048 ], 9, 1 );
    const_str_digest_40c7f3390d5eadc8b2a301a24554493c = UNSTREAM_STRING_ASCII( &constant_bin[ 143057 ], 26, 0 );
    const_bytes_digest_857f6e4ae06e44e10e00b0636ed9e207 = UNSTREAM_BYTES( &constant_bin[ 143083 ], 37 );
    const_tuple_str_plain_CharSetProber_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CharSetProber_tuple_type_object_tuple_tuple, 0, const_str_plain_CharSetProber ); Py_INCREF( const_str_plain_CharSetProber );
    PyTuple_SET_ITEM( const_tuple_str_plain_CharSetProber_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_tuple_bytes_chr_32_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_32_tuple, 0, const_bytes_chr_32 ); Py_INCREF( const_bytes_chr_32 );
    const_str_digest_4ae3f27cfecb11378d7a141dcab11fb0 = UNSTREAM_STRING_ASCII( &constant_bin[ 143120 ], 35, 0 );
    const_str_digest_70860d60d1c19777c3acac2081cae1e7 = UNSTREAM_STRING_ASCII( &constant_bin[ 143155 ], 456, 0 );
    const_str_digest_9688abd04bb43b8a7c1d48e86da4b0a2 = UNSTREAM_STRING_ASCII( &constant_bin[ 143611 ], 30, 0 );
    const_bytes_digest_809dc873a952db29517e931db92b9f36 = UNSTREAM_BYTES( &constant_bin[ 143641 ], 8 );
    const_str_digest_9514cd9de70ec5ab00b90cedb8906b68 = UNSTREAM_STRING_ASCII( &constant_bin[ 143649 ], 28, 0 );
    const_str_digest_fe608024ba381559514d14d9008cc45a = UNSTREAM_STRING( &constant_bin[ 143677 ], 569, 0 );
    const_str_digest_bea83a9d5361fcbb9b98d9a9a4698d32 = UNSTREAM_STRING_ASCII( &constant_bin[ 144246 ], 22, 0 );
    const_str_digest_a2306906b635701a588506e0b76133b0 = UNSTREAM_STRING_ASCII( &constant_bin[ 144268 ], 24, 0 );
    const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple, 0, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    PyTuple_SET_ITEM( const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple, 1, const_str_plain_filtered ); Py_INCREF( const_str_plain_filtered );
    PyTuple_SET_ITEM( const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple, 2, const_str_plain_words ); Py_INCREF( const_str_plain_words );
    PyTuple_SET_ITEM( const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple, 3, const_str_plain_word ); Py_INCREF( const_str_plain_word );
    PyTuple_SET_ITEM( const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple, 4, const_str_plain_last_char ); Py_INCREF( const_str_plain_last_char );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$charsetprober( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_67495dc93bebb1dc7d8ee0d2e220d9da;
static PyCodeObject *codeobj_4debc1f624bb57b6d8bf91dde9783f11;
static PyCodeObject *codeobj_54aa8408173506171937168f75c08047;
static PyCodeObject *codeobj_77734eb9ad5f4c15926646962ecfe409;
static PyCodeObject *codeobj_5a01dff958194589232de07e79f39d63;
static PyCodeObject *codeobj_81bca989cb2abeaf69b41d52a0488fa0;
static PyCodeObject *codeobj_1f00031651841411670b6e5fee81f4ec;
static PyCodeObject *codeobj_02618e27cdb8f833c849fd96b7d5b323;
static PyCodeObject *codeobj_7f43fb55674543106671e876382255c0;
static PyCodeObject *codeobj_8db45c3fb08788dcbf80b339cef7f98b;
static PyCodeObject *codeobj_32f330df14cc3186b6e21e8278a56d94;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_a2306906b635701a588506e0b76133b0 );
    codeobj_67495dc93bebb1dc7d8ee0d2e220d9da = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9688abd04bb43b8a7c1d48e86da4b0a2, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_4debc1f624bb57b6d8bf91dde9783f11 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CharSetProber, 35, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_54aa8408173506171937168f75c08047 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 39, const_tuple_str_plain_self_str_plain_lang_filter_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_77734eb9ad5f4c15926646962ecfe409 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_charset_name, 47, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5a01dff958194589232de07e79f39d63 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_feed, 51, const_tuple_str_plain_self_str_plain_buf_tuple, 2, 0, CO_NOFREE );
    codeobj_81bca989cb2abeaf69b41d52a0488fa0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter_high_byte_only, 61, const_tuple_str_plain_buf_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1f00031651841411670b6e5fee81f4ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter_international_words, 66, const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_02618e27cdb8f833c849fd96b7d5b323 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter_with_english_letters, 103, const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7f43fb55674543106671e876382255c0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_confidence, 58, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8db45c3fb08788dcbf80b339cef7f98b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset, 44, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_32f330df14cc3186b6e21e8278a56d94 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_state, 54, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_2_reset(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_3_charset_name(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_4_feed(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_5_state(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_6_get_confidence(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_7_filter_high_byte_only(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_8_filter_international_words(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_9_filter_with_english_letters(  );


// The module function definitions.
static PyObject *impl_chardet$charsetprober$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_lang_filter = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_54aa8408173506171937168f75c08047;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_54aa8408173506171937168f75c08047 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_54aa8408173506171937168f75c08047, codeobj_54aa8408173506171937168f75c08047, module_chardet$charsetprober, sizeof(void *)+sizeof(void *) );
    frame_54aa8408173506171937168f75c08047 = cache_frame_54aa8408173506171937168f75c08047;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_54aa8408173506171937168f75c08047 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_54aa8408173506171937168f75c08047 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__state, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_lang_filter );
        tmp_assattr_name_2 = par_lang_filter;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_lang_filter, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_54aa8408173506171937168f75c08047->m_frame.f_lineno = 42;
        tmp_assattr_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_ac7ef1983d08896f64f0a36d2144c0a1_tuple, 0 ) );

        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_logger, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54aa8408173506171937168f75c08047 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54aa8408173506171937168f75c08047 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_54aa8408173506171937168f75c08047, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_54aa8408173506171937168f75c08047->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_54aa8408173506171937168f75c08047, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_54aa8408173506171937168f75c08047,
        type_description_1,
        par_self,
        par_lang_filter
    );


    // Release cached frame.
    if ( frame_54aa8408173506171937168f75c08047 == cache_frame_54aa8408173506171937168f75c08047 )
    {
        Py_DECREF( frame_54aa8408173506171937168f75c08047 );
    }
    cache_frame_54aa8408173506171937168f75c08047 = NULL;

    assertFrameObject( frame_54aa8408173506171937168f75c08047 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_lang_filter );
    Py_DECREF( par_lang_filter );
    par_lang_filter = NULL;

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

    CHECK_OBJECT( (PyObject *)par_lang_filter );
    Py_DECREF( par_lang_filter );
    par_lang_filter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_1___init__ );
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


static PyObject *impl_chardet$charsetprober$$$function_2_reset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8db45c3fb08788dcbf80b339cef7f98b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8db45c3fb08788dcbf80b339cef7f98b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8db45c3fb08788dcbf80b339cef7f98b, codeobj_8db45c3fb08788dcbf80b339cef7f98b, module_chardet$charsetprober, sizeof(void *) );
    frame_8db45c3fb08788dcbf80b339cef7f98b = cache_frame_8db45c3fb08788dcbf80b339cef7f98b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8db45c3fb08788dcbf80b339cef7f98b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8db45c3fb08788dcbf80b339cef7f98b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProbingState" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DETECTING );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__state, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8db45c3fb08788dcbf80b339cef7f98b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8db45c3fb08788dcbf80b339cef7f98b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8db45c3fb08788dcbf80b339cef7f98b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8db45c3fb08788dcbf80b339cef7f98b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8db45c3fb08788dcbf80b339cef7f98b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8db45c3fb08788dcbf80b339cef7f98b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_8db45c3fb08788dcbf80b339cef7f98b == cache_frame_8db45c3fb08788dcbf80b339cef7f98b )
    {
        Py_DECREF( frame_8db45c3fb08788dcbf80b339cef7f98b );
    }
    cache_frame_8db45c3fb08788dcbf80b339cef7f98b = NULL;

    assertFrameObject( frame_8db45c3fb08788dcbf80b339cef7f98b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_2_reset );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_2_reset );
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


static PyObject *impl_chardet$charsetprober$$$function_3_charset_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_3_charset_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_3_charset_name );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_chardet$charsetprober$$$function_4_feed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_buf = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_4_feed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_4_feed );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_chardet$charsetprober$$$function_5_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_32f330df14cc3186b6e21e8278a56d94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_32f330df14cc3186b6e21e8278a56d94 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_32f330df14cc3186b6e21e8278a56d94, codeobj_32f330df14cc3186b6e21e8278a56d94, module_chardet$charsetprober, sizeof(void *) );
    frame_32f330df14cc3186b6e21e8278a56d94 = cache_frame_32f330df14cc3186b6e21e8278a56d94;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_32f330df14cc3186b6e21e8278a56d94 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_32f330df14cc3186b6e21e8278a56d94 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__state );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_32f330df14cc3186b6e21e8278a56d94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_32f330df14cc3186b6e21e8278a56d94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_32f330df14cc3186b6e21e8278a56d94 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_32f330df14cc3186b6e21e8278a56d94, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_32f330df14cc3186b6e21e8278a56d94->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_32f330df14cc3186b6e21e8278a56d94, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_32f330df14cc3186b6e21e8278a56d94,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_32f330df14cc3186b6e21e8278a56d94 == cache_frame_32f330df14cc3186b6e21e8278a56d94 )
    {
        Py_DECREF( frame_32f330df14cc3186b6e21e8278a56d94 );
    }
    cache_frame_32f330df14cc3186b6e21e8278a56d94 = NULL;

    assertFrameObject( frame_32f330df14cc3186b6e21e8278a56d94 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_5_state );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_5_state );
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


static PyObject *impl_chardet$charsetprober$$$function_6_get_confidence( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = const_float_0_0;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_6_get_confidence );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_6_get_confidence );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_chardet$charsetprober$$$function_7_filter_high_byte_only( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_buf = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_81bca989cb2abeaf69b41d52a0488fa0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81bca989cb2abeaf69b41d52a0488fa0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_81bca989cb2abeaf69b41d52a0488fa0, codeobj_81bca989cb2abeaf69b41d52a0488fa0, module_chardet$charsetprober, sizeof(void *) );
    frame_81bca989cb2abeaf69b41d52a0488fa0 = cache_frame_81bca989cb2abeaf69b41d52a0488fa0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_81bca989cb2abeaf69b41d52a0488fa0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_81bca989cb2abeaf69b41d52a0488fa0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_bytes_digest_809dc873a952db29517e931db92b9f36;
        tmp_args_element_name_2 = const_bytes_chr_32;
        CHECK_OBJECT( par_buf );
        tmp_args_element_name_3 = par_buf;
        frame_81bca989cb2abeaf69b41d52a0488fa0->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_sub, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_buf;
            assert( old != NULL );
            par_buf = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81bca989cb2abeaf69b41d52a0488fa0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81bca989cb2abeaf69b41d52a0488fa0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_81bca989cb2abeaf69b41d52a0488fa0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_81bca989cb2abeaf69b41d52a0488fa0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_81bca989cb2abeaf69b41d52a0488fa0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_81bca989cb2abeaf69b41d52a0488fa0,
        type_description_1,
        par_buf
    );


    // Release cached frame.
    if ( frame_81bca989cb2abeaf69b41d52a0488fa0 == cache_frame_81bca989cb2abeaf69b41d52a0488fa0 )
    {
        Py_DECREF( frame_81bca989cb2abeaf69b41d52a0488fa0 );
    }
    cache_frame_81bca989cb2abeaf69b41d52a0488fa0 = NULL;

    assertFrameObject( frame_81bca989cb2abeaf69b41d52a0488fa0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_buf );
    tmp_return_value = par_buf;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_7_filter_high_byte_only );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

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

    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_7_filter_high_byte_only );
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


static PyObject *impl_chardet$charsetprober$$$function_8_filter_international_words( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_buf = python_pars[ 0 ];
    PyObject *var_filtered = NULL;
    PyObject *var_words = NULL;
    PyObject *var_word = NULL;
    PyObject *var_last_char = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1f00031651841411670b6e5fee81f4ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1f00031651841411670b6e5fee81f4ec = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = BYTEARRAY_COPY( const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e );
        assert( var_filtered == NULL );
        var_filtered = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1f00031651841411670b6e5fee81f4ec, codeobj_1f00031651841411670b6e5fee81f4ec, module_chardet$charsetprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1f00031651841411670b6e5fee81f4ec = cache_frame_1f00031651841411670b6e5fee81f4ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f00031651841411670b6e5fee81f4ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f00031651841411670b6e5fee81f4ec ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_bytes_digest_857f6e4ae06e44e10e00b0636ed9e207;
        CHECK_OBJECT( par_buf );
        tmp_args_element_name_2 = par_buf;
        frame_1f00031651841411670b6e5fee81f4ec->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_findall, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_words == NULL );
        var_words = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_words );
        tmp_iter_arg_1 = var_words;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 89;
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
            PyObject *old = var_word;
            var_word = tmp_assign_source_5;
            Py_INCREF( var_word );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_filtered );
        tmp_source_name_1 = var_filtered;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_word );
        tmp_subscribed_name_1 = var_word;
        tmp_subscript_name_1 = const_slice_none_int_neg_1_none;
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_1f00031651841411670b6e5fee81f4ec->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_word );
        tmp_subscribed_name_2 = var_word;
        tmp_subscript_name_2 = const_slice_int_neg_1_none_none;
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_last_char;
            var_last_char = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_last_char );
        tmp_called_instance_2 = var_last_char;
        frame_1f00031651841411670b6e5fee81f4ec->m_frame.f_lineno = 97;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_isalpha );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_last_char );
        tmp_compexpr_left_1 = var_last_char;
        tmp_compexpr_right_1 = const_bytes_chr_128;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_bytes_chr_32;
            {
                PyObject *old = var_last_char;
                assert( old != NULL );
                var_last_char = tmp_assign_source_7;
                Py_INCREF( var_last_char );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_filtered );
        tmp_called_instance_3 = var_filtered;
        CHECK_OBJECT( var_last_char );
        tmp_args_element_name_4 = var_last_char;
        frame_1f00031651841411670b6e5fee81f4ec->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_extend, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f00031651841411670b6e5fee81f4ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f00031651841411670b6e5fee81f4ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f00031651841411670b6e5fee81f4ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f00031651841411670b6e5fee81f4ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f00031651841411670b6e5fee81f4ec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f00031651841411670b6e5fee81f4ec,
        type_description_1,
        par_buf,
        var_filtered,
        var_words,
        var_word,
        var_last_char
    );


    // Release cached frame.
    if ( frame_1f00031651841411670b6e5fee81f4ec == cache_frame_1f00031651841411670b6e5fee81f4ec )
    {
        Py_DECREF( frame_1f00031651841411670b6e5fee81f4ec );
    }
    cache_frame_1f00031651841411670b6e5fee81f4ec = NULL;

    assertFrameObject( frame_1f00031651841411670b6e5fee81f4ec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT( var_filtered );
    tmp_return_value = var_filtered;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_8_filter_international_words );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

    CHECK_OBJECT( (PyObject *)var_filtered );
    Py_DECREF( var_filtered );
    var_filtered = NULL;

    CHECK_OBJECT( (PyObject *)var_words );
    Py_DECREF( var_words );
    var_words = NULL;

    Py_XDECREF( var_word );
    var_word = NULL;

    Py_XDECREF( var_last_char );
    var_last_char = NULL;

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

    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

    CHECK_OBJECT( (PyObject *)var_filtered );
    Py_DECREF( var_filtered );
    var_filtered = NULL;

    Py_XDECREF( var_words );
    var_words = NULL;

    Py_XDECREF( var_word );
    var_word = NULL;

    Py_XDECREF( var_last_char );
    var_last_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_8_filter_international_words );
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


static PyObject *impl_chardet$charsetprober$$$function_9_filter_with_english_letters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_buf = python_pars[ 0 ];
    PyObject *var_filtered = NULL;
    PyObject *var_in_tag = NULL;
    PyObject *var_prev = NULL;
    PyObject *var_curr = NULL;
    PyObject *var_buf_char = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_02618e27cdb8f833c849fd96b7d5b323;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_02618e27cdb8f833c849fd96b7d5b323 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = BYTEARRAY_COPY( const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e );
        assert( var_filtered == NULL );
        var_filtered = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_False;
        assert( var_in_tag == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_in_tag = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_0;
        assert( var_prev == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_prev = tmp_assign_source_3;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_02618e27cdb8f833c849fd96b7d5b323, codeobj_02618e27cdb8f833c849fd96b7d5b323, module_chardet$charsetprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_02618e27cdb8f833c849fd96b7d5b323 = cache_frame_02618e27cdb8f833c849fd96b7d5b323;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_02618e27cdb8f833c849fd96b7d5b323 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_02618e27cdb8f833c849fd96b7d5b323 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_buf );
        tmp_len_arg_1 = par_buf;
        tmp_xrange_low_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                exception_lineno = 119;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_curr;
            var_curr = tmp_assign_source_6;
            Py_INCREF( var_curr );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_buf );
        tmp_subscribed_name_1 = par_buf;
        CHECK_OBJECT( var_curr );
        tmp_start_name_1 = var_curr;
        CHECK_OBJECT( var_curr );
        tmp_left_name_1 = var_curr;
        tmp_right_name_1 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_buf_char;
            var_buf_char = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_buf_char );
        tmp_compexpr_left_1 = var_buf_char;
        tmp_compexpr_right_1 = const_bytes_chr_62;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
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
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = Py_False;
            {
                PyObject *old = var_in_tag;
                var_in_tag = tmp_assign_source_8;
                Py_INCREF( var_in_tag );
                Py_XDECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_buf_char );
            tmp_compexpr_left_2 = var_buf_char;
            tmp_compexpr_right_2 = const_bytes_chr_60;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
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
                PyObject *tmp_assign_source_9;
                tmp_assign_source_9 = Py_True;
                {
                    PyObject *old = var_in_tag;
                    var_in_tag = tmp_assign_source_9;
                    Py_INCREF( var_in_tag );
                    Py_XDECREF( old );
                }

            }
            branch_no_2:;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( var_buf_char );
        tmp_compexpr_left_3 = var_buf_char;
        tmp_compexpr_right_3 = const_bytes_chr_128;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_buf_char );
        tmp_called_instance_1 = var_buf_char;
        frame_02618e27cdb8f833c849fd96b7d5b323->m_frame.f_lineno = 129;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isalpha );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_4;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT( var_curr );
            tmp_compexpr_left_4 = var_curr;
            if ( var_prev == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prev" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 131;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }

            tmp_compexpr_right_4 = var_prev;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_and_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            if ( var_in_tag == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "in_tag" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 131;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }

            tmp_operand_name_2 = var_in_tag;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_1;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_start_name_2;
                PyObject *tmp_stop_name_2;
                PyObject *tmp_step_name_2;
                CHECK_OBJECT( var_filtered );
                tmp_source_name_1 = var_filtered;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 134;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( par_buf );
                tmp_subscribed_name_2 = par_buf;
                if ( var_prev == NULL )
                {
                    Py_DECREF( tmp_called_name_1 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prev" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 134;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }

                tmp_start_name_2 = var_prev;
                CHECK_OBJECT( var_curr );
                tmp_stop_name_2 = var_curr;
                tmp_step_name_2 = Py_None;
                tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                assert( !(tmp_subscript_name_2 == NULL) );
                tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                Py_DECREF( tmp_subscript_name_2 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 134;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                frame_02618e27cdb8f833c849fd96b7d5b323->m_frame.f_lineno = 134;
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


                    exception_lineno = 134;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            {
                PyObject *tmp_called_instance_2;
                PyObject *tmp_call_result_2;
                CHECK_OBJECT( var_filtered );
                tmp_called_instance_2 = var_filtered;
                frame_02618e27cdb8f833c849fd96b7d5b323->m_frame.f_lineno = 136;
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_extend, &PyTuple_GET_ITEM( const_tuple_bytes_chr_32_tuple, 0 ) );

                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 136;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( var_curr );
            tmp_left_name_2 = var_curr;
            tmp_right_name_2 = const_int_pos_1;
            tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_prev;
                var_prev = tmp_assign_source_10;
                Py_XDECREF( old );
            }

        }
        branch_no_3:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
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

    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_3;
        if ( var_in_tag == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "in_tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_3 = var_in_tag;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_start_name_3;
            PyObject *tmp_stop_name_3;
            PyObject *tmp_step_name_3;
            CHECK_OBJECT( var_filtered );
            tmp_source_name_2 = var_filtered;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_extend );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_buf );
            tmp_subscribed_name_3 = par_buf;
            if ( var_prev == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prev" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 143;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_start_name_3 = var_prev;
            tmp_stop_name_3 = Py_None;
            tmp_step_name_3 = Py_None;
            tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
            assert( !(tmp_subscript_name_3 == NULL) );
            tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 143;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_02618e27cdb8f833c849fd96b7d5b323->m_frame.f_lineno = 143;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_02618e27cdb8f833c849fd96b7d5b323 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_02618e27cdb8f833c849fd96b7d5b323 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_02618e27cdb8f833c849fd96b7d5b323, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_02618e27cdb8f833c849fd96b7d5b323->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_02618e27cdb8f833c849fd96b7d5b323, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_02618e27cdb8f833c849fd96b7d5b323,
        type_description_1,
        par_buf,
        var_filtered,
        var_in_tag,
        var_prev,
        var_curr,
        var_buf_char
    );


    // Release cached frame.
    if ( frame_02618e27cdb8f833c849fd96b7d5b323 == cache_frame_02618e27cdb8f833c849fd96b7d5b323 )
    {
        Py_DECREF( frame_02618e27cdb8f833c849fd96b7d5b323 );
    }
    cache_frame_02618e27cdb8f833c849fd96b7d5b323 = NULL;

    assertFrameObject( frame_02618e27cdb8f833c849fd96b7d5b323 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_filtered );
    tmp_return_value = var_filtered;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_9_filter_with_english_letters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

    CHECK_OBJECT( (PyObject *)var_filtered );
    Py_DECREF( var_filtered );
    var_filtered = NULL;

    Py_XDECREF( var_in_tag );
    var_in_tag = NULL;

    Py_XDECREF( var_prev );
    var_prev = NULL;

    Py_XDECREF( var_curr );
    var_curr = NULL;

    Py_XDECREF( var_buf_char );
    var_buf_char = NULL;

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

    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

    CHECK_OBJECT( (PyObject *)var_filtered );
    Py_DECREF( var_filtered );
    var_filtered = NULL;

    Py_XDECREF( var_in_tag );
    var_in_tag = NULL;

    Py_XDECREF( var_prev );
    var_prev = NULL;

    Py_XDECREF( var_curr );
    var_curr = NULL;

    Py_XDECREF( var_buf_char );
    var_buf_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_9_filter_with_english_letters );
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



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_bea83a9d5361fcbb9b98d9a9a4698d32,
#endif
        codeobj_54aa8408173506171937168f75c08047,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$charsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_2_reset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 300
        const_str_digest_107260837257a24dd33ded2c68b97b85,
#endif
        codeobj_8db45c3fb08788dcbf80b339cef7f98b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$charsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_3_charset_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_3_charset_name,
        const_str_plain_charset_name,
#if PYTHON_VERSION >= 300
        const_str_digest_40c7f3390d5eadc8b2a301a24554493c,
#endif
        codeobj_77734eb9ad5f4c15926646962ecfe409,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$charsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_4_feed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_4_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 300
        const_str_digest_70ca23c973c1a0de004c414967a80408,
#endif
        codeobj_5a01dff958194589232de07e79f39d63,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$charsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_5_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_5_state,
        const_str_plain_state,
#if PYTHON_VERSION >= 300
        const_str_digest_5750e5d38f91740e3dfa72c2f8aea9ca,
#endif
        codeobj_32f330df14cc3186b6e21e8278a56d94,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$charsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_6_get_confidence(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_6_get_confidence,
        const_str_plain_get_confidence,
#if PYTHON_VERSION >= 300
        const_str_digest_9514cd9de70ec5ab00b90cedb8906b68,
#endif
        codeobj_7f43fb55674543106671e876382255c0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$charsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_7_filter_high_byte_only(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_7_filter_high_byte_only,
        const_str_plain_filter_high_byte_only,
#if PYTHON_VERSION >= 300
        const_str_digest_4ae3f27cfecb11378d7a141dcab11fb0,
#endif
        codeobj_81bca989cb2abeaf69b41d52a0488fa0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$charsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_8_filter_international_words(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_8_filter_international_words,
        const_str_plain_filter_international_words,
#if PYTHON_VERSION >= 300
        const_str_digest_d3adad97b2e012729b196682491f28f6,
#endif
        codeobj_1f00031651841411670b6e5fee81f4ec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$charsetprober,
        const_str_digest_fe608024ba381559514d14d9008cc45a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_9_filter_with_english_letters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_9_filter_with_english_letters,
        const_str_plain_filter_with_english_letters,
#if PYTHON_VERSION >= 300
        const_str_digest_3f2cd01d68aea2af9a8754bded3275a2,
#endif
        codeobj_02618e27cdb8f833c849fd96b7d5b323,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$charsetprober,
        const_str_digest_70860d60d1c19777c3acac2081cae1e7,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$charsetprober =
{
    PyModuleDef_HEAD_INIT,
    "chardet.charsetprober",
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

MOD_INIT_DECL( chardet$charsetprober )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$charsetprober );
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
    puts("chardet.charsetprober: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.charsetprober: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.charsetprober: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$charsetprober" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$charsetprober = Py_InitModule4(
        "chardet.charsetprober",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_chardet$charsetprober = PyModule_Create( &mdef_chardet$charsetprober );
#endif

    moduledict_chardet$charsetprober = MODULE_DICT( module_chardet$charsetprober );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_chardet$charsetprober,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_chardet$charsetprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$charsetprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$charsetprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_chardet$charsetprober );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ac7ef1983d08896f64f0a36d2144c0a1, module_chardet$charsetprober );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_67495dc93bebb1dc7d8ee0d2e220d9da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_chardet$charsetprober_35 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4debc1f624bb57b6d8bf91dde9783f11_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4debc1f624bb57b6d8bf91dde9783f11_2 = NULL;
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
        UPDATE_STRING_DICT0( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_67495dc93bebb1dc7d8ee0d2e220d9da = MAKE_MODULE_FRAME( codeobj_67495dc93bebb1dc7d8ee0d2e220d9da, module_chardet$charsetprober );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_67495dc93bebb1dc7d8ee0d2e220d9da );
    assert( Py_REFCNT( frame_67495dc93bebb1dc7d8ee0d2e220d9da ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_logging;
        tmp_globals_name_1 = (PyObject *)moduledict_chardet$charsetprober;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_67495dc93bebb1dc7d8ee0d2e220d9da->m_frame.f_lineno = 29;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_re;
        tmp_globals_name_2 = (PyObject *)moduledict_chardet$charsetprober;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_67495dc93bebb1dc7d8ee0d2e220d9da->m_frame.f_lineno = 30;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_enums;
        tmp_globals_name_3 = (PyObject *)moduledict_chardet$charsetprober;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_ProbingState_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_67495dc93bebb1dc7d8ee0d2e220d9da->m_frame.f_lineno = 32;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_chardet$charsetprober,
                const_str_plain_ProbingState,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ProbingState );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
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


            exception_lineno = 35;

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


            exception_lineno = 35;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_1 != NULL );
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_type_object_tuple;
        tmp_assign_source_8 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_8;
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


            exception_lineno = 35;

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


            exception_lineno = 35;

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
            PyObject *tmp_assign_source_9;
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


                exception_lineno = 35;

                goto try_except_handler_1;
            }
            tmp_args_name_1 = const_tuple_str_plain_CharSetProber_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_67495dc93bebb1dc7d8ee0d2e220d9da->m_frame.f_lineno = 35;
            tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_9;
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


                exception_lineno = 35;

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


                    exception_lineno = 35;

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

                    exception_lineno = 35;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 35;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 35;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_10;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_chardet$charsetprober_35 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_ac7ef1983d08896f64f0a36d2144c0a1;
        tmp_res = PyObject_SetItem( locals_chardet$charsetprober_35, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_CharSetProber;
        tmp_res = PyObject_SetItem( locals_chardet$charsetprober_35, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_4debc1f624bb57b6d8bf91dde9783f11_2, codeobj_4debc1f624bb57b6d8bf91dde9783f11, module_chardet$charsetprober, sizeof(void *) );
        frame_4debc1f624bb57b6d8bf91dde9783f11_2 = cache_frame_4debc1f624bb57b6d8bf91dde9783f11_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_4debc1f624bb57b6d8bf91dde9783f11_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_4debc1f624bb57b6d8bf91dde9783f11_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_float_0_95;
        tmp_res = PyObject_SetItem( locals_chardet$charsetprober_35, const_str_plain_SHORTCUT_THRESHOLD, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_chardet$charsetprober$$$function_1___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_chardet$charsetprober_35, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_chardet$charsetprober$$$function_2_reset(  );



        tmp_res = PyObject_SetItem( locals_chardet$charsetprober_35, const_str_plain_reset, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            tmp_res = MAPPING_HAS_ITEM( locals_chardet$charsetprober_35, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_2;
            }
            else
            {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_name_2 = PyObject_GetItem( locals_chardet$charsetprober_35, const_str_plain_property );

            if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_chardet$charsetprober$$$function_3_charset_name(  );



            frame_4debc1f624bb57b6d8bf91dde9783f11_2->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_name_3 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_2 = MAKE_FUNCTION_chardet$charsetprober$$$function_3_charset_name(  );



            frame_4debc1f624bb57b6d8bf91dde9783f11_2->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem( locals_chardet$charsetprober_35, const_str_plain_charset_name, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_chardet$charsetprober$$$function_4_feed(  );



        tmp_res = PyObject_SetItem( locals_chardet$charsetprober_35, const_str_plain_feed, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_4;
            tmp_res = MAPPING_HAS_ITEM( locals_chardet$charsetprober_35, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_3;
            }
            else
            {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_4 = PyObject_GetItem( locals_chardet$charsetprober_35, const_str_plain_property );

            if ( tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_3 = MAKE_FUNCTION_chardet$charsetprober$$$function_5_state(  );



            frame_4debc1f624bb57b6d8bf91dde9783f11_2->m_frame.f_lineno = 54;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_name_5 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_4 = MAKE_FUNCTION_chardet$charsetprober$$$function_5_state(  );



            frame_4debc1f624bb57b6d8bf91dde9783f11_2->m_frame.f_lineno = 54;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem( locals_chardet$charsetprober_35, const_str_plain_state, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_chardet$charsetprober$$$function_6_get_confidence(  );



        tmp_res = PyObject_SetItem( locals_chardet$charsetprober_35, const_str_plain_get_confidence, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_staticmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM( locals_chardet$charsetprober_35, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_4;
            }
            else
            {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_name_6 = PyObject_GetItem( locals_chardet$charsetprober_35, const_str_plain_staticmethod );

            if ( tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_5 = MAKE_FUNCTION_chardet$charsetprober$$$function_7_filter_high_byte_only(  );



            frame_4debc1f624bb57b6d8bf91dde9783f11_2->m_frame.f_lineno = 61;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_staticmethod_arg_1 = MAKE_FUNCTION_chardet$charsetprober$$$function_7_filter_high_byte_only(  );



            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
            Py_DECREF( tmp_staticmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem( locals_chardet$charsetprober_35, const_str_plain_filter_high_byte_only, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_staticmethod_arg_2;
            tmp_res = MAPPING_HAS_ITEM( locals_chardet$charsetprober_35, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_5;
            }
            else
            {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_name_7 = PyObject_GetItem( locals_chardet$charsetprober_35, const_str_plain_staticmethod );

            if ( tmp_called_name_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_6 = MAKE_FUNCTION_chardet$charsetprober$$$function_8_filter_international_words(  );



            frame_4debc1f624bb57b6d8bf91dde9783f11_2->m_frame.f_lineno = 66;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_staticmethod_arg_2 = MAKE_FUNCTION_chardet$charsetprober$$$function_8_filter_international_words(  );



            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_2 );
            Py_DECREF( tmp_staticmethod_arg_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem( locals_chardet$charsetprober_35, const_str_plain_filter_international_words, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_staticmethod_arg_3;
            tmp_res = MAPPING_HAS_ITEM( locals_chardet$charsetprober_35, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_6;
            }
            else
            {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_name_8 = PyObject_GetItem( locals_chardet$charsetprober_35, const_str_plain_staticmethod );

            if ( tmp_called_name_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_7 = MAKE_FUNCTION_chardet$charsetprober$$$function_9_filter_with_english_letters(  );



            frame_4debc1f624bb57b6d8bf91dde9783f11_2->m_frame.f_lineno = 103;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_staticmethod_arg_3 = MAKE_FUNCTION_chardet$charsetprober$$$function_9_filter_with_english_letters(  );



            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_3 );
            Py_DECREF( tmp_staticmethod_arg_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem( locals_chardet$charsetprober_35, const_str_plain_filter_with_english_letters, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4debc1f624bb57b6d8bf91dde9783f11_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4debc1f624bb57b6d8bf91dde9783f11_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_4debc1f624bb57b6d8bf91dde9783f11_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_4debc1f624bb57b6d8bf91dde9783f11_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_4debc1f624bb57b6d8bf91dde9783f11_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4debc1f624bb57b6d8bf91dde9783f11_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_4debc1f624bb57b6d8bf91dde9783f11_2 == cache_frame_4debc1f624bb57b6d8bf91dde9783f11_2 )
        {
            Py_DECREF( frame_4debc1f624bb57b6d8bf91dde9783f11_2 );
        }
        cache_frame_4debc1f624bb57b6d8bf91dde9783f11_2 = NULL;

        assertFrameObject( frame_4debc1f624bb57b6d8bf91dde9783f11_2 );

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
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_9 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_CharSetProber;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_chardet$charsetprober_35;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_67495dc93bebb1dc7d8ee0d2e220d9da->m_frame.f_lineno = 35;
            tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_12;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_11 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_11 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( chardet$charsetprober );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_chardet$charsetprober_35 );
        locals_chardet$charsetprober_35 = NULL;
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

        Py_DECREF( locals_chardet$charsetprober_35 );
        locals_chardet$charsetprober_35 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( chardet$charsetprober );
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
        NUITKA_CANNOT_GET_HERE( chardet$charsetprober );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 35;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_CharSetProber, tmp_assign_source_11 );
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
    RESTORE_FRAME_EXCEPTION( frame_67495dc93bebb1dc7d8ee0d2e220d9da );
#endif
    popFrameStack();

    assertFrameObject( frame_67495dc93bebb1dc7d8ee0d2e220d9da );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_67495dc93bebb1dc7d8ee0d2e220d9da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67495dc93bebb1dc7d8ee0d2e220d9da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67495dc93bebb1dc7d8ee0d2e220d9da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67495dc93bebb1dc7d8ee0d2e220d9da, exception_lineno );
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
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_chardet$charsetprober );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
