/* Generated code for Python module 'serial.serialjava'
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

/* The "_module_serial$serialjava" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial$serialjava;
PyDictObject *moduledict_serial$serialjava;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain__dtr_state;
extern PyObject *const_tuple_float_0_25_tuple;
extern PyObject *const_str_digest_1e77c865d9cc3714cae3a6bd34503ca9;
static PyObject *const_str_digest_29554dead93ed87156471f41b2e43532;
static PyObject *const_tuple_str_digest_7d92b9a3fd9230165131735b371b328c_int_pos_10_tuple;
extern PyObject *const_str_plain_STOPBITS_ONE;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_digest_0081767d335d9fb963b22b42d5219f43;
static PyObject *const_str_plain_comm;
extern PyObject *const_str_plain_device;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_e8af2f0e191b1c5966c75e0c0e11daa6;
extern PyObject *const_str_plain_SIXBITS;
extern PyObject *const_str_plain_comp;
extern PyObject *const_str_plain_SerialBase;
extern PyObject *const_str_plain__stopbits;
extern PyObject *const_str_plain_ValueError;
static PyObject *const_str_plain_getPortIdentifier;
static PyObject *const_str_plain_getOutputStream;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_in_waiting;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain__bytesize;
extern PyObject *const_str_plain_STOPBITS_ONE_POINT_FIVE;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_setSerialPortParams;
extern PyObject *const_str_digest_145bf772d86c3cb38f291d317430df01;
extern PyObject *const_str_plain__rts_state;
static PyObject *const_str_plain_enableReceiveTimeout;
static PyObject *const_tuple_str_digest_76b328aecf6e0180e1401f2c7b20c24e_tuple;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_digest_a41f7446b10852b7fa7917c8946aa5e1;
extern PyObject *const_str_plain_AttributeError;
extern PyObject *const_str_digest_faa07c45c026cd5370bf39ce65b9f2d8;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_digest_c425e1720ed7efc14d8a103f222711b2;
extern PyObject *const_str_plain_ports;
extern PyObject *const_float_0_25;
extern PyObject *const_str_plain___import__;
static PyObject *const_tuple_str_plain_self_str_plain_portId_str_plain_msg_tuple;
static PyObject *const_str_plain_jstopbits;
extern PyObject *const_str_plain_TypeError;
extern PyObject *const_str_plain_available;
extern PyObject *const_str_plain__update_break_state;
extern PyObject *const_str_plain_flush;
static PyObject *const_str_plain_isRI;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_duration;
extern PyObject *const_str_plain_names;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_SerialException;
extern PyObject *const_str_plain_ImportError;
extern PyObject *const_int_pos_30;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_components;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain_dsr;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain__update_dtr_state;
static PyObject *const_str_plain_DATABITS_6;
static PyObject *const_str_digest_fd6499854436c868a15ead683ab7ca35;
static PyObject *const_str_digest_894e60cdbf288c6fc5456ff09bf0409c;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_len;
extern PyObject *const_str_digest_67381b97568fd04864d7225afb09d3b9;
extern PyObject *const_str_digest_bd2e98b142ff21c9f389c674d6946c9a;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_PORT_SERIAL;
extern PyObject *const_str_plain_is_open;
extern PyObject *const_str_plain_PARITY_EVEN;
extern PyObject *const_tuple_str_plain_self_str_plain_duration_tuple;
static PyObject *const_str_plain_detect_java_comm;
static PyObject *const_str_digest_65e81d7601f8f895a742ef32abea7b4a;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_bytearray;
static PyObject *const_str_plain_CommPortIdentifier;
static PyObject *const_str_digest_496da828bc431dbb4a35a3f004364a79;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_tuple_int_pos_30_tuple;
static PyObject *const_tuple_ea03d0a8772479402eb733ff342bed21_tuple;
extern PyObject *const_str_plain_STOPBITS_TWO;
extern PyObject *const_str_digest_06425a8e1b9d5eab562978eb6eacf777;
static PyObject *const_str_plain_STOPBITS_2;
extern PyObject *const_str_digest_72db89f2656c7536ad3ca9676d132571;
extern PyObject *const_str_plain_fd;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain__port;
static PyObject *const_str_plain_FLOWCONTROL_RTSCTS_OUT;
extern PyObject *const_str_plain_send_break;
static PyObject *const_str_plain_portId;
extern PyObject *const_str_digest_84335857b51bb81565c03cce4760dbdb;
extern PyObject *const_str_digest_872307698c9c04ef72f670bc6f1882ef;
static PyObject *const_str_plain_getPortIdentifiers;
extern PyObject *const_str_plain__xonxoff;
extern PyObject *const_str_digest_ad4d3667ad4be7949c20c65bd946d9a1;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_digest_2b96e25c8d393fdf065d358454fdf25c;
extern PyObject *const_str_digest_088e326eed737fbd2d5feedf060c96ff;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_digest_47be6feae340d11ceea1b2be1116c946;
extern PyObject *const_str_plain_SerialPort;
extern PyObject *const_str_digest_b40497f26645e3ebadb6514ab8d446ba;
static PyObject *const_str_digest_76b328aecf6e0180e1401f2c7b20c24e;
static PyObject *const_str_plain_jflowout;
extern PyObject *const_str_plain_split;
static PyObject *const_str_plain_STOPBITS_1_5;
static PyObject *const_str_plain_DATABITS_7;
extern PyObject *const_str_plain_PARITY_NONE;
extern PyObject *const_str_digest_55bd609d83337e3e53f56f56fb6e69c2;
static PyObject *const_str_plain_portnumber;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_str_plain_skip;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_plain_getInputStream;
static PyObject *const_str_digest_e314ad64a0eb2cfb4f734059b1596745;
extern PyObject *const_str_digest_14aa7bed476b499178dd8a4fa54d666e;
extern PyObject *const_str_plain_sendBreak;
extern PyObject *const_str_plain_cd;
extern PyObject *const_str_digest_4b91cca6339a9a892cf0e30d6bd1bdfc;
extern PyObject *const_tuple_str_digest_a41f7446b10852b7fa7917c8946aa5e1_tuple;
static PyObject *const_str_plain_jparity;
extern PyObject *const_int_0;
extern PyObject *const_str_plain__baudrate;
static PyObject *const_str_plain__outstream;
static PyObject *const_tuple_str_plain_names_str_plain_name_str_plain_mod_tuple;
static PyObject *const_list_75856efb0ecca7fbce58d69489689c75_list;
extern PyObject *const_str_plain_PARITY_MARK;
extern PyObject *const_str_plain_setDTR;
static PyObject *const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple;
static PyObject *const_str_digest_f98c54fafbe7abdb3afa3affc3debdab;
extern PyObject *const_str_plain_msg;
extern PyObject *const_int_pos_1000;
static PyObject *const_str_digest_6307284dff33304eb571a029dfac7803;
static PyObject *const_str_plain_nextElement;
extern PyObject *const_str_digest_9ba51f6bdeff944f83e458f9b58790b4;
static PyObject *const_str_digest_7d92b9a3fd9230165131735b371b328c;
static PyObject *const_str_plain_DATABITS_8;
static PyObject *const_str_digest_56312e9e44f7e28c1876ceb5a373d82d;
extern PyObject *const_str_plain__parity;
extern PyObject *const_float_1000_0;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_reset_input_buffer;
static PyObject *const_str_plain_disableReceiveTimeout;
extern PyObject *const_str_plain_reset_output_buffer;
static PyObject *const_str_plain_FLOWCONTROL_XONXOFF_IN;
extern PyObject *const_str_plain_ri;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_digest_b7525636ddb73d1aea5ab60e59f79aaf;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_digest_1d3403f47e70d0d3c7366e99c0db7fa8;
static PyObject *const_tuple_str_digest_496da828bc431dbb4a35a3f004364a79_tuple;
extern PyObject *const_str_plain__timeout;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_PARITY_ODD;
extern PyObject *const_tuple_str_digest_145bf772d86c3cb38f291d317430df01_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_cts;
extern PyObject *const_str_digest_c987d57c872daa303d57e57028663dbb;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_FLOWCONTROL_XONXOFF_OUT;
static PyObject *const_str_plain__instream;
extern PyObject *const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_el;
extern PyObject *const_str_digest_3c35695160658dede20e26ab5c064c8b;
extern PyObject *const_str_plain_isinstance;
static PyObject *const_str_digest_ee8336d4d5dc9867d9bed77eb41d617a;
static PyObject *const_str_digest_eb13749486bdceb9d9c45045106f689c;
extern PyObject *const_str_plain_SEVENBITS;
static PyObject *const_str_plain_STOPBITS_1;
extern PyObject *const_str_digest_99bcd2cd4b1caacf3cac0b2495622ee2;
extern PyObject *const_str_plain_getattr;
extern PyObject *const_str_plain_portNotOpenError;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_getName;
extern PyObject *const_str_digest_9777a2e7909bbc36bb577eeb2ac8826b;
static PyObject *const_str_digest_1d3688b9b082fbb13286d003a7180a1c;
extern PyObject *const_str_plain_open;
extern PyObject *const_str_digest_59d8c08c8b321dd488f0cfd9cc30b9cf;
extern PyObject *const_str_digest_444a195d697d77e6dc3d797b3cd6086d;
extern PyObject *const_str_digest_ca3087f1fed5e9b894c48e0dbbd2f218;
extern PyObject *const_str_digest_753bea82ba0eb08b3c188d4785781d6a;
static PyObject *const_str_plain_my_import;
extern PyObject *const_str_plain_setRTS;
static PyObject *const_str_plain_isCD;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_FIVEBITS;
extern PyObject *const_str_plain_enum;
static PyObject *const_str_digest_18ffcab9219e00f9e39c11ee220d72ec;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_86aca8a91a2b000d9a182138e17b4c13;
extern PyObject *const_str_plain_write;
static PyObject *const_tuple_2675dac0bbcd7574844627954a33a65d_tuple;
static PyObject *const_str_plain_DATABITS_5;
extern PyObject *const_str_plain_EIGHTBITS;
extern PyObject *const_str_plain__update_rts_state;
extern PyObject *const_str_plain_mod;
extern PyObject *const_str_plain_Exception;
static PyObject *const_str_plain__reconfigurePort;
extern PyObject *const_str_digest_09388aafcb6adb40da642c8223c8e7c5;
static PyObject *const_str_plain_isDSR;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_digest_1b21f0ea3518f54bf6362ee9e3367e58;
extern PyObject *const_str_plain_Serial;
static PyObject *const_str_plain_getPortType;
extern PyObject *const_tuple_str_digest_088e326eed737fbd2d5feedf060c96ff_tuple;
extern PyObject *const_str_plain_property;
static PyObject *const_str_plain_isCTS;
static PyObject *const_str_plain_jflowin;
extern PyObject *const_str_plain__rtscts;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_hasMoreElements;
static PyObject *const_str_plain_setFlowControlMode;
extern PyObject *const_str_plain_PARITY_SPACE;
static PyObject *const_str_plain_sPort;
static PyObject *const_str_plain_FLOWCONTROL_RTSCTS_IN;
extern PyObject *const_str_digest_54cde0cd7a92974ff918f0defbd1eeb9;
static PyObject *const_str_plain_jdatabits;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_29554dead93ed87156471f41b2e43532 = UNSTREAM_STRING_ASCII( &constant_bin[ 5808301 ], 34, 0 );
    const_tuple_str_digest_7d92b9a3fd9230165131735b371b328c_int_pos_10_tuple = PyTuple_New( 2 );
    const_str_digest_7d92b9a3fd9230165131735b371b328c = UNSTREAM_STRING_ASCII( &constant_bin[ 5808335 ], 20, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7d92b9a3fd9230165131735b371b328c_int_pos_10_tuple, 0, const_str_digest_7d92b9a3fd9230165131735b371b328c ); Py_INCREF( const_str_digest_7d92b9a3fd9230165131735b371b328c );
    PyTuple_SET_ITEM( const_tuple_str_digest_7d92b9a3fd9230165131735b371b328c_int_pos_10_tuple, 1, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    const_str_plain_comm = UNSTREAM_STRING_ASCII( &constant_bin[ 17707 ], 4, 1 );
    const_str_digest_e8af2f0e191b1c5966c75e0c0e11daa6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5808355 ], 23, 0 );
    const_str_plain_getPortIdentifier = UNSTREAM_STRING_ASCII( &constant_bin[ 5808378 ], 17, 1 );
    const_str_plain_getOutputStream = UNSTREAM_STRING_ASCII( &constant_bin[ 5808395 ], 15, 1 );
    const_str_plain_setSerialPortParams = UNSTREAM_STRING_ASCII( &constant_bin[ 5808410 ], 19, 1 );
    const_str_plain_enableReceiveTimeout = UNSTREAM_STRING_ASCII( &constant_bin[ 5808429 ], 20, 1 );
    const_tuple_str_digest_76b328aecf6e0180e1401f2c7b20c24e_tuple = PyTuple_New( 1 );
    const_str_digest_76b328aecf6e0180e1401f2c7b20c24e = UNSTREAM_STRING_ASCII( &constant_bin[ 5808449 ], 60, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_76b328aecf6e0180e1401f2c7b20c24e_tuple, 0, const_str_digest_76b328aecf6e0180e1401f2c7b20c24e ); Py_INCREF( const_str_digest_76b328aecf6e0180e1401f2c7b20c24e );
    const_tuple_str_plain_self_str_plain_portId_str_plain_msg_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_portId_str_plain_msg_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_portId = UNSTREAM_STRING_ASCII( &constant_bin[ 5808509 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_portId_str_plain_msg_tuple, 1, const_str_plain_portId ); Py_INCREF( const_str_plain_portId );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_portId_str_plain_msg_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_plain_jstopbits = UNSTREAM_STRING_ASCII( &constant_bin[ 5808515 ], 9, 1 );
    const_str_plain_isRI = UNSTREAM_STRING_ASCII( &constant_bin[ 5808524 ], 4, 1 );
    const_str_plain_DATABITS_6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5808528 ], 10, 1 );
    const_str_digest_fd6499854436c868a15ead683ab7ca35 = UNSTREAM_STRING_ASCII( &constant_bin[ 5808538 ], 10, 0 );
    const_str_digest_894e60cdbf288c6fc5456ff09bf0409c = UNSTREAM_STRING_ASCII( &constant_bin[ 5808548 ], 6, 0 );
    const_str_plain_PORT_SERIAL = UNSTREAM_STRING_ASCII( &constant_bin[ 5808554 ], 11, 1 );
    const_str_plain_detect_java_comm = UNSTREAM_STRING_ASCII( &constant_bin[ 5808565 ], 16, 1 );
    const_str_digest_65e81d7601f8f895a742ef32abea7b4a = UNSTREAM_STRING_ASCII( &constant_bin[ 5808581 ], 136, 0 );
    const_str_plain_CommPortIdentifier = UNSTREAM_STRING_ASCII( &constant_bin[ 5808717 ], 18, 1 );
    const_str_digest_496da828bc431dbb4a35a3f004364a79 = UNSTREAM_STRING_ASCII( &constant_bin[ 5808735 ], 47, 0 );
    const_tuple_ea03d0a8772479402eb733ff342bed21_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ea03d0a8772479402eb733ff342bed21_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_ea03d0a8772479402eb733ff342bed21_tuple, 1, const_str_plain_mod ); Py_INCREF( const_str_plain_mod );
    PyTuple_SET_ITEM( const_tuple_ea03d0a8772479402eb733ff342bed21_tuple, 2, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    PyTuple_SET_ITEM( const_tuple_ea03d0a8772479402eb733ff342bed21_tuple, 3, const_str_plain_comp ); Py_INCREF( const_str_plain_comp );
    const_str_plain_STOPBITS_2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5808782 ], 10, 1 );
    const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple, 2, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple, 3, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_FLOWCONTROL_RTSCTS_OUT = UNSTREAM_STRING_ASCII( &constant_bin[ 5808792 ], 22, 1 );
    const_str_plain_getPortIdentifiers = UNSTREAM_STRING_ASCII( &constant_bin[ 5808814 ], 18, 1 );
    const_str_plain_jflowout = UNSTREAM_STRING_ASCII( &constant_bin[ 5808832 ], 8, 1 );
    const_str_plain_STOPBITS_1_5 = UNSTREAM_STRING_ASCII( &constant_bin[ 5808840 ], 12, 1 );
    const_str_plain_DATABITS_7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5808852 ], 10, 1 );
    const_str_plain_portnumber = UNSTREAM_STRING_ASCII( &constant_bin[ 5808862 ], 10, 1 );
    const_str_plain_getInputStream = UNSTREAM_STRING_ASCII( &constant_bin[ 5808872 ], 14, 1 );
    const_str_digest_e314ad64a0eb2cfb4f734059b1596745 = UNSTREAM_STRING_ASCII( &constant_bin[ 5808886 ], 27, 0 );
    const_str_plain_jparity = UNSTREAM_STRING_ASCII( &constant_bin[ 5808913 ], 7, 1 );
    const_str_plain__outstream = UNSTREAM_STRING_ASCII( &constant_bin[ 5808920 ], 10, 1 );
    const_tuple_str_plain_names_str_plain_name_str_plain_mod_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_names_str_plain_name_str_plain_mod_tuple, 0, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    PyTuple_SET_ITEM( const_tuple_str_plain_names_str_plain_name_str_plain_mod_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_names_str_plain_name_str_plain_mod_tuple, 2, const_str_plain_mod ); Py_INCREF( const_str_plain_mod );
    const_list_75856efb0ecca7fbce58d69489689c75_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_75856efb0ecca7fbce58d69489689c75_list, 0, const_str_digest_fd6499854436c868a15ead683ab7ca35 ); Py_INCREF( const_str_digest_fd6499854436c868a15ead683ab7ca35 );
    PyList_SET_ITEM( const_list_75856efb0ecca7fbce58d69489689c75_list, 1, const_str_digest_894e60cdbf288c6fc5456ff09bf0409c ); Py_INCREF( const_str_digest_894e60cdbf288c6fc5456ff09bf0409c );
    const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_jdatabits = UNSTREAM_STRING_ASCII( &constant_bin[ 5808930 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 1, const_str_plain_jdatabits ); Py_INCREF( const_str_plain_jdatabits );
    PyTuple_SET_ITEM( const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 2, const_str_plain_jstopbits ); Py_INCREF( const_str_plain_jstopbits );
    PyTuple_SET_ITEM( const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 3, const_str_plain_jparity ); Py_INCREF( const_str_plain_jparity );
    const_str_plain_jflowin = UNSTREAM_STRING_ASCII( &constant_bin[ 5808939 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 4, const_str_plain_jflowin ); Py_INCREF( const_str_plain_jflowin );
    PyTuple_SET_ITEM( const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 5, const_str_plain_jflowout ); Py_INCREF( const_str_plain_jflowout );
    const_str_digest_f98c54fafbe7abdb3afa3affc3debdab = UNSTREAM_STRING_ASCII( &constant_bin[ 5808946 ], 32, 0 );
    const_str_digest_6307284dff33304eb571a029dfac7803 = UNSTREAM_STRING_ASCII( &constant_bin[ 5808978 ], 72, 0 );
    const_str_plain_nextElement = UNSTREAM_STRING_ASCII( &constant_bin[ 5809050 ], 11, 1 );
    const_str_plain_DATABITS_8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5809061 ], 10, 1 );
    const_str_digest_56312e9e44f7e28c1876ceb5a373d82d = UNSTREAM_STRING_ASCII( &constant_bin[ 5809071 ], 37, 0 );
    const_str_plain_disableReceiveTimeout = UNSTREAM_STRING_ASCII( &constant_bin[ 5809108 ], 21, 1 );
    const_str_plain_FLOWCONTROL_XONXOFF_IN = UNSTREAM_STRING_ASCII( &constant_bin[ 5809129 ], 22, 1 );
    const_tuple_str_digest_496da828bc431dbb4a35a3f004364a79_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_496da828bc431dbb4a35a3f004364a79_tuple, 0, const_str_digest_496da828bc431dbb4a35a3f004364a79 ); Py_INCREF( const_str_digest_496da828bc431dbb4a35a3f004364a79 );
    const_str_plain_FLOWCONTROL_XONXOFF_OUT = UNSTREAM_STRING_ASCII( &constant_bin[ 5809151 ], 23, 1 );
    const_str_plain__instream = UNSTREAM_STRING_ASCII( &constant_bin[ 5809174 ], 9, 1 );
    const_str_plain_el = UNSTREAM_STRING_ASCII( &constant_bin[ 1304 ], 2, 1 );
    const_str_digest_ee8336d4d5dc9867d9bed77eb41d617a = UNSTREAM_STRING_ASCII( &constant_bin[ 5809183 ], 23, 0 );
    const_str_digest_eb13749486bdceb9d9c45045106f689c = UNSTREAM_STRING_ASCII( &constant_bin[ 5809206 ], 49, 0 );
    const_str_plain_STOPBITS_1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5808840 ], 10, 1 );
    const_str_digest_1d3688b9b082fbb13286d003a7180a1c = UNSTREAM_STRING_ASCII( &constant_bin[ 5809255 ], 20, 0 );
    const_str_plain_my_import = UNSTREAM_STRING_ASCII( &constant_bin[ 5809275 ], 9, 1 );
    const_str_plain_isCD = UNSTREAM_STRING_ASCII( &constant_bin[ 5809284 ], 4, 1 );
    const_str_digest_18ffcab9219e00f9e39c11ee220d72ec = UNSTREAM_STRING_ASCII( &constant_bin[ 5809288 ], 24, 0 );
    const_str_digest_86aca8a91a2b000d9a182138e17b4c13 = UNSTREAM_STRING_ASCII( &constant_bin[ 5809312 ], 26, 0 );
    const_tuple_2675dac0bbcd7574844627954a33a65d_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_2675dac0bbcd7574844627954a33a65d_tuple, 0, const_str_plain_portnumber ); Py_INCREF( const_str_plain_portnumber );
    PyTuple_SET_ITEM( const_tuple_2675dac0bbcd7574844627954a33a65d_tuple, 1, const_str_plain_enum ); Py_INCREF( const_str_plain_enum );
    PyTuple_SET_ITEM( const_tuple_2675dac0bbcd7574844627954a33a65d_tuple, 2, const_str_plain_ports ); Py_INCREF( const_str_plain_ports );
    PyTuple_SET_ITEM( const_tuple_2675dac0bbcd7574844627954a33a65d_tuple, 3, const_str_plain_el ); Py_INCREF( const_str_plain_el );
    const_str_plain_DATABITS_5 = UNSTREAM_STRING_ASCII( &constant_bin[ 5809338 ], 10, 1 );
    const_str_plain__reconfigurePort = UNSTREAM_STRING_ASCII( &constant_bin[ 5809190 ], 16, 1 );
    const_str_plain_isDSR = UNSTREAM_STRING_ASCII( &constant_bin[ 5809348 ], 5, 1 );
    const_str_plain_getPortType = UNSTREAM_STRING_ASCII( &constant_bin[ 5809353 ], 11, 1 );
    const_str_plain_isCTS = UNSTREAM_STRING_ASCII( &constant_bin[ 5809364 ], 5, 1 );
    const_str_plain_hasMoreElements = UNSTREAM_STRING_ASCII( &constant_bin[ 5809369 ], 15, 1 );
    const_str_plain_setFlowControlMode = UNSTREAM_STRING_ASCII( &constant_bin[ 5809384 ], 18, 1 );
    const_str_plain_sPort = UNSTREAM_STRING_ASCII( &constant_bin[ 5809402 ], 5, 1 );
    const_str_plain_FLOWCONTROL_RTSCTS_IN = UNSTREAM_STRING_ASCII( &constant_bin[ 5809407 ], 21, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial$serialjava( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_01726b92b368b645485faa09197dbd25;
static PyCodeObject *codeobj_c9fa59fa93cf3a0f0be7722626b44ffd;
static PyCodeObject *codeobj_4bb6fe8a34bae4164978a0b59153f589;
static PyCodeObject *codeobj_d495746fde4c5d1fc0437ca921028370;
static PyCodeObject *codeobj_a15fa7ae75c1ce351f8668df9e718fb5;
static PyCodeObject *codeobj_e52de18ed14066c0fc2c71a0172d8e78;
static PyCodeObject *codeobj_3269d2aed1868b8aea76246b4d997dbb;
static PyCodeObject *codeobj_dc85ccb7444d83124d78be0da829ad25;
static PyCodeObject *codeobj_12438b1beff6c8c9d505c499fec308c1;
static PyCodeObject *codeobj_954434154b559504193ea567b8e5e044;
static PyCodeObject *codeobj_16a00baaddbb43a1bd2b0363f0aee43b;
static PyCodeObject *codeobj_4f974ebc6cb76d90190605a43ba7424f;
static PyCodeObject *codeobj_f08a89763d65b2ac2a34a055561b1b4b;
static PyCodeObject *codeobj_f3460cf561158c3f40185668fa1c2f01;
static PyCodeObject *codeobj_0b21c0090947b631c33352f1060d8367;
static PyCodeObject *codeobj_a887a50dda37612885ebe6c63b8e6e2c;
static PyCodeObject *codeobj_3bd40039cb5f63204207eeddcecc1992;
static PyCodeObject *codeobj_8c7257cb1cf6721521aadda68f134705;
static PyCodeObject *codeobj_e77fd6e3771aaebd4afbfa92a3579a3a;
static PyCodeObject *codeobj_a4989097c905c05c92ef02fb594dd4bd;
static PyCodeObject *codeobj_2672f7223589c6e0a82acfc0d329f3eb;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_1d3688b9b082fbb13286d003a7180a1c );
    codeobj_01726b92b368b645485faa09197dbd25 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_86aca8a91a2b000d9a182138e17b4c13, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_c9fa59fa93cf3a0f0be7722626b44ffd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Serial, 53, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_4bb6fe8a34bae4164978a0b59153f589 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__reconfigurePort, 82, const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d495746fde4c5d1fc0437ca921028370 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_break_state, 205, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a15fa7ae75c1ce351f8668df9e718fb5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_dtr_state, 217, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e52de18ed14066c0fc2c71a0172d8e78 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_rts_state, 211, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3269d2aed1868b8aea76246b4d997dbb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cd, 244, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dc85ccb7444d83124d78be0da829ad25 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 137, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_12438b1beff6c8c9d505c499fec308c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cts, 223, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_954434154b559504193ea567b8e5e044 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_detect_java_comm, 21, const_tuple_str_plain_names_str_plain_name_str_plain_mod_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_16a00baaddbb43a1bd2b0363f0aee43b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_device, 42, const_tuple_2675dac0bbcd7574844627954a33a65d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4f974ebc6cb76d90190605a43ba7424f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dsr, 230, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f08a89763d65b2ac2a34a055561b1b4b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_in_waiting, 149, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f3460cf561158c3f40185668fa1c2f01 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_my_import, 13, const_tuple_ea03d0a8772479402eb733ff342bed21_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0b21c0090947b631c33352f1060d8367 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open, 59, const_tuple_str_plain_self_str_plain_portId_str_plain_msg_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a887a50dda37612885ebe6c63b8e6e2c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 156, const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3bd40039cb5f63204207eeddcecc1992 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_input_buffer, 184, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8c7257cb1cf6721521aadda68f134705 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_output_buffer, 190, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e77fd6e3771aaebd4afbfa92a3579a3a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ri, 237, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a4989097c905c05c92ef02fb594dd4bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send_break, 199, const_tuple_str_plain_self_str_plain_duration_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2672f7223589c6e0a82acfc0d329f3eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write, 175, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_10_reset_input_buffer(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_11_reset_output_buffer(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_12_send_break( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_13__update_break_state(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_14__update_rts_state(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_15__update_dtr_state(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_16_cts(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_17_dsr(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_18_ri(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_19_cd(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_1_my_import(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_2_detect_java_comm(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_3_device(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_4_open(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_5__reconfigurePort(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_6_close(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_7_in_waiting(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_8_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_9_write(  );


// The module function definitions.
static PyObject *impl_serial$serialjava$$$function_1_my_import( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_mod = NULL;
    PyObject *var_components = NULL;
    PyObject *var_comp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_f3460cf561158c3f40185668fa1c2f01;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_f3460cf561158c3f40185668fa1c2f01 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f3460cf561158c3f40185668fa1c2f01, codeobj_f3460cf561158c3f40185668fa1c2f01, module_serial$serialjava, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f3460cf561158c3f40185668fa1c2f01 = cache_frame_f3460cf561158c3f40185668fa1c2f01;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f3460cf561158c3f40185668fa1c2f01 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f3460cf561158c3f40185668fa1c2f01 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___import__ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___import__ );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__import__" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 14;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        frame_f3460cf561158c3f40185668fa1c2f01->m_frame.f_lineno = 14;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_mod == NULL );
        var_mod = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_name );
        tmp_called_instance_1 = par_name;
        frame_f3460cf561158c3f40185668fa1c2f01->m_frame.f_lineno = 15;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_components == NULL );
        var_components = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_components );
        tmp_subscribed_name_1 = var_components;
        tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 16;
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
            PyObject *old = var_comp;
            var_comp = tmp_assign_source_5;
            Py_INCREF( var_comp );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_getattr );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getattr );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getattr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 17;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_mod );
        tmp_args_element_name_2 = var_mod;
        CHECK_OBJECT( var_comp );
        tmp_args_element_name_3 = var_comp;
        frame_f3460cf561158c3f40185668fa1c2f01->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_mod;
            assert( old != NULL );
            var_mod = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "oooo";
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
    RESTORE_FRAME_EXCEPTION( frame_f3460cf561158c3f40185668fa1c2f01 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3460cf561158c3f40185668fa1c2f01 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f3460cf561158c3f40185668fa1c2f01, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f3460cf561158c3f40185668fa1c2f01->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f3460cf561158c3f40185668fa1c2f01, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f3460cf561158c3f40185668fa1c2f01,
        type_description_1,
        par_name,
        var_mod,
        var_components,
        var_comp
    );


    // Release cached frame.
    if ( frame_f3460cf561158c3f40185668fa1c2f01 == cache_frame_f3460cf561158c3f40185668fa1c2f01 )
    {
        Py_DECREF( frame_f3460cf561158c3f40185668fa1c2f01 );
    }
    cache_frame_f3460cf561158c3f40185668fa1c2f01 = NULL;

    assertFrameObject( frame_f3460cf561158c3f40185668fa1c2f01 );

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

    CHECK_OBJECT( var_mod );
    tmp_return_value = var_mod;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_1_my_import );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_mod );
    Py_DECREF( var_mod );
    var_mod = NULL;

    CHECK_OBJECT( (PyObject *)var_components );
    Py_DECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_mod );
    var_mod = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_1_my_import );
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


static PyObject *impl_serial$serialjava$$$function_2_detect_java_comm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_names = python_pars[ 0 ];
    PyObject *var_name = NULL;
    PyObject *var_mod = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_954434154b559504193ea567b8e5e044;
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
    static struct Nuitka_FrameObject *cache_frame_954434154b559504193ea567b8e5e044 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_954434154b559504193ea567b8e5e044, codeobj_954434154b559504193ea567b8e5e044, module_serial$serialjava, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_954434154b559504193ea567b8e5e044 = cache_frame_954434154b559504193ea567b8e5e044;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_954434154b559504193ea567b8e5e044 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_954434154b559504193ea567b8e5e044 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_names );
        tmp_iter_arg_1 = par_names;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                exception_lineno = 23;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_3;
            Py_INCREF( var_name );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_my_import );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_my_import );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "my_import" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_name );
        tmp_args_element_name_1 = var_name;
        frame_954434154b559504193ea567b8e5e044->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_mod;
            var_mod = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT( var_mod );
        tmp_source_name_1 = var_mod;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SerialPort );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_attribute_value_1 );
    }
    CHECK_OBJECT( var_mod );
    tmp_return_value = var_mod;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_2_detect_java_comm );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_954434154b559504193ea567b8e5e044, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_954434154b559504193ea567b8e5e044, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_mvar_value_3;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_ImportError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImportError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ImportError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 28;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        tmp_compexpr_right_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_AttributeError );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AttributeError );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AttributeError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 28;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 1, tmp_tuple_element_1 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooo";
            goto try_except_handler_4;
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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 24;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_954434154b559504193ea567b8e5e044->m_frame) frame_954434154b559504193ea567b8e5e044->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_4;
        branch_no_1:;
    }
    goto try_end_1;
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
    // End of try:
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_2_detect_java_comm );
    return NULL;
    // End of try:
    try_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_ImportError );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImportError );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ImportError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 30;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        frame_954434154b559504193ea567b8e5e044->m_frame.f_lineno = 30;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_496da828bc431dbb4a35a3f004364a79_tuple, 0 ) );

        if ( tmp_raise_type_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 30;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_954434154b559504193ea567b8e5e044 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_954434154b559504193ea567b8e5e044 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_954434154b559504193ea567b8e5e044 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_954434154b559504193ea567b8e5e044, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_954434154b559504193ea567b8e5e044->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_954434154b559504193ea567b8e5e044, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_954434154b559504193ea567b8e5e044,
        type_description_1,
        par_names,
        var_name,
        var_mod
    );


    // Release cached frame.
    if ( frame_954434154b559504193ea567b8e5e044 == cache_frame_954434154b559504193ea567b8e5e044 )
    {
        Py_DECREF( frame_954434154b559504193ea567b8e5e044 );
    }
    cache_frame_954434154b559504193ea567b8e5e044 = NULL;

    assertFrameObject( frame_954434154b559504193ea567b8e5e044 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_2_detect_java_comm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_names );
    Py_DECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)var_name );
    Py_DECREF( var_name );
    var_name = NULL;

    CHECK_OBJECT( (PyObject *)var_mod );
    Py_DECREF( var_mod );
    var_mod = NULL;

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

    CHECK_OBJECT( (PyObject *)par_names );
    Py_DECREF( par_names );
    par_names = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_mod );
    var_mod = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_2_detect_java_comm );
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


static PyObject *impl_serial$serialjava$$$function_3_device( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_portnumber = python_pars[ 0 ];
    PyObject *var_enum = NULL;
    PyObject *var_ports = NULL;
    PyObject *var_el = NULL;
    struct Nuitka_FrameObject *frame_16a00baaddbb43a1bd2b0363f0aee43b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_16a00baaddbb43a1bd2b0363f0aee43b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_16a00baaddbb43a1bd2b0363f0aee43b, codeobj_16a00baaddbb43a1bd2b0363f0aee43b, module_serial$serialjava, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_16a00baaddbb43a1bd2b0363f0aee43b = cache_frame_16a00baaddbb43a1bd2b0363f0aee43b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_16a00baaddbb43a1bd2b0363f0aee43b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_16a00baaddbb43a1bd2b0363f0aee43b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 44;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CommPortIdentifier );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_16a00baaddbb43a1bd2b0363f0aee43b->m_frame.f_lineno = 44;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getPortIdentifiers );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_enum == NULL );
        var_enum = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( var_ports == NULL );
        var_ports = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_enum );
        tmp_called_instance_2 = var_enum;
        frame_16a00baaddbb43a1bd2b0363f0aee43b->m_frame.f_lineno = 46;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_hasMoreElements );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oooo";
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_enum );
        tmp_called_instance_3 = var_enum;
        frame_16a00baaddbb43a1bd2b0363f0aee43b->m_frame.f_lineno = 47;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_nextElement );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_el;
            var_el = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( var_el );
        tmp_called_instance_4 = var_el;
        frame_16a00baaddbb43a1bd2b0363f0aee43b->m_frame.f_lineno = 48;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getPortType );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_CommPortIdentifier );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PORT_SERIAL );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
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
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( var_ports );
            tmp_called_instance_5 = var_ports;
            CHECK_OBJECT( var_el );
            tmp_args_element_name_1 = var_el;
            frame_16a00baaddbb43a1bd2b0363f0aee43b->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_ports );
        tmp_subscribed_name_1 = var_ports;
        CHECK_OBJECT( par_portnumber );
        tmp_subscript_name_1 = par_portnumber;
        tmp_called_instance_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_16a00baaddbb43a1bd2b0363f0aee43b->m_frame.f_lineno = 50;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_getName );
        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_16a00baaddbb43a1bd2b0363f0aee43b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_16a00baaddbb43a1bd2b0363f0aee43b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_16a00baaddbb43a1bd2b0363f0aee43b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_16a00baaddbb43a1bd2b0363f0aee43b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_16a00baaddbb43a1bd2b0363f0aee43b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_16a00baaddbb43a1bd2b0363f0aee43b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_16a00baaddbb43a1bd2b0363f0aee43b,
        type_description_1,
        par_portnumber,
        var_enum,
        var_ports,
        var_el
    );


    // Release cached frame.
    if ( frame_16a00baaddbb43a1bd2b0363f0aee43b == cache_frame_16a00baaddbb43a1bd2b0363f0aee43b )
    {
        Py_DECREF( frame_16a00baaddbb43a1bd2b0363f0aee43b );
    }
    cache_frame_16a00baaddbb43a1bd2b0363f0aee43b = NULL;

    assertFrameObject( frame_16a00baaddbb43a1bd2b0363f0aee43b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_3_device );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_portnumber );
    Py_DECREF( par_portnumber );
    par_portnumber = NULL;

    CHECK_OBJECT( (PyObject *)var_enum );
    Py_DECREF( var_enum );
    var_enum = NULL;

    CHECK_OBJECT( (PyObject *)var_ports );
    Py_DECREF( var_ports );
    var_ports = NULL;

    Py_XDECREF( var_el );
    var_el = NULL;

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

    CHECK_OBJECT( (PyObject *)par_portnumber );
    Py_DECREF( par_portnumber );
    par_portnumber = NULL;

    Py_XDECREF( var_enum );
    var_enum = NULL;

    Py_XDECREF( var_ports );
    var_ports = NULL;

    Py_XDECREF( var_el );
    var_el = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_3_device );
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


static PyObject *impl_serial$serialjava$$$function_4_open( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_portId = NULL;
    PyObject *var_msg = NULL;
    struct Nuitka_FrameObject *frame_0b21c0090947b631c33352f1060d8367;
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
    static struct Nuitka_FrameObject *cache_frame_0b21c0090947b631c33352f1060d8367 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0b21c0090947b631c33352f1060d8367, codeobj_0b21c0090947b631c33352f1060d8367, module_serial$serialjava, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0b21c0090947b631c33352f1060d8367 = cache_frame_0b21c0090947b631c33352f1060d8367;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0b21c0090947b631c33352f1060d8367 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0b21c0090947b631c33352f1060d8367 ) == 2 ); // Frame stack

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


            exception_lineno = 64;
            type_description_1 = "ooo";
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SerialException );

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

                exception_lineno = 65;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_0b21c0090947b631c33352f1060d8367->m_frame.f_lineno = 65;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_a41f7446b10852b7fa7917c8946aa5e1_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 65;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
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


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 66;
            type_description_1 = "ooo";
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
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SerialException );

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

                exception_lineno = 67;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            frame_0b21c0090947b631c33352f1060d8367->m_frame.f_lineno = 67;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_088e326eed737fbd2d5feedf060c96ff_tuple, 0 ) );

            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 67;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_type );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_type );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "type" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_0b21c0090947b631c33352f1060d8367->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_type );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_type );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "type" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        frame_0b21c0090947b631c33352f1060d8367->m_frame.f_lineno = 68;
        tmp_compexpr_right_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 68;
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


            exception_lineno = 68;
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
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 69;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_5;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_CommPortIdentifier );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_getPortIdentifier );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 69;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_0b21c0090947b631c33352f1060d8367->m_frame.f_lineno = 69;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_portId == NULL );
            var_portId = tmp_assign_source_1;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_9;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 71;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_6;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_CommPortIdentifier );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_getPortIdentifier );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_device );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_device );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "device" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 71;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_7;
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__port );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 71;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_0b21c0090947b631c33352f1060d8367->m_frame.f_lineno = 71;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 71;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_0b21c0090947b631c33352f1060d8367->m_frame.f_lineno = 71;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_portId == NULL );
            var_portId = tmp_assign_source_2;
        }
        branch_end_3:;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( var_portId );
        tmp_called_instance_1 = var_portId;
        frame_0b21c0090947b631c33352f1060d8367->m_frame.f_lineno = 73;
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_open, &PyTuple_GET_ITEM( const_tuple_str_digest_7d92b9a3fd9230165131735b371b328c_int_pos_10_tuple, 0 ) );

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sPort, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "ooo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0b21c0090947b631c33352f1060d8367, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0b21c0090947b631c33352f1060d8367, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_mvar_value_8;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_Exception );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Exception );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Exception" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 74;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }

        tmp_compexpr_right_3 = tmp_mvar_value_8;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
            assert( var_msg == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_msg = tmp_assign_source_3;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_sPort, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
        }
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SerialException );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialException" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 76;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }

            tmp_called_name_8 = tmp_mvar_value_9;
            tmp_left_name_1 = const_str_digest_e8af2f0e191b1c5966c75e0c0e11daa6;
            CHECK_OBJECT( var_msg );
            tmp_right_name_1 = var_msg;
            tmp_args_element_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            frame_0b21c0090947b631c33352f1060d8367->m_frame.f_lineno = 76;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_raise_type_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            exception_type = tmp_raise_type_3;
            exception_lineno = 76;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_4_open );
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
        goto branch_end_4;
        branch_no_4:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 72;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_0b21c0090947b631c33352f1060d8367->m_frame) frame_0b21c0090947b631c33352f1060d8367->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_3;
        branch_end_4:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_4_open );
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_0b21c0090947b631c33352f1060d8367->m_frame.f_lineno = 77;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__reconfigurePort );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_10;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_sPort );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_0b21c0090947b631c33352f1060d8367->m_frame.f_lineno = 78;
        tmp_assattr_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_getInputStream );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__instream, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_source_name_11;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_sPort );
        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_0b21c0090947b631c33352f1060d8367->m_frame.f_lineno = 79;
        tmp_assattr_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getOutputStream );
        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_assattr_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__outstream, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
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


            exception_lineno = 80;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b21c0090947b631c33352f1060d8367 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b21c0090947b631c33352f1060d8367 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0b21c0090947b631c33352f1060d8367, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0b21c0090947b631c33352f1060d8367->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0b21c0090947b631c33352f1060d8367, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b21c0090947b631c33352f1060d8367,
        type_description_1,
        par_self,
        var_portId,
        var_msg
    );


    // Release cached frame.
    if ( frame_0b21c0090947b631c33352f1060d8367 == cache_frame_0b21c0090947b631c33352f1060d8367 )
    {
        Py_DECREF( frame_0b21c0090947b631c33352f1060d8367 );
    }
    cache_frame_0b21c0090947b631c33352f1060d8367 = NULL;

    assertFrameObject( frame_0b21c0090947b631c33352f1060d8367 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_4_open );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_portId );
    Py_DECREF( var_portId );
    var_portId = NULL;

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

    Py_XDECREF( var_portId );
    var_portId = NULL;

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
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_4_open );
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


static PyObject *impl_serial$serialjava$$$function_5__reconfigurePort( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_jdatabits = NULL;
    PyObject *var_jstopbits = NULL;
    PyObject *var_jparity = NULL;
    PyObject *var_jflowin = NULL;
    PyObject *var_jflowout = NULL;
    struct Nuitka_FrameObject *frame_4bb6fe8a34bae4164978a0b59153f589;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4bb6fe8a34bae4164978a0b59153f589 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4bb6fe8a34bae4164978a0b59153f589, codeobj_4bb6fe8a34bae4164978a0b59153f589, module_serial$serialjava, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4bb6fe8a34bae4164978a0b59153f589 = cache_frame_4bb6fe8a34bae4164978a0b59153f589;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4bb6fe8a34bae4164978a0b59153f589 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4bb6fe8a34bae4164978a0b59153f589 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oooooo";
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SerialException );

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

                exception_lineno = 85;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_4bb6fe8a34bae4164978a0b59153f589->m_frame.f_lineno = 85;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_145bf772d86c3cb38f291d317430df01_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 85;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
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
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sPort );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_4bb6fe8a34bae4164978a0b59153f589->m_frame.f_lineno = 87;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_enableReceiveTimeout, &PyTuple_GET_ITEM( const_tuple_int_pos_30_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__bytesize );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_FIVEBITS );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIVEBITS );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FIVEBITS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 89;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_3;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_SerialPort );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_DATABITS_5 );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_jdatabits == NULL );
            var_jdatabits = tmp_assign_source_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__bytesize );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SIXBITS );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SIXBITS );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SIXBITS" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 90;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_2 = tmp_mvar_value_4;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;
                type_description_1 = "oooooo";
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_source_name_7;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_5;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 91;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_8 = tmp_mvar_value_5;
                tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_SerialPort );
                if ( tmp_source_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 91;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_DATABITS_6 );
                Py_DECREF( tmp_source_name_7 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 91;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_jdatabits == NULL );
                var_jdatabits = tmp_assign_source_2;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_6;
                CHECK_OBJECT( par_self );
                tmp_source_name_9 = par_self;
                tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__bytesize );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 92;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SEVENBITS );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SEVENBITS );
                }

                if ( tmp_mvar_value_6 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SEVENBITS" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 92;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_right_3 = tmp_mvar_value_6;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 92;
                    type_description_1 = "oooooo";
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
                    PyObject *tmp_assign_source_3;
                    PyObject *tmp_source_name_10;
                    PyObject *tmp_source_name_11;
                    PyObject *tmp_mvar_value_7;
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

                    if (unlikely( tmp_mvar_value_7 == NULL ))
                    {
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
                    }

                    if ( tmp_mvar_value_7 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 93;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_11 = tmp_mvar_value_7;
                    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SerialPort );
                    if ( tmp_source_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 93;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_DATABITS_7 );
                    Py_DECREF( tmp_source_name_10 );
                    if ( tmp_assign_source_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 93;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_jdatabits == NULL );
                    var_jdatabits = tmp_assign_source_3;
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_mvar_value_8;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_12 = par_self;
                    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__bytesize );
                    if ( tmp_compexpr_left_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 94;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_EIGHTBITS );

                    if (unlikely( tmp_mvar_value_8 == NULL ))
                    {
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EIGHTBITS );
                    }

                    if ( tmp_mvar_value_8 == NULL )
                    {
                        Py_DECREF( tmp_compexpr_left_4 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EIGHTBITS" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 94;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_compexpr_right_4 = tmp_mvar_value_8;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    Py_DECREF( tmp_compexpr_left_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 94;
                        type_description_1 = "oooooo";
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
                        PyObject *tmp_source_name_13;
                        PyObject *tmp_source_name_14;
                        PyObject *tmp_mvar_value_9;
                        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

                        if (unlikely( tmp_mvar_value_9 == NULL ))
                        {
                            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
                        }

                        if ( tmp_mvar_value_9 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 95;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_14 = tmp_mvar_value_9;
                        tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_SerialPort );
                        if ( tmp_source_name_13 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 95;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_DATABITS_8 );
                        Py_DECREF( tmp_source_name_13 );
                        if ( tmp_assign_source_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 95;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_jdatabits == NULL );
                        var_jdatabits = tmp_assign_source_4;
                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_called_name_2;
                        PyObject *tmp_mvar_value_10;
                        PyObject *tmp_args_element_name_1;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        PyObject *tmp_source_name_15;
                        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_ValueError );

                        if (unlikely( tmp_mvar_value_10 == NULL ))
                        {
                            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
                        }

                        if ( tmp_mvar_value_10 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 97;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_2 = tmp_mvar_value_10;
                        tmp_left_name_1 = const_str_digest_18ffcab9219e00f9e39c11ee220d72ec;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_15 = par_self;
                        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__bytesize );
                        if ( tmp_right_name_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 97;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                        Py_DECREF( tmp_right_name_1 );
                        if ( tmp_args_element_name_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 97;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_4bb6fe8a34bae4164978a0b59153f589->m_frame.f_lineno = 97;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_1 };
                            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                        }

                        Py_DECREF( tmp_args_element_name_1 );
                        if ( tmp_raise_type_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 97;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 97;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_end_5:;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_11;
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__stopbits );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STOPBITS_ONE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_5 = tmp_mvar_value_11;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooo";
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_source_name_17;
            PyObject *tmp_source_name_18;
            PyObject *tmp_mvar_value_12;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 100;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_18 = tmp_mvar_value_12;
            tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_SerialPort );
            if ( tmp_source_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_STOPBITS_1 );
            Py_DECREF( tmp_source_name_17 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_jstopbits == NULL );
            var_jstopbits = tmp_assign_source_5;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_source_name_19;
            PyObject *tmp_mvar_value_13;
            CHECK_OBJECT( par_self );
            tmp_source_name_19 = par_self;
            tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__stopbits );
            if ( tmp_compexpr_left_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE_POINT_FIVE );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE_POINT_FIVE );
            }

            if ( tmp_mvar_value_13 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STOPBITS_ONE_POINT_FIVE" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 101;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_6 = tmp_mvar_value_13;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_left_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "oooooo";
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
                PyObject *tmp_assign_source_6;
                PyObject *tmp_source_name_20;
                PyObject *tmp_source_name_21;
                PyObject *tmp_mvar_value_14;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
                }

                if ( tmp_mvar_value_14 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 102;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_21 = tmp_mvar_value_14;
                tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_SerialPort );
                if ( tmp_source_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 102;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_STOPBITS_1_5 );
                Py_DECREF( tmp_source_name_20 );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 102;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_jstopbits == NULL );
                var_jstopbits = tmp_assign_source_6;
            }
            goto branch_end_7;
            branch_no_7:;
            {
                nuitka_bool tmp_condition_result_8;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                PyObject *tmp_source_name_22;
                PyObject *tmp_mvar_value_15;
                CHECK_OBJECT( par_self );
                tmp_source_name_22 = par_self;
                tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__stopbits );
                if ( tmp_compexpr_left_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 103;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_STOPBITS_TWO );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_TWO );
                }

                if ( tmp_mvar_value_15 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_7 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STOPBITS_TWO" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 103;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_right_7 = tmp_mvar_value_15;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                Py_DECREF( tmp_compexpr_left_7 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 103;
                    type_description_1 = "oooooo";
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
                    PyObject *tmp_assign_source_7;
                    PyObject *tmp_source_name_23;
                    PyObject *tmp_source_name_24;
                    PyObject *tmp_mvar_value_16;
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

                    if (unlikely( tmp_mvar_value_16 == NULL ))
                    {
                        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
                    }

                    if ( tmp_mvar_value_16 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 104;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_24 = tmp_mvar_value_16;
                    tmp_source_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_SerialPort );
                    if ( tmp_source_name_23 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 104;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_STOPBITS_2 );
                    Py_DECREF( tmp_source_name_23 );
                    if ( tmp_assign_source_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 104;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_jstopbits == NULL );
                    var_jstopbits = tmp_assign_source_7;
                }
                goto branch_end_8;
                branch_no_8:;
                {
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_mvar_value_17;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_right_name_2;
                    PyObject *tmp_source_name_25;
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_ValueError );

                    if (unlikely( tmp_mvar_value_17 == NULL ))
                    {
                        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
                    }

                    if ( tmp_mvar_value_17 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 106;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_3 = tmp_mvar_value_17;
                    tmp_left_name_2 = const_str_digest_29554dead93ed87156471f41b2e43532;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_25 = par_self;
                    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__stopbits );
                    if ( tmp_right_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 106;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                    Py_DECREF( tmp_right_name_2 );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 106;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_4bb6fe8a34bae4164978a0b59153f589->m_frame.f_lineno = 106;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_2 );
                    if ( tmp_raise_type_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 106;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 106;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                branch_end_8:;
            }
            branch_end_7:;
        }
        branch_end_6:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_source_name_26;
        PyObject *tmp_mvar_value_18;
        CHECK_OBJECT( par_self );
        tmp_source_name_26 = par_self;
        tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__parity );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_PARITY_NONE );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_NONE );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PARITY_NONE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_8 = tmp_mvar_value_18;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "oooooo";
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_source_name_27;
            PyObject *tmp_source_name_28;
            PyObject *tmp_mvar_value_19;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 109;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_28 = tmp_mvar_value_19;
            tmp_source_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_SerialPort );
            if ( tmp_source_name_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_PARITY_NONE );
            Py_DECREF( tmp_source_name_27 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_jparity == NULL );
            var_jparity = tmp_assign_source_8;
        }
        goto branch_end_9;
        branch_no_9:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_source_name_29;
            PyObject *tmp_mvar_value_20;
            CHECK_OBJECT( par_self );
            tmp_source_name_29 = par_self;
            tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain__parity );
            if ( tmp_compexpr_left_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_PARITY_EVEN );

            if (unlikely( tmp_mvar_value_20 == NULL ))
            {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_EVEN );
            }

            if ( tmp_mvar_value_20 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_9 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PARITY_EVEN" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 110;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_9 = tmp_mvar_value_20;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            Py_DECREF( tmp_compexpr_left_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "oooooo";
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
                PyObject *tmp_assign_source_9;
                PyObject *tmp_source_name_30;
                PyObject *tmp_source_name_31;
                PyObject *tmp_mvar_value_21;
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

                if (unlikely( tmp_mvar_value_21 == NULL ))
                {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
                }

                if ( tmp_mvar_value_21 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 111;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_31 = tmp_mvar_value_21;
                tmp_source_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_SerialPort );
                if ( tmp_source_name_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 111;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_PARITY_EVEN );
                Py_DECREF( tmp_source_name_30 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 111;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_jparity == NULL );
                var_jparity = tmp_assign_source_9;
            }
            goto branch_end_10;
            branch_no_10:;
            {
                nuitka_bool tmp_condition_result_11;
                PyObject *tmp_compexpr_left_10;
                PyObject *tmp_compexpr_right_10;
                PyObject *tmp_source_name_32;
                PyObject *tmp_mvar_value_22;
                CHECK_OBJECT( par_self );
                tmp_source_name_32 = par_self;
                tmp_compexpr_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain__parity );
                if ( tmp_compexpr_left_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 112;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_PARITY_ODD );

                if (unlikely( tmp_mvar_value_22 == NULL ))
                {
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_ODD );
                }

                if ( tmp_mvar_value_22 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_10 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PARITY_ODD" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 112;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_right_10 = tmp_mvar_value_22;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                Py_DECREF( tmp_compexpr_left_10 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 112;
                    type_description_1 = "oooooo";
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
                    PyObject *tmp_assign_source_10;
                    PyObject *tmp_source_name_33;
                    PyObject *tmp_source_name_34;
                    PyObject *tmp_mvar_value_23;
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

                    if (unlikely( tmp_mvar_value_23 == NULL ))
                    {
                        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
                    }

                    if ( tmp_mvar_value_23 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 113;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_34 = tmp_mvar_value_23;
                    tmp_source_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_SerialPort );
                    if ( tmp_source_name_33 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 113;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_PARITY_ODD );
                    Py_DECREF( tmp_source_name_33 );
                    if ( tmp_assign_source_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 113;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_jparity == NULL );
                    var_jparity = tmp_assign_source_10;
                }
                goto branch_end_11;
                branch_no_11:;
                {
                    nuitka_bool tmp_condition_result_12;
                    PyObject *tmp_compexpr_left_11;
                    PyObject *tmp_compexpr_right_11;
                    PyObject *tmp_source_name_35;
                    PyObject *tmp_mvar_value_24;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_35 = par_self;
                    tmp_compexpr_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain__parity );
                    if ( tmp_compexpr_left_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 114;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_PARITY_MARK );

                    if (unlikely( tmp_mvar_value_24 == NULL ))
                    {
                        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_MARK );
                    }

                    if ( tmp_mvar_value_24 == NULL )
                    {
                        Py_DECREF( tmp_compexpr_left_11 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PARITY_MARK" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 114;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_compexpr_right_11 = tmp_mvar_value_24;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
                    Py_DECREF( tmp_compexpr_left_11 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 114;
                        type_description_1 = "oooooo";
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
                        PyObject *tmp_assign_source_11;
                        PyObject *tmp_source_name_36;
                        PyObject *tmp_source_name_37;
                        PyObject *tmp_mvar_value_25;
                        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

                        if (unlikely( tmp_mvar_value_25 == NULL ))
                        {
                            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
                        }

                        if ( tmp_mvar_value_25 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 115;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_37 = tmp_mvar_value_25;
                        tmp_source_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_SerialPort );
                        if ( tmp_source_name_36 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 115;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_PARITY_MARK );
                        Py_DECREF( tmp_source_name_36 );
                        if ( tmp_assign_source_11 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 115;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_jparity == NULL );
                        var_jparity = tmp_assign_source_11;
                    }
                    goto branch_end_12;
                    branch_no_12:;
                    {
                        nuitka_bool tmp_condition_result_13;
                        PyObject *tmp_compexpr_left_12;
                        PyObject *tmp_compexpr_right_12;
                        PyObject *tmp_source_name_38;
                        PyObject *tmp_mvar_value_26;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_38 = par_self;
                        tmp_compexpr_left_12 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain__parity );
                        if ( tmp_compexpr_left_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 116;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_PARITY_SPACE );

                        if (unlikely( tmp_mvar_value_26 == NULL ))
                        {
                            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_SPACE );
                        }

                        if ( tmp_mvar_value_26 == NULL )
                        {
                            Py_DECREF( tmp_compexpr_left_12 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PARITY_SPACE" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 116;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_compexpr_right_12 = tmp_mvar_value_26;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
                        Py_DECREF( tmp_compexpr_left_12 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 116;
                            type_description_1 = "oooooo";
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
                            PyObject *tmp_assign_source_12;
                            PyObject *tmp_source_name_39;
                            PyObject *tmp_source_name_40;
                            PyObject *tmp_mvar_value_27;
                            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

                            if (unlikely( tmp_mvar_value_27 == NULL ))
                            {
                                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
                            }

                            if ( tmp_mvar_value_27 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 117;
                                type_description_1 = "oooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_source_name_40 = tmp_mvar_value_27;
                            tmp_source_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_SerialPort );
                            if ( tmp_source_name_39 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 117;
                                type_description_1 = "oooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_PARITY_SPACE );
                            Py_DECREF( tmp_source_name_39 );
                            if ( tmp_assign_source_12 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 117;
                                type_description_1 = "oooooo";
                                goto frame_exception_exit_1;
                            }
                            assert( var_jparity == NULL );
                            var_jparity = tmp_assign_source_12;
                        }
                        goto branch_end_13;
                        branch_no_13:;
                        {
                            PyObject *tmp_raise_type_4;
                            PyObject *tmp_called_name_4;
                            PyObject *tmp_mvar_value_28;
                            PyObject *tmp_args_element_name_3;
                            PyObject *tmp_left_name_3;
                            PyObject *tmp_right_name_3;
                            PyObject *tmp_source_name_41;
                            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_ValueError );

                            if (unlikely( tmp_mvar_value_28 == NULL ))
                            {
                                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
                            }

                            if ( tmp_mvar_value_28 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 119;
                                type_description_1 = "oooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_called_name_4 = tmp_mvar_value_28;
                            tmp_left_name_3 = const_str_digest_e314ad64a0eb2cfb4f734059b1596745;
                            CHECK_OBJECT( par_self );
                            tmp_source_name_41 = par_self;
                            tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain__parity );
                            if ( tmp_right_name_3 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 119;
                                type_description_1 = "oooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                            Py_DECREF( tmp_right_name_3 );
                            if ( tmp_args_element_name_3 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 119;
                                type_description_1 = "oooooo";
                                goto frame_exception_exit_1;
                            }
                            frame_4bb6fe8a34bae4164978a0b59153f589->m_frame.f_lineno = 119;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_3 };
                                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                            }

                            Py_DECREF( tmp_args_element_name_3 );
                            if ( tmp_raise_type_4 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 119;
                                type_description_1 = "oooooo";
                                goto frame_exception_exit_1;
                            }
                            exception_type = tmp_raise_type_4;
                            exception_lineno = 119;
                            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_int_0;
        assert( var_jflowin == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_jflowin = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_int_0;
        assert( var_jflowout == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_jflowout = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_source_name_42;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_42 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain__rtscts );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 122;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_assign_source_15;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_source_name_43;
            PyObject *tmp_source_name_44;
            PyObject *tmp_mvar_value_29;
            tmp_left_name_4 = const_int_0;
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

            if (unlikely( tmp_mvar_value_29 == NULL ))
            {
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
            }

            if ( tmp_mvar_value_29 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 123;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_44 = tmp_mvar_value_29;
            tmp_source_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_SerialPort );
            if ( tmp_source_name_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_FLOWCONTROL_RTSCTS_IN );
            Py_DECREF( tmp_source_name_43 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_15 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_jflowin;
                assert( old != NULL );
                var_jflowin = tmp_assign_source_15;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_source_name_45;
            PyObject *tmp_source_name_46;
            PyObject *tmp_mvar_value_30;
            tmp_left_name_5 = const_int_0;
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

            if (unlikely( tmp_mvar_value_30 == NULL ))
            {
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
            }

            if ( tmp_mvar_value_30 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 124;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_46 = tmp_mvar_value_30;
            tmp_source_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_SerialPort );
            if ( tmp_source_name_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_FLOWCONTROL_RTSCTS_OUT );
            Py_DECREF( tmp_source_name_45 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_16 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_jflowout;
                assert( old != NULL );
                var_jflowout = tmp_assign_source_16;
                Py_DECREF( old );
            }

        }
        branch_no_14:;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_source_name_47;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_47 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain__xonxoff );
        if ( tmp_attribute_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_2 );

            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_2 );
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
            PyObject *tmp_assign_source_17;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_source_name_48;
            PyObject *tmp_source_name_49;
            PyObject *tmp_mvar_value_31;
            CHECK_OBJECT( var_jflowin );
            tmp_left_name_6 = var_jflowin;
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

            if (unlikely( tmp_mvar_value_31 == NULL ))
            {
                tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
            }

            if ( tmp_mvar_value_31 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 126;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_49 = tmp_mvar_value_31;
            tmp_source_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_SerialPort );
            if ( tmp_source_name_48 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 126;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_FLOWCONTROL_XONXOFF_IN );
            Py_DECREF( tmp_source_name_48 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 126;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 126;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_17 = tmp_left_name_6;
            var_jflowin = tmp_assign_source_17;

        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_source_name_50;
            PyObject *tmp_source_name_51;
            PyObject *tmp_mvar_value_32;
            CHECK_OBJECT( var_jflowout );
            tmp_left_name_7 = var_jflowout;
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

            if (unlikely( tmp_mvar_value_32 == NULL ))
            {
                tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
            }

            if ( tmp_mvar_value_32 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "comm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 127;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_51 = tmp_mvar_value_32;
            tmp_source_name_50 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_SerialPort );
            if ( tmp_source_name_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 127;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_FLOWCONTROL_XONXOFF_OUT );
            Py_DECREF( tmp_source_name_50 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 127;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 127;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_18 = tmp_left_name_7;
            var_jflowout = tmp_assign_source_18;

        }
        branch_no_15:;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_52;
        PyObject *tmp_source_name_53;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_54;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_53 = par_self;
        tmp_source_name_52 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_sPort );
        if ( tmp_source_name_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_setSerialPortParams );
        Py_DECREF( tmp_source_name_52 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_54 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain__baudrate );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if ( var_jdatabits == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_4 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jdatabits" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = var_jdatabits;
        if ( var_jstopbits == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_4 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jstopbits" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = var_jstopbits;
        if ( var_jparity == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_4 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jparity" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = var_jparity;
        frame_4bb6fe8a34bae4164978a0b59153f589->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_55;
        PyObject *tmp_source_name_56;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_56 = par_self;
        tmp_source_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_sPort );
        if ( tmp_source_name_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_setFlowControlMode );
        Py_DECREF( tmp_source_name_55 );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if ( var_jflowin == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jflowin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_8 = var_jflowin;
        if ( var_jflowout == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jflowout" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_8 = var_jflowout;
        tmp_args_element_name_8 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_4bb6fe8a34bae4164978a0b59153f589->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_source_name_57;
        CHECK_OBJECT( par_self );
        tmp_source_name_57 = par_self;
        tmp_compexpr_left_13 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain__timeout );
        if ( tmp_compexpr_left_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_13 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        Py_DECREF( tmp_compexpr_left_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooo";
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
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_58;
            PyObject *tmp_source_name_59;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_33;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_left_name_9;
            PyObject *tmp_source_name_60;
            PyObject *tmp_right_name_9;
            CHECK_OBJECT( par_self );
            tmp_source_name_59 = par_self;
            tmp_source_name_58 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_sPort );
            if ( tmp_source_name_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 133;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_enableReceiveTimeout );
            Py_DECREF( tmp_source_name_58 );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 133;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_int );

            if (unlikely( tmp_mvar_value_33 == NULL ))
            {
                tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
            }

            if ( tmp_mvar_value_33 == NULL )
            {
                Py_DECREF( tmp_called_name_7 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "int" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 133;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_8 = tmp_mvar_value_33;
            CHECK_OBJECT( par_self );
            tmp_source_name_60 = par_self;
            tmp_left_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain__timeout );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 133;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_9 = const_int_pos_1000;
            tmp_args_element_name_10 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_9 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 133;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_4bb6fe8a34bae4164978a0b59153f589->m_frame.f_lineno = 133;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 133;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_4bb6fe8a34bae4164978a0b59153f589->m_frame.f_lineno = 133;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 133;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        goto branch_end_16;
        branch_no_16:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_61;
            PyObject *tmp_call_result_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_61 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_sPort );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_4bb6fe8a34bae4164978a0b59153f589->m_frame.f_lineno = 135;
            tmp_call_result_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_disableReceiveTimeout );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        branch_end_16:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bb6fe8a34bae4164978a0b59153f589 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bb6fe8a34bae4164978a0b59153f589 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4bb6fe8a34bae4164978a0b59153f589, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4bb6fe8a34bae4164978a0b59153f589->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4bb6fe8a34bae4164978a0b59153f589, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4bb6fe8a34bae4164978a0b59153f589,
        type_description_1,
        par_self,
        var_jdatabits,
        var_jstopbits,
        var_jparity,
        var_jflowin,
        var_jflowout
    );


    // Release cached frame.
    if ( frame_4bb6fe8a34bae4164978a0b59153f589 == cache_frame_4bb6fe8a34bae4164978a0b59153f589 )
    {
        Py_DECREF( frame_4bb6fe8a34bae4164978a0b59153f589 );
    }
    cache_frame_4bb6fe8a34bae4164978a0b59153f589 = NULL;

    assertFrameObject( frame_4bb6fe8a34bae4164978a0b59153f589 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_5__reconfigurePort );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_jdatabits );
    var_jdatabits = NULL;

    Py_XDECREF( var_jstopbits );
    var_jstopbits = NULL;

    Py_XDECREF( var_jparity );
    var_jparity = NULL;

    Py_XDECREF( var_jflowin );
    var_jflowin = NULL;

    Py_XDECREF( var_jflowout );
    var_jflowout = NULL;

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

    Py_XDECREF( var_jdatabits );
    var_jdatabits = NULL;

    Py_XDECREF( var_jstopbits );
    var_jstopbits = NULL;

    Py_XDECREF( var_jparity );
    var_jparity = NULL;

    Py_XDECREF( var_jflowin );
    var_jflowin = NULL;

    Py_XDECREF( var_jflowout );
    var_jflowout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_5__reconfigurePort );
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


static PyObject *impl_serial$serialjava$$$function_6_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_dc85ccb7444d83124d78be0da829ad25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_dc85ccb7444d83124d78be0da829ad25 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dc85ccb7444d83124d78be0da829ad25, codeobj_dc85ccb7444d83124d78be0da829ad25, module_serial$serialjava, sizeof(void *) );
    frame_dc85ccb7444d83124d78be0da829ad25 = cache_frame_dc85ccb7444d83124d78be0da829ad25;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dc85ccb7444d83124d78be0da829ad25 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dc85ccb7444d83124d78be0da829ad25 ) == 2 ); // Frame stack

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


            exception_lineno = 139;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 139;
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
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sPort );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 140;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_2 );

                exception_lineno = 140;
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
            {
                PyObject *tmp_called_instance_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_call_result_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_3 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__instream );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 141;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                frame_dc85ccb7444d83124d78be0da829ad25->m_frame.f_lineno = 141;
                tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 141;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            {
                PyObject *tmp_called_instance_2;
                PyObject *tmp_source_name_4;
                PyObject *tmp_call_result_2;
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__outstream );
                if ( tmp_called_instance_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 142;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                frame_dc85ccb7444d83124d78be0da829ad25->m_frame.f_lineno = 142;
                tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
                Py_DECREF( tmp_called_instance_2 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 142;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            {
                PyObject *tmp_called_instance_3;
                PyObject *tmp_source_name_5;
                PyObject *tmp_call_result_3;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sPort );
                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 143;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                frame_dc85ccb7444d83124d78be0da829ad25->m_frame.f_lineno = 143;
                tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_close );
                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 143;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            {
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_assattr_target_1;
                tmp_assattr_name_1 = Py_None;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_1 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sPort, tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 144;
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


                exception_lineno = 145;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dc85ccb7444d83124d78be0da829ad25 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dc85ccb7444d83124d78be0da829ad25 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dc85ccb7444d83124d78be0da829ad25, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dc85ccb7444d83124d78be0da829ad25->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dc85ccb7444d83124d78be0da829ad25, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dc85ccb7444d83124d78be0da829ad25,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_dc85ccb7444d83124d78be0da829ad25 == cache_frame_dc85ccb7444d83124d78be0da829ad25 )
    {
        Py_DECREF( frame_dc85ccb7444d83124d78be0da829ad25 );
    }
    cache_frame_dc85ccb7444d83124d78be0da829ad25 = NULL;

    assertFrameObject( frame_dc85ccb7444d83124d78be0da829ad25 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_6_close );
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
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_6_close );
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


static PyObject *impl_serial$serialjava$$$function_7_in_waiting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_f08a89763d65b2ac2a34a055561b1b4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f08a89763d65b2ac2a34a055561b1b4b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f08a89763d65b2ac2a34a055561b1b4b, codeobj_f08a89763d65b2ac2a34a055561b1b4b, module_serial$serialjava, sizeof(void *) );
    frame_f08a89763d65b2ac2a34a055561b1b4b = cache_frame_f08a89763d65b2ac2a34a055561b1b4b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f08a89763d65b2ac2a34a055561b1b4b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f08a89763d65b2ac2a34a055561b1b4b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 153;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 153;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__instream );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f08a89763d65b2ac2a34a055561b1b4b->m_frame.f_lineno = 154;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_available );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f08a89763d65b2ac2a34a055561b1b4b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f08a89763d65b2ac2a34a055561b1b4b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f08a89763d65b2ac2a34a055561b1b4b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f08a89763d65b2ac2a34a055561b1b4b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f08a89763d65b2ac2a34a055561b1b4b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f08a89763d65b2ac2a34a055561b1b4b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f08a89763d65b2ac2a34a055561b1b4b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_f08a89763d65b2ac2a34a055561b1b4b == cache_frame_f08a89763d65b2ac2a34a055561b1b4b )
    {
        Py_DECREF( frame_f08a89763d65b2ac2a34a055561b1b4b );
    }
    cache_frame_f08a89763d65b2ac2a34a055561b1b4b = NULL;

    assertFrameObject( frame_f08a89763d65b2ac2a34a055561b1b4b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_7_in_waiting );
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
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_7_in_waiting );
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


static PyObject *impl_serial$serialjava$$$function_8_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_read = NULL;
    PyObject *var_x = NULL;
    struct Nuitka_FrameObject *frame_a887a50dda37612885ebe6c63b8e6e2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a887a50dda37612885ebe6c63b8e6e2c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a887a50dda37612885ebe6c63b8e6e2c, codeobj_a887a50dda37612885ebe6c63b8e6e2c, module_serial$serialjava, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a887a50dda37612885ebe6c63b8e6e2c = cache_frame_a887a50dda37612885ebe6c63b8e6e2c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a887a50dda37612885ebe6c63b8e6e2c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a887a50dda37612885ebe6c63b8e6e2c ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "oooo";
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 163;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 163;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_bytearray );

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

            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        frame_a887a50dda37612885ebe6c63b8e6e2c->m_frame.f_lineno = 164;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_read == NULL );
        var_read = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_size );
        tmp_compexpr_left_1 = par_size;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
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
        loop_start_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_len );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "len" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( var_read );
            tmp_args_element_name_1 = var_read;
            frame_a887a50dda37612885ebe6c63b8e6e2c->m_frame.f_lineno = 166;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_compexpr_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_size );
            tmp_compexpr_right_2 = par_size;
            tmp_operand_name_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "oooo";
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
            goto loop_end_1;
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__instream );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 167;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_a887a50dda37612885ebe6c63b8e6e2c->m_frame.f_lineno = 167;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_read );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 167;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_2;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( var_x );
            tmp_compexpr_left_3 = var_x;
            tmp_compexpr_right_3 = const_int_neg_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "oooo";
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
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT( par_self );
                tmp_source_name_3 = par_self;
                tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_timeout );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 169;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 169;
                    type_description_1 = "oooo";
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
                goto loop_end_1;
                branch_no_5:;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_called_instance_2;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_2;
                CHECK_OBJECT( var_read );
                tmp_called_instance_2 = var_read;
                CHECK_OBJECT( var_x );
                tmp_args_element_name_2 = var_x;
                frame_a887a50dda37612885ebe6c63b8e6e2c->m_frame.f_lineno = 172;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 172;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_end_4:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_1;
        loop_end_1:;
        branch_no_2:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_bytes );

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

            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( var_read );
        tmp_args_element_name_3 = var_read;
        frame_a887a50dda37612885ebe6c63b8e6e2c->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a887a50dda37612885ebe6c63b8e6e2c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a887a50dda37612885ebe6c63b8e6e2c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a887a50dda37612885ebe6c63b8e6e2c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a887a50dda37612885ebe6c63b8e6e2c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a887a50dda37612885ebe6c63b8e6e2c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a887a50dda37612885ebe6c63b8e6e2c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a887a50dda37612885ebe6c63b8e6e2c,
        type_description_1,
        par_self,
        par_size,
        var_read,
        var_x
    );


    // Release cached frame.
    if ( frame_a887a50dda37612885ebe6c63b8e6e2c == cache_frame_a887a50dda37612885ebe6c63b8e6e2c )
    {
        Py_DECREF( frame_a887a50dda37612885ebe6c63b8e6e2c );
    }
    cache_frame_a887a50dda37612885ebe6c63b8e6e2c = NULL;

    assertFrameObject( frame_a887a50dda37612885ebe6c63b8e6e2c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_8_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    CHECK_OBJECT( (PyObject *)var_read );
    Py_DECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_8_read );
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


static PyObject *impl_serial$serialjava$$$function_9_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2672f7223589c6e0a82acfc0d329f3eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2672f7223589c6e0a82acfc0d329f3eb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2672f7223589c6e0a82acfc0d329f3eb, codeobj_2672f7223589c6e0a82acfc0d329f3eb, module_serial$serialjava, sizeof(void *)+sizeof(void *) );
    frame_2672f7223589c6e0a82acfc0d329f3eb = cache_frame_2672f7223589c6e0a82acfc0d329f3eb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2672f7223589c6e0a82acfc0d329f3eb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2672f7223589c6e0a82acfc0d329f3eb ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 178;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 178;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_1 = par_data;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_args_element_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_bytearray );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytearray );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytearray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_4;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
        frame_2672f7223589c6e0a82acfc0d329f3eb->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_TypeError );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TypeError );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TypeError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 180;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_5;
            tmp_left_name_1 = const_str_digest_f98c54fafbe7abdb3afa3affc3debdab;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_bytes );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 180;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_2 = tmp_mvar_value_6;
            tmp_right_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_type );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_type );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_right_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "type" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 180;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_7;
            CHECK_OBJECT( par_data );
            tmp_args_element_name_4 = par_data;
            frame_2672f7223589c6e0a82acfc0d329f3eb->m_frame.f_lineno = 180;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_1 );

                exception_lineno = 180;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
            tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_2672f7223589c6e0a82acfc0d329f3eb->m_frame.f_lineno = 180;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 180;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__outstream );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_data );
        tmp_args_element_name_5 = par_data;
        frame_2672f7223589c6e0a82acfc0d329f3eb->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_write, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_len );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "len" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_8;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_6 = par_data;
        frame_2672f7223589c6e0a82acfc0d329f3eb->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2672f7223589c6e0a82acfc0d329f3eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2672f7223589c6e0a82acfc0d329f3eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2672f7223589c6e0a82acfc0d329f3eb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2672f7223589c6e0a82acfc0d329f3eb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2672f7223589c6e0a82acfc0d329f3eb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2672f7223589c6e0a82acfc0d329f3eb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2672f7223589c6e0a82acfc0d329f3eb,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_2672f7223589c6e0a82acfc0d329f3eb == cache_frame_2672f7223589c6e0a82acfc0d329f3eb )
    {
        Py_DECREF( frame_2672f7223589c6e0a82acfc0d329f3eb );
    }
    cache_frame_2672f7223589c6e0a82acfc0d329f3eb = NULL;

    assertFrameObject( frame_2672f7223589c6e0a82acfc0d329f3eb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_9_write );
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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_9_write );
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


static PyObject *impl_serial$serialjava$$$function_10_reset_input_buffer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3bd40039cb5f63204207eeddcecc1992;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3bd40039cb5f63204207eeddcecc1992 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3bd40039cb5f63204207eeddcecc1992, codeobj_3bd40039cb5f63204207eeddcecc1992, module_serial$serialjava, sizeof(void *) );
    frame_3bd40039cb5f63204207eeddcecc1992 = cache_frame_3bd40039cb5f63204207eeddcecc1992;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3bd40039cb5f63204207eeddcecc1992 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3bd40039cb5f63204207eeddcecc1992 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 187;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 187;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__instream );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_skip );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__instream );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 188;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3bd40039cb5f63204207eeddcecc1992->m_frame.f_lineno = 188;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_available );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 188;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3bd40039cb5f63204207eeddcecc1992->m_frame.f_lineno = 188;
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


            exception_lineno = 188;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bd40039cb5f63204207eeddcecc1992 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bd40039cb5f63204207eeddcecc1992 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3bd40039cb5f63204207eeddcecc1992, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3bd40039cb5f63204207eeddcecc1992->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3bd40039cb5f63204207eeddcecc1992, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3bd40039cb5f63204207eeddcecc1992,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_3bd40039cb5f63204207eeddcecc1992 == cache_frame_3bd40039cb5f63204207eeddcecc1992 )
    {
        Py_DECREF( frame_3bd40039cb5f63204207eeddcecc1992 );
    }
    cache_frame_3bd40039cb5f63204207eeddcecc1992 = NULL;

    assertFrameObject( frame_3bd40039cb5f63204207eeddcecc1992 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_10_reset_input_buffer );
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
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_10_reset_input_buffer );
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


static PyObject *impl_serial$serialjava$$$function_11_reset_output_buffer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8c7257cb1cf6721521aadda68f134705;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8c7257cb1cf6721521aadda68f134705 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8c7257cb1cf6721521aadda68f134705, codeobj_8c7257cb1cf6721521aadda68f134705, module_serial$serialjava, sizeof(void *) );
    frame_8c7257cb1cf6721521aadda68f134705 = cache_frame_8c7257cb1cf6721521aadda68f134705;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8c7257cb1cf6721521aadda68f134705 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8c7257cb1cf6721521aadda68f134705 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 196;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 196;
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
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__outstream );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8c7257cb1cf6721521aadda68f134705->m_frame.f_lineno = 197;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flush );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c7257cb1cf6721521aadda68f134705 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c7257cb1cf6721521aadda68f134705 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8c7257cb1cf6721521aadda68f134705, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8c7257cb1cf6721521aadda68f134705->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8c7257cb1cf6721521aadda68f134705, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8c7257cb1cf6721521aadda68f134705,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_8c7257cb1cf6721521aadda68f134705 == cache_frame_8c7257cb1cf6721521aadda68f134705 )
    {
        Py_DECREF( frame_8c7257cb1cf6721521aadda68f134705 );
    }
    cache_frame_8c7257cb1cf6721521aadda68f134705 = NULL;

    assertFrameObject( frame_8c7257cb1cf6721521aadda68f134705 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_11_reset_output_buffer );
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
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_11_reset_output_buffer );
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


static PyObject *impl_serial$serialjava$$$function_12_send_break( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_duration = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a4989097c905c05c92ef02fb594dd4bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a4989097c905c05c92ef02fb594dd4bd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a4989097c905c05c92ef02fb594dd4bd, codeobj_a4989097c905c05c92ef02fb594dd4bd, module_serial$serialjava, sizeof(void *)+sizeof(void *) );
    frame_a4989097c905c05c92ef02fb594dd4bd = cache_frame_a4989097c905c05c92ef02fb594dd4bd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a4989097c905c05c92ef02fb594dd4bd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a4989097c905c05c92ef02fb594dd4bd ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 202;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 202;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sPort );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sendBreak );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_duration );
        tmp_left_name_1 = par_duration;
        tmp_right_name_1 = const_float_1000_0;
        tmp_args_element_name_1 = BINARY_OPERATION_MUL_OBJECT_FLOAT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 203;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a4989097c905c05c92ef02fb594dd4bd->m_frame.f_lineno = 203;
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


            exception_lineno = 203;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a4989097c905c05c92ef02fb594dd4bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a4989097c905c05c92ef02fb594dd4bd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a4989097c905c05c92ef02fb594dd4bd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a4989097c905c05c92ef02fb594dd4bd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a4989097c905c05c92ef02fb594dd4bd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a4989097c905c05c92ef02fb594dd4bd,
        type_description_1,
        par_self,
        par_duration
    );


    // Release cached frame.
    if ( frame_a4989097c905c05c92ef02fb594dd4bd == cache_frame_a4989097c905c05c92ef02fb594dd4bd )
    {
        Py_DECREF( frame_a4989097c905c05c92ef02fb594dd4bd );
    }
    cache_frame_a4989097c905c05c92ef02fb594dd4bd = NULL;

    assertFrameObject( frame_a4989097c905c05c92ef02fb594dd4bd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_12_send_break );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_duration );
    Py_DECREF( par_duration );
    par_duration = NULL;

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

    CHECK_OBJECT( (PyObject *)par_duration );
    Py_DECREF( par_duration );
    par_duration = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_12_send_break );
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


static PyObject *impl_serial$serialjava$$$function_13__update_break_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d495746fde4c5d1fc0437ca921028370;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d495746fde4c5d1fc0437ca921028370 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d495746fde4c5d1fc0437ca921028370, codeobj_d495746fde4c5d1fc0437ca921028370, module_serial$serialjava, sizeof(void *) );
    frame_d495746fde4c5d1fc0437ca921028370 = cache_frame_d495746fde4c5d1fc0437ca921028370;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d495746fde4c5d1fc0437ca921028370 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d495746fde4c5d1fc0437ca921028370 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fd );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "o";
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 208;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 208;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SerialException );

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

            exception_lineno = 209;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        frame_d495746fde4c5d1fc0437ca921028370->m_frame.f_lineno = 209;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_76b328aecf6e0180e1401f2c7b20c24e_tuple, 0 ) );

        if ( tmp_raise_type_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 209;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d495746fde4c5d1fc0437ca921028370 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d495746fde4c5d1fc0437ca921028370 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d495746fde4c5d1fc0437ca921028370, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d495746fde4c5d1fc0437ca921028370->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d495746fde4c5d1fc0437ca921028370, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d495746fde4c5d1fc0437ca921028370,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_d495746fde4c5d1fc0437ca921028370 == cache_frame_d495746fde4c5d1fc0437ca921028370 )
    {
        Py_DECREF( frame_d495746fde4c5d1fc0437ca921028370 );
    }
    cache_frame_d495746fde4c5d1fc0437ca921028370 = NULL;

    assertFrameObject( frame_d495746fde4c5d1fc0437ca921028370 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_13__update_break_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_13__update_break_state );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_serial$serialjava$$$function_14__update_rts_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_e52de18ed14066c0fc2c71a0172d8e78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e52de18ed14066c0fc2c71a0172d8e78 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e52de18ed14066c0fc2c71a0172d8e78, codeobj_e52de18ed14066c0fc2c71a0172d8e78, module_serial$serialjava, sizeof(void *) );
    frame_e52de18ed14066c0fc2c71a0172d8e78 = cache_frame_e52de18ed14066c0fc2c71a0172d8e78;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e52de18ed14066c0fc2c71a0172d8e78 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e52de18ed14066c0fc2c71a0172d8e78 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 214;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 214;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sPort );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_setRTS );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__rts_state );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 215;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e52de18ed14066c0fc2c71a0172d8e78->m_frame.f_lineno = 215;
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


            exception_lineno = 215;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e52de18ed14066c0fc2c71a0172d8e78 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e52de18ed14066c0fc2c71a0172d8e78 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e52de18ed14066c0fc2c71a0172d8e78, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e52de18ed14066c0fc2c71a0172d8e78->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e52de18ed14066c0fc2c71a0172d8e78, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e52de18ed14066c0fc2c71a0172d8e78,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_e52de18ed14066c0fc2c71a0172d8e78 == cache_frame_e52de18ed14066c0fc2c71a0172d8e78 )
    {
        Py_DECREF( frame_e52de18ed14066c0fc2c71a0172d8e78 );
    }
    cache_frame_e52de18ed14066c0fc2c71a0172d8e78 = NULL;

    assertFrameObject( frame_e52de18ed14066c0fc2c71a0172d8e78 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_14__update_rts_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_14__update_rts_state );
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


static PyObject *impl_serial$serialjava$$$function_15__update_dtr_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a15fa7ae75c1ce351f8668df9e718fb5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a15fa7ae75c1ce351f8668df9e718fb5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a15fa7ae75c1ce351f8668df9e718fb5, codeobj_a15fa7ae75c1ce351f8668df9e718fb5, module_serial$serialjava, sizeof(void *) );
    frame_a15fa7ae75c1ce351f8668df9e718fb5 = cache_frame_a15fa7ae75c1ce351f8668df9e718fb5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a15fa7ae75c1ce351f8668df9e718fb5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a15fa7ae75c1ce351f8668df9e718fb5 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 220;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 220;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sPort );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_setDTR );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__dtr_state );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 221;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a15fa7ae75c1ce351f8668df9e718fb5->m_frame.f_lineno = 221;
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


            exception_lineno = 221;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a15fa7ae75c1ce351f8668df9e718fb5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a15fa7ae75c1ce351f8668df9e718fb5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a15fa7ae75c1ce351f8668df9e718fb5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a15fa7ae75c1ce351f8668df9e718fb5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a15fa7ae75c1ce351f8668df9e718fb5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a15fa7ae75c1ce351f8668df9e718fb5,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a15fa7ae75c1ce351f8668df9e718fb5 == cache_frame_a15fa7ae75c1ce351f8668df9e718fb5 )
    {
        Py_DECREF( frame_a15fa7ae75c1ce351f8668df9e718fb5 );
    }
    cache_frame_a15fa7ae75c1ce351f8668df9e718fb5 = NULL;

    assertFrameObject( frame_a15fa7ae75c1ce351f8668df9e718fb5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_15__update_dtr_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_15__update_dtr_state );
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


static PyObject *impl_serial$serialjava$$$function_16_cts( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_12438b1beff6c8c9d505c499fec308c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_12438b1beff6c8c9d505c499fec308c1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_12438b1beff6c8c9d505c499fec308c1, codeobj_12438b1beff6c8c9d505c499fec308c1, module_serial$serialjava, sizeof(void *) );
    frame_12438b1beff6c8c9d505c499fec308c1 = cache_frame_12438b1beff6c8c9d505c499fec308c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_12438b1beff6c8c9d505c499fec308c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_12438b1beff6c8c9d505c499fec308c1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 227;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 227;
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
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sPort );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_12438b1beff6c8c9d505c499fec308c1->m_frame.f_lineno = 228;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isCTS );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12438b1beff6c8c9d505c499fec308c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12438b1beff6c8c9d505c499fec308c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_12438b1beff6c8c9d505c499fec308c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_12438b1beff6c8c9d505c499fec308c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_12438b1beff6c8c9d505c499fec308c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_12438b1beff6c8c9d505c499fec308c1,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_12438b1beff6c8c9d505c499fec308c1 == cache_frame_12438b1beff6c8c9d505c499fec308c1 )
    {
        Py_DECREF( frame_12438b1beff6c8c9d505c499fec308c1 );
    }
    cache_frame_12438b1beff6c8c9d505c499fec308c1 = NULL;

    assertFrameObject( frame_12438b1beff6c8c9d505c499fec308c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_16_cts );
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
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_16_cts );
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


static PyObject *impl_serial$serialjava$$$function_17_dsr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4f974ebc6cb76d90190605a43ba7424f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4f974ebc6cb76d90190605a43ba7424f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4f974ebc6cb76d90190605a43ba7424f, codeobj_4f974ebc6cb76d90190605a43ba7424f, module_serial$serialjava, sizeof(void *) );
    frame_4f974ebc6cb76d90190605a43ba7424f = cache_frame_4f974ebc6cb76d90190605a43ba7424f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f974ebc6cb76d90190605a43ba7424f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f974ebc6cb76d90190605a43ba7424f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 234;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 234;
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
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sPort );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4f974ebc6cb76d90190605a43ba7424f->m_frame.f_lineno = 235;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isDSR );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f974ebc6cb76d90190605a43ba7424f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f974ebc6cb76d90190605a43ba7424f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f974ebc6cb76d90190605a43ba7424f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f974ebc6cb76d90190605a43ba7424f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f974ebc6cb76d90190605a43ba7424f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4f974ebc6cb76d90190605a43ba7424f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4f974ebc6cb76d90190605a43ba7424f == cache_frame_4f974ebc6cb76d90190605a43ba7424f )
    {
        Py_DECREF( frame_4f974ebc6cb76d90190605a43ba7424f );
    }
    cache_frame_4f974ebc6cb76d90190605a43ba7424f = NULL;

    assertFrameObject( frame_4f974ebc6cb76d90190605a43ba7424f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_17_dsr );
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
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_17_dsr );
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


static PyObject *impl_serial$serialjava$$$function_18_ri( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_e77fd6e3771aaebd4afbfa92a3579a3a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e77fd6e3771aaebd4afbfa92a3579a3a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e77fd6e3771aaebd4afbfa92a3579a3a, codeobj_e77fd6e3771aaebd4afbfa92a3579a3a, module_serial$serialjava, sizeof(void *) );
    frame_e77fd6e3771aaebd4afbfa92a3579a3a = cache_frame_e77fd6e3771aaebd4afbfa92a3579a3a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e77fd6e3771aaebd4afbfa92a3579a3a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e77fd6e3771aaebd4afbfa92a3579a3a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 241;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 241;
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
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sPort );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e77fd6e3771aaebd4afbfa92a3579a3a->m_frame.f_lineno = 242;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isRI );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e77fd6e3771aaebd4afbfa92a3579a3a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e77fd6e3771aaebd4afbfa92a3579a3a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e77fd6e3771aaebd4afbfa92a3579a3a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e77fd6e3771aaebd4afbfa92a3579a3a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e77fd6e3771aaebd4afbfa92a3579a3a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e77fd6e3771aaebd4afbfa92a3579a3a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_e77fd6e3771aaebd4afbfa92a3579a3a == cache_frame_e77fd6e3771aaebd4afbfa92a3579a3a )
    {
        Py_DECREF( frame_e77fd6e3771aaebd4afbfa92a3579a3a );
    }
    cache_frame_e77fd6e3771aaebd4afbfa92a3579a3a = NULL;

    assertFrameObject( frame_e77fd6e3771aaebd4afbfa92a3579a3a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_18_ri );
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
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_18_ri );
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


static PyObject *impl_serial$serialjava$$$function_19_cd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3269d2aed1868b8aea76246b4d997dbb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3269d2aed1868b8aea76246b4d997dbb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3269d2aed1868b8aea76246b4d997dbb, codeobj_3269d2aed1868b8aea76246b4d997dbb, module_serial$serialjava, sizeof(void *) );
    frame_3269d2aed1868b8aea76246b4d997dbb = cache_frame_3269d2aed1868b8aea76246b4d997dbb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3269d2aed1868b8aea76246b4d997dbb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3269d2aed1868b8aea76246b4d997dbb ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 248;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 248;
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
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sPort );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3269d2aed1868b8aea76246b4d997dbb->m_frame.f_lineno = 249;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isCD );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3269d2aed1868b8aea76246b4d997dbb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3269d2aed1868b8aea76246b4d997dbb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3269d2aed1868b8aea76246b4d997dbb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3269d2aed1868b8aea76246b4d997dbb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3269d2aed1868b8aea76246b4d997dbb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3269d2aed1868b8aea76246b4d997dbb,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_3269d2aed1868b8aea76246b4d997dbb == cache_frame_3269d2aed1868b8aea76246b4d997dbb )
    {
        Py_DECREF( frame_3269d2aed1868b8aea76246b4d997dbb );
    }
    cache_frame_3269d2aed1868b8aea76246b4d997dbb = NULL;

    assertFrameObject( frame_3269d2aed1868b8aea76246b4d997dbb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_19_cd );
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
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_19_cd );
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



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_10_reset_input_buffer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_10_reset_input_buffer,
        const_str_plain_reset_input_buffer,
#if PYTHON_VERSION >= 300
        const_str_digest_0081767d335d9fb963b22b42d5219f43,
#endif
        codeobj_3bd40039cb5f63204207eeddcecc1992,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_bd2e98b142ff21c9f389c674d6946c9a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_11_reset_output_buffer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_11_reset_output_buffer,
        const_str_plain_reset_output_buffer,
#if PYTHON_VERSION >= 300
        const_str_digest_ad4d3667ad4be7949c20c65bd946d9a1,
#endif
        codeobj_8c7257cb1cf6721521aadda68f134705,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_14aa7bed476b499178dd8a4fa54d666e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_12_send_break( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_12_send_break,
        const_str_plain_send_break,
#if PYTHON_VERSION >= 300
        const_str_digest_1b21f0ea3518f54bf6362ee9e3367e58,
#endif
        codeobj_a4989097c905c05c92ef02fb594dd4bd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_6307284dff33304eb571a029dfac7803,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_13__update_break_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_13__update_break_state,
        const_str_plain__update_break_state,
#if PYTHON_VERSION >= 300
        const_str_digest_b40497f26645e3ebadb6514ab8d446ba,
#endif
        codeobj_d495746fde4c5d1fc0437ca921028370,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_09388aafcb6adb40da642c8223c8e7c5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_14__update_rts_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_14__update_rts_state,
        const_str_plain__update_rts_state,
#if PYTHON_VERSION >= 300
        const_str_digest_1e77c865d9cc3714cae3a6bd34503ca9,
#endif
        codeobj_e52de18ed14066c0fc2c71a0172d8e78,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_1d3403f47e70d0d3c7366e99c0db7fa8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_15__update_dtr_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_15__update_dtr_state,
        const_str_plain__update_dtr_state,
#if PYTHON_VERSION >= 300
        const_str_digest_55bd609d83337e3e53f56f56fb6e69c2,
#endif
        codeobj_a15fa7ae75c1ce351f8668df9e718fb5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_2b96e25c8d393fdf065d358454fdf25c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_16_cts(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_16_cts,
        const_str_plain_cts,
#if PYTHON_VERSION >= 300
        const_str_digest_444a195d697d77e6dc3d797b3cd6086d,
#endif
        codeobj_12438b1beff6c8c9d505c499fec308c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_06425a8e1b9d5eab562978eb6eacf777,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_17_dsr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_17_dsr,
        const_str_plain_dsr,
#if PYTHON_VERSION >= 300
        const_str_digest_c425e1720ed7efc14d8a103f222711b2,
#endif
        codeobj_4f974ebc6cb76d90190605a43ba7424f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_54cde0cd7a92974ff918f0defbd1eeb9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_18_ri(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_18_ri,
        const_str_plain_ri,
#if PYTHON_VERSION >= 300
        const_str_digest_99bcd2cd4b1caacf3cac0b2495622ee2,
#endif
        codeobj_e77fd6e3771aaebd4afbfa92a3579a3a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_c987d57c872daa303d57e57028663dbb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_19_cd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_19_cd,
        const_str_plain_cd,
#if PYTHON_VERSION >= 300
        const_str_digest_9777a2e7909bbc36bb577eeb2ac8826b,
#endif
        codeobj_3269d2aed1868b8aea76246b4d997dbb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_faa07c45c026cd5370bf39ce65b9f2d8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_1_my_import(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_1_my_import,
        const_str_plain_my_import,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f3460cf561158c3f40185668fa1c2f01,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_2_detect_java_comm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_2_detect_java_comm,
        const_str_plain_detect_java_comm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_954434154b559504193ea567b8e5e044,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_eb13749486bdceb9d9c45045106f689c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_3_device(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_3_device,
        const_str_plain_device,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_16a00baaddbb43a1bd2b0363f0aee43b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_56312e9e44f7e28c1876ceb5a373d82d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_4_open(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_4_open,
        const_str_plain_open,
#if PYTHON_VERSION >= 300
        const_str_digest_3c35695160658dede20e26ab5c064c8b,
#endif
        codeobj_0b21c0090947b631c33352f1060d8367,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_4b91cca6339a9a892cf0e30d6bd1bdfc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_5__reconfigurePort(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_5__reconfigurePort,
        const_str_plain__reconfigurePort,
#if PYTHON_VERSION >= 300
        const_str_digest_ee8336d4d5dc9867d9bed77eb41d617a,
#endif
        codeobj_4bb6fe8a34bae4164978a0b59153f589,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_47be6feae340d11ceea1b2be1116c946,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_6_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_6_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_b7525636ddb73d1aea5ab60e59f79aaf,
#endif
        codeobj_dc85ccb7444d83124d78be0da829ad25,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_ca3087f1fed5e9b894c48e0dbbd2f218,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_7_in_waiting(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_7_in_waiting,
        const_str_plain_in_waiting,
#if PYTHON_VERSION >= 300
        const_str_digest_84335857b51bb81565c03cce4760dbdb,
#endif
        codeobj_f08a89763d65b2ac2a34a055561b1b4b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_72db89f2656c7536ad3ca9676d132571,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_8_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_8_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 300
        const_str_digest_753bea82ba0eb08b3c188d4785781d6a,
#endif
        codeobj_a887a50dda37612885ebe6c63b8e6e2c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_67381b97568fd04864d7225afb09d3b9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_9_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_9_write,
        const_str_plain_write,
#if PYTHON_VERSION >= 300
        const_str_digest_872307698c9c04ef72f670bc6f1882ef,
#endif
        codeobj_2672f7223589c6e0a82acfc0d329f3eb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialjava,
        const_str_digest_59d8c08c8b321dd488f0cfd9cc30b9cf,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$serialjava =
{
    PyModuleDef_HEAD_INIT,
    "serial.serialjava",
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

MOD_INIT_DECL( serial$serialjava )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$serialjava );
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
    puts("serial.serialjava: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.serialjava: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.serialjava: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserial$serialjava" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$serialjava = Py_InitModule4(
        "serial.serialjava",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_serial$serialjava = PyModule_Create( &mdef_serial$serialjava );
#endif

    moduledict_serial$serialjava = MODULE_DICT( module_serial$serialjava );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_serial$serialjava,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_serial$serialjava,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_serial$serialjava,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_serial$serialjava,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_serial$serialjava );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_9ba51f6bdeff944f83e458f9b58790b4, module_serial$serialjava );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_01726b92b368b645485faa09197dbd25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_serial$serialjava_53 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_c9fa59fa93cf3a0f0be7722626b44ffd_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c9fa59fa93cf3a0f0be7722626b44ffd_2 = NULL;
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
        UPDATE_STRING_DICT0( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_01726b92b368b645485faa09197dbd25 = MAKE_MODULE_FRAME( codeobj_01726b92b368b645485faa09197dbd25, module_serial$serialjava );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_01726b92b368b645485faa09197dbd25 );
    assert( Py_REFCNT( frame_01726b92b368b645485faa09197dbd25 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
        tmp_globals_name_1 = (PyObject *)moduledict_serial$serialjava;
        tmp_locals_name_1 = (PyObject *)moduledict_serial$serialjava;
        tmp_fromlist_name_1 = const_tuple_str_chr_42_tuple;
        tmp_level_name_1 = const_int_0;
        frame_01726b92b368b645485faa09197dbd25->m_frame.f_lineno = 10;
        tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_star_imported_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_serial$serialjava, true, tmp_star_imported_1 );
        Py_DECREF( tmp_star_imported_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_FUNCTION_serial$serialjava$$$function_1_my_import(  );



        UPDATE_STRING_DICT1( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_my_import, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_serial$serialjava$$$function_2_detect_java_comm(  );



        UPDATE_STRING_DICT1( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_detect_java_comm, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_arg_element_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_detect_java_comm );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_detect_java_comm );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_called_name_1 = tmp_mvar_value_3;
        tmp_call_arg_element_1 = LIST_COPY( const_list_75856efb0ecca7fbce58d69489689c75_list );
        frame_01726b92b368b645485faa09197dbd25->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = { tmp_call_arg_element_1 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_call_arg_element_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_serial$serialjava$$$function_3_device(  );



        UPDATE_STRING_DICT1( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_device, tmp_assign_source_7 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SerialBase );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialBase );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialBase" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;

            goto try_except_handler_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_4;
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
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

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


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_subscribed_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

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


            exception_lineno = 53;

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


            exception_lineno = 53;

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


            exception_lineno = 53;

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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;

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
            frame_01726b92b368b645485faa09197dbd25->m_frame.f_lineno = 53;
            tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_11;
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


                exception_lineno = 53;

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
                PyObject *tmp_source_name_4;
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


                    exception_lineno = 53;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 53;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 53;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 53;
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
            locals_serial$serialjava_53 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9ba51f6bdeff944f83e458f9b58790b4;
        tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_65e81d7601f8f895a742ef32abea7b4a;
        tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_Serial;
        tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_c9fa59fa93cf3a0f0be7722626b44ffd_2, codeobj_c9fa59fa93cf3a0f0be7722626b44ffd, module_serial$serialjava, sizeof(void *) );
        frame_c9fa59fa93cf3a0f0be7722626b44ffd_2 = cache_frame_c9fa59fa93cf3a0f0be7722626b44ffd_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_c9fa59fa93cf3a0f0be7722626b44ffd_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_c9fa59fa93cf3a0f0be7722626b44ffd_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_serial$serialjava$$$function_4_open(  );



        tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain_open, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialjava$$$function_5__reconfigurePort(  );



        tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain__reconfigurePort, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialjava$$$function_6_close(  );



        tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain_close, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_3 = PyObject_GetItem( locals_serial$serialjava_53, const_str_plain_property );

            if ( tmp_called_name_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_property );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_property );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 149;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_3 = tmp_mvar_value_5;
                Py_INCREF( tmp_called_name_3 );
                }
            }

            tmp_args_element_name_1 = MAKE_FUNCTION_serial$serialjava$$$function_7_in_waiting(  );



            frame_c9fa59fa93cf3a0f0be7722626b44ffd_2->m_frame.f_lineno = 149;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain_in_waiting, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_int_pos_1_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_serial$serialjava$$$function_8_read( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain_read, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialjava$$$function_9_write(  );



        tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain_write, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialjava$$$function_10_reset_input_buffer(  );



        tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain_reset_input_buffer, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialjava$$$function_11_reset_output_buffer(  );



        tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain_reset_output_buffer, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_float_0_25_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_serial$serialjava$$$function_12_send_break( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain_send_break, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialjava$$$function_13__update_break_state(  );



        tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain__update_break_state, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialjava$$$function_14__update_rts_state(  );



        tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain__update_rts_state, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialjava$$$function_15__update_dtr_state(  );



        tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain__update_dtr_state, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_4 = PyObject_GetItem( locals_serial$serialjava_53, const_str_plain_property );

            if ( tmp_called_name_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_property );

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

                    exception_lineno = 223;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_4 = tmp_mvar_value_6;
                Py_INCREF( tmp_called_name_4 );
                }
            }

            tmp_args_element_name_2 = MAKE_FUNCTION_serial$serialjava$$$function_16_cts(  );



            frame_c9fa59fa93cf3a0f0be7722626b44ffd_2->m_frame.f_lineno = 223;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain_cts, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_3;
            tmp_called_name_5 = PyObject_GetItem( locals_serial$serialjava_53, const_str_plain_property );

            if ( tmp_called_name_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_property );

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

                    exception_lineno = 230;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_5 = tmp_mvar_value_7;
                Py_INCREF( tmp_called_name_5 );
                }
            }

            tmp_args_element_name_3 = MAKE_FUNCTION_serial$serialjava$$$function_17_dsr(  );



            frame_c9fa59fa93cf3a0f0be7722626b44ffd_2->m_frame.f_lineno = 230;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain_dsr, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_4;
            tmp_called_name_6 = PyObject_GetItem( locals_serial$serialjava_53, const_str_plain_property );

            if ( tmp_called_name_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_property );

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

                    exception_lineno = 237;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_6 = tmp_mvar_value_8;
                Py_INCREF( tmp_called_name_6 );
                }
            }

            tmp_args_element_name_4 = MAKE_FUNCTION_serial$serialjava$$$function_18_ri(  );



            frame_c9fa59fa93cf3a0f0be7722626b44ffd_2->m_frame.f_lineno = 237;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain_ri, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_5;
            tmp_called_name_7 = PyObject_GetItem( locals_serial$serialjava_53, const_str_plain_property );

            if ( tmp_called_name_7 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_property );

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

                    exception_lineno = 244;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_7 = tmp_mvar_value_9;
                Py_INCREF( tmp_called_name_7 );
                }
            }

            tmp_args_element_name_5 = MAKE_FUNCTION_serial$serialjava$$$function_19_cd(  );



            frame_c9fa59fa93cf3a0f0be7722626b44ffd_2->m_frame.f_lineno = 244;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_serial$serialjava_53, const_str_plain_cd, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c9fa59fa93cf3a0f0be7722626b44ffd_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c9fa59fa93cf3a0f0be7722626b44ffd_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_c9fa59fa93cf3a0f0be7722626b44ffd_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_c9fa59fa93cf3a0f0be7722626b44ffd_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_c9fa59fa93cf3a0f0be7722626b44ffd_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_c9fa59fa93cf3a0f0be7722626b44ffd_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_c9fa59fa93cf3a0f0be7722626b44ffd_2 == cache_frame_c9fa59fa93cf3a0f0be7722626b44ffd_2 )
        {
            Py_DECREF( frame_c9fa59fa93cf3a0f0be7722626b44ffd_2 );
        }
        cache_frame_c9fa59fa93cf3a0f0be7722626b44ffd_2 = NULL;

        assertFrameObject( frame_c9fa59fa93cf3a0f0be7722626b44ffd_2 );

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
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_8 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_Serial;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_serial$serialjava_53;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_01726b92b368b645485faa09197dbd25->m_frame.f_lineno = 53;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;

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
        NUITKA_CANNOT_GET_HERE( serial$serialjava );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_serial$serialjava_53 );
        locals_serial$serialjava_53 = NULL;
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

        Py_DECREF( locals_serial$serialjava_53 );
        locals_serial$serialjava_53 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$serialjava );
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
        NUITKA_CANNOT_GET_HERE( serial$serialjava );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 53;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_Serial, tmp_assign_source_13 );
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
    RESTORE_FRAME_EXCEPTION( frame_01726b92b368b645485faa09197dbd25 );
#endif
    popFrameStack();

    assertFrameObject( frame_01726b92b368b645485faa09197dbd25 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_01726b92b368b645485faa09197dbd25 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_01726b92b368b645485faa09197dbd25, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_01726b92b368b645485faa09197dbd25->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_01726b92b368b645485faa09197dbd25, exception_lineno );
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
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_serial$serialjava );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
