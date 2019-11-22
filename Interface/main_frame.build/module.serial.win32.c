/* Generated code for Python module 'serial.win32'
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

/* The "_module_serial$win32" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial$win32;
PyDictObject *moduledict_serial$win32;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_INVALID_HANDLE_VALUE;
extern PyObject *const_str_plain_fAbortOnError;
extern PyObject *const_str_plain_fOutxDsrFlow;
extern PyObject *const_str_plain_RTS_CONTROL_ENABLE;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_GENERIC_WRITE;
static PyObject *const_str_plain_wReserved1;
extern PyObject *const_str_plain_ONE5STOPBITS;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_SETXOFF;
static PyObject *const_str_plain_CreateFileW;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_ClearCommError;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_WriteTotalTimeoutMultiplier;
extern PyObject *const_str_plain_ReadFile;
extern PyObject *const_str_plain_EVENPARITY;
extern PyObject *const_str_plain_DTR_CONTROL_DISABLE;
extern PyObject *const_str_plain_fParity;
static PyObject *const_list_5fe71ecb740c0898f445980823e1ece2_list;
static PyObject *const_str_digest_ef6c75fe931feda8fc6cf88261d1ebc8;
extern PyObject *const_str_plain_BOOL;
extern PyObject *const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
static PyObject *const_tuple_str_plain_HANDLE_tuple;
extern PyObject *const_str_plain_COMMTIMEOUTS;
extern PyObject *const_str_plain_PURGE_TXABORT;
static PyObject *const_int_pos_2048;
extern PyObject *const_str_plain_CreateFile;
extern PyObject *const_str_plain_ClearCommBreak;
static PyObject *const_str_digest_faff1e0ec4973278ae89121346cdf7ba;
extern PyObject *const_int_neg_1;
static PyObject *const_tuple_str_plain_kernel32_tuple;
extern PyObject *const_int_pos_128;
extern PyObject *const_str_plain_fOutX;
static PyObject *const_str_plain_Pointer;
extern PyObject *const_int_pos_17;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain__fields_;
extern PyObject *const_str_plain_PURGE_TXCLEAR;
static PyObject *const_str_plain_nLength;
extern PyObject *const_int_pos_25;
extern PyObject *const_int_pos_512;
static PyObject *const_str_plain_EV_RX80FULL;
static PyObject *const_str_plain__SECURITY_ATTRIBUTES;
extern PyObject *const_str_plain_SETXON;
extern PyObject *const_str_plain_ODDPARITY;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_fErrorChar;
extern PyObject *const_str_plain_CloseHandle;
extern PyObject *const_str_plain_WinDLL;
static PyObject *const_str_plain_EV_EVENT2;
static PyObject *const_str_plain_LPCSTR;
extern PyObject *const_int_pos_1024;
extern PyObject *const_str_plain_cbOutQue;
extern PyObject *const_str_plain_c_void_p;
extern PyObject *const_str_plain_fRtsControl;
static PyObject *const_str_plain_EV_RLSD;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_ReadIntervalTimeout;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_COMSTAT;
static PyObject *const_str_plain__OVERLAPPED;
extern PyObject *const_int_pos_32;
static PyObject *const_list_str_plain__0_list;
static PyObject *const_str_plain_LPCWSTR;
static PyObject *const_str_plain_EV_PERR;
extern PyObject *const_str_plain_Structure;
extern PyObject *const_str_plain_ONESTOPBIT;
extern PyObject *const_str_plain_RTS_CONTROL_TOGGLE;
static PyObject *const_str_plain_LPVOID;
extern PyObject *const_str_plain_POINTER;
extern PyObject *const_str_plain_FILE_FLAG_OVERLAPPED;
extern PyObject *const_str_plain_DWORD;
extern PyObject *const_int_pos_1073741824;
extern PyObject *const_str_plain_WORD;
extern PyObject *const_str_plain_BYTE;
extern PyObject *const_str_plain_EscapeCommFunction;
extern PyObject *const_str_plain_ULONG_PTR;
extern PyObject *const_str_plain_GetLastError;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_ErrorChar;
static PyObject *const_str_plain_LPCOMMTIMEOUTS;
static PyObject *const_str_plain__stdcall_libraries;
extern PyObject *const_str_plain_XoffChar;
static PyObject *const_str_plain_fXoffSent;
extern PyObject *const_str_plain_LPDWORD;
extern PyObject *const_str_plain_PURGE_RXABORT;
extern PyObject *const_str_plain_BaudRate;
static PyObject *const_str_plain_HANDLE;
extern PyObject *const_str_plain_sizeof;
extern PyObject *const_str_plain_GENERIC_READ;
static PyObject *const_str_plain_LPDCB;
extern PyObject *const_str_plain_value;
static PyObject *const_str_plain__COMMTIMEOUTS;
extern PyObject *const_str_plain_c_ulong;
static PyObject *const_int_pos_995;
extern PyObject *const_str_plain_NOPARITY;
static PyObject *const_str_plain_fCtsHold;
extern PyObject *const_str_plain_SetCommState;
static PyObject *const_int_pos_996;
extern PyObject *const_tuple_str_plain_BOOL_tuple;
static PyObject *const_str_plain_Internal;
extern PyObject *const_str_plain_DTR_CONTROL_ENABLE;
extern PyObject *const_int_pos_8;
static PyObject *const_str_plain_EV_CTS;
static PyObject *const_str_plain_fRlsdHold;
extern PyObject *const_str_plain_ResetEvent;
static PyObject *const_str_plain_EV_EVENT1;
extern PyObject *const_str_plain_argtypes;
static PyObject *const_str_plain_fXoffHold;
extern PyObject *const_str_plain_GetCommTimeouts;
extern PyObject *const_str_plain_SETRTS;
static PyObject *const_str_plain_PVOID;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_StopBits;
static PyObject *const_str_plain_LPCVOID;
extern PyObject *const_tuple_str_plain_BYTE_tuple;
extern PyObject *const_str_plain_ERROR_INVALID_USER_BUFFER;
extern PyObject *const_str_plain_CLRRTS;
static PyObject *const_str_plain_N11_OVERLAPPED4DOLLAR_48E;
extern PyObject *const_str_plain_GetOverlappedResult;
extern PyObject *const_str_plain_restype;
static PyObject *const_str_plain_INFINITE;
static PyObject *const_str_plain_DCBlength;
static PyObject *const_str_plain_EV_TXEMPTY;
extern PyObject *const_str_plain_Parity;
static PyObject *const_tuple_str_plain_LPCSTR_tuple;
extern PyObject *const_str_plain_MS_RING_ON;
extern PyObject *const_str_plain_SetCommTimeouts;
extern PyObject *const_str_plain_RTS_CONTROL_DISABLE;
extern PyObject *const_str_plain_MS_CTS_ON;
extern PyObject *const_int_pos_4294967295;
static PyObject *const_str_plain_kernel32;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_CancelIoEx;
static PyObject *const_str_plain_EV_RING;
static PyObject *const_str_plain_fDummy2;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
extern PyObject *const_str_plain_OPEN_EXISTING;
extern PyObject *const_str_plain_ERROR_NOT_ENOUGH_MEMORY;
static PyObject *const_str_plain_fTxim;
extern PyObject *const_int_pos_4096;
static PyObject *const_str_plain_lpSecurityDescriptor;
extern PyObject *const_str_plain_RTS_CONTROL_HANDSHAKE;
static PyObject *const_str_plain__DCB;
extern PyObject *const_str_plain_ctypes;
extern PyObject *const_str_plain_GetCommModemStatus;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_fBinary;
extern PyObject *const_str_plain_WriteTotalTimeoutConstant;
extern PyObject *const_str_plain_DCB;
extern PyObject *const_str_plain_MARKPARITY;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_PurgeComm;
extern PyObject *const_str_plain_fOutxCtsFlow;
extern PyObject *const_str_plain_OVERLAPPED;
static PyObject *const_str_plain_fReserved;
extern PyObject *const_str_plain_c_char;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_plain_EV_RXCHAR;
static PyObject *const_str_plain_EV_RXFLAG;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_plain_SETDTR;
static PyObject *const_int_pos_1784;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_MAXDWORD;
static PyObject *const_str_plain_wReserved;
extern PyObject *const_str_plain_CreateEvent;
static PyObject *const_str_plain_WaitForSingleObject;
static PyObject *const_str_plain_is_64bit;
static PyObject *const_str_plain_fDsrSensitivity;
extern PyObject *const_str_plain_ERROR_SUCCESS;
static PyObject *const_int_pos_997;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_ReadTotalTimeoutConstant;
extern PyObject *const_str_plain_SetCommMask;
extern PyObject *const_str_plain_Union;
extern PyObject *const_str_plain_SPACEPARITY;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_fNull;
extern PyObject *const_str_plain_TWOSTOPBITS;
extern PyObject *const_str_plain_hEvent;
static PyObject *const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_ERROR_IO_INCOMPLETE;
extern PyObject *const_str_plain_MS_RLSD_ON;
static PyObject *const_str_plain_fDsrHold;
static PyObject *const_str_plain_XoffLim;
extern PyObject *const_int_pos_256;
static PyObject *const_str_plain_c_int64;
static PyObject *const_str_plain__anonymous_;
static PyObject *const_str_plain_fTXContinueOnXoff;
static PyObject *const_str_plain_LPCOMSTAT;
extern PyObject *const_str_plain_XonChar;
extern PyObject *const_str_plain_CLRDTR;
static PyObject *const_str_plain_EV_DSR;
static PyObject *const_str_digest_facd505ab20ea12a55caf64ecce08ac0;
static PyObject *const_tuple_str_plain_LPCWSTR_tuple;
static PyObject *const_str_plain__COMSTAT;
static PyObject *const_str_plain_ReadTotalTimeoutMultiplier;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_FILE_ATTRIBUTE_NORMAL;
static PyObject *const_str_plain_EV_BREAK;
extern PyObject *const_int_pos_2147483648;
extern PyObject *const_str_plain_ByteSize;
static PyObject *const_str_plain_CreateFileA;
extern PyObject *const_str_plain_DTR_CONTROL_HANDSHAKE;
static PyObject *const_str_plain_bInheritHandle;
static PyObject *const_str_plain_fEof;
static PyObject *const_str_plain_EvtChar;
extern PyObject *const_str_plain_ERROR_IO_PENDING;
extern PyObject *const_str_plain_fInX;
static PyObject *const_str_plain_LPOVERLAPPED;
extern PyObject *const_str_plain_MS_DSR_ON;
extern PyObject *const_str_plain_EV_ERR;
extern PyObject *const_str_plain_SetCommBreak;
static PyObject *const_str_plain_LPSECURITY_ATTRIBUTES;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_CreateEventA;
static PyObject *const_str_plain__0;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_CreateEventW;
extern PyObject *const_tuple_str_plain_DWORD_tuple;
static PyObject *const_str_plain_Offset;
extern PyObject *const_str_plain_ERROR_OPERATION_ABORTED;
extern PyObject *const_str_plain_fDtrControl;
extern PyObject *const_str_plain_SetupComm;
extern PyObject *const_str_plain_WriteFile;
static PyObject *const_str_plain_XonLim;
static PyObject *const_str_plain_OffsetHigh;
extern PyObject *const_str_plain_cbInQue;
static PyObject *const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E;
extern PyObject *const_str_plain_PURGE_RXCLEAR;
extern PyObject *const_tuple_str_plain_WORD_tuple;
static PyObject *const_str_plain_InternalHigh;
static PyObject *const_str_plain_EofChar;
extern PyObject *const_str_plain_GetCommState;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_wReserved1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5826180 ], 10, 1 );
    const_str_plain_CreateFileW = UNSTREAM_STRING_ASCII( &constant_bin[ 5826190 ], 11, 1 );
    const_str_plain_WriteTotalTimeoutMultiplier = UNSTREAM_STRING_ASCII( &constant_bin[ 5826201 ], 27, 1 );
    const_list_5fe71ecb740c0898f445980823e1ece2_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5826228 ], 1120 );
    const_str_digest_ef6c75fe931feda8fc6cf88261d1ebc8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5827348 ], 15, 0 );
    const_tuple_str_plain_HANDLE_tuple = PyTuple_New( 1 );
    const_str_plain_HANDLE = UNSTREAM_STRING_ASCII( &constant_bin[ 3118854 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HANDLE_tuple, 0, const_str_plain_HANDLE ); Py_INCREF( const_str_plain_HANDLE );
    const_int_pos_2048 = PyLong_FromUnsignedLong( 2048ul );
    const_str_digest_faff1e0ec4973278ae89121346cdf7ba = UNSTREAM_STRING_ASCII( &constant_bin[ 5827363 ], 21, 0 );
    const_tuple_str_plain_kernel32_tuple = PyTuple_New( 1 );
    const_str_plain_kernel32 = UNSTREAM_STRING_ASCII( &constant_bin[ 5827384 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kernel32_tuple, 0, const_str_plain_kernel32 ); Py_INCREF( const_str_plain_kernel32 );
    const_str_plain_Pointer = UNSTREAM_STRING_ASCII( &constant_bin[ 2254029 ], 7, 1 );
    const_str_plain_nLength = UNSTREAM_STRING_ASCII( &constant_bin[ 5827392 ], 7, 1 );
    const_str_plain_EV_RX80FULL = UNSTREAM_STRING_ASCII( &constant_bin[ 5827184 ], 11, 1 );
    const_str_plain__SECURITY_ATTRIBUTES = UNSTREAM_STRING_ASCII( &constant_bin[ 5826520 ], 20, 1 );
    const_str_plain_EV_EVENT2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5826781 ], 9, 1 );
    const_str_plain_LPCSTR = UNSTREAM_STRING_ASCII( &constant_bin[ 5827399 ], 6, 1 );
    const_str_plain_EV_RLSD = UNSTREAM_STRING_ASCII( &constant_bin[ 5826752 ], 7, 1 );
    const_str_plain__OVERLAPPED = UNSTREAM_STRING_ASCII( &constant_bin[ 5826383 ], 11, 1 );
    const_list_str_plain__0_list = PyList_New( 1 );
    const_str_plain__0 = UNSTREAM_STRING_ASCII( &constant_bin[ 596763 ], 2, 1 );
    PyList_SET_ITEM( const_list_str_plain__0_list, 0, const_str_plain__0 ); Py_INCREF( const_str_plain__0 );
    const_str_plain_LPCWSTR = UNSTREAM_STRING_ASCII( &constant_bin[ 5827405 ], 7, 1 );
    const_str_plain_EV_PERR = UNSTREAM_STRING_ASCII( &constant_bin[ 5826550 ], 7, 1 );
    const_str_plain_LPVOID = UNSTREAM_STRING_ASCII( &constant_bin[ 5827154 ], 6, 1 );
    const_str_plain_ErrorChar = UNSTREAM_STRING_ASCII( &constant_bin[ 5827412 ], 9, 1 );
    const_str_plain_LPCOMMTIMEOUTS = UNSTREAM_STRING_ASCII( &constant_bin[ 5827210 ], 14, 1 );
    const_str_plain__stdcall_libraries = UNSTREAM_STRING_ASCII( &constant_bin[ 5827421 ], 18, 1 );
    const_str_plain_fXoffSent = UNSTREAM_STRING_ASCII( &constant_bin[ 5827439 ], 9, 1 );
    const_str_plain_LPDCB = UNSTREAM_STRING_ASCII( &constant_bin[ 5827095 ], 5, 1 );
    const_str_plain__COMMTIMEOUTS = UNSTREAM_STRING_ASCII( &constant_bin[ 5826505 ], 13, 1 );
    const_int_pos_995 = PyLong_FromUnsignedLong( 995ul );
    const_str_plain_fCtsHold = UNSTREAM_STRING_ASCII( &constant_bin[ 5827448 ], 8, 1 );
    const_int_pos_996 = PyLong_FromUnsignedLong( 996ul );
    const_str_plain_Internal = UNSTREAM_STRING_ASCII( &constant_bin[ 22739 ], 8, 1 );
    const_str_plain_EV_CTS = UNSTREAM_STRING_ASCII( &constant_bin[ 5826612 ], 6, 1 );
    const_str_plain_fRlsdHold = UNSTREAM_STRING_ASCII( &constant_bin[ 5827456 ], 9, 1 );
    const_str_plain_EV_EVENT1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5827129 ], 9, 1 );
    const_str_plain_fXoffHold = UNSTREAM_STRING_ASCII( &constant_bin[ 5827465 ], 9, 1 );
    const_str_plain_PVOID = UNSTREAM_STRING_ASCII( &constant_bin[ 5826857 ], 5, 1 );
    const_str_plain_LPCVOID = UNSTREAM_STRING_ASCII( &constant_bin[ 5826829 ], 7, 1 );
    const_str_plain_N11_OVERLAPPED4DOLLAR_48E = UNSTREAM_STRING_ASCII( &constant_bin[ 5826380 ], 25, 1 );
    const_str_plain_INFINITE = UNSTREAM_STRING_ASCII( &constant_bin[ 5827474 ], 8, 1 );
    const_str_plain_DCBlength = UNSTREAM_STRING_ASCII( &constant_bin[ 5827482 ], 9, 1 );
    const_str_plain_EV_TXEMPTY = UNSTREAM_STRING_ASCII( &constant_bin[ 5826645 ], 10, 1 );
    const_tuple_str_plain_LPCSTR_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LPCSTR_tuple, 0, const_str_plain_LPCSTR ); Py_INCREF( const_str_plain_LPCSTR );
    const_str_plain_EV_RING = UNSTREAM_STRING_ASCII( &constant_bin[ 5826407 ], 7, 1 );
    const_str_plain_fDummy2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5827491 ], 7, 1 );
    const_str_plain_fTxim = UNSTREAM_STRING_ASCII( &constant_bin[ 5827498 ], 5, 1 );
    const_str_plain_lpSecurityDescriptor = UNSTREAM_STRING_ASCII( &constant_bin[ 5827503 ], 20, 1 );
    const_str_plain__DCB = UNSTREAM_STRING_ASCII( &constant_bin[ 5826486 ], 4, 1 );
    const_str_plain_fReserved = UNSTREAM_STRING_ASCII( &constant_bin[ 5827523 ], 9, 1 );
    const_str_plain_EV_RXCHAR = UNSTREAM_STRING_ASCII( &constant_bin[ 5826917 ], 9, 1 );
    const_str_plain_EV_RXFLAG = UNSTREAM_STRING_ASCII( &constant_bin[ 5826559 ], 9, 1 );
    const_int_pos_1784 = PyLong_FromUnsignedLong( 1784ul );
    const_str_plain_wReserved = UNSTREAM_STRING_ASCII( &constant_bin[ 5826180 ], 9, 1 );
    const_str_plain_WaitForSingleObject = UNSTREAM_STRING_ASCII( &constant_bin[ 5827532 ], 19, 1 );
    const_str_plain_is_64bit = UNSTREAM_STRING_ASCII( &constant_bin[ 5827551 ], 8, 1 );
    const_str_plain_fDsrSensitivity = UNSTREAM_STRING_ASCII( &constant_bin[ 5827559 ], 15, 1 );
    const_int_pos_997 = PyLong_FromUnsignedLong( 997ul );
    const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 0, const_str_plain_c_ulong ); Py_INCREF( const_str_plain_c_ulong );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 1, const_str_plain_c_void_p ); Py_INCREF( const_str_plain_c_void_p );
    const_str_plain_c_int64 = UNSTREAM_STRING_ASCII( &constant_bin[ 5827574 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 2, const_str_plain_c_int64 ); Py_INCREF( const_str_plain_c_int64 );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 3, const_str_plain_c_char ); Py_INCREF( const_str_plain_c_char );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 4, const_str_plain_WinDLL ); Py_INCREF( const_str_plain_WinDLL );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 5, const_str_plain_sizeof ); Py_INCREF( const_str_plain_sizeof );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 6, const_str_plain_Structure ); Py_INCREF( const_str_plain_Structure );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 7, const_str_plain_Union ); Py_INCREF( const_str_plain_Union );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 8, const_str_plain_POINTER ); Py_INCREF( const_str_plain_POINTER );
    const_str_plain_fDsrHold = UNSTREAM_STRING_ASCII( &constant_bin[ 5827581 ], 8, 1 );
    const_str_plain_XoffLim = UNSTREAM_STRING_ASCII( &constant_bin[ 5827589 ], 7, 1 );
    const_str_plain__anonymous_ = UNSTREAM_STRING_ASCII( &constant_bin[ 5827596 ], 11, 1 );
    const_str_plain_fTXContinueOnXoff = UNSTREAM_STRING_ASCII( &constant_bin[ 5827607 ], 17, 1 );
    const_str_plain_LPCOMSTAT = UNSTREAM_STRING_ASCII( &constant_bin[ 5826928 ], 9, 1 );
    const_str_plain_EV_DSR = UNSTREAM_STRING_ASCII( &constant_bin[ 5826542 ], 6, 1 );
    const_str_digest_facd505ab20ea12a55caf64ecce08ac0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5827624 ], 44, 0 );
    const_tuple_str_plain_LPCWSTR_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LPCWSTR_tuple, 0, const_str_plain_LPCWSTR ); Py_INCREF( const_str_plain_LPCWSTR );
    const_str_plain__COMSTAT = UNSTREAM_STRING_ASCII( &constant_bin[ 5826303 ], 8, 1 );
    const_str_plain_ReadTotalTimeoutMultiplier = UNSTREAM_STRING_ASCII( &constant_bin[ 5827668 ], 26, 1 );
    const_str_plain_EV_BREAK = UNSTREAM_STRING_ASCII( &constant_bin[ 5826807 ], 8, 1 );
    const_str_plain_CreateFileA = UNSTREAM_STRING_ASCII( &constant_bin[ 5827694 ], 11, 1 );
    const_str_plain_bInheritHandle = UNSTREAM_STRING_ASCII( &constant_bin[ 5827705 ], 14, 1 );
    const_str_plain_fEof = UNSTREAM_STRING_ASCII( &constant_bin[ 5827719 ], 4, 1 );
    const_str_plain_EvtChar = UNSTREAM_STRING_ASCII( &constant_bin[ 5827723 ], 7, 1 );
    const_str_plain_LPOVERLAPPED = UNSTREAM_STRING_ASCII( &constant_bin[ 5826631 ], 12, 1 );
    const_str_plain_LPSECURITY_ATTRIBUTES = UNSTREAM_STRING_ASCII( &constant_bin[ 5826673 ], 21, 1 );
    const_str_plain_CreateEventA = UNSTREAM_STRING_ASCII( &constant_bin[ 5827730 ], 12, 1 );
    const_str_plain_CreateEventW = UNSTREAM_STRING_ASCII( &constant_bin[ 5827102 ], 12, 1 );
    const_str_plain_Offset = UNSTREAM_STRING_ASCII( &constant_bin[ 69934 ], 6, 1 );
    const_str_plain_XonLim = UNSTREAM_STRING_ASCII( &constant_bin[ 5827742 ], 6, 1 );
    const_str_plain_OffsetHigh = UNSTREAM_STRING_ASCII( &constant_bin[ 5827748 ], 10, 1 );
    const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E = UNSTREAM_STRING_ASCII( &constant_bin[ 5827259 ], 35, 1 );
    const_str_plain_InternalHigh = UNSTREAM_STRING_ASCII( &constant_bin[ 5827758 ], 12, 1 );
    const_str_plain_EofChar = UNSTREAM_STRING_ASCII( &constant_bin[ 5827770 ], 7, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial$win32( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_99eafefbedb88fa86d882c9e453add67;
static PyCodeObject *codeobj_78b63c943a75cada5b8aa4232f831ace;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_ef6c75fe931feda8fc6cf88261d1ebc8 );
    codeobj_99eafefbedb88fa86d882c9e453add67 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_faff1e0ec4973278ae89121346cdf7ba, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_78b63c943a75cada5b8aa4232f831ace = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_64bit, 27, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_serial$win32$$$function_1_is_64bit(  );


// The module function definitions.
static PyObject *impl_serial$win32$$$function_1_is_64bit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_78b63c943a75cada5b8aa4232f831ace;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_78b63c943a75cada5b8aa4232f831ace = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_78b63c943a75cada5b8aa4232f831ace, codeobj_78b63c943a75cada5b8aa4232f831ace, module_serial$win32, 0 );
    frame_78b63c943a75cada5b8aa4232f831ace = cache_frame_78b63c943a75cada5b8aa4232f831ace;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_78b63c943a75cada5b8aa4232f831ace );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_78b63c943a75cada5b8aa4232f831ace ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_sizeof );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sizeof );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sizeof" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_ulong );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_ulong );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_ulong" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        frame_78b63c943a75cada5b8aa4232f831ace->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_sizeof );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sizeof );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sizeof" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_void_p" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_4;
        frame_78b63c943a75cada5b8aa4232f831ace->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_right_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78b63c943a75cada5b8aa4232f831ace );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_78b63c943a75cada5b8aa4232f831ace );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78b63c943a75cada5b8aa4232f831ace );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_78b63c943a75cada5b8aa4232f831ace, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_78b63c943a75cada5b8aa4232f831ace->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_78b63c943a75cada5b8aa4232f831ace, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_78b63c943a75cada5b8aa4232f831ace,
        type_description_1
    );


    // Release cached frame.
    if ( frame_78b63c943a75cada5b8aa4232f831ace == cache_frame_78b63c943a75cada5b8aa4232f831ace )
    {
        Py_DECREF( frame_78b63c943a75cada5b8aa4232f831ace );
    }
    cache_frame_78b63c943a75cada5b8aa4232f831ace = NULL;

    assertFrameObject( frame_78b63c943a75cada5b8aa4232f831ace );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$win32$$$function_1_is_64bit );
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



static PyObject *MAKE_FUNCTION_serial$win32$$$function_1_is_64bit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$win32$$$function_1_is_64bit,
        const_str_plain_is_64bit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_78b63c943a75cada5b8aa4232f831ace,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$win32,
        const_str_digest_facd505ab20ea12a55caf64ecce08ac0,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$win32 =
{
    PyModuleDef_HEAD_INIT,
    "serial.win32",
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

MOD_INIT_DECL( serial$win32 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$win32 );
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
    puts("serial.win32: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.win32: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.win32: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserial$win32" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$win32 = Py_InitModule4(
        "serial.win32",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_serial$win32 = PyModule_Create( &mdef_serial$win32 );
#endif

    moduledict_serial$win32 = MODULE_DICT( module_serial$win32 );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_serial$win32,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_serial$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_serial$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_serial$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_serial$win32 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa, module_serial$win32 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_99eafefbedb88fa86d882c9e453add67;
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
    PyObject *locals_serial$win32_40 = NULL;
    PyObject *tmp_dictset_value;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_serial$win32_70 = NULL;
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
    PyObject *locals_serial$win32_76 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_serial$win32_82 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_serial$win32_88 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_serial$win32_249 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *locals_serial$win32_253 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_99eafefbedb88fa86d882c9e453add67 = MAKE_MODULE_FRAME( codeobj_99eafefbedb88fa86d882c9e453add67, module_serial$win32 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_99eafefbedb88fa86d882c9e453add67 );
    assert( Py_REFCNT( frame_99eafefbedb88fa86d882c9e453add67 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_ctypes;
        tmp_globals_name_1 = (PyObject *)moduledict_serial$win32;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple;
        tmp_level_name_1 = const_int_0;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 12;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_c_ulong );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_ulong, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_c_void_p );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_c_int64 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_int64, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_c_char );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_5 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_WinDLL );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WinDLL, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_6 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_sizeof );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_sizeof, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_7 = tmp_import_from_1__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Structure );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_8 = tmp_import_from_1__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Union );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Union, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_9 = tmp_import_from_1__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_POINTER );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER, tmp_assign_source_13 );
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_2 = (PyObject *)moduledict_serial$win32;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_HANDLE_tuple;
        tmp_level_name_2 = const_int_0;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 14;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_HANDLE );
        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_3 = (PyObject *)moduledict_serial$win32;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_BOOL_tuple;
        tmp_level_name_3 = const_int_0;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 15;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_BOOL );
        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_4 = (PyObject *)moduledict_serial$win32;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_LPCWSTR_tuple;
        tmp_level_name_4 = const_int_0;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 16;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_LPCWSTR );
        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCWSTR, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_5 = (PyObject *)moduledict_serial$win32;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_DWORD_tuple;
        tmp_level_name_5 = const_int_0;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 17;
        tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_DWORD );
        Py_DECREF( tmp_import_name_from_13 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_6 = (PyObject *)moduledict_serial$win32;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_WORD_tuple;
        tmp_level_name_6 = const_int_0;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 18;
        tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_WORD );
        Py_DECREF( tmp_import_name_from_14 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_7 = (PyObject *)moduledict_serial$win32;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_BYTE_tuple;
        tmp_level_name_7 = const_int_0;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 19;
        tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_BYTE );
        Py_DECREF( tmp_import_name_from_15 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BYTE, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = PyDict_New();
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_ass_subscript_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WinDLL );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WinDLL );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WinDLL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 21;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_kernel32_tuple, 0 ) );

        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = tmp_mvar_value_4;
        tmp_ass_subscript_1 = const_str_plain_kernel32;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_5;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 23;
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_int_neg_1_tuple, 0 ) );

        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_value );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_INVALID_HANDLE_VALUE, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_serial$win32$$$function_1_is_64bit(  );



        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_is_64bit, tmp_assign_source_22 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_is_64bit );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_64bit );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_called_name_3 = tmp_mvar_value_6;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 34;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 34;

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
            PyObject *tmp_assign_source_23;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_int64 );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_int64 );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_int64" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 35;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_23 = tmp_mvar_value_7;
            UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ULONG_PTR, tmp_assign_source_23 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_mvar_value_8;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_ulong );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_ulong );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_ulong" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 37;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_24 = tmp_mvar_value_8;
            UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ULONG_PTR, tmp_assign_source_24 );
        }
        branch_end_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_9;
        tmp_assign_source_25 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_25, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_2;
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


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 40;

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


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_27 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_3;
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


            exception_lineno = 40;

            goto try_except_handler_2;
        }
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
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_2 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_2, const_str_plain___prepare__ );
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_3 = tmp_class_creation_1__metaclass;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto try_except_handler_2;
            }
            tmp_tuple_element_2 = const_str_plain__SECURITY_ATTRIBUTES;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 40;
            tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_28;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_4 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_4, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto try_except_handler_2;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_5;
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


                    exception_lineno = 40;

                    goto try_except_handler_2;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_5 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_5 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 40;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 40;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 40;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_29;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_serial$win32_40 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
        tmp_res = PyObject_SetItem( locals_serial$win32_40, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain__SECURITY_ATTRIBUTES;
        tmp_res = PyObject_SetItem( locals_serial$win32_40, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain__SECURITY_ATTRIBUTES;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_serial$win32_40;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 40;
            tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_30 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_30 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_serial$win32_40 );
        locals_serial$win32_40 = NULL;
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

        Py_DECREF( locals_serial$win32_40 );
        locals_serial$win32_40 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
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
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 40;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES, tmp_assign_source_30 );
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

    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_10;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_SECURITY_ATTRIBUTES" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_11;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES, tmp_assign_source_32 );
    }
    {
        nuitka_bool tmp_assign_source_33;
        tmp_assign_source_33 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_33;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;

            goto try_except_handler_6;
        }

        tmp_subscribed_name_2 = tmp_mvar_value_12;
        tmp_subscript_name_2 = const_str_plain_kernel32;
        tmp_source_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_6;
        }
        tmp_assign_source_34 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_CreateEventW );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventW, tmp_assign_source_34 );
    }
    goto try_end_3;
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

    {
        nuitka_bool tmp_assign_source_35;
        tmp_assign_source_35 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_35;
    }
    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_99eafefbedb88fa86d882c9e453add67, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_99eafefbedb88fa86d882c9e453add67, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;

            goto try_except_handler_7;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_36;
            PyObject *tmp_import_name_from_16;
            PyObject *tmp_name_name_8;
            PyObject *tmp_globals_name_8;
            PyObject *tmp_locals_name_8;
            PyObject *tmp_fromlist_name_8;
            PyObject *tmp_level_name_8;
            tmp_name_name_8 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
            tmp_globals_name_8 = (PyObject *)moduledict_serial$win32;
            tmp_locals_name_8 = Py_None;
            tmp_fromlist_name_8 = const_tuple_str_plain_LPCSTR_tuple;
            tmp_level_name_8 = const_int_0;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 49;
            tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
            if ( tmp_import_name_from_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;

                goto try_except_handler_7;
            }
            tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_LPCSTR );
            Py_DECREF( tmp_import_name_from_16 );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;

                goto try_except_handler_7;
            }
            UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCSTR, tmp_assign_source_36 );
        }
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_subscript_name_3;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 50;

                goto try_except_handler_7;
            }

            tmp_subscribed_name_3 = tmp_mvar_value_13;
            tmp_subscript_name_3 = const_str_plain_kernel32;
            tmp_source_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_7;
            }
            tmp_assign_source_37 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_CreateEventA );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_7;
            }
            UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventA, tmp_assign_source_37 );
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_assattr_target_3;
            PyObject *tmp_mvar_value_15;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 51;

                goto try_except_handler_7;
            }

            tmp_assattr_name_3 = tmp_mvar_value_14;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventA );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventA );
            }

            CHECK_OBJECT( tmp_mvar_value_15 );
            tmp_assattr_target_3 = tmp_mvar_value_15;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_restype, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_7;
            }
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_list_element_1;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_assattr_target_4;
            PyObject *tmp_mvar_value_20;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPSECURITY_ATTRIBUTES" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 52;

                goto try_except_handler_7;
            }

            tmp_list_element_1 = tmp_mvar_value_16;
            tmp_assattr_name_4 = PyList_New( 4 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assattr_name_4, 0, tmp_list_element_1 );
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
            }

            if ( tmp_mvar_value_17 == NULL )
            {
                Py_DECREF( tmp_assattr_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 52;

                goto try_except_handler_7;
            }

            tmp_list_element_1 = tmp_mvar_value_17;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assattr_name_4, 1, tmp_list_element_1 );
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

            if (unlikely( tmp_mvar_value_18 == NULL ))
            {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
            }

            if ( tmp_mvar_value_18 == NULL )
            {
                Py_DECREF( tmp_assattr_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 52;

                goto try_except_handler_7;
            }

            tmp_list_element_1 = tmp_mvar_value_18;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assattr_name_4, 2, tmp_list_element_1 );
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCSTR );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCSTR );
            }

            if ( tmp_mvar_value_19 == NULL )
            {
                Py_DECREF( tmp_assattr_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCSTR" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 52;

                goto try_except_handler_7;
            }

            tmp_list_element_1 = tmp_mvar_value_19;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assattr_name_4, 3, tmp_list_element_1 );
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventA );

            if (unlikely( tmp_mvar_value_20 == NULL ))
            {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventA );
            }

            if ( tmp_mvar_value_20 == NULL )
            {
                Py_DECREF( tmp_assattr_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateEventA" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 52;

                goto try_except_handler_7;
            }

            tmp_assattr_target_4 = tmp_mvar_value_20;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_argtypes, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;

                goto try_except_handler_7;
            }
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_mvar_value_21;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventA );

            if (unlikely( tmp_mvar_value_21 == NULL ))
            {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventA );
            }

            if ( tmp_mvar_value_21 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateEventA" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 53;

                goto try_except_handler_7;
            }

            tmp_assign_source_38 = tmp_mvar_value_21;
            UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEvent, tmp_assign_source_38 );
        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_source_name_8;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_mvar_value_22;
            PyObject *tmp_subscript_name_4;
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

            if (unlikely( tmp_mvar_value_22 == NULL ))
            {
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
            }

            if ( tmp_mvar_value_22 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 55;

                goto try_except_handler_7;
            }

            tmp_subscribed_name_4 = tmp_mvar_value_22;
            tmp_subscript_name_4 = const_str_plain_kernel32;
            tmp_source_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_source_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto try_except_handler_7;
            }
            tmp_assign_source_39 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_CreateFileA );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto try_except_handler_7;
            }
            UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileA, tmp_assign_source_39 );
        }
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_mvar_value_23;
            PyObject *tmp_assattr_target_5;
            PyObject *tmp_mvar_value_24;
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

            if (unlikely( tmp_mvar_value_23 == NULL ))
            {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
            }

            if ( tmp_mvar_value_23 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 56;

                goto try_except_handler_7;
            }

            tmp_assattr_name_5 = tmp_mvar_value_23;
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileA );

            if (unlikely( tmp_mvar_value_24 == NULL ))
            {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileA );
            }

            CHECK_OBJECT( tmp_mvar_value_24 );
            tmp_assattr_target_5 = tmp_mvar_value_24;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_restype, tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;

                goto try_except_handler_7;
            }
        }
        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_list_element_2;
            PyObject *tmp_mvar_value_25;
            PyObject *tmp_mvar_value_26;
            PyObject *tmp_mvar_value_27;
            PyObject *tmp_mvar_value_28;
            PyObject *tmp_mvar_value_29;
            PyObject *tmp_mvar_value_30;
            PyObject *tmp_mvar_value_31;
            PyObject *tmp_assattr_target_6;
            PyObject *tmp_mvar_value_32;
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCSTR );

            if (unlikely( tmp_mvar_value_25 == NULL ))
            {
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCSTR );
            }

            if ( tmp_mvar_value_25 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCSTR" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;

                goto try_except_handler_7;
            }

            tmp_list_element_2 = tmp_mvar_value_25;
            tmp_assattr_name_6 = PyList_New( 7 );
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_assattr_name_6, 0, tmp_list_element_2 );
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

            if (unlikely( tmp_mvar_value_26 == NULL ))
            {
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
            }

            if ( tmp_mvar_value_26 == NULL )
            {
                Py_DECREF( tmp_assattr_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;

                goto try_except_handler_7;
            }

            tmp_list_element_2 = tmp_mvar_value_26;
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_assattr_name_6, 1, tmp_list_element_2 );
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

            if (unlikely( tmp_mvar_value_27 == NULL ))
            {
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
            }

            if ( tmp_mvar_value_27 == NULL )
            {
                Py_DECREF( tmp_assattr_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;

                goto try_except_handler_7;
            }

            tmp_list_element_2 = tmp_mvar_value_27;
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_assattr_name_6, 2, tmp_list_element_2 );
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );

            if (unlikely( tmp_mvar_value_28 == NULL ))
            {
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );
            }

            if ( tmp_mvar_value_28 == NULL )
            {
                Py_DECREF( tmp_assattr_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPSECURITY_ATTRIBUTES" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;

                goto try_except_handler_7;
            }

            tmp_list_element_2 = tmp_mvar_value_28;
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_assattr_name_6, 3, tmp_list_element_2 );
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

            if (unlikely( tmp_mvar_value_29 == NULL ))
            {
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
            }

            if ( tmp_mvar_value_29 == NULL )
            {
                Py_DECREF( tmp_assattr_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;

                goto try_except_handler_7;
            }

            tmp_list_element_2 = tmp_mvar_value_29;
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_assattr_name_6, 4, tmp_list_element_2 );
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

            if (unlikely( tmp_mvar_value_30 == NULL ))
            {
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
            }

            if ( tmp_mvar_value_30 == NULL )
            {
                Py_DECREF( tmp_assattr_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;

                goto try_except_handler_7;
            }

            tmp_list_element_2 = tmp_mvar_value_30;
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_assattr_name_6, 5, tmp_list_element_2 );
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

            if (unlikely( tmp_mvar_value_31 == NULL ))
            {
                tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
            }

            if ( tmp_mvar_value_31 == NULL )
            {
                Py_DECREF( tmp_assattr_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;

                goto try_except_handler_7;
            }

            tmp_list_element_2 = tmp_mvar_value_31;
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_assattr_name_6, 6, tmp_list_element_2 );
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileA );

            if (unlikely( tmp_mvar_value_32 == NULL ))
            {
                tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileA );
            }

            if ( tmp_mvar_value_32 == NULL )
            {
                Py_DECREF( tmp_assattr_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateFileA" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;

                goto try_except_handler_7;
            }

            tmp_assattr_target_6 = tmp_mvar_value_32;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_argtypes, tmp_assattr_name_6 );
            Py_DECREF( tmp_assattr_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;

                goto try_except_handler_7;
            }
        }
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_mvar_value_33;
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileA );

            if (unlikely( tmp_mvar_value_33 == NULL ))
            {
                tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileA );
            }

            if ( tmp_mvar_value_33 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateFileA" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 58;

                goto try_except_handler_7;
            }

            tmp_assign_source_40 = tmp_mvar_value_33;
            UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFile, tmp_assign_source_40 );
        }
        goto branch_end_5;
        branch_no_5:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 45;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_99eafefbedb88fa86d882c9e453add67->m_frame) frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_7;
        branch_end_5:;
    }
    goto try_end_4;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$win32 );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_7;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_mvar_value_34;
            PyObject *tmp_assattr_target_7;
            PyObject *tmp_mvar_value_35;
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

            if (unlikely( tmp_mvar_value_34 == NULL ))
            {
                tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
            }

            if ( tmp_mvar_value_34 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 60;

                goto try_except_handler_5;
            }

            tmp_assattr_name_7 = tmp_mvar_value_34;
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventW );

            if (unlikely( tmp_mvar_value_35 == NULL ))
            {
                tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventW );
            }

            if ( tmp_mvar_value_35 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateEventW" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 60;

                goto try_except_handler_5;
            }

            tmp_assattr_target_7 = tmp_mvar_value_35;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_restype, tmp_assattr_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_assattr_name_8;
            PyObject *tmp_list_element_3;
            PyObject *tmp_mvar_value_36;
            PyObject *tmp_mvar_value_37;
            PyObject *tmp_mvar_value_38;
            PyObject *tmp_mvar_value_39;
            PyObject *tmp_assattr_target_8;
            PyObject *tmp_mvar_value_40;
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );

            if (unlikely( tmp_mvar_value_36 == NULL ))
            {
                tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );
            }

            if ( tmp_mvar_value_36 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPSECURITY_ATTRIBUTES" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 61;

                goto try_except_handler_5;
            }

            tmp_list_element_3 = tmp_mvar_value_36;
            tmp_assattr_name_8 = PyList_New( 4 );
            Py_INCREF( tmp_list_element_3 );
            PyList_SET_ITEM( tmp_assattr_name_8, 0, tmp_list_element_3 );
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

            if (unlikely( tmp_mvar_value_37 == NULL ))
            {
                tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
            }

            if ( tmp_mvar_value_37 == NULL )
            {
                Py_DECREF( tmp_assattr_name_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 61;

                goto try_except_handler_5;
            }

            tmp_list_element_3 = tmp_mvar_value_37;
            Py_INCREF( tmp_list_element_3 );
            PyList_SET_ITEM( tmp_assattr_name_8, 1, tmp_list_element_3 );
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

            if (unlikely( tmp_mvar_value_38 == NULL ))
            {
                tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
            }

            if ( tmp_mvar_value_38 == NULL )
            {
                Py_DECREF( tmp_assattr_name_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 61;

                goto try_except_handler_5;
            }

            tmp_list_element_3 = tmp_mvar_value_38;
            Py_INCREF( tmp_list_element_3 );
            PyList_SET_ITEM( tmp_assattr_name_8, 2, tmp_list_element_3 );
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCWSTR );

            if (unlikely( tmp_mvar_value_39 == NULL ))
            {
                tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCWSTR );
            }

            if ( tmp_mvar_value_39 == NULL )
            {
                Py_DECREF( tmp_assattr_name_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCWSTR" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 61;

                goto try_except_handler_5;
            }

            tmp_list_element_3 = tmp_mvar_value_39;
            Py_INCREF( tmp_list_element_3 );
            PyList_SET_ITEM( tmp_assattr_name_8, 3, tmp_list_element_3 );
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventW );

            if (unlikely( tmp_mvar_value_40 == NULL ))
            {
                tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventW );
            }

            if ( tmp_mvar_value_40 == NULL )
            {
                Py_DECREF( tmp_assattr_name_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateEventW" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 61;

                goto try_except_handler_5;
            }

            tmp_assattr_target_8 = tmp_mvar_value_40;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_argtypes, tmp_assattr_name_8 );
            Py_DECREF( tmp_assattr_name_8 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_mvar_value_41;
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventW );

            if (unlikely( tmp_mvar_value_41 == NULL ))
            {
                tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventW );
            }

            if ( tmp_mvar_value_41 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateEventW" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 62;

                goto try_except_handler_5;
            }

            tmp_assign_source_41 = tmp_mvar_value_41;
            UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEvent, tmp_assign_source_41 );
        }
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_source_name_9;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_mvar_value_42;
            PyObject *tmp_subscript_name_5;
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

            if (unlikely( tmp_mvar_value_42 == NULL ))
            {
                tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
            }

            if ( tmp_mvar_value_42 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 64;

                goto try_except_handler_5;
            }

            tmp_subscribed_name_5 = tmp_mvar_value_42;
            tmp_subscript_name_5 = const_str_plain_kernel32;
            tmp_source_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_source_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_5;
            }
            tmp_assign_source_42 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_CreateFileW );
            Py_DECREF( tmp_source_name_9 );
            if ( tmp_assign_source_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_5;
            }
            UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileW, tmp_assign_source_42 );
        }
        {
            PyObject *tmp_assattr_name_9;
            PyObject *tmp_mvar_value_43;
            PyObject *tmp_assattr_target_9;
            PyObject *tmp_mvar_value_44;
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

            if (unlikely( tmp_mvar_value_43 == NULL ))
            {
                tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
            }

            if ( tmp_mvar_value_43 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 65;

                goto try_except_handler_5;
            }

            tmp_assattr_name_9 = tmp_mvar_value_43;
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileW );

            if (unlikely( tmp_mvar_value_44 == NULL ))
            {
                tmp_mvar_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileW );
            }

            CHECK_OBJECT( tmp_mvar_value_44 );
            tmp_assattr_target_9 = tmp_mvar_value_44;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_restype, tmp_assattr_name_9 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_assattr_name_10;
            PyObject *tmp_list_element_4;
            PyObject *tmp_mvar_value_45;
            PyObject *tmp_mvar_value_46;
            PyObject *tmp_mvar_value_47;
            PyObject *tmp_mvar_value_48;
            PyObject *tmp_mvar_value_49;
            PyObject *tmp_mvar_value_50;
            PyObject *tmp_mvar_value_51;
            PyObject *tmp_assattr_target_10;
            PyObject *tmp_mvar_value_52;
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCWSTR );

            if (unlikely( tmp_mvar_value_45 == NULL ))
            {
                tmp_mvar_value_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCWSTR );
            }

            if ( tmp_mvar_value_45 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCWSTR" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 66;

                goto try_except_handler_5;
            }

            tmp_list_element_4 = tmp_mvar_value_45;
            tmp_assattr_name_10 = PyList_New( 7 );
            Py_INCREF( tmp_list_element_4 );
            PyList_SET_ITEM( tmp_assattr_name_10, 0, tmp_list_element_4 );
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

            if (unlikely( tmp_mvar_value_46 == NULL ))
            {
                tmp_mvar_value_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
            }

            if ( tmp_mvar_value_46 == NULL )
            {
                Py_DECREF( tmp_assattr_name_10 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 66;

                goto try_except_handler_5;
            }

            tmp_list_element_4 = tmp_mvar_value_46;
            Py_INCREF( tmp_list_element_4 );
            PyList_SET_ITEM( tmp_assattr_name_10, 1, tmp_list_element_4 );
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

            if (unlikely( tmp_mvar_value_47 == NULL ))
            {
                tmp_mvar_value_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
            }

            if ( tmp_mvar_value_47 == NULL )
            {
                Py_DECREF( tmp_assattr_name_10 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 66;

                goto try_except_handler_5;
            }

            tmp_list_element_4 = tmp_mvar_value_47;
            Py_INCREF( tmp_list_element_4 );
            PyList_SET_ITEM( tmp_assattr_name_10, 2, tmp_list_element_4 );
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );

            if (unlikely( tmp_mvar_value_48 == NULL ))
            {
                tmp_mvar_value_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );
            }

            if ( tmp_mvar_value_48 == NULL )
            {
                Py_DECREF( tmp_assattr_name_10 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPSECURITY_ATTRIBUTES" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 66;

                goto try_except_handler_5;
            }

            tmp_list_element_4 = tmp_mvar_value_48;
            Py_INCREF( tmp_list_element_4 );
            PyList_SET_ITEM( tmp_assattr_name_10, 3, tmp_list_element_4 );
            tmp_mvar_value_49 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

            if (unlikely( tmp_mvar_value_49 == NULL ))
            {
                tmp_mvar_value_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
            }

            if ( tmp_mvar_value_49 == NULL )
            {
                Py_DECREF( tmp_assattr_name_10 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 66;

                goto try_except_handler_5;
            }

            tmp_list_element_4 = tmp_mvar_value_49;
            Py_INCREF( tmp_list_element_4 );
            PyList_SET_ITEM( tmp_assattr_name_10, 4, tmp_list_element_4 );
            tmp_mvar_value_50 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

            if (unlikely( tmp_mvar_value_50 == NULL ))
            {
                tmp_mvar_value_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
            }

            if ( tmp_mvar_value_50 == NULL )
            {
                Py_DECREF( tmp_assattr_name_10 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 66;

                goto try_except_handler_5;
            }

            tmp_list_element_4 = tmp_mvar_value_50;
            Py_INCREF( tmp_list_element_4 );
            PyList_SET_ITEM( tmp_assattr_name_10, 5, tmp_list_element_4 );
            tmp_mvar_value_51 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

            if (unlikely( tmp_mvar_value_51 == NULL ))
            {
                tmp_mvar_value_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
            }

            if ( tmp_mvar_value_51 == NULL )
            {
                Py_DECREF( tmp_assattr_name_10 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 66;

                goto try_except_handler_5;
            }

            tmp_list_element_4 = tmp_mvar_value_51;
            Py_INCREF( tmp_list_element_4 );
            PyList_SET_ITEM( tmp_assattr_name_10, 6, tmp_list_element_4 );
            tmp_mvar_value_52 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileW );

            if (unlikely( tmp_mvar_value_52 == NULL ))
            {
                tmp_mvar_value_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileW );
            }

            if ( tmp_mvar_value_52 == NULL )
            {
                Py_DECREF( tmp_assattr_name_10 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateFileW" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 66;

                goto try_except_handler_5;
            }

            tmp_assattr_target_10 = tmp_mvar_value_52;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_argtypes, tmp_assattr_name_10 );
            Py_DECREF( tmp_assattr_name_10 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_mvar_value_53;
            tmp_mvar_value_53 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileW );

            if (unlikely( tmp_mvar_value_53 == NULL ))
            {
                tmp_mvar_value_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileW );
            }

            if ( tmp_mvar_value_53 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateFileW" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 67;

                goto try_except_handler_5;
            }

            tmp_assign_source_43 = tmp_mvar_value_53;
            UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFile, tmp_assign_source_43 );
        }
        branch_no_6:;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_54;
        tmp_mvar_value_54 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

        if (unlikely( tmp_mvar_value_54 == NULL ))
        {
            tmp_mvar_value_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
        }

        if ( tmp_mvar_value_54 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 70;

            goto try_except_handler_8;
        }

        tmp_tuple_element_5 = tmp_mvar_value_54;
        tmp_assign_source_44 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_assign_source_44, 0, tmp_tuple_element_5 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;

            goto try_except_handler_8;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;

            goto try_except_handler_8;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_6 = tmp_class_creation_2__bases;
        tmp_subscript_name_6 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
        if ( tmp_type_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;

            goto try_except_handler_8;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;

            goto try_except_handler_8;
        }
        condexpr_end_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_46 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;

            goto try_except_handler_8;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;

            goto try_except_handler_8;
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_10 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_10, const_str_plain___prepare__ );
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_11;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_11 = tmp_class_creation_2__metaclass;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;

                goto try_except_handler_8;
            }
            tmp_tuple_element_6 = const_str_plain__OVERLAPPED;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 70;
            tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;

                goto try_except_handler_8;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_47;
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_12;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_12 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_12, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;

                goto try_except_handler_8;
            }
            tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_9;
            }
            else
            {
                goto branch_no_9;
            }
            branch_yes_9:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_13;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_7 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;

                    goto try_except_handler_8;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_13 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_13 == NULL) );
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_13 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 70;

                    goto try_except_handler_8;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_7 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;

                    goto try_except_handler_8;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 70;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_8;
            }
            branch_no_9:;
        }
        goto branch_end_8;
        branch_no_8:;
        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_48;
        }
        branch_end_8:;
    }
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_serial$win32_70 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
        tmp_res = PyObject_SetItem( locals_serial$win32_70, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_plain__OVERLAPPED;
        tmp_res = PyObject_SetItem( locals_serial$win32_70, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;

            goto try_except_handler_10;
        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = const_str_plain__OVERLAPPED;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
            tmp_tuple_element_8 = locals_serial$win32_70;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 70;
            tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;

                goto try_except_handler_10;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_49 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_49 );
        goto try_return_handler_10;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF( locals_serial$win32_70 );
        locals_serial$win32_70 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_serial$win32_70 );
        locals_serial$win32_70 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 70;
        goto try_except_handler_8;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED, tmp_assign_source_49 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_mvar_value_55;
        tmp_mvar_value_55 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );

        if (unlikely( tmp_mvar_value_55 == NULL ))
        {
            tmp_mvar_value_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );
        }

        if ( tmp_mvar_value_55 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_OVERLAPPED" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_51 = tmp_mvar_value_55;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_OVERLAPPED, tmp_assign_source_51 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_mvar_value_56;
        tmp_mvar_value_56 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

        if (unlikely( tmp_mvar_value_56 == NULL ))
        {
            tmp_mvar_value_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
        }

        if ( tmp_mvar_value_56 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;

            goto try_except_handler_11;
        }

        tmp_tuple_element_9 = tmp_mvar_value_56;
        tmp_assign_source_52 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_assign_source_52, 0, tmp_tuple_element_9 );
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_11;
        }
        tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_11;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_subscribed_name_7 = tmp_class_creation_3__bases;
        tmp_subscript_name_7 = const_int_0;
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
        if ( tmp_type_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_11;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
        Py_DECREF( tmp_type_arg_5 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_11;
        }
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_54 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        tmp_key_name_9 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_11;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_11;
        }
        branch_no_10:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_source_name_14;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_14 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_14, const_str_plain___prepare__ );
        tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_15;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_15 = tmp_class_creation_3__metaclass;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain___prepare__ );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_11;
            }
            tmp_tuple_element_10 = const_str_plain__COMSTAT;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 76;
            tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_55 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_11;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_55;
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_16;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_16 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_16, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_11;
            }
            tmp_condition_result_15 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_17;
                PyObject *tmp_type_arg_6;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_11 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 76;

                    goto try_except_handler_11;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_11 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_17 = BUILTIN_TYPE1( tmp_type_arg_6 );
                assert( !(tmp_source_name_17 == NULL) );
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_17 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 76;

                    goto try_except_handler_11;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_11 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 76;

                    goto try_except_handler_11;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 76;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_11;
            }
            branch_no_12:;
        }
        goto branch_end_11;
        branch_no_11:;
        {
            PyObject *tmp_assign_source_56;
            tmp_assign_source_56 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_56;
        }
        branch_end_11:;
    }
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_serial$win32_76 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
        tmp_res = PyObject_SetItem( locals_serial$win32_76, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_13;
        }
        tmp_dictset_value = const_str_plain__COMSTAT;
        tmp_res = PyObject_SetItem( locals_serial$win32_76, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_13;
        }
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_10 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = const_str_plain__COMSTAT;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_12 );
            tmp_tuple_element_12 = locals_serial$win32_76;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 76;
            tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_13;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_58;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_57 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_57 );
        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF( locals_serial$win32_76 );
        locals_serial$win32_76 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_serial$win32_76 );
        locals_serial$win32_76 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 76;
        goto try_except_handler_11;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMSTAT, tmp_assign_source_57 );
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_mvar_value_57;
        tmp_mvar_value_57 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMSTAT );

        if (unlikely( tmp_mvar_value_57 == NULL ))
        {
            tmp_mvar_value_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMSTAT );
        }

        if ( tmp_mvar_value_57 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_COMSTAT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_59 = tmp_mvar_value_57;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_COMSTAT, tmp_assign_source_59 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_mvar_value_58;
        tmp_mvar_value_58 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

        if (unlikely( tmp_mvar_value_58 == NULL ))
        {
            tmp_mvar_value_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
        }

        if ( tmp_mvar_value_58 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;

            goto try_except_handler_14;
        }

        tmp_tuple_element_13 = tmp_mvar_value_58;
        tmp_assign_source_60 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_13 );
        PyTuple_SET_ITEM( tmp_assign_source_60, 0, tmp_tuple_element_13 );
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = PyDict_New();
        assert( tmp_class_creation_4__class_decl_dict == NULL );
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_14;
        }
        tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = const_str_plain_metaclass;
        tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_14;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_subscribed_name_8 = tmp_class_creation_4__bases;
        tmp_subscript_name_8 = const_int_0;
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 0 );
        if ( tmp_type_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_14;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_7 );
        Py_DECREF( tmp_type_arg_7 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_14;
        }
        condexpr_end_4:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_62 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
        Py_DECREF( tmp_metaclass_name_4 );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_14;
        }
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_62;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_name_12;
        tmp_key_name_12 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_14;
        }
        tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_14;
        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_source_name_18;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_source_name_18 = tmp_class_creation_4__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_18, const_str_plain___prepare__ );
        tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_14;
        }
        else
        {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_19;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_source_name_19 = tmp_class_creation_4__metaclass;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain___prepare__ );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;

                goto try_except_handler_14;
            }
            tmp_tuple_element_14 = const_str_plain__DCB;
            tmp_args_name_7 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_14 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_14 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_14 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 82;
            tmp_assign_source_63 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_7, tmp_kw_name_7 );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_name_7 );
            if ( tmp_assign_source_63 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;

                goto try_except_handler_14;
            }
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_63;
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_source_name_20;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_source_name_20 = tmp_class_creation_4__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_20, const_str_plain___getitem__ );
            tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;

                goto try_except_handler_14;
            }
            tmp_condition_result_19 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_15;
            }
            else
            {
                goto branch_no_15;
            }
            branch_yes_15:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_raise_value_4;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_getattr_default_4;
                PyObject *tmp_source_name_21;
                PyObject *tmp_type_arg_8;
                tmp_raise_type_4 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_4__metaclass );
                tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
                tmp_getattr_attr_4 = const_str_plain___name__;
                tmp_getattr_default_4 = const_str_angle_metaclass;
                tmp_tuple_element_15 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
                if ( tmp_tuple_element_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 82;

                    goto try_except_handler_14;
                }
                tmp_right_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_15 );
                CHECK_OBJECT( tmp_class_creation_4__prepared );
                tmp_type_arg_8 = tmp_class_creation_4__prepared;
                tmp_source_name_21 = BUILTIN_TYPE1( tmp_type_arg_8 );
                assert( !(tmp_source_name_21 == NULL) );
                tmp_tuple_element_15 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_21 );
                if ( tmp_tuple_element_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_4 );

                    exception_lineno = 82;

                    goto try_except_handler_14;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_15 );
                tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 82;

                    goto try_except_handler_14;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF( tmp_raise_type_4 );
                exception_value = tmp_raise_value_4;
                exception_lineno = 82;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_14;
            }
            branch_no_15:;
        }
        goto branch_end_14;
        branch_no_14:;
        {
            PyObject *tmp_assign_source_64;
            tmp_assign_source_64 = PyDict_New();
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_64;
        }
        branch_end_14:;
    }
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_serial$win32_82 = tmp_set_locals_4;
            Py_INCREF( tmp_set_locals_4 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
        tmp_res = PyObject_SetItem( locals_serial$win32_82, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_16;
        }
        tmp_dictset_value = const_str_plain__DCB;
        tmp_res = PyObject_SetItem( locals_serial$win32_82, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_16;
        }
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_called_name_12 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_16 = const_str_plain__DCB;
            tmp_args_name_8 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_16 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_16 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_16 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_16 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_16 );
            tmp_tuple_element_16 = locals_serial$win32_82;
            Py_INCREF( tmp_tuple_element_16 );
            PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_16 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 82;
            tmp_assign_source_66 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_8 );
            if ( tmp_assign_source_66 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;

                goto try_except_handler_16;
            }
            assert( outline_3_var___class__ == NULL );
            outline_3_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT( outline_3_var___class__ );
        tmp_assign_source_65 = outline_3_var___class__;
        Py_INCREF( tmp_assign_source_65 );
        goto try_return_handler_16;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF( locals_serial$win32_82 );
        locals_serial$win32_82 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_serial$win32_82 );
        locals_serial$win32_82 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
        Py_DECREF( outline_3_var___class__ );
        outline_3_var___class__ = NULL;

        goto outline_result_4;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 82;
        goto try_except_handler_14;
        outline_result_4:;
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__DCB, tmp_assign_source_65 );
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_mvar_value_59;
        tmp_mvar_value_59 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__DCB );

        if (unlikely( tmp_mvar_value_59 == NULL ))
        {
            tmp_mvar_value_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DCB );
        }

        if ( tmp_mvar_value_59 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_DCB" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_67 = tmp_mvar_value_59;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DCB, tmp_assign_source_67 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_mvar_value_60;
        tmp_mvar_value_60 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

        if (unlikely( tmp_mvar_value_60 == NULL ))
        {
            tmp_mvar_value_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
        }

        if ( tmp_mvar_value_60 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;

            goto try_except_handler_17;
        }

        tmp_tuple_element_17 = tmp_mvar_value_60;
        tmp_assign_source_68 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_17 );
        PyTuple_SET_ITEM( tmp_assign_source_68, 0, tmp_tuple_element_17 );
        assert( tmp_class_creation_5__bases == NULL );
        tmp_class_creation_5__bases = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = PyDict_New();
        assert( tmp_class_creation_5__class_decl_dict == NULL );
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_metaclass_name_5;
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_bases_name_5;
        tmp_key_name_13 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_17;
        }
        tmp_condition_result_20 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_name_14 = const_str_plain_metaclass;
        tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
        if ( tmp_metaclass_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_17;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_subscribed_name_9 = tmp_class_creation_5__bases;
        tmp_subscript_name_9 = const_int_0;
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, 0 );
        if ( tmp_type_arg_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_17;
        }
        tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_9 );
        Py_DECREF( tmp_type_arg_9 );
        if ( tmp_metaclass_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_17;
        }
        condexpr_end_5:;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_bases_name_5 = tmp_class_creation_5__bases;
        tmp_assign_source_70 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
        Py_DECREF( tmp_metaclass_name_5 );
        if ( tmp_assign_source_70 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_17;
        }
        assert( tmp_class_creation_5__metaclass == NULL );
        tmp_class_creation_5__metaclass = tmp_assign_source_70;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        tmp_key_name_15 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_17;
        }
        tmp_condition_result_21 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_16;
        }
        else
        {
            goto branch_no_16;
        }
        branch_yes_16:;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_17;
        }
        branch_no_16:;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_source_name_22;
        CHECK_OBJECT( tmp_class_creation_5__metaclass );
        tmp_source_name_22 = tmp_class_creation_5__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_22, const_str_plain___prepare__ );
        tmp_condition_result_22 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_17;
        }
        else
        {
            goto branch_no_17;
        }
        branch_yes_17:;
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_23;
            PyObject *tmp_args_name_9;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kw_name_9;
            CHECK_OBJECT( tmp_class_creation_5__metaclass );
            tmp_source_name_23 = tmp_class_creation_5__metaclass;
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain___prepare__ );
            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto try_except_handler_17;
            }
            tmp_tuple_element_18 = const_str_plain__COMMTIMEOUTS;
            tmp_args_name_9 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_18 );
            PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_18 );
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_tuple_element_18 = tmp_class_creation_5__bases;
            Py_INCREF( tmp_tuple_element_18 );
            PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_18 );
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 88;
            tmp_assign_source_71 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_9, tmp_kw_name_9 );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_name_9 );
            if ( tmp_assign_source_71 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto try_except_handler_17;
            }
            assert( tmp_class_creation_5__prepared == NULL );
            tmp_class_creation_5__prepared = tmp_assign_source_71;
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_operand_name_5;
            PyObject *tmp_source_name_24;
            CHECK_OBJECT( tmp_class_creation_5__prepared );
            tmp_source_name_24 = tmp_class_creation_5__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_24, const_str_plain___getitem__ );
            tmp_operand_name_5 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto try_except_handler_17;
            }
            tmp_condition_result_23 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_18;
            }
            else
            {
                goto branch_no_18;
            }
            branch_yes_18:;
            {
                PyObject *tmp_raise_type_5;
                PyObject *tmp_raise_value_5;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                PyObject *tmp_tuple_element_19;
                PyObject *tmp_getattr_target_5;
                PyObject *tmp_getattr_attr_5;
                PyObject *tmp_getattr_default_5;
                PyObject *tmp_source_name_25;
                PyObject *tmp_type_arg_10;
                tmp_raise_type_5 = PyExc_TypeError;
                tmp_left_name_5 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_5__metaclass );
                tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
                tmp_getattr_attr_5 = const_str_plain___name__;
                tmp_getattr_default_5 = const_str_angle_metaclass;
                tmp_tuple_element_19 = BUILTIN_GETATTR( tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5 );
                if ( tmp_tuple_element_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 88;

                    goto try_except_handler_17;
                }
                tmp_right_name_5 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_19 );
                CHECK_OBJECT( tmp_class_creation_5__prepared );
                tmp_type_arg_10 = tmp_class_creation_5__prepared;
                tmp_source_name_25 = BUILTIN_TYPE1( tmp_type_arg_10 );
                assert( !(tmp_source_name_25 == NULL) );
                tmp_tuple_element_19 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_25 );
                if ( tmp_tuple_element_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_5 );

                    exception_lineno = 88;

                    goto try_except_handler_17;
                }
                PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_19 );
                tmp_raise_value_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_raise_value_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 88;

                    goto try_except_handler_17;
                }
                exception_type = tmp_raise_type_5;
                Py_INCREF( tmp_raise_type_5 );
                exception_value = tmp_raise_value_5;
                exception_lineno = 88;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_17;
            }
            branch_no_18:;
        }
        goto branch_end_17;
        branch_no_17:;
        {
            PyObject *tmp_assign_source_72;
            tmp_assign_source_72 = PyDict_New();
            assert( tmp_class_creation_5__prepared == NULL );
            tmp_class_creation_5__prepared = tmp_assign_source_72;
        }
        branch_end_17:;
    }
    {
        PyObject *tmp_assign_source_73;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT( tmp_class_creation_5__prepared );
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_serial$win32_88 = tmp_set_locals_5;
            Py_INCREF( tmp_set_locals_5 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
        tmp_res = PyObject_SetItem( locals_serial$win32_88, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_19;
        }
        tmp_dictset_value = const_str_plain__COMMTIMEOUTS;
        tmp_res = PyObject_SetItem( locals_serial$win32_88, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_19;
        }
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kw_name_10;
            CHECK_OBJECT( tmp_class_creation_5__metaclass );
            tmp_called_name_14 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_20 = const_str_plain__COMMTIMEOUTS;
            tmp_args_name_10 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_20 );
            PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_20 );
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_tuple_element_20 = tmp_class_creation_5__bases;
            Py_INCREF( tmp_tuple_element_20 );
            PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_20 );
            tmp_tuple_element_20 = locals_serial$win32_88;
            Py_INCREF( tmp_tuple_element_20 );
            PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_20 );
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 88;
            tmp_assign_source_74 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_10, tmp_kw_name_10 );
            Py_DECREF( tmp_args_name_10 );
            if ( tmp_assign_source_74 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto try_except_handler_19;
            }
            assert( outline_4_var___class__ == NULL );
            outline_4_var___class__ = tmp_assign_source_74;
        }
        CHECK_OBJECT( outline_4_var___class__ );
        tmp_assign_source_73 = outline_4_var___class__;
        Py_INCREF( tmp_assign_source_73 );
        goto try_return_handler_19;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF( locals_serial$win32_88 );
        locals_serial$win32_88 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_serial$win32_88 );
        locals_serial$win32_88 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
        Py_DECREF( outline_4_var___class__ );
        outline_4_var___class__ = NULL;

        goto outline_result_5;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_5;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_5:;
        exception_lineno = 88;
        goto try_except_handler_17;
        outline_result_5:;
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS, tmp_assign_source_73 );
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_mvar_value_61;
        tmp_mvar_value_61 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );

        if (unlikely( tmp_mvar_value_61 == NULL ))
        {
            tmp_mvar_value_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );
        }

        if ( tmp_mvar_value_61 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_COMMTIMEOUTS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_75 = tmp_mvar_value_61;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_COMMTIMEOUTS, tmp_assign_source_75 );
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_source_name_26;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_mvar_value_62;
        PyObject *tmp_subscript_name_10;
        tmp_mvar_value_62 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_62 == NULL ))
        {
            tmp_mvar_value_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_62 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_10 = tmp_mvar_value_62;
        tmp_subscript_name_10 = const_str_plain_kernel32;
        tmp_source_name_26 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        if ( tmp_source_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_76 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_GetLastError );
        Py_DECREF( tmp_source_name_26 );
        if ( tmp_assign_source_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetLastError, tmp_assign_source_76 );
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_mvar_value_63;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_mvar_value_64;
        tmp_mvar_value_63 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_63 == NULL ))
        {
            tmp_mvar_value_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_63 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_11 = tmp_mvar_value_63;
        tmp_mvar_value_64 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetLastError );

        if (unlikely( tmp_mvar_value_64 == NULL ))
        {
            tmp_mvar_value_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetLastError );
        }

        CHECK_OBJECT( tmp_mvar_value_64 );
        tmp_assattr_target_11 = tmp_mvar_value_64;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_restype, tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_mvar_value_65;
        tmp_assattr_name_12 = PyList_New( 0 );
        tmp_mvar_value_65 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetLastError );

        if (unlikely( tmp_mvar_value_65 == NULL ))
        {
            tmp_mvar_value_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetLastError );
        }

        if ( tmp_mvar_value_65 == NULL )
        {
            Py_DECREF( tmp_assattr_name_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetLastError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_12 = tmp_mvar_value_65;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_argtypes, tmp_assattr_name_12 );
        Py_DECREF( tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_66;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_67;
        tmp_mvar_value_66 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

        if (unlikely( tmp_mvar_value_66 == NULL ))
        {
            tmp_mvar_value_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
        }

        if ( tmp_mvar_value_66 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_66;
        tmp_mvar_value_67 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );

        if (unlikely( tmp_mvar_value_67 == NULL ))
        {
            tmp_mvar_value_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );
        }

        if ( tmp_mvar_value_67 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_OVERLAPPED" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_67;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        if ( tmp_assign_source_77 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED, tmp_assign_source_77 );
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_name_16;
        PyObject *tmp_mvar_value_68;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_69;
        tmp_mvar_value_68 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

        if (unlikely( tmp_mvar_value_68 == NULL ))
        {
            tmp_mvar_value_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
        }

        if ( tmp_mvar_value_68 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }

        tmp_called_name_16 = tmp_mvar_value_68;
        tmp_mvar_value_69 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_69 == NULL ))
        {
            tmp_mvar_value_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_69 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_69;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        if ( tmp_assign_source_78 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD, tmp_assign_source_78 );
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_source_name_27;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_mvar_value_70;
        PyObject *tmp_subscript_name_11;
        tmp_mvar_value_70 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_70 == NULL ))
        {
            tmp_mvar_value_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_70 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_11 = tmp_mvar_value_70;
        tmp_subscript_name_11 = const_str_plain_kernel32;
        tmp_source_name_27 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
        if ( tmp_source_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_79 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_GetOverlappedResult );
        Py_DECREF( tmp_source_name_27 );
        if ( tmp_assign_source_79 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult, tmp_assign_source_79 );
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_mvar_value_71;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_mvar_value_72;
        tmp_mvar_value_71 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_71 == NULL ))
        {
            tmp_mvar_value_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_71 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_13 = tmp_mvar_value_71;
        tmp_mvar_value_72 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult );

        if (unlikely( tmp_mvar_value_72 == NULL ))
        {
            tmp_mvar_value_72 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult );
        }

        CHECK_OBJECT( tmp_mvar_value_72 );
        tmp_assattr_target_13 = tmp_mvar_value_72;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_restype, tmp_assattr_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_list_element_5;
        PyObject *tmp_mvar_value_73;
        PyObject *tmp_mvar_value_74;
        PyObject *tmp_mvar_value_75;
        PyObject *tmp_mvar_value_76;
        PyObject *tmp_assattr_target_14;
        PyObject *tmp_mvar_value_77;
        tmp_mvar_value_73 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_73 == NULL ))
        {
            tmp_mvar_value_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_73 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }

        tmp_list_element_5 = tmp_mvar_value_73;
        tmp_assattr_name_14 = PyList_New( 4 );
        Py_INCREF( tmp_list_element_5 );
        PyList_SET_ITEM( tmp_assattr_name_14, 0, tmp_list_element_5 );
        tmp_mvar_value_74 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );

        if (unlikely( tmp_mvar_value_74 == NULL ))
        {
            tmp_mvar_value_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );
        }

        if ( tmp_mvar_value_74 == NULL )
        {
            Py_DECREF( tmp_assattr_name_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPOVERLAPPED" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }

        tmp_list_element_5 = tmp_mvar_value_74;
        Py_INCREF( tmp_list_element_5 );
        PyList_SET_ITEM( tmp_assattr_name_14, 1, tmp_list_element_5 );
        tmp_mvar_value_75 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

        if (unlikely( tmp_mvar_value_75 == NULL ))
        {
            tmp_mvar_value_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
        }

        if ( tmp_mvar_value_75 == NULL )
        {
            Py_DECREF( tmp_assattr_name_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }

        tmp_list_element_5 = tmp_mvar_value_75;
        Py_INCREF( tmp_list_element_5 );
        PyList_SET_ITEM( tmp_assattr_name_14, 2, tmp_list_element_5 );
        tmp_mvar_value_76 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_76 == NULL ))
        {
            tmp_mvar_value_76 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_76 == NULL )
        {
            Py_DECREF( tmp_assattr_name_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }

        tmp_list_element_5 = tmp_mvar_value_76;
        Py_INCREF( tmp_list_element_5 );
        PyList_SET_ITEM( tmp_assattr_name_14, 3, tmp_list_element_5 );
        tmp_mvar_value_77 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult );

        if (unlikely( tmp_mvar_value_77 == NULL ))
        {
            tmp_mvar_value_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult );
        }

        if ( tmp_mvar_value_77 == NULL )
        {
            Py_DECREF( tmp_assattr_name_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetOverlappedResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_14 = tmp_mvar_value_77;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_argtypes, tmp_assattr_name_14 );
        Py_DECREF( tmp_assattr_name_14 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_source_name_28;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_mvar_value_78;
        PyObject *tmp_subscript_name_12;
        tmp_mvar_value_78 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_78 == NULL ))
        {
            tmp_mvar_value_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_78 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_12 = tmp_mvar_value_78;
        tmp_subscript_name_12 = const_str_plain_kernel32;
        tmp_source_name_28 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
        if ( tmp_source_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_80 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_ResetEvent );
        Py_DECREF( tmp_source_name_28 );
        if ( tmp_assign_source_80 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ResetEvent, tmp_assign_source_80 );
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_mvar_value_79;
        PyObject *tmp_assattr_target_15;
        PyObject *tmp_mvar_value_80;
        tmp_mvar_value_79 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_79 == NULL ))
        {
            tmp_mvar_value_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_79 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_15 = tmp_mvar_value_79;
        tmp_mvar_value_80 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ResetEvent );

        if (unlikely( tmp_mvar_value_80 == NULL ))
        {
            tmp_mvar_value_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResetEvent );
        }

        CHECK_OBJECT( tmp_mvar_value_80 );
        tmp_assattr_target_15 = tmp_mvar_value_80;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_restype, tmp_assattr_name_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_list_element_6;
        PyObject *tmp_mvar_value_81;
        PyObject *tmp_assattr_target_16;
        PyObject *tmp_mvar_value_82;
        tmp_mvar_value_81 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_81 == NULL ))
        {
            tmp_mvar_value_81 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_81 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }

        tmp_list_element_6 = tmp_mvar_value_81;
        tmp_assattr_name_16 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_6 );
        PyList_SET_ITEM( tmp_assattr_name_16, 0, tmp_list_element_6 );
        tmp_mvar_value_82 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ResetEvent );

        if (unlikely( tmp_mvar_value_82 == NULL ))
        {
            tmp_mvar_value_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResetEvent );
        }

        if ( tmp_mvar_value_82 == NULL )
        {
            Py_DECREF( tmp_assattr_name_16 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResetEvent" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_16 = tmp_mvar_value_82;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_argtypes, tmp_assattr_name_16 );
        Py_DECREF( tmp_assattr_name_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_mvar_value_83;
        tmp_mvar_value_83 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p );

        if (unlikely( tmp_mvar_value_83 == NULL ))
        {
            tmp_mvar_value_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
        }

        if ( tmp_mvar_value_83 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_void_p" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_81 = tmp_mvar_value_83;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCVOID, tmp_assign_source_81 );
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_source_name_29;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_mvar_value_84;
        PyObject *tmp_subscript_name_13;
        tmp_mvar_value_84 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_84 == NULL ))
        {
            tmp_mvar_value_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_84 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_13 = tmp_mvar_value_84;
        tmp_subscript_name_13 = const_str_plain_kernel32;
        tmp_source_name_29 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
        if ( tmp_source_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_82 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_WriteFile );
        Py_DECREF( tmp_source_name_29 );
        if ( tmp_assign_source_82 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WriteFile, tmp_assign_source_82 );
    }
    {
        PyObject *tmp_assattr_name_17;
        PyObject *tmp_mvar_value_85;
        PyObject *tmp_assattr_target_17;
        PyObject *tmp_mvar_value_86;
        tmp_mvar_value_85 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_85 == NULL ))
        {
            tmp_mvar_value_85 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_85 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_17 = tmp_mvar_value_85;
        tmp_mvar_value_86 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WriteFile );

        if (unlikely( tmp_mvar_value_86 == NULL ))
        {
            tmp_mvar_value_86 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WriteFile );
        }

        CHECK_OBJECT( tmp_mvar_value_86 );
        tmp_assattr_target_17 = tmp_mvar_value_86;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_restype, tmp_assattr_name_17 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_list_element_7;
        PyObject *tmp_mvar_value_87;
        PyObject *tmp_mvar_value_88;
        PyObject *tmp_mvar_value_89;
        PyObject *tmp_mvar_value_90;
        PyObject *tmp_mvar_value_91;
        PyObject *tmp_assattr_target_18;
        PyObject *tmp_mvar_value_92;
        tmp_mvar_value_87 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_87 == NULL ))
        {
            tmp_mvar_value_87 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_87 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_list_element_7 = tmp_mvar_value_87;
        tmp_assattr_name_18 = PyList_New( 5 );
        Py_INCREF( tmp_list_element_7 );
        PyList_SET_ITEM( tmp_assattr_name_18, 0, tmp_list_element_7 );
        tmp_mvar_value_88 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCVOID );

        if (unlikely( tmp_mvar_value_88 == NULL ))
        {
            tmp_mvar_value_88 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCVOID );
        }

        if ( tmp_mvar_value_88 == NULL )
        {
            Py_DECREF( tmp_assattr_name_18 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCVOID" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_list_element_7 = tmp_mvar_value_88;
        Py_INCREF( tmp_list_element_7 );
        PyList_SET_ITEM( tmp_assattr_name_18, 1, tmp_list_element_7 );
        tmp_mvar_value_89 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_89 == NULL ))
        {
            tmp_mvar_value_89 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_89 == NULL )
        {
            Py_DECREF( tmp_assattr_name_18 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_list_element_7 = tmp_mvar_value_89;
        Py_INCREF( tmp_list_element_7 );
        PyList_SET_ITEM( tmp_assattr_name_18, 2, tmp_list_element_7 );
        tmp_mvar_value_90 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

        if (unlikely( tmp_mvar_value_90 == NULL ))
        {
            tmp_mvar_value_90 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
        }

        if ( tmp_mvar_value_90 == NULL )
        {
            Py_DECREF( tmp_assattr_name_18 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_list_element_7 = tmp_mvar_value_90;
        Py_INCREF( tmp_list_element_7 );
        PyList_SET_ITEM( tmp_assattr_name_18, 3, tmp_list_element_7 );
        tmp_mvar_value_91 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );

        if (unlikely( tmp_mvar_value_91 == NULL ))
        {
            tmp_mvar_value_91 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );
        }

        if ( tmp_mvar_value_91 == NULL )
        {
            Py_DECREF( tmp_assattr_name_18 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPOVERLAPPED" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_list_element_7 = tmp_mvar_value_91;
        Py_INCREF( tmp_list_element_7 );
        PyList_SET_ITEM( tmp_assattr_name_18, 4, tmp_list_element_7 );
        tmp_mvar_value_92 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WriteFile );

        if (unlikely( tmp_mvar_value_92 == NULL ))
        {
            tmp_mvar_value_92 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WriteFile );
        }

        if ( tmp_mvar_value_92 == NULL )
        {
            Py_DECREF( tmp_assattr_name_18 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WriteFile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_18 = tmp_mvar_value_92;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_argtypes, tmp_assattr_name_18 );
        Py_DECREF( tmp_assattr_name_18 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_mvar_value_93;
        tmp_mvar_value_93 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p );

        if (unlikely( tmp_mvar_value_93 == NULL ))
        {
            tmp_mvar_value_93 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
        }

        if ( tmp_mvar_value_93 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_void_p" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_83 = tmp_mvar_value_93;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPVOID, tmp_assign_source_83 );
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_source_name_30;
        PyObject *tmp_subscribed_name_14;
        PyObject *tmp_mvar_value_94;
        PyObject *tmp_subscript_name_14;
        tmp_mvar_value_94 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_94 == NULL ))
        {
            tmp_mvar_value_94 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_94 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_14 = tmp_mvar_value_94;
        tmp_subscript_name_14 = const_str_plain_kernel32;
        tmp_source_name_30 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
        if ( tmp_source_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_84 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_ReadFile );
        Py_DECREF( tmp_source_name_30 );
        if ( tmp_assign_source_84 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ReadFile, tmp_assign_source_84 );
    }
    {
        PyObject *tmp_assattr_name_19;
        PyObject *tmp_mvar_value_95;
        PyObject *tmp_assattr_target_19;
        PyObject *tmp_mvar_value_96;
        tmp_mvar_value_95 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_95 == NULL ))
        {
            tmp_mvar_value_95 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_95 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_19 = tmp_mvar_value_95;
        tmp_mvar_value_96 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ReadFile );

        if (unlikely( tmp_mvar_value_96 == NULL ))
        {
            tmp_mvar_value_96 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadFile );
        }

        CHECK_OBJECT( tmp_mvar_value_96 );
        tmp_assattr_target_19 = tmp_mvar_value_96;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_restype, tmp_assattr_name_19 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_20;
        PyObject *tmp_list_element_8;
        PyObject *tmp_mvar_value_97;
        PyObject *tmp_mvar_value_98;
        PyObject *tmp_mvar_value_99;
        PyObject *tmp_mvar_value_100;
        PyObject *tmp_mvar_value_101;
        PyObject *tmp_assattr_target_20;
        PyObject *tmp_mvar_value_102;
        tmp_mvar_value_97 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_97 == NULL ))
        {
            tmp_mvar_value_97 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_97 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }

        tmp_list_element_8 = tmp_mvar_value_97;
        tmp_assattr_name_20 = PyList_New( 5 );
        Py_INCREF( tmp_list_element_8 );
        PyList_SET_ITEM( tmp_assattr_name_20, 0, tmp_list_element_8 );
        tmp_mvar_value_98 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPVOID );

        if (unlikely( tmp_mvar_value_98 == NULL ))
        {
            tmp_mvar_value_98 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPVOID );
        }

        if ( tmp_mvar_value_98 == NULL )
        {
            Py_DECREF( tmp_assattr_name_20 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPVOID" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }

        tmp_list_element_8 = tmp_mvar_value_98;
        Py_INCREF( tmp_list_element_8 );
        PyList_SET_ITEM( tmp_assattr_name_20, 1, tmp_list_element_8 );
        tmp_mvar_value_99 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_99 == NULL ))
        {
            tmp_mvar_value_99 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_99 == NULL )
        {
            Py_DECREF( tmp_assattr_name_20 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }

        tmp_list_element_8 = tmp_mvar_value_99;
        Py_INCREF( tmp_list_element_8 );
        PyList_SET_ITEM( tmp_assattr_name_20, 2, tmp_list_element_8 );
        tmp_mvar_value_100 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

        if (unlikely( tmp_mvar_value_100 == NULL ))
        {
            tmp_mvar_value_100 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
        }

        if ( tmp_mvar_value_100 == NULL )
        {
            Py_DECREF( tmp_assattr_name_20 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }

        tmp_list_element_8 = tmp_mvar_value_100;
        Py_INCREF( tmp_list_element_8 );
        PyList_SET_ITEM( tmp_assattr_name_20, 3, tmp_list_element_8 );
        tmp_mvar_value_101 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );

        if (unlikely( tmp_mvar_value_101 == NULL ))
        {
            tmp_mvar_value_101 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );
        }

        if ( tmp_mvar_value_101 == NULL )
        {
            Py_DECREF( tmp_assattr_name_20 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPOVERLAPPED" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }

        tmp_list_element_8 = tmp_mvar_value_101;
        Py_INCREF( tmp_list_element_8 );
        PyList_SET_ITEM( tmp_assattr_name_20, 4, tmp_list_element_8 );
        tmp_mvar_value_102 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ReadFile );

        if (unlikely( tmp_mvar_value_102 == NULL ))
        {
            tmp_mvar_value_102 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadFile );
        }

        if ( tmp_mvar_value_102 == NULL )
        {
            Py_DECREF( tmp_assattr_name_20 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ReadFile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_20 = tmp_mvar_value_102;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_argtypes, tmp_assattr_name_20 );
        Py_DECREF( tmp_assattr_name_20 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_source_name_31;
        PyObject *tmp_subscribed_name_15;
        PyObject *tmp_mvar_value_103;
        PyObject *tmp_subscript_name_15;
        tmp_mvar_value_103 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_103 == NULL ))
        {
            tmp_mvar_value_103 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_103 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_15 = tmp_mvar_value_103;
        tmp_subscript_name_15 = const_str_plain_kernel32;
        tmp_source_name_31 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
        if ( tmp_source_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_85 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_CloseHandle );
        Py_DECREF( tmp_source_name_31 );
        if ( tmp_assign_source_85 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CloseHandle, tmp_assign_source_85 );
    }
    {
        PyObject *tmp_assattr_name_21;
        PyObject *tmp_mvar_value_104;
        PyObject *tmp_assattr_target_21;
        PyObject *tmp_mvar_value_105;
        tmp_mvar_value_104 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_104 == NULL ))
        {
            tmp_mvar_value_104 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_104 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_21 = tmp_mvar_value_104;
        tmp_mvar_value_105 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CloseHandle );

        if (unlikely( tmp_mvar_value_105 == NULL ))
        {
            tmp_mvar_value_105 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CloseHandle );
        }

        CHECK_OBJECT( tmp_mvar_value_105 );
        tmp_assattr_target_21 = tmp_mvar_value_105;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_restype, tmp_assattr_name_21 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_22;
        PyObject *tmp_list_element_9;
        PyObject *tmp_mvar_value_106;
        PyObject *tmp_assattr_target_22;
        PyObject *tmp_mvar_value_107;
        tmp_mvar_value_106 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_106 == NULL ))
        {
            tmp_mvar_value_106 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_106 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_list_element_9 = tmp_mvar_value_106;
        tmp_assattr_name_22 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_9 );
        PyList_SET_ITEM( tmp_assattr_name_22, 0, tmp_list_element_9 );
        tmp_mvar_value_107 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CloseHandle );

        if (unlikely( tmp_mvar_value_107 == NULL ))
        {
            tmp_mvar_value_107 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CloseHandle );
        }

        if ( tmp_mvar_value_107 == NULL )
        {
            Py_DECREF( tmp_assattr_name_22 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CloseHandle" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_22 = tmp_mvar_value_107;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_22, const_str_plain_argtypes, tmp_assattr_name_22 );
        Py_DECREF( tmp_assattr_name_22 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_source_name_32;
        PyObject *tmp_subscribed_name_16;
        PyObject *tmp_mvar_value_108;
        PyObject *tmp_subscript_name_16;
        tmp_mvar_value_108 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_108 == NULL ))
        {
            tmp_mvar_value_108 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_108 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_16 = tmp_mvar_value_108;
        tmp_subscript_name_16 = const_str_plain_kernel32;
        tmp_source_name_32 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
        if ( tmp_source_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_86 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_ClearCommBreak );
        Py_DECREF( tmp_source_name_32 );
        if ( tmp_assign_source_86 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommBreak, tmp_assign_source_86 );
    }
    {
        PyObject *tmp_assattr_name_23;
        PyObject *tmp_mvar_value_109;
        PyObject *tmp_assattr_target_23;
        PyObject *tmp_mvar_value_110;
        tmp_mvar_value_109 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_109 == NULL ))
        {
            tmp_mvar_value_109 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_109 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_23 = tmp_mvar_value_109;
        tmp_mvar_value_110 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommBreak );

        if (unlikely( tmp_mvar_value_110 == NULL ))
        {
            tmp_mvar_value_110 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClearCommBreak );
        }

        CHECK_OBJECT( tmp_mvar_value_110 );
        tmp_assattr_target_23 = tmp_mvar_value_110;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_23, const_str_plain_restype, tmp_assattr_name_23 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_24;
        PyObject *tmp_list_element_10;
        PyObject *tmp_mvar_value_111;
        PyObject *tmp_assattr_target_24;
        PyObject *tmp_mvar_value_112;
        tmp_mvar_value_111 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_111 == NULL ))
        {
            tmp_mvar_value_111 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_111 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }

        tmp_list_element_10 = tmp_mvar_value_111;
        tmp_assattr_name_24 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_10 );
        PyList_SET_ITEM( tmp_assattr_name_24, 0, tmp_list_element_10 );
        tmp_mvar_value_112 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommBreak );

        if (unlikely( tmp_mvar_value_112 == NULL ))
        {
            tmp_mvar_value_112 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClearCommBreak );
        }

        if ( tmp_mvar_value_112 == NULL )
        {
            Py_DECREF( tmp_assattr_name_24 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ClearCommBreak" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_24 = tmp_mvar_value_112;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_24, const_str_plain_argtypes, tmp_assattr_name_24 );
        Py_DECREF( tmp_assattr_name_24 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_113;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_114;
        tmp_mvar_value_113 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

        if (unlikely( tmp_mvar_value_113 == NULL ))
        {
            tmp_mvar_value_113 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
        }

        if ( tmp_mvar_value_113 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_113;
        tmp_mvar_value_114 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMSTAT );

        if (unlikely( tmp_mvar_value_114 == NULL ))
        {
            tmp_mvar_value_114 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMSTAT );
        }

        if ( tmp_mvar_value_114 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_COMSTAT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_114;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_87 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        if ( tmp_assign_source_87 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMSTAT, tmp_assign_source_87 );
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_source_name_33;
        PyObject *tmp_subscribed_name_17;
        PyObject *tmp_mvar_value_115;
        PyObject *tmp_subscript_name_17;
        tmp_mvar_value_115 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_115 == NULL ))
        {
            tmp_mvar_value_115 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_115 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_17 = tmp_mvar_value_115;
        tmp_subscript_name_17 = const_str_plain_kernel32;
        tmp_source_name_33 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
        if ( tmp_source_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_88 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_ClearCommError );
        Py_DECREF( tmp_source_name_33 );
        if ( tmp_assign_source_88 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommError, tmp_assign_source_88 );
    }
    {
        PyObject *tmp_assattr_name_25;
        PyObject *tmp_mvar_value_116;
        PyObject *tmp_assattr_target_25;
        PyObject *tmp_mvar_value_117;
        tmp_mvar_value_116 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_116 == NULL ))
        {
            tmp_mvar_value_116 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_116 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_25 = tmp_mvar_value_116;
        tmp_mvar_value_117 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommError );

        if (unlikely( tmp_mvar_value_117 == NULL ))
        {
            tmp_mvar_value_117 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClearCommError );
        }

        CHECK_OBJECT( tmp_mvar_value_117 );
        tmp_assattr_target_25 = tmp_mvar_value_117;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_25, const_str_plain_restype, tmp_assattr_name_25 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_26;
        PyObject *tmp_list_element_11;
        PyObject *tmp_mvar_value_118;
        PyObject *tmp_mvar_value_119;
        PyObject *tmp_mvar_value_120;
        PyObject *tmp_assattr_target_26;
        PyObject *tmp_mvar_value_121;
        tmp_mvar_value_118 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_118 == NULL ))
        {
            tmp_mvar_value_118 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_118 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }

        tmp_list_element_11 = tmp_mvar_value_118;
        tmp_assattr_name_26 = PyList_New( 3 );
        Py_INCREF( tmp_list_element_11 );
        PyList_SET_ITEM( tmp_assattr_name_26, 0, tmp_list_element_11 );
        tmp_mvar_value_119 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

        if (unlikely( tmp_mvar_value_119 == NULL ))
        {
            tmp_mvar_value_119 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
        }

        if ( tmp_mvar_value_119 == NULL )
        {
            Py_DECREF( tmp_assattr_name_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }

        tmp_list_element_11 = tmp_mvar_value_119;
        Py_INCREF( tmp_list_element_11 );
        PyList_SET_ITEM( tmp_assattr_name_26, 1, tmp_list_element_11 );
        tmp_mvar_value_120 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMSTAT );

        if (unlikely( tmp_mvar_value_120 == NULL ))
        {
            tmp_mvar_value_120 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCOMSTAT );
        }

        if ( tmp_mvar_value_120 == NULL )
        {
            Py_DECREF( tmp_assattr_name_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCOMSTAT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }

        tmp_list_element_11 = tmp_mvar_value_120;
        Py_INCREF( tmp_list_element_11 );
        PyList_SET_ITEM( tmp_assattr_name_26, 2, tmp_list_element_11 );
        tmp_mvar_value_121 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommError );

        if (unlikely( tmp_mvar_value_121 == NULL ))
        {
            tmp_mvar_value_121 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClearCommError );
        }

        if ( tmp_mvar_value_121 == NULL )
        {
            Py_DECREF( tmp_assattr_name_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ClearCommError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_26 = tmp_mvar_value_121;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_26, const_str_plain_argtypes, tmp_assattr_name_26 );
        Py_DECREF( tmp_assattr_name_26 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_source_name_34;
        PyObject *tmp_subscribed_name_18;
        PyObject *tmp_mvar_value_122;
        PyObject *tmp_subscript_name_18;
        tmp_mvar_value_122 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_122 == NULL ))
        {
            tmp_mvar_value_122 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_122 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_18 = tmp_mvar_value_122;
        tmp_subscript_name_18 = const_str_plain_kernel32;
        tmp_source_name_34 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
        if ( tmp_source_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_89 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_SetupComm );
        Py_DECREF( tmp_source_name_34 );
        if ( tmp_assign_source_89 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetupComm, tmp_assign_source_89 );
    }
    {
        PyObject *tmp_assattr_name_27;
        PyObject *tmp_mvar_value_123;
        PyObject *tmp_assattr_target_27;
        PyObject *tmp_mvar_value_124;
        tmp_mvar_value_123 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_123 == NULL ))
        {
            tmp_mvar_value_123 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_123 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_27 = tmp_mvar_value_123;
        tmp_mvar_value_124 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetupComm );

        if (unlikely( tmp_mvar_value_124 == NULL ))
        {
            tmp_mvar_value_124 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupComm );
        }

        CHECK_OBJECT( tmp_mvar_value_124 );
        tmp_assattr_target_27 = tmp_mvar_value_124;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_27, const_str_plain_restype, tmp_assattr_name_27 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_28;
        PyObject *tmp_list_element_12;
        PyObject *tmp_mvar_value_125;
        PyObject *tmp_mvar_value_126;
        PyObject *tmp_mvar_value_127;
        PyObject *tmp_assattr_target_28;
        PyObject *tmp_mvar_value_128;
        tmp_mvar_value_125 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_125 == NULL ))
        {
            tmp_mvar_value_125 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_125 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }

        tmp_list_element_12 = tmp_mvar_value_125;
        tmp_assattr_name_28 = PyList_New( 3 );
        Py_INCREF( tmp_list_element_12 );
        PyList_SET_ITEM( tmp_assattr_name_28, 0, tmp_list_element_12 );
        tmp_mvar_value_126 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_126 == NULL ))
        {
            tmp_mvar_value_126 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_126 == NULL )
        {
            Py_DECREF( tmp_assattr_name_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }

        tmp_list_element_12 = tmp_mvar_value_126;
        Py_INCREF( tmp_list_element_12 );
        PyList_SET_ITEM( tmp_assattr_name_28, 1, tmp_list_element_12 );
        tmp_mvar_value_127 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_127 == NULL ))
        {
            tmp_mvar_value_127 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_127 == NULL )
        {
            Py_DECREF( tmp_assattr_name_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }

        tmp_list_element_12 = tmp_mvar_value_127;
        Py_INCREF( tmp_list_element_12 );
        PyList_SET_ITEM( tmp_assattr_name_28, 2, tmp_list_element_12 );
        tmp_mvar_value_128 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetupComm );

        if (unlikely( tmp_mvar_value_128 == NULL ))
        {
            tmp_mvar_value_128 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupComm );
        }

        if ( tmp_mvar_value_128 == NULL )
        {
            Py_DECREF( tmp_assattr_name_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupComm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_28 = tmp_mvar_value_128;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_28, const_str_plain_argtypes, tmp_assattr_name_28 );
        Py_DECREF( tmp_assattr_name_28 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_source_name_35;
        PyObject *tmp_subscribed_name_19;
        PyObject *tmp_mvar_value_129;
        PyObject *tmp_subscript_name_19;
        tmp_mvar_value_129 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_129 == NULL ))
        {
            tmp_mvar_value_129 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_129 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_19 = tmp_mvar_value_129;
        tmp_subscript_name_19 = const_str_plain_kernel32;
        tmp_source_name_35 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
        if ( tmp_source_name_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_90 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_EscapeCommFunction );
        Py_DECREF( tmp_source_name_35 );
        if ( tmp_assign_source_90 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction, tmp_assign_source_90 );
    }
    {
        PyObject *tmp_assattr_name_29;
        PyObject *tmp_mvar_value_130;
        PyObject *tmp_assattr_target_29;
        PyObject *tmp_mvar_value_131;
        tmp_mvar_value_130 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_130 == NULL ))
        {
            tmp_mvar_value_130 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_130 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_29 = tmp_mvar_value_130;
        tmp_mvar_value_131 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction );

        if (unlikely( tmp_mvar_value_131 == NULL ))
        {
            tmp_mvar_value_131 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction );
        }

        CHECK_OBJECT( tmp_mvar_value_131 );
        tmp_assattr_target_29 = tmp_mvar_value_131;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_29, const_str_plain_restype, tmp_assattr_name_29 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_30;
        PyObject *tmp_list_element_13;
        PyObject *tmp_mvar_value_132;
        PyObject *tmp_mvar_value_133;
        PyObject *tmp_assattr_target_30;
        PyObject *tmp_mvar_value_134;
        tmp_mvar_value_132 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_132 == NULL ))
        {
            tmp_mvar_value_132 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_132 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }

        tmp_list_element_13 = tmp_mvar_value_132;
        tmp_assattr_name_30 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_13 );
        PyList_SET_ITEM( tmp_assattr_name_30, 0, tmp_list_element_13 );
        tmp_mvar_value_133 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_133 == NULL ))
        {
            tmp_mvar_value_133 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_133 == NULL )
        {
            Py_DECREF( tmp_assattr_name_30 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }

        tmp_list_element_13 = tmp_mvar_value_133;
        Py_INCREF( tmp_list_element_13 );
        PyList_SET_ITEM( tmp_assattr_name_30, 1, tmp_list_element_13 );
        tmp_mvar_value_134 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction );

        if (unlikely( tmp_mvar_value_134 == NULL ))
        {
            tmp_mvar_value_134 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction );
        }

        if ( tmp_mvar_value_134 == NULL )
        {
            Py_DECREF( tmp_assattr_name_30 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EscapeCommFunction" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_30 = tmp_mvar_value_134;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_30, const_str_plain_argtypes, tmp_assattr_name_30 );
        Py_DECREF( tmp_assattr_name_30 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_source_name_36;
        PyObject *tmp_subscribed_name_20;
        PyObject *tmp_mvar_value_135;
        PyObject *tmp_subscript_name_20;
        tmp_mvar_value_135 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_135 == NULL ))
        {
            tmp_mvar_value_135 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_135 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_20 = tmp_mvar_value_135;
        tmp_subscript_name_20 = const_str_plain_kernel32;
        tmp_source_name_36 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
        if ( tmp_source_name_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_91 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_GetCommModemStatus );
        Py_DECREF( tmp_source_name_36 );
        if ( tmp_assign_source_91 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus, tmp_assign_source_91 );
    }
    {
        PyObject *tmp_assattr_name_31;
        PyObject *tmp_mvar_value_136;
        PyObject *tmp_assattr_target_31;
        PyObject *tmp_mvar_value_137;
        tmp_mvar_value_136 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_136 == NULL ))
        {
            tmp_mvar_value_136 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_136 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_31 = tmp_mvar_value_136;
        tmp_mvar_value_137 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus );

        if (unlikely( tmp_mvar_value_137 == NULL ))
        {
            tmp_mvar_value_137 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus );
        }

        CHECK_OBJECT( tmp_mvar_value_137 );
        tmp_assattr_target_31 = tmp_mvar_value_137;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_31, const_str_plain_restype, tmp_assattr_name_31 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_32;
        PyObject *tmp_list_element_14;
        PyObject *tmp_mvar_value_138;
        PyObject *tmp_mvar_value_139;
        PyObject *tmp_assattr_target_32;
        PyObject *tmp_mvar_value_140;
        tmp_mvar_value_138 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_138 == NULL ))
        {
            tmp_mvar_value_138 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_138 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }

        tmp_list_element_14 = tmp_mvar_value_138;
        tmp_assattr_name_32 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_14 );
        PyList_SET_ITEM( tmp_assattr_name_32, 0, tmp_list_element_14 );
        tmp_mvar_value_139 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

        if (unlikely( tmp_mvar_value_139 == NULL ))
        {
            tmp_mvar_value_139 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
        }

        if ( tmp_mvar_value_139 == NULL )
        {
            Py_DECREF( tmp_assattr_name_32 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }

        tmp_list_element_14 = tmp_mvar_value_139;
        Py_INCREF( tmp_list_element_14 );
        PyList_SET_ITEM( tmp_assattr_name_32, 1, tmp_list_element_14 );
        tmp_mvar_value_140 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus );

        if (unlikely( tmp_mvar_value_140 == NULL ))
        {
            tmp_mvar_value_140 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus );
        }

        if ( tmp_mvar_value_140 == NULL )
        {
            Py_DECREF( tmp_assattr_name_32 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetCommModemStatus" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_32 = tmp_mvar_value_140;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_32, const_str_plain_argtypes, tmp_assattr_name_32 );
        Py_DECREF( tmp_assattr_name_32 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_name_18;
        PyObject *tmp_mvar_value_141;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_142;
        tmp_mvar_value_141 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

        if (unlikely( tmp_mvar_value_141 == NULL ))
        {
            tmp_mvar_value_141 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
        }

        if ( tmp_mvar_value_141 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }

        tmp_called_name_18 = tmp_mvar_value_141;
        tmp_mvar_value_142 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__DCB );

        if (unlikely( tmp_mvar_value_142 == NULL ))
        {
            tmp_mvar_value_142 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DCB );
        }

        if ( tmp_mvar_value_142 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_DCB" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_142;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_92 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        if ( tmp_assign_source_92 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDCB, tmp_assign_source_92 );
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_source_name_37;
        PyObject *tmp_subscribed_name_21;
        PyObject *tmp_mvar_value_143;
        PyObject *tmp_subscript_name_21;
        tmp_mvar_value_143 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_143 == NULL ))
        {
            tmp_mvar_value_143 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_143 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_21 = tmp_mvar_value_143;
        tmp_subscript_name_21 = const_str_plain_kernel32;
        tmp_source_name_37 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
        if ( tmp_source_name_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_93 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_GetCommState );
        Py_DECREF( tmp_source_name_37 );
        if ( tmp_assign_source_93 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommState, tmp_assign_source_93 );
    }
    {
        PyObject *tmp_assattr_name_33;
        PyObject *tmp_mvar_value_144;
        PyObject *tmp_assattr_target_33;
        PyObject *tmp_mvar_value_145;
        tmp_mvar_value_144 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_144 == NULL ))
        {
            tmp_mvar_value_144 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_144 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_33 = tmp_mvar_value_144;
        tmp_mvar_value_145 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommState );

        if (unlikely( tmp_mvar_value_145 == NULL ))
        {
            tmp_mvar_value_145 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommState );
        }

        CHECK_OBJECT( tmp_mvar_value_145 );
        tmp_assattr_target_33 = tmp_mvar_value_145;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_33, const_str_plain_restype, tmp_assattr_name_33 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_34;
        PyObject *tmp_list_element_15;
        PyObject *tmp_mvar_value_146;
        PyObject *tmp_mvar_value_147;
        PyObject *tmp_assattr_target_34;
        PyObject *tmp_mvar_value_148;
        tmp_mvar_value_146 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_146 == NULL ))
        {
            tmp_mvar_value_146 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_146 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }

        tmp_list_element_15 = tmp_mvar_value_146;
        tmp_assattr_name_34 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_15 );
        PyList_SET_ITEM( tmp_assattr_name_34, 0, tmp_list_element_15 );
        tmp_mvar_value_147 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDCB );

        if (unlikely( tmp_mvar_value_147 == NULL ))
        {
            tmp_mvar_value_147 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDCB );
        }

        if ( tmp_mvar_value_147 == NULL )
        {
            Py_DECREF( tmp_assattr_name_34 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDCB" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }

        tmp_list_element_15 = tmp_mvar_value_147;
        Py_INCREF( tmp_list_element_15 );
        PyList_SET_ITEM( tmp_assattr_name_34, 1, tmp_list_element_15 );
        tmp_mvar_value_148 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommState );

        if (unlikely( tmp_mvar_value_148 == NULL ))
        {
            tmp_mvar_value_148 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommState );
        }

        if ( tmp_mvar_value_148 == NULL )
        {
            Py_DECREF( tmp_assattr_name_34 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetCommState" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_34 = tmp_mvar_value_148;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_34, const_str_plain_argtypes, tmp_assattr_name_34 );
        Py_DECREF( tmp_assattr_name_34 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_149;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_mvar_value_150;
        tmp_mvar_value_149 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

        if (unlikely( tmp_mvar_value_149 == NULL ))
        {
            tmp_mvar_value_149 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
        }

        if ( tmp_mvar_value_149 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }

        tmp_called_name_19 = tmp_mvar_value_149;
        tmp_mvar_value_150 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );

        if (unlikely( tmp_mvar_value_150 == NULL ))
        {
            tmp_mvar_value_150 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );
        }

        if ( tmp_mvar_value_150 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_COMMTIMEOUTS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = tmp_mvar_value_150;
        frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_94 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        if ( tmp_assign_source_94 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS, tmp_assign_source_94 );
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_source_name_38;
        PyObject *tmp_subscribed_name_22;
        PyObject *tmp_mvar_value_151;
        PyObject *tmp_subscript_name_22;
        tmp_mvar_value_151 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_151 == NULL ))
        {
            tmp_mvar_value_151 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_151 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_22 = tmp_mvar_value_151;
        tmp_subscript_name_22 = const_str_plain_kernel32;
        tmp_source_name_38 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
        if ( tmp_source_name_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_95 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_GetCommTimeouts );
        Py_DECREF( tmp_source_name_38 );
        if ( tmp_assign_source_95 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts, tmp_assign_source_95 );
    }
    {
        PyObject *tmp_assattr_name_35;
        PyObject *tmp_mvar_value_152;
        PyObject *tmp_assattr_target_35;
        PyObject *tmp_mvar_value_153;
        tmp_mvar_value_152 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_152 == NULL ))
        {
            tmp_mvar_value_152 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_152 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_35 = tmp_mvar_value_152;
        tmp_mvar_value_153 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts );

        if (unlikely( tmp_mvar_value_153 == NULL ))
        {
            tmp_mvar_value_153 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts );
        }

        CHECK_OBJECT( tmp_mvar_value_153 );
        tmp_assattr_target_35 = tmp_mvar_value_153;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_35, const_str_plain_restype, tmp_assattr_name_35 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_36;
        PyObject *tmp_list_element_16;
        PyObject *tmp_mvar_value_154;
        PyObject *tmp_mvar_value_155;
        PyObject *tmp_assattr_target_36;
        PyObject *tmp_mvar_value_156;
        tmp_mvar_value_154 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_154 == NULL ))
        {
            tmp_mvar_value_154 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_154 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }

        tmp_list_element_16 = tmp_mvar_value_154;
        tmp_assattr_name_36 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_16 );
        PyList_SET_ITEM( tmp_assattr_name_36, 0, tmp_list_element_16 );
        tmp_mvar_value_155 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS );

        if (unlikely( tmp_mvar_value_155 == NULL ))
        {
            tmp_mvar_value_155 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS );
        }

        if ( tmp_mvar_value_155 == NULL )
        {
            Py_DECREF( tmp_assattr_name_36 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCOMMTIMEOUTS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }

        tmp_list_element_16 = tmp_mvar_value_155;
        Py_INCREF( tmp_list_element_16 );
        PyList_SET_ITEM( tmp_assattr_name_36, 1, tmp_list_element_16 );
        tmp_mvar_value_156 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts );

        if (unlikely( tmp_mvar_value_156 == NULL ))
        {
            tmp_mvar_value_156 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts );
        }

        if ( tmp_mvar_value_156 == NULL )
        {
            Py_DECREF( tmp_assattr_name_36 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetCommTimeouts" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_36 = tmp_mvar_value_156;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_36, const_str_plain_argtypes, tmp_assattr_name_36 );
        Py_DECREF( tmp_assattr_name_36 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_source_name_39;
        PyObject *tmp_subscribed_name_23;
        PyObject *tmp_mvar_value_157;
        PyObject *tmp_subscript_name_23;
        tmp_mvar_value_157 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_157 == NULL ))
        {
            tmp_mvar_value_157 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_157 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_23 = tmp_mvar_value_157;
        tmp_subscript_name_23 = const_str_plain_kernel32;
        tmp_source_name_39 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_23, tmp_subscript_name_23 );
        if ( tmp_source_name_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_96 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_PurgeComm );
        Py_DECREF( tmp_source_name_39 );
        if ( tmp_assign_source_96 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PurgeComm, tmp_assign_source_96 );
    }
    {
        PyObject *tmp_assattr_name_37;
        PyObject *tmp_mvar_value_158;
        PyObject *tmp_assattr_target_37;
        PyObject *tmp_mvar_value_159;
        tmp_mvar_value_158 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_158 == NULL ))
        {
            tmp_mvar_value_158 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_158 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_37 = tmp_mvar_value_158;
        tmp_mvar_value_159 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PurgeComm );

        if (unlikely( tmp_mvar_value_159 == NULL ))
        {
            tmp_mvar_value_159 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PurgeComm );
        }

        CHECK_OBJECT( tmp_mvar_value_159 );
        tmp_assattr_target_37 = tmp_mvar_value_159;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_37, const_str_plain_restype, tmp_assattr_name_37 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_38;
        PyObject *tmp_list_element_17;
        PyObject *tmp_mvar_value_160;
        PyObject *tmp_mvar_value_161;
        PyObject *tmp_assattr_target_38;
        PyObject *tmp_mvar_value_162;
        tmp_mvar_value_160 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_160 == NULL ))
        {
            tmp_mvar_value_160 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_160 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }

        tmp_list_element_17 = tmp_mvar_value_160;
        tmp_assattr_name_38 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_17 );
        PyList_SET_ITEM( tmp_assattr_name_38, 0, tmp_list_element_17 );
        tmp_mvar_value_161 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_161 == NULL ))
        {
            tmp_mvar_value_161 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_161 == NULL )
        {
            Py_DECREF( tmp_assattr_name_38 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }

        tmp_list_element_17 = tmp_mvar_value_161;
        Py_INCREF( tmp_list_element_17 );
        PyList_SET_ITEM( tmp_assattr_name_38, 1, tmp_list_element_17 );
        tmp_mvar_value_162 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PurgeComm );

        if (unlikely( tmp_mvar_value_162 == NULL ))
        {
            tmp_mvar_value_162 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PurgeComm );
        }

        if ( tmp_mvar_value_162 == NULL )
        {
            Py_DECREF( tmp_assattr_name_38 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PurgeComm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_38 = tmp_mvar_value_162;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_38, const_str_plain_argtypes, tmp_assattr_name_38 );
        Py_DECREF( tmp_assattr_name_38 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_source_name_40;
        PyObject *tmp_subscribed_name_24;
        PyObject *tmp_mvar_value_163;
        PyObject *tmp_subscript_name_24;
        tmp_mvar_value_163 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_163 == NULL ))
        {
            tmp_mvar_value_163 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_163 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_24 = tmp_mvar_value_163;
        tmp_subscript_name_24 = const_str_plain_kernel32;
        tmp_source_name_40 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_24, tmp_subscript_name_24 );
        if ( tmp_source_name_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_97 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_SetCommBreak );
        Py_DECREF( tmp_source_name_40 );
        if ( tmp_assign_source_97 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommBreak, tmp_assign_source_97 );
    }
    {
        PyObject *tmp_assattr_name_39;
        PyObject *tmp_mvar_value_164;
        PyObject *tmp_assattr_target_39;
        PyObject *tmp_mvar_value_165;
        tmp_mvar_value_164 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_164 == NULL ))
        {
            tmp_mvar_value_164 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_164 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 163;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_39 = tmp_mvar_value_164;
        tmp_mvar_value_165 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommBreak );

        if (unlikely( tmp_mvar_value_165 == NULL ))
        {
            tmp_mvar_value_165 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommBreak );
        }

        CHECK_OBJECT( tmp_mvar_value_165 );
        tmp_assattr_target_39 = tmp_mvar_value_165;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_39, const_str_plain_restype, tmp_assattr_name_39 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_40;
        PyObject *tmp_list_element_18;
        PyObject *tmp_mvar_value_166;
        PyObject *tmp_assattr_target_40;
        PyObject *tmp_mvar_value_167;
        tmp_mvar_value_166 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_166 == NULL ))
        {
            tmp_mvar_value_166 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_166 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }

        tmp_list_element_18 = tmp_mvar_value_166;
        tmp_assattr_name_40 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_18 );
        PyList_SET_ITEM( tmp_assattr_name_40, 0, tmp_list_element_18 );
        tmp_mvar_value_167 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommBreak );

        if (unlikely( tmp_mvar_value_167 == NULL ))
        {
            tmp_mvar_value_167 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommBreak );
        }

        if ( tmp_mvar_value_167 == NULL )
        {
            Py_DECREF( tmp_assattr_name_40 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetCommBreak" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_40 = tmp_mvar_value_167;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_40, const_str_plain_argtypes, tmp_assattr_name_40 );
        Py_DECREF( tmp_assattr_name_40 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_source_name_41;
        PyObject *tmp_subscribed_name_25;
        PyObject *tmp_mvar_value_168;
        PyObject *tmp_subscript_name_25;
        tmp_mvar_value_168 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_168 == NULL ))
        {
            tmp_mvar_value_168 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_168 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_25 = tmp_mvar_value_168;
        tmp_subscript_name_25 = const_str_plain_kernel32;
        tmp_source_name_41 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_25, tmp_subscript_name_25 );
        if ( tmp_source_name_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_98 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_SetCommMask );
        Py_DECREF( tmp_source_name_41 );
        if ( tmp_assign_source_98 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommMask, tmp_assign_source_98 );
    }
    {
        PyObject *tmp_assattr_name_41;
        PyObject *tmp_mvar_value_169;
        PyObject *tmp_assattr_target_41;
        PyObject *tmp_mvar_value_170;
        tmp_mvar_value_169 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_169 == NULL ))
        {
            tmp_mvar_value_169 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_169 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_41 = tmp_mvar_value_169;
        tmp_mvar_value_170 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommMask );

        if (unlikely( tmp_mvar_value_170 == NULL ))
        {
            tmp_mvar_value_170 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommMask );
        }

        CHECK_OBJECT( tmp_mvar_value_170 );
        tmp_assattr_target_41 = tmp_mvar_value_170;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_41, const_str_plain_restype, tmp_assattr_name_41 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_42;
        PyObject *tmp_list_element_19;
        PyObject *tmp_mvar_value_171;
        PyObject *tmp_mvar_value_172;
        PyObject *tmp_assattr_target_42;
        PyObject *tmp_mvar_value_173;
        tmp_mvar_value_171 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_171 == NULL ))
        {
            tmp_mvar_value_171 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_171 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }

        tmp_list_element_19 = tmp_mvar_value_171;
        tmp_assattr_name_42 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_19 );
        PyList_SET_ITEM( tmp_assattr_name_42, 0, tmp_list_element_19 );
        tmp_mvar_value_172 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_172 == NULL ))
        {
            tmp_mvar_value_172 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_172 == NULL )
        {
            Py_DECREF( tmp_assattr_name_42 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }

        tmp_list_element_19 = tmp_mvar_value_172;
        Py_INCREF( tmp_list_element_19 );
        PyList_SET_ITEM( tmp_assattr_name_42, 1, tmp_list_element_19 );
        tmp_mvar_value_173 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommMask );

        if (unlikely( tmp_mvar_value_173 == NULL ))
        {
            tmp_mvar_value_173 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommMask );
        }

        if ( tmp_mvar_value_173 == NULL )
        {
            Py_DECREF( tmp_assattr_name_42 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetCommMask" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_42 = tmp_mvar_value_173;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_42, const_str_plain_argtypes, tmp_assattr_name_42 );
        Py_DECREF( tmp_assattr_name_42 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_source_name_42;
        PyObject *tmp_subscribed_name_26;
        PyObject *tmp_mvar_value_174;
        PyObject *tmp_subscript_name_26;
        tmp_mvar_value_174 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_174 == NULL ))
        {
            tmp_mvar_value_174 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_174 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_26 = tmp_mvar_value_174;
        tmp_subscript_name_26 = const_str_plain_kernel32;
        tmp_source_name_42 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_26, tmp_subscript_name_26 );
        if ( tmp_source_name_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_99 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_SetCommState );
        Py_DECREF( tmp_source_name_42 );
        if ( tmp_assign_source_99 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommState, tmp_assign_source_99 );
    }
    {
        PyObject *tmp_assattr_name_43;
        PyObject *tmp_mvar_value_175;
        PyObject *tmp_assattr_target_43;
        PyObject *tmp_mvar_value_176;
        tmp_mvar_value_175 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_175 == NULL ))
        {
            tmp_mvar_value_175 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_175 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_43 = tmp_mvar_value_175;
        tmp_mvar_value_176 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommState );

        if (unlikely( tmp_mvar_value_176 == NULL ))
        {
            tmp_mvar_value_176 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommState );
        }

        CHECK_OBJECT( tmp_mvar_value_176 );
        tmp_assattr_target_43 = tmp_mvar_value_176;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_43, const_str_plain_restype, tmp_assattr_name_43 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_44;
        PyObject *tmp_list_element_20;
        PyObject *tmp_mvar_value_177;
        PyObject *tmp_mvar_value_178;
        PyObject *tmp_assattr_target_44;
        PyObject *tmp_mvar_value_179;
        tmp_mvar_value_177 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_177 == NULL ))
        {
            tmp_mvar_value_177 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_177 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }

        tmp_list_element_20 = tmp_mvar_value_177;
        tmp_assattr_name_44 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_20 );
        PyList_SET_ITEM( tmp_assattr_name_44, 0, tmp_list_element_20 );
        tmp_mvar_value_178 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDCB );

        if (unlikely( tmp_mvar_value_178 == NULL ))
        {
            tmp_mvar_value_178 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDCB );
        }

        if ( tmp_mvar_value_178 == NULL )
        {
            Py_DECREF( tmp_assattr_name_44 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDCB" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }

        tmp_list_element_20 = tmp_mvar_value_178;
        Py_INCREF( tmp_list_element_20 );
        PyList_SET_ITEM( tmp_assattr_name_44, 1, tmp_list_element_20 );
        tmp_mvar_value_179 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommState );

        if (unlikely( tmp_mvar_value_179 == NULL ))
        {
            tmp_mvar_value_179 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommState );
        }

        if ( tmp_mvar_value_179 == NULL )
        {
            Py_DECREF( tmp_assattr_name_44 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetCommState" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_44 = tmp_mvar_value_179;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_44, const_str_plain_argtypes, tmp_assattr_name_44 );
        Py_DECREF( tmp_assattr_name_44 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_source_name_43;
        PyObject *tmp_subscribed_name_27;
        PyObject *tmp_mvar_value_180;
        PyObject *tmp_subscript_name_27;
        tmp_mvar_value_180 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_180 == NULL ))
        {
            tmp_mvar_value_180 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_180 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_27 = tmp_mvar_value_180;
        tmp_subscript_name_27 = const_str_plain_kernel32;
        tmp_source_name_43 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_27, tmp_subscript_name_27 );
        if ( tmp_source_name_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_100 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_SetCommTimeouts );
        Py_DECREF( tmp_source_name_43 );
        if ( tmp_assign_source_100 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts, tmp_assign_source_100 );
    }
    {
        PyObject *tmp_assattr_name_45;
        PyObject *tmp_mvar_value_181;
        PyObject *tmp_assattr_target_45;
        PyObject *tmp_mvar_value_182;
        tmp_mvar_value_181 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_181 == NULL ))
        {
            tmp_mvar_value_181 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_181 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_45 = tmp_mvar_value_181;
        tmp_mvar_value_182 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts );

        if (unlikely( tmp_mvar_value_182 == NULL ))
        {
            tmp_mvar_value_182 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts );
        }

        CHECK_OBJECT( tmp_mvar_value_182 );
        tmp_assattr_target_45 = tmp_mvar_value_182;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_45, const_str_plain_restype, tmp_assattr_name_45 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_46;
        PyObject *tmp_list_element_21;
        PyObject *tmp_mvar_value_183;
        PyObject *tmp_mvar_value_184;
        PyObject *tmp_assattr_target_46;
        PyObject *tmp_mvar_value_185;
        tmp_mvar_value_183 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_183 == NULL ))
        {
            tmp_mvar_value_183 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_183 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }

        tmp_list_element_21 = tmp_mvar_value_183;
        tmp_assattr_name_46 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_21 );
        PyList_SET_ITEM( tmp_assattr_name_46, 0, tmp_list_element_21 );
        tmp_mvar_value_184 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS );

        if (unlikely( tmp_mvar_value_184 == NULL ))
        {
            tmp_mvar_value_184 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS );
        }

        if ( tmp_mvar_value_184 == NULL )
        {
            Py_DECREF( tmp_assattr_name_46 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCOMMTIMEOUTS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }

        tmp_list_element_21 = tmp_mvar_value_184;
        Py_INCREF( tmp_list_element_21 );
        PyList_SET_ITEM( tmp_assattr_name_46, 1, tmp_list_element_21 );
        tmp_mvar_value_185 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts );

        if (unlikely( tmp_mvar_value_185 == NULL ))
        {
            tmp_mvar_value_185 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts );
        }

        if ( tmp_mvar_value_185 == NULL )
        {
            Py_DECREF( tmp_assattr_name_46 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetCommTimeouts" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_46 = tmp_mvar_value_185;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_46, const_str_plain_argtypes, tmp_assattr_name_46 );
        Py_DECREF( tmp_assattr_name_46 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_source_name_44;
        PyObject *tmp_subscribed_name_28;
        PyObject *tmp_mvar_value_186;
        PyObject *tmp_subscript_name_28;
        tmp_mvar_value_186 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_186 == NULL ))
        {
            tmp_mvar_value_186 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_186 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_28 = tmp_mvar_value_186;
        tmp_subscript_name_28 = const_str_plain_kernel32;
        tmp_source_name_44 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_28, tmp_subscript_name_28 );
        if ( tmp_source_name_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_101 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_WaitForSingleObject );
        Py_DECREF( tmp_source_name_44 );
        if ( tmp_assign_source_101 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject, tmp_assign_source_101 );
    }
    {
        PyObject *tmp_assattr_name_47;
        PyObject *tmp_mvar_value_187;
        PyObject *tmp_assattr_target_47;
        PyObject *tmp_mvar_value_188;
        tmp_mvar_value_187 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_187 == NULL ))
        {
            tmp_mvar_value_187 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_187 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_47 = tmp_mvar_value_187;
        tmp_mvar_value_188 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject );

        if (unlikely( tmp_mvar_value_188 == NULL ))
        {
            tmp_mvar_value_188 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject );
        }

        CHECK_OBJECT( tmp_mvar_value_188 );
        tmp_assattr_target_47 = tmp_mvar_value_188;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_47, const_str_plain_restype, tmp_assattr_name_47 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_48;
        PyObject *tmp_list_element_22;
        PyObject *tmp_mvar_value_189;
        PyObject *tmp_mvar_value_190;
        PyObject *tmp_assattr_target_48;
        PyObject *tmp_mvar_value_191;
        tmp_mvar_value_189 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_189 == NULL ))
        {
            tmp_mvar_value_189 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_189 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_list_element_22 = tmp_mvar_value_189;
        tmp_assattr_name_48 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_22 );
        PyList_SET_ITEM( tmp_assattr_name_48, 0, tmp_list_element_22 );
        tmp_mvar_value_190 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_190 == NULL ))
        {
            tmp_mvar_value_190 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_190 == NULL )
        {
            Py_DECREF( tmp_assattr_name_48 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_list_element_22 = tmp_mvar_value_190;
        Py_INCREF( tmp_list_element_22 );
        PyList_SET_ITEM( tmp_assattr_name_48, 1, tmp_list_element_22 );
        tmp_mvar_value_191 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject );

        if (unlikely( tmp_mvar_value_191 == NULL ))
        {
            tmp_mvar_value_191 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject );
        }

        if ( tmp_mvar_value_191 == NULL )
        {
            Py_DECREF( tmp_assattr_name_48 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WaitForSingleObject" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_48 = tmp_mvar_value_191;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_48, const_str_plain_argtypes, tmp_assattr_name_48 );
        Py_DECREF( tmp_assattr_name_48 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_source_name_45;
        PyObject *tmp_subscribed_name_29;
        PyObject *tmp_mvar_value_192;
        PyObject *tmp_subscript_name_29;
        tmp_mvar_value_192 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

        if (unlikely( tmp_mvar_value_192 == NULL ))
        {
            tmp_mvar_value_192 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
        }

        if ( tmp_mvar_value_192 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_29 = tmp_mvar_value_192;
        tmp_subscript_name_29 = const_str_plain_kernel32;
        tmp_source_name_45 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_29, tmp_subscript_name_29 );
        if ( tmp_source_name_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_102 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_CancelIoEx );
        Py_DECREF( tmp_source_name_45 );
        if ( tmp_assign_source_102 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CancelIoEx, tmp_assign_source_102 );
    }
    {
        PyObject *tmp_assattr_name_49;
        PyObject *tmp_mvar_value_193;
        PyObject *tmp_assattr_target_49;
        PyObject *tmp_mvar_value_194;
        tmp_mvar_value_193 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_193 == NULL ))
        {
            tmp_mvar_value_193 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_193 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_49 = tmp_mvar_value_193;
        tmp_mvar_value_194 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CancelIoEx );

        if (unlikely( tmp_mvar_value_194 == NULL ))
        {
            tmp_mvar_value_194 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CancelIoEx );
        }

        CHECK_OBJECT( tmp_mvar_value_194 );
        tmp_assattr_target_49 = tmp_mvar_value_194;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_49, const_str_plain_restype, tmp_assattr_name_49 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_50;
        PyObject *tmp_list_element_23;
        PyObject *tmp_mvar_value_195;
        PyObject *tmp_mvar_value_196;
        PyObject *tmp_assattr_target_50;
        PyObject *tmp_mvar_value_197;
        tmp_mvar_value_195 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_195 == NULL ))
        {
            tmp_mvar_value_195 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_195 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }

        tmp_list_element_23 = tmp_mvar_value_195;
        tmp_assattr_name_50 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_23 );
        PyList_SET_ITEM( tmp_assattr_name_50, 0, tmp_list_element_23 );
        tmp_mvar_value_196 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );

        if (unlikely( tmp_mvar_value_196 == NULL ))
        {
            tmp_mvar_value_196 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );
        }

        if ( tmp_mvar_value_196 == NULL )
        {
            Py_DECREF( tmp_assattr_name_50 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPOVERLAPPED" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }

        tmp_list_element_23 = tmp_mvar_value_196;
        Py_INCREF( tmp_list_element_23 );
        PyList_SET_ITEM( tmp_assattr_name_50, 1, tmp_list_element_23 );
        tmp_mvar_value_197 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CancelIoEx );

        if (unlikely( tmp_mvar_value_197 == NULL ))
        {
            tmp_mvar_value_197 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CancelIoEx );
        }

        if ( tmp_mvar_value_197 == NULL )
        {
            Py_DECREF( tmp_assattr_name_50 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CancelIoEx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_50 = tmp_mvar_value_197;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_50, const_str_plain_argtypes, tmp_assattr_name_50 );
        Py_DECREF( tmp_assattr_name_50 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ONESTOPBIT, tmp_assign_source_103 );
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_TWOSTOPBITS, tmp_assign_source_104 );
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ONE5STOPBITS, tmp_assign_source_105 );
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_NOPARITY, tmp_assign_source_106 );
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ODDPARITY, tmp_assign_source_107 );
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EVENPARITY, tmp_assign_source_108 );
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = const_int_pos_3;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MARKPARITY, tmp_assign_source_109 );
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SPACEPARITY, tmp_assign_source_110 );
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_RTS_CONTROL_HANDSHAKE, tmp_assign_source_111 );
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_RTS_CONTROL_DISABLE, tmp_assign_source_112 );
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_RTS_CONTROL_ENABLE, tmp_assign_source_113 );
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = const_int_pos_3;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_RTS_CONTROL_TOGGLE, tmp_assign_source_114 );
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = const_int_pos_3;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SETRTS, tmp_assign_source_115 );
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CLRRTS, tmp_assign_source_116 );
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DTR_CONTROL_HANDSHAKE, tmp_assign_source_117 );
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DTR_CONTROL_DISABLE, tmp_assign_source_118 );
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DTR_CONTROL_ENABLE, tmp_assign_source_119 );
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = const_int_pos_5;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SETDTR, tmp_assign_source_120 );
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = const_int_pos_6;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CLRDTR, tmp_assign_source_121 );
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = const_int_pos_32;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MS_DSR_ON, tmp_assign_source_122 );
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = const_int_pos_256;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RING, tmp_assign_source_123 );
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = const_int_pos_512;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_PERR, tmp_assign_source_124 );
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = const_int_pos_128;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_ERR, tmp_assign_source_125 );
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SETXOFF, tmp_assign_source_126 );
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RXCHAR, tmp_assign_source_127 );
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = const_int_pos_1073741824;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GENERIC_WRITE, tmp_assign_source_128 );
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PURGE_TXCLEAR, tmp_assign_source_129 );
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = const_int_pos_1073741824;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_FILE_FLAG_OVERLAPPED, tmp_assign_source_130 );
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = const_int_pos_16;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_DSR, tmp_assign_source_131 );
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = const_int_pos_4294967295;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MAXDWORD, tmp_assign_source_132 );
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = const_int_pos_32;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RLSD, tmp_assign_source_133 );
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ERROR_SUCCESS, tmp_assign_source_134 );
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = const_int_pos_8;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ERROR_NOT_ENOUGH_MEMORY, tmp_assign_source_135 );
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = const_int_pos_995;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ERROR_OPERATION_ABORTED, tmp_assign_source_136 );
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = const_int_pos_996;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ERROR_IO_INCOMPLETE, tmp_assign_source_137 );
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = const_int_pos_997;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ERROR_IO_PENDING, tmp_assign_source_138 );
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = const_int_pos_1784;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ERROR_INVALID_USER_BUFFER, tmp_assign_source_139 );
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = const_int_pos_16;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MS_CTS_ON, tmp_assign_source_140 );
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = const_int_pos_2048;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_EVENT1, tmp_assign_source_141 );
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = const_int_pos_1024;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RX80FULL, tmp_assign_source_142 );
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PURGE_RXABORT, tmp_assign_source_143 );
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = const_int_pos_128;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_NORMAL, tmp_assign_source_144 );
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PURGE_TXABORT, tmp_assign_source_145 );
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SETXON, tmp_assign_source_146 );
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = const_int_pos_3;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_OPEN_EXISTING, tmp_assign_source_147 );
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = const_int_pos_64;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MS_RING_ON, tmp_assign_source_148 );
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_TXEMPTY, tmp_assign_source_149 );
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RXFLAG, tmp_assign_source_150 );
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = const_int_pos_128;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MS_RLSD_ON, tmp_assign_source_151 );
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = const_int_pos_2147483648;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GENERIC_READ, tmp_assign_source_152 );
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = const_int_pos_4096;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_EVENT2, tmp_assign_source_153 );
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = const_int_pos_8;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_CTS, tmp_assign_source_154 );
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = const_int_pos_64;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_BREAK, tmp_assign_source_155 );
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = const_int_pos_8;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PURGE_RXCLEAR, tmp_assign_source_156 );
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = const_int_pos_4294967295;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_INFINITE, tmp_assign_source_157 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_mvar_value_198;
        tmp_mvar_value_198 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Union );

        if (unlikely( tmp_mvar_value_198 == NULL ))
        {
            tmp_mvar_value_198 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Union );
        }

        if ( tmp_mvar_value_198 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Union" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 249;

            goto try_except_handler_20;
        }

        tmp_tuple_element_21 = tmp_mvar_value_198;
        tmp_assign_source_158 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_21 );
        PyTuple_SET_ITEM( tmp_assign_source_158, 0, tmp_tuple_element_21 );
        assert( tmp_class_creation_6__bases == NULL );
        tmp_class_creation_6__bases = tmp_assign_source_158;
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = PyDict_New();
        assert( tmp_class_creation_6__class_decl_dict == NULL );
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_159;
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_metaclass_name_6;
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_key_name_16;
        PyObject *tmp_dict_name_16;
        PyObject *tmp_dict_name_17;
        PyObject *tmp_key_name_17;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_subscribed_name_30;
        PyObject *tmp_subscript_name_30;
        PyObject *tmp_bases_name_6;
        tmp_key_name_16 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;

            goto try_except_handler_20;
        }
        tmp_condition_result_24 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_6;
        }
        else
        {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_name_17 = const_str_plain_metaclass;
        tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
        if ( tmp_metaclass_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;

            goto try_except_handler_20;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_subscribed_name_30 = tmp_class_creation_6__bases;
        tmp_subscript_name_30 = const_int_0;
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_30, tmp_subscript_name_30, 0 );
        if ( tmp_type_arg_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;

            goto try_except_handler_20;
        }
        tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_11 );
        Py_DECREF( tmp_type_arg_11 );
        if ( tmp_metaclass_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;

            goto try_except_handler_20;
        }
        condexpr_end_6:;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_bases_name_6 = tmp_class_creation_6__bases;
        tmp_assign_source_160 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
        Py_DECREF( tmp_metaclass_name_6 );
        if ( tmp_assign_source_160 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;

            goto try_except_handler_20;
        }
        assert( tmp_class_creation_6__metaclass == NULL );
        tmp_class_creation_6__metaclass = tmp_assign_source_160;
    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_key_name_18;
        PyObject *tmp_dict_name_18;
        tmp_key_name_18 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;

            goto try_except_handler_20;
        }
        tmp_condition_result_25 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_19;
        }
        else
        {
            goto branch_no_19;
        }
        branch_yes_19:;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;

            goto try_except_handler_20;
        }
        branch_no_19:;
    }
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_source_name_46;
        CHECK_OBJECT( tmp_class_creation_6__metaclass );
        tmp_source_name_46 = tmp_class_creation_6__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_46, const_str_plain___prepare__ );
        tmp_condition_result_26 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_20;
        }
        else
        {
            goto branch_no_20;
        }
        branch_yes_20:;
        {
            PyObject *tmp_assign_source_161;
            PyObject *tmp_called_name_20;
            PyObject *tmp_source_name_47;
            PyObject *tmp_args_name_11;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kw_name_11;
            CHECK_OBJECT( tmp_class_creation_6__metaclass );
            tmp_source_name_47 = tmp_class_creation_6__metaclass;
            tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain___prepare__ );
            if ( tmp_called_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;

                goto try_except_handler_20;
            }
            tmp_tuple_element_22 = const_str_plain_N11_OVERLAPPED4DOLLAR_48E;
            tmp_args_name_11 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_22 );
            PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_22 );
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_tuple_element_22 = tmp_class_creation_6__bases;
            Py_INCREF( tmp_tuple_element_22 );
            PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_22 );
            CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
            tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 249;
            tmp_assign_source_161 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_11, tmp_kw_name_11 );
            Py_DECREF( tmp_called_name_20 );
            Py_DECREF( tmp_args_name_11 );
            if ( tmp_assign_source_161 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;

                goto try_except_handler_20;
            }
            assert( tmp_class_creation_6__prepared == NULL );
            tmp_class_creation_6__prepared = tmp_assign_source_161;
        }
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_operand_name_6;
            PyObject *tmp_source_name_48;
            CHECK_OBJECT( tmp_class_creation_6__prepared );
            tmp_source_name_48 = tmp_class_creation_6__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_48, const_str_plain___getitem__ );
            tmp_operand_name_6 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;

                goto try_except_handler_20;
            }
            tmp_condition_result_27 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_21;
            }
            else
            {
                goto branch_no_21;
            }
            branch_yes_21:;
            {
                PyObject *tmp_raise_type_6;
                PyObject *tmp_raise_value_6;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_tuple_element_23;
                PyObject *tmp_getattr_target_6;
                PyObject *tmp_getattr_attr_6;
                PyObject *tmp_getattr_default_6;
                PyObject *tmp_source_name_49;
                PyObject *tmp_type_arg_12;
                tmp_raise_type_6 = PyExc_TypeError;
                tmp_left_name_6 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_6__metaclass );
                tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
                tmp_getattr_attr_6 = const_str_plain___name__;
                tmp_getattr_default_6 = const_str_angle_metaclass;
                tmp_tuple_element_23 = BUILTIN_GETATTR( tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6 );
                if ( tmp_tuple_element_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 249;

                    goto try_except_handler_20;
                }
                tmp_right_name_6 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_23 );
                CHECK_OBJECT( tmp_class_creation_6__prepared );
                tmp_type_arg_12 = tmp_class_creation_6__prepared;
                tmp_source_name_49 = BUILTIN_TYPE1( tmp_type_arg_12 );
                assert( !(tmp_source_name_49 == NULL) );
                tmp_tuple_element_23 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_49 );
                if ( tmp_tuple_element_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_6 );

                    exception_lineno = 249;

                    goto try_except_handler_20;
                }
                PyTuple_SET_ITEM( tmp_right_name_6, 1, tmp_tuple_element_23 );
                tmp_raise_value_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_raise_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 249;

                    goto try_except_handler_20;
                }
                exception_type = tmp_raise_type_6;
                Py_INCREF( tmp_raise_type_6 );
                exception_value = tmp_raise_value_6;
                exception_lineno = 249;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_20;
            }
            branch_no_21:;
        }
        goto branch_end_20;
        branch_no_20:;
        {
            PyObject *tmp_assign_source_162;
            tmp_assign_source_162 = PyDict_New();
            assert( tmp_class_creation_6__prepared == NULL );
            tmp_class_creation_6__prepared = tmp_assign_source_162;
        }
        branch_end_20:;
    }
    {
        PyObject *tmp_assign_source_163;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT( tmp_class_creation_6__prepared );
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_serial$win32_249 = tmp_set_locals_6;
            Py_INCREF( tmp_set_locals_6 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
        tmp_res = PyObject_SetItem( locals_serial$win32_249, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;

            goto try_except_handler_22;
        }
        tmp_dictset_value = const_str_plain_N11_OVERLAPPED4DOLLAR_48E;
        tmp_res = PyObject_SetItem( locals_serial$win32_249, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;

            goto try_except_handler_22;
        }
        {
            PyObject *tmp_assign_source_164;
            PyObject *tmp_called_name_21;
            PyObject *tmp_args_name_12;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kw_name_12;
            CHECK_OBJECT( tmp_class_creation_6__metaclass );
            tmp_called_name_21 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_24 = const_str_plain_N11_OVERLAPPED4DOLLAR_48E;
            tmp_args_name_12 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_24 );
            PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_24 );
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_tuple_element_24 = tmp_class_creation_6__bases;
            Py_INCREF( tmp_tuple_element_24 );
            PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_24 );
            tmp_tuple_element_24 = locals_serial$win32_249;
            Py_INCREF( tmp_tuple_element_24 );
            PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_24 );
            CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
            tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 249;
            tmp_assign_source_164 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_12, tmp_kw_name_12 );
            Py_DECREF( tmp_args_name_12 );
            if ( tmp_assign_source_164 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;

                goto try_except_handler_22;
            }
            assert( outline_5_var___class__ == NULL );
            outline_5_var___class__ = tmp_assign_source_164;
        }
        CHECK_OBJECT( outline_5_var___class__ );
        tmp_assign_source_163 = outline_5_var___class__;
        Py_INCREF( tmp_assign_source_163 );
        goto try_return_handler_22;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF( locals_serial$win32_249 );
        locals_serial$win32_249 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_serial$win32_249 );
        locals_serial$win32_249 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
        Py_DECREF( outline_5_var___class__ );
        outline_5_var___class__ = NULL;

        goto outline_result_6;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_6;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_6:;
        exception_lineno = 249;
        goto try_except_handler_20;
        outline_result_6:;
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E, tmp_assign_source_163 );
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__prepared );
    Py_DECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_mvar_value_199;
        tmp_mvar_value_199 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

        if (unlikely( tmp_mvar_value_199 == NULL ))
        {
            tmp_mvar_value_199 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
        }

        if ( tmp_mvar_value_199 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 253;

            goto try_except_handler_23;
        }

        tmp_tuple_element_25 = tmp_mvar_value_199;
        tmp_assign_source_165 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_25 );
        PyTuple_SET_ITEM( tmp_assign_source_165, 0, tmp_tuple_element_25 );
        assert( tmp_class_creation_7__bases == NULL );
        tmp_class_creation_7__bases = tmp_assign_source_165;
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = PyDict_New();
        assert( tmp_class_creation_7__class_decl_dict == NULL );
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_166;
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_metaclass_name_7;
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_name_19;
        PyObject *tmp_dict_name_20;
        PyObject *tmp_key_name_20;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_subscribed_name_31;
        PyObject *tmp_subscript_name_31;
        PyObject *tmp_bases_name_7;
        tmp_key_name_19 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;

            goto try_except_handler_23;
        }
        tmp_condition_result_28 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_7;
        }
        else
        {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dict_name_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_name_20 = const_str_plain_metaclass;
        tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
        if ( tmp_metaclass_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;

            goto try_except_handler_23;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT( tmp_class_creation_7__bases );
        tmp_subscribed_name_31 = tmp_class_creation_7__bases;
        tmp_subscript_name_31 = const_int_0;
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_31, tmp_subscript_name_31, 0 );
        if ( tmp_type_arg_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;

            goto try_except_handler_23;
        }
        tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_13 );
        Py_DECREF( tmp_type_arg_13 );
        if ( tmp_metaclass_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;

            goto try_except_handler_23;
        }
        condexpr_end_7:;
        CHECK_OBJECT( tmp_class_creation_7__bases );
        tmp_bases_name_7 = tmp_class_creation_7__bases;
        tmp_assign_source_167 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
        Py_DECREF( tmp_metaclass_name_7 );
        if ( tmp_assign_source_167 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;

            goto try_except_handler_23;
        }
        assert( tmp_class_creation_7__metaclass == NULL );
        tmp_class_creation_7__metaclass = tmp_assign_source_167;
    }
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_name_21;
        tmp_key_name_21 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dict_name_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_21, tmp_key_name_21 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;

            goto try_except_handler_23;
        }
        tmp_condition_result_29 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_22;
        }
        else
        {
            goto branch_no_22;
        }
        branch_yes_22:;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;

            goto try_except_handler_23;
        }
        branch_no_22:;
    }
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_source_name_50;
        CHECK_OBJECT( tmp_class_creation_7__metaclass );
        tmp_source_name_50 = tmp_class_creation_7__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_50, const_str_plain___prepare__ );
        tmp_condition_result_30 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_30 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_23;
        }
        else
        {
            goto branch_no_23;
        }
        branch_yes_23:;
        {
            PyObject *tmp_assign_source_168;
            PyObject *tmp_called_name_22;
            PyObject *tmp_source_name_51;
            PyObject *tmp_args_name_13;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kw_name_13;
            CHECK_OBJECT( tmp_class_creation_7__metaclass );
            tmp_source_name_51 = tmp_class_creation_7__metaclass;
            tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain___prepare__ );
            if ( tmp_called_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 253;

                goto try_except_handler_23;
            }
            tmp_tuple_element_26 = const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E;
            tmp_args_name_13 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_26 );
            PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_26 );
            CHECK_OBJECT( tmp_class_creation_7__bases );
            tmp_tuple_element_26 = tmp_class_creation_7__bases;
            Py_INCREF( tmp_tuple_element_26 );
            PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_26 );
            CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
            tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 253;
            tmp_assign_source_168 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_13, tmp_kw_name_13 );
            Py_DECREF( tmp_called_name_22 );
            Py_DECREF( tmp_args_name_13 );
            if ( tmp_assign_source_168 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 253;

                goto try_except_handler_23;
            }
            assert( tmp_class_creation_7__prepared == NULL );
            tmp_class_creation_7__prepared = tmp_assign_source_168;
        }
        {
            nuitka_bool tmp_condition_result_31;
            PyObject *tmp_operand_name_7;
            PyObject *tmp_source_name_52;
            CHECK_OBJECT( tmp_class_creation_7__prepared );
            tmp_source_name_52 = tmp_class_creation_7__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_52, const_str_plain___getitem__ );
            tmp_operand_name_7 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 253;

                goto try_except_handler_23;
            }
            tmp_condition_result_31 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_31 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_24;
            }
            else
            {
                goto branch_no_24;
            }
            branch_yes_24:;
            {
                PyObject *tmp_raise_type_7;
                PyObject *tmp_raise_value_7;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                PyObject *tmp_tuple_element_27;
                PyObject *tmp_getattr_target_7;
                PyObject *tmp_getattr_attr_7;
                PyObject *tmp_getattr_default_7;
                PyObject *tmp_source_name_53;
                PyObject *tmp_type_arg_14;
                tmp_raise_type_7 = PyExc_TypeError;
                tmp_left_name_7 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_7__metaclass );
                tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
                tmp_getattr_attr_7 = const_str_plain___name__;
                tmp_getattr_default_7 = const_str_angle_metaclass;
                tmp_tuple_element_27 = BUILTIN_GETATTR( tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7 );
                if ( tmp_tuple_element_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 253;

                    goto try_except_handler_23;
                }
                tmp_right_name_7 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_27 );
                CHECK_OBJECT( tmp_class_creation_7__prepared );
                tmp_type_arg_14 = tmp_class_creation_7__prepared;
                tmp_source_name_53 = BUILTIN_TYPE1( tmp_type_arg_14 );
                assert( !(tmp_source_name_53 == NULL) );
                tmp_tuple_element_27 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_53 );
                if ( tmp_tuple_element_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_7 );

                    exception_lineno = 253;

                    goto try_except_handler_23;
                }
                PyTuple_SET_ITEM( tmp_right_name_7, 1, tmp_tuple_element_27 );
                tmp_raise_value_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_right_name_7 );
                if ( tmp_raise_value_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 253;

                    goto try_except_handler_23;
                }
                exception_type = tmp_raise_type_7;
                Py_INCREF( tmp_raise_type_7 );
                exception_value = tmp_raise_value_7;
                exception_lineno = 253;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_23;
            }
            branch_no_24:;
        }
        goto branch_end_23;
        branch_no_23:;
        {
            PyObject *tmp_assign_source_169;
            tmp_assign_source_169 = PyDict_New();
            assert( tmp_class_creation_7__prepared == NULL );
            tmp_class_creation_7__prepared = tmp_assign_source_169;
        }
        branch_end_23:;
    }
    {
        PyObject *tmp_assign_source_170;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT( tmp_class_creation_7__prepared );
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_serial$win32_253 = tmp_set_locals_7;
            Py_INCREF( tmp_set_locals_7 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
        tmp_res = PyObject_SetItem( locals_serial$win32_253, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;

            goto try_except_handler_25;
        }
        tmp_dictset_value = const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E;
        tmp_res = PyObject_SetItem( locals_serial$win32_253, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;

            goto try_except_handler_25;
        }
        {
            PyObject *tmp_assign_source_171;
            PyObject *tmp_called_name_23;
            PyObject *tmp_args_name_14;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kw_name_14;
            CHECK_OBJECT( tmp_class_creation_7__metaclass );
            tmp_called_name_23 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_28 = const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E;
            tmp_args_name_14 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_28 );
            PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_28 );
            CHECK_OBJECT( tmp_class_creation_7__bases );
            tmp_tuple_element_28 = tmp_class_creation_7__bases;
            Py_INCREF( tmp_tuple_element_28 );
            PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_28 );
            tmp_tuple_element_28 = locals_serial$win32_253;
            Py_INCREF( tmp_tuple_element_28 );
            PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_28 );
            CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
            tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;
            frame_99eafefbedb88fa86d882c9e453add67->m_frame.f_lineno = 253;
            tmp_assign_source_171 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_14, tmp_kw_name_14 );
            Py_DECREF( tmp_args_name_14 );
            if ( tmp_assign_source_171 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 253;

                goto try_except_handler_25;
            }
            assert( outline_6_var___class__ == NULL );
            outline_6_var___class__ = tmp_assign_source_171;
        }
        CHECK_OBJECT( outline_6_var___class__ );
        tmp_assign_source_170 = outline_6_var___class__;
        Py_INCREF( tmp_assign_source_170 );
        goto try_return_handler_25;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF( locals_serial$win32_253 );
        locals_serial$win32_253 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_serial$win32_253 );
        locals_serial$win32_253 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_24;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
        Py_DECREF( outline_6_var___class__ );
        outline_6_var___class__ = NULL;

        goto outline_result_7;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_7;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( serial$win32 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_7:;
        exception_lineno = 253;
        goto try_except_handler_23;
        outline_result_7:;
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E, tmp_assign_source_170 );
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_decl_dict );
    Py_DECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__prepared );
    Py_DECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    {
        PyObject *tmp_assattr_name_51;
        PyObject *tmp_list_element_24;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_mvar_value_200;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_mvar_value_201;
        PyObject *tmp_assattr_target_51;
        PyObject *tmp_mvar_value_202;
        tmp_tuple_element_29 = const_str_plain_Offset;
        tmp_list_element_24 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_29 );
        PyTuple_SET_ITEM( tmp_list_element_24, 0, tmp_tuple_element_29 );
        tmp_mvar_value_200 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_200 == NULL ))
        {
            tmp_mvar_value_200 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_200 == NULL )
        {
            Py_DECREF( tmp_list_element_24 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_29 = tmp_mvar_value_200;
        Py_INCREF( tmp_tuple_element_29 );
        PyTuple_SET_ITEM( tmp_list_element_24, 1, tmp_tuple_element_29 );
        tmp_assattr_name_51 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_assattr_name_51, 0, tmp_list_element_24 );
        tmp_tuple_element_30 = const_str_plain_OffsetHigh;
        tmp_list_element_24 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_30 );
        PyTuple_SET_ITEM( tmp_list_element_24, 0, tmp_tuple_element_30 );
        tmp_mvar_value_201 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_201 == NULL ))
        {
            tmp_mvar_value_201 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_201 == NULL )
        {
            Py_DECREF( tmp_assattr_name_51 );
            Py_DECREF( tmp_list_element_24 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 259;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_30 = tmp_mvar_value_201;
        Py_INCREF( tmp_tuple_element_30 );
        PyTuple_SET_ITEM( tmp_list_element_24, 1, tmp_tuple_element_30 );
        PyList_SET_ITEM( tmp_assattr_name_51, 1, tmp_list_element_24 );
        tmp_mvar_value_202 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );

        if (unlikely( tmp_mvar_value_202 == NULL ))
        {
            tmp_mvar_value_202 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );
        }

        if ( tmp_mvar_value_202 == NULL )
        {
            Py_DECREF( tmp_assattr_name_51 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "N11_OVERLAPPED4DOLLAR_484DOLLAR_49E" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_51 = tmp_mvar_value_202;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_51, const_str_plain__fields_, tmp_assattr_name_51 );
        Py_DECREF( tmp_assattr_name_51 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_mvar_value_203;
        tmp_mvar_value_203 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p );

        if (unlikely( tmp_mvar_value_203 == NULL ))
        {
            tmp_mvar_value_203 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
        }

        if ( tmp_mvar_value_203 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_void_p" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 262;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_172 = tmp_mvar_value_203;
        UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PVOID, tmp_assign_source_172 );
    }
    {
        PyObject *tmp_assattr_name_52;
        PyObject *tmp_assattr_target_52;
        PyObject *tmp_mvar_value_204;
        tmp_assattr_name_52 = LIST_COPY( const_list_str_plain__0_list );
        tmp_mvar_value_204 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );

        if (unlikely( tmp_mvar_value_204 == NULL ))
        {
            tmp_mvar_value_204 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );
        }

        if ( tmp_mvar_value_204 == NULL )
        {
            Py_DECREF( tmp_assattr_name_52 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "N11_OVERLAPPED4DOLLAR_48E" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_52 = tmp_mvar_value_204;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_52, const_str_plain__anonymous_, tmp_assattr_name_52 );
        Py_DECREF( tmp_assattr_name_52 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_53;
        PyObject *tmp_list_element_25;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_mvar_value_205;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_mvar_value_206;
        PyObject *tmp_assattr_target_53;
        PyObject *tmp_mvar_value_207;
        tmp_tuple_element_31 = const_str_plain__0;
        tmp_list_element_25 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_31 );
        PyTuple_SET_ITEM( tmp_list_element_25, 0, tmp_tuple_element_31 );
        tmp_mvar_value_205 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );

        if (unlikely( tmp_mvar_value_205 == NULL ))
        {
            tmp_mvar_value_205 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );
        }

        if ( tmp_mvar_value_205 == NULL )
        {
            Py_DECREF( tmp_list_element_25 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "N11_OVERLAPPED4DOLLAR_484DOLLAR_49E" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_31 = tmp_mvar_value_205;
        Py_INCREF( tmp_tuple_element_31 );
        PyTuple_SET_ITEM( tmp_list_element_25, 1, tmp_tuple_element_31 );
        tmp_assattr_name_53 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_assattr_name_53, 0, tmp_list_element_25 );
        tmp_tuple_element_32 = const_str_plain_Pointer;
        tmp_list_element_25 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_32 );
        PyTuple_SET_ITEM( tmp_list_element_25, 0, tmp_tuple_element_32 );
        tmp_mvar_value_206 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PVOID );

        if (unlikely( tmp_mvar_value_206 == NULL ))
        {
            tmp_mvar_value_206 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PVOID );
        }

        if ( tmp_mvar_value_206 == NULL )
        {
            Py_DECREF( tmp_assattr_name_53 );
            Py_DECREF( tmp_list_element_25 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PVOID" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 267;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_32 = tmp_mvar_value_206;
        Py_INCREF( tmp_tuple_element_32 );
        PyTuple_SET_ITEM( tmp_list_element_25, 1, tmp_tuple_element_32 );
        PyList_SET_ITEM( tmp_assattr_name_53, 1, tmp_list_element_25 );
        tmp_mvar_value_207 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );

        if (unlikely( tmp_mvar_value_207 == NULL ))
        {
            tmp_mvar_value_207 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );
        }

        if ( tmp_mvar_value_207 == NULL )
        {
            Py_DECREF( tmp_assattr_name_53 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "N11_OVERLAPPED4DOLLAR_48E" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 265;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_53 = tmp_mvar_value_207;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_53, const_str_plain__fields_, tmp_assattr_name_53 );
        Py_DECREF( tmp_assattr_name_53 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_54;
        PyObject *tmp_assattr_target_54;
        PyObject *tmp_mvar_value_208;
        tmp_assattr_name_54 = LIST_COPY( const_list_str_plain__0_list );
        tmp_mvar_value_208 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );

        if (unlikely( tmp_mvar_value_208 == NULL ))
        {
            tmp_mvar_value_208 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );
        }

        if ( tmp_mvar_value_208 == NULL )
        {
            Py_DECREF( tmp_assattr_name_54 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_OVERLAPPED" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_54 = tmp_mvar_value_208;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_54, const_str_plain__anonymous_, tmp_assattr_name_54 );
        Py_DECREF( tmp_assattr_name_54 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_55;
        PyObject *tmp_list_element_26;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_mvar_value_209;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_mvar_value_210;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_mvar_value_211;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_mvar_value_212;
        PyObject *tmp_assattr_target_55;
        PyObject *tmp_mvar_value_213;
        tmp_tuple_element_33 = const_str_plain_Internal;
        tmp_list_element_26 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_33 );
        PyTuple_SET_ITEM( tmp_list_element_26, 0, tmp_tuple_element_33 );
        tmp_mvar_value_209 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );

        if (unlikely( tmp_mvar_value_209 == NULL ))
        {
            tmp_mvar_value_209 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );
        }

        if ( tmp_mvar_value_209 == NULL )
        {
            Py_DECREF( tmp_list_element_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ULONG_PTR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 271;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_33 = tmp_mvar_value_209;
        Py_INCREF( tmp_tuple_element_33 );
        PyTuple_SET_ITEM( tmp_list_element_26, 1, tmp_tuple_element_33 );
        tmp_assattr_name_55 = PyList_New( 4 );
        PyList_SET_ITEM( tmp_assattr_name_55, 0, tmp_list_element_26 );
        tmp_tuple_element_34 = const_str_plain_InternalHigh;
        tmp_list_element_26 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_34 );
        PyTuple_SET_ITEM( tmp_list_element_26, 0, tmp_tuple_element_34 );
        tmp_mvar_value_210 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );

        if (unlikely( tmp_mvar_value_210 == NULL ))
        {
            tmp_mvar_value_210 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );
        }

        if ( tmp_mvar_value_210 == NULL )
        {
            Py_DECREF( tmp_assattr_name_55 );
            Py_DECREF( tmp_list_element_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ULONG_PTR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_34 = tmp_mvar_value_210;
        Py_INCREF( tmp_tuple_element_34 );
        PyTuple_SET_ITEM( tmp_list_element_26, 1, tmp_tuple_element_34 );
        PyList_SET_ITEM( tmp_assattr_name_55, 1, tmp_list_element_26 );
        tmp_tuple_element_35 = const_str_plain__0;
        tmp_list_element_26 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_35 );
        PyTuple_SET_ITEM( tmp_list_element_26, 0, tmp_tuple_element_35 );
        tmp_mvar_value_211 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );

        if (unlikely( tmp_mvar_value_211 == NULL ))
        {
            tmp_mvar_value_211 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );
        }

        if ( tmp_mvar_value_211 == NULL )
        {
            Py_DECREF( tmp_assattr_name_55 );
            Py_DECREF( tmp_list_element_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "N11_OVERLAPPED4DOLLAR_48E" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 273;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_35 = tmp_mvar_value_211;
        Py_INCREF( tmp_tuple_element_35 );
        PyTuple_SET_ITEM( tmp_list_element_26, 1, tmp_tuple_element_35 );
        PyList_SET_ITEM( tmp_assattr_name_55, 2, tmp_list_element_26 );
        tmp_tuple_element_36 = const_str_plain_hEvent;
        tmp_list_element_26 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_36 );
        PyTuple_SET_ITEM( tmp_list_element_26, 0, tmp_tuple_element_36 );
        tmp_mvar_value_212 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_mvar_value_212 == NULL ))
        {
            tmp_mvar_value_212 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_mvar_value_212 == NULL )
        {
            Py_DECREF( tmp_assattr_name_55 );
            Py_DECREF( tmp_list_element_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 274;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_36 = tmp_mvar_value_212;
        Py_INCREF( tmp_tuple_element_36 );
        PyTuple_SET_ITEM( tmp_list_element_26, 1, tmp_tuple_element_36 );
        PyList_SET_ITEM( tmp_assattr_name_55, 3, tmp_list_element_26 );
        tmp_mvar_value_213 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );

        if (unlikely( tmp_mvar_value_213 == NULL ))
        {
            tmp_mvar_value_213 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );
        }

        if ( tmp_mvar_value_213 == NULL )
        {
            Py_DECREF( tmp_assattr_name_55 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_OVERLAPPED" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_55 = tmp_mvar_value_213;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_55, const_str_plain__fields_, tmp_assattr_name_55 );
        Py_DECREF( tmp_assattr_name_55 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_56;
        PyObject *tmp_list_element_27;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_mvar_value_214;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_mvar_value_215;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_mvar_value_216;
        PyObject *tmp_assattr_target_56;
        PyObject *tmp_mvar_value_217;
        tmp_tuple_element_37 = const_str_plain_nLength;
        tmp_list_element_27 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_37 );
        PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_37 );
        tmp_mvar_value_214 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_214 == NULL ))
        {
            tmp_mvar_value_214 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_214 == NULL )
        {
            Py_DECREF( tmp_list_element_27 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_37 = tmp_mvar_value_214;
        Py_INCREF( tmp_tuple_element_37 );
        PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_37 );
        tmp_assattr_name_56 = PyList_New( 3 );
        PyList_SET_ITEM( tmp_assattr_name_56, 0, tmp_list_element_27 );
        tmp_tuple_element_38 = const_str_plain_lpSecurityDescriptor;
        tmp_list_element_27 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_38 );
        PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_38 );
        tmp_mvar_value_215 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPVOID );

        if (unlikely( tmp_mvar_value_215 == NULL ))
        {
            tmp_mvar_value_215 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPVOID );
        }

        if ( tmp_mvar_value_215 == NULL )
        {
            Py_DECREF( tmp_assattr_name_56 );
            Py_DECREF( tmp_list_element_27 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPVOID" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 278;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_38 = tmp_mvar_value_215;
        Py_INCREF( tmp_tuple_element_38 );
        PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_38 );
        PyList_SET_ITEM( tmp_assattr_name_56, 1, tmp_list_element_27 );
        tmp_tuple_element_39 = const_str_plain_bInheritHandle;
        tmp_list_element_27 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_39 );
        PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_39 );
        tmp_mvar_value_216 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_216 == NULL ))
        {
            tmp_mvar_value_216 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_216 == NULL )
        {
            Py_DECREF( tmp_assattr_name_56 );
            Py_DECREF( tmp_list_element_27 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_39 = tmp_mvar_value_216;
        Py_INCREF( tmp_tuple_element_39 );
        PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_39 );
        PyList_SET_ITEM( tmp_assattr_name_56, 2, tmp_list_element_27 );
        tmp_mvar_value_217 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES );

        if (unlikely( tmp_mvar_value_217 == NULL ))
        {
            tmp_mvar_value_217 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES );
        }

        if ( tmp_mvar_value_217 == NULL )
        {
            Py_DECREF( tmp_assattr_name_56 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_SECURITY_ATTRIBUTES" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_56 = tmp_mvar_value_217;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_56, const_str_plain__fields_, tmp_assattr_name_56 );
        Py_DECREF( tmp_assattr_name_56 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_57;
        PyObject *tmp_list_element_28;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_mvar_value_218;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_mvar_value_219;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_mvar_value_220;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_mvar_value_221;
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_mvar_value_222;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_mvar_value_223;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_mvar_value_224;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_mvar_value_225;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_mvar_value_226;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_mvar_value_227;
        PyObject *tmp_assattr_target_57;
        PyObject *tmp_mvar_value_228;
        tmp_tuple_element_40 = const_str_plain_fCtsHold;
        tmp_list_element_28 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_40 );
        PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_40 );
        tmp_mvar_value_218 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_218 == NULL ))
        {
            tmp_mvar_value_218 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_218 == NULL )
        {
            Py_DECREF( tmp_list_element_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 282;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_40 = tmp_mvar_value_218;
        Py_INCREF( tmp_tuple_element_40 );
        PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_40 );
        tmp_tuple_element_40 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_40 );
        PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_40 );
        tmp_assattr_name_57 = PyList_New( 10 );
        PyList_SET_ITEM( tmp_assattr_name_57, 0, tmp_list_element_28 );
        tmp_tuple_element_41 = const_str_plain_fDsrHold;
        tmp_list_element_28 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_41 );
        PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_41 );
        tmp_mvar_value_219 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_219 == NULL ))
        {
            tmp_mvar_value_219 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_219 == NULL )
        {
            Py_DECREF( tmp_assattr_name_57 );
            Py_DECREF( tmp_list_element_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_41 = tmp_mvar_value_219;
        Py_INCREF( tmp_tuple_element_41 );
        PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_41 );
        tmp_tuple_element_41 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_41 );
        PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_41 );
        PyList_SET_ITEM( tmp_assattr_name_57, 1, tmp_list_element_28 );
        tmp_tuple_element_42 = const_str_plain_fRlsdHold;
        tmp_list_element_28 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_42 );
        PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_42 );
        tmp_mvar_value_220 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_220 == NULL ))
        {
            tmp_mvar_value_220 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_220 == NULL )
        {
            Py_DECREF( tmp_assattr_name_57 );
            Py_DECREF( tmp_list_element_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 284;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_42 = tmp_mvar_value_220;
        Py_INCREF( tmp_tuple_element_42 );
        PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_42 );
        tmp_tuple_element_42 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_42 );
        PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_42 );
        PyList_SET_ITEM( tmp_assattr_name_57, 2, tmp_list_element_28 );
        tmp_tuple_element_43 = const_str_plain_fXoffHold;
        tmp_list_element_28 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_43 );
        PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_43 );
        tmp_mvar_value_221 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_221 == NULL ))
        {
            tmp_mvar_value_221 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_221 == NULL )
        {
            Py_DECREF( tmp_assattr_name_57 );
            Py_DECREF( tmp_list_element_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_43 = tmp_mvar_value_221;
        Py_INCREF( tmp_tuple_element_43 );
        PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_43 );
        tmp_tuple_element_43 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_43 );
        PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_43 );
        PyList_SET_ITEM( tmp_assattr_name_57, 3, tmp_list_element_28 );
        tmp_tuple_element_44 = const_str_plain_fXoffSent;
        tmp_list_element_28 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_44 );
        PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_44 );
        tmp_mvar_value_222 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_222 == NULL ))
        {
            tmp_mvar_value_222 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_222 == NULL )
        {
            Py_DECREF( tmp_assattr_name_57 );
            Py_DECREF( tmp_list_element_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_44 = tmp_mvar_value_222;
        Py_INCREF( tmp_tuple_element_44 );
        PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_44 );
        tmp_tuple_element_44 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_44 );
        PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_44 );
        PyList_SET_ITEM( tmp_assattr_name_57, 4, tmp_list_element_28 );
        tmp_tuple_element_45 = const_str_plain_fEof;
        tmp_list_element_28 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_45 );
        PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_45 );
        tmp_mvar_value_223 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_223 == NULL ))
        {
            tmp_mvar_value_223 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_223 == NULL )
        {
            Py_DECREF( tmp_assattr_name_57 );
            Py_DECREF( tmp_list_element_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_45 = tmp_mvar_value_223;
        Py_INCREF( tmp_tuple_element_45 );
        PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_45 );
        tmp_tuple_element_45 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_45 );
        PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_45 );
        PyList_SET_ITEM( tmp_assattr_name_57, 5, tmp_list_element_28 );
        tmp_tuple_element_46 = const_str_plain_fTxim;
        tmp_list_element_28 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_46 );
        PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_46 );
        tmp_mvar_value_224 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_224 == NULL ))
        {
            tmp_mvar_value_224 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_224 == NULL )
        {
            Py_DECREF( tmp_assattr_name_57 );
            Py_DECREF( tmp_list_element_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 288;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_46 = tmp_mvar_value_224;
        Py_INCREF( tmp_tuple_element_46 );
        PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_46 );
        tmp_tuple_element_46 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_46 );
        PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_46 );
        PyList_SET_ITEM( tmp_assattr_name_57, 6, tmp_list_element_28 );
        tmp_tuple_element_47 = const_str_plain_fReserved;
        tmp_list_element_28 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_47 );
        PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_47 );
        tmp_mvar_value_225 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_225 == NULL ))
        {
            tmp_mvar_value_225 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_225 == NULL )
        {
            Py_DECREF( tmp_assattr_name_57 );
            Py_DECREF( tmp_list_element_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 289;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_47 = tmp_mvar_value_225;
        Py_INCREF( tmp_tuple_element_47 );
        PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_47 );
        tmp_tuple_element_47 = const_int_pos_25;
        Py_INCREF( tmp_tuple_element_47 );
        PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_47 );
        PyList_SET_ITEM( tmp_assattr_name_57, 7, tmp_list_element_28 );
        tmp_tuple_element_48 = const_str_plain_cbInQue;
        tmp_list_element_28 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_48 );
        PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_48 );
        tmp_mvar_value_226 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_226 == NULL ))
        {
            tmp_mvar_value_226 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_226 == NULL )
        {
            Py_DECREF( tmp_assattr_name_57 );
            Py_DECREF( tmp_list_element_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 290;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_48 = tmp_mvar_value_226;
        Py_INCREF( tmp_tuple_element_48 );
        PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_48 );
        PyList_SET_ITEM( tmp_assattr_name_57, 8, tmp_list_element_28 );
        tmp_tuple_element_49 = const_str_plain_cbOutQue;
        tmp_list_element_28 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_49 );
        PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_49 );
        tmp_mvar_value_227 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_227 == NULL ))
        {
            tmp_mvar_value_227 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_227 == NULL )
        {
            Py_DECREF( tmp_assattr_name_57 );
            Py_DECREF( tmp_list_element_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 291;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_49 = tmp_mvar_value_227;
        Py_INCREF( tmp_tuple_element_49 );
        PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_49 );
        PyList_SET_ITEM( tmp_assattr_name_57, 9, tmp_list_element_28 );
        tmp_mvar_value_228 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMSTAT );

        if (unlikely( tmp_mvar_value_228 == NULL ))
        {
            tmp_mvar_value_228 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMSTAT );
        }

        if ( tmp_mvar_value_228 == NULL )
        {
            Py_DECREF( tmp_assattr_name_57 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_COMSTAT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 281;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_57 = tmp_mvar_value_228;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_57, const_str_plain__fields_, tmp_assattr_name_57 );
        Py_DECREF( tmp_assattr_name_57 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_58;
        PyObject *tmp_list_element_29;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_mvar_value_229;
        PyObject *tmp_tuple_element_51;
        PyObject *tmp_mvar_value_230;
        PyObject *tmp_tuple_element_52;
        PyObject *tmp_mvar_value_231;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_mvar_value_232;
        PyObject *tmp_tuple_element_54;
        PyObject *tmp_mvar_value_233;
        PyObject *tmp_tuple_element_55;
        PyObject *tmp_mvar_value_234;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_mvar_value_235;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_mvar_value_236;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_mvar_value_237;
        PyObject *tmp_tuple_element_59;
        PyObject *tmp_mvar_value_238;
        PyObject *tmp_tuple_element_60;
        PyObject *tmp_mvar_value_239;
        PyObject *tmp_tuple_element_61;
        PyObject *tmp_mvar_value_240;
        PyObject *tmp_tuple_element_62;
        PyObject *tmp_mvar_value_241;
        PyObject *tmp_tuple_element_63;
        PyObject *tmp_mvar_value_242;
        PyObject *tmp_tuple_element_64;
        PyObject *tmp_mvar_value_243;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_mvar_value_244;
        PyObject *tmp_tuple_element_66;
        PyObject *tmp_mvar_value_245;
        PyObject *tmp_tuple_element_67;
        PyObject *tmp_mvar_value_246;
        PyObject *tmp_tuple_element_68;
        PyObject *tmp_mvar_value_247;
        PyObject *tmp_tuple_element_69;
        PyObject *tmp_mvar_value_248;
        PyObject *tmp_tuple_element_70;
        PyObject *tmp_mvar_value_249;
        PyObject *tmp_tuple_element_71;
        PyObject *tmp_mvar_value_250;
        PyObject *tmp_tuple_element_72;
        PyObject *tmp_mvar_value_251;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_mvar_value_252;
        PyObject *tmp_tuple_element_74;
        PyObject *tmp_mvar_value_253;
        PyObject *tmp_tuple_element_75;
        PyObject *tmp_mvar_value_254;
        PyObject *tmp_tuple_element_76;
        PyObject *tmp_mvar_value_255;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_mvar_value_256;
        PyObject *tmp_assattr_target_58;
        PyObject *tmp_mvar_value_257;
        tmp_tuple_element_50 = const_str_plain_DCBlength;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_50 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_50 );
        tmp_mvar_value_229 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_229 == NULL ))
        {
            tmp_mvar_value_229 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_229 == NULL )
        {
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_50 = tmp_mvar_value_229;
        Py_INCREF( tmp_tuple_element_50 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_50 );
        tmp_assattr_name_58 = PyList_New( 28 );
        PyList_SET_ITEM( tmp_assattr_name_58, 0, tmp_list_element_29 );
        tmp_tuple_element_51 = const_str_plain_BaudRate;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_51 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_51 );
        tmp_mvar_value_230 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_230 == NULL ))
        {
            tmp_mvar_value_230 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_230 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_51 = tmp_mvar_value_230;
        Py_INCREF( tmp_tuple_element_51 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_51 );
        PyList_SET_ITEM( tmp_assattr_name_58, 1, tmp_list_element_29 );
        tmp_tuple_element_52 = const_str_plain_fBinary;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_52 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_52 );
        tmp_mvar_value_231 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_231 == NULL ))
        {
            tmp_mvar_value_231 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_231 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 296;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_52 = tmp_mvar_value_231;
        Py_INCREF( tmp_tuple_element_52 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_52 );
        tmp_tuple_element_52 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_52 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_52 );
        PyList_SET_ITEM( tmp_assattr_name_58, 2, tmp_list_element_29 );
        tmp_tuple_element_53 = const_str_plain_fParity;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_53 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_53 );
        tmp_mvar_value_232 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_232 == NULL ))
        {
            tmp_mvar_value_232 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_232 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_53 = tmp_mvar_value_232;
        Py_INCREF( tmp_tuple_element_53 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_53 );
        tmp_tuple_element_53 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_53 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_53 );
        PyList_SET_ITEM( tmp_assattr_name_58, 3, tmp_list_element_29 );
        tmp_tuple_element_54 = const_str_plain_fOutxCtsFlow;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_54 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_54 );
        tmp_mvar_value_233 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_233 == NULL ))
        {
            tmp_mvar_value_233 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_233 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 298;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_54 = tmp_mvar_value_233;
        Py_INCREF( tmp_tuple_element_54 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_54 );
        tmp_tuple_element_54 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_54 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_54 );
        PyList_SET_ITEM( tmp_assattr_name_58, 4, tmp_list_element_29 );
        tmp_tuple_element_55 = const_str_plain_fOutxDsrFlow;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_55 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_55 );
        tmp_mvar_value_234 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_234 == NULL ))
        {
            tmp_mvar_value_234 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_234 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_55 = tmp_mvar_value_234;
        Py_INCREF( tmp_tuple_element_55 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_55 );
        tmp_tuple_element_55 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_55 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_55 );
        PyList_SET_ITEM( tmp_assattr_name_58, 5, tmp_list_element_29 );
        tmp_tuple_element_56 = const_str_plain_fDtrControl;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_56 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_56 );
        tmp_mvar_value_235 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_235 == NULL ))
        {
            tmp_mvar_value_235 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_235 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 300;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_56 = tmp_mvar_value_235;
        Py_INCREF( tmp_tuple_element_56 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_56 );
        tmp_tuple_element_56 = const_int_pos_2;
        Py_INCREF( tmp_tuple_element_56 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_56 );
        PyList_SET_ITEM( tmp_assattr_name_58, 6, tmp_list_element_29 );
        tmp_tuple_element_57 = const_str_plain_fDsrSensitivity;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_57 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_57 );
        tmp_mvar_value_236 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_236 == NULL ))
        {
            tmp_mvar_value_236 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_236 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_57 = tmp_mvar_value_236;
        Py_INCREF( tmp_tuple_element_57 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_57 );
        tmp_tuple_element_57 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_57 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_57 );
        PyList_SET_ITEM( tmp_assattr_name_58, 7, tmp_list_element_29 );
        tmp_tuple_element_58 = const_str_plain_fTXContinueOnXoff;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_58 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_58 );
        tmp_mvar_value_237 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_237 == NULL ))
        {
            tmp_mvar_value_237 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_237 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 302;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_58 = tmp_mvar_value_237;
        Py_INCREF( tmp_tuple_element_58 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_58 );
        tmp_tuple_element_58 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_58 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_58 );
        PyList_SET_ITEM( tmp_assattr_name_58, 8, tmp_list_element_29 );
        tmp_tuple_element_59 = const_str_plain_fOutX;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_59 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_59 );
        tmp_mvar_value_238 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_238 == NULL ))
        {
            tmp_mvar_value_238 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_238 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_59 = tmp_mvar_value_238;
        Py_INCREF( tmp_tuple_element_59 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_59 );
        tmp_tuple_element_59 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_59 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_59 );
        PyList_SET_ITEM( tmp_assattr_name_58, 9, tmp_list_element_29 );
        tmp_tuple_element_60 = const_str_plain_fInX;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_60 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_60 );
        tmp_mvar_value_239 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_239 == NULL ))
        {
            tmp_mvar_value_239 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_239 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_60 = tmp_mvar_value_239;
        Py_INCREF( tmp_tuple_element_60 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_60 );
        tmp_tuple_element_60 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_60 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_60 );
        PyList_SET_ITEM( tmp_assattr_name_58, 10, tmp_list_element_29 );
        tmp_tuple_element_61 = const_str_plain_fErrorChar;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_61 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_61 );
        tmp_mvar_value_240 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_240 == NULL ))
        {
            tmp_mvar_value_240 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_240 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_61 = tmp_mvar_value_240;
        Py_INCREF( tmp_tuple_element_61 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_61 );
        tmp_tuple_element_61 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_61 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_61 );
        PyList_SET_ITEM( tmp_assattr_name_58, 11, tmp_list_element_29 );
        tmp_tuple_element_62 = const_str_plain_fNull;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_62 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_62 );
        tmp_mvar_value_241 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_241 == NULL ))
        {
            tmp_mvar_value_241 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_241 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_62 = tmp_mvar_value_241;
        Py_INCREF( tmp_tuple_element_62 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_62 );
        tmp_tuple_element_62 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_62 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_62 );
        PyList_SET_ITEM( tmp_assattr_name_58, 12, tmp_list_element_29 );
        tmp_tuple_element_63 = const_str_plain_fRtsControl;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_63 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_63 );
        tmp_mvar_value_242 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_242 == NULL ))
        {
            tmp_mvar_value_242 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_242 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_63 = tmp_mvar_value_242;
        Py_INCREF( tmp_tuple_element_63 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_63 );
        tmp_tuple_element_63 = const_int_pos_2;
        Py_INCREF( tmp_tuple_element_63 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_63 );
        PyList_SET_ITEM( tmp_assattr_name_58, 13, tmp_list_element_29 );
        tmp_tuple_element_64 = const_str_plain_fAbortOnError;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_64 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_64 );
        tmp_mvar_value_243 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_243 == NULL ))
        {
            tmp_mvar_value_243 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_243 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_64 = tmp_mvar_value_243;
        Py_INCREF( tmp_tuple_element_64 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_64 );
        tmp_tuple_element_64 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_64 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_64 );
        PyList_SET_ITEM( tmp_assattr_name_58, 14, tmp_list_element_29 );
        tmp_tuple_element_65 = const_str_plain_fDummy2;
        tmp_list_element_29 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_65 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_65 );
        tmp_mvar_value_244 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_244 == NULL ))
        {
            tmp_mvar_value_244 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_244 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 309;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_65 = tmp_mvar_value_244;
        Py_INCREF( tmp_tuple_element_65 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_65 );
        tmp_tuple_element_65 = const_int_pos_17;
        Py_INCREF( tmp_tuple_element_65 );
        PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_65 );
        PyList_SET_ITEM( tmp_assattr_name_58, 15, tmp_list_element_29 );
        tmp_tuple_element_66 = const_str_plain_wReserved;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_66 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_66 );
        tmp_mvar_value_245 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD );

        if (unlikely( tmp_mvar_value_245 == NULL ))
        {
            tmp_mvar_value_245 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
        }

        if ( tmp_mvar_value_245 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_66 = tmp_mvar_value_245;
        Py_INCREF( tmp_tuple_element_66 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_66 );
        PyList_SET_ITEM( tmp_assattr_name_58, 16, tmp_list_element_29 );
        tmp_tuple_element_67 = const_str_plain_XonLim;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_67 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_67 );
        tmp_mvar_value_246 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD );

        if (unlikely( tmp_mvar_value_246 == NULL ))
        {
            tmp_mvar_value_246 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
        }

        if ( tmp_mvar_value_246 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_67 = tmp_mvar_value_246;
        Py_INCREF( tmp_tuple_element_67 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_67 );
        PyList_SET_ITEM( tmp_assattr_name_58, 17, tmp_list_element_29 );
        tmp_tuple_element_68 = const_str_plain_XoffLim;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_68 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_68 );
        tmp_mvar_value_247 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD );

        if (unlikely( tmp_mvar_value_247 == NULL ))
        {
            tmp_mvar_value_247 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
        }

        if ( tmp_mvar_value_247 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 312;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_68 = tmp_mvar_value_247;
        Py_INCREF( tmp_tuple_element_68 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_68 );
        PyList_SET_ITEM( tmp_assattr_name_58, 18, tmp_list_element_29 );
        tmp_tuple_element_69 = const_str_plain_ByteSize;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_69 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_69 );
        tmp_mvar_value_248 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BYTE );

        if (unlikely( tmp_mvar_value_248 == NULL ))
        {
            tmp_mvar_value_248 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
        }

        if ( tmp_mvar_value_248 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BYTE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_69 = tmp_mvar_value_248;
        Py_INCREF( tmp_tuple_element_69 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_69 );
        PyList_SET_ITEM( tmp_assattr_name_58, 19, tmp_list_element_29 );
        tmp_tuple_element_70 = const_str_plain_Parity;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_70 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_70 );
        tmp_mvar_value_249 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BYTE );

        if (unlikely( tmp_mvar_value_249 == NULL ))
        {
            tmp_mvar_value_249 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
        }

        if ( tmp_mvar_value_249 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BYTE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_70 = tmp_mvar_value_249;
        Py_INCREF( tmp_tuple_element_70 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_70 );
        PyList_SET_ITEM( tmp_assattr_name_58, 20, tmp_list_element_29 );
        tmp_tuple_element_71 = const_str_plain_StopBits;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_71 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_71 );
        tmp_mvar_value_250 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BYTE );

        if (unlikely( tmp_mvar_value_250 == NULL ))
        {
            tmp_mvar_value_250 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
        }

        if ( tmp_mvar_value_250 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BYTE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_71 = tmp_mvar_value_250;
        Py_INCREF( tmp_tuple_element_71 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_71 );
        PyList_SET_ITEM( tmp_assattr_name_58, 21, tmp_list_element_29 );
        tmp_tuple_element_72 = const_str_plain_XonChar;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_72 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_72 );
        tmp_mvar_value_251 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

        if (unlikely( tmp_mvar_value_251 == NULL ))
        {
            tmp_mvar_value_251 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
        }

        if ( tmp_mvar_value_251 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_char" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_72 = tmp_mvar_value_251;
        Py_INCREF( tmp_tuple_element_72 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_72 );
        PyList_SET_ITEM( tmp_assattr_name_58, 22, tmp_list_element_29 );
        tmp_tuple_element_73 = const_str_plain_XoffChar;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_73 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_73 );
        tmp_mvar_value_252 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

        if (unlikely( tmp_mvar_value_252 == NULL ))
        {
            tmp_mvar_value_252 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
        }

        if ( tmp_mvar_value_252 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_char" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 317;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_73 = tmp_mvar_value_252;
        Py_INCREF( tmp_tuple_element_73 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_73 );
        PyList_SET_ITEM( tmp_assattr_name_58, 23, tmp_list_element_29 );
        tmp_tuple_element_74 = const_str_plain_ErrorChar;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_74 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_74 );
        tmp_mvar_value_253 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

        if (unlikely( tmp_mvar_value_253 == NULL ))
        {
            tmp_mvar_value_253 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
        }

        if ( tmp_mvar_value_253 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_char" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_74 = tmp_mvar_value_253;
        Py_INCREF( tmp_tuple_element_74 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_74 );
        PyList_SET_ITEM( tmp_assattr_name_58, 24, tmp_list_element_29 );
        tmp_tuple_element_75 = const_str_plain_EofChar;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_75 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_75 );
        tmp_mvar_value_254 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

        if (unlikely( tmp_mvar_value_254 == NULL ))
        {
            tmp_mvar_value_254 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
        }

        if ( tmp_mvar_value_254 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_char" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_75 = tmp_mvar_value_254;
        Py_INCREF( tmp_tuple_element_75 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_75 );
        PyList_SET_ITEM( tmp_assattr_name_58, 25, tmp_list_element_29 );
        tmp_tuple_element_76 = const_str_plain_EvtChar;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_76 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_76 );
        tmp_mvar_value_255 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

        if (unlikely( tmp_mvar_value_255 == NULL ))
        {
            tmp_mvar_value_255 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
        }

        if ( tmp_mvar_value_255 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_char" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_76 = tmp_mvar_value_255;
        Py_INCREF( tmp_tuple_element_76 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_76 );
        PyList_SET_ITEM( tmp_assattr_name_58, 26, tmp_list_element_29 );
        tmp_tuple_element_77 = const_str_plain_wReserved1;
        tmp_list_element_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_77 );
        PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_77 );
        tmp_mvar_value_256 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD );

        if (unlikely( tmp_mvar_value_256 == NULL ))
        {
            tmp_mvar_value_256 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
        }

        if ( tmp_mvar_value_256 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            Py_DECREF( tmp_list_element_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_77 = tmp_mvar_value_256;
        Py_INCREF( tmp_tuple_element_77 );
        PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_77 );
        PyList_SET_ITEM( tmp_assattr_name_58, 27, tmp_list_element_29 );
        tmp_mvar_value_257 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__DCB );

        if (unlikely( tmp_mvar_value_257 == NULL ))
        {
            tmp_mvar_value_257 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DCB );
        }

        if ( tmp_mvar_value_257 == NULL )
        {
            Py_DECREF( tmp_assattr_name_58 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_DCB" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_58 = tmp_mvar_value_257;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_58, const_str_plain__fields_, tmp_assattr_name_58 );
        Py_DECREF( tmp_assattr_name_58 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_59;
        PyObject *tmp_list_element_30;
        PyObject *tmp_tuple_element_78;
        PyObject *tmp_mvar_value_258;
        PyObject *tmp_tuple_element_79;
        PyObject *tmp_mvar_value_259;
        PyObject *tmp_tuple_element_80;
        PyObject *tmp_mvar_value_260;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_mvar_value_261;
        PyObject *tmp_tuple_element_82;
        PyObject *tmp_mvar_value_262;
        PyObject *tmp_assattr_target_59;
        PyObject *tmp_mvar_value_263;
        tmp_tuple_element_78 = const_str_plain_ReadIntervalTimeout;
        tmp_list_element_30 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_78 );
        PyTuple_SET_ITEM( tmp_list_element_30, 0, tmp_tuple_element_78 );
        tmp_mvar_value_258 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_258 == NULL ))
        {
            tmp_mvar_value_258 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_258 == NULL )
        {
            Py_DECREF( tmp_list_element_30 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_78 = tmp_mvar_value_258;
        Py_INCREF( tmp_tuple_element_78 );
        PyTuple_SET_ITEM( tmp_list_element_30, 1, tmp_tuple_element_78 );
        tmp_assattr_name_59 = PyList_New( 5 );
        PyList_SET_ITEM( tmp_assattr_name_59, 0, tmp_list_element_30 );
        tmp_tuple_element_79 = const_str_plain_ReadTotalTimeoutMultiplier;
        tmp_list_element_30 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_79 );
        PyTuple_SET_ITEM( tmp_list_element_30, 0, tmp_tuple_element_79 );
        tmp_mvar_value_259 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_259 == NULL ))
        {
            tmp_mvar_value_259 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_259 == NULL )
        {
            Py_DECREF( tmp_assattr_name_59 );
            Py_DECREF( tmp_list_element_30 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_79 = tmp_mvar_value_259;
        Py_INCREF( tmp_tuple_element_79 );
        PyTuple_SET_ITEM( tmp_list_element_30, 1, tmp_tuple_element_79 );
        PyList_SET_ITEM( tmp_assattr_name_59, 1, tmp_list_element_30 );
        tmp_tuple_element_80 = const_str_plain_ReadTotalTimeoutConstant;
        tmp_list_element_30 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_80 );
        PyTuple_SET_ITEM( tmp_list_element_30, 0, tmp_tuple_element_80 );
        tmp_mvar_value_260 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_260 == NULL ))
        {
            tmp_mvar_value_260 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_260 == NULL )
        {
            Py_DECREF( tmp_assattr_name_59 );
            Py_DECREF( tmp_list_element_30 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 326;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_80 = tmp_mvar_value_260;
        Py_INCREF( tmp_tuple_element_80 );
        PyTuple_SET_ITEM( tmp_list_element_30, 1, tmp_tuple_element_80 );
        PyList_SET_ITEM( tmp_assattr_name_59, 2, tmp_list_element_30 );
        tmp_tuple_element_81 = const_str_plain_WriteTotalTimeoutMultiplier;
        tmp_list_element_30 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_81 );
        PyTuple_SET_ITEM( tmp_list_element_30, 0, tmp_tuple_element_81 );
        tmp_mvar_value_261 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_261 == NULL ))
        {
            tmp_mvar_value_261 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_261 == NULL )
        {
            Py_DECREF( tmp_assattr_name_59 );
            Py_DECREF( tmp_list_element_30 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_81 = tmp_mvar_value_261;
        Py_INCREF( tmp_tuple_element_81 );
        PyTuple_SET_ITEM( tmp_list_element_30, 1, tmp_tuple_element_81 );
        PyList_SET_ITEM( tmp_assattr_name_59, 3, tmp_list_element_30 );
        tmp_tuple_element_82 = const_str_plain_WriteTotalTimeoutConstant;
        tmp_list_element_30 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_82 );
        PyTuple_SET_ITEM( tmp_list_element_30, 0, tmp_tuple_element_82 );
        tmp_mvar_value_262 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_262 == NULL ))
        {
            tmp_mvar_value_262 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_262 == NULL )
        {
            Py_DECREF( tmp_assattr_name_59 );
            Py_DECREF( tmp_list_element_30 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_82 = tmp_mvar_value_262;
        Py_INCREF( tmp_tuple_element_82 );
        PyTuple_SET_ITEM( tmp_list_element_30, 1, tmp_tuple_element_82 );
        PyList_SET_ITEM( tmp_assattr_name_59, 4, tmp_list_element_30 );
        tmp_mvar_value_263 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );

        if (unlikely( tmp_mvar_value_263 == NULL ))
        {
            tmp_mvar_value_263 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );
        }

        if ( tmp_mvar_value_263 == NULL )
        {
            Py_DECREF( tmp_assattr_name_59 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_COMMTIMEOUTS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 323;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_59 = tmp_mvar_value_263;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_59, const_str_plain__fields_, tmp_assattr_name_59 );
        Py_DECREF( tmp_assattr_name_59 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_99eafefbedb88fa86d882c9e453add67 );
#endif
    popFrameStack();

    assertFrameObject( frame_99eafefbedb88fa86d882c9e453add67 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_99eafefbedb88fa86d882c9e453add67 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_99eafefbedb88fa86d882c9e453add67, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_99eafefbedb88fa86d882c9e453add67->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_99eafefbedb88fa86d882c9e453add67, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = LIST_COPY( const_list_5fe71ecb740c0898f445980823e1ece2_list );
        UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_173 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_serial$win32 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
