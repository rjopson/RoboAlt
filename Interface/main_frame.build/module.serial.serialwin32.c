/* Generated code for Python module 'serial.serialwin32'
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

/* The "_module_serial$serialwin32" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial$serialwin32;
PyDictObject *moduledict_serial$serialwin32;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_fAbortOnError;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_GENERIC_WRITE;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_SETXOFF;
extern PyObject *const_tuple_str_plain_self_str_plain_enable_tuple;
extern PyObject *const_str_plain_ClearCommError;
extern PyObject *const_str_plain_fParity;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_err;
extern PyObject *const_str_plain_writeTimeoutError;
extern PyObject *const_str_plain_PURGE_TXABORT;
extern PyObject *const_str_plain_CreateFile;
extern PyObject *const_str_plain_COM;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_PURGE_TXCLEAR;
extern PyObject *const_str_plain_fErrorChar;
extern PyObject *const_str_plain_SETXON;
static PyObject *const_str_plain__overlapped_write;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_cbOutQue;
extern PyObject *const_str_plain_fRtsControl;
static PyObject *const_str_digest_1a30dfaee32a57c225a65de5a6c71477;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain_dsr;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_RTS_CONTROL_TOGGLE;
extern PyObject *const_str_plain_flags;
extern PyObject *const_int_pos_75;
extern PyObject *const_str_plain_DWORD;
extern PyObject *const_str_plain_is_open;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_BaudRate;
extern PyObject *const_str_digest_06425a8e1b9d5eab562978eb6eacf777;
static PyObject *const_str_plain__close;
extern PyObject *const_int_pos_8;
extern PyObject *const_int_pos_38400;
extern PyObject *const_str_plain_byref;
static PyObject *const_str_digest_0d7fab97f93470129456c07fbd1abc06;
extern PyObject *const_str_plain_ERROR_INVALID_USER_BUFFER;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_digest_088e326eed737fbd2d5feedf060c96ff;
extern PyObject *const_str_digest_47be6feae340d11ceea1b2be1116c946;
extern PyObject *const_str_plain_Parity;
static PyObject *const_str_digest_8b21bb7c31a09b0b7d2ccbe6cec5dcf5;
static PyObject *const_str_digest_25e06e7ac2b4b3e4c9c85aa404490cdf;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_CancelIoEx;
extern PyObject *const_str_plain_BAUDRATES;
extern PyObject *const_str_plain_ERROR_NOT_ENOUGH_MEMORY;
extern PyObject *const_int_pos_4096;
static PyObject *const_tuple_str_plain_COM_tuple;
extern PyObject *const_str_plain_buf;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_portstr;
extern PyObject *const_str_plain_DCB;
extern PyObject *const_str_plain_reset_input_buffer;
extern PyObject *const_str_plain_reset_output_buffer;
static PyObject *const_str_digest_b95f5838b964efd1a6bb07dfdf0292c8;
extern PyObject *const_str_digest_0cbcf6a59250460bff6164d640b77740;
extern PyObject *const_str_plain_create_string_buffer;
extern PyObject *const_str_plain_MAXDWORD;
extern PyObject *const_int_pos_200;
extern PyObject *const_str_plain_ERROR_SUCCESS;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_ReadTotalTimeoutConstant;
extern PyObject *const_str_digest_67e30ad9cc029aa9b34457de3a368897;
static PyObject *const_str_digest_6847a54a76c70d02a87c9a76f4937837;
static PyObject *const_str_digest_5ed58a77f20ffb579393ed23bc7ec71b;
extern PyObject *const_str_plain_SEVENBITS;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_MS_RLSD_ON;
extern PyObject *const_str_plain_port;
static PyObject *const_str_plain_comstat;
static PyObject *const_str_plain_overlapped;
extern PyObject *const_str_plain_open;
extern PyObject *const_str_digest_444a195d697d77e6dc3d797b3cd6086d;
extern PyObject *const_str_plain_ByteSize;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_FILE_ATTRIBUTE_NORMAL;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_EIGHTBITS;
extern PyObject *const_str_plain_EV_ERR;
extern PyObject *const_str_plain__update_rts_state;
extern PyObject *const_str_plain_WinError;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_digest_11255cc295ff7c51049482a25673fcd6;
extern PyObject *const_str_plain_cancel_write;
extern PyObject *const_tuple_str_digest_088e326eed737fbd2d5feedf060c96ff_tuple;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_SetupComm;
static PyObject *const_str_digest_1ad7c58b26db5ec7add099b988e90107;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_WriteFile;
static PyObject *const_tuple_str_plain_win32_tuple;
static PyObject *const_str_plain_errorcode;
extern PyObject *const_int_pos_600;
extern PyObject *const_str_digest_54cde0cd7a92974ff918f0defbd1eeb9;
extern PyObject *const_str_plain_GetCommState;
extern PyObject *const_str_plain_INVALID_HANDLE_VALUE;
extern PyObject *const_str_digest_66c5c36b8185e52d7e7b19bd4f1801a9;
static PyObject *const_str_plain_result_ok;
extern PyObject *const_tuple_str_plain_self_str_plain_port_tuple;
extern PyObject *const_str_plain__stopbits;
extern PyObject *const_int_pos_115200;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_setter;
extern PyObject *const_str_plain_EVENPARITY;
extern PyObject *const_str_plain_ReadFile;
extern PyObject *const_int_pos_9600;
extern PyObject *const_str_plain_COMMTIMEOUTS;
extern PyObject *const_str_digest_145bf772d86c3cb38f291d317430df01;
static PyObject *const_str_digest_9154b8cf6e65b3c901c35e8e1d5d5876;
extern PyObject *const_tuple_float_0_05_tuple;
extern PyObject *const_str_plain_ClearCommBreak;
static PyObject *const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple;
extern PyObject *const_int_pos_1200;
extern PyObject *const_str_digest_4333ea5a1e0d9523f79855910d1cf6f7;
extern PyObject *const_str_digest_c425e1720ed7efc14d8a103f222711b2;
extern PyObject *const_str_plain_ODDPARITY;
extern PyObject *const_str_plain_XOFF;
extern PyObject *const_str_plain_CloseHandle;
extern PyObject *const_str_plain__update_break_state;
extern PyObject *const_str_plain_read;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_ReadIntervalTimeout;
extern PyObject *const_str_plain_serial;
extern PyObject *const_str_plain_close;
extern PyObject *const_int_pos_300;
extern PyObject *const_str_digest_094a5755decb0ff88251d419e9b9deb6;
extern PyObject *const_str_digest_bd2e98b142ff21c9f389c674d6946c9a;
static PyObject *const_str_digest_686727e74bc29d6f749822c8572b6c6c;
extern PyObject *const_str_plain_EscapeCommFunction;
extern PyObject *const_str_plain_GetLastError;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_PARITY_EVEN;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_XoffChar;
extern PyObject *const_str_plain_GENERIC_READ;
static PyObject *const_str_digest_62b76f5ef85e04e40c80f3d7cd0b95b8;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_SetCommState;
extern PyObject *const_str_digest_84335857b51bb81565c03cce4760dbdb;
extern PyObject *const_str_plain_CLRRTS;
extern PyObject *const_str_plain__xonxoff;
extern PyObject *const_str_plain_raw;
extern PyObject *const_str_digest_2b96e25c8d393fdf065d358454fdf25c;
static PyObject *const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple;
extern PyObject *const_str_plain_MS_RING_ON;
static PyObject *const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple;
extern PyObject *const_str_plain_MS_CTS_ON;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_cd;
extern PyObject *const_str_digest_57027c3185c735e629ff3e28a5a985c8;
extern PyObject *const_tuple_str_digest_a41f7446b10852b7fa7917c8946aa5e1_tuple;
extern PyObject *const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple;
extern PyObject *const_str_plain_ctypes;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_plain_rc;
extern PyObject *const_str_plain_PARITY_MARK;
static PyObject *const_str_plain_timeouts;
static PyObject *const_tuple_int_pos_4096_none_tuple;
extern PyObject *const_str_plain_WriteTotalTimeoutConstant;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_ri;
static PyObject *const_str_digest_dd27bacab731657fa9534dd0d2a2543b;
extern PyObject *const_str_plain_OVERLAPPED;
extern PyObject *const_str_plain_fOutxCtsFlow;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_digest_b7525636ddb73d1aea5ab60e59f79aaf;
extern PyObject *const_tuple_str_plain_self_str_plain_exclusive_tuple;
static PyObject *const_str_digest_8589c768c45cb2df2310b69a6dd47c26;
static PyObject *const_str_digest_62c72e1ca1e4896fc419afc8435990bd;
extern PyObject *const_tuple_str_digest_145bf772d86c3cb38f291d317430df01_tuple;
static PyObject *const_tuple_none_int_pos_1_int_0_none_tuple;
static PyObject *const_str_plain__cancel_overlapped_io;
extern PyObject *const_str_digest_c987d57c872daa303d57e57028663dbb;
extern PyObject *const_str_plain_cts;
extern PyObject *const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
extern PyObject *const_int_pos_1800;
extern PyObject *const_str_plain_SPACEPARITY;
extern PyObject *const_str_digest_3c35695160658dede20e26ab5c064c8b;
extern PyObject *const_str_plain_hEvent;
extern PyObject *const_str_plain_ERROR_IO_INCOMPLETE;
extern PyObject *const_str_plain_XonChar;
static PyObject *const_tuple_str_plain_self_str_plain_stat_tuple;
extern PyObject *const_str_plain_set_output_flow_control;
extern PyObject *const_str_digest_753bea82ba0eb08b3c188d4785781d6a;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_DTR_CONTROL_HANDSHAKE;
extern PyObject *const_str_plain_SetCommBreak;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_delay_before_tx;
extern PyObject *const_str_plain_fDtrControl;
extern PyObject *const_str_plain_Serial;
extern PyObject *const_str_plain_ERROR_OPERATION_ABORTED;
extern PyObject *const_str_plain__rtscts;
extern PyObject *const_tuple_none_int_0_int_0_none_tuple;
extern PyObject *const_str_plain_cbInQue;
extern PyObject *const_str_plain_success;
static PyObject *const_str_plain_comDCB;
extern PyObject *const_str_digest_0081767d335d9fb963b22b42d5219f43;
static PyObject *const_str_digest_4eef2f6a61d78aeba404d85f811ca17f;
extern PyObject *const_str_plain_ONE5STOPBITS;
extern PyObject *const_str_plain_SerialBase;
extern PyObject *const_str_plain_loopback;
extern PyObject *const_str_plain_in_waiting;
extern PyObject *const_str_plain_XON;
extern PyObject *const_str_plain_DTR_CONTROL_DISABLE;
extern PyObject *const_str_plain__bytesize;
extern PyObject *const_str_plain_STOPBITS_ONE_POINT_FIVE;
extern PyObject *const_str_plain__rts_state;
extern PyObject *const_str_plain_rts_level_for_tx;
extern PyObject *const_str_digest_faa07c45c026cd5370bf39ce65b9f2d8;
extern PyObject *const_str_plain_fOutX;
static PyObject *const_str_digest_7e584289af6145c25f7a5a475f55a53e;
extern PyObject *const_int_pos_19200;
static PyObject *const_str_plain_tx_size;
extern PyObject *const_str_plain_sleep;
extern PyObject *const_str_plain_flush;
extern PyObject *const_str_plain_rts_level_for_rx;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_COMSTAT;
static PyObject *const_str_digest_2ed77bc529ac5233e189e9c63149ac9b;
extern PyObject *const_str_plain_ONESTOPBIT;
extern PyObject *const_str_plain_data;
static PyObject *const_str_digest_2fee4f8a7222f5d8adcdf46b602cea8b;
extern PyObject *const_str_digest_67381b97568fd04864d7225afb09d3b9;
extern PyObject *const_int_pos_57600;
static PyObject *const_str_digest_965cfe85759abc1c82262e5a9b7bf0b5;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_NOPARITY;
extern PyObject *const_str_plain_STOPBITS_TWO;
extern PyObject *const_str_plain_DTR_CONTROL_ENABLE;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_8f9d795f9bfd7d9e989c9810e38e4f0e;
extern PyObject *const_str_plain__reconfigure_port;
extern PyObject *const_str_plain_StopBits;
extern PyObject *const_str_plain__port;
extern PyObject *const_str_digest_872307698c9c04ef72f670bc6f1882ef;
extern PyObject *const_str_plain_GetOverlappedResult;
static PyObject *const_str_digest_467375677f1ba6a8f3ff29b62877b078;
extern PyObject *const_int_pos_2400;
extern PyObject *const_str_plain_SetCommTimeouts;
extern PyObject *const_str_plain_RTS_CONTROL_DISABLE;
static PyObject *const_str_plain__GetCommModemStatus;
extern PyObject *const_str_plain_PARITY_NONE;
extern PyObject *const_str_plain_OPEN_EXISTING;
extern PyObject *const_str_plain_cancel_read;
extern PyObject *const_str_plain_RTS_CONTROL_HANDSHAKE;
extern PyObject *const_str_plain_GetCommModemStatus;
extern PyObject *const_int_pos_1000;
extern PyObject *const_str_plain_MARKPARITY;
extern PyObject *const_str_digest_b3e430ebe6d78da9a44d2274b4726df4;
extern PyObject *const_str_plain__parity;
extern PyObject *const_str_plain_PurgeComm;
extern PyObject *const_str_digest_cee0e65b93fa2a88bd408284fcdf4582;
extern PyObject *const_str_digest_1d3403f47e70d0d3c7366e99c0db7fa8;
extern PyObject *const_str_plain_SETDTR;
extern PyObject *const_tuple_5aee5ca7adb77075f0cc1cb4927b0a43_tuple;
extern PyObject *const_str_plain__timeout;
extern PyObject *const_str_plain_CreateEvent;
extern PyObject *const_str_plain_PARITY_ODD;
static PyObject *const_str_digest_0b18e2f1244bfabe48d1d7021f6de339;
extern PyObject *const_str_plain__port_handle;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_SetCommMask;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_TWOSTOPBITS;
extern PyObject *const_str_digest_99bcd2cd4b1caacf3cac0b2495622ee2;
static PyObject *const_str_digest_fd328062211a423aa7fe22cf36a43194;
extern PyObject *const_str_digest_9777a2e7909bbc36bb577eeb2ac8826b;
extern PyObject *const_str_plain_CLRDTR;
extern PyObject *const_str_digest_fb47bff99f738a0e4e65a023f1212ef3;
extern PyObject *const_str_digest_ca3087f1fed5e9b894c48e0dbbd2f218;
static PyObject *const_tuple_str_plain_self_str_plain_rx_size_str_plain_tx_size_tuple;
extern PyObject *const_str_plain_fInX;
extern PyObject *const_str_plain_ERROR_IO_PENDING;
static PyObject *const_str_digest_8ab7d280f3c27847f45a238edf5bac9d;
extern PyObject *const_int_pos_134;
extern PyObject *const_str_digest_09388aafcb6adb40da642c8223c8e7c5;
extern PyObject *const_str_plain_win32;
extern PyObject *const_str_plain__break_state;
extern PyObject *const_str_plain_PURGE_RXCLEAR;
extern PyObject *const_str_digest_33be1aa9452ea1a35db7fc513fc42137;
extern PyObject *const_str_plain___set__;
extern PyObject *const_str_plain__dtr_state;
extern PyObject *const_str_plain_fOutxDsrFlow;
extern PyObject *const_str_digest_1e77c865d9cc3714cae3a6bd34503ca9;
extern PyObject *const_str_plain_RTS_CONTROL_ENABLE;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_STOPBITS_ONE;
extern PyObject *const_str_plain_SIXBITS;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_plain__orgTimeouts;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_digest_a41f7446b10852b7fa7917c8946aa5e1;
extern PyObject *const_str_plain_size;
extern PyObject *const_int_pos_6;
extern PyObject *const_slice_int_pos_3_none_none;
extern PyObject *const_str_plain_stat;
extern PyObject *const_str_digest_402b4bc3f48df15ec03d142e1f2f4f27;
extern PyObject *const_str_plain_SerialException;
extern PyObject *const_str_plain__update_dtr_state;
static PyObject *const_str_plain_rx_size;
extern PyObject *const_str_digest_9f8efa138c5aec36629370c6ae640296;
extern PyObject *const_str_plain_FILE_FLAG_OVERLAPPED;
static PyObject *const_str_digest_6547a8beb62647247f4e85bd93aba976;
extern PyObject *const_str_plain_PURGE_RXABORT;
extern PyObject *const_str_plain__write_timeout;
static PyObject *const_str_digest_290af2e04efec43d4d7c7fc5f52faf17;
extern PyObject *const_str_plain_ResetEvent;
extern PyObject *const_str_plain_GetCommTimeouts;
extern PyObject *const_str_plain_SETRTS;
static PyObject *const_str_digest_b61fa0e88bbe4976ba0c3486b94e2ad6;
extern PyObject *const_str_digest_ad4d3667ad4be7949c20c65bd946d9a1;
extern PyObject *const_str_digest_b40497f26645e3ebadb6514ab8d446ba;
static PyObject *const_str_plain__overlapped_read;
extern PyObject *const_int_pos_150;
extern PyObject *const_str_digest_55bd609d83337e3e53f56f56fb6e69c2;
extern PyObject *const_str_digest_4b91cca6339a9a892cf0e30d6bd1bdfc;
extern PyObject *const_str_plain__dsrdtr;
extern PyObject *const_str_plain__baudrate;
static PyObject *const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple;
static PyObject *const_str_plain_set_buffer_size;
extern PyObject *const_str_plain_fBinary;
static PyObject *const_str_digest_2df25d99a230c1f3e19fb3a8b6251dff;
static PyObject *const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple;
extern PyObject *const_int_pos_4800;
static PyObject *const_str_plain_read_ok;
extern PyObject *const_str_plain_exclusive;
extern PyObject *const_int_pos_50;
extern PyObject *const_float_0_05;
extern PyObject *const_bytes_empty;
static PyObject *const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple;
static PyObject *const_str_digest_d025f041d7ca1946035c849c7d7fca6e;
extern PyObject *const_str_plain_fNull;
extern PyObject *const_str_plain_portNotOpenError;
extern PyObject *const_str_plain__rs485_mode;
extern PyObject *const_str_plain_out_waiting;
extern PyObject *const_str_plain_enable;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_FIVEBITS;
extern PyObject *const_str_plain_self;
extern PyObject *const_int_pos_110;
extern PyObject *const_str_plain_MS_DSR_ON;
extern PyObject *const_str_plain__inter_byte_timeout;
extern PyObject *const_int_pos_7;
static PyObject *const_str_digest_03b98ad4acc077de88fea75272d50cbe;
extern PyObject *const_str_plain_to_bytes;
extern PyObject *const_str_plain_delay_before_rx;
extern PyObject *const_str_plain_PARITY_SPACE;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain__overlapped_write = UNSTREAM_STRING_ASCII( &constant_bin[ 5818363 ], 17, 1 );
    const_str_digest_1a30dfaee32a57c225a65de5a6c71477 = UNSTREAM_STRING_ASCII( &constant_bin[ 5818380 ], 21, 0 );
    const_str_plain__close = UNSTREAM_STRING_ASCII( &constant_bin[ 4420 ], 6, 1 );
    const_str_digest_0d7fab97f93470129456c07fbd1abc06 = UNSTREAM_STRING_ASCII( &constant_bin[ 5818401 ], 15, 0 );
    const_str_digest_8b21bb7c31a09b0b7d2ccbe6cec5dcf5 = UNSTREAM_STRING_ASCII( &constant_bin[ 5818416 ], 37, 0 );
    const_str_digest_25e06e7ac2b4b3e4c9c85aa404490cdf = UNSTREAM_STRING_ASCII( &constant_bin[ 5818453 ], 22, 0 );
    const_tuple_str_plain_COM_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_COM_tuple, 0, const_str_plain_COM ); Py_INCREF( const_str_plain_COM );
    const_str_digest_b95f5838b964efd1a6bb07dfdf0292c8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5818475 ], 13, 0 );
    const_str_digest_6847a54a76c70d02a87c9a76f4937837 = UNSTREAM_STRING_ASCII( &constant_bin[ 5818488 ], 58, 0 );
    const_str_digest_5ed58a77f20ffb579393ed23bc7ec71b = UNSTREAM_STRING_ASCII( &constant_bin[ 5818546 ], 48, 0 );
    const_str_plain_comstat = UNSTREAM_STRING_ASCII( &constant_bin[ 5818594 ], 7, 1 );
    const_str_plain_overlapped = UNSTREAM_STRING_ASCII( &constant_bin[ 5818364 ], 10, 1 );
    const_str_digest_11255cc295ff7c51049482a25673fcd6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5818601 ], 57, 0 );
    const_str_digest_1ad7c58b26db5ec7add099b988e90107 = UNSTREAM_STRING_ASCII( &constant_bin[ 5818658 ], 33, 0 );
    const_tuple_str_plain_win32_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_win32_tuple, 0, const_str_plain_win32 ); Py_INCREF( const_str_plain_win32 );
    const_str_plain_errorcode = UNSTREAM_STRING_ASCII( &constant_bin[ 5818691 ], 9, 1 );
    const_str_plain_result_ok = UNSTREAM_STRING_ASCII( &constant_bin[ 5818700 ], 9, 1 );
    const_str_digest_9154b8cf6e65b3c901c35e8e1d5d5876 = UNSTREAM_STRING_ASCII( &constant_bin[ 5818709 ], 26, 0 );
    const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple, 1, const_str_plain_overlapped ); Py_INCREF( const_str_plain_overlapped );
    PyTuple_SET_ITEM( const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple, 2, const_str_plain_rc ); Py_INCREF( const_str_plain_rc );
    PyTuple_SET_ITEM( const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple, 3, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    const_str_digest_686727e74bc29d6f749822c8572b6c6c = UNSTREAM_STRING_ASCII( &constant_bin[ 5818735 ], 66, 0 );
    const_str_digest_62b76f5ef85e04e40c80f3d7cd0b95b8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5818801 ], 58, 0 );
    const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple, 3, const_str_plain_success ); Py_INCREF( const_str_plain_success );
    PyTuple_SET_ITEM( const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple, 4, const_str_plain_errorcode ); Py_INCREF( const_str_plain_errorcode );
    const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 1, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 2, const_str_plain_comstat ); Py_INCREF( const_str_plain_comstat );
    const_str_plain_timeouts = UNSTREAM_STRING_ASCII( &constant_bin[ 4001370 ], 8, 1 );
    const_tuple_int_pos_4096_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_4096_none_tuple, 0, const_int_pos_4096 ); Py_INCREF( const_int_pos_4096 );
    PyTuple_SET_ITEM( const_tuple_int_pos_4096_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_dd27bacab731657fa9534dd0d2a2543b = UNSTREAM_STRING_ASCII( &constant_bin[ 5818859 ], 29, 0 );
    const_str_digest_8589c768c45cb2df2310b69a6dd47c26 = UNSTREAM_STRING_ASCII( &constant_bin[ 5818888 ], 65, 0 );
    const_str_digest_62c72e1ca1e4896fc419afc8435990bd = UNSTREAM_STRING_ASCII( &constant_bin[ 5818953 ], 28, 0 );
    const_tuple_none_int_pos_1_int_0_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_0_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_0_none_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_0_none_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_0_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_plain__cancel_overlapped_io = UNSTREAM_STRING_ASCII( &constant_bin[ 5818960 ], 21, 1 );
    const_tuple_str_plain_self_str_plain_stat_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_stat_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_stat_tuple, 1, const_str_plain_stat ); Py_INCREF( const_str_plain_stat );
    const_str_plain_comDCB = UNSTREAM_STRING_ASCII( &constant_bin[ 5818981 ], 6, 1 );
    const_str_digest_4eef2f6a61d78aeba404d85f811ca17f = UNSTREAM_STRING_ASCII( &constant_bin[ 5818987 ], 67, 0 );
    const_str_digest_7e584289af6145c25f7a5a475f55a53e = UNSTREAM_STRING_ASCII( &constant_bin[ 5819054 ], 22, 0 );
    const_str_plain_tx_size = UNSTREAM_STRING_ASCII( &constant_bin[ 5819076 ], 7, 1 );
    const_str_digest_2ed77bc529ac5233e189e9c63149ac9b = UNSTREAM_STRING_ASCII( &constant_bin[ 5819083 ], 28, 0 );
    const_str_digest_2fee4f8a7222f5d8adcdf46b602cea8b = UNSTREAM_STRING_ASCII( &constant_bin[ 5819111 ], 23, 0 );
    const_str_digest_965cfe85759abc1c82262e5a9b7bf0b5 = UNSTREAM_STRING_ASCII( &constant_bin[ 5819134 ], 46, 0 );
    const_str_digest_8f9d795f9bfd7d9e989c9810e38e4f0e = UNSTREAM_STRING_ASCII( &constant_bin[ 5819180 ], 26, 0 );
    const_str_digest_467375677f1ba6a8f3ff29b62877b078 = UNSTREAM_STRING_ASCII( &constant_bin[ 5819206 ], 30, 0 );
    const_str_plain__GetCommModemStatus = UNSTREAM_STRING_ASCII( &constant_bin[ 5819187 ], 19, 1 );
    const_str_digest_0b18e2f1244bfabe48d1d7021f6de339 = UNSTREAM_STRING_ASCII( &constant_bin[ 5819236 ], 57, 0 );
    const_str_digest_fd328062211a423aa7fe22cf36a43194 = UNSTREAM_STRING_ASCII( &constant_bin[ 5819293 ], 37, 0 );
    const_tuple_str_plain_self_str_plain_rx_size_str_plain_tx_size_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rx_size_str_plain_tx_size_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_rx_size = UNSTREAM_STRING_ASCII( &constant_bin[ 5819330 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rx_size_str_plain_tx_size_tuple, 1, const_str_plain_rx_size ); Py_INCREF( const_str_plain_rx_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rx_size_str_plain_tx_size_tuple, 2, const_str_plain_tx_size ); Py_INCREF( const_str_plain_tx_size );
    const_str_digest_8ab7d280f3c27847f45a238edf5bac9d = UNSTREAM_STRING_ASCII( &constant_bin[ 5819337 ], 298, 0 );
    const_str_plain__orgTimeouts = UNSTREAM_STRING_ASCII( &constant_bin[ 5819635 ], 12, 1 );
    const_str_digest_6547a8beb62647247f4e85bd93aba976 = UNSTREAM_STRING_ASCII( &constant_bin[ 5819647 ], 16, 0 );
    const_str_digest_290af2e04efec43d4d7c7fc5f52faf17 = UNSTREAM_STRING_ASCII( &constant_bin[ 5819663 ], 27, 0 );
    const_str_digest_b61fa0e88bbe4976ba0c3486b94e2ad6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5819690 ], 143, 0 );
    const_str_plain__overlapped_read = UNSTREAM_STRING_ASCII( &constant_bin[ 5819833 ], 16, 1 );
    const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple, 1, const_str_plain_timeouts ); Py_INCREF( const_str_plain_timeouts );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple, 2, const_str_plain_comDCB ); Py_INCREF( const_str_plain_comDCB );
    const_str_plain_set_buffer_size = UNSTREAM_STRING_ASCII( &constant_bin[ 5818460 ], 15, 1 );
    const_str_digest_2df25d99a230c1f3e19fb3a8b6251dff = UNSTREAM_STRING_ASCII( &constant_bin[ 5819849 ], 53, 0 );
    const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 2, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 3, const_str_plain_comstat ); Py_INCREF( const_str_plain_comstat );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 5, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 6, const_str_plain_rc ); Py_INCREF( const_str_plain_rc );
    const_str_plain_read_ok = UNSTREAM_STRING_ASCII( &constant_bin[ 5819902 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 7, const_str_plain_read_ok ); Py_INCREF( const_str_plain_read_ok );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 8, const_str_plain_result_ok ); Py_INCREF( const_str_plain_result_ok );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 9, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple, 0, const_str_plain_SerialBase ); Py_INCREF( const_str_plain_SerialBase );
    PyTuple_SET_ITEM( const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple, 1, const_str_plain_SerialException ); Py_INCREF( const_str_plain_SerialException );
    PyTuple_SET_ITEM( const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple, 2, const_str_plain_to_bytes ); Py_INCREF( const_str_plain_to_bytes );
    PyTuple_SET_ITEM( const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple, 3, const_str_plain_portNotOpenError ); Py_INCREF( const_str_plain_portNotOpenError );
    PyTuple_SET_ITEM( const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple, 4, const_str_plain_writeTimeoutError ); Py_INCREF( const_str_plain_writeTimeoutError );
    const_str_digest_d025f041d7ca1946035c849c7d7fca6e = UNSTREAM_STRING_ASCII( &constant_bin[ 5819909 ], 50, 0 );
    const_str_digest_03b98ad4acc077de88fea75272d50cbe = UNSTREAM_STRING_ASCII( &constant_bin[ 5819959 ], 4, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial$serialwin32( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8fb25b896cd5349c07bd5bb429481d45;
static PyCodeObject *codeobj_f55beff90ee1ff4b3f3ce2929f11cef9;
static PyCodeObject *codeobj_7ef9d8f1379f6b1554db25a0f41c3797;
static PyCodeObject *codeobj_3ce7408269906a5750d418d47a354fee;
static PyCodeObject *codeobj_016e0bfbcdfbd932f196d16b0ba7ab9f;
static PyCodeObject *codeobj_864cf1ce98ec451165494723b3154290;
static PyCodeObject *codeobj_f274a00e8be9dc19dd60a86c90eae63e;
static PyCodeObject *codeobj_a82017b361da4214425c8f5706244003;
static PyCodeObject *codeobj_97fe77b53e79e7018206dd5c9fbd3c64;
static PyCodeObject *codeobj_9f4ca4a841a7e91c976ae4c1a908b04e;
static PyCodeObject *codeobj_377f3fb1a0de88b30a767a18b9263c93;
static PyCodeObject *codeobj_c0aa60bec2b41caa8c4da772705bff0a;
static PyCodeObject *codeobj_60a2975bedc6477581531f2aace85685;
static PyCodeObject *codeobj_4a475f5bb51ee6489546dd3144258763;
static PyCodeObject *codeobj_fd726c2709d53a2429ae70846dd3b977;
static PyCodeObject *codeobj_4afd10ab74596d840952abc9d0a1b560;
static PyCodeObject *codeobj_3fd5ffbc9d4d0b862b95b342b0922636;
static PyCodeObject *codeobj_31b398c14517bc8b84382c753b624549;
static PyCodeObject *codeobj_2ec3eddef8fa34c30995ba488dda64f0;
static PyCodeObject *codeobj_c6aa15f556139c2992ba1a0bd20e5046;
static PyCodeObject *codeobj_bf8a38500ac8b812b607ebc9b88c52e7;
static PyCodeObject *codeobj_283b61f162894bfd87d6935dae5c99dd;
static PyCodeObject *codeobj_37cfa45952b2aeb54b44bdc42cab7d46;
static PyCodeObject *codeobj_7c19251793a1a411bd2b9f81574177da;
static PyCodeObject *codeobj_2ac591b0bc2b1528f3194b292fbbc836;
static PyCodeObject *codeobj_88610d20bf0ba1f0e8f2feae52addea8;
static PyCodeObject *codeobj_344991d57e6f6bcc99701e91a398e7a0;
static PyCodeObject *codeobj_9ad44a1cffc6d621b0cd0f618dce9d08;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_1a30dfaee32a57c225a65de5a6c71477 );
    codeobj_8fb25b896cd5349c07bd5bb429481d45 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_290af2e04efec43d4d7c7fc5f52faf17, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_f55beff90ee1ff4b3f3ce2929f11cef9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Serial, 21, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_7ef9d8f1379f6b1554db25a0f41c3797 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__GetCommModemStatus, 387, const_tuple_str_plain_self_str_plain_stat_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3ce7408269906a5750d418d47a354fee = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 27, const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS );
    codeobj_016e0bfbcdfbd932f196d16b0ba7ab9f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__cancel_overlapped_io, 448, const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_864cf1ce98ec451165494723b3154290 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__close, 227, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f274a00e8be9dc19dd60a86c90eae63e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__reconfigure_port, 98, const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a82017b361da4214425c8f5706244003 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_break_state, 364, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_97fe77b53e79e7018206dd5c9fbd3c64 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_dtr_state, 380, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9f4ca4a841a7e91c976ae4c1a908b04e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_rts_state, 373, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_377f3fb1a0de88b30a767a18b9263c93 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cancel_read, 461, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c0aa60bec2b41caa8c4da772705bff0a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cancel_write, 465, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_60a2975bedc6477581531f2aace85685 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cd, 409, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4a475f5bb51ee6489546dd3144258763 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 243, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fd726c2709d53a2429ae70846dd3b977 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cts, 394, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4afd10ab74596d840952abc9d0a1b560 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dsr, 399, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3fd5ffbc9d4d0b862b95b342b0922636 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_exclusive, 469, const_tuple_str_plain_self_str_plain_exclusive_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_31b398c14517bc8b84382c753b624549 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flush, 338, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2ec3eddef8fa34c30995ba488dda64f0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_in_waiting, 251, const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c6aa15f556139c2992ba1a0bd20e5046 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open, 33, const_tuple_str_plain_self_str_plain_port_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bf8a38500ac8b812b607ebc9b88c52e7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_out_waiting, 439, const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_283b61f162894bfd87d6935dae5c99dd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 260, const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_37cfa45952b2aeb54b44bdc42cab7d46 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_input_buffer, 349, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7c19251793a1a411bd2b9f81574177da = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_output_buffer, 355, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2ac591b0bc2b1528f3194b292fbbc836 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ri, 404, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_88610d20bf0ba1f0e8f2feae52addea8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_buffer_size, 416, const_tuple_str_plain_self_str_plain_rx_size_str_plain_tx_size_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_344991d57e6f6bcc99701e91a398e7a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_output_flow_control, 425, const_tuple_str_plain_self_str_plain_enable_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9ad44a1cffc6d621b0cd0f618dce9d08 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write, 301, const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_10_reset_input_buffer(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_11_reset_output_buffer(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_12__update_break_state(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_13__update_rts_state(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_14__update_dtr_state(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_15__GetCommModemStatus(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_16_cts(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_17_dsr(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_18_ri(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_19_cd(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_20_set_buffer_size( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_21_set_output_flow_control( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_22_out_waiting(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_23__cancel_overlapped_io(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_24_cancel_read(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_25_cancel_write(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_26_exclusive(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_2_open(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_3__reconfigure_port(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_4__close(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_5_close(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_6_in_waiting(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_7_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_8_write(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_9_flush(  );


// The module function definitions.
static PyObject *impl_serial$serialwin32$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_3ce7408269906a5750d418d47a354fee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3ce7408269906a5750d418d47a354fee = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3ce7408269906a5750d418d47a354fee, codeobj_3ce7408269906a5750d418d47a354fee, module_serial$serialwin32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3ce7408269906a5750d418d47a354fee = cache_frame_3ce7408269906a5750d418d47a354fee;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3ce7408269906a5750d418d47a354fee );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3ce7408269906a5750d418d47a354fee ) == 2 ); // Frame stack

    // Framed code:
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


            exception_lineno = 28;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__overlapped_read, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__overlapped_write, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_Serial );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Serial );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Serial" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 31;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3ce7408269906a5750d418d47a354fee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3ce7408269906a5750d418d47a354fee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3ce7408269906a5750d418d47a354fee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3ce7408269906a5750d418d47a354fee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3ce7408269906a5750d418d47a354fee, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3ce7408269906a5750d418d47a354fee,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        NULL
    );


    // Release cached frame.
    if ( frame_3ce7408269906a5750d418d47a354fee == cache_frame_3ce7408269906a5750d418d47a354fee )
    {
        Py_DECREF( frame_3ce7408269906a5750d418d47a354fee );
    }
    cache_frame_3ce7408269906a5750d418d47a354fee = NULL;

    assertFrameObject( frame_3ce7408269906a5750d418d47a354fee );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_1___init__ );
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


static PyObject *impl_serial$serialwin32$$$function_2_open( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_port = NULL;
    struct Nuitka_FrameObject *frame_c6aa15f556139c2992ba1a0bd20e5046;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_c6aa15f556139c2992ba1a0bd20e5046 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c6aa15f556139c2992ba1a0bd20e5046, codeobj_c6aa15f556139c2992ba1a0bd20e5046, module_serial$serialwin32, sizeof(void *)+sizeof(void *) );
    frame_c6aa15f556139c2992ba1a0bd20e5046 = cache_frame_c6aa15f556139c2992ba1a0bd20e5046;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c6aa15f556139c2992ba1a0bd20e5046 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c6aa15f556139c2992ba1a0bd20e5046 ) == 2 ); // Frame stack

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


            exception_lineno = 38;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

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

                exception_lineno = 39;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 39;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_a41f7446b10852b7fa7917c8946aa5e1_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 39;
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


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 40;
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
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

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

                exception_lineno = 41;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 41;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_088e326eed737fbd2d5feedf060c96ff_tuple, 0 ) );

            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 41;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_name );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_port == NULL );
        var_port = tmp_assign_source_1;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_port );
        tmp_called_instance_2 = var_port;
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 47;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_upper );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 47;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_COM_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 47;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_port );
        tmp_subscribed_name_1 = var_port;
        tmp_subscript_name_1 = const_slice_int_pos_3_none_none;
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_compexpr_left_2 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_2 = const_int_pos_8;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_03b98ad4acc077de88fea75272d50cbe;
            CHECK_OBJECT( var_port );
            tmp_right_name_1 = var_port;
            tmp_assign_source_2 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_port;
                assert( old != NULL );
                var_port = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c6aa15f556139c2992ba1a0bd20e5046, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c6aa15f556139c2992ba1a0bd20e5046, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oo";
            goto try_except_handler_3;
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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 46;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame) frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_no_4:;
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_2_open );
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_CreateFile );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if ( var_port == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = var_port;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_GENERIC_READ );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_5;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_GENERIC_WRITE );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_int_0;
        tmp_args_element_name_4 = Py_None;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_6;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_OPEN_EXISTING );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_7;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_FILE_ATTRIBUTE_NORMAL );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_8;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_FILE_FLAG_OVERLAPPED );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = const_int_0;
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__port_handle, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
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
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_9;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__port_handle );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_9;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_INVALID_HANDLE_VALUE );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
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


                exception_lineno = 61;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_12;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_source_name_13;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_11;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
            }

            if ( tmp_mvar_value_10 == NULL )
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

            tmp_called_name_4 = tmp_mvar_value_10;
            tmp_source_name_12 = const_str_digest_467375677f1ba6a8f3ff29b62877b078;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_format );
            assert( !(tmp_called_name_5 == NULL) );
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_portstr );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 62;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_11 == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_element_name_9 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 62;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_11;
            frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 62;
            tmp_args_element_name_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_WinError );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_element_name_9 );

                exception_lineno = 62;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 62;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 62;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_raise_type_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_3;
            exception_lineno = 62;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_called_instance_4 = tmp_mvar_value_12;
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 65;
        tmp_assattr_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_OVERLAPPED );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__overlapped_read, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_source_name_14;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_called_instance_5 = tmp_mvar_value_13;
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 66;
        tmp_assattr_name_4 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_5, const_str_plain_CreateEvent, &PyTuple_GET_ITEM( const_tuple_none_int_pos_1_int_0_none_tuple, 0 ) );

        if ( tmp_assattr_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__overlapped_read );
        if ( tmp_assattr_target_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 66;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_hEvent, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_target_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_assattr_target_5;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_called_instance_6 = tmp_mvar_value_14;
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 67;
        tmp_assattr_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_OVERLAPPED );
        if ( tmp_assattr_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__overlapped_write, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_source_name_15;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_called_instance_7 = tmp_mvar_value_15;
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 69;
        tmp_assattr_name_6 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_7, const_str_plain_CreateEvent, &PyTuple_GET_ITEM( const_tuple_none_int_0_int_0_none_tuple, 0 ) );

        if ( tmp_assattr_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__overlapped_write );
        if ( tmp_assattr_target_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_6 );

            exception_lineno = 69;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_hEvent, tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_target_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_17;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 72;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_source_name_16 = tmp_mvar_value_16;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_SetupComm );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__port_handle );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 72;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_12 = const_int_pos_4096;
        tmp_args_element_name_13 = const_int_pos_4096;
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_assattr_target_7;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 75;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_called_instance_8 = tmp_mvar_value_17;
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 75;
        tmp_assattr_name_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_COMMTIMEOUTS );
        if ( tmp_assattr_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__orgTimeouts, tmp_assattr_name_7 );
        Py_DECREF( tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_source_name_19;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_source_name_21;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_source_name_18 = tmp_mvar_value_18;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_GetCommTimeouts );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_19 = par_self;
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__port_handle );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 76;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_19 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_source_name_20 = tmp_mvar_value_19;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_byref );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_14 );

            exception_lineno = 76;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_21 = par_self;
        tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__orgTimeouts );
        if ( tmp_args_element_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_14 );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 76;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_args_element_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_args_element_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_14 );

            exception_lineno = 76;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_14 );
        Py_DECREF( tmp_args_element_name_15 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT( par_self );
        tmp_called_instance_9 = par_self;
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 78;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain__reconfigure_port );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_source_name_23;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_source_name_24;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_right_name_4;
        PyObject *tmp_source_name_25;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_right_name_5;
        PyObject *tmp_source_name_26;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_right_name_6;
        PyObject *tmp_source_name_27;
        PyObject *tmp_mvar_value_24;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_source_name_22 = tmp_mvar_value_20;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_PurgeComm );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_23 = par_self;
        tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__port_handle );
        if ( tmp_args_element_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 83;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_21 == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_17 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_source_name_24 = tmp_mvar_value_21;
        tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_PURGE_TXCLEAR );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_17 );

            exception_lineno = 84;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_22 == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_17 );
            Py_DECREF( tmp_left_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_source_name_25 = tmp_mvar_value_22;
        tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_PURGE_TXABORT );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_17 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 84;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_left_name_5 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_6, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_17 );

            exception_lineno = 84;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_23 == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_17 );
            Py_DECREF( tmp_left_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 85;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_source_name_26 = tmp_mvar_value_23;
        tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_PURGE_RXCLEAR );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_17 );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 85;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_left_name_4 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_17 );

            exception_lineno = 84;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_24 == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_17 );
            Py_DECREF( tmp_left_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 85;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_source_name_27 = tmp_mvar_value_24;
        tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_PURGE_RXABORT );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_17 );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 85;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_18 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_4, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_args_element_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_17 );

            exception_lineno = 85;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_17 );
        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_c6aa15f556139c2992ba1a0bd20e5046, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_c6aa15f556139c2992ba1a0bd20e5046, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT( par_self );
        tmp_called_instance_10 = par_self;
        frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = 88;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain__close );
        if ( tmp_call_result_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oo";
            goto try_except_handler_5;
        }
        Py_DECREF( tmp_call_result_6 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_4 );
    Py_XDECREF( exception_keeper_value_4 );
    Py_XDECREF( exception_keeper_tb_4 );
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_2_open );
    return NULL;
    // End of try:
    try_end_4:;
    // Tried code:
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain__port_handle, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "oo";
            goto try_except_handler_6;
        }
    }
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 94;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame) frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_2_open );
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = Py_True;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_is_open, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6aa15f556139c2992ba1a0bd20e5046 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6aa15f556139c2992ba1a0bd20e5046 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c6aa15f556139c2992ba1a0bd20e5046, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c6aa15f556139c2992ba1a0bd20e5046->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c6aa15f556139c2992ba1a0bd20e5046, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c6aa15f556139c2992ba1a0bd20e5046,
        type_description_1,
        par_self,
        var_port
    );


    // Release cached frame.
    if ( frame_c6aa15f556139c2992ba1a0bd20e5046 == cache_frame_c6aa15f556139c2992ba1a0bd20e5046 )
    {
        Py_DECREF( frame_c6aa15f556139c2992ba1a0bd20e5046 );
    }
    cache_frame_c6aa15f556139c2992ba1a0bd20e5046 = NULL;

    assertFrameObject( frame_c6aa15f556139c2992ba1a0bd20e5046 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_2_open );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_2_open );
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


static PyObject *impl_serial$serialwin32$$$function_3__reconfigure_port( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_timeouts = NULL;
    PyObject *var_comDCB = NULL;
    struct Nuitka_FrameObject *frame_f274a00e8be9dc19dd60a86c90eae63e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f274a00e8be9dc19dd60a86c90eae63e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f274a00e8be9dc19dd60a86c90eae63e, codeobj_f274a00e8be9dc19dd60a86c90eae63e, module_serial$serialwin32, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f274a00e8be9dc19dd60a86c90eae63e = cache_frame_f274a00e8be9dc19dd60a86c90eae63e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f274a00e8be9dc19dd60a86c90eae63e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f274a00e8be9dc19dd60a86c90eae63e ) == 2 ); // Frame stack

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


            exception_lineno = 100;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

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

                exception_lineno = 101;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 101;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_145bf772d86c3cb38f291d317430df01_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 101;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 108;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_COMMTIMEOUTS );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_timeouts == NULL );
        var_timeouts = tmp_assign_source_1;
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


            exception_lineno = 109;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__timeout );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
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
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_assattr_target_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 112;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_4 = tmp_mvar_value_3;
                tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_MAXDWORD );
                if ( tmp_assattr_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 112;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_timeouts );
                tmp_assattr_target_1 = var_timeouts;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ReadIntervalTimeout, tmp_assattr_name_1 );
                Py_DECREF( tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 112;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_called_name_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_int_arg_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_source_name_5;
                PyObject *tmp_right_name_1;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_assattr_target_2;
                tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
                assert( tmp_called_name_2 != NULL );
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__timeout );
                if ( tmp_left_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_1 = const_int_pos_1000;
                tmp_int_arg_1 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_left_name_1 );
                if ( tmp_int_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_1 = PyNumber_Int( tmp_int_arg_1 );
                Py_DECREF( tmp_int_arg_1 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_2 = const_int_pos_1;
                frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 114;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                    tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_assattr_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_timeouts );
                tmp_assattr_target_2 = var_timeouts;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_ReadTotalTimeoutConstant, tmp_assattr_name_2 );
                Py_DECREF( tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_end_3:;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__timeout );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooo";
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
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__inter_byte_timeout );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_4 );
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_int_arg_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_source_name_8;
            PyObject *tmp_right_name_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_assattr_target_3;
            tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_3 != NULL );
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__inter_byte_timeout );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_1000;
            tmp_int_arg_2 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_int_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = PyNumber_Int( tmp_int_arg_2 );
            Py_DECREF( tmp_int_arg_2 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = const_int_pos_1;
            frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 116;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_timeouts );
            tmp_assattr_target_3 = var_timeouts;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_ReadIntervalTimeout, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__write_timeout );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_5 );
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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__write_timeout );
            if ( tmp_compexpr_left_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_6 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_left_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "ooo";
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
                PyObject *tmp_assattr_name_4;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_assattr_target_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 121;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_11 = tmp_mvar_value_4;
                tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_MAXDWORD );
                if ( tmp_assattr_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 121;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_timeouts );
                tmp_assattr_target_4 = var_timeouts;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_WriteTotalTimeoutConstant, tmp_assattr_name_4 );
                Py_DECREF( tmp_assattr_name_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 121;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_assattr_name_5;
                PyObject *tmp_called_name_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_int_arg_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_source_name_12;
                PyObject *tmp_right_name_3;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_assattr_target_5;
                tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_max );
                assert( tmp_called_name_4 != NULL );
                CHECK_OBJECT( par_self );
                tmp_source_name_12 = par_self;
                tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__write_timeout );
                if ( tmp_left_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 123;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_3 = const_int_pos_1000;
                tmp_int_arg_3 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_3 );
                if ( tmp_int_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 123;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_5 = PyNumber_Int( tmp_int_arg_3 );
                Py_DECREF( tmp_int_arg_3 );
                if ( tmp_args_element_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 123;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_6 = const_int_pos_1;
                frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 123;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_assattr_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 123;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_timeouts );
                tmp_assattr_target_5 = var_timeouts;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_WriteTotalTimeoutConstant, tmp_assattr_name_5 );
                Py_DECREF( tmp_assattr_name_5 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 123;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_end_6:;
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_14;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_5;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_SetCommTimeouts );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__port_handle );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_6;
        CHECK_OBJECT( var_timeouts );
        tmp_args_element_name_9 = var_timeouts;
        frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_args_element_name_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_16;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_7;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_SetCommMask );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__port_handle );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_8;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_EV_ERR );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_9;
        frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 130;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_DCB );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_comDCB == NULL );
        var_comDCB = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_19;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = tmp_mvar_value_10;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_GetCommState );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_19 = par_self;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__port_handle );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_11;
        CHECK_OBJECT( var_comDCB );
        tmp_args_element_name_14 = var_comDCB;
        frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_args_element_name_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_12 );

            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_12 );
        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_source_name_20;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_assattr_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__baudrate );
        if ( tmp_assattr_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_comDCB );
        tmp_assattr_target_6 = var_comDCB;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_BaudRate, tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_source_name_21;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_12;
        CHECK_OBJECT( par_self );
        tmp_source_name_21 = par_self;
        tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__bytesize );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_22 = tmp_mvar_value_12;
        tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_FIVEBITS );
        if ( tmp_compexpr_right_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_7 );

            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        Py_DECREF( tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooo";
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
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_assattr_target_7;
            tmp_assattr_name_7 = const_int_pos_5;
            CHECK_OBJECT( var_comDCB );
            tmp_assattr_target_7 = var_comDCB;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_ByteSize, tmp_assattr_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_7;
        branch_no_7:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_source_name_23;
            PyObject *tmp_source_name_24;
            PyObject *tmp_mvar_value_13;
            CHECK_OBJECT( par_self );
            tmp_source_name_23 = par_self;
            tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__bytesize );
            if ( tmp_compexpr_left_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
            }

            if ( tmp_mvar_value_13 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 136;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_24 = tmp_mvar_value_13;
            tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_SIXBITS );
            if ( tmp_compexpr_right_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_8 );

                exception_lineno = 136;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            Py_DECREF( tmp_compexpr_left_8 );
            Py_DECREF( tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "ooo";
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
                PyObject *tmp_assattr_name_8;
                PyObject *tmp_assattr_target_8;
                tmp_assattr_name_8 = const_int_pos_6;
                CHECK_OBJECT( var_comDCB );
                tmp_assattr_target_8 = var_comDCB;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_ByteSize, tmp_assattr_name_8 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 137;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_8;
            branch_no_8:;
            {
                nuitka_bool tmp_condition_result_9;
                PyObject *tmp_compexpr_left_9;
                PyObject *tmp_compexpr_right_9;
                PyObject *tmp_source_name_25;
                PyObject *tmp_source_name_26;
                PyObject *tmp_mvar_value_14;
                CHECK_OBJECT( par_self );
                tmp_source_name_25 = par_self;
                tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__bytesize );
                if ( tmp_compexpr_left_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 138;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
                }

                if ( tmp_mvar_value_14 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_9 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 138;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_26 = tmp_mvar_value_14;
                tmp_compexpr_right_9 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_SEVENBITS );
                if ( tmp_compexpr_right_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_9 );

                    exception_lineno = 138;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                Py_DECREF( tmp_compexpr_left_9 );
                Py_DECREF( tmp_compexpr_right_9 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 138;
                    type_description_1 = "ooo";
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
                    PyObject *tmp_assattr_name_9;
                    PyObject *tmp_assattr_target_9;
                    tmp_assattr_name_9 = const_int_pos_7;
                    CHECK_OBJECT( var_comDCB );
                    tmp_assattr_target_9 = var_comDCB;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_ByteSize, tmp_assattr_name_9 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 139;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_9;
                branch_no_9:;
                {
                    nuitka_bool tmp_condition_result_10;
                    PyObject *tmp_compexpr_left_10;
                    PyObject *tmp_compexpr_right_10;
                    PyObject *tmp_source_name_27;
                    PyObject *tmp_source_name_28;
                    PyObject *tmp_mvar_value_15;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_27 = par_self;
                    tmp_compexpr_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain__bytesize );
                    if ( tmp_compexpr_left_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 140;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

                    if (unlikely( tmp_mvar_value_15 == NULL ))
                    {
                        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
                    }

                    if ( tmp_mvar_value_15 == NULL )
                    {
                        Py_DECREF( tmp_compexpr_left_10 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 140;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_28 = tmp_mvar_value_15;
                    tmp_compexpr_right_10 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_EIGHTBITS );
                    if ( tmp_compexpr_right_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_compexpr_left_10 );

                        exception_lineno = 140;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                    Py_DECREF( tmp_compexpr_left_10 );
                    Py_DECREF( tmp_compexpr_right_10 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 140;
                        type_description_1 = "ooo";
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
                        PyObject *tmp_assattr_name_10;
                        PyObject *tmp_assattr_target_10;
                        tmp_assattr_name_10 = const_int_pos_8;
                        CHECK_OBJECT( var_comDCB );
                        tmp_assattr_target_10 = var_comDCB;
                        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_ByteSize, tmp_assattr_name_10 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 141;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    goto branch_end_10;
                    branch_no_10:;
                    {
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_make_exception_arg_1;
                        PyObject *tmp_called_name_8;
                        PyObject *tmp_source_name_29;
                        PyObject *tmp_args_element_name_15;
                        PyObject *tmp_source_name_30;
                        tmp_source_name_29 = const_str_digest_8b21bb7c31a09b0b7d2ccbe6cec5dcf5;
                        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_format );
                        assert( !(tmp_called_name_8 == NULL) );
                        CHECK_OBJECT( par_self );
                        tmp_source_name_30 = par_self;
                        tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain__bytesize );
                        if ( tmp_args_element_name_15 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_8 );

                            exception_lineno = 143;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 143;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_15 };
                            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                        }

                        Py_DECREF( tmp_called_name_8 );
                        Py_DECREF( tmp_args_element_name_15 );
                        if ( tmp_make_exception_arg_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 143;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 143;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_1 };
                            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        Py_DECREF( tmp_make_exception_arg_1 );
                        assert( !(tmp_raise_type_2 == NULL) );
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 143;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooo";
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
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_source_name_31;
        PyObject *tmp_source_name_32;
        PyObject *tmp_mvar_value_16;
        CHECK_OBJECT( par_self );
        tmp_source_name_31 = par_self;
        tmp_compexpr_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain__parity );
        if ( tmp_compexpr_left_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_11 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_32 = tmp_mvar_value_16;
        tmp_compexpr_right_11 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_PARITY_NONE );
        if ( tmp_compexpr_right_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_11 );

            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        Py_DECREF( tmp_compexpr_left_11 );
        Py_DECREF( tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooo";
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
            PyObject *tmp_assattr_name_11;
            PyObject *tmp_source_name_33;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_assattr_target_11;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 146;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_33 = tmp_mvar_value_17;
            tmp_assattr_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_NOPARITY );
            if ( tmp_assattr_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_comDCB );
            tmp_assattr_target_11 = var_comDCB;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_Parity, tmp_assattr_name_11 );
            Py_DECREF( tmp_assattr_name_11 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_12;
            PyObject *tmp_assattr_target_12;
            tmp_assattr_name_12 = const_int_0;
            CHECK_OBJECT( var_comDCB );
            tmp_assattr_target_12 = var_comDCB;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_fParity, tmp_assattr_name_12 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 147;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_11;
        branch_no_11:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            PyObject *tmp_source_name_34;
            PyObject *tmp_source_name_35;
            PyObject *tmp_mvar_value_18;
            CHECK_OBJECT( par_self );
            tmp_source_name_34 = par_self;
            tmp_compexpr_left_12 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain__parity );
            if ( tmp_compexpr_left_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

            if (unlikely( tmp_mvar_value_18 == NULL ))
            {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
            }

            if ( tmp_mvar_value_18 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_12 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 148;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_35 = tmp_mvar_value_18;
            tmp_compexpr_right_12 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_PARITY_EVEN );
            if ( tmp_compexpr_right_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_12 );

                exception_lineno = 148;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
            Py_DECREF( tmp_compexpr_left_12 );
            Py_DECREF( tmp_compexpr_right_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_1 = "ooo";
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
                PyObject *tmp_source_name_36;
                PyObject *tmp_mvar_value_19;
                PyObject *tmp_assattr_target_13;
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_19 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 149;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_36 = tmp_mvar_value_19;
                tmp_assattr_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_EVENPARITY );
                if ( tmp_assattr_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 149;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_comDCB );
                tmp_assattr_target_13 = var_comDCB;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_Parity, tmp_assattr_name_13 );
                Py_DECREF( tmp_assattr_name_13 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 149;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assattr_name_14;
                PyObject *tmp_assattr_target_14;
                tmp_assattr_name_14 = const_int_pos_1;
                CHECK_OBJECT( var_comDCB );
                tmp_assattr_target_14 = var_comDCB;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_fParity, tmp_assattr_name_14 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 150;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_12;
            branch_no_12:;
            {
                nuitka_bool tmp_condition_result_13;
                PyObject *tmp_compexpr_left_13;
                PyObject *tmp_compexpr_right_13;
                PyObject *tmp_source_name_37;
                PyObject *tmp_source_name_38;
                PyObject *tmp_mvar_value_20;
                CHECK_OBJECT( par_self );
                tmp_source_name_37 = par_self;
                tmp_compexpr_left_13 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain__parity );
                if ( tmp_compexpr_left_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 151;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
                }

                if ( tmp_mvar_value_20 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_13 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 151;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_38 = tmp_mvar_value_20;
                tmp_compexpr_right_13 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_PARITY_ODD );
                if ( tmp_compexpr_right_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_13 );

                    exception_lineno = 151;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
                Py_DECREF( tmp_compexpr_left_13 );
                Py_DECREF( tmp_compexpr_right_13 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 151;
                    type_description_1 = "ooo";
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
                    PyObject *tmp_assattr_name_15;
                    PyObject *tmp_source_name_39;
                    PyObject *tmp_mvar_value_21;
                    PyObject *tmp_assattr_target_15;
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                    if (unlikely( tmp_mvar_value_21 == NULL ))
                    {
                        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                    }

                    if ( tmp_mvar_value_21 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 152;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_39 = tmp_mvar_value_21;
                    tmp_assattr_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_ODDPARITY );
                    if ( tmp_assattr_name_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 152;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_comDCB );
                    tmp_assattr_target_15 = var_comDCB;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_Parity, tmp_assattr_name_15 );
                    Py_DECREF( tmp_assattr_name_15 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 152;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                }
                {
                    PyObject *tmp_assattr_name_16;
                    PyObject *tmp_assattr_target_16;
                    tmp_assattr_name_16 = const_int_pos_1;
                    CHECK_OBJECT( var_comDCB );
                    tmp_assattr_target_16 = var_comDCB;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_fParity, tmp_assattr_name_16 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 153;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_13;
                branch_no_13:;
                {
                    nuitka_bool tmp_condition_result_14;
                    PyObject *tmp_compexpr_left_14;
                    PyObject *tmp_compexpr_right_14;
                    PyObject *tmp_source_name_40;
                    PyObject *tmp_source_name_41;
                    PyObject *tmp_mvar_value_22;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_40 = par_self;
                    tmp_compexpr_left_14 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain__parity );
                    if ( tmp_compexpr_left_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 154;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

                    if (unlikely( tmp_mvar_value_22 == NULL ))
                    {
                        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
                    }

                    if ( tmp_mvar_value_22 == NULL )
                    {
                        Py_DECREF( tmp_compexpr_left_14 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 154;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_41 = tmp_mvar_value_22;
                    tmp_compexpr_right_14 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_PARITY_MARK );
                    if ( tmp_compexpr_right_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_compexpr_left_14 );

                        exception_lineno = 154;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
                    Py_DECREF( tmp_compexpr_left_14 );
                    Py_DECREF( tmp_compexpr_right_14 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 154;
                        type_description_1 = "ooo";
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
                        PyObject *tmp_assattr_name_17;
                        PyObject *tmp_source_name_42;
                        PyObject *tmp_mvar_value_23;
                        PyObject *tmp_assattr_target_17;
                        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                        if (unlikely( tmp_mvar_value_23 == NULL ))
                        {
                            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                        }

                        if ( tmp_mvar_value_23 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 155;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_42 = tmp_mvar_value_23;
                        tmp_assattr_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_MARKPARITY );
                        if ( tmp_assattr_name_17 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 155;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( var_comDCB );
                        tmp_assattr_target_17 = var_comDCB;
                        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_Parity, tmp_assattr_name_17 );
                        Py_DECREF( tmp_assattr_name_17 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 155;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    {
                        PyObject *tmp_assattr_name_18;
                        PyObject *tmp_assattr_target_18;
                        tmp_assattr_name_18 = const_int_pos_1;
                        CHECK_OBJECT( var_comDCB );
                        tmp_assattr_target_18 = var_comDCB;
                        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_fParity, tmp_assattr_name_18 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 156;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    goto branch_end_14;
                    branch_no_14:;
                    {
                        nuitka_bool tmp_condition_result_15;
                        PyObject *tmp_compexpr_left_15;
                        PyObject *tmp_compexpr_right_15;
                        PyObject *tmp_source_name_43;
                        PyObject *tmp_source_name_44;
                        PyObject *tmp_mvar_value_24;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_43 = par_self;
                        tmp_compexpr_left_15 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain__parity );
                        if ( tmp_compexpr_left_15 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 157;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

                        if (unlikely( tmp_mvar_value_24 == NULL ))
                        {
                            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
                        }

                        if ( tmp_mvar_value_24 == NULL )
                        {
                            Py_DECREF( tmp_compexpr_left_15 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 157;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_44 = tmp_mvar_value_24;
                        tmp_compexpr_right_15 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_PARITY_SPACE );
                        if ( tmp_compexpr_right_15 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_compexpr_left_15 );

                            exception_lineno = 157;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
                        Py_DECREF( tmp_compexpr_left_15 );
                        Py_DECREF( tmp_compexpr_right_15 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 157;
                            type_description_1 = "ooo";
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
                            PyObject *tmp_assattr_name_19;
                            PyObject *tmp_source_name_45;
                            PyObject *tmp_mvar_value_25;
                            PyObject *tmp_assattr_target_19;
                            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                            if (unlikely( tmp_mvar_value_25 == NULL ))
                            {
                                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                            }

                            if ( tmp_mvar_value_25 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 158;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_source_name_45 = tmp_mvar_value_25;
                            tmp_assattr_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_SPACEPARITY );
                            if ( tmp_assattr_name_19 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 158;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT( var_comDCB );
                            tmp_assattr_target_19 = var_comDCB;
                            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_Parity, tmp_assattr_name_19 );
                            Py_DECREF( tmp_assattr_name_19 );
                            if ( tmp_result == false )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 158;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                        }
                        {
                            PyObject *tmp_assattr_name_20;
                            PyObject *tmp_assattr_target_20;
                            tmp_assattr_name_20 = const_int_pos_1;
                            CHECK_OBJECT( var_comDCB );
                            tmp_assattr_target_20 = var_comDCB;
                            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_fParity, tmp_assattr_name_20 );
                            if ( tmp_result == false )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 159;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                        }
                        goto branch_end_15;
                        branch_no_15:;
                        {
                            PyObject *tmp_raise_type_3;
                            PyObject *tmp_make_exception_arg_2;
                            PyObject *tmp_called_name_9;
                            PyObject *tmp_source_name_46;
                            PyObject *tmp_args_element_name_16;
                            PyObject *tmp_source_name_47;
                            tmp_source_name_46 = const_str_digest_dd27bacab731657fa9534dd0d2a2543b;
                            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_format );
                            assert( !(tmp_called_name_9 == NULL) );
                            CHECK_OBJECT( par_self );
                            tmp_source_name_47 = par_self;
                            tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain__parity );
                            if ( tmp_args_element_name_16 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_called_name_9 );

                                exception_lineno = 161;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 161;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_16 };
                                tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
                            }

                            Py_DECREF( tmp_called_name_9 );
                            Py_DECREF( tmp_args_element_name_16 );
                            if ( tmp_make_exception_arg_2 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 161;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 161;
                            {
                                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                            }

                            Py_DECREF( tmp_make_exception_arg_2 );
                            assert( !(tmp_raise_type_3 == NULL) );
                            exception_type = tmp_raise_type_3;
                            exception_lineno = 161;
                            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        branch_end_15:;
                    }
                    branch_end_14:;
                }
                branch_end_13:;
            }
            branch_end_12:;
        }
        branch_end_11:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        PyObject *tmp_source_name_48;
        PyObject *tmp_source_name_49;
        PyObject *tmp_mvar_value_26;
        CHECK_OBJECT( par_self );
        tmp_source_name_48 = par_self;
        tmp_compexpr_left_16 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain__stopbits );
        if ( tmp_compexpr_left_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
        }

        if ( tmp_mvar_value_26 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_16 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_49 = tmp_mvar_value_26;
        tmp_compexpr_right_16 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_STOPBITS_ONE );
        if ( tmp_compexpr_right_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_16 );

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
        Py_DECREF( tmp_compexpr_left_16 );
        Py_DECREF( tmp_compexpr_right_16 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooo";
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
            PyObject *tmp_assattr_name_21;
            PyObject *tmp_source_name_50;
            PyObject *tmp_mvar_value_27;
            PyObject *tmp_assattr_target_21;
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_27 == NULL ))
            {
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_27 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 164;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_50 = tmp_mvar_value_27;
            tmp_assattr_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_ONESTOPBIT );
            if ( tmp_assattr_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 164;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_comDCB );
            tmp_assattr_target_21 = var_comDCB;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_StopBits, tmp_assattr_name_21 );
            Py_DECREF( tmp_assattr_name_21 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 164;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_16;
        branch_no_16:;
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_compexpr_left_17;
            PyObject *tmp_compexpr_right_17;
            PyObject *tmp_source_name_51;
            PyObject *tmp_source_name_52;
            PyObject *tmp_mvar_value_28;
            CHECK_OBJECT( par_self );
            tmp_source_name_51 = par_self;
            tmp_compexpr_left_17 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain__stopbits );
            if ( tmp_compexpr_left_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

            if (unlikely( tmp_mvar_value_28 == NULL ))
            {
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
            }

            if ( tmp_mvar_value_28 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_17 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 165;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_52 = tmp_mvar_value_28;
            tmp_compexpr_right_17 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_STOPBITS_ONE_POINT_FIVE );
            if ( tmp_compexpr_right_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_17 );

                exception_lineno = 165;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
            Py_DECREF( tmp_compexpr_left_17 );
            Py_DECREF( tmp_compexpr_right_17 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
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
            {
                PyObject *tmp_assattr_name_22;
                PyObject *tmp_source_name_53;
                PyObject *tmp_mvar_value_29;
                PyObject *tmp_assattr_target_22;
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_29 == NULL ))
                {
                    tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_29 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 166;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_53 = tmp_mvar_value_29;
                tmp_assattr_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_ONE5STOPBITS );
                if ( tmp_assattr_name_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 166;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_comDCB );
                tmp_assattr_target_22 = var_comDCB;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_22, const_str_plain_StopBits, tmp_assattr_name_22 );
                Py_DECREF( tmp_assattr_name_22 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 166;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_17;
            branch_no_17:;
            {
                nuitka_bool tmp_condition_result_18;
                PyObject *tmp_compexpr_left_18;
                PyObject *tmp_compexpr_right_18;
                PyObject *tmp_source_name_54;
                PyObject *tmp_source_name_55;
                PyObject *tmp_mvar_value_30;
                CHECK_OBJECT( par_self );
                tmp_source_name_54 = par_self;
                tmp_compexpr_left_18 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain__stopbits );
                if ( tmp_compexpr_left_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 167;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

                if (unlikely( tmp_mvar_value_30 == NULL ))
                {
                    tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
                }

                if ( tmp_mvar_value_30 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_18 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 167;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_55 = tmp_mvar_value_30;
                tmp_compexpr_right_18 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_STOPBITS_TWO );
                if ( tmp_compexpr_right_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_18 );

                    exception_lineno = 167;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_18, tmp_compexpr_right_18 );
                Py_DECREF( tmp_compexpr_left_18 );
                Py_DECREF( tmp_compexpr_right_18 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 167;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assattr_name_23;
                    PyObject *tmp_source_name_56;
                    PyObject *tmp_mvar_value_31;
                    PyObject *tmp_assattr_target_23;
                    tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                    if (unlikely( tmp_mvar_value_31 == NULL ))
                    {
                        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                    }

                    if ( tmp_mvar_value_31 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 168;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_56 = tmp_mvar_value_31;
                    tmp_assattr_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_TWOSTOPBITS );
                    if ( tmp_assattr_name_23 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 168;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_comDCB );
                    tmp_assattr_target_23 = var_comDCB;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_23, const_str_plain_StopBits, tmp_assattr_name_23 );
                    Py_DECREF( tmp_assattr_name_23 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 168;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_18;
                branch_no_18:;
                {
                    PyObject *tmp_raise_type_4;
                    PyObject *tmp_make_exception_arg_3;
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_source_name_57;
                    PyObject *tmp_args_element_name_17;
                    PyObject *tmp_source_name_58;
                    tmp_source_name_57 = const_str_digest_fd328062211a423aa7fe22cf36a43194;
                    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_format );
                    assert( !(tmp_called_name_10 == NULL) );
                    CHECK_OBJECT( par_self );
                    tmp_source_name_58 = par_self;
                    tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain__stopbits );
                    if ( tmp_args_element_name_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );

                        exception_lineno = 170;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 170;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_17 };
                        tmp_make_exception_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
                    }

                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_element_name_17 );
                    if ( tmp_make_exception_arg_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 170;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 170;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_3 };
                        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_3 );
                    assert( !(tmp_raise_type_4 == NULL) );
                    exception_type = tmp_raise_type_4;
                    exception_lineno = 170;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                branch_end_18:;
            }
            branch_end_17:;
        }
        branch_end_16:;
    }
    {
        PyObject *tmp_assattr_name_24;
        PyObject *tmp_assattr_target_24;
        tmp_assattr_name_24 = const_int_pos_1;
        CHECK_OBJECT( var_comDCB );
        tmp_assattr_target_24 = var_comDCB;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_24, const_str_plain_fBinary, tmp_assattr_name_24 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_compexpr_left_19;
        PyObject *tmp_compexpr_right_19;
        PyObject *tmp_source_name_59;
        CHECK_OBJECT( par_self );
        tmp_source_name_59 = par_self;
        tmp_compexpr_left_19 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain__rs485_mode );
        if ( tmp_compexpr_left_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_19 = Py_None;
        tmp_condition_result_19 = ( tmp_compexpr_left_19 == tmp_compexpr_right_19 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_19 );
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
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_source_name_60;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_60 = par_self;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain__rtscts );
            if ( tmp_attribute_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_1 );

                exception_lineno = 175;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_20 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_1 );
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
                PyObject *tmp_assattr_name_25;
                PyObject *tmp_source_name_61;
                PyObject *tmp_mvar_value_32;
                PyObject *tmp_assattr_target_25;
                tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_32 == NULL ))
                {
                    tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_32 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 176;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_61 = tmp_mvar_value_32;
                tmp_assattr_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_RTS_CONTROL_HANDSHAKE );
                if ( tmp_assattr_name_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 176;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_comDCB );
                tmp_assattr_target_25 = var_comDCB;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_25, const_str_plain_fRtsControl, tmp_assattr_name_25 );
                Py_DECREF( tmp_assattr_name_25 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 176;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_20;
            branch_no_20:;
            {
                PyObject *tmp_assattr_name_26;
                nuitka_bool tmp_condition_result_21;
                PyObject *tmp_source_name_62;
                PyObject *tmp_attribute_value_2;
                int tmp_truth_name_2;
                PyObject *tmp_source_name_63;
                PyObject *tmp_mvar_value_33;
                PyObject *tmp_source_name_64;
                PyObject *tmp_mvar_value_34;
                PyObject *tmp_assattr_target_26;
                CHECK_OBJECT( par_self );
                tmp_source_name_62 = par_self;
                tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain__rts_state );
                if ( tmp_attribute_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 178;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
                if ( tmp_truth_name_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_attribute_value_2 );

                    exception_lineno = 178;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_21 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_attribute_value_2 );
                if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
                {
                    goto condexpr_true_1;
                }
                else
                {
                    goto condexpr_false_1;
                }
                condexpr_true_1:;
                tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_33 == NULL ))
                {
                    tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_33 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 178;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_63 = tmp_mvar_value_33;
                tmp_assattr_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_RTS_CONTROL_ENABLE );
                if ( tmp_assattr_name_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 178;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                goto condexpr_end_1;
                condexpr_false_1:;
                tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_34 == NULL ))
                {
                    tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_34 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 178;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_64 = tmp_mvar_value_34;
                tmp_assattr_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_RTS_CONTROL_DISABLE );
                if ( tmp_assattr_name_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 178;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                condexpr_end_1:;
                CHECK_OBJECT( var_comDCB );
                tmp_assattr_target_26 = var_comDCB;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_26, const_str_plain_fRtsControl, tmp_assattr_name_26 );
                Py_DECREF( tmp_assattr_name_26 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 178;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_end_20:;
        }
        {
            PyObject *tmp_assattr_name_27;
            PyObject *tmp_source_name_65;
            PyObject *tmp_assattr_target_27;
            CHECK_OBJECT( par_self );
            tmp_source_name_65 = par_self;
            tmp_assattr_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain__rtscts );
            if ( tmp_assattr_name_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_comDCB );
            tmp_assattr_target_27 = var_comDCB;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_27, const_str_plain_fOutxCtsFlow, tmp_assattr_name_27 );
            Py_DECREF( tmp_assattr_name_27 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_19;
        branch_no_19:;
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_66;
            PyObject *tmp_source_name_67;
            CHECK_OBJECT( par_self );
            tmp_source_name_67 = par_self;
            tmp_source_name_66 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain__rs485_mode );
            if ( tmp_source_name_66 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_rts_level_for_tx );
            Py_DECREF( tmp_source_name_66 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_22 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_21;
            }
            else
            {
                goto branch_no_21;
            }
            branch_yes_21:;
            {
                PyObject *tmp_raise_type_5;
                PyObject *tmp_make_exception_arg_4;
                PyObject *tmp_called_name_11;
                PyObject *tmp_source_name_68;
                PyObject *tmp_args_element_name_18;
                PyObject *tmp_source_name_69;
                PyObject *tmp_source_name_70;
                tmp_source_name_68 = const_str_digest_62b76f5ef85e04e40c80f3d7cd0b95b8;
                tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_format );
                assert( !(tmp_called_name_11 == NULL) );
                CHECK_OBJECT( par_self );
                tmp_source_name_70 = par_self;
                tmp_source_name_69 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain__rs485_mode );
                if ( tmp_source_name_69 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );

                    exception_lineno = 186;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_rts_level_for_tx );
                Py_DECREF( tmp_source_name_69 );
                if ( tmp_args_element_name_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );

                    exception_lineno = 186;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 185;
                {
                    PyObject *call_args[] = { tmp_args_element_name_18 };
                    tmp_make_exception_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
                }

                Py_DECREF( tmp_called_name_11 );
                Py_DECREF( tmp_args_element_name_18 );
                if ( tmp_make_exception_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 185;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 184;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_4 };
                    tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_4 );
                assert( !(tmp_raise_type_5 == NULL) );
                exception_type = tmp_raise_type_5;
                exception_lineno = 184;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            branch_no_21:;
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_source_name_71;
            PyObject *tmp_source_name_72;
            PyObject *tmp_attribute_value_3;
            int tmp_truth_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_72 = par_self;
            tmp_source_name_71 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain__rs485_mode );
            if ( tmp_source_name_71 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_attribute_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain_rts_level_for_rx );
            Py_DECREF( tmp_source_name_71 );
            if ( tmp_attribute_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE( tmp_attribute_value_3 );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_3 );

                exception_lineno = 187;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_23 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_3 );
            if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_22;
            }
            else
            {
                goto branch_no_22;
            }
            branch_yes_22:;
            {
                PyObject *tmp_raise_type_6;
                PyObject *tmp_make_exception_arg_5;
                PyObject *tmp_called_name_12;
                PyObject *tmp_source_name_73;
                PyObject *tmp_args_element_name_19;
                PyObject *tmp_source_name_74;
                PyObject *tmp_source_name_75;
                tmp_source_name_73 = const_str_digest_6847a54a76c70d02a87c9a76f4937837;
                tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_format );
                assert( !(tmp_called_name_12 == NULL) );
                CHECK_OBJECT( par_self );
                tmp_source_name_75 = par_self;
                tmp_source_name_74 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain__rs485_mode );
                if ( tmp_source_name_74 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_12 );

                    exception_lineno = 190;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_rts_level_for_rx );
                Py_DECREF( tmp_source_name_74 );
                if ( tmp_args_element_name_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_12 );

                    exception_lineno = 190;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 189;
                {
                    PyObject *call_args[] = { tmp_args_element_name_19 };
                    tmp_make_exception_arg_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
                }

                Py_DECREF( tmp_called_name_12 );
                Py_DECREF( tmp_args_element_name_19 );
                if ( tmp_make_exception_arg_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 189;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 188;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_5 };
                    tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_5 );
                assert( !(tmp_raise_type_6 == NULL) );
                exception_type = tmp_raise_type_6;
                exception_lineno = 188;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            branch_no_22:;
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_compexpr_left_20;
            PyObject *tmp_compexpr_right_20;
            PyObject *tmp_source_name_76;
            PyObject *tmp_source_name_77;
            CHECK_OBJECT( par_self );
            tmp_source_name_77 = par_self;
            tmp_source_name_76 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain__rs485_mode );
            if ( tmp_source_name_76 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_20 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_delay_before_tx );
            Py_DECREF( tmp_source_name_76 );
            if ( tmp_compexpr_left_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_20 = Py_None;
            tmp_condition_result_24 = ( tmp_compexpr_left_20 != tmp_compexpr_right_20 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_20 );
            if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_23;
            }
            else
            {
                goto branch_no_23;
            }
            branch_yes_23:;
            {
                PyObject *tmp_raise_type_7;
                PyObject *tmp_make_exception_arg_6;
                PyObject *tmp_called_name_13;
                PyObject *tmp_source_name_78;
                PyObject *tmp_args_element_name_20;
                PyObject *tmp_source_name_79;
                PyObject *tmp_source_name_80;
                tmp_source_name_78 = const_str_digest_11255cc295ff7c51049482a25673fcd6;
                tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain_format );
                assert( !(tmp_called_name_13 == NULL) );
                CHECK_OBJECT( par_self );
                tmp_source_name_80 = par_self;
                tmp_source_name_79 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain__rs485_mode );
                if ( tmp_source_name_79 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_13 );

                    exception_lineno = 194;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain_delay_before_tx );
                Py_DECREF( tmp_source_name_79 );
                if ( tmp_args_element_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_13 );

                    exception_lineno = 194;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 193;
                {
                    PyObject *call_args[] = { tmp_args_element_name_20 };
                    tmp_make_exception_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
                }

                Py_DECREF( tmp_called_name_13 );
                Py_DECREF( tmp_args_element_name_20 );
                if ( tmp_make_exception_arg_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 193;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 192;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_6 };
                    tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_6 );
                assert( !(tmp_raise_type_7 == NULL) );
                exception_type = tmp_raise_type_7;
                exception_lineno = 192;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            branch_no_23:;
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_compexpr_left_21;
            PyObject *tmp_compexpr_right_21;
            PyObject *tmp_source_name_81;
            PyObject *tmp_source_name_82;
            CHECK_OBJECT( par_self );
            tmp_source_name_82 = par_self;
            tmp_source_name_81 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain__rs485_mode );
            if ( tmp_source_name_81 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_21 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_delay_before_rx );
            Py_DECREF( tmp_source_name_81 );
            if ( tmp_compexpr_left_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_21 = Py_None;
            tmp_condition_result_25 = ( tmp_compexpr_left_21 != tmp_compexpr_right_21 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_21 );
            if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_24;
            }
            else
            {
                goto branch_no_24;
            }
            branch_yes_24:;
            {
                PyObject *tmp_raise_type_8;
                PyObject *tmp_make_exception_arg_7;
                PyObject *tmp_called_name_14;
                PyObject *tmp_source_name_83;
                PyObject *tmp_args_element_name_21;
                PyObject *tmp_source_name_84;
                PyObject *tmp_source_name_85;
                tmp_source_name_83 = const_str_digest_0b18e2f1244bfabe48d1d7021f6de339;
                tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain_format );
                assert( !(tmp_called_name_14 == NULL) );
                CHECK_OBJECT( par_self );
                tmp_source_name_85 = par_self;
                tmp_source_name_84 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain__rs485_mode );
                if ( tmp_source_name_84 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_14 );

                    exception_lineno = 198;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain_delay_before_rx );
                Py_DECREF( tmp_source_name_84 );
                if ( tmp_args_element_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_14 );

                    exception_lineno = 198;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 197;
                {
                    PyObject *call_args[] = { tmp_args_element_name_21 };
                    tmp_make_exception_arg_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
                }

                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_element_name_21 );
                if ( tmp_make_exception_arg_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 197;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 196;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_7 };
                    tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_7 );
                assert( !(tmp_raise_type_8 == NULL) );
                exception_type = tmp_raise_type_8;
                exception_lineno = 196;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            branch_no_24:;
        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_source_name_86;
            PyObject *tmp_source_name_87;
            PyObject *tmp_attribute_value_4;
            int tmp_truth_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_87 = par_self;
            tmp_source_name_86 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain__rs485_mode );
            if ( tmp_source_name_86 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_attribute_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_loopback );
            Py_DECREF( tmp_source_name_86 );
            if ( tmp_attribute_value_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_4 = CHECK_IF_TRUE( tmp_attribute_value_4 );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_4 );

                exception_lineno = 199;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_26 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_4 );
            if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_25;
            }
            else
            {
                goto branch_no_25;
            }
            branch_yes_25:;
            {
                PyObject *tmp_raise_type_9;
                PyObject *tmp_make_exception_arg_8;
                PyObject *tmp_called_name_15;
                PyObject *tmp_source_name_88;
                PyObject *tmp_args_element_name_22;
                PyObject *tmp_source_name_89;
                PyObject *tmp_source_name_90;
                tmp_source_name_88 = const_str_digest_d025f041d7ca1946035c849c7d7fca6e;
                tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_format );
                assert( !(tmp_called_name_15 == NULL) );
                CHECK_OBJECT( par_self );
                tmp_source_name_90 = par_self;
                tmp_source_name_89 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain__rs485_mode );
                if ( tmp_source_name_89 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_15 );

                    exception_lineno = 202;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_loopback );
                Py_DECREF( tmp_source_name_89 );
                if ( tmp_args_element_name_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_15 );

                    exception_lineno = 202;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 201;
                {
                    PyObject *call_args[] = { tmp_args_element_name_22 };
                    tmp_make_exception_arg_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
                }

                Py_DECREF( tmp_called_name_15 );
                Py_DECREF( tmp_args_element_name_22 );
                if ( tmp_make_exception_arg_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 201;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 200;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_8 };
                    tmp_raise_type_9 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_8 );
                assert( !(tmp_raise_type_9 == NULL) );
                exception_type = tmp_raise_type_9;
                exception_lineno = 200;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            branch_no_25:;
        }
        {
            PyObject *tmp_assattr_name_28;
            PyObject *tmp_source_name_91;
            PyObject *tmp_mvar_value_35;
            PyObject *tmp_assattr_target_28;
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_35 == NULL ))
            {
                tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_35 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 203;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_91 = tmp_mvar_value_35;
            tmp_assattr_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain_RTS_CONTROL_TOGGLE );
            if ( tmp_assattr_name_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_comDCB );
            tmp_assattr_target_28 = var_comDCB;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_28, const_str_plain_fRtsControl, tmp_assattr_name_28 );
            Py_DECREF( tmp_assattr_name_28 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_29;
            PyObject *tmp_assattr_target_29;
            tmp_assattr_name_29 = const_int_0;
            CHECK_OBJECT( var_comDCB );
            tmp_assattr_target_29 = var_comDCB;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_29, const_str_plain_fOutxCtsFlow, tmp_assattr_name_29 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_19:;
    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_source_name_92;
        PyObject *tmp_attribute_value_5;
        int tmp_truth_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_92 = par_self;
        tmp_attribute_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain__dsrdtr );
        if ( tmp_attribute_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE( tmp_attribute_value_5 );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_5 );

            exception_lineno = 206;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_27 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_5 );
        if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_26;
        }
        else
        {
            goto branch_no_26;
        }
        branch_yes_26:;
        {
            PyObject *tmp_assattr_name_30;
            PyObject *tmp_source_name_93;
            PyObject *tmp_mvar_value_36;
            PyObject *tmp_assattr_target_30;
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_36 == NULL ))
            {
                tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_36 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 207;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_93 = tmp_mvar_value_36;
            tmp_assattr_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_DTR_CONTROL_HANDSHAKE );
            if ( tmp_assattr_name_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 207;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_comDCB );
            tmp_assattr_target_30 = var_comDCB;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_30, const_str_plain_fDtrControl, tmp_assattr_name_30 );
            Py_DECREF( tmp_assattr_name_30 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 207;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_26;
        branch_no_26:;
        {
            PyObject *tmp_assattr_name_31;
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_source_name_94;
            PyObject *tmp_attribute_value_6;
            int tmp_truth_name_6;
            PyObject *tmp_source_name_95;
            PyObject *tmp_mvar_value_37;
            PyObject *tmp_source_name_96;
            PyObject *tmp_mvar_value_38;
            PyObject *tmp_assattr_target_31;
            CHECK_OBJECT( par_self );
            tmp_source_name_94 = par_self;
            tmp_attribute_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_94, const_str_plain__dtr_state );
            if ( tmp_attribute_value_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_6 = CHECK_IF_TRUE( tmp_attribute_value_6 );
            if ( tmp_truth_name_6 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_6 );

                exception_lineno = 209;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_28 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_6 );
            if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_2;
            }
            else
            {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_37 == NULL ))
            {
                tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_37 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 209;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_95 = tmp_mvar_value_37;
            tmp_assattr_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_95, const_str_plain_DTR_CONTROL_ENABLE );
            if ( tmp_assattr_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_38 == NULL ))
            {
                tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_38 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 209;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_96 = tmp_mvar_value_38;
            tmp_assattr_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_96, const_str_plain_DTR_CONTROL_DISABLE );
            if ( tmp_assattr_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            condexpr_end_2:;
            CHECK_OBJECT( var_comDCB );
            tmp_assattr_target_31 = var_comDCB;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_31, const_str_plain_fDtrControl, tmp_assattr_name_31 );
            Py_DECREF( tmp_assattr_name_31 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_26:;
    }
    {
        PyObject *tmp_assattr_name_32;
        PyObject *tmp_source_name_97;
        PyObject *tmp_assattr_target_32;
        CHECK_OBJECT( par_self );
        tmp_source_name_97 = par_self;
        tmp_assattr_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_97, const_str_plain__dsrdtr );
        if ( tmp_assattr_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_comDCB );
        tmp_assattr_target_32 = var_comDCB;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_32, const_str_plain_fOutxDsrFlow, tmp_assattr_name_32 );
        Py_DECREF( tmp_assattr_name_32 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_33;
        PyObject *tmp_source_name_98;
        PyObject *tmp_assattr_target_33;
        CHECK_OBJECT( par_self );
        tmp_source_name_98 = par_self;
        tmp_assattr_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_98, const_str_plain__xonxoff );
        if ( tmp_assattr_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_comDCB );
        tmp_assattr_target_33 = var_comDCB;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_33, const_str_plain_fOutX, tmp_assattr_name_33 );
        Py_DECREF( tmp_assattr_name_33 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_34;
        PyObject *tmp_source_name_99;
        PyObject *tmp_assattr_target_34;
        CHECK_OBJECT( par_self );
        tmp_source_name_99 = par_self;
        tmp_assattr_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_99, const_str_plain__xonxoff );
        if ( tmp_assattr_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_comDCB );
        tmp_assattr_target_34 = var_comDCB;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_34, const_str_plain_fInX, tmp_assattr_name_34 );
        Py_DECREF( tmp_assattr_name_34 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_35;
        PyObject *tmp_assattr_target_35;
        tmp_assattr_name_35 = const_int_0;
        CHECK_OBJECT( var_comDCB );
        tmp_assattr_target_35 = var_comDCB;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_35, const_str_plain_fNull, tmp_assattr_name_35 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_36;
        PyObject *tmp_assattr_target_36;
        tmp_assattr_name_36 = const_int_0;
        CHECK_OBJECT( var_comDCB );
        tmp_assattr_target_36 = var_comDCB;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_36, const_str_plain_fErrorChar, tmp_assattr_name_36 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_37;
        PyObject *tmp_assattr_target_37;
        tmp_assattr_name_37 = const_int_0;
        CHECK_OBJECT( var_comDCB );
        tmp_assattr_target_37 = var_comDCB;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_37, const_str_plain_fAbortOnError, tmp_assattr_name_37 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_38;
        PyObject *tmp_source_name_100;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_assattr_target_38;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
        }

        if ( tmp_mvar_value_39 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 216;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_100 = tmp_mvar_value_39;
        tmp_assattr_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_100, const_str_plain_XON );
        if ( tmp_assattr_name_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_comDCB );
        tmp_assattr_target_38 = var_comDCB;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_38, const_str_plain_XonChar, tmp_assattr_name_38 );
        Py_DECREF( tmp_assattr_name_38 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_39;
        PyObject *tmp_source_name_101;
        PyObject *tmp_mvar_value_40;
        PyObject *tmp_assattr_target_39;
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
        }

        if ( tmp_mvar_value_40 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 217;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_101 = tmp_mvar_value_40;
        tmp_assattr_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_101, const_str_plain_XOFF );
        if ( tmp_assattr_name_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_comDCB );
        tmp_assattr_target_39 = var_comDCB;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_39, const_str_plain_XoffChar, tmp_assattr_name_39 );
        Py_DECREF( tmp_assattr_name_39 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_name_16;
        PyObject *tmp_source_name_102;
        PyObject *tmp_mvar_value_41;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_source_name_103;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_42;
        PyObject *tmp_args_element_name_25;
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_41 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_102 = tmp_mvar_value_41;
        tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_102, const_str_plain_SetCommState );
        if ( tmp_called_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_103 = par_self;
        tmp_args_element_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_103, const_str_plain__port_handle );
        if ( tmp_args_element_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_16 );

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_42 == NULL )
        {
            Py_DECREF( tmp_called_name_16 );
            Py_DECREF( tmp_args_element_name_23 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_42;
        CHECK_OBJECT( var_comDCB );
        tmp_args_element_name_25 = var_comDCB;
        frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_args_element_name_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_16 );
            Py_DECREF( tmp_args_element_name_23 );

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
            tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_23 );
        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_29 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_27;
        }
        else
        {
            goto branch_no_27;
        }
        branch_yes_27:;
        {
            PyObject *tmp_raise_type_10;
            PyObject *tmp_called_name_17;
            PyObject *tmp_mvar_value_43;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_called_name_18;
            PyObject *tmp_source_name_104;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_44;
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

            if (unlikely( tmp_mvar_value_43 == NULL ))
            {
                tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
            }

            if ( tmp_mvar_value_43 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialException" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 220;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_17 = tmp_mvar_value_43;
            tmp_source_name_104 = const_str_digest_4eef2f6a61d78aeba404d85f811ca17f;
            tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_104, const_str_plain_format );
            assert( !(tmp_called_name_18 == NULL) );
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_44 == NULL ))
            {
                tmp_mvar_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_44 == NULL )
            {
                Py_DECREF( tmp_called_name_18 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 222;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_44;
            frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 222;
            tmp_args_element_name_27 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_WinError );
            if ( tmp_args_element_name_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_18 );

                exception_lineno = 222;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 221;
            {
                PyObject *call_args[] = { tmp_args_element_name_27 };
                tmp_args_element_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
            }

            Py_DECREF( tmp_called_name_18 );
            Py_DECREF( tmp_args_element_name_27 );
            if ( tmp_args_element_name_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame.f_lineno = 220;
            {
                PyObject *call_args[] = { tmp_args_element_name_26 };
                tmp_raise_type_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
            }

            Py_DECREF( tmp_args_element_name_26 );
            if ( tmp_raise_type_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 220;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_10;
            exception_lineno = 220;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_27:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f274a00e8be9dc19dd60a86c90eae63e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f274a00e8be9dc19dd60a86c90eae63e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f274a00e8be9dc19dd60a86c90eae63e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f274a00e8be9dc19dd60a86c90eae63e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f274a00e8be9dc19dd60a86c90eae63e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f274a00e8be9dc19dd60a86c90eae63e,
        type_description_1,
        par_self,
        var_timeouts,
        var_comDCB
    );


    // Release cached frame.
    if ( frame_f274a00e8be9dc19dd60a86c90eae63e == cache_frame_f274a00e8be9dc19dd60a86c90eae63e )
    {
        Py_DECREF( frame_f274a00e8be9dc19dd60a86c90eae63e );
    }
    cache_frame_f274a00e8be9dc19dd60a86c90eae63e = NULL;

    assertFrameObject( frame_f274a00e8be9dc19dd60a86c90eae63e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_3__reconfigure_port );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_timeouts );
    Py_DECREF( var_timeouts );
    var_timeouts = NULL;

    CHECK_OBJECT( (PyObject *)var_comDCB );
    Py_DECREF( var_comDCB );
    var_comDCB = NULL;

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

    Py_XDECREF( var_timeouts );
    var_timeouts = NULL;

    Py_XDECREF( var_comDCB );
    var_comDCB = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_3__reconfigure_port );
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


static PyObject *impl_serial$serialwin32$$$function_4__close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_864cf1ce98ec451165494723b3154290;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_864cf1ce98ec451165494723b3154290 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_864cf1ce98ec451165494723b3154290, codeobj_864cf1ce98ec451165494723b3154290, module_serial$serialwin32, sizeof(void *) );
    frame_864cf1ce98ec451165494723b3154290 = cache_frame_864cf1ce98ec451165494723b3154290;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_864cf1ce98ec451165494723b3154290 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_864cf1ce98ec451165494723b3154290 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__port_handle );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_4;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 231;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SetCommTimeouts );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 231;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__orgTimeouts );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 231;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_864cf1ce98ec451165494723b3154290->m_frame.f_lineno = 231;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__overlapped_read );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_2 );
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
                PyObject *tmp_call_result_2;
                CHECK_OBJECT( par_self );
                tmp_called_instance_1 = par_self;
                frame_864cf1ce98ec451165494723b3154290->m_frame.f_lineno = 233;
                tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_cancel_read );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 233;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_source_name_7;
                PyObject *tmp_source_name_8;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 234;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_6 = tmp_mvar_value_2;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_CloseHandle );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 234;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_8 = par_self;
                tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__overlapped_read );
                if ( tmp_source_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 234;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_hEvent );
                Py_DECREF( tmp_source_name_7 );
                if ( tmp_args_element_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 234;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                frame_864cf1ce98ec451165494723b3154290->m_frame.f_lineno = 234;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_3 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 234;
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
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__overlapped_read, tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 235;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__overlapped_write );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 236;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_3 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_3 );
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
                PyObject *tmp_call_result_4;
                CHECK_OBJECT( par_self );
                tmp_called_instance_2 = par_self;
                frame_864cf1ce98ec451165494723b3154290->m_frame.f_lineno = 237;
                tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_cancel_write );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 237;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            {
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_call_result_5;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_source_name_11;
                PyObject *tmp_source_name_12;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 238;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_10 = tmp_mvar_value_3;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_CloseHandle );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 238;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_12 = par_self;
                tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__overlapped_write );
                if ( tmp_source_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 238;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_hEvent );
                Py_DECREF( tmp_source_name_11 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 238;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                frame_864cf1ce98ec451165494723b3154290->m_frame.f_lineno = 238;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_call_result_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 238;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_5 );
            }
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                tmp_assattr_name_2 = Py_None;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__overlapped_write, tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 239;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_13;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_14;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 240;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_13 = tmp_mvar_value_4;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_CloseHandle );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_14 = par_self;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__port_handle );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 240;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_864cf1ce98ec451165494723b3154290->m_frame.f_lineno = 240;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            tmp_assattr_name_3 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__port_handle, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_864cf1ce98ec451165494723b3154290 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_864cf1ce98ec451165494723b3154290 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_864cf1ce98ec451165494723b3154290, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_864cf1ce98ec451165494723b3154290->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_864cf1ce98ec451165494723b3154290, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_864cf1ce98ec451165494723b3154290,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_864cf1ce98ec451165494723b3154290 == cache_frame_864cf1ce98ec451165494723b3154290 )
    {
        Py_DECREF( frame_864cf1ce98ec451165494723b3154290 );
    }
    cache_frame_864cf1ce98ec451165494723b3154290 = NULL;

    assertFrameObject( frame_864cf1ce98ec451165494723b3154290 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_4__close );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_4__close );
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


static PyObject *impl_serial$serialwin32$$$function_5_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4a475f5bb51ee6489546dd3144258763;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4a475f5bb51ee6489546dd3144258763 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4a475f5bb51ee6489546dd3144258763, codeobj_4a475f5bb51ee6489546dd3144258763, module_serial$serialwin32, sizeof(void *) );
    frame_4a475f5bb51ee6489546dd3144258763 = cache_frame_4a475f5bb51ee6489546dd3144258763;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4a475f5bb51ee6489546dd3144258763 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4a475f5bb51ee6489546dd3144258763 ) == 2 ); // Frame stack

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


            exception_lineno = 245;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 245;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            frame_4a475f5bb51ee6489546dd3144258763->m_frame.f_lineno = 246;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__close );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 246;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = Py_False;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_is_open, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 247;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a475f5bb51ee6489546dd3144258763 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a475f5bb51ee6489546dd3144258763 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4a475f5bb51ee6489546dd3144258763, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4a475f5bb51ee6489546dd3144258763->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4a475f5bb51ee6489546dd3144258763, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4a475f5bb51ee6489546dd3144258763,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4a475f5bb51ee6489546dd3144258763 == cache_frame_4a475f5bb51ee6489546dd3144258763 )
    {
        Py_DECREF( frame_4a475f5bb51ee6489546dd3144258763 );
    }
    cache_frame_4a475f5bb51ee6489546dd3144258763 = NULL;

    assertFrameObject( frame_4a475f5bb51ee6489546dd3144258763 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_5_close );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_5_close );
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


static PyObject *impl_serial$serialwin32$$$function_6_in_waiting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_flags = NULL;
    PyObject *var_comstat = NULL;
    struct Nuitka_FrameObject *frame_2ec3eddef8fa34c30995ba488dda64f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2ec3eddef8fa34c30995ba488dda64f0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2ec3eddef8fa34c30995ba488dda64f0, codeobj_2ec3eddef8fa34c30995ba488dda64f0, module_serial$serialwin32, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2ec3eddef8fa34c30995ba488dda64f0 = cache_frame_2ec3eddef8fa34c30995ba488dda64f0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2ec3eddef8fa34c30995ba488dda64f0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2ec3eddef8fa34c30995ba488dda64f0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 254;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_2ec3eddef8fa34c30995ba488dda64f0->m_frame.f_lineno = 254;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DWORD );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_flags == NULL );
        var_flags = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 255;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        frame_2ec3eddef8fa34c30995ba488dda64f0->m_frame.f_lineno = 255;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_COMSTAT );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_comstat == NULL );
        var_comstat = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ClearCommError );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        CHECK_OBJECT( var_flags );
        tmp_args_element_name_3 = var_flags;
        frame_2ec3eddef8fa34c30995ba488dda64f0->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        CHECK_OBJECT( var_comstat );
        tmp_args_element_name_5 = var_comstat;
        frame_2ec3eddef8fa34c30995ba488dda64f0->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_2ec3eddef8fa34c30995ba488dda64f0->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_4 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialException" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 257;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_6;
            tmp_source_name_3 = const_str_digest_2ed77bc529ac5233e189e9c63149ac9b;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
            assert( !(tmp_called_name_3 == NULL) );
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 257;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_7;
            frame_2ec3eddef8fa34c30995ba488dda64f0->m_frame.f_lineno = 257;
            tmp_args_element_name_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_WinError );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 257;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_2ec3eddef8fa34c30995ba488dda64f0->m_frame.f_lineno = 257;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_2ec3eddef8fa34c30995ba488dda64f0->m_frame.f_lineno = 257;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 257;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_comstat );
        tmp_source_name_4 = var_comstat;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_cbInQue );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ec3eddef8fa34c30995ba488dda64f0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ec3eddef8fa34c30995ba488dda64f0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ec3eddef8fa34c30995ba488dda64f0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2ec3eddef8fa34c30995ba488dda64f0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2ec3eddef8fa34c30995ba488dda64f0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2ec3eddef8fa34c30995ba488dda64f0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2ec3eddef8fa34c30995ba488dda64f0,
        type_description_1,
        par_self,
        var_flags,
        var_comstat
    );


    // Release cached frame.
    if ( frame_2ec3eddef8fa34c30995ba488dda64f0 == cache_frame_2ec3eddef8fa34c30995ba488dda64f0 )
    {
        Py_DECREF( frame_2ec3eddef8fa34c30995ba488dda64f0 );
    }
    cache_frame_2ec3eddef8fa34c30995ba488dda64f0 = NULL;

    assertFrameObject( frame_2ec3eddef8fa34c30995ba488dda64f0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_6_in_waiting );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_flags );
    Py_DECREF( var_flags );
    var_flags = NULL;

    CHECK_OBJECT( (PyObject *)var_comstat );
    Py_DECREF( var_comstat );
    var_comstat = NULL;

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

    Py_XDECREF( var_flags );
    var_flags = NULL;

    Py_XDECREF( var_comstat );
    var_comstat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_6_in_waiting );
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


static PyObject *impl_serial$serialwin32$$$function_7_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_flags = NULL;
    PyObject *var_comstat = NULL;
    PyObject *var_n = NULL;
    PyObject *var_buf = NULL;
    PyObject *var_rc = NULL;
    PyObject *var_read_ok = NULL;
    PyObject *var_result_ok = NULL;
    PyObject *var_read = NULL;
    struct Nuitka_FrameObject *frame_283b61f162894bfd87d6935dae5c99dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_283b61f162894bfd87d6935dae5c99dd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_283b61f162894bfd87d6935dae5c99dd, codeobj_283b61f162894bfd87d6935dae5c99dd, module_serial$serialwin32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_283b61f162894bfd87d6935dae5c99dd = cache_frame_283b61f162894bfd87d6935dae5c99dd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_283b61f162894bfd87d6935dae5c99dd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_283b61f162894bfd87d6935dae5c99dd ) == 2 ); // Frame stack

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


            exception_lineno = 266;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 267;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 267;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
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


            exception_lineno = 268;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 269;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ResetEvent );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__overlapped_read );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 269;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hEvent );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 269;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 269;
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


                exception_lineno = 269;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 270;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 270;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DWORD );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_flags == NULL );
            var_flags = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 271;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_4;
            frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 271;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_COMSTAT );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 271;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_comstat == NULL );
            var_comstat = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 272;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_5;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ClearCommError );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port_handle );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 272;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 272;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_6;
            CHECK_OBJECT( var_flags );
            tmp_args_element_name_4 = var_flags;
            frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 272;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_byref, call_args );
            }

            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 272;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                Py_DECREF( tmp_args_element_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 272;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_7;
            CHECK_OBJECT( var_comstat );
            tmp_args_element_name_6 = var_comstat;
            frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 272;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_byref, call_args );
            }

            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 272;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 272;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_5 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                type_description_1 = "oooooooooo";
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_7;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_mvar_value_9;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialException" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 273;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_8;
                tmp_source_name_7 = const_str_digest_2ed77bc529ac5233e189e9c63149ac9b;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_format );
                assert( !(tmp_called_name_4 == NULL) );
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
                }

                if ( tmp_mvar_value_9 == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 273;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_5 = tmp_mvar_value_9;
                frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 273;
                tmp_args_element_name_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_WinError );
                if ( tmp_args_element_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 273;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 273;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8 };
                    tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_8 );
                if ( tmp_args_element_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 273;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 273;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_7 );
                if ( tmp_raise_type_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 273;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 273;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_3;
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_8;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_source_name_9;
            PyObject *tmp_args_element_name_10;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_timeout );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 274;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 274;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_1;
            }
            else
            {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_5 != NULL );
            CHECK_OBJECT( var_comstat );
            tmp_source_name_9 = var_comstat;
            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_cbInQue );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 274;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_size );
            tmp_args_element_name_10 = par_size;
            frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 274;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 274;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT( par_size );
            tmp_assign_source_3 = par_size;
            Py_INCREF( tmp_assign_source_3 );
            condexpr_end_1:;
            assert( var_n == NULL );
            var_n = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( var_n );
            tmp_compexpr_left_3 = var_n;
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "oooooooooo";
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_instance_6;
                PyObject *tmp_mvar_value_10;
                PyObject *tmp_args_element_name_11;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 276;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_6 = tmp_mvar_value_10;
                CHECK_OBJECT( var_n );
                tmp_args_element_name_11 = var_n;
                frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 276;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11 };
                    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_create_string_buffer, call_args );
                }

                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 276;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_buf == NULL );
                var_buf = tmp_assign_source_4;
            }
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_mvar_value_11;
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_11 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 277;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_7 = tmp_mvar_value_11;
                frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 277;
                tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_DWORD );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 277;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_rc == NULL );
                var_rc = tmp_assign_source_5;
            }
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_called_name_6;
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_12;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_source_name_11;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_args_element_name_14;
                PyObject *tmp_args_element_name_15;
                PyObject *tmp_called_instance_8;
                PyObject *tmp_mvar_value_13;
                PyObject *tmp_args_element_name_16;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_12;
                PyObject *tmp_mvar_value_14;
                PyObject *tmp_args_element_name_18;
                PyObject *tmp_source_name_13;
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 278;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_10 = tmp_mvar_value_12;
                tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ReadFile );
                if ( tmp_called_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 278;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_11 = par_self;
                tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__port_handle );
                if ( tmp_args_element_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );

                    exception_lineno = 279;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_buf );
                tmp_args_element_name_13 = var_buf;
                CHECK_OBJECT( var_n );
                tmp_args_element_name_14 = var_n;
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
                }

                if ( tmp_mvar_value_13 == NULL )
                {
                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_element_name_12 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 282;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_8 = tmp_mvar_value_13;
                CHECK_OBJECT( var_rc );
                tmp_args_element_name_16 = var_rc;
                frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 282;
                {
                    PyObject *call_args[] = { tmp_args_element_name_16 };
                    tmp_args_element_name_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_byref, call_args );
                }

                if ( tmp_args_element_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_element_name_12 );

                    exception_lineno = 282;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
                }

                if ( tmp_mvar_value_14 == NULL )
                {
                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_element_name_12 );
                    Py_DECREF( tmp_args_element_name_15 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 283;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_12 = tmp_mvar_value_14;
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_byref );
                if ( tmp_called_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_element_name_12 );
                    Py_DECREF( tmp_args_element_name_15 );

                    exception_lineno = 283;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_13 = par_self;
                tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__overlapped_read );
                if ( tmp_args_element_name_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_element_name_12 );
                    Py_DECREF( tmp_args_element_name_15 );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 283;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 283;
                {
                    PyObject *call_args[] = { tmp_args_element_name_18 };
                    tmp_args_element_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_18 );
                if ( tmp_args_element_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_element_name_12 );
                    Py_DECREF( tmp_args_element_name_15 );

                    exception_lineno = 283;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 278;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_17 };
                    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_6, call_args );
                }

                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_args_element_name_12 );
                Py_DECREF( tmp_args_element_name_15 );
                Py_DECREF( tmp_args_element_name_17 );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 278;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_read_ok == NULL );
                var_read_ok = tmp_assign_source_6;
            }
            {
                nuitka_bool tmp_condition_result_6;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                PyObject *tmp_operand_name_3;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_called_instance_9;
                PyObject *tmp_mvar_value_15;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_source_name_14;
                PyObject *tmp_mvar_value_16;
                PyObject *tmp_source_name_15;
                PyObject *tmp_mvar_value_17;
                CHECK_OBJECT( var_read_ok );
                tmp_operand_name_3 = var_read_ok;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 284;
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
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_15 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 284;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_9 = tmp_mvar_value_15;
                frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 284;
                tmp_compexpr_left_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_GetLastError );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 284;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_16 == NULL ))
                {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_16 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 284;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_14 = tmp_mvar_value_16;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_ERROR_SUCCESS );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 284;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_compexpr_right_4, 0, tmp_tuple_element_1 );
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_17 == NULL ))
                {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_17 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_4 );
                    Py_DECREF( tmp_compexpr_right_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 284;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_15 = tmp_mvar_value_17;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_ERROR_IO_PENDING );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );
                    Py_DECREF( tmp_compexpr_right_4 );

                    exception_lineno = 284;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_compexpr_right_4, 1, tmp_tuple_element_1 );
                tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                Py_DECREF( tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 284;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_6 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_condition_result_6 = tmp_and_left_value_1;
                and_end_1:;
                if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_5;
                }
                else
                {
                    goto branch_no_5;
                }
                branch_yes_5:;
                {
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_called_name_8;
                    PyObject *tmp_mvar_value_18;
                    PyObject *tmp_args_element_name_19;
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_source_name_16;
                    PyObject *tmp_args_element_name_20;
                    PyObject *tmp_called_instance_10;
                    PyObject *tmp_mvar_value_19;
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

                    if (unlikely( tmp_mvar_value_18 == NULL ))
                    {
                        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
                    }

                    if ( tmp_mvar_value_18 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialException" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 285;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_8 = tmp_mvar_value_18;
                    tmp_source_name_16 = const_str_digest_7e584289af6145c25f7a5a475f55a53e;
                    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_format );
                    assert( !(tmp_called_name_9 == NULL) );
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

                    if (unlikely( tmp_mvar_value_19 == NULL ))
                    {
                        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
                    }

                    if ( tmp_mvar_value_19 == NULL )
                    {
                        Py_DECREF( tmp_called_name_9 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 285;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_10 = tmp_mvar_value_19;
                    frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 285;
                    tmp_args_element_name_20 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_WinError );
                    if ( tmp_args_element_name_20 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_9 );

                        exception_lineno = 285;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 285;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_20 };
                        tmp_args_element_name_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
                    }

                    Py_DECREF( tmp_called_name_9 );
                    Py_DECREF( tmp_args_element_name_20 );
                    if ( tmp_args_element_name_19 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 285;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 285;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_19 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_19 );
                    if ( tmp_raise_type_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 285;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 285;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_5:;
            }
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_called_name_10;
                PyObject *tmp_source_name_17;
                PyObject *tmp_mvar_value_20;
                PyObject *tmp_args_element_name_21;
                PyObject *tmp_source_name_18;
                PyObject *tmp_args_element_name_22;
                PyObject *tmp_called_name_11;
                PyObject *tmp_source_name_19;
                PyObject *tmp_mvar_value_21;
                PyObject *tmp_args_element_name_23;
                PyObject *tmp_source_name_20;
                PyObject *tmp_args_element_name_24;
                PyObject *tmp_called_instance_11;
                PyObject *tmp_mvar_value_22;
                PyObject *tmp_args_element_name_25;
                PyObject *tmp_args_element_name_26;
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_20 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 286;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_17 = tmp_mvar_value_20;
                tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_GetOverlappedResult );
                if ( tmp_called_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 286;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_18 = par_self;
                tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__port_handle );
                if ( tmp_args_element_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );

                    exception_lineno = 287;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

                if (unlikely( tmp_mvar_value_21 == NULL ))
                {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
                }

                if ( tmp_mvar_value_21 == NULL )
                {
                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_element_name_21 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 288;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_19 = tmp_mvar_value_21;
                tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_byref );
                if ( tmp_called_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_element_name_21 );

                    exception_lineno = 288;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_20 = par_self;
                tmp_args_element_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__overlapped_read );
                if ( tmp_args_element_name_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_element_name_21 );
                    Py_DECREF( tmp_called_name_11 );

                    exception_lineno = 288;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 288;
                {
                    PyObject *call_args[] = { tmp_args_element_name_23 };
                    tmp_args_element_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
                }

                Py_DECREF( tmp_called_name_11 );
                Py_DECREF( tmp_args_element_name_23 );
                if ( tmp_args_element_name_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_element_name_21 );

                    exception_lineno = 288;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

                if (unlikely( tmp_mvar_value_22 == NULL ))
                {
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
                }

                if ( tmp_mvar_value_22 == NULL )
                {
                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_element_name_21 );
                    Py_DECREF( tmp_args_element_name_22 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 289;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_11 = tmp_mvar_value_22;
                CHECK_OBJECT( var_rc );
                tmp_args_element_name_25 = var_rc;
                frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 289;
                {
                    PyObject *call_args[] = { tmp_args_element_name_25 };
                    tmp_args_element_name_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_byref, call_args );
                }

                if ( tmp_args_element_name_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_element_name_21 );
                    Py_DECREF( tmp_args_element_name_22 );

                    exception_lineno = 289;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_26 = Py_True;
                frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 286;
                {
                    PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_24, tmp_args_element_name_26 };
                    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_10, call_args );
                }

                Py_DECREF( tmp_called_name_10 );
                Py_DECREF( tmp_args_element_name_21 );
                Py_DECREF( tmp_args_element_name_22 );
                Py_DECREF( tmp_args_element_name_24 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 286;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_result_ok == NULL );
                var_result_ok = tmp_assign_source_7;
            }
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_operand_name_4;
                CHECK_OBJECT( var_result_ok );
                tmp_operand_name_4 = var_result_ok;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 291;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_7 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_6;
                }
                else
                {
                    goto branch_no_6;
                }
                branch_yes_6:;
                {
                    nuitka_bool tmp_condition_result_8;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_called_instance_12;
                    PyObject *tmp_mvar_value_23;
                    PyObject *tmp_source_name_21;
                    PyObject *tmp_mvar_value_24;
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                    if (unlikely( tmp_mvar_value_23 == NULL ))
                    {
                        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                    }

                    if ( tmp_mvar_value_23 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 292;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_12 = tmp_mvar_value_23;
                    frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 292;
                    tmp_compexpr_left_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_12, const_str_plain_GetLastError );
                    if ( tmp_compexpr_left_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 292;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                    if (unlikely( tmp_mvar_value_24 == NULL ))
                    {
                        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                    }

                    if ( tmp_mvar_value_24 == NULL )
                    {
                        Py_DECREF( tmp_compexpr_left_5 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 292;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_21 = tmp_mvar_value_24;
                    tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ERROR_OPERATION_ABORTED );
                    if ( tmp_compexpr_right_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_compexpr_left_5 );

                        exception_lineno = 292;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    Py_DECREF( tmp_compexpr_left_5 );
                    Py_DECREF( tmp_compexpr_right_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 292;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
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
                        PyObject *tmp_called_name_12;
                        PyObject *tmp_mvar_value_25;
                        PyObject *tmp_args_element_name_27;
                        PyObject *tmp_called_name_13;
                        PyObject *tmp_source_name_22;
                        PyObject *tmp_args_element_name_28;
                        PyObject *tmp_called_instance_13;
                        PyObject *tmp_mvar_value_26;
                        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

                        if (unlikely( tmp_mvar_value_25 == NULL ))
                        {
                            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
                        }

                        if ( tmp_mvar_value_25 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialException" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 293;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_12 = tmp_mvar_value_25;
                        tmp_source_name_22 = const_str_digest_1ad7c58b26db5ec7add099b988e90107;
                        tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_format );
                        assert( !(tmp_called_name_13 == NULL) );
                        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

                        if (unlikely( tmp_mvar_value_26 == NULL ))
                        {
                            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
                        }

                        if ( tmp_mvar_value_26 == NULL )
                        {
                            Py_DECREF( tmp_called_name_13 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 293;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_instance_13 = tmp_mvar_value_26;
                        frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 293;
                        tmp_args_element_name_28 = CALL_METHOD_NO_ARGS( tmp_called_instance_13, const_str_plain_WinError );
                        if ( tmp_args_element_name_28 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_13 );

                            exception_lineno = 293;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 293;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_28 };
                            tmp_args_element_name_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
                        }

                        Py_DECREF( tmp_called_name_13 );
                        Py_DECREF( tmp_args_element_name_28 );
                        if ( tmp_args_element_name_27 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 293;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_283b61f162894bfd87d6935dae5c99dd->m_frame.f_lineno = 293;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_27 };
                            tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
                        }

                        Py_DECREF( tmp_args_element_name_27 );
                        if ( tmp_raise_type_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 293;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        exception_type = tmp_raise_type_4;
                        exception_lineno = 293;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_no_7:;
                }
                branch_no_6:;
            }
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_source_name_23;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_start_name_1;
                PyObject *tmp_stop_name_1;
                PyObject *tmp_source_name_24;
                PyObject *tmp_step_name_1;
                CHECK_OBJECT( var_buf );
                tmp_source_name_23 = var_buf;
                tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_raw );
                if ( tmp_subscribed_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 294;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_start_name_1 = Py_None;
                CHECK_OBJECT( var_rc );
                tmp_source_name_24 = var_rc;
                tmp_stop_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_value );
                if ( tmp_stop_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_1 );

                    exception_lineno = 294;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_step_name_1 = Py_None;
                tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                Py_DECREF( tmp_stop_name_1 );
                assert( !(tmp_subscript_name_1 == NULL) );
                tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscribed_name_1 );
                Py_DECREF( tmp_subscript_name_1 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 294;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_read == NULL );
                var_read = tmp_assign_source_8;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_assign_source_9;
                tmp_assign_source_9 = const_bytes_empty;
                assert( var_read == NULL );
                Py_INCREF( tmp_assign_source_9 );
                var_read = tmp_assign_source_9;
            }
            branch_end_4:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = const_bytes_empty;
            assert( var_read == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_read = tmp_assign_source_10;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_bytes_arg_1;
        if ( var_read == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 299;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_bytes_arg_1 = var_read;
        tmp_return_value = BUILTIN_BYTES1( tmp_bytes_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_283b61f162894bfd87d6935dae5c99dd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_283b61f162894bfd87d6935dae5c99dd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_283b61f162894bfd87d6935dae5c99dd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_283b61f162894bfd87d6935dae5c99dd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_283b61f162894bfd87d6935dae5c99dd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_283b61f162894bfd87d6935dae5c99dd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_283b61f162894bfd87d6935dae5c99dd,
        type_description_1,
        par_self,
        par_size,
        var_flags,
        var_comstat,
        var_n,
        var_buf,
        var_rc,
        var_read_ok,
        var_result_ok,
        var_read
    );


    // Release cached frame.
    if ( frame_283b61f162894bfd87d6935dae5c99dd == cache_frame_283b61f162894bfd87d6935dae5c99dd )
    {
        Py_DECREF( frame_283b61f162894bfd87d6935dae5c99dd );
    }
    cache_frame_283b61f162894bfd87d6935dae5c99dd = NULL;

    assertFrameObject( frame_283b61f162894bfd87d6935dae5c99dd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_7_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_flags );
    var_flags = NULL;

    Py_XDECREF( var_comstat );
    var_comstat = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    Py_XDECREF( var_rc );
    var_rc = NULL;

    Py_XDECREF( var_read_ok );
    var_read_ok = NULL;

    Py_XDECREF( var_result_ok );
    var_result_ok = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

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

    Py_XDECREF( var_flags );
    var_flags = NULL;

    Py_XDECREF( var_comstat );
    var_comstat = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    Py_XDECREF( var_rc );
    var_rc = NULL;

    Py_XDECREF( var_read_ok );
    var_read_ok = NULL;

    Py_XDECREF( var_result_ok );
    var_result_ok = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_7_read );
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


static PyObject *impl_serial$serialwin32$$$function_8_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_n = NULL;
    PyObject *var_success = NULL;
    PyObject *var_errorcode = NULL;
    struct Nuitka_FrameObject *frame_9ad44a1cffc6d621b0cd0f618dce9d08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9ad44a1cffc6d621b0cd0f618dce9d08 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9ad44a1cffc6d621b0cd0f618dce9d08, codeobj_9ad44a1cffc6d621b0cd0f618dce9d08, module_serial$serialwin32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9ad44a1cffc6d621b0cd0f618dce9d08 = cache_frame_9ad44a1cffc6d621b0cd0f618dce9d08;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9ad44a1cffc6d621b0cd0f618dce9d08 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9ad44a1cffc6d621b0cd0f618dce9d08 ) == 2 ); // Frame stack

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


            exception_lineno = 303;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 304;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 304;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_to_bytes );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_bytes );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "to_bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 308;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_1 = par_data;
        frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 308;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            assert( old != NULL );
            par_data = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_data );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_data );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 309;
            type_description_1 = "ooooo";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 311;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 311;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DWORD );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_n == NULL );
            var_n = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_4;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_WriteFile );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_data );
            tmp_args_element_name_3 = par_data;
            CHECK_OBJECT( par_data );
            tmp_len_arg_1 = par_data;
            tmp_args_element_name_4 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                Py_DECREF( tmp_args_element_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_5;
            CHECK_OBJECT( var_n );
            tmp_args_element_name_6 = var_n;
            frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 312;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_byref, call_args );
            }

            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                Py_DECREF( tmp_args_element_name_4 );

                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__overlapped_write );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                Py_DECREF( tmp_args_element_name_4 );
                Py_DECREF( tmp_args_element_name_5 );

                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 312;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_7 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_success == NULL );
            var_success = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__write_timeout );
            if ( tmp_compexpr_left_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_1 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            Py_DECREF( tmp_compexpr_left_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooooo";
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
                nuitka_bool tmp_condition_result_4;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_source_name_7;
                PyObject *tmp_mvar_value_8;
                CHECK_OBJECT( var_success );
                tmp_operand_name_2 = var_success;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 314;
                    type_description_1 = "ooooo";
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
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 314;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_3 = tmp_mvar_value_6;
                frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 314;
                tmp_compexpr_left_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_GetLastError );
                if ( tmp_compexpr_left_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 314;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_7 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 314;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_6 = tmp_mvar_value_7;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ERROR_SUCCESS );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_2 );

                    exception_lineno = 314;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_compexpr_right_2, 0, tmp_tuple_element_1 );
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_8 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_2 );
                    Py_DECREF( tmp_compexpr_right_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 314;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_7 = tmp_mvar_value_8;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ERROR_IO_PENDING );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_2 );
                    Py_DECREF( tmp_compexpr_right_2 );

                    exception_lineno = 314;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_compexpr_right_2, 1, tmp_tuple_element_1 );
                tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
                Py_DECREF( tmp_compexpr_left_2 );
                Py_DECREF( tmp_compexpr_right_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 314;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_4 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_condition_result_4 = tmp_and_left_value_1;
                and_end_1:;
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
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_mvar_value_9;
                    PyObject *tmp_args_element_name_8;
                    PyObject *tmp_called_name_4;
                    PyObject *tmp_source_name_8;
                    PyObject *tmp_args_element_name_9;
                    PyObject *tmp_called_instance_4;
                    PyObject *tmp_mvar_value_10;
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

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

                        exception_lineno = 315;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_3 = tmp_mvar_value_9;
                    tmp_source_name_8 = const_str_digest_2fee4f8a7222f5d8adcdf46b602cea8b;
                    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_format );
                    assert( !(tmp_called_name_4 == NULL) );
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

                    if (unlikely( tmp_mvar_value_10 == NULL ))
                    {
                        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
                    }

                    if ( tmp_mvar_value_10 == NULL )
                    {
                        Py_DECREF( tmp_called_name_4 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 315;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_4 = tmp_mvar_value_10;
                    frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 315;
                    tmp_args_element_name_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_WinError );
                    if ( tmp_args_element_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );

                        exception_lineno = 315;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 315;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_9 };
                        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                    }

                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_9 );
                    if ( tmp_args_element_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 315;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 315;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_8 };
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_8 );
                    if ( tmp_raise_type_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 315;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 315;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_4:;
            }
            {
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_11;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_10;
                PyObject *tmp_source_name_10;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_source_name_11;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_mvar_value_12;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_args_element_name_14;
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_11 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 319;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_9 = tmp_mvar_value_11;
                tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_GetOverlappedResult );
                if ( tmp_called_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 319;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_10 = par_self;
                tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__port_handle );
                if ( tmp_args_element_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_5 );

                    exception_lineno = 319;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_11 = par_self;
                tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__overlapped_write );
                if ( tmp_args_element_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_5 );
                    Py_DECREF( tmp_args_element_name_10 );

                    exception_lineno = 319;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
                }

                if ( tmp_mvar_value_12 == NULL )
                {
                    Py_DECREF( tmp_called_name_5 );
                    Py_DECREF( tmp_args_element_name_10 );
                    Py_DECREF( tmp_args_element_name_11 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 319;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_5 = tmp_mvar_value_12;
                CHECK_OBJECT( var_n );
                tmp_args_element_name_13 = var_n;
                frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 319;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13 };
                    tmp_args_element_name_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_byref, call_args );
                }

                if ( tmp_args_element_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_5 );
                    Py_DECREF( tmp_args_element_name_10 );
                    Py_DECREF( tmp_args_element_name_11 );

                    exception_lineno = 319;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_14 = Py_True;
                frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 319;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_14 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_element_name_10 );
                Py_DECREF( tmp_args_element_name_11 );
                Py_DECREF( tmp_args_element_name_12 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 319;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_called_instance_6;
                PyObject *tmp_mvar_value_13;
                PyObject *tmp_source_name_12;
                PyObject *tmp_mvar_value_14;
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_13 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 320;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_6 = tmp_mvar_value_13;
                frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 320;
                tmp_compexpr_left_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_GetLastError );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 320;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_14 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 320;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_12 = tmp_mvar_value_14;
                tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ERROR_OPERATION_ABORTED );
                if ( tmp_compexpr_right_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );

                    exception_lineno = 320;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                Py_DECREF( tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 320;
                    type_description_1 = "ooooo";
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
                    PyObject *tmp_source_name_13;
                    CHECK_OBJECT( var_n );
                    tmp_source_name_13 = var_n;
                    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_value );
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 321;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                branch_no_5:;
            }
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_source_name_14;
                PyObject *tmp_len_arg_2;
                CHECK_OBJECT( var_n );
                tmp_source_name_14 = var_n;
                tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_value );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 322;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_data );
                tmp_len_arg_2 = par_data;
                tmp_compexpr_right_4 = BUILTIN_LEN( tmp_len_arg_2 );
                if ( tmp_compexpr_right_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 322;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                Py_DECREF( tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 322;
                    type_description_1 = "ooooo";
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
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_mvar_value_15;
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_writeTimeoutError );

                    if (unlikely( tmp_mvar_value_15 == NULL ))
                    {
                        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_writeTimeoutError );
                    }

                    if ( tmp_mvar_value_15 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "writeTimeoutError" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 323;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_raise_type_3 = tmp_mvar_value_15;
                    exception_type = tmp_raise_type_3;
                    Py_INCREF( tmp_raise_type_3 );
                    exception_lineno = 323;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_6:;
            }
            {
                PyObject *tmp_source_name_15;
                CHECK_OBJECT( var_n );
                tmp_source_name_15 = var_n;
                tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_value );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 324;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_4;
                nuitka_bool tmp_condition_result_7;
                int tmp_truth_name_2;
                PyObject *tmp_source_name_16;
                PyObject *tmp_mvar_value_16;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_mvar_value_17;
                CHECK_OBJECT( var_success );
                tmp_truth_name_2 = CHECK_IF_TRUE( var_success );
                if ( tmp_truth_name_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 326;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_7 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
                {
                    goto condexpr_true_1;
                }
                else
                {
                    goto condexpr_false_1;
                }
                condexpr_true_1:;
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_16 == NULL ))
                {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_16 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 326;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_16 = tmp_mvar_value_16;
                tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_ERROR_SUCCESS );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 326;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                goto condexpr_end_1;
                condexpr_false_1:;
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_17 == NULL ))
                {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_17 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 326;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_7 = tmp_mvar_value_17;
                frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 326;
                tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_GetLastError );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 326;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                condexpr_end_1:;
                assert( var_errorcode == NULL );
                var_errorcode = tmp_assign_source_4;
            }
            {
                nuitka_bool tmp_condition_result_8;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_source_name_17;
                PyObject *tmp_mvar_value_18;
                PyObject *tmp_source_name_18;
                PyObject *tmp_mvar_value_19;
                PyObject *tmp_source_name_19;
                PyObject *tmp_mvar_value_20;
                CHECK_OBJECT( var_errorcode );
                tmp_compexpr_left_5 = var_errorcode;
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_18 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 327;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_17 = tmp_mvar_value_18;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_ERROR_INVALID_USER_BUFFER );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 327;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_5 = PyTuple_New( 3 );
                PyTuple_SET_ITEM( tmp_compexpr_right_5, 0, tmp_tuple_element_2 );
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_19 == NULL )
                {
                    Py_DECREF( tmp_compexpr_right_5 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 327;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_18 = tmp_mvar_value_19;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_ERROR_NOT_ENOUGH_MEMORY );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_right_5 );

                    exception_lineno = 327;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_compexpr_right_5, 1, tmp_tuple_element_2 );
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                }

                if ( tmp_mvar_value_20 == NULL )
                {
                    Py_DECREF( tmp_compexpr_right_5 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 328;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_19 = tmp_mvar_value_20;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_ERROR_OPERATION_ABORTED );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_right_5 );

                    exception_lineno = 328;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_compexpr_right_5, 2, tmp_tuple_element_2 );
                tmp_res = PySequence_Contains( tmp_compexpr_right_5, tmp_compexpr_left_5 );
                Py_DECREF( tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 327;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_8 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_7;
                }
                else
                {
                    goto branch_no_7;
                }
                branch_yes_7:;
                tmp_return_value = const_int_0;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                goto branch_end_7;
                branch_no_7:;
                {
                    nuitka_bool tmp_condition_result_9;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    PyObject *tmp_tuple_element_3;
                    PyObject *tmp_source_name_20;
                    PyObject *tmp_mvar_value_21;
                    PyObject *tmp_source_name_21;
                    PyObject *tmp_mvar_value_22;
                    CHECK_OBJECT( var_errorcode );
                    tmp_compexpr_left_6 = var_errorcode;
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                    if (unlikely( tmp_mvar_value_21 == NULL ))
                    {
                        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                    }

                    if ( tmp_mvar_value_21 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 330;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_20 = tmp_mvar_value_21;
                    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_ERROR_SUCCESS );
                    if ( tmp_tuple_element_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 330;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_6 = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_compexpr_right_6, 0, tmp_tuple_element_3 );
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

                    if (unlikely( tmp_mvar_value_22 == NULL ))
                    {
                        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
                    }

                    if ( tmp_mvar_value_22 == NULL )
                    {
                        Py_DECREF( tmp_compexpr_right_6 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 330;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_21 = tmp_mvar_value_22;
                    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ERROR_IO_PENDING );
                    if ( tmp_tuple_element_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_compexpr_right_6 );

                        exception_lineno = 330;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    PyTuple_SET_ITEM( tmp_compexpr_right_6, 1, tmp_tuple_element_3 );
                    tmp_res = PySequence_Contains( tmp_compexpr_right_6, tmp_compexpr_left_6 );
                    Py_DECREF( tmp_compexpr_right_6 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 330;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_9 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_8;
                    }
                    else
                    {
                        goto branch_no_8;
                    }
                    branch_yes_8:;
                    {
                        PyObject *tmp_len_arg_3;
                        CHECK_OBJECT( par_data );
                        tmp_len_arg_3 = par_data;
                        tmp_return_value = BUILTIN_LEN( tmp_len_arg_3 );
                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 332;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        goto frame_return_exit_1;
                    }
                    goto branch_end_8;
                    branch_no_8:;
                    {
                        PyObject *tmp_raise_type_4;
                        PyObject *tmp_called_name_6;
                        PyObject *tmp_mvar_value_23;
                        PyObject *tmp_args_element_name_15;
                        PyObject *tmp_called_name_7;
                        PyObject *tmp_source_name_22;
                        PyObject *tmp_args_element_name_16;
                        PyObject *tmp_called_instance_8;
                        PyObject *tmp_mvar_value_24;
                        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

                        if (unlikely( tmp_mvar_value_23 == NULL ))
                        {
                            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
                        }

                        if ( tmp_mvar_value_23 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialException" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 334;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_6 = tmp_mvar_value_23;
                        tmp_source_name_22 = const_str_digest_2fee4f8a7222f5d8adcdf46b602cea8b;
                        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_format );
                        assert( !(tmp_called_name_7 == NULL) );
                        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

                        if (unlikely( tmp_mvar_value_24 == NULL ))
                        {
                            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
                        }

                        if ( tmp_mvar_value_24 == NULL )
                        {
                            Py_DECREF( tmp_called_name_7 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 334;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_instance_8 = tmp_mvar_value_24;
                        frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 334;
                        tmp_args_element_name_16 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_WinError );
                        if ( tmp_args_element_name_16 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_7 );

                            exception_lineno = 334;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 334;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_16 };
                            tmp_args_element_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                        }

                        Py_DECREF( tmp_called_name_7 );
                        Py_DECREF( tmp_args_element_name_16 );
                        if ( tmp_args_element_name_15 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 334;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame.f_lineno = 334;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_15 };
                            tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
                        }

                        Py_DECREF( tmp_args_element_name_15 );
                        if ( tmp_raise_type_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 334;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        exception_type = tmp_raise_type_4;
                        exception_lineno = 334;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_end_8:;
                }
                branch_end_7:;
            }
            branch_end_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_return_value = const_int_0;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ad44a1cffc6d621b0cd0f618dce9d08 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ad44a1cffc6d621b0cd0f618dce9d08 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ad44a1cffc6d621b0cd0f618dce9d08 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9ad44a1cffc6d621b0cd0f618dce9d08, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9ad44a1cffc6d621b0cd0f618dce9d08->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9ad44a1cffc6d621b0cd0f618dce9d08, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9ad44a1cffc6d621b0cd0f618dce9d08,
        type_description_1,
        par_self,
        par_data,
        var_n,
        var_success,
        var_errorcode
    );


    // Release cached frame.
    if ( frame_9ad44a1cffc6d621b0cd0f618dce9d08 == cache_frame_9ad44a1cffc6d621b0cd0f618dce9d08 )
    {
        Py_DECREF( frame_9ad44a1cffc6d621b0cd0f618dce9d08 );
    }
    cache_frame_9ad44a1cffc6d621b0cd0f618dce9d08 = NULL;

    assertFrameObject( frame_9ad44a1cffc6d621b0cd0f618dce9d08 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_8_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_success );
    var_success = NULL;

    Py_XDECREF( var_errorcode );
    var_errorcode = NULL;

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

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_success );
    var_success = NULL;

    Py_XDECREF( var_errorcode );
    var_errorcode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_8_write );
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


static PyObject *impl_serial$serialwin32$$$function_9_flush( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_31b398c14517bc8b84382c753b624549;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_31b398c14517bc8b84382c753b624549 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_31b398c14517bc8b84382c753b624549, codeobj_31b398c14517bc8b84382c753b624549, module_serial$serialwin32, sizeof(void *) );
    frame_31b398c14517bc8b84382c753b624549 = cache_frame_31b398c14517bc8b84382c753b624549;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_31b398c14517bc8b84382c753b624549 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_31b398c14517bc8b84382c753b624549 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_out_waiting );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_31b398c14517bc8b84382c753b624549->m_frame.f_lineno = 344;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sleep, &PyTuple_GET_ITEM( const_tuple_float_0_05_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_31b398c14517bc8b84382c753b624549 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_31b398c14517bc8b84382c753b624549 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_31b398c14517bc8b84382c753b624549, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_31b398c14517bc8b84382c753b624549->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_31b398c14517bc8b84382c753b624549, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_31b398c14517bc8b84382c753b624549,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_31b398c14517bc8b84382c753b624549 == cache_frame_31b398c14517bc8b84382c753b624549 )
    {
        Py_DECREF( frame_31b398c14517bc8b84382c753b624549 );
    }
    cache_frame_31b398c14517bc8b84382c753b624549 = NULL;

    assertFrameObject( frame_31b398c14517bc8b84382c753b624549 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_9_flush );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_9_flush );
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


static PyObject *impl_serial$serialwin32$$$function_10_reset_input_buffer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_37cfa45952b2aeb54b44bdc42cab7d46;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_37cfa45952b2aeb54b44bdc42cab7d46 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_37cfa45952b2aeb54b44bdc42cab7d46, codeobj_37cfa45952b2aeb54b44bdc42cab7d46, module_serial$serialwin32, sizeof(void *) );
    frame_37cfa45952b2aeb54b44bdc42cab7d46 = cache_frame_37cfa45952b2aeb54b44bdc42cab7d46;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_37cfa45952b2aeb54b44bdc42cab7d46 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_37cfa45952b2aeb54b44bdc42cab7d46 ) == 2 ); // Frame stack

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


            exception_lineno = 351;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 351;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 352;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 352;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 353;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PurgeComm );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 353;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 353;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PURGE_RXCLEAR );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 353;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 353;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_PURGE_RXABORT );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 353;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 353;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_37cfa45952b2aeb54b44bdc42cab7d46->m_frame.f_lineno = 353;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37cfa45952b2aeb54b44bdc42cab7d46 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37cfa45952b2aeb54b44bdc42cab7d46 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_37cfa45952b2aeb54b44bdc42cab7d46, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_37cfa45952b2aeb54b44bdc42cab7d46->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_37cfa45952b2aeb54b44bdc42cab7d46, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_37cfa45952b2aeb54b44bdc42cab7d46,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_37cfa45952b2aeb54b44bdc42cab7d46 == cache_frame_37cfa45952b2aeb54b44bdc42cab7d46 )
    {
        Py_DECREF( frame_37cfa45952b2aeb54b44bdc42cab7d46 );
    }
    cache_frame_37cfa45952b2aeb54b44bdc42cab7d46 = NULL;

    assertFrameObject( frame_37cfa45952b2aeb54b44bdc42cab7d46 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_10_reset_input_buffer );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_10_reset_input_buffer );
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


static PyObject *impl_serial$serialwin32$$$function_11_reset_output_buffer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7c19251793a1a411bd2b9f81574177da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7c19251793a1a411bd2b9f81574177da = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7c19251793a1a411bd2b9f81574177da, codeobj_7c19251793a1a411bd2b9f81574177da, module_serial$serialwin32, sizeof(void *) );
    frame_7c19251793a1a411bd2b9f81574177da = cache_frame_7c19251793a1a411bd2b9f81574177da;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7c19251793a1a411bd2b9f81574177da );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7c19251793a1a411bd2b9f81574177da ) == 2 ); // Frame stack

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


            exception_lineno = 360;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 361;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 361;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PurgeComm );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PURGE_TXCLEAR );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_PURGE_TXABORT );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7c19251793a1a411bd2b9f81574177da->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c19251793a1a411bd2b9f81574177da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c19251793a1a411bd2b9f81574177da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7c19251793a1a411bd2b9f81574177da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7c19251793a1a411bd2b9f81574177da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7c19251793a1a411bd2b9f81574177da, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7c19251793a1a411bd2b9f81574177da,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7c19251793a1a411bd2b9f81574177da == cache_frame_7c19251793a1a411bd2b9f81574177da )
    {
        Py_DECREF( frame_7c19251793a1a411bd2b9f81574177da );
    }
    cache_frame_7c19251793a1a411bd2b9f81574177da = NULL;

    assertFrameObject( frame_7c19251793a1a411bd2b9f81574177da );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_11_reset_output_buffer );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_11_reset_output_buffer );
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


static PyObject *impl_serial$serialwin32$$$function_12__update_break_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a82017b361da4214425c8f5706244003;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a82017b361da4214425c8f5706244003 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a82017b361da4214425c8f5706244003, codeobj_a82017b361da4214425c8f5706244003, module_serial$serialwin32, sizeof(void *) );
    frame_a82017b361da4214425c8f5706244003 = cache_frame_a82017b361da4214425c8f5706244003;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a82017b361da4214425c8f5706244003 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a82017b361da4214425c8f5706244003 ) == 2 ); // Frame stack

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


            exception_lineno = 366;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 367;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 367;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
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
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__break_state );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 368;
            type_description_1 = "o";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 369;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SetCommBreak );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 369;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__port_handle );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 369;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_a82017b361da4214425c8f5706244003->m_frame.f_lineno = 369;
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


                exception_lineno = 369;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_6;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 371;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ClearCommBreak );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 371;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port_handle );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 371;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_a82017b361da4214425c8f5706244003->m_frame.f_lineno = 371;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 371;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a82017b361da4214425c8f5706244003 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a82017b361da4214425c8f5706244003 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a82017b361da4214425c8f5706244003, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a82017b361da4214425c8f5706244003->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a82017b361da4214425c8f5706244003, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a82017b361da4214425c8f5706244003,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a82017b361da4214425c8f5706244003 == cache_frame_a82017b361da4214425c8f5706244003 )
    {
        Py_DECREF( frame_a82017b361da4214425c8f5706244003 );
    }
    cache_frame_a82017b361da4214425c8f5706244003 = NULL;

    assertFrameObject( frame_a82017b361da4214425c8f5706244003 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_12__update_break_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_12__update_break_state );
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


static PyObject *impl_serial$serialwin32$$$function_13__update_rts_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_9f4ca4a841a7e91c976ae4c1a908b04e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9f4ca4a841a7e91c976ae4c1a908b04e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9f4ca4a841a7e91c976ae4c1a908b04e, codeobj_9f4ca4a841a7e91c976ae4c1a908b04e, module_serial$serialwin32, sizeof(void *) );
    frame_9f4ca4a841a7e91c976ae4c1a908b04e = cache_frame_9f4ca4a841a7e91c976ae4c1a908b04e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9f4ca4a841a7e91c976ae4c1a908b04e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9f4ca4a841a7e91c976ae4c1a908b04e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__rts_state );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 375;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 376;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EscapeCommFunction );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 376;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 376;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 376;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SETRTS );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 376;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_9f4ca4a841a7e91c976ae4c1a908b04e->m_frame.f_lineno = 376;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 376;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 378;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_EscapeCommFunction );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 378;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port_handle );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 378;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 378;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_4;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_CLRRTS );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 378;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_9f4ca4a841a7e91c976ae4c1a908b04e->m_frame.f_lineno = 378;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 378;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f4ca4a841a7e91c976ae4c1a908b04e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f4ca4a841a7e91c976ae4c1a908b04e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9f4ca4a841a7e91c976ae4c1a908b04e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9f4ca4a841a7e91c976ae4c1a908b04e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9f4ca4a841a7e91c976ae4c1a908b04e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9f4ca4a841a7e91c976ae4c1a908b04e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9f4ca4a841a7e91c976ae4c1a908b04e == cache_frame_9f4ca4a841a7e91c976ae4c1a908b04e )
    {
        Py_DECREF( frame_9f4ca4a841a7e91c976ae4c1a908b04e );
    }
    cache_frame_9f4ca4a841a7e91c976ae4c1a908b04e = NULL;

    assertFrameObject( frame_9f4ca4a841a7e91c976ae4c1a908b04e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_13__update_rts_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_13__update_rts_state );
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


static PyObject *impl_serial$serialwin32$$$function_14__update_dtr_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_97fe77b53e79e7018206dd5c9fbd3c64;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_97fe77b53e79e7018206dd5c9fbd3c64 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_97fe77b53e79e7018206dd5c9fbd3c64, codeobj_97fe77b53e79e7018206dd5c9fbd3c64, module_serial$serialwin32, sizeof(void *) );
    frame_97fe77b53e79e7018206dd5c9fbd3c64 = cache_frame_97fe77b53e79e7018206dd5c9fbd3c64;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_97fe77b53e79e7018206dd5c9fbd3c64 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_97fe77b53e79e7018206dd5c9fbd3c64 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__dtr_state );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 382;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 383;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EscapeCommFunction );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 383;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 383;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 383;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SETDTR );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 383;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_97fe77b53e79e7018206dd5c9fbd3c64->m_frame.f_lineno = 383;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 383;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 385;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_EscapeCommFunction );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 385;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port_handle );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 385;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 385;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_4;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_CLRDTR );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 385;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_97fe77b53e79e7018206dd5c9fbd3c64->m_frame.f_lineno = 385;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 385;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_97fe77b53e79e7018206dd5c9fbd3c64 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_97fe77b53e79e7018206dd5c9fbd3c64 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_97fe77b53e79e7018206dd5c9fbd3c64, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_97fe77b53e79e7018206dd5c9fbd3c64->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_97fe77b53e79e7018206dd5c9fbd3c64, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_97fe77b53e79e7018206dd5c9fbd3c64,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_97fe77b53e79e7018206dd5c9fbd3c64 == cache_frame_97fe77b53e79e7018206dd5c9fbd3c64 )
    {
        Py_DECREF( frame_97fe77b53e79e7018206dd5c9fbd3c64 );
    }
    cache_frame_97fe77b53e79e7018206dd5c9fbd3c64 = NULL;

    assertFrameObject( frame_97fe77b53e79e7018206dd5c9fbd3c64 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_14__update_dtr_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_14__update_dtr_state );
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


static PyObject *impl_serial$serialwin32$$$function_15__GetCommModemStatus( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_stat = NULL;
    struct Nuitka_FrameObject *frame_7ef9d8f1379f6b1554db25a0f41c3797;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7ef9d8f1379f6b1554db25a0f41c3797 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ef9d8f1379f6b1554db25a0f41c3797, codeobj_7ef9d8f1379f6b1554db25a0f41c3797, module_serial$serialwin32, sizeof(void *)+sizeof(void *) );
    frame_7ef9d8f1379f6b1554db25a0f41c3797 = cache_frame_7ef9d8f1379f6b1554db25a0f41c3797;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ef9d8f1379f6b1554db25a0f41c3797 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ef9d8f1379f6b1554db25a0f41c3797 ) == 2 ); // Frame stack

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


            exception_lineno = 388;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 389;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 389;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 390;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        frame_7ef9d8f1379f6b1554db25a0f41c3797->m_frame.f_lineno = 390;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DWORD );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_stat == NULL );
        var_stat = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_GetCommModemStatus );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_stat );
        tmp_args_element_name_3 = var_stat;
        frame_7ef9d8f1379f6b1554db25a0f41c3797->m_frame.f_lineno = 391;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7ef9d8f1379f6b1554db25a0f41c3797->m_frame.f_lineno = 391;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_stat );
        tmp_source_name_4 = var_stat;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_value );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ef9d8f1379f6b1554db25a0f41c3797 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ef9d8f1379f6b1554db25a0f41c3797 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ef9d8f1379f6b1554db25a0f41c3797 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ef9d8f1379f6b1554db25a0f41c3797, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ef9d8f1379f6b1554db25a0f41c3797->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ef9d8f1379f6b1554db25a0f41c3797, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ef9d8f1379f6b1554db25a0f41c3797,
        type_description_1,
        par_self,
        var_stat
    );


    // Release cached frame.
    if ( frame_7ef9d8f1379f6b1554db25a0f41c3797 == cache_frame_7ef9d8f1379f6b1554db25a0f41c3797 )
    {
        Py_DECREF( frame_7ef9d8f1379f6b1554db25a0f41c3797 );
    }
    cache_frame_7ef9d8f1379f6b1554db25a0f41c3797 = NULL;

    assertFrameObject( frame_7ef9d8f1379f6b1554db25a0f41c3797 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_15__GetCommModemStatus );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_stat );
    Py_DECREF( var_stat );
    var_stat = NULL;

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

    Py_XDECREF( var_stat );
    var_stat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_15__GetCommModemStatus );
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


static PyObject *impl_serial$serialwin32$$$function_16_cts( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_fd726c2709d53a2429ae70846dd3b977;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fd726c2709d53a2429ae70846dd3b977 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fd726c2709d53a2429ae70846dd3b977, codeobj_fd726c2709d53a2429ae70846dd3b977, module_serial$serialwin32, sizeof(void *) );
    frame_fd726c2709d53a2429ae70846dd3b977 = cache_frame_fd726c2709d53a2429ae70846dd3b977;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fd726c2709d53a2429ae70846dd3b977 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fd726c2709d53a2429ae70846dd3b977 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MS_CTS_ON );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_fd726c2709d53a2429ae70846dd3b977->m_frame.f_lineno = 397;
        tmp_right_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__GetCommModemStatus );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_return_value = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd726c2709d53a2429ae70846dd3b977 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd726c2709d53a2429ae70846dd3b977 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd726c2709d53a2429ae70846dd3b977 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fd726c2709d53a2429ae70846dd3b977, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fd726c2709d53a2429ae70846dd3b977->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fd726c2709d53a2429ae70846dd3b977, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fd726c2709d53a2429ae70846dd3b977,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_fd726c2709d53a2429ae70846dd3b977 == cache_frame_fd726c2709d53a2429ae70846dd3b977 )
    {
        Py_DECREF( frame_fd726c2709d53a2429ae70846dd3b977 );
    }
    cache_frame_fd726c2709d53a2429ae70846dd3b977 = NULL;

    assertFrameObject( frame_fd726c2709d53a2429ae70846dd3b977 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_16_cts );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_16_cts );
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


static PyObject *impl_serial$serialwin32$$$function_17_dsr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4afd10ab74596d840952abc9d0a1b560;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4afd10ab74596d840952abc9d0a1b560 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4afd10ab74596d840952abc9d0a1b560, codeobj_4afd10ab74596d840952abc9d0a1b560, module_serial$serialwin32, sizeof(void *) );
    frame_4afd10ab74596d840952abc9d0a1b560 = cache_frame_4afd10ab74596d840952abc9d0a1b560;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4afd10ab74596d840952abc9d0a1b560 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4afd10ab74596d840952abc9d0a1b560 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 402;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MS_DSR_ON );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_4afd10ab74596d840952abc9d0a1b560->m_frame.f_lineno = 402;
        tmp_right_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__GetCommModemStatus );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 402;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_return_value = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4afd10ab74596d840952abc9d0a1b560 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4afd10ab74596d840952abc9d0a1b560 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4afd10ab74596d840952abc9d0a1b560 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4afd10ab74596d840952abc9d0a1b560, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4afd10ab74596d840952abc9d0a1b560->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4afd10ab74596d840952abc9d0a1b560, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4afd10ab74596d840952abc9d0a1b560,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4afd10ab74596d840952abc9d0a1b560 == cache_frame_4afd10ab74596d840952abc9d0a1b560 )
    {
        Py_DECREF( frame_4afd10ab74596d840952abc9d0a1b560 );
    }
    cache_frame_4afd10ab74596d840952abc9d0a1b560 = NULL;

    assertFrameObject( frame_4afd10ab74596d840952abc9d0a1b560 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_17_dsr );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_17_dsr );
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


static PyObject *impl_serial$serialwin32$$$function_18_ri( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_2ac591b0bc2b1528f3194b292fbbc836;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2ac591b0bc2b1528f3194b292fbbc836 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2ac591b0bc2b1528f3194b292fbbc836, codeobj_2ac591b0bc2b1528f3194b292fbbc836, module_serial$serialwin32, sizeof(void *) );
    frame_2ac591b0bc2b1528f3194b292fbbc836 = cache_frame_2ac591b0bc2b1528f3194b292fbbc836;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2ac591b0bc2b1528f3194b292fbbc836 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2ac591b0bc2b1528f3194b292fbbc836 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MS_RING_ON );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_2ac591b0bc2b1528f3194b292fbbc836->m_frame.f_lineno = 407;
        tmp_right_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__GetCommModemStatus );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_return_value = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ac591b0bc2b1528f3194b292fbbc836 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ac591b0bc2b1528f3194b292fbbc836 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ac591b0bc2b1528f3194b292fbbc836 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2ac591b0bc2b1528f3194b292fbbc836, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2ac591b0bc2b1528f3194b292fbbc836->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2ac591b0bc2b1528f3194b292fbbc836, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2ac591b0bc2b1528f3194b292fbbc836,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_2ac591b0bc2b1528f3194b292fbbc836 == cache_frame_2ac591b0bc2b1528f3194b292fbbc836 )
    {
        Py_DECREF( frame_2ac591b0bc2b1528f3194b292fbbc836 );
    }
    cache_frame_2ac591b0bc2b1528f3194b292fbbc836 = NULL;

    assertFrameObject( frame_2ac591b0bc2b1528f3194b292fbbc836 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_18_ri );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_18_ri );
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


static PyObject *impl_serial$serialwin32$$$function_19_cd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_60a2975bedc6477581531f2aace85685;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_60a2975bedc6477581531f2aace85685 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_60a2975bedc6477581531f2aace85685, codeobj_60a2975bedc6477581531f2aace85685, module_serial$serialwin32, sizeof(void *) );
    frame_60a2975bedc6477581531f2aace85685 = cache_frame_60a2975bedc6477581531f2aace85685;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_60a2975bedc6477581531f2aace85685 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_60a2975bedc6477581531f2aace85685 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 412;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MS_RLSD_ON );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_60a2975bedc6477581531f2aace85685->m_frame.f_lineno = 412;
        tmp_right_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__GetCommModemStatus );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 412;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_return_value = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60a2975bedc6477581531f2aace85685 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_60a2975bedc6477581531f2aace85685 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60a2975bedc6477581531f2aace85685 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_60a2975bedc6477581531f2aace85685, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_60a2975bedc6477581531f2aace85685->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_60a2975bedc6477581531f2aace85685, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_60a2975bedc6477581531f2aace85685,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_60a2975bedc6477581531f2aace85685 == cache_frame_60a2975bedc6477581531f2aace85685 )
    {
        Py_DECREF( frame_60a2975bedc6477581531f2aace85685 );
    }
    cache_frame_60a2975bedc6477581531f2aace85685 = NULL;

    assertFrameObject( frame_60a2975bedc6477581531f2aace85685 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_19_cd );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_19_cd );
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


static PyObject *impl_serial$serialwin32$$$function_20_set_buffer_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_rx_size = python_pars[ 1 ];
    PyObject *par_tx_size = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_88610d20bf0ba1f0e8f2feae52addea8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_88610d20bf0ba1f0e8f2feae52addea8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_tx_size );
        tmp_compexpr_left_1 = par_tx_size;
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
            CHECK_OBJECT( par_rx_size );
            tmp_assign_source_1 = par_rx_size;
            {
                PyObject *old = par_tx_size;
                assert( old != NULL );
                par_tx_size = tmp_assign_source_1;
                Py_INCREF( par_tx_size );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_88610d20bf0ba1f0e8f2feae52addea8, codeobj_88610d20bf0ba1f0e8f2feae52addea8, module_serial$serialwin32, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_88610d20bf0ba1f0e8f2feae52addea8 = cache_frame_88610d20bf0ba1f0e8f2feae52addea8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_88610d20bf0ba1f0e8f2feae52addea8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_88610d20bf0ba1f0e8f2feae52addea8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SetupComm );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rx_size );
        tmp_args_element_name_2 = par_rx_size;
        CHECK_OBJECT( par_tx_size );
        tmp_args_element_name_3 = par_tx_size;
        frame_88610d20bf0ba1f0e8f2feae52addea8->m_frame.f_lineno = 423;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88610d20bf0ba1f0e8f2feae52addea8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88610d20bf0ba1f0e8f2feae52addea8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_88610d20bf0ba1f0e8f2feae52addea8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_88610d20bf0ba1f0e8f2feae52addea8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_88610d20bf0ba1f0e8f2feae52addea8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_88610d20bf0ba1f0e8f2feae52addea8,
        type_description_1,
        par_self,
        par_rx_size,
        par_tx_size
    );


    // Release cached frame.
    if ( frame_88610d20bf0ba1f0e8f2feae52addea8 == cache_frame_88610d20bf0ba1f0e8f2feae52addea8 )
    {
        Py_DECREF( frame_88610d20bf0ba1f0e8f2feae52addea8 );
    }
    cache_frame_88610d20bf0ba1f0e8f2feae52addea8 = NULL;

    assertFrameObject( frame_88610d20bf0ba1f0e8f2feae52addea8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_20_set_buffer_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_rx_size );
    Py_DECREF( par_rx_size );
    par_rx_size = NULL;

    CHECK_OBJECT( (PyObject *)par_tx_size );
    Py_DECREF( par_tx_size );
    par_tx_size = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rx_size );
    Py_DECREF( par_rx_size );
    par_rx_size = NULL;

    CHECK_OBJECT( (PyObject *)par_tx_size );
    Py_DECREF( par_tx_size );
    par_tx_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_20_set_buffer_size );
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


static PyObject *impl_serial$serialwin32$$$function_21_set_output_flow_control( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_enable = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_344991d57e6f6bcc99701e91a398e7a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_344991d57e6f6bcc99701e91a398e7a0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_344991d57e6f6bcc99701e91a398e7a0, codeobj_344991d57e6f6bcc99701e91a398e7a0, module_serial$serialwin32, sizeof(void *)+sizeof(void *) );
    frame_344991d57e6f6bcc99701e91a398e7a0 = cache_frame_344991d57e6f6bcc99701e91a398e7a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_344991d57e6f6bcc99701e91a398e7a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_344991d57e6f6bcc99701e91a398e7a0 ) == 2 ); // Frame stack

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


            exception_lineno = 432;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

                exception_lineno = 433;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 433;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_enable );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_enable );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 435;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EscapeCommFunction );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 435;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 435;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 435;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_3;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SETXON );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 435;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_344991d57e6f6bcc99701e91a398e7a0->m_frame.f_lineno = 435;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 435;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 437;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_4;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_EscapeCommFunction );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 437;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port_handle );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 437;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 437;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_5;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_SETXOFF );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 437;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_344991d57e6f6bcc99701e91a398e7a0->m_frame.f_lineno = 437;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 437;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_344991d57e6f6bcc99701e91a398e7a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_344991d57e6f6bcc99701e91a398e7a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_344991d57e6f6bcc99701e91a398e7a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_344991d57e6f6bcc99701e91a398e7a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_344991d57e6f6bcc99701e91a398e7a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_344991d57e6f6bcc99701e91a398e7a0,
        type_description_1,
        par_self,
        par_enable
    );


    // Release cached frame.
    if ( frame_344991d57e6f6bcc99701e91a398e7a0 == cache_frame_344991d57e6f6bcc99701e91a398e7a0 )
    {
        Py_DECREF( frame_344991d57e6f6bcc99701e91a398e7a0 );
    }
    cache_frame_344991d57e6f6bcc99701e91a398e7a0 = NULL;

    assertFrameObject( frame_344991d57e6f6bcc99701e91a398e7a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_21_set_output_flow_control );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_enable );
    Py_DECREF( par_enable );
    par_enable = NULL;

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

    CHECK_OBJECT( (PyObject *)par_enable );
    Py_DECREF( par_enable );
    par_enable = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_21_set_output_flow_control );
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


static PyObject *impl_serial$serialwin32$$$function_22_out_waiting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_flags = NULL;
    PyObject *var_comstat = NULL;
    struct Nuitka_FrameObject *frame_bf8a38500ac8b812b607ebc9b88c52e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bf8a38500ac8b812b607ebc9b88c52e7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bf8a38500ac8b812b607ebc9b88c52e7, codeobj_bf8a38500ac8b812b607ebc9b88c52e7, module_serial$serialwin32, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bf8a38500ac8b812b607ebc9b88c52e7 = cache_frame_bf8a38500ac8b812b607ebc9b88c52e7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bf8a38500ac8b812b607ebc9b88c52e7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bf8a38500ac8b812b607ebc9b88c52e7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 442;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_bf8a38500ac8b812b607ebc9b88c52e7->m_frame.f_lineno = 442;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DWORD );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_flags == NULL );
        var_flags = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 443;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        frame_bf8a38500ac8b812b607ebc9b88c52e7->m_frame.f_lineno = 443;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_COMSTAT );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_comstat == NULL );
        var_comstat = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 444;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ClearCommError );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 444;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 444;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        CHECK_OBJECT( var_flags );
        tmp_args_element_name_3 = var_flags;
        frame_bf8a38500ac8b812b607ebc9b88c52e7->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 444;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 444;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        CHECK_OBJECT( var_comstat );
        tmp_args_element_name_5 = var_comstat;
        frame_bf8a38500ac8b812b607ebc9b88c52e7->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 444;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_bf8a38500ac8b812b607ebc9b88c52e7->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_4 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialException" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 445;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_6;
            tmp_source_name_3 = const_str_digest_2ed77bc529ac5233e189e9c63149ac9b;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
            assert( !(tmp_called_name_3 == NULL) );
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 445;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_7;
            frame_bf8a38500ac8b812b607ebc9b88c52e7->m_frame.f_lineno = 445;
            tmp_args_element_name_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_WinError );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 445;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_bf8a38500ac8b812b607ebc9b88c52e7->m_frame.f_lineno = 445;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 445;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_bf8a38500ac8b812b607ebc9b88c52e7->m_frame.f_lineno = 445;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 445;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 445;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_comstat );
        tmp_source_name_4 = var_comstat;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_cbOutQue );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bf8a38500ac8b812b607ebc9b88c52e7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bf8a38500ac8b812b607ebc9b88c52e7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bf8a38500ac8b812b607ebc9b88c52e7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bf8a38500ac8b812b607ebc9b88c52e7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bf8a38500ac8b812b607ebc9b88c52e7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bf8a38500ac8b812b607ebc9b88c52e7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bf8a38500ac8b812b607ebc9b88c52e7,
        type_description_1,
        par_self,
        var_flags,
        var_comstat
    );


    // Release cached frame.
    if ( frame_bf8a38500ac8b812b607ebc9b88c52e7 == cache_frame_bf8a38500ac8b812b607ebc9b88c52e7 )
    {
        Py_DECREF( frame_bf8a38500ac8b812b607ebc9b88c52e7 );
    }
    cache_frame_bf8a38500ac8b812b607ebc9b88c52e7 = NULL;

    assertFrameObject( frame_bf8a38500ac8b812b607ebc9b88c52e7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_22_out_waiting );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_flags );
    Py_DECREF( var_flags );
    var_flags = NULL;

    CHECK_OBJECT( (PyObject *)var_comstat );
    Py_DECREF( var_comstat );
    var_comstat = NULL;

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

    Py_XDECREF( var_flags );
    var_flags = NULL;

    Py_XDECREF( var_comstat );
    var_comstat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_22_out_waiting );
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


static PyObject *impl_serial$serialwin32$$$function_23__cancel_overlapped_io( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_overlapped = python_pars[ 1 ];
    PyObject *var_rc = NULL;
    PyObject *var_err = NULL;
    struct Nuitka_FrameObject *frame_016e0bfbcdfbd932f196d16b0ba7ab9f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_016e0bfbcdfbd932f196d16b0ba7ab9f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_016e0bfbcdfbd932f196d16b0ba7ab9f, codeobj_016e0bfbcdfbd932f196d16b0ba7ab9f, module_serial$serialwin32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_016e0bfbcdfbd932f196d16b0ba7ab9f = cache_frame_016e0bfbcdfbd932f196d16b0ba7ab9f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_016e0bfbcdfbd932f196d16b0ba7ab9f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_016e0bfbcdfbd932f196d16b0ba7ab9f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 451;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_016e0bfbcdfbd932f196d16b0ba7ab9f->m_frame.f_lineno = 451;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DWORD );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_rc == NULL );
        var_rc = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 452;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_GetOverlappedResult );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 453;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 454;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_overlapped );
        tmp_args_element_name_3 = par_overlapped;
        frame_016e0bfbcdfbd932f196d16b0ba7ab9f->m_frame.f_lineno = 454;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 454;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 455;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        CHECK_OBJECT( var_rc );
        tmp_args_element_name_5 = var_rc;
        frame_016e0bfbcdfbd932f196d16b0ba7ab9f->m_frame.f_lineno = 455;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 455;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = Py_False;
        frame_016e0bfbcdfbd932f196d16b0ba7ab9f->m_frame.f_lineno = 452;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_4, tmp_args_element_name_6 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_err == NULL );
        var_err = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_7;
        CHECK_OBJECT( var_err );
        tmp_operand_name_1 = var_err;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooo";
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
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 457;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        frame_016e0bfbcdfbd932f196d16b0ba7ab9f->m_frame.f_lineno = 457;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_GetLastError );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 457;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_6;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ERROR_IO_PENDING );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 457;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            Py_DECREF( tmp_compexpr_right_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 457;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_7;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ERROR_IO_INCOMPLETE );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );
            Py_DECREF( tmp_compexpr_right_1 );

            exception_lineno = 457;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 1, tmp_tuple_element_1 );
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 459;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_8;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_CancelIoEx );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 459;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port_handle );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 459;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_overlapped );
            tmp_args_element_name_8 = par_overlapped;
            frame_016e0bfbcdfbd932f196d16b0ba7ab9f->m_frame.f_lineno = 459;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 459;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_016e0bfbcdfbd932f196d16b0ba7ab9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_016e0bfbcdfbd932f196d16b0ba7ab9f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_016e0bfbcdfbd932f196d16b0ba7ab9f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_016e0bfbcdfbd932f196d16b0ba7ab9f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_016e0bfbcdfbd932f196d16b0ba7ab9f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_016e0bfbcdfbd932f196d16b0ba7ab9f,
        type_description_1,
        par_self,
        par_overlapped,
        var_rc,
        var_err
    );


    // Release cached frame.
    if ( frame_016e0bfbcdfbd932f196d16b0ba7ab9f == cache_frame_016e0bfbcdfbd932f196d16b0ba7ab9f )
    {
        Py_DECREF( frame_016e0bfbcdfbd932f196d16b0ba7ab9f );
    }
    cache_frame_016e0bfbcdfbd932f196d16b0ba7ab9f = NULL;

    assertFrameObject( frame_016e0bfbcdfbd932f196d16b0ba7ab9f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_23__cancel_overlapped_io );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_overlapped );
    Py_DECREF( par_overlapped );
    par_overlapped = NULL;

    CHECK_OBJECT( (PyObject *)var_rc );
    Py_DECREF( var_rc );
    var_rc = NULL;

    CHECK_OBJECT( (PyObject *)var_err );
    Py_DECREF( var_err );
    var_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_overlapped );
    Py_DECREF( par_overlapped );
    par_overlapped = NULL;

    Py_XDECREF( var_rc );
    var_rc = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_23__cancel_overlapped_io );
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


static PyObject *impl_serial$serialwin32$$$function_24_cancel_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_377f3fb1a0de88b30a767a18b9263c93;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_377f3fb1a0de88b30a767a18b9263c93 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_377f3fb1a0de88b30a767a18b9263c93, codeobj_377f3fb1a0de88b30a767a18b9263c93, module_serial$serialwin32, sizeof(void *) );
    frame_377f3fb1a0de88b30a767a18b9263c93 = cache_frame_377f3fb1a0de88b30a767a18b9263c93;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_377f3fb1a0de88b30a767a18b9263c93 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_377f3fb1a0de88b30a767a18b9263c93 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__cancel_overlapped_io );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__overlapped_read );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 463;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_377f3fb1a0de88b30a767a18b9263c93->m_frame.f_lineno = 463;
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


            exception_lineno = 463;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_377f3fb1a0de88b30a767a18b9263c93 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_377f3fb1a0de88b30a767a18b9263c93 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_377f3fb1a0de88b30a767a18b9263c93, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_377f3fb1a0de88b30a767a18b9263c93->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_377f3fb1a0de88b30a767a18b9263c93, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_377f3fb1a0de88b30a767a18b9263c93,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_377f3fb1a0de88b30a767a18b9263c93 == cache_frame_377f3fb1a0de88b30a767a18b9263c93 )
    {
        Py_DECREF( frame_377f3fb1a0de88b30a767a18b9263c93 );
    }
    cache_frame_377f3fb1a0de88b30a767a18b9263c93 = NULL;

    assertFrameObject( frame_377f3fb1a0de88b30a767a18b9263c93 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_24_cancel_read );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_24_cancel_read );
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


static PyObject *impl_serial$serialwin32$$$function_25_cancel_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c0aa60bec2b41caa8c4da772705bff0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c0aa60bec2b41caa8c4da772705bff0a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c0aa60bec2b41caa8c4da772705bff0a, codeobj_c0aa60bec2b41caa8c4da772705bff0a, module_serial$serialwin32, sizeof(void *) );
    frame_c0aa60bec2b41caa8c4da772705bff0a = cache_frame_c0aa60bec2b41caa8c4da772705bff0a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c0aa60bec2b41caa8c4da772705bff0a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c0aa60bec2b41caa8c4da772705bff0a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__cancel_overlapped_io );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 467;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__overlapped_write );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 467;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c0aa60bec2b41caa8c4da772705bff0a->m_frame.f_lineno = 467;
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


            exception_lineno = 467;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0aa60bec2b41caa8c4da772705bff0a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0aa60bec2b41caa8c4da772705bff0a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c0aa60bec2b41caa8c4da772705bff0a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c0aa60bec2b41caa8c4da772705bff0a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c0aa60bec2b41caa8c4da772705bff0a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c0aa60bec2b41caa8c4da772705bff0a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c0aa60bec2b41caa8c4da772705bff0a == cache_frame_c0aa60bec2b41caa8c4da772705bff0a )
    {
        Py_DECREF( frame_c0aa60bec2b41caa8c4da772705bff0a );
    }
    cache_frame_c0aa60bec2b41caa8c4da772705bff0a = NULL;

    assertFrameObject( frame_c0aa60bec2b41caa8c4da772705bff0a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_25_cancel_write );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_25_cancel_write );
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


static PyObject *impl_serial$serialwin32$$$function_26_exclusive( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_exclusive = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_3fd5ffbc9d4d0b862b95b342b0922636;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3fd5ffbc9d4d0b862b95b342b0922636 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3fd5ffbc9d4d0b862b95b342b0922636, codeobj_3fd5ffbc9d4d0b862b95b342b0922636, module_serial$serialwin32, sizeof(void *)+sizeof(void *) );
    frame_3fd5ffbc9d4d0b862b95b342b0922636 = cache_frame_3fd5ffbc9d4d0b862b95b342b0922636;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3fd5ffbc9d4d0b862b95b342b0922636 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3fd5ffbc9d4d0b862b95b342b0922636 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_exclusive );
        tmp_compexpr_left_1 = par_exclusive;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_exclusive );
        tmp_operand_name_1 = par_exclusive;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "oo";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_instance_1 = const_str_digest_965cfe85759abc1c82262e5a9b7bf0b5;
            CHECK_OBJECT( par_exclusive );
            tmp_args_element_name_1 = par_exclusive;
            frame_3fd5ffbc9d4d0b862b95b342b0922636->m_frame.f_lineno = 473;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_make_exception_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
            }

            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 473;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_3fd5ffbc9d4d0b862b95b342b0922636->m_frame.f_lineno = 473;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 473;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serial" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 475;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SerialBase );
            if ( tmp_source_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 475;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exclusive );
            Py_DECREF( tmp_source_name_1 );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 475;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_args_element_name_2 = par_self;
            CHECK_OBJECT( par_exclusive );
            tmp_args_element_name_3 = par_exclusive;
            frame_3fd5ffbc9d4d0b862b95b342b0922636->m_frame.f_lineno = 475;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain___set__, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 475;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fd5ffbc9d4d0b862b95b342b0922636 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fd5ffbc9d4d0b862b95b342b0922636 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3fd5ffbc9d4d0b862b95b342b0922636, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3fd5ffbc9d4d0b862b95b342b0922636->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3fd5ffbc9d4d0b862b95b342b0922636, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3fd5ffbc9d4d0b862b95b342b0922636,
        type_description_1,
        par_self,
        par_exclusive
    );


    // Release cached frame.
    if ( frame_3fd5ffbc9d4d0b862b95b342b0922636 == cache_frame_3fd5ffbc9d4d0b862b95b342b0922636 )
    {
        Py_DECREF( frame_3fd5ffbc9d4d0b862b95b342b0922636 );
    }
    cache_frame_3fd5ffbc9d4d0b862b95b342b0922636 = NULL;

    assertFrameObject( frame_3fd5ffbc9d4d0b862b95b342b0922636 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_26_exclusive );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_exclusive );
    Py_DECREF( par_exclusive );
    par_exclusive = NULL;

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

    CHECK_OBJECT( (PyObject *)par_exclusive );
    Py_DECREF( par_exclusive );
    par_exclusive = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$function_26_exclusive );
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



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_10_reset_input_buffer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_10_reset_input_buffer,
        const_str_plain_reset_input_buffer,
#if PYTHON_VERSION >= 300
        const_str_digest_0081767d335d9fb963b22b42d5219f43,
#endif
        codeobj_37cfa45952b2aeb54b44bdc42cab7d46,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_bd2e98b142ff21c9f389c674d6946c9a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_11_reset_output_buffer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_11_reset_output_buffer,
        const_str_plain_reset_output_buffer,
#if PYTHON_VERSION >= 300
        const_str_digest_ad4d3667ad4be7949c20c65bd946d9a1,
#endif
        codeobj_7c19251793a1a411bd2b9f81574177da,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_57027c3185c735e629ff3e28a5a985c8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_12__update_break_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_12__update_break_state,
        const_str_plain__update_break_state,
#if PYTHON_VERSION >= 300
        const_str_digest_b40497f26645e3ebadb6514ab8d446ba,
#endif
        codeobj_a82017b361da4214425c8f5706244003,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_09388aafcb6adb40da642c8223c8e7c5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_13__update_rts_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_13__update_rts_state,
        const_str_plain__update_rts_state,
#if PYTHON_VERSION >= 300
        const_str_digest_1e77c865d9cc3714cae3a6bd34503ca9,
#endif
        codeobj_9f4ca4a841a7e91c976ae4c1a908b04e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_1d3403f47e70d0d3c7366e99c0db7fa8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_14__update_dtr_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_14__update_dtr_state,
        const_str_plain__update_dtr_state,
#if PYTHON_VERSION >= 300
        const_str_digest_55bd609d83337e3e53f56f56fb6e69c2,
#endif
        codeobj_97fe77b53e79e7018206dd5c9fbd3c64,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_2b96e25c8d393fdf065d358454fdf25c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_15__GetCommModemStatus(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_15__GetCommModemStatus,
        const_str_plain__GetCommModemStatus,
#if PYTHON_VERSION >= 300
        const_str_digest_8f9d795f9bfd7d9e989c9810e38e4f0e,
#endif
        codeobj_7ef9d8f1379f6b1554db25a0f41c3797,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_16_cts(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_16_cts,
        const_str_plain_cts,
#if PYTHON_VERSION >= 300
        const_str_digest_444a195d697d77e6dc3d797b3cd6086d,
#endif
        codeobj_fd726c2709d53a2429ae70846dd3b977,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_06425a8e1b9d5eab562978eb6eacf777,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_17_dsr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_17_dsr,
        const_str_plain_dsr,
#if PYTHON_VERSION >= 300
        const_str_digest_c425e1720ed7efc14d8a103f222711b2,
#endif
        codeobj_4afd10ab74596d840952abc9d0a1b560,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_54cde0cd7a92974ff918f0defbd1eeb9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_18_ri(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_18_ri,
        const_str_plain_ri,
#if PYTHON_VERSION >= 300
        const_str_digest_99bcd2cd4b1caacf3cac0b2495622ee2,
#endif
        codeobj_2ac591b0bc2b1528f3194b292fbbc836,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_c987d57c872daa303d57e57028663dbb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_19_cd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_19_cd,
        const_str_plain_cd,
#if PYTHON_VERSION >= 300
        const_str_digest_9777a2e7909bbc36bb577eeb2ac8826b,
#endif
        codeobj_60a2975bedc6477581531f2aace85685,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_faa07c45c026cd5370bf39ce65b9f2d8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_0d7fab97f93470129456c07fbd1abc06,
#endif
        codeobj_3ce7408269906a5750d418d47a354fee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_20_set_buffer_size( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_20_set_buffer_size,
        const_str_plain_set_buffer_size,
#if PYTHON_VERSION >= 300
        const_str_digest_25e06e7ac2b4b3e4c9c85aa404490cdf,
#endif
        codeobj_88610d20bf0ba1f0e8f2feae52addea8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_b61fa0e88bbe4976ba0c3486b94e2ad6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_21_set_output_flow_control( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_21_set_output_flow_control,
        const_str_plain_set_output_flow_control,
#if PYTHON_VERSION >= 300
        const_str_digest_402b4bc3f48df15ec03d142e1f2f4f27,
#endif
        codeobj_344991d57e6f6bcc99701e91a398e7a0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_8ab7d280f3c27847f45a238edf5bac9d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_22_out_waiting(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_22_out_waiting,
        const_str_plain_out_waiting,
#if PYTHON_VERSION >= 300
        const_str_digest_0cbcf6a59250460bff6164d640b77740,
#endif
        codeobj_bf8a38500ac8b812b607ebc9b88c52e7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_5ed58a77f20ffb579393ed23bc7ec71b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_23__cancel_overlapped_io(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_23__cancel_overlapped_io,
        const_str_plain__cancel_overlapped_io,
#if PYTHON_VERSION >= 300
        const_str_digest_62c72e1ca1e4896fc419afc8435990bd,
#endif
        codeobj_016e0bfbcdfbd932f196d16b0ba7ab9f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_8589c768c45cb2df2310b69a6dd47c26,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_24_cancel_read(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_24_cancel_read,
        const_str_plain_cancel_read,
#if PYTHON_VERSION >= 300
        const_str_digest_b3e430ebe6d78da9a44d2274b4726df4,
#endif
        codeobj_377f3fb1a0de88b30a767a18b9263c93,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_8589c768c45cb2df2310b69a6dd47c26,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_25_cancel_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_25_cancel_write,
        const_str_plain_cancel_write,
#if PYTHON_VERSION >= 300
        const_str_digest_9f8efa138c5aec36629370c6ae640296,
#endif
        codeobj_c0aa60bec2b41caa8c4da772705bff0a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_686727e74bc29d6f749822c8572b6c6c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_26_exclusive(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_26_exclusive,
        const_str_plain_exclusive,
#if PYTHON_VERSION >= 300
        const_str_digest_6547a8beb62647247f4e85bd93aba976,
#endif
        codeobj_3fd5ffbc9d4d0b862b95b342b0922636,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_cee0e65b93fa2a88bd408284fcdf4582,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_2_open(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_2_open,
        const_str_plain_open,
#if PYTHON_VERSION >= 300
        const_str_digest_3c35695160658dede20e26ab5c064c8b,
#endif
        codeobj_c6aa15f556139c2992ba1a0bd20e5046,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_4b91cca6339a9a892cf0e30d6bd1bdfc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_3__reconfigure_port(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_3__reconfigure_port,
        const_str_plain__reconfigure_port,
#if PYTHON_VERSION >= 300
        const_str_digest_4333ea5a1e0d9523f79855910d1cf6f7,
#endif
        codeobj_f274a00e8be9dc19dd60a86c90eae63e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_47be6feae340d11ceea1b2be1116c946,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_4__close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_4__close,
        const_str_plain__close,
#if PYTHON_VERSION >= 300
        const_str_digest_b95f5838b964efd1a6bb07dfdf0292c8,
#endif
        codeobj_864cf1ce98ec451165494723b3154290,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_9154b8cf6e65b3c901c35e8e1d5d5876,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_5_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_5_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_b7525636ddb73d1aea5ab60e59f79aaf,
#endif
        codeobj_4a475f5bb51ee6489546dd3144258763,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_ca3087f1fed5e9b894c48e0dbbd2f218,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_6_in_waiting(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_6_in_waiting,
        const_str_plain_in_waiting,
#if PYTHON_VERSION >= 300
        const_str_digest_84335857b51bb81565c03cce4760dbdb,
#endif
        codeobj_2ec3eddef8fa34c30995ba488dda64f0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_67e30ad9cc029aa9b34457de3a368897,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_7_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_7_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 300
        const_str_digest_753bea82ba0eb08b3c188d4785781d6a,
#endif
        codeobj_283b61f162894bfd87d6935dae5c99dd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_67381b97568fd04864d7225afb09d3b9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_8_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_8_write,
        const_str_plain_write,
#if PYTHON_VERSION >= 300
        const_str_digest_872307698c9c04ef72f670bc6f1882ef,
#endif
        codeobj_9ad44a1cffc6d621b0cd0f618dce9d08,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_094a5755decb0ff88251d419e9b9deb6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$function_9_flush(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$function_9_flush,
        const_str_plain_flush,
#if PYTHON_VERSION >= 300
        const_str_digest_fb47bff99f738a0e4e65a023f1212ef3,
#endif
        codeobj_31b398c14517bc8b84382c753b624549,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$serialwin32,
        const_str_digest_66c5c36b8185e52d7e7b19bd4f1801a9,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$serialwin32 =
{
    PyModuleDef_HEAD_INIT,
    "serial.serialwin32",
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

MOD_INIT_DECL( serial$serialwin32 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$serialwin32 );
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
    puts("serial.serialwin32: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.serialwin32: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.serialwin32: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserial$serialwin32" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$serialwin32 = Py_InitModule4(
        "serial.serialwin32",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_serial$serialwin32 = PyModule_Create( &mdef_serial$serialwin32 );
#endif

    moduledict_serial$serialwin32 = MODULE_DICT( module_serial$serialwin32 );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_serial$serialwin32,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_serial$serialwin32,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_serial$serialwin32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_serial$serialwin32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_serial$serialwin32 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_33be1aa9452ea1a35db7fc513fc42137, module_serial$serialwin32 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_8fb25b896cd5349c07bd5bb429481d45;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_serial$serialwin32_21 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_f55beff90ee1ff4b3f3ce2929f11cef9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f55beff90ee1ff4b3f3ce2929f11cef9_2 = NULL;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_8fb25b896cd5349c07bd5bb429481d45 = MAKE_MODULE_FRAME( codeobj_8fb25b896cd5349c07bd5bb429481d45, module_serial$serialwin32 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8fb25b896cd5349c07bd5bb429481d45 );
    assert( Py_REFCNT( frame_8fb25b896cd5349c07bd5bb429481d45 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_ctypes;
        tmp_globals_name_1 = (PyObject *)moduledict_serial$serialwin32;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_8fb25b896cd5349c07bd5bb429481d45->m_frame.f_lineno = 13;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_time;
        tmp_globals_name_2 = (PyObject *)moduledict_serial$serialwin32;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_8fb25b896cd5349c07bd5bb429481d45->m_frame.f_lineno = 14;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_serial;
        tmp_globals_name_3 = (PyObject *)moduledict_serial$serialwin32;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_win32_tuple;
        tmp_level_name_3 = const_int_0;
        frame_8fb25b896cd5349c07bd5bb429481d45->m_frame.f_lineno = 15;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_win32 );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_serial;
        tmp_globals_name_4 = (PyObject *)moduledict_serial$serialwin32;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_8fb25b896cd5349c07bd5bb429481d45->m_frame.f_lineno = 17;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
        tmp_globals_name_5 = (PyObject *)moduledict_serial$serialwin32;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple;
        tmp_level_name_5 = const_int_0;
        frame_8fb25b896cd5349c07bd5bb429481d45->m_frame.f_lineno = 18;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_SerialBase );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialBase, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_SerialException );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_to_bytes );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_to_bytes, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_5 = tmp_import_from_1__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_portNotOpenError );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_6 = tmp_import_from_1__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_writeTimeoutError );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_writeTimeoutError, tmp_assign_source_13 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialBase );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialBase );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SerialBase" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_14 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_14, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
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


            exception_lineno = 21;

            goto try_except_handler_2;
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


            exception_lineno = 21;

            goto try_except_handler_2;
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


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_16 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
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


            exception_lineno = 21;

            goto try_except_handler_2;
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


            exception_lineno = 21;

            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;

                goto try_except_handler_2;
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
            frame_8fb25b896cd5349c07bd5bb429481d45->m_frame.f_lineno = 21;
            tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_17;
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


                exception_lineno = 21;

                goto try_except_handler_2;
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


                    exception_lineno = 21;

                    goto try_except_handler_2;
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

                    exception_lineno = 21;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 21;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 21;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_18;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_serial$serialwin32_21 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_33be1aa9452ea1a35db7fc513fc42137;
        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_2df25d99a230c1f3e19fb3a8b6251dff;
        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_Serial;
        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_f55beff90ee1ff4b3f3ce2929f11cef9_2, codeobj_f55beff90ee1ff4b3f3ce2929f11cef9, module_serial$serialwin32, sizeof(void *) );
        frame_f55beff90ee1ff4b3f3ce2929f11cef9_2 = cache_frame_f55beff90ee1ff4b3f3ce2929f11cef9_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_f55beff90ee1ff4b3f3ce2929f11cef9_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_f55beff90ee1ff4b3f3ce2929f11cef9_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_tuple_5aee5ca7adb77075f0cc1cb4927b0a43_tuple;
        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_BAUDRATES, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_2_open(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_open, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_3__reconfigure_port(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain__reconfigure_port, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_4__close(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain__close, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_5_close(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_close, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            tmp_res = MAPPING_HAS_ITEM( locals_serial$serialwin32_21, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
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
            tmp_called_name_2 = PyObject_GetItem( locals_serial$serialwin32_21, const_str_plain_property );

            if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_serial$serialwin32$$$function_6_in_waiting(  );



            frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame.f_lineno = 251;
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


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_name_3 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_2 = MAKE_FUNCTION_serial$serialwin32$$$function_6_in_waiting(  );



            frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame.f_lineno = 251;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_in_waiting, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_int_pos_1_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_7_read( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_read, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 260;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_8_write(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_write, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_9_flush(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_flush, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_10_reset_input_buffer(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_reset_input_buffer, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_11_reset_output_buffer(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_reset_output_buffer, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_12__update_break_state(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain__update_break_state, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_13__update_rts_state(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain__update_rts_state, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_14__update_dtr_state(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain__update_dtr_state, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_15__GetCommModemStatus(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain__GetCommModemStatus, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_4;
            tmp_res = MAPPING_HAS_ITEM( locals_serial$serialwin32_21, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 394;
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
            tmp_called_name_4 = PyObject_GetItem( locals_serial$serialwin32_21, const_str_plain_property );

            if ( tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 394;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 394;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_3 = MAKE_FUNCTION_serial$serialwin32$$$function_16_cts(  );



            frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame.f_lineno = 394;
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


                exception_lineno = 394;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_name_5 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_4 = MAKE_FUNCTION_serial$serialwin32$$$function_16_cts(  );



            frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame.f_lineno = 394;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 394;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_cts, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 394;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_6;
            tmp_res = MAPPING_HAS_ITEM( locals_serial$serialwin32_21, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 399;
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
            tmp_called_name_6 = PyObject_GetItem( locals_serial$serialwin32_21, const_str_plain_property );

            if ( tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 399;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 399;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_5 = MAKE_FUNCTION_serial$serialwin32$$$function_17_dsr(  );



            frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame.f_lineno = 399;
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


                exception_lineno = 399;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_name_7 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_6 = MAKE_FUNCTION_serial$serialwin32$$$function_17_dsr(  );



            frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame.f_lineno = 399;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 399;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_dsr, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 399;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_8;
            tmp_res = MAPPING_HAS_ITEM( locals_serial$serialwin32_21, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;
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
            tmp_called_name_8 = PyObject_GetItem( locals_serial$serialwin32_21, const_str_plain_property );

            if ( tmp_called_name_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 404;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_7 = MAKE_FUNCTION_serial$serialwin32$$$function_18_ri(  );



            frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame.f_lineno = 404;
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


                exception_lineno = 404;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_name_9 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_8 = MAKE_FUNCTION_serial$serialwin32$$$function_18_ri(  );



            frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame.f_lineno = 404;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_ri, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_10;
            tmp_res = MAPPING_HAS_ITEM( locals_serial$serialwin32_21, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
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
            tmp_called_name_10 = PyObject_GetItem( locals_serial$serialwin32_21, const_str_plain_property );

            if ( tmp_called_name_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 409;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_9 = MAKE_FUNCTION_serial$serialwin32$$$function_19_cd(  );



            frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame.f_lineno = 409;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_name_11 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_10 = MAKE_FUNCTION_serial$serialwin32$$$function_19_cd(  );



            frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame.f_lineno = 409;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_cd, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_int_pos_4096_none_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_20_set_buffer_size( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_set_buffer_size, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 416;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_true_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_21_set_output_flow_control( tmp_defaults_3 );



            tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_set_output_flow_control, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 425;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_called_name_13;
            PyObject *tmp_args_element_name_12;
            tmp_res = MAPPING_HAS_ITEM( locals_serial$serialwin32_21, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_7;
            }
            else
            {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_name_12 = PyObject_GetItem( locals_serial$serialwin32_21, const_str_plain_property );

            if ( tmp_called_name_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 439;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_11 = MAKE_FUNCTION_serial$serialwin32$$$function_22_out_waiting(  );



            frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame.f_lineno = 439;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_name_13 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_12 = MAKE_FUNCTION_serial$serialwin32$$$function_22_out_waiting(  );



            frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame.f_lineno = 439;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_out_waiting, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_23__cancel_overlapped_io(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain__cancel_overlapped_io, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_24_cancel_read(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_cancel_read, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$serialwin32$$$function_25_cancel_write(  );



        tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_cancel_write, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 465;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_13;
            tmp_source_name_5 = PyObject_GetItem( locals_serial$serialwin32_21, const_str_plain_SerialBase );

            if ( tmp_source_name_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialBase );

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

                    exception_lineno = 469;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_5 = tmp_mvar_value_4;
                Py_INCREF( tmp_source_name_5 );
                }
            }

            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_exclusive );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_13 = MAKE_FUNCTION_serial$serialwin32$$$function_26_exclusive(  );



            frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame.f_lineno = 469;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_setter, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_serial$serialwin32_21, const_str_plain_exclusive, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f55beff90ee1ff4b3f3ce2929f11cef9_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f55beff90ee1ff4b3f3ce2929f11cef9_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_f55beff90ee1ff4b3f3ce2929f11cef9_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_f55beff90ee1ff4b3f3ce2929f11cef9_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_f55beff90ee1ff4b3f3ce2929f11cef9_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_f55beff90ee1ff4b3f3ce2929f11cef9_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_f55beff90ee1ff4b3f3ce2929f11cef9_2 == cache_frame_f55beff90ee1ff4b3f3ce2929f11cef9_2 )
        {
            Py_DECREF( frame_f55beff90ee1ff4b3f3ce2929f11cef9_2 );
        }
        cache_frame_f55beff90ee1ff4b3f3ce2929f11cef9_2 = NULL;

        assertFrameObject( frame_f55beff90ee1ff4b3f3ce2929f11cef9_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_14 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_Serial;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_serial$serialwin32_21;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_8fb25b896cd5349c07bd5bb429481d45->m_frame.f_lineno = 21;
            tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_19 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_19 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$serialwin32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_serial$serialwin32_21 );
        locals_serial$serialwin32_21 = NULL;
        goto try_return_handler_3;
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

        Py_DECREF( locals_serial$serialwin32_21 );
        locals_serial$serialwin32_21 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$serialwin32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( serial$serialwin32 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 21;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_Serial, tmp_assign_source_19 );
    }
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fb25b896cd5349c07bd5bb429481d45 );
#endif
    popFrameStack();

    assertFrameObject( frame_8fb25b896cd5349c07bd5bb429481d45 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fb25b896cd5349c07bd5bb429481d45 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8fb25b896cd5349c07bd5bb429481d45, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8fb25b896cd5349c07bd5bb429481d45->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8fb25b896cd5349c07bd5bb429481d45, exception_lineno );
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
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_serial$serialwin32 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
