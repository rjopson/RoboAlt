/* Generated code for Python module 'serial.serialcli'
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

/* The "_module_serial$serialcli" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial$serialcli;
PyDictObject *moduledict_serial$serialcli;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain__dtr_state;
extern PyObject *const_str_digest_1e77c865d9cc3714cae3a6bd34503ca9;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_STOPBITS_ONE;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_RtsEnable;
extern PyObject *const_str_digest_0081767d335d9fb963b22b42d5219f43;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_SIXBITS;
extern PyObject *const_str_plain_SerialBase;
extern PyObject *const_str_plain__stopbits;
extern PyObject *const_str_plain_ValueError;
extern PyObject *const_str_plain_in_waiting;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_string;
extern PyObject *const_int_pos_115200;
static PyObject *const_str_plain_BreakState;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain__bytesize;
extern PyObject *const_str_plain_STOPBITS_ONE_POINT_FIVE;
extern PyObject *const_str_plain_bool;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_int_pos_9600;
extern PyObject *const_str_digest_145bf772d86c3cb38f291d317430df01;
extern PyObject *const_str_plain__rts_state;
extern PyObject *const_str_plain_writeTimeoutError;
extern PyObject *const_str_digest_a41f7446b10852b7fa7917c8946aa5e1;
extern PyObject *const_int_pos_1200;
extern PyObject *const_str_digest_faa07c45c026cd5370bf39ce65b9f2d8;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_chr_42;
static PyObject *const_str_digest_0d38497bfe7c04f466ec0cb6cfde083e;
extern PyObject *const_str_digest_4333ea5a1e0d9523f79855910d1cf6f7;
extern PyObject *const_int_pos_19200;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_digest_c425e1720ed7efc14d8a103f222711b2;
static PyObject *const_str_plain_Two;
extern PyObject *const_str_plain_Array;
extern PyObject *const_str_plain_Mark;
extern PyObject *const_str_plain_ReadTimeout;
extern PyObject *const_int_pos_5;
static PyObject *const_str_digest_38086bdc3fad8f6ffed0ae55cb1f1a49;
extern PyObject *const_str_plain__update_break_state;
static PyObject *const_str_digest_e52ef25c86ecc45d727cc8ac51fe36f4;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_Ports;
extern PyObject *const_str_plain_SerialException;
extern PyObject *const_tuple_int_pos_1_tuple;
static PyObject *const_str_plain_DiscardOutBuffer;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_dsr;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain__update_dtr_state;
static PyObject *const_str_plain_RequestToSend;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_len;
extern PyObject *const_int_pos_75;
extern PyObject *const_str_digest_67381b97568fd04864d7225afb09d3b9;
extern PyObject *const_int_pos_300;
extern PyObject *const_int_pos_57600;
extern PyObject *const_str_digest_bd2e98b142ff21c9f389c674d6946c9a;
extern PyObject *const_str_plain_str;
static PyObject *const_str_plain_DtrEnable;
static PyObject *const_str_plain_DataBits;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_is_open;
extern PyObject *const_str_plain_PARITY_EVEN;
static PyObject *const_str_plain_RequestToSendXOnXOff;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_BaudRate;
extern PyObject *const_str_plain_bytearray;
extern PyObject *const_str_digest_ca5d450d1c32d53f6bfc010c234e26bd;
static PyObject *const_str_plain_WriteTimeout;
extern PyObject *const_str_plain_IOError;
extern PyObject *const_str_plain__write_timeout;
static PyObject *const_str_plain_XOnXOff;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_Close;
extern PyObject *const_str_plain_STOPBITS_TWO;
extern PyObject *const_str_digest_06425a8e1b9d5eab562978eb6eacf777;
extern PyObject *const_str_plain_e;
extern PyObject *const_int_pos_8;
extern PyObject *const_int_pos_38400;
extern PyObject *const_str_digest_72db89f2656c7536ad3ca9676d132571;
static PyObject *const_str_digest_69c4cad202af51a1c4c9410cd5d6940f;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain__reconfigure_port;
extern PyObject *const_str_plain_StopBits;
extern PyObject *const_str_plain__port;
extern PyObject *const_str_plain_append;
extern PyObject *const_tuple_str_plain_self_str_plain_msg_tuple;
extern PyObject *const_str_digest_84335857b51bb81565c03cce4760dbdb;
extern PyObject *const_str_digest_872307698c9c04ef72f670bc6f1882ef;
extern PyObject *const_str_plain__xonxoff;
extern PyObject *const_str_digest_ad4d3667ad4be7949c20c65bd946d9a1;
extern PyObject *const_str_digest_088e326eed737fbd2d5feedf060c96ff;
extern PyObject *const_str_digest_2b96e25c8d393fdf065d358454fdf25c;
extern PyObject *const_str_digest_47be6feae340d11ceea1b2be1116c946;
extern PyObject *const_str_plain_SerialPort;
static PyObject *const_str_plain_InfiniteTimeout;
extern PyObject *const_str_plain_Parity;
static PyObject *const_str_plain_TimeoutException;
extern PyObject *const_str_digest_b40497f26645e3ebadb6514ab8d446ba;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_int_pos_2400;
static PyObject *const_str_plain_IO;
static PyObject *const_str_plain_OnePointFive;
extern PyObject *const_str_plain_PARITY_NONE;
extern PyObject *const_int_pos_150;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_digest_55bd609d83337e3e53f56f56fb6e69c2;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_BAUDRATES;
static PyObject *const_str_plain_Byte;
extern PyObject *const_str_plain_cd;
extern PyObject *const_str_digest_14aa7bed476b499178dd8a4fa54d666e;
static PyObject *const_str_digest_3fd5154979a26655e9349e6e2691935b;
extern PyObject *const_str_digest_4b91cca6339a9a892cf0e30d6bd1bdfc;
static PyObject *const_str_plain_CDHolding;
extern PyObject *const_tuple_str_digest_a41f7446b10852b7fa7917c8946aa5e1_tuple;
extern PyObject *const_str_plain__dsrdtr;
extern PyObject *const_int_0;
extern PyObject *const_str_plain__baudrate;
static PyObject *const_str_digest_62fd83f650899ac7d4fc07ed944eccec;
static PyObject *const_tuple_str_plain_self_str_plain_size_str_plain_data_tuple;
extern PyObject *const_str_plain_portstr;
extern PyObject *const_str_plain_Even;
extern PyObject *const_str_plain_PARITY_MARK;
extern PyObject *const_str_plain_ord;
extern PyObject *const_str_plain_msg;
extern PyObject *const_int_pos_1000;
extern PyObject *const_str_plain_reset_input_buffer;
extern PyObject *const_str_plain__parity;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_ri;
extern PyObject *const_str_plain_reset_output_buffer;
extern PyObject *const_str_plain_Odd;
static PyObject *const_str_plain_CtsHolding;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_digest_b7525636ddb73d1aea5ab60e59f79aaf;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_tuple_str_plain_string_tuple;
extern PyObject *const_str_plain_x;
extern PyObject *const_int_pos_4800;
extern PyObject *const_str_digest_1d3403f47e70d0d3c7366e99c0db7fa8;
extern PyObject *const_tuple_5aee5ca7adb77075f0cc1cb4927b0a43_tuple;
static PyObject *const_str_plain_DsrHolding;
static PyObject *const_str_digest_78056270b5e1d9467b1949982f3c3271;
extern PyObject *const_str_plain__timeout;
extern PyObject *const_int_pos_200;
extern PyObject *const_int_pos_50;
extern PyObject *const_str_plain_PARITY_ODD;
extern PyObject *const_str_plain__port_handle;
static PyObject *const_str_plain_Open;
static PyObject *const_str_plain_sab;
extern PyObject *const_tuple_str_digest_145bf772d86c3cb38f291d317430df01_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_cts;
extern PyObject *const_str_digest_c987d57c872daa303d57e57028663dbb;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
extern PyObject *const_int_pos_1800;
static PyObject *const_str_digest_a3cfca8a8e05d3d04838f7526d9fe242;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_One;
extern PyObject *const_str_digest_3c35695160658dede20e26ab5c064c8b;
static PyObject *const_str_plain_Handshake;
extern PyObject *const_str_digest_99bcd2cd4b1caacf3cac0b2495622ee2;
extern PyObject *const_str_plain_SEVENBITS;
extern PyObject *const_str_plain_getattr;
extern PyObject *const_str_plain_portNotOpenError;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_9777a2e7909bbc36bb577eeb2ac8826b;
extern PyObject *const_str_digest_59d8c08c8b321dd488f0cfd9cc30b9cf;
extern PyObject *const_str_plain_open;
extern PyObject *const_str_digest_444a195d697d77e6dc3d797b3cd6086d;
extern PyObject *const_str_plain_Space;
extern PyObject *const_str_digest_ca3087f1fed5e9b894c48e0dbbd2f218;
extern PyObject *const_str_digest_753bea82ba0eb08b3c188d4785781d6a;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
static PyObject *const_str_plain_InvalidOperationException;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_FIVEBITS;
static PyObject *const_str_plain_as_byte_array;
extern PyObject *const_str_plain_self;
extern PyObject *const_int_pos_110;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_EIGHTBITS;
static PyObject *const_str_plain_Write;
static PyObject *const_str_plain_BytesToRead;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain__update_rts_state;
extern PyObject *const_int_pos_134;
extern PyObject *const_str_plain_Exception;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_DiscardInBuffer;
extern PyObject *const_str_plain_Serial;
extern PyObject *const_tuple_str_digest_088e326eed737fbd2d5feedf060c96ff_tuple;
extern PyObject *const_str_plain_property;
static PyObject *const_str_plain_System;
extern PyObject *const_str_plain__rtscts;
static PyObject *const_str_digest_d834a22c24710ece6b0843c42ba338ef;
extern PyObject *const_str_plain_PARITY_SPACE;
extern PyObject *const_str_plain__break_state;
extern PyObject *const_tuple_str_plain_self_str_plain_e_tuple;
extern PyObject *const_int_pos_600;
extern PyObject *const_str_digest_54cde0cd7a92974ff918f0defbd1eeb9;
static PyObject *const_str_plain_ReadByte;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_RtsEnable = UNSTREAM_STRING_ASCII( &constant_bin[ 5807744 ], 9, 1 );
    const_str_plain_BreakState = UNSTREAM_STRING_ASCII( &constant_bin[ 5807753 ], 10, 1 );
    const_str_digest_0d38497bfe7c04f466ec0cb6cfde083e = UNSTREAM_STRING_ASCII( &constant_bin[ 5807763 ], 27, 0 );
    const_str_plain_Two = UNSTREAM_STRING_ASCII( &constant_bin[ 6821 ], 3, 1 );
    const_str_digest_38086bdc3fad8f6ffed0ae55cb1f1a49 = UNSTREAM_STRING_ASCII( &constant_bin[ 5807790 ], 84, 0 );
    const_str_digest_e52ef25c86ecc45d727cc8ac51fe36f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5807874 ], 41, 0 );
    const_str_plain_DiscardOutBuffer = UNSTREAM_STRING_ASCII( &constant_bin[ 5807915 ], 16, 1 );
    const_str_plain_RequestToSend = UNSTREAM_STRING_ASCII( &constant_bin[ 5807931 ], 13, 1 );
    const_str_plain_DtrEnable = UNSTREAM_STRING_ASCII( &constant_bin[ 5807944 ], 9, 1 );
    const_str_plain_DataBits = UNSTREAM_STRING_ASCII( &constant_bin[ 5807953 ], 8, 1 );
    const_str_plain_RequestToSendXOnXOff = UNSTREAM_STRING_ASCII( &constant_bin[ 5807961 ], 20, 1 );
    const_str_plain_WriteTimeout = UNSTREAM_STRING_ASCII( &constant_bin[ 5807981 ], 12, 1 );
    const_str_plain_XOnXOff = UNSTREAM_STRING_ASCII( &constant_bin[ 5807974 ], 7, 1 );
    const_str_digest_69c4cad202af51a1c4c9410cd5d6940f = UNSTREAM_STRING_ASCII( &constant_bin[ 5807993 ], 25, 0 );
    const_str_plain_InfiniteTimeout = UNSTREAM_STRING_ASCII( &constant_bin[ 5808018 ], 15, 1 );
    const_str_plain_TimeoutException = UNSTREAM_STRING_ASCII( &constant_bin[ 5808033 ], 16, 1 );
    const_str_plain_IO = UNSTREAM_STRING_ASCII( &constant_bin[ 1150 ], 2, 1 );
    const_str_plain_OnePointFive = UNSTREAM_STRING_ASCII( &constant_bin[ 5808049 ], 12, 1 );
    const_str_plain_Byte = UNSTREAM_STRING_ASCII( &constant_bin[ 3670 ], 4, 1 );
    const_str_digest_3fd5154979a26655e9349e6e2691935b = UNSTREAM_STRING_ASCII( &constant_bin[ 5808061 ], 35, 0 );
    const_str_plain_CDHolding = UNSTREAM_STRING_ASCII( &constant_bin[ 5808096 ], 9, 1 );
    const_str_digest_62fd83f650899ac7d4fc07ed944eccec = UNSTREAM_STRING_ASCII( &constant_bin[ 5808105 ], 26, 0 );
    const_tuple_str_plain_self_str_plain_size_str_plain_data_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_data_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_data_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_data_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_plain_CtsHolding = UNSTREAM_STRING_ASCII( &constant_bin[ 5808131 ], 10, 1 );
    const_tuple_str_plain_string_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_string_tuple, 0, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    const_str_plain_DsrHolding = UNSTREAM_STRING_ASCII( &constant_bin[ 5808141 ], 10, 1 );
    const_str_digest_78056270b5e1d9467b1949982f3c3271 = UNSTREAM_STRING_ASCII( &constant_bin[ 5808151 ], 15, 0 );
    const_str_plain_Open = UNSTREAM_STRING_ASCII( &constant_bin[ 1398 ], 4, 1 );
    const_str_plain_sab = UNSTREAM_STRING_ASCII( &constant_bin[ 17266 ], 3, 1 );
    const_str_digest_a3cfca8a8e05d3d04838f7526d9fe242 = UNSTREAM_STRING_ASCII( &constant_bin[ 5808166 ], 35, 0 );
    const_str_plain_One = UNSTREAM_STRING_ASCII( &constant_bin[ 31968 ], 3, 1 );
    const_str_plain_Handshake = UNSTREAM_STRING_ASCII( &constant_bin[ 5808201 ], 9, 1 );
    const_str_plain_InvalidOperationException = UNSTREAM_STRING_ASCII( &constant_bin[ 5808210 ], 25, 1 );
    const_str_plain_as_byte_array = UNSTREAM_STRING_ASCII( &constant_bin[ 5808235 ], 13, 1 );
    const_str_plain_Write = UNSTREAM_STRING_ASCII( &constant_bin[ 76042 ], 5, 1 );
    const_str_plain_BytesToRead = UNSTREAM_STRING_ASCII( &constant_bin[ 5808248 ], 11, 1 );
    const_str_plain_DiscardInBuffer = UNSTREAM_STRING_ASCII( &constant_bin[ 5808259 ], 15, 1 );
    const_str_plain_System = UNSTREAM_STRING_ASCII( &constant_bin[ 1581319 ], 6, 1 );
    const_str_digest_d834a22c24710ece6b0843c42ba338ef = UNSTREAM_STRING_ASCII( &constant_bin[ 5808274 ], 19, 0 );
    const_str_plain_ReadByte = UNSTREAM_STRING_ASCII( &constant_bin[ 5808293 ], 8, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial$serialcli( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_591358001e843baaa279487020685a39;
static PyCodeObject *codeobj_e9399ef5dd3b78ad5c764cb6072e1e38;
static PyCodeObject *codeobj_e71133bff33fbb782ac266c5d3419b30;
static PyCodeObject *codeobj_e1c2a09bce0ca0e1aa639563db910872;
static PyCodeObject *codeobj_05b965bbf3861715fc48fb204d41a002;
static PyCodeObject *codeobj_5ff771457847cc9a2812f3ee91fe8c53;
static PyCodeObject *codeobj_7b4e0f46006895ff5d2e6774e033ecc4;
static PyCodeObject *codeobj_257acd6ff122ab0529d0da90f24e669d;
static PyCodeObject *codeobj_8b80935c4b2f65b7e42ee84e1842cc3d;
static PyCodeObject *codeobj_916190197838712184c26e029c11afeb;
static PyCodeObject *codeobj_30adf486289997631f3a76b247eecae0;
static PyCodeObject *codeobj_96dae8b2de49d5c49eec59abe244e5b2;
static PyCodeObject *codeobj_86941e5ba0233cfecf6892dcb8a2381c;
static PyCodeObject *codeobj_ff286f71858d4fd68657978bde921503;
static PyCodeObject *codeobj_37b89ddb7bcea76b57d4d412a1ef425f;
static PyCodeObject *codeobj_fea12d67eae7ef9840d3f71b08660930;
static PyCodeObject *codeobj_cbf35734153f85fb8ad156e3942297a1;
static PyCodeObject *codeobj_a1fc8769cfeadfbd06fa1f2f70fb3cba;
static PyCodeObject *codeobj_a8658c666e4445c077b7175bb9682185;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_d834a22c24710ece6b0843c42ba338ef );
    codeobj_591358001e843baaa279487020685a39 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 20, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e9399ef5dd3b78ad5c764cb6072e1e38 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_69c4cad202af51a1c4c9410cd5d6940f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e71133bff33fbb782ac266c5d3419b30 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Serial, 23, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_e1c2a09bce0ca0e1aa639563db910872 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__reconfigure_port, 59, const_tuple_str_plain_self_str_plain_e_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_05b965bbf3861715fc48fb204d41a002 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_break_state, 201, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5ff771457847cc9a2812f3ee91fe8c53 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_dtr_state, 215, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7b4e0f46006895ff5d2e6774e033ecc4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_rts_state, 209, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_257acd6ff122ab0529d0da90f24e669d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_as_byte_array, 19, const_tuple_str_plain_string_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8b80935c4b2f65b7e42ee84e1842cc3d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cd, 243, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_916190197838712184c26e029c11afeb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 131, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_30adf486289997631f3a76b247eecae0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cts, 221, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_96dae8b2de49d5c49eec59abe244e5b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dsr, 228, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_86941e5ba0233cfecf6892dcb8a2381c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_in_waiting, 145, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ff286f71858d4fd68657978bde921503 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open, 29, const_tuple_str_plain_self_str_plain_msg_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_37b89ddb7bcea76b57d4d412a1ef425f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 152, const_tuple_str_plain_self_str_plain_size_str_plain_data_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fea12d67eae7ef9840d3f71b08660930 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_input_buffer, 186, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cbf35734153f85fb8ad156e3942297a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_output_buffer, 192, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a1fc8769cfeadfbd06fa1f2f70fb3cba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ri, 235, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a8658c666e4445c077b7175bb9682185 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write, 172, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_10__update_break_state(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_11__update_rts_state(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_12__update_dtr_state(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_13_cts(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_14_dsr(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_15_ri(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_16_cd(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_1_as_byte_array(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_2_open(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_3__reconfigure_port(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_4_close(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_5_in_waiting(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_6_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_7_write(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_8_reset_input_buffer(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_9_reset_output_buffer(  );


// The module function definitions.
static PyObject *impl_serial$serialcli$$$function_1_as_byte_array( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[ 0 ];
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_257acd6ff122ab0529d0da90f24e669d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_591358001e843baaa279487020685a39_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_591358001e843baaa279487020685a39_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_257acd6ff122ab0529d0da90f24e669d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_257acd6ff122ab0529d0da90f24e669d, codeobj_257acd6ff122ab0529d0da90f24e669d, module_serial$serialcli, sizeof(void *) );
    frame_257acd6ff122ab0529d0da90f24e669d = cache_frame_257acd6ff122ab0529d0da90f24e669d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_257acd6ff122ab0529d0da90f24e669d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_257acd6ff122ab0529d0da90f24e669d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_sab );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sab );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sab" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_string );
            tmp_iter_arg_1 = par_string;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_591358001e843baaa279487020685a39_2, codeobj_591358001e843baaa279487020685a39, module_serial$serialcli, sizeof(void *) );
        frame_591358001e843baaa279487020685a39_2 = cache_frame_591358001e843baaa279487020685a39_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_591358001e843baaa279487020685a39_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_591358001e843baaa279487020685a39_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
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
                    type_description_2 = "o";
                    exception_lineno = 20;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_4;
                Py_INCREF( outline_0_var_x );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_ord );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ord );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ord" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 20;
                type_description_2 = "o";
                goto try_except_handler_3;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( outline_0_var_x );
            tmp_args_element_name_2 = outline_0_var_x;
            frame_591358001e843baaa279487020685a39_2->m_frame.f_lineno = 20;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;
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


                exception_lineno = 20;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_args_element_name_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_args_element_name_1 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_1_as_byte_array );
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
        RESTORE_FRAME_EXCEPTION( frame_591358001e843baaa279487020685a39_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_591358001e843baaa279487020685a39_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_591358001e843baaa279487020685a39_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_591358001e843baaa279487020685a39_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_591358001e843baaa279487020685a39_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_591358001e843baaa279487020685a39_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_591358001e843baaa279487020685a39_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame.
        if ( frame_591358001e843baaa279487020685a39_2 == cache_frame_591358001e843baaa279487020685a39_2 )
        {
            Py_DECREF( frame_591358001e843baaa279487020685a39_2 );
        }
        cache_frame_591358001e843baaa279487020685a39_2 = NULL;

        assertFrameObject( frame_591358001e843baaa279487020685a39_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "o";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_1_as_byte_array );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_x );
        outline_0_var_x = NULL;

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

        Py_XDECREF( outline_0_var_x );
        outline_0_var_x = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_1_as_byte_array );
        return NULL;
        outline_exception_1:;
        exception_lineno = 20;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_257acd6ff122ab0529d0da90f24e669d->m_frame.f_lineno = 20;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_257acd6ff122ab0529d0da90f24e669d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_257acd6ff122ab0529d0da90f24e669d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_257acd6ff122ab0529d0da90f24e669d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_257acd6ff122ab0529d0da90f24e669d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_257acd6ff122ab0529d0da90f24e669d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_257acd6ff122ab0529d0da90f24e669d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_257acd6ff122ab0529d0da90f24e669d,
        type_description_1,
        par_string
    );


    // Release cached frame.
    if ( frame_257acd6ff122ab0529d0da90f24e669d == cache_frame_257acd6ff122ab0529d0da90f24e669d )
    {
        Py_DECREF( frame_257acd6ff122ab0529d0da90f24e669d );
    }
    cache_frame_257acd6ff122ab0529d0da90f24e669d = NULL;

    assertFrameObject( frame_257acd6ff122ab0529d0da90f24e669d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_1_as_byte_array );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

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

    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_1_as_byte_array );
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


static PyObject *impl_serial$serialcli$$$function_2_open( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_msg = NULL;
    struct Nuitka_FrameObject *frame_ff286f71858d4fd68657978bde921503;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_ff286f71858d4fd68657978bde921503 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ff286f71858d4fd68657978bde921503, codeobj_ff286f71858d4fd68657978bde921503, module_serial$serialcli, sizeof(void *)+sizeof(void *) );
    frame_ff286f71858d4fd68657978bde921503 = cache_frame_ff286f71858d4fd68657978bde921503;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ff286f71858d4fd68657978bde921503 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ff286f71858d4fd68657978bde921503 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__port );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SerialException );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialException" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 35;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_ff286f71858d4fd68657978bde921503->m_frame.f_lineno = 35;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_a41f7446b10852b7fa7917c8946aa5e1_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 35;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_is_open );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SerialException );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialException" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 37;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            frame_ff286f71858d4fd68657978bde921503->m_frame.f_lineno = 37;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_088e326eed737fbd2d5feedf060c96ff_tuple, 0 ) );

            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 37;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_IO );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Ports );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SerialPort );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_portstr );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 39;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_ff286f71858d4fd68657978bde921503->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__port_handle, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_ff286f71858d4fd68657978bde921503, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_ff286f71858d4fd68657978bde921503, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_4;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_Exception );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Exception );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Exception" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_4;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto try_except_handler_3;
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
            tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
            assert( var_msg == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_msg = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__port_handle, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
        }
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_7;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SerialException );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialException" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 42;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }

            tmp_called_name_4 = tmp_mvar_value_5;
            tmp_left_name_1 = const_str_digest_62fd83f650899ac7d4fc07ed944eccec;
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_portstr );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
            tmp_right_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_msg );
            tmp_tuple_element_1 = var_msg;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
            tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
            frame_ff286f71858d4fd68657978bde921503->m_frame.f_lineno = 42;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_raise_type_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
            exception_type = tmp_raise_type_3;
            exception_lineno = 42;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_2_open );
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

        Py_XDECREF( var_msg );
        var_msg = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 38;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_ff286f71858d4fd68657978bde921503->m_frame) frame_ff286f71858d4fd68657978bde921503->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_end_3:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_2_open );
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
    // End of try:
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__rts_state );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_3 );
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
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            tmp_assattr_name_3 = Py_True;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__rts_state, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__dtr_state );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_4 );
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
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            tmp_assattr_name_4 = Py_True;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__dtr_state, tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_ff286f71858d4fd68657978bde921503->m_frame.f_lineno = 50;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__reconfigure_port );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_10;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__port_handle );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ff286f71858d4fd68657978bde921503->m_frame.f_lineno = 51;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_Open );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = Py_True;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_is_open, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__dsrdtr );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( par_self );
            tmp_called_instance_3 = par_self;
            frame_ff286f71858d4fd68657978bde921503->m_frame.f_lineno = 54;
            tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain__update_dtr_state );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__rtscts );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( par_self );
            tmp_called_instance_4 = par_self;
            frame_ff286f71858d4fd68657978bde921503->m_frame.f_lineno = 56;
            tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain__update_rts_state );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_7:;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT( par_self );
        tmp_called_instance_5 = par_self;
        frame_ff286f71858d4fd68657978bde921503->m_frame.f_lineno = 57;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_reset_input_buffer );
        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_5 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff286f71858d4fd68657978bde921503 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff286f71858d4fd68657978bde921503 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ff286f71858d4fd68657978bde921503, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ff286f71858d4fd68657978bde921503->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ff286f71858d4fd68657978bde921503, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ff286f71858d4fd68657978bde921503,
        type_description_1,
        par_self,
        var_msg
    );


    // Release cached frame.
    if ( frame_ff286f71858d4fd68657978bde921503 == cache_frame_ff286f71858d4fd68657978bde921503 )
    {
        Py_DECREF( frame_ff286f71858d4fd68657978bde921503 );
    }
    cache_frame_ff286f71858d4fd68657978bde921503 = NULL;

    assertFrameObject( frame_ff286f71858d4fd68657978bde921503 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_2_open );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_2_open );
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


static PyObject *impl_serial$serialcli$$$function_3__reconfigure_port( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_e1c2a09bce0ca0e1aa639563db910872;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_e1c2a09bce0ca0e1aa639563db910872 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e1c2a09bce0ca0e1aa639563db910872, codeobj_e1c2a09bce0ca0e1aa639563db910872, module_serial$serialcli, sizeof(void *)+sizeof(void *) );
    frame_e1c2a09bce0ca0e1aa639563db910872 = cache_frame_e1c2a09bce0ca0e1aa639563db910872;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e1c2a09bce0ca0e1aa639563db910872 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e1c2a09bce0ca0e1aa639563db910872 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__port_handle );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SerialException );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialException" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 62;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_e1c2a09bce0ca0e1aa639563db910872->m_frame.f_lineno = 62;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_145bf772d86c3cb38f291d317430df01_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 62;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__timeout );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_source_name_7;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 67;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_2;
            tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_IO );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Ports );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SerialPort );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_InfiniteTimeout );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__port_handle );
            if ( tmp_assattr_target_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_1 );

                exception_lineno = 67;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ReadTimeout, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_target_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_right_name_1;
            PyObject *tmp_assattr_target_2;
            PyObject *tmp_source_name_9;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_int );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "int" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 69;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__timeout );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1000;
            tmp_args_element_name_1 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_e1c2a09bce0ca0e1aa639563db910872->m_frame.f_lineno = 69;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__port_handle );
            if ( tmp_assattr_target_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_2 );

                exception_lineno = 69;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_ReadTimeout, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_target_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__write_timeout );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
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
            PyObject *tmp_source_name_11;
            PyObject *tmp_source_name_12;
            PyObject *tmp_source_name_13;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_assattr_target_3;
            PyObject *tmp_source_name_15;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 75;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_14 = tmp_mvar_value_4;
            tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_IO );
            if ( tmp_source_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Ports );
            Py_DECREF( tmp_source_name_13 );
            if ( tmp_source_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_SerialPort );
            Py_DECREF( tmp_source_name_12 );
            if ( tmp_source_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_InfiniteTimeout );
            Py_DECREF( tmp_source_name_11 );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_15 = par_self;
            tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__port_handle );
            if ( tmp_assattr_target_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_3 );

                exception_lineno = 75;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_WriteTimeout, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_target_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_source_name_16;
            PyObject *tmp_right_name_2;
            PyObject *tmp_assattr_target_4;
            PyObject *tmp_source_name_17;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_int );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "int" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 77;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_16 = par_self;
            tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__write_timeout );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_1000;
            tmp_args_element_name_2 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_e1c2a09bce0ca0e1aa639563db910872->m_frame.f_lineno = 77;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assattr_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_17 = par_self;
            tmp_assattr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__port_handle );
            if ( tmp_assattr_target_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_4 );

                exception_lineno = 77;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_WriteTimeout, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_target_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_3:;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_source_name_18;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_source_name_19;
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__baudrate );
        if ( tmp_assattr_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_19 = par_self;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__port_handle );
        if ( tmp_assattr_target_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_5 );

            exception_lineno = 81;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_BaudRate, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_target_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_e1c2a09bce0ca0e1aa639563db910872, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_e1c2a09bce0ca0e1aa639563db910872, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_mvar_value_6;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_IOError );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IOError );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IOError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_compexpr_right_3 = tmp_mvar_value_6;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oo";
            goto try_except_handler_3;
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
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_e = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_ValueError );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 84;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }

            tmp_called_name_4 = tmp_mvar_value_7;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_str );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 84;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }

            tmp_called_name_5 = tmp_mvar_value_8;
            CHECK_OBJECT( var_e );
            tmp_args_element_name_4 = var_e;
            frame_e1c2a09bce0ca0e1aa639563db910872->m_frame.f_lineno = 84;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
            frame_e1c2a09bce0ca0e1aa639563db910872->m_frame.f_lineno = 84;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 84;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_3__reconfigure_port );
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
        // End of try:
        goto branch_end_4;
        branch_no_4:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 80;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_e1c2a09bce0ca0e1aa639563db910872->m_frame) frame_e1c2a09bce0ca0e1aa639563db910872->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_end_4:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_3__reconfigure_port );
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
    // End of try:
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_9;
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__bytesize );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_FIVEBITS );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIVEBITS );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FIVEBITS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_4 = tmp_mvar_value_9;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
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
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_assattr_target_6;
            PyObject *tmp_source_name_21;
            tmp_assattr_name_6 = const_int_pos_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_21 = par_self;
            tmp_assattr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__port_handle );
            if ( tmp_assattr_target_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 87;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_DataBits, tmp_assattr_name_6 );
            Py_DECREF( tmp_assattr_target_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 87;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_22;
            PyObject *tmp_mvar_value_10;
            CHECK_OBJECT( par_self );
            tmp_source_name_22 = par_self;
            tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__bytesize );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SIXBITS );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SIXBITS );
            }

            if ( tmp_mvar_value_10 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SIXBITS" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 88;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_5 = tmp_mvar_value_10;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "oo";
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
                PyObject *tmp_assattr_name_7;
                PyObject *tmp_assattr_target_7;
                PyObject *tmp_source_name_23;
                tmp_assattr_name_7 = const_int_pos_6;
                CHECK_OBJECT( par_self );
                tmp_source_name_23 = par_self;
                tmp_assattr_target_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__port_handle );
                if ( tmp_assattr_target_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 89;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_DataBits, tmp_assattr_name_7 );
                Py_DECREF( tmp_assattr_target_7 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 89;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_6;
            branch_no_6:;
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                PyObject *tmp_source_name_24;
                PyObject *tmp_mvar_value_11;
                CHECK_OBJECT( par_self );
                tmp_source_name_24 = par_self;
                tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__bytesize );
                if ( tmp_compexpr_left_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 90;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SEVENBITS );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SEVENBITS );
                }

                if ( tmp_mvar_value_11 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_6 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SEVENBITS" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 90;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_right_6 = tmp_mvar_value_11;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                Py_DECREF( tmp_compexpr_left_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 90;
                    type_description_1 = "oo";
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
                    PyObject *tmp_assattr_name_8;
                    PyObject *tmp_assattr_target_8;
                    PyObject *tmp_source_name_25;
                    tmp_assattr_name_8 = const_int_pos_7;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_25 = par_self;
                    tmp_assattr_target_8 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__port_handle );
                    if ( tmp_assattr_target_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 91;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_DataBits, tmp_assattr_name_8 );
                    Py_DECREF( tmp_assattr_target_8 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 91;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_7;
                branch_no_7:;
                {
                    nuitka_bool tmp_condition_result_8;
                    PyObject *tmp_compexpr_left_7;
                    PyObject *tmp_compexpr_right_7;
                    PyObject *tmp_source_name_26;
                    PyObject *tmp_mvar_value_12;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_26 = par_self;
                    tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__bytesize );
                    if ( tmp_compexpr_left_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 92;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_EIGHTBITS );

                    if (unlikely( tmp_mvar_value_12 == NULL ))
                    {
                        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EIGHTBITS );
                    }

                    if ( tmp_mvar_value_12 == NULL )
                    {
                        Py_DECREF( tmp_compexpr_left_7 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EIGHTBITS" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 92;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }

                    tmp_compexpr_right_7 = tmp_mvar_value_12;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                    Py_DECREF( tmp_compexpr_left_7 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 92;
                        type_description_1 = "oo";
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
                        PyObject *tmp_assattr_name_9;
                        PyObject *tmp_assattr_target_9;
                        PyObject *tmp_source_name_27;
                        tmp_assattr_name_9 = const_int_pos_8;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_27 = par_self;
                        tmp_assattr_target_9 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain__port_handle );
                        if ( tmp_assattr_target_9 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 93;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_DataBits, tmp_assattr_name_9 );
                        Py_DECREF( tmp_assattr_target_9 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 93;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                    }
                    goto branch_end_8;
                    branch_no_8:;
                    {
                        PyObject *tmp_raise_type_3;
                        PyObject *tmp_called_name_6;
                        PyObject *tmp_mvar_value_13;
                        PyObject *tmp_args_element_name_5;
                        PyObject *tmp_left_name_3;
                        PyObject *tmp_right_name_3;
                        PyObject *tmp_source_name_28;
                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_ValueError );

                        if (unlikely( tmp_mvar_value_13 == NULL ))
                        {
                            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
                        }

                        if ( tmp_mvar_value_13 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 95;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_6 = tmp_mvar_value_13;
                        tmp_left_name_3 = const_str_digest_a3cfca8a8e05d3d04838f7526d9fe242;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_28 = par_self;
                        tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain__bytesize );
                        if ( tmp_right_name_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 95;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        tmp_args_element_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                        Py_DECREF( tmp_right_name_3 );
                        if ( tmp_args_element_name_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 95;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        frame_e1c2a09bce0ca0e1aa639563db910872->m_frame.f_lineno = 95;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_5 };
                            tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
                        }

                        Py_DECREF( tmp_args_element_name_5 );
                        if ( tmp_raise_type_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 95;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        exception_type = tmp_raise_type_3;
                        exception_lineno = 95;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    branch_end_8:;
                }
                branch_end_7:;
            }
            branch_end_6:;
        }
        branch_end_5:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_source_name_29;
        PyObject *tmp_mvar_value_14;
        CHECK_OBJECT( par_self );
        tmp_source_name_29 = par_self;
        tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain__parity );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_PARITY_NONE );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_NONE );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PARITY_NONE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_8 = tmp_mvar_value_14;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oo";
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
            PyObject *tmp_assattr_name_10;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_30;
            PyObject *tmp_source_name_31;
            PyObject *tmp_source_name_32;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_assattr_target_10;
            PyObject *tmp_source_name_33;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_getattr );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getattr );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getattr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 98;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_15;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 98;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_32 = tmp_mvar_value_16;
            tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_IO );
            if ( tmp_source_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_Ports );
            Py_DECREF( tmp_source_name_31 );
            if ( tmp_source_name_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_Parity );
            Py_DECREF( tmp_source_name_30 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_7 = const_str_plain_None;
            frame_e1c2a09bce0ca0e1aa639563db910872->m_frame.f_lineno = 98;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_assattr_name_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_assattr_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_33 = par_self;
            tmp_assattr_target_10 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain__port_handle );
            if ( tmp_assattr_target_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_10 );

                exception_lineno = 98;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_Parity, tmp_assattr_name_10 );
            Py_DECREF( tmp_assattr_name_10 );
            Py_DECREF( tmp_assattr_target_10 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_9;
        branch_no_9:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_source_name_34;
            PyObject *tmp_mvar_value_17;
            CHECK_OBJECT( par_self );
            tmp_source_name_34 = par_self;
            tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain__parity );
            if ( tmp_compexpr_left_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_PARITY_EVEN );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_EVEN );
            }

            if ( tmp_mvar_value_17 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_9 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PARITY_EVEN" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 99;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_9 = tmp_mvar_value_17;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            Py_DECREF( tmp_compexpr_left_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_1 = "oo";
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
                PyObject *tmp_assattr_name_11;
                PyObject *tmp_source_name_35;
                PyObject *tmp_source_name_36;
                PyObject *tmp_source_name_37;
                PyObject *tmp_source_name_38;
                PyObject *tmp_mvar_value_18;
                PyObject *tmp_assattr_target_11;
                PyObject *tmp_source_name_39;
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
                }

                if ( tmp_mvar_value_18 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 100;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_38 = tmp_mvar_value_18;
                tmp_source_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_IO );
                if ( tmp_source_name_37 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_source_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_Ports );
                Py_DECREF( tmp_source_name_37 );
                if ( tmp_source_name_36 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_source_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_Parity );
                Py_DECREF( tmp_source_name_36 );
                if ( tmp_source_name_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_assattr_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_Even );
                Py_DECREF( tmp_source_name_35 );
                if ( tmp_assattr_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_39 = par_self;
                tmp_assattr_target_11 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain__port_handle );
                if ( tmp_assattr_target_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_assattr_name_11 );

                    exception_lineno = 100;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_Parity, tmp_assattr_name_11 );
                Py_DECREF( tmp_assattr_name_11 );
                Py_DECREF( tmp_assattr_target_11 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_10;
            branch_no_10:;
            {
                nuitka_bool tmp_condition_result_11;
                PyObject *tmp_compexpr_left_10;
                PyObject *tmp_compexpr_right_10;
                PyObject *tmp_source_name_40;
                PyObject *tmp_mvar_value_19;
                CHECK_OBJECT( par_self );
                tmp_source_name_40 = par_self;
                tmp_compexpr_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain__parity );
                if ( tmp_compexpr_left_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 101;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_PARITY_ODD );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_ODD );
                }

                if ( tmp_mvar_value_19 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_10 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PARITY_ODD" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 101;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_right_10 = tmp_mvar_value_19;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                Py_DECREF( tmp_compexpr_left_10 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 101;
                    type_description_1 = "oo";
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
                    PyObject *tmp_assattr_name_12;
                    PyObject *tmp_source_name_41;
                    PyObject *tmp_source_name_42;
                    PyObject *tmp_source_name_43;
                    PyObject *tmp_source_name_44;
                    PyObject *tmp_mvar_value_20;
                    PyObject *tmp_assattr_target_12;
                    PyObject *tmp_source_name_45;
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

                    if (unlikely( tmp_mvar_value_20 == NULL ))
                    {
                        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
                    }

                    if ( tmp_mvar_value_20 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 102;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_44 = tmp_mvar_value_20;
                    tmp_source_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_IO );
                    if ( tmp_source_name_43 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 102;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_source_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_Ports );
                    Py_DECREF( tmp_source_name_43 );
                    if ( tmp_source_name_42 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 102;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_source_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_Parity );
                    Py_DECREF( tmp_source_name_42 );
                    if ( tmp_source_name_41 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 102;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assattr_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_Odd );
                    Py_DECREF( tmp_source_name_41 );
                    if ( tmp_assattr_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 102;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_45 = par_self;
                    tmp_assattr_target_12 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain__port_handle );
                    if ( tmp_assattr_target_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_assattr_name_12 );

                        exception_lineno = 102;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_Parity, tmp_assattr_name_12 );
                    Py_DECREF( tmp_assattr_name_12 );
                    Py_DECREF( tmp_assattr_target_12 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 102;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_11;
                branch_no_11:;
                {
                    nuitka_bool tmp_condition_result_12;
                    PyObject *tmp_compexpr_left_11;
                    PyObject *tmp_compexpr_right_11;
                    PyObject *tmp_source_name_46;
                    PyObject *tmp_mvar_value_21;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_46 = par_self;
                    tmp_compexpr_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain__parity );
                    if ( tmp_compexpr_left_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 103;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_PARITY_MARK );

                    if (unlikely( tmp_mvar_value_21 == NULL ))
                    {
                        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_MARK );
                    }

                    if ( tmp_mvar_value_21 == NULL )
                    {
                        Py_DECREF( tmp_compexpr_left_11 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PARITY_MARK" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 103;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }

                    tmp_compexpr_right_11 = tmp_mvar_value_21;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
                    Py_DECREF( tmp_compexpr_left_11 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 103;
                        type_description_1 = "oo";
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
                        PyObject *tmp_assattr_name_13;
                        PyObject *tmp_source_name_47;
                        PyObject *tmp_source_name_48;
                        PyObject *tmp_source_name_49;
                        PyObject *tmp_source_name_50;
                        PyObject *tmp_mvar_value_22;
                        PyObject *tmp_assattr_target_13;
                        PyObject *tmp_source_name_51;
                        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

                        if (unlikely( tmp_mvar_value_22 == NULL ))
                        {
                            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
                        }

                        if ( tmp_mvar_value_22 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 104;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_50 = tmp_mvar_value_22;
                        tmp_source_name_49 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_IO );
                        if ( tmp_source_name_49 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 104;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        tmp_source_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_Ports );
                        Py_DECREF( tmp_source_name_49 );
                        if ( tmp_source_name_48 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 104;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        tmp_source_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_Parity );
                        Py_DECREF( tmp_source_name_48 );
                        if ( tmp_source_name_47 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 104;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assattr_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_Mark );
                        Py_DECREF( tmp_source_name_47 );
                        if ( tmp_assattr_name_13 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 104;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( par_self );
                        tmp_source_name_51 = par_self;
                        tmp_assattr_target_13 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain__port_handle );
                        if ( tmp_assattr_target_13 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_assattr_name_13 );

                            exception_lineno = 104;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_Parity, tmp_assattr_name_13 );
                        Py_DECREF( tmp_assattr_name_13 );
                        Py_DECREF( tmp_assattr_target_13 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 104;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                    }
                    goto branch_end_12;
                    branch_no_12:;
                    {
                        nuitka_bool tmp_condition_result_13;
                        PyObject *tmp_compexpr_left_12;
                        PyObject *tmp_compexpr_right_12;
                        PyObject *tmp_source_name_52;
                        PyObject *tmp_mvar_value_23;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_52 = par_self;
                        tmp_compexpr_left_12 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain__parity );
                        if ( tmp_compexpr_left_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 105;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_PARITY_SPACE );

                        if (unlikely( tmp_mvar_value_23 == NULL ))
                        {
                            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_SPACE );
                        }

                        if ( tmp_mvar_value_23 == NULL )
                        {
                            Py_DECREF( tmp_compexpr_left_12 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PARITY_SPACE" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 105;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }

                        tmp_compexpr_right_12 = tmp_mvar_value_23;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
                        Py_DECREF( tmp_compexpr_left_12 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 105;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
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
                            PyObject *tmp_assattr_name_14;
                            PyObject *tmp_source_name_53;
                            PyObject *tmp_source_name_54;
                            PyObject *tmp_source_name_55;
                            PyObject *tmp_source_name_56;
                            PyObject *tmp_mvar_value_24;
                            PyObject *tmp_assattr_target_14;
                            PyObject *tmp_source_name_57;
                            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

                            if (unlikely( tmp_mvar_value_24 == NULL ))
                            {
                                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
                            }

                            if ( tmp_mvar_value_24 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 106;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }

                            tmp_source_name_56 = tmp_mvar_value_24;
                            tmp_source_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_IO );
                            if ( tmp_source_name_55 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 106;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            tmp_source_name_54 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_Ports );
                            Py_DECREF( tmp_source_name_55 );
                            if ( tmp_source_name_54 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 106;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            tmp_source_name_53 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_Parity );
                            Py_DECREF( tmp_source_name_54 );
                            if ( tmp_source_name_53 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 106;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            tmp_assattr_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_Space );
                            Py_DECREF( tmp_source_name_53 );
                            if ( tmp_assattr_name_14 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 106;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT( par_self );
                            tmp_source_name_57 = par_self;
                            tmp_assattr_target_14 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain__port_handle );
                            if ( tmp_assattr_target_14 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_assattr_name_14 );

                                exception_lineno = 106;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_Parity, tmp_assattr_name_14 );
                            Py_DECREF( tmp_assattr_name_14 );
                            Py_DECREF( tmp_assattr_target_14 );
                            if ( tmp_result == false )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 106;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                        }
                        goto branch_end_13;
                        branch_no_13:;
                        {
                            PyObject *tmp_raise_type_4;
                            PyObject *tmp_called_name_8;
                            PyObject *tmp_mvar_value_25;
                            PyObject *tmp_args_element_name_8;
                            PyObject *tmp_left_name_4;
                            PyObject *tmp_right_name_4;
                            PyObject *tmp_source_name_58;
                            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_ValueError );

                            if (unlikely( tmp_mvar_value_25 == NULL ))
                            {
                                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
                            }

                            if ( tmp_mvar_value_25 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 108;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }

                            tmp_called_name_8 = tmp_mvar_value_25;
                            tmp_left_name_4 = const_str_digest_0d38497bfe7c04f466ec0cb6cfde083e;
                            CHECK_OBJECT( par_self );
                            tmp_source_name_58 = par_self;
                            tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain__parity );
                            if ( tmp_right_name_4 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 108;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            tmp_args_element_name_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                            Py_DECREF( tmp_right_name_4 );
                            if ( tmp_args_element_name_8 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 108;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            frame_e1c2a09bce0ca0e1aa639563db910872->m_frame.f_lineno = 108;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_8 };
                                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                            }

                            Py_DECREF( tmp_args_element_name_8 );
                            if ( tmp_raise_type_4 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 108;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            exception_type = tmp_raise_type_4;
                            exception_lineno = 108;
                            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "oo";
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
        branch_end_9:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_source_name_59;
        PyObject *tmp_mvar_value_26;
        CHECK_OBJECT( par_self );
        tmp_source_name_59 = par_self;
        tmp_compexpr_left_13 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain__stopbits );
        if ( tmp_compexpr_left_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE );
        }

        if ( tmp_mvar_value_26 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STOPBITS_ONE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_13 = tmp_mvar_value_26;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        Py_DECREF( tmp_compexpr_left_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
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
        {
            PyObject *tmp_assattr_name_15;
            PyObject *tmp_source_name_60;
            PyObject *tmp_source_name_61;
            PyObject *tmp_source_name_62;
            PyObject *tmp_source_name_63;
            PyObject *tmp_mvar_value_27;
            PyObject *tmp_assattr_target_15;
            PyObject *tmp_source_name_64;
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

            if (unlikely( tmp_mvar_value_27 == NULL ))
            {
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
            }

            if ( tmp_mvar_value_27 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 111;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_63 = tmp_mvar_value_27;
            tmp_source_name_62 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_IO );
            if ( tmp_source_name_62 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_61 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_Ports );
            Py_DECREF( tmp_source_name_62 );
            if ( tmp_source_name_61 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_60 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_StopBits );
            Py_DECREF( tmp_source_name_61 );
            if ( tmp_source_name_60 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_One );
            Py_DECREF( tmp_source_name_60 );
            if ( tmp_assattr_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_64 = par_self;
            tmp_assattr_target_15 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain__port_handle );
            if ( tmp_assattr_target_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_15 );

                exception_lineno = 111;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_StopBits, tmp_assattr_name_15 );
            Py_DECREF( tmp_assattr_name_15 );
            Py_DECREF( tmp_assattr_target_15 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_14;
        branch_no_14:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_compexpr_left_14;
            PyObject *tmp_compexpr_right_14;
            PyObject *tmp_source_name_65;
            PyObject *tmp_mvar_value_28;
            CHECK_OBJECT( par_self );
            tmp_source_name_65 = par_self;
            tmp_compexpr_left_14 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain__stopbits );
            if ( tmp_compexpr_left_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE_POINT_FIVE );

            if (unlikely( tmp_mvar_value_28 == NULL ))
            {
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE_POINT_FIVE );
            }

            if ( tmp_mvar_value_28 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_14 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STOPBITS_ONE_POINT_FIVE" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 112;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_14 = tmp_mvar_value_28;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
            Py_DECREF( tmp_compexpr_left_14 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "oo";
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
                PyObject *tmp_assattr_name_16;
                PyObject *tmp_source_name_66;
                PyObject *tmp_source_name_67;
                PyObject *tmp_source_name_68;
                PyObject *tmp_source_name_69;
                PyObject *tmp_mvar_value_29;
                PyObject *tmp_assattr_target_16;
                PyObject *tmp_source_name_70;
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

                if (unlikely( tmp_mvar_value_29 == NULL ))
                {
                    tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
                }

                if ( tmp_mvar_value_29 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 113;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_69 = tmp_mvar_value_29;
                tmp_source_name_68 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_IO );
                if ( tmp_source_name_68 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_source_name_67 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_Ports );
                Py_DECREF( tmp_source_name_68 );
                if ( tmp_source_name_67 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_source_name_66 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_StopBits );
                Py_DECREF( tmp_source_name_67 );
                if ( tmp_source_name_66 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_assattr_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_OnePointFive );
                Py_DECREF( tmp_source_name_66 );
                if ( tmp_assattr_name_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_70 = par_self;
                tmp_assattr_target_16 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain__port_handle );
                if ( tmp_assattr_target_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_assattr_name_16 );

                    exception_lineno = 113;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_StopBits, tmp_assattr_name_16 );
                Py_DECREF( tmp_assattr_name_16 );
                Py_DECREF( tmp_assattr_target_16 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_15;
            branch_no_15:;
            {
                nuitka_bool tmp_condition_result_16;
                PyObject *tmp_compexpr_left_15;
                PyObject *tmp_compexpr_right_15;
                PyObject *tmp_source_name_71;
                PyObject *tmp_mvar_value_30;
                CHECK_OBJECT( par_self );
                tmp_source_name_71 = par_self;
                tmp_compexpr_left_15 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain__stopbits );
                if ( tmp_compexpr_left_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_STOPBITS_TWO );

                if (unlikely( tmp_mvar_value_30 == NULL ))
                {
                    tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_TWO );
                }

                if ( tmp_mvar_value_30 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_15 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STOPBITS_TWO" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 114;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_right_15 = tmp_mvar_value_30;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
                Py_DECREF( tmp_compexpr_left_15 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "oo";
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
                    PyObject *tmp_assattr_name_17;
                    PyObject *tmp_source_name_72;
                    PyObject *tmp_source_name_73;
                    PyObject *tmp_source_name_74;
                    PyObject *tmp_source_name_75;
                    PyObject *tmp_mvar_value_31;
                    PyObject *tmp_assattr_target_17;
                    PyObject *tmp_source_name_76;
                    tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

                    if (unlikely( tmp_mvar_value_31 == NULL ))
                    {
                        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
                    }

                    if ( tmp_mvar_value_31 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 115;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_75 = tmp_mvar_value_31;
                    tmp_source_name_74 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_IO );
                    if ( tmp_source_name_74 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 115;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_source_name_73 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_Ports );
                    Py_DECREF( tmp_source_name_74 );
                    if ( tmp_source_name_73 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 115;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_source_name_72 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_StopBits );
                    Py_DECREF( tmp_source_name_73 );
                    if ( tmp_source_name_72 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 115;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assattr_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_Two );
                    Py_DECREF( tmp_source_name_72 );
                    if ( tmp_assattr_name_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 115;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_76 = par_self;
                    tmp_assattr_target_17 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain__port_handle );
                    if ( tmp_assattr_target_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_assattr_name_17 );

                        exception_lineno = 115;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_StopBits, tmp_assattr_name_17 );
                    Py_DECREF( tmp_assattr_name_17 );
                    Py_DECREF( tmp_assattr_target_17 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 115;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_16;
                branch_no_16:;
                {
                    PyObject *tmp_raise_type_5;
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_mvar_value_32;
                    PyObject *tmp_args_element_name_9;
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_right_name_5;
                    PyObject *tmp_source_name_77;
                    tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_ValueError );

                    if (unlikely( tmp_mvar_value_32 == NULL ))
                    {
                        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
                    }

                    if ( tmp_mvar_value_32 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 117;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_9 = tmp_mvar_value_32;
                    tmp_left_name_5 = const_str_digest_3fd5154979a26655e9349e6e2691935b;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_77 = par_self;
                    tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain__stopbits );
                    if ( tmp_right_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 117;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
                    Py_DECREF( tmp_right_name_5 );
                    if ( tmp_args_element_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 117;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    frame_e1c2a09bce0ca0e1aa639563db910872->m_frame.f_lineno = 117;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_9 };
                        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_9 );
                    if ( tmp_raise_type_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 117;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_5;
                    exception_lineno = 117;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                branch_end_16:;
            }
            branch_end_15:;
        }
        branch_end_14:;
    }
    {
        nuitka_bool tmp_condition_result_17;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_78;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_source_name_79;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_78 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain__rtscts );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 119;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
        CHECK_OBJECT( par_self );
        tmp_source_name_79 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain__xonxoff );
        if ( tmp_attribute_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_2 );

            exception_lineno = 119;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_2 );
        tmp_condition_result_17 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_17 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_assattr_name_18;
            PyObject *tmp_source_name_80;
            PyObject *tmp_source_name_81;
            PyObject *tmp_source_name_82;
            PyObject *tmp_source_name_83;
            PyObject *tmp_mvar_value_33;
            PyObject *tmp_assattr_target_18;
            PyObject *tmp_source_name_84;
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

            if (unlikely( tmp_mvar_value_33 == NULL ))
            {
                tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
            }

            if ( tmp_mvar_value_33 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 120;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_83 = tmp_mvar_value_33;
            tmp_source_name_82 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain_IO );
            if ( tmp_source_name_82 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_81 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_Ports );
            Py_DECREF( tmp_source_name_82 );
            if ( tmp_source_name_81 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_80 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_Handshake );
            Py_DECREF( tmp_source_name_81 );
            if ( tmp_source_name_80 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain_RequestToSendXOnXOff );
            Py_DECREF( tmp_source_name_80 );
            if ( tmp_assattr_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_84 = par_self;
            tmp_assattr_target_18 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain__port_handle );
            if ( tmp_assattr_target_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_18 );

                exception_lineno = 120;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_Handshake, tmp_assattr_name_18 );
            Py_DECREF( tmp_assattr_name_18 );
            Py_DECREF( tmp_assattr_target_18 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_17;
        branch_no_17:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_source_name_85;
            PyObject *tmp_attribute_value_3;
            int tmp_truth_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_85 = par_self;
            tmp_attribute_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain__rtscts );
            if ( tmp_attribute_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE( tmp_attribute_value_3 );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_3 );

                exception_lineno = 121;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_18 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_3 );
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
                PyObject *tmp_assattr_name_19;
                PyObject *tmp_source_name_86;
                PyObject *tmp_source_name_87;
                PyObject *tmp_source_name_88;
                PyObject *tmp_source_name_89;
                PyObject *tmp_mvar_value_34;
                PyObject *tmp_assattr_target_19;
                PyObject *tmp_source_name_90;
                tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

                if (unlikely( tmp_mvar_value_34 == NULL ))
                {
                    tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
                }

                if ( tmp_mvar_value_34 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 122;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_89 = tmp_mvar_value_34;
                tmp_source_name_88 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_IO );
                if ( tmp_source_name_88 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 122;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_source_name_87 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_Ports );
                Py_DECREF( tmp_source_name_88 );
                if ( tmp_source_name_87 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 122;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_source_name_86 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain_Handshake );
                Py_DECREF( tmp_source_name_87 );
                if ( tmp_source_name_86 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 122;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_assattr_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_RequestToSend );
                Py_DECREF( tmp_source_name_86 );
                if ( tmp_assattr_name_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 122;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_90 = par_self;
                tmp_assattr_target_19 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain__port_handle );
                if ( tmp_assattr_target_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_assattr_name_19 );

                    exception_lineno = 122;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_Handshake, tmp_assattr_name_19 );
                Py_DECREF( tmp_assattr_name_19 );
                Py_DECREF( tmp_assattr_target_19 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 122;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_18;
            branch_no_18:;
            {
                nuitka_bool tmp_condition_result_19;
                PyObject *tmp_source_name_91;
                PyObject *tmp_attribute_value_4;
                int tmp_truth_name_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_91 = par_self;
                tmp_attribute_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain__xonxoff );
                if ( tmp_attribute_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 123;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_4 = CHECK_IF_TRUE( tmp_attribute_value_4 );
                if ( tmp_truth_name_4 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_attribute_value_4 );

                    exception_lineno = 123;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_19 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_attribute_value_4 );
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
                    PyObject *tmp_assattr_name_20;
                    PyObject *tmp_source_name_92;
                    PyObject *tmp_source_name_93;
                    PyObject *tmp_source_name_94;
                    PyObject *tmp_source_name_95;
                    PyObject *tmp_mvar_value_35;
                    PyObject *tmp_assattr_target_20;
                    PyObject *tmp_source_name_96;
                    tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

                    if (unlikely( tmp_mvar_value_35 == NULL ))
                    {
                        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
                    }

                    if ( tmp_mvar_value_35 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 124;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_95 = tmp_mvar_value_35;
                    tmp_source_name_94 = LOOKUP_ATTRIBUTE( tmp_source_name_95, const_str_plain_IO );
                    if ( tmp_source_name_94 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 124;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_source_name_93 = LOOKUP_ATTRIBUTE( tmp_source_name_94, const_str_plain_Ports );
                    Py_DECREF( tmp_source_name_94 );
                    if ( tmp_source_name_93 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 124;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_source_name_92 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_Handshake );
                    Py_DECREF( tmp_source_name_93 );
                    if ( tmp_source_name_92 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 124;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assattr_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain_XOnXOff );
                    Py_DECREF( tmp_source_name_92 );
                    if ( tmp_assattr_name_20 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 124;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_96 = par_self;
                    tmp_assattr_target_20 = LOOKUP_ATTRIBUTE( tmp_source_name_96, const_str_plain__port_handle );
                    if ( tmp_assattr_target_20 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_assattr_name_20 );

                        exception_lineno = 124;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_Handshake, tmp_assattr_name_20 );
                    Py_DECREF( tmp_assattr_name_20 );
                    Py_DECREF( tmp_assattr_target_20 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 124;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_19;
                branch_no_19:;
                {
                    PyObject *tmp_assattr_name_21;
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_mvar_value_36;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_source_name_97;
                    PyObject *tmp_source_name_98;
                    PyObject *tmp_source_name_99;
                    PyObject *tmp_mvar_value_37;
                    PyObject *tmp_args_element_name_11;
                    PyObject *tmp_assattr_target_21;
                    PyObject *tmp_source_name_100;
                    tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_getattr );

                    if (unlikely( tmp_mvar_value_36 == NULL ))
                    {
                        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getattr );
                    }

                    if ( tmp_mvar_value_36 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getattr" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 126;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_10 = tmp_mvar_value_36;
                    tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

                    if (unlikely( tmp_mvar_value_37 == NULL ))
                    {
                        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
                    }

                    if ( tmp_mvar_value_37 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 126;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_99 = tmp_mvar_value_37;
                    tmp_source_name_98 = LOOKUP_ATTRIBUTE( tmp_source_name_99, const_str_plain_IO );
                    if ( tmp_source_name_98 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 126;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_source_name_97 = LOOKUP_ATTRIBUTE( tmp_source_name_98, const_str_plain_Ports );
                    Py_DECREF( tmp_source_name_98 );
                    if ( tmp_source_name_97 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 126;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_97, const_str_plain_Handshake );
                    Py_DECREF( tmp_source_name_97 );
                    if ( tmp_args_element_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 126;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_11 = const_str_plain_None;
                    frame_e1c2a09bce0ca0e1aa639563db910872->m_frame.f_lineno = 126;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                        tmp_assattr_name_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_10 );
                    if ( tmp_assattr_name_21 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 126;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_100 = par_self;
                    tmp_assattr_target_21 = LOOKUP_ATTRIBUTE( tmp_source_name_100, const_str_plain__port_handle );
                    if ( tmp_assattr_target_21 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_assattr_name_21 );

                        exception_lineno = 126;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_Handshake, tmp_assattr_name_21 );
                    Py_DECREF( tmp_assattr_name_21 );
                    Py_DECREF( tmp_assattr_target_21 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 126;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                }
                branch_end_19:;
            }
            branch_end_18:;
        }
        branch_end_17:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1c2a09bce0ca0e1aa639563db910872 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1c2a09bce0ca0e1aa639563db910872 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1c2a09bce0ca0e1aa639563db910872, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1c2a09bce0ca0e1aa639563db910872->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1c2a09bce0ca0e1aa639563db910872, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1c2a09bce0ca0e1aa639563db910872,
        type_description_1,
        par_self,
        var_e
    );


    // Release cached frame.
    if ( frame_e1c2a09bce0ca0e1aa639563db910872 == cache_frame_e1c2a09bce0ca0e1aa639563db910872 )
    {
        Py_DECREF( frame_e1c2a09bce0ca0e1aa639563db910872 );
    }
    cache_frame_e1c2a09bce0ca0e1aa639563db910872 = NULL;

    assertFrameObject( frame_e1c2a09bce0ca0e1aa639563db910872 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_3__reconfigure_port );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_3__reconfigure_port );
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


static PyObject *impl_serial$serialcli$$$function_4_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_916190197838712184c26e029c11afeb;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_916190197838712184c26e029c11afeb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_916190197838712184c26e029c11afeb, codeobj_916190197838712184c26e029c11afeb, module_serial$serialcli, sizeof(void *) );
    frame_916190197838712184c26e029c11afeb = cache_frame_916190197838712184c26e029c11afeb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_916190197838712184c26e029c11afeb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_916190197838712184c26e029c11afeb ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_2 );

                exception_lineno = 134;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_2 );
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            // Tried code:
            {
                PyObject *tmp_called_instance_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_call_result_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_3 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 136;
                    type_description_1 = "o";
                    goto try_except_handler_2;
                }
                frame_916190197838712184c26e029c11afeb->m_frame.f_lineno = 136;
                tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_Close );
                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 136;
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
                exception_keeper_tb_1 = MAKE_TRACEBACK( frame_916190197838712184c26e029c11afeb, exception_keeper_lineno_1 );
            }
            else if ( exception_keeper_lineno_1 != 0 )
            {
                exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_916190197838712184c26e029c11afeb, exception_keeper_lineno_1 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
            PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            // Tried code:
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_compexpr_left_1;
                PyObject *tmp_compexpr_right_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_1;
                tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 137;
                    type_description_1 = "o";
                    goto try_except_handler_3;
                }

                tmp_source_name_6 = tmp_mvar_value_1;
                tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_IO );
                if ( tmp_source_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 137;
                    type_description_1 = "o";
                    goto try_except_handler_3;
                }
                tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Ports );
                Py_DECREF( tmp_source_name_5 );
                if ( tmp_source_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 137;
                    type_description_1 = "o";
                    goto try_except_handler_3;
                }
                tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_InvalidOperationException );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_compexpr_right_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 137;
                    type_description_1 = "o";
                    goto try_except_handler_3;
                }
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
                Py_DECREF( tmp_compexpr_right_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 137;
                    type_description_1 = "o";
                    goto try_except_handler_3;
                }
                tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 137;
                    type_description_1 = "o";
                    goto try_except_handler_3;
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
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 135;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_916190197838712184c26e029c11afeb->m_frame) frame_916190197838712184c26e029c11afeb->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "o";
                goto try_except_handler_3;
                branch_no_3:;
            }
            goto try_end_2;
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
            try_end_2:;
            // Restore previous exception.
            SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
            goto try_end_1;
            // exception handler codes exits in all cases
            NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_4_close );
            return NULL;
            // End of try:
            try_end_1:;
            {
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_assattr_target_1;
                tmp_assattr_name_1 = Py_None;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_1 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__port_handle, tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 140;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = Py_False;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_is_open, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_916190197838712184c26e029c11afeb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_916190197838712184c26e029c11afeb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_916190197838712184c26e029c11afeb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_916190197838712184c26e029c11afeb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_916190197838712184c26e029c11afeb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_916190197838712184c26e029c11afeb,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_916190197838712184c26e029c11afeb == cache_frame_916190197838712184c26e029c11afeb )
    {
        Py_DECREF( frame_916190197838712184c26e029c11afeb );
    }
    cache_frame_916190197838712184c26e029c11afeb = NULL;

    assertFrameObject( frame_916190197838712184c26e029c11afeb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_4_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_4_close );
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


static PyObject *impl_serial$serialcli$$$function_5_in_waiting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_86941e5ba0233cfecf6892dcb8a2381c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_86941e5ba0233cfecf6892dcb8a2381c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_86941e5ba0233cfecf6892dcb8a2381c, codeobj_86941e5ba0233cfecf6892dcb8a2381c, module_serial$serialcli, sizeof(void *) );
    frame_86941e5ba0233cfecf6892dcb8a2381c = cache_frame_86941e5ba0233cfecf6892dcb8a2381c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_86941e5ba0233cfecf6892dcb8a2381c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_86941e5ba0233cfecf6892dcb8a2381c ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "o";
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "portNotOpenError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 149;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 149;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_BytesToRead );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86941e5ba0233cfecf6892dcb8a2381c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_86941e5ba0233cfecf6892dcb8a2381c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86941e5ba0233cfecf6892dcb8a2381c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_86941e5ba0233cfecf6892dcb8a2381c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_86941e5ba0233cfecf6892dcb8a2381c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_86941e5ba0233cfecf6892dcb8a2381c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_86941e5ba0233cfecf6892dcb8a2381c,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_86941e5ba0233cfecf6892dcb8a2381c == cache_frame_86941e5ba0233cfecf6892dcb8a2381c )
    {
        Py_DECREF( frame_86941e5ba0233cfecf6892dcb8a2381c );
    }
    cache_frame_86941e5ba0233cfecf6892dcb8a2381c = NULL;

    assertFrameObject( frame_86941e5ba0233cfecf6892dcb8a2381c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_5_in_waiting );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_5_in_waiting );
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


static PyObject *impl_serial$serialcli$$$function_6_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_data = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
    struct Nuitka_FrameObject *frame_37b89ddb7bcea76b57d4d412a1ef425f;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_37b89ddb7bcea76b57d4d412a1ef425f = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_37b89ddb7bcea76b57d4d412a1ef425f, codeobj_37b89ddb7bcea76b57d4d412a1ef425f, module_serial$serialcli, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_37b89ddb7bcea76b57d4d412a1ef425f = cache_frame_37b89ddb7bcea76b57d4d412a1ef425f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_37b89ddb7bcea76b57d4d412a1ef425f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_37b89ddb7bcea76b57d4d412a1ef425f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooo";
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "portNotOpenError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 159;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 159;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_bytearray );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytearray );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytearray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 162;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        frame_37b89ddb7bcea76b57d4d412a1ef425f->m_frame.f_lineno = 162;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_data == NULL );
        var_data = tmp_assign_source_1;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        if ( par_size == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "size" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_2 = par_size;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooo";
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
        goto loop_end_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_True;
        {
            PyObject *old = tmp_try_except_1__unhandled_indicator;
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
            Py_INCREF( tmp_try_except_1__unhandled_indicator );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( var_data );
        tmp_source_name_2 = var_data;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 165;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        frame_37b89ddb7bcea76b57d4d412a1ef425f->m_frame.f_lineno = 165;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ReadByte );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 165;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        frame_37b89ddb7bcea76b57d4d412a1ef425f->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_1 );
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_37b89ddb7bcea76b57d4d412a1ef425f, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_37b89ddb7bcea76b57d4d412a1ef425f, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 166;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_TimeoutException );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooo";
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
        goto try_break_handler_4;
        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 164;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_37b89ddb7bcea76b57d4d412a1ef425f->m_frame) frame_37b89ddb7bcea76b57d4d412a1ef425f->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_4;
        branch_end_3:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_6_read );
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // try break handler code:
    try_break_handler_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_break_handler_2;
    // End of try:
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( tmp_try_except_1__unhandled_indicator );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_try_except_1__unhandled_indicator );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_left_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            if ( par_size == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "size" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 169;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_left_name_1 = par_size;
            tmp_right_name_1 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = tmp_left_name_1;
            par_size = tmp_assign_source_3;

        }
        branch_no_4:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // try break handler code:
    try_break_handler_2:;
    goto loop_end_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( var_data );
        tmp_args_element_name_2 = var_data;
        frame_37b89ddb7bcea76b57d4d412a1ef425f->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37b89ddb7bcea76b57d4d412a1ef425f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_37b89ddb7bcea76b57d4d412a1ef425f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37b89ddb7bcea76b57d4d412a1ef425f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_37b89ddb7bcea76b57d4d412a1ef425f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_37b89ddb7bcea76b57d4d412a1ef425f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_37b89ddb7bcea76b57d4d412a1ef425f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_37b89ddb7bcea76b57d4d412a1ef425f,
        type_description_1,
        par_self,
        par_size,
        var_data
    );


    // Release cached frame.
    if ( frame_37b89ddb7bcea76b57d4d412a1ef425f == cache_frame_37b89ddb7bcea76b57d4d412a1ef425f )
    {
        Py_DECREF( frame_37b89ddb7bcea76b57d4d412a1ef425f );
    }
    cache_frame_37b89ddb7bcea76b57d4d412a1ef425f = NULL;

    assertFrameObject( frame_37b89ddb7bcea76b57d4d412a1ef425f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_6_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_6_read );
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


static PyObject *impl_serial$serialcli$$$function_7_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a8658c666e4445c077b7175bb9682185;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a8658c666e4445c077b7175bb9682185 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a8658c666e4445c077b7175bb9682185, codeobj_a8658c666e4445c077b7175bb9682185, module_serial$serialcli, sizeof(void *)+sizeof(void *) );
    frame_a8658c666e4445c077b7175bb9682185 = cache_frame_a8658c666e4445c077b7175bb9682185;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a8658c666e4445c077b7175bb9682185 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a8658c666e4445c077b7175bb9682185 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "oo";
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "portNotOpenError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 175;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 175;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Write );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_as_byte_array );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_byte_array );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "as_byte_array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 181;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_2 = par_data;
        frame_a8658c666e4445c077b7175bb9682185->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 181;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_3 = const_int_0;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_len );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "len" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 181;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_5 = par_data;
        frame_a8658c666e4445c077b7175bb9682185->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 181;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_a8658c666e4445c077b7175bb9682185->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a8658c666e4445c077b7175bb9682185, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a8658c666e4445c077b7175bb9682185, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_TimeoutException );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_writeTimeoutError );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_writeTimeoutError );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "writeTimeoutError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 183;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }

            tmp_raise_type_2 = tmp_mvar_value_5;
            exception_type = tmp_raise_type_2;
            Py_INCREF( tmp_raise_type_2 );
            exception_lineno = 183;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 178;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_a8658c666e4445c077b7175bb9682185->m_frame) frame_a8658c666e4445c077b7175bb9682185->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_end_2:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_7_write );
    return NULL;
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
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_len );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "len" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_6 = par_data;
        frame_a8658c666e4445c077b7175bb9682185->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8658c666e4445c077b7175bb9682185 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8658c666e4445c077b7175bb9682185 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8658c666e4445c077b7175bb9682185 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8658c666e4445c077b7175bb9682185, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8658c666e4445c077b7175bb9682185->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8658c666e4445c077b7175bb9682185, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a8658c666e4445c077b7175bb9682185,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_a8658c666e4445c077b7175bb9682185 == cache_frame_a8658c666e4445c077b7175bb9682185 )
    {
        Py_DECREF( frame_a8658c666e4445c077b7175bb9682185 );
    }
    cache_frame_a8658c666e4445c077b7175bb9682185 = NULL;

    assertFrameObject( frame_a8658c666e4445c077b7175bb9682185 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_7_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_7_write );
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


static PyObject *impl_serial$serialcli$$$function_8_reset_input_buffer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_fea12d67eae7ef9840d3f71b08660930;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fea12d67eae7ef9840d3f71b08660930 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fea12d67eae7ef9840d3f71b08660930, codeobj_fea12d67eae7ef9840d3f71b08660930, module_serial$serialcli, sizeof(void *) );
    frame_fea12d67eae7ef9840d3f71b08660930 = cache_frame_fea12d67eae7ef9840d3f71b08660930;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fea12d67eae7ef9840d3f71b08660930 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fea12d67eae7ef9840d3f71b08660930 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "o";
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "portNotOpenError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 189;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 189;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fea12d67eae7ef9840d3f71b08660930->m_frame.f_lineno = 190;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DiscardInBuffer );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fea12d67eae7ef9840d3f71b08660930 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fea12d67eae7ef9840d3f71b08660930 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fea12d67eae7ef9840d3f71b08660930, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fea12d67eae7ef9840d3f71b08660930->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fea12d67eae7ef9840d3f71b08660930, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fea12d67eae7ef9840d3f71b08660930,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_fea12d67eae7ef9840d3f71b08660930 == cache_frame_fea12d67eae7ef9840d3f71b08660930 )
    {
        Py_DECREF( frame_fea12d67eae7ef9840d3f71b08660930 );
    }
    cache_frame_fea12d67eae7ef9840d3f71b08660930 = NULL;

    assertFrameObject( frame_fea12d67eae7ef9840d3f71b08660930 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_8_reset_input_buffer );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_8_reset_input_buffer );
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


static PyObject *impl_serial$serialcli$$$function_9_reset_output_buffer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_cbf35734153f85fb8ad156e3942297a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cbf35734153f85fb8ad156e3942297a1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cbf35734153f85fb8ad156e3942297a1, codeobj_cbf35734153f85fb8ad156e3942297a1, module_serial$serialcli, sizeof(void *) );
    frame_cbf35734153f85fb8ad156e3942297a1 = cache_frame_cbf35734153f85fb8ad156e3942297a1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cbf35734153f85fb8ad156e3942297a1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cbf35734153f85fb8ad156e3942297a1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "o";
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "portNotOpenError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 198;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 198;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_cbf35734153f85fb8ad156e3942297a1->m_frame.f_lineno = 199;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DiscardOutBuffer );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbf35734153f85fb8ad156e3942297a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbf35734153f85fb8ad156e3942297a1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cbf35734153f85fb8ad156e3942297a1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cbf35734153f85fb8ad156e3942297a1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cbf35734153f85fb8ad156e3942297a1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cbf35734153f85fb8ad156e3942297a1,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_cbf35734153f85fb8ad156e3942297a1 == cache_frame_cbf35734153f85fb8ad156e3942297a1 )
    {
        Py_DECREF( frame_cbf35734153f85fb8ad156e3942297a1 );
    }
    cache_frame_cbf35734153f85fb8ad156e3942297a1 = NULL;

    assertFrameObject( frame_cbf35734153f85fb8ad156e3942297a1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_9_reset_output_buffer );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_9_reset_output_buffer );
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


static PyObject *impl_serial$serialcli$$$function_10__update_break_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_05b965bbf3861715fc48fb204d41a002;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_05b965bbf3861715fc48fb204d41a002 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_05b965bbf3861715fc48fb204d41a002, codeobj_05b965bbf3861715fc48fb204d41a002, module_serial$serialcli, sizeof(void *) );
    frame_05b965bbf3861715fc48fb204d41a002 = cache_frame_05b965bbf3861715fc48fb204d41a002;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_05b965bbf3861715fc48fb204d41a002 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_05b965bbf3861715fc48fb204d41a002 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "o";
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "portNotOpenError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 206;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 206;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_bool );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bool );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bool" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 207;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__break_state );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_05b965bbf3861715fc48fb204d41a002->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
        if ( tmp_assattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_1 );

            exception_lineno = 207;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_BreakState, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05b965bbf3861715fc48fb204d41a002 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05b965bbf3861715fc48fb204d41a002 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_05b965bbf3861715fc48fb204d41a002, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_05b965bbf3861715fc48fb204d41a002->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_05b965bbf3861715fc48fb204d41a002, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_05b965bbf3861715fc48fb204d41a002,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_05b965bbf3861715fc48fb204d41a002 == cache_frame_05b965bbf3861715fc48fb204d41a002 )
    {
        Py_DECREF( frame_05b965bbf3861715fc48fb204d41a002 );
    }
    cache_frame_05b965bbf3861715fc48fb204d41a002 = NULL;

    assertFrameObject( frame_05b965bbf3861715fc48fb204d41a002 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_10__update_break_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_10__update_break_state );
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


static PyObject *impl_serial$serialcli$$$function_11__update_rts_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7b4e0f46006895ff5d2e6774e033ecc4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7b4e0f46006895ff5d2e6774e033ecc4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7b4e0f46006895ff5d2e6774e033ecc4, codeobj_7b4e0f46006895ff5d2e6774e033ecc4, module_serial$serialcli, sizeof(void *) );
    frame_7b4e0f46006895ff5d2e6774e033ecc4 = cache_frame_7b4e0f46006895ff5d2e6774e033ecc4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7b4e0f46006895ff5d2e6774e033ecc4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7b4e0f46006895ff5d2e6774e033ecc4 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "o";
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "portNotOpenError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 212;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 212;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_bool );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bool );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bool" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 213;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__rts_state );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7b4e0f46006895ff5d2e6774e033ecc4->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
        if ( tmp_assattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_1 );

            exception_lineno = 213;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_RtsEnable, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b4e0f46006895ff5d2e6774e033ecc4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b4e0f46006895ff5d2e6774e033ecc4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b4e0f46006895ff5d2e6774e033ecc4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b4e0f46006895ff5d2e6774e033ecc4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b4e0f46006895ff5d2e6774e033ecc4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7b4e0f46006895ff5d2e6774e033ecc4,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7b4e0f46006895ff5d2e6774e033ecc4 == cache_frame_7b4e0f46006895ff5d2e6774e033ecc4 )
    {
        Py_DECREF( frame_7b4e0f46006895ff5d2e6774e033ecc4 );
    }
    cache_frame_7b4e0f46006895ff5d2e6774e033ecc4 = NULL;

    assertFrameObject( frame_7b4e0f46006895ff5d2e6774e033ecc4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_11__update_rts_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_11__update_rts_state );
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


static PyObject *impl_serial$serialcli$$$function_12__update_dtr_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_5ff771457847cc9a2812f3ee91fe8c53;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5ff771457847cc9a2812f3ee91fe8c53 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5ff771457847cc9a2812f3ee91fe8c53, codeobj_5ff771457847cc9a2812f3ee91fe8c53, module_serial$serialcli, sizeof(void *) );
    frame_5ff771457847cc9a2812f3ee91fe8c53 = cache_frame_5ff771457847cc9a2812f3ee91fe8c53;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5ff771457847cc9a2812f3ee91fe8c53 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5ff771457847cc9a2812f3ee91fe8c53 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "o";
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "portNotOpenError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 218;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 218;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_bool );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bool );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bool" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__dtr_state );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5ff771457847cc9a2812f3ee91fe8c53->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
        if ( tmp_assattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_1 );

            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_DtrEnable, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5ff771457847cc9a2812f3ee91fe8c53 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5ff771457847cc9a2812f3ee91fe8c53 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5ff771457847cc9a2812f3ee91fe8c53, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5ff771457847cc9a2812f3ee91fe8c53->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5ff771457847cc9a2812f3ee91fe8c53, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5ff771457847cc9a2812f3ee91fe8c53,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_5ff771457847cc9a2812f3ee91fe8c53 == cache_frame_5ff771457847cc9a2812f3ee91fe8c53 )
    {
        Py_DECREF( frame_5ff771457847cc9a2812f3ee91fe8c53 );
    }
    cache_frame_5ff771457847cc9a2812f3ee91fe8c53 = NULL;

    assertFrameObject( frame_5ff771457847cc9a2812f3ee91fe8c53 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_12__update_dtr_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_12__update_dtr_state );
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


static PyObject *impl_serial$serialcli$$$function_13_cts( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_30adf486289997631f3a76b247eecae0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_30adf486289997631f3a76b247eecae0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_30adf486289997631f3a76b247eecae0, codeobj_30adf486289997631f3a76b247eecae0, module_serial$serialcli, sizeof(void *) );
    frame_30adf486289997631f3a76b247eecae0 = cache_frame_30adf486289997631f3a76b247eecae0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_30adf486289997631f3a76b247eecae0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_30adf486289997631f3a76b247eecae0 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "o";
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "portNotOpenError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 225;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 225;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CtsHolding );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_30adf486289997631f3a76b247eecae0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30adf486289997631f3a76b247eecae0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_30adf486289997631f3a76b247eecae0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_30adf486289997631f3a76b247eecae0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_30adf486289997631f3a76b247eecae0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_30adf486289997631f3a76b247eecae0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_30adf486289997631f3a76b247eecae0,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_30adf486289997631f3a76b247eecae0 == cache_frame_30adf486289997631f3a76b247eecae0 )
    {
        Py_DECREF( frame_30adf486289997631f3a76b247eecae0 );
    }
    cache_frame_30adf486289997631f3a76b247eecae0 = NULL;

    assertFrameObject( frame_30adf486289997631f3a76b247eecae0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_13_cts );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_13_cts );
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


static PyObject *impl_serial$serialcli$$$function_14_dsr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_96dae8b2de49d5c49eec59abe244e5b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_96dae8b2de49d5c49eec59abe244e5b2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_96dae8b2de49d5c49eec59abe244e5b2, codeobj_96dae8b2de49d5c49eec59abe244e5b2, module_serial$serialcli, sizeof(void *) );
    frame_96dae8b2de49d5c49eec59abe244e5b2 = cache_frame_96dae8b2de49d5c49eec59abe244e5b2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_96dae8b2de49d5c49eec59abe244e5b2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_96dae8b2de49d5c49eec59abe244e5b2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "o";
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "portNotOpenError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 232;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 232;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_DsrHolding );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_96dae8b2de49d5c49eec59abe244e5b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_96dae8b2de49d5c49eec59abe244e5b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_96dae8b2de49d5c49eec59abe244e5b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_96dae8b2de49d5c49eec59abe244e5b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_96dae8b2de49d5c49eec59abe244e5b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_96dae8b2de49d5c49eec59abe244e5b2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_96dae8b2de49d5c49eec59abe244e5b2,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_96dae8b2de49d5c49eec59abe244e5b2 == cache_frame_96dae8b2de49d5c49eec59abe244e5b2 )
    {
        Py_DECREF( frame_96dae8b2de49d5c49eec59abe244e5b2 );
    }
    cache_frame_96dae8b2de49d5c49eec59abe244e5b2 = NULL;

    assertFrameObject( frame_96dae8b2de49d5c49eec59abe244e5b2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_14_dsr );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_14_dsr );
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


static PyObject *impl_serial$serialcli$$$function_15_ri( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a1fc8769cfeadfbd06fa1f2f70fb3cba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a1fc8769cfeadfbd06fa1f2f70fb3cba = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a1fc8769cfeadfbd06fa1f2f70fb3cba, codeobj_a1fc8769cfeadfbd06fa1f2f70fb3cba, module_serial$serialcli, sizeof(void *) );
    frame_a1fc8769cfeadfbd06fa1f2f70fb3cba = cache_frame_a1fc8769cfeadfbd06fa1f2f70fb3cba;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a1fc8769cfeadfbd06fa1f2f70fb3cba );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a1fc8769cfeadfbd06fa1f2f70fb3cba ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "o";
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "portNotOpenError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 239;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 239;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a1fc8769cfeadfbd06fa1f2f70fb3cba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a1fc8769cfeadfbd06fa1f2f70fb3cba );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a1fc8769cfeadfbd06fa1f2f70fb3cba, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a1fc8769cfeadfbd06fa1f2f70fb3cba->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a1fc8769cfeadfbd06fa1f2f70fb3cba, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a1fc8769cfeadfbd06fa1f2f70fb3cba,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a1fc8769cfeadfbd06fa1f2f70fb3cba == cache_frame_a1fc8769cfeadfbd06fa1f2f70fb3cba )
    {
        Py_DECREF( frame_a1fc8769cfeadfbd06fa1f2f70fb3cba );
    }
    cache_frame_a1fc8769cfeadfbd06fa1f2f70fb3cba = NULL;

    assertFrameObject( frame_a1fc8769cfeadfbd06fa1f2f70fb3cba );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_15_ri );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_15_ri );
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


static PyObject *impl_serial$serialcli$$$function_16_cd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8b80935c4b2f65b7e42ee84e1842cc3d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8b80935c4b2f65b7e42ee84e1842cc3d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8b80935c4b2f65b7e42ee84e1842cc3d, codeobj_8b80935c4b2f65b7e42ee84e1842cc3d, module_serial$serialcli, sizeof(void *) );
    frame_8b80935c4b2f65b7e42ee84e1842cc3d = cache_frame_8b80935c4b2f65b7e42ee84e1842cc3d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8b80935c4b2f65b7e42ee84e1842cc3d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8b80935c4b2f65b7e42ee84e1842cc3d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "o";
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "portNotOpenError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 247;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 247;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CDHolding );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b80935c4b2f65b7e42ee84e1842cc3d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b80935c4b2f65b7e42ee84e1842cc3d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b80935c4b2f65b7e42ee84e1842cc3d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8b80935c4b2f65b7e42ee84e1842cc3d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8b80935c4b2f65b7e42ee84e1842cc3d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8b80935c4b2f65b7e42ee84e1842cc3d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8b80935c4b2f65b7e42ee84e1842cc3d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_8b80935c4b2f65b7e42ee84e1842cc3d == cache_frame_8b80935c4b2f65b7e42ee84e1842cc3d )
    {
        Py_DECREF( frame_8b80935c4b2f65b7e42ee84e1842cc3d );
    }
    cache_frame_8b80935c4b2f65b7e42ee84e1842cc3d = NULL;

    assertFrameObject( frame_8b80935c4b2f65b7e42ee84e1842cc3d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_16_cd );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_16_cd );
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



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_10__update_break_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_10__update_break_state,
        const_str_plain__update_break_state,
#if PYTHON_VERSION >= 300
        const_str_digest_b40497f26645e3ebadb6514ab8d446ba,
#endif
        codeobj_05b965bbf3861715fc48fb204d41a002,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_38086bdc3fad8f6ffed0ae55cb1f1a49,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_11__update_rts_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_11__update_rts_state,
        const_str_plain__update_rts_state,
#if PYTHON_VERSION >= 300
        const_str_digest_1e77c865d9cc3714cae3a6bd34503ca9,
#endif
        codeobj_7b4e0f46006895ff5d2e6774e033ecc4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_1d3403f47e70d0d3c7366e99c0db7fa8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_12__update_dtr_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_12__update_dtr_state,
        const_str_plain__update_dtr_state,
#if PYTHON_VERSION >= 300
        const_str_digest_55bd609d83337e3e53f56f56fb6e69c2,
#endif
        codeobj_5ff771457847cc9a2812f3ee91fe8c53,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_2b96e25c8d393fdf065d358454fdf25c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_13_cts(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_13_cts,
        const_str_plain_cts,
#if PYTHON_VERSION >= 300
        const_str_digest_444a195d697d77e6dc3d797b3cd6086d,
#endif
        codeobj_30adf486289997631f3a76b247eecae0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_06425a8e1b9d5eab562978eb6eacf777,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_14_dsr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_14_dsr,
        const_str_plain_dsr,
#if PYTHON_VERSION >= 300
        const_str_digest_c425e1720ed7efc14d8a103f222711b2,
#endif
        codeobj_96dae8b2de49d5c49eec59abe244e5b2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_54cde0cd7a92974ff918f0defbd1eeb9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_15_ri(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_15_ri,
        const_str_plain_ri,
#if PYTHON_VERSION >= 300
        const_str_digest_99bcd2cd4b1caacf3cac0b2495622ee2,
#endif
        codeobj_a1fc8769cfeadfbd06fa1f2f70fb3cba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_c987d57c872daa303d57e57028663dbb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_16_cd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_16_cd,
        const_str_plain_cd,
#if PYTHON_VERSION >= 300
        const_str_digest_9777a2e7909bbc36bb577eeb2ac8826b,
#endif
        codeobj_8b80935c4b2f65b7e42ee84e1842cc3d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_faa07c45c026cd5370bf39ce65b9f2d8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_1_as_byte_array(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_1_as_byte_array,
        const_str_plain_as_byte_array,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_257acd6ff122ab0529d0da90f24e669d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_2_open(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_2_open,
        const_str_plain_open,
#if PYTHON_VERSION >= 300
        const_str_digest_3c35695160658dede20e26ab5c064c8b,
#endif
        codeobj_ff286f71858d4fd68657978bde921503,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_4b91cca6339a9a892cf0e30d6bd1bdfc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_3__reconfigure_port(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_3__reconfigure_port,
        const_str_plain__reconfigure_port,
#if PYTHON_VERSION >= 300
        const_str_digest_4333ea5a1e0d9523f79855910d1cf6f7,
#endif
        codeobj_e1c2a09bce0ca0e1aa639563db910872,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_47be6feae340d11ceea1b2be1116c946,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_4_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_4_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_b7525636ddb73d1aea5ab60e59f79aaf,
#endif
        codeobj_916190197838712184c26e029c11afeb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_ca3087f1fed5e9b894c48e0dbbd2f218,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_5_in_waiting(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_5_in_waiting,
        const_str_plain_in_waiting,
#if PYTHON_VERSION >= 300
        const_str_digest_84335857b51bb81565c03cce4760dbdb,
#endif
        codeobj_86941e5ba0233cfecf6892dcb8a2381c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_72db89f2656c7536ad3ca9676d132571,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_6_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_6_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 300
        const_str_digest_753bea82ba0eb08b3c188d4785781d6a,
#endif
        codeobj_37b89ddb7bcea76b57d4d412a1ef425f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_67381b97568fd04864d7225afb09d3b9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_7_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_7_write,
        const_str_plain_write,
#if PYTHON_VERSION >= 300
        const_str_digest_872307698c9c04ef72f670bc6f1882ef,
#endif
        codeobj_a8658c666e4445c077b7175bb9682185,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_59d8c08c8b321dd488f0cfd9cc30b9cf,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_8_reset_input_buffer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_8_reset_input_buffer,
        const_str_plain_reset_input_buffer,
#if PYTHON_VERSION >= 300
        const_str_digest_0081767d335d9fb963b22b42d5219f43,
#endif
        codeobj_fea12d67eae7ef9840d3f71b08660930,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_bd2e98b142ff21c9f389c674d6946c9a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_9_reset_output_buffer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_9_reset_output_buffer,
        const_str_plain_reset_output_buffer,
#if PYTHON_VERSION >= 300
        const_str_digest_ad4d3667ad4be7949c20c65bd946d9a1,
#endif
        codeobj_cbf35734153f85fb8ad156e3942297a1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialcli,
        const_str_digest_14aa7bed476b499178dd8a4fa54d666e,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$serialcli =
{
    PyModuleDef_HEAD_INIT,
    "serial.serialcli",
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

MOD_INIT_DECL( serial$serialcli )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$serialcli );
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
    puts("serial.serialcli: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.serialcli: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.serialcli: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserial$serialcli" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$serialcli = Py_InitModule4(
        "serial.serialcli",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_serial$serialcli = PyModule_Create( &mdef_serial$serialcli );
#endif

    moduledict_serial$serialcli = MODULE_DICT( module_serial$serialcli );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_serial$serialcli,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_serial$serialcli,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_serial$serialcli,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_serial$serialcli,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_serial$serialcli );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ca5d450d1c32d53f6bfc010c234e26bd, module_serial$serialcli );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_e9399ef5dd3b78ad5c764cb6072e1e38;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_serial$serialcli_23 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_e71133bff33fbb782ac266c5d3419b30_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e71133bff33fbb782ac266c5d3419b30_2 = NULL;
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
        UPDATE_STRING_DICT0( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_e9399ef5dd3b78ad5c764cb6072e1e38 = MAKE_MODULE_FRAME( codeobj_e9399ef5dd3b78ad5c764cb6072e1e38, module_serial$serialcli );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e9399ef5dd3b78ad5c764cb6072e1e38 );
    assert( Py_REFCNT( frame_e9399ef5dd3b78ad5c764cb6072e1e38 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_System;
        tmp_globals_name_1 = (PyObject *)moduledict_serial$serialcli;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_e9399ef5dd3b78ad5c764cb6072e1e38->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_78056270b5e1d9467b1949982f3c3271;
        tmp_globals_name_2 = (PyObject *)moduledict_serial$serialcli;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_e9399ef5dd3b78ad5c764cb6072e1e38->m_frame.f_lineno = 11;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
        tmp_globals_name_3 = (PyObject *)moduledict_serial$serialcli;
        tmp_locals_name_3 = (PyObject *)moduledict_serial$serialcli;
        tmp_fromlist_name_3 = const_tuple_str_chr_42_tuple;
        tmp_level_name_3 = const_int_0;
        frame_e9399ef5dd3b78ad5c764cb6072e1e38->m_frame.f_lineno = 12;
        tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_star_imported_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_serial$serialcli, true, tmp_star_imported_1 );
        Py_DECREF( tmp_star_imported_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Array );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_subscribed_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "System" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Byte );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_sab, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_serial$serialcli$$$function_1_as_byte_array(  );



        UPDATE_STRING_DICT1( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_as_byte_array, tmp_assign_source_7 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SerialBase );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialBase );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialBase" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;

            goto try_except_handler_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_5;
        tmp_assign_source_8 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_8, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

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


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_subscribed_name_2 = tmp_class_creation_1__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_10 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
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


            exception_lineno = 23;

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


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_3 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_4 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;

                goto try_except_handler_1;
            }
            tmp_tuple_element_2 = const_str_plain_Serial;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_e9399ef5dd3b78ad5c764cb6072e1e38->m_frame.f_lineno = 23;
            tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_11;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_5 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;

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
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_6;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 23;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_6 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_6 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_6 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 23;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 23;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 23;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_12;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_serial$serialcli_23 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_ca5d450d1c32d53f6bfc010c234e26bd;
        tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_e52ef25c86ecc45d727cc8ac51fe36f4;
        tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_Serial;
        tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_e71133bff33fbb782ac266c5d3419b30_2, codeobj_e71133bff33fbb782ac266c5d3419b30, module_serial$serialcli, sizeof(void *) );
        frame_e71133bff33fbb782ac266c5d3419b30_2 = cache_frame_e71133bff33fbb782ac266c5d3419b30_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_e71133bff33fbb782ac266c5d3419b30_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_e71133bff33fbb782ac266c5d3419b30_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_tuple_5aee5ca7adb77075f0cc1cb4927b0a43_tuple;
        tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain_BAUDRATES, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialcli$$$function_2_open(  );



        tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain_open, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialcli$$$function_3__reconfigure_port(  );



        tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain__reconfigure_port, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialcli$$$function_4_close(  );



        tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain_close, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_2 = PyObject_GetItem( locals_serial$serialcli_23, const_str_plain_property );

            if ( tmp_called_name_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_property );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_property );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 145;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_2 = tmp_mvar_value_6;
                Py_INCREF( tmp_called_name_2 );
                }
            }

            tmp_args_element_name_1 = MAKE_FUNCTION_serial$serialcli$$$function_5_in_waiting(  );



            frame_e71133bff33fbb782ac266c5d3419b30_2->m_frame.f_lineno = 145;
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


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain_in_waiting, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_int_pos_1_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_serial$serialcli$$$function_6_read( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain_read, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialcli$$$function_7_write(  );



        tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain_write, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialcli$$$function_8_reset_input_buffer(  );



        tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain_reset_input_buffer, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialcli$$$function_9_reset_output_buffer(  );



        tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain_reset_output_buffer, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialcli$$$function_10__update_break_state(  );



        tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain__update_break_state, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialcli$$$function_11__update_rts_state(  );



        tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain__update_rts_state, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialcli$$$function_12__update_dtr_state(  );



        tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain__update_dtr_state, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_3 = PyObject_GetItem( locals_serial$serialcli_23, const_str_plain_property );

            if ( tmp_called_name_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_property );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_property );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 221;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_3 = tmp_mvar_value_7;
                Py_INCREF( tmp_called_name_3 );
                }
            }

            tmp_args_element_name_2 = MAKE_FUNCTION_serial$serialcli$$$function_13_cts(  );



            frame_e71133bff33fbb782ac266c5d3419b30_2->m_frame.f_lineno = 221;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain_cts, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_3;
            tmp_called_name_4 = PyObject_GetItem( locals_serial$serialcli_23, const_str_plain_property );

            if ( tmp_called_name_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_property );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_property );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 228;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_4 = tmp_mvar_value_8;
                Py_INCREF( tmp_called_name_4 );
                }
            }

            tmp_args_element_name_3 = MAKE_FUNCTION_serial$serialcli$$$function_14_dsr(  );



            frame_e71133bff33fbb782ac266c5d3419b30_2->m_frame.f_lineno = 228;
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


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain_dsr, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_4;
            tmp_called_name_5 = PyObject_GetItem( locals_serial$serialcli_23, const_str_plain_property );

            if ( tmp_called_name_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_property );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_property );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 235;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_5 = tmp_mvar_value_9;
                Py_INCREF( tmp_called_name_5 );
                }
            }

            tmp_args_element_name_4 = MAKE_FUNCTION_serial$serialcli$$$function_15_ri(  );



            frame_e71133bff33fbb782ac266c5d3419b30_2->m_frame.f_lineno = 235;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain_ri, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_5;
            tmp_called_name_6 = PyObject_GetItem( locals_serial$serialcli_23, const_str_plain_property );

            if ( tmp_called_name_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_property );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_property );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 243;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_6 = tmp_mvar_value_10;
                Py_INCREF( tmp_called_name_6 );
                }
            }

            tmp_args_element_name_5 = MAKE_FUNCTION_serial$serialcli$$$function_16_cd(  );



            frame_e71133bff33fbb782ac266c5d3419b30_2->m_frame.f_lineno = 243;
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


                exception_lineno = 243;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_serial$serialcli_23, const_str_plain_cd, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_e71133bff33fbb782ac266c5d3419b30_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_e71133bff33fbb782ac266c5d3419b30_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_e71133bff33fbb782ac266c5d3419b30_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_e71133bff33fbb782ac266c5d3419b30_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_e71133bff33fbb782ac266c5d3419b30_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_e71133bff33fbb782ac266c5d3419b30_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_e71133bff33fbb782ac266c5d3419b30_2 == cache_frame_e71133bff33fbb782ac266c5d3419b30_2 )
        {
            Py_DECREF( frame_e71133bff33fbb782ac266c5d3419b30_2 );
        }
        cache_frame_e71133bff33fbb782ac266c5d3419b30_2 = NULL;

        assertFrameObject( frame_e71133bff33fbb782ac266c5d3419b30_2 );

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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_7 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_Serial;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_serial$serialcli_23;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_e9399ef5dd3b78ad5c764cb6072e1e38->m_frame.f_lineno = 23;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_13 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_13 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$serialcli );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_serial$serialcli_23 );
        locals_serial$serialcli_23 = NULL;
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

        Py_DECREF( locals_serial$serialcli_23 );
        locals_serial$serialcli_23 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$serialcli );
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
        NUITKA_CANNOT_GET_HERE( serial$serialcli );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 23;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_Serial, tmp_assign_source_13 );
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
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
    RESTORE_FRAME_EXCEPTION( frame_e9399ef5dd3b78ad5c764cb6072e1e38 );
#endif
    popFrameStack();

    assertFrameObject( frame_e9399ef5dd3b78ad5c764cb6072e1e38 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9399ef5dd3b78ad5c764cb6072e1e38 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e9399ef5dd3b78ad5c764cb6072e1e38, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e9399ef5dd3b78ad5c764cb6072e1e38->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e9399ef5dd3b78ad5c764cb6072e1e38, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

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
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_serial$serialcli );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
