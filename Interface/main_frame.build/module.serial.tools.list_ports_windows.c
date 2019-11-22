/* Generated code for Python module 'serial.tools.list_ports_windows'
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

/* The "_module_serial$tools$list_ports_windows" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial$tools$list_ports_windows;
PyDictObject *moduledict_serial$tools$list_ports_windows;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_INVALID_HANDLE_VALUE;
static PyObject *const_str_digest_d7ba96010f1a397fbd068a8158f3fa12;
static PyObject *const_int_pos_122;
extern PyObject *const_int_pos_12;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_int_pos_5_tuple;
static PyObject *const_str_plain_PBYTE;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_FTDIBUS;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_plain_setupapi;
static PyObject *const_str_plain_ULONG;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_plain_c_wchar_p;
static PyObject *const_str_digest_4d3f565b0dfa5040aa4e9ae0d9bdba89;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_str_plain_PSP_DEVINFO_DATA;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_PCTSTR;
extern PyObject *const_str_plain_group;
static PyObject *const_str_plain_Advapi32;
extern PyObject *const_str_plain_LONG;
extern PyObject *const_int_pos_11;
extern PyObject *const_str_plain_BOOL;
static PyObject *const_str_plain_Data3;
extern PyObject *const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
static PyObject *const_str_plain_guids_size;
static PyObject *const_str_plain_loc_path_str;
extern PyObject *const_tuple_str_plain_list_ports_common_tuple;
static PyObject *const_str_plain_LPBYTE;
extern PyObject *const_str_plain_m;
static PyObject *const_tuple_str_plain_HKEY_tuple;
extern PyObject *const_int_pos_250;
extern PyObject *const_str_plain_LoadLibrary;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain__fields_;
static PyObject *const_str_plain_windll;
static PyObject *const_int_pos_131097;
extern PyObject *const_int_pos_5;
static PyObject *const_str_plain_port_name_buffer;
static PyObject *const_str_plain_cbSize;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_c_void_p;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_Ports;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_int_pos_16;
static PyObject *const_str_plain_PSP_DEVICE_INTERFACE_DETAIL_DATA;
extern PyObject *const_str_plain_re;
extern PyObject *const_slice_none_int_pos_2_none;
extern PyObject *const_str_plain_description;
static PyObject *const_str_plain_SPDRP_FRIENDLYNAME;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_serial;
static PyObject *const_str_plain_Data1;
extern PyObject *const_tuple_str_plain_d_tuple;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_Structure;
extern PyObject *const_str_plain_POINTER;
extern PyObject *const_str_plain_DWORD;
static PyObject *const_str_plain_LPCTSTR;
static PyObject *const_str_plain_PTSTR;
extern PyObject *const_str_plain_WORD;
extern PyObject *const_str_plain_BYTE;
extern PyObject *const_str_plain_ULONG_PTR;
static PyObject *const_str_plain_PortName;
extern PyObject *const_str_plain_GetLastError;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_int_pos_250_tuple;
extern PyObject *const_tuple_int_pos_4_tuple;
extern PyObject *const_str_plain_Reserved;
static PyObject *const_tuple_str_plain_ULONG_tuple;
static PyObject *const_str_digest_3519366b87d5d83f0111d65dc0a20761;
extern PyObject *const_str_plain_LPDWORD;
extern PyObject *const_str_plain_arguments;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_plain_sizeof;
extern PyObject *const_str_plain_g;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_3674e7e26d99f9444f49c13c382820d2;
static PyObject *const_tuple_str_plain_USB_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain_advapi32;
extern PyObject *const_tuple_str_plain_BOOL_tuple;
static PyObject *const_str_plain_SetupDiGetDeviceRegistryPropertyW;
extern PyObject *const_str_plain_hwid;
extern PyObject *const_str_plain_NULL;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_byref;
extern PyObject *const_str_plain_argtypes;
static PyObject *const_tuple_str_plain_include_links_tuple;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_tuple_str_chr_45_tuple;
static PyObject *const_str_plain_KEY_READ;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_912bc8bb225b7547fc80e2202734bf7c;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_SPDRP_HARDWAREID;
extern PyObject *const_str_plain_manufacturer;
extern PyObject *const_tuple_str_plain_BYTE_tuple;
extern PyObject *const_str_plain_list_ports_common;
static PyObject *const_tuple_str_plain_FTDIBUS_tuple;
static PyObject *const_str_plain_SetupDiGetDeviceRegistryProperty;
extern PyObject *const_str_plain_ListPortInfo;
extern PyObject *const_str_plain_restype;
extern PyObject *const_str_plain_include_links;
static PyObject *const_str_plain_szManufacturer;
static PyObject *const_str_plain_DICS_FLAG_GLOBAL;
static PyObject *const_str_plain_ClassGuid;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_SetupDiGetDeviceInstanceId;
static PyObject *const_str_digest_90e025c2236bcfa6860f28cc40572a03;
static PyObject *const_str_plain_RegCloseKey;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_str_plain_SetupDiOpenDevRegKey;
static PyObject *const_str_plain_HDEVINFO;
extern PyObject *const_str_plain_finditer;
extern PyObject *const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
static PyObject *const_str_plain_REGSAM;
static PyObject *const_tuple_str_plain_LPT_tuple;
static PyObject *const_str_plain_SPDRP_MFG;
extern PyObject *const_str_plain_I;
extern PyObject *const_str_plain_ctypes;
extern PyObject *const_int_0;
static PyObject *const_str_plain_HKEY;
static PyObject *const_str_plain_devinfo;
extern PyObject *const_str_plain_comports;
static PyObject *const_str_plain_SPDRP_LOCATION_PATHS;
static PyObject *const_str_plain_SetupDiClassGuidsFromNameW;
extern PyObject *const_str_plain_hkey;
static PyObject *const_tuple_str_plain_Advapi32_tuple;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_tuple_str_plain_LONG_tuple;
static PyObject *const_str_plain_DevInst;
extern PyObject *const_str_plain_search;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_USB;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_str_plain_g_hdi;
extern PyObject *const_str_plain_vid;
static PyObject *const_str_plain_GUIDs;
extern PyObject *const_str_plain_location;
static PyObject *const_str_plain_Data4;
static PyObject *const_str_plain_LPT;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain_SetupDiDestroyDeviceInfoList;
static PyObject *const_str_plain_GUID;
static PyObject *const_str_plain_create_unicode_buffer;
static PyObject *const_str_plain_SetupDiGetClassDevs;
static PyObject *const_str_digest_af155e22823b02ebfdc380a93ed7dc8f;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_SetupDiGetDeviceInstanceIdW;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_SetupDiClassGuidsFromName;
extern PyObject *const_tuple_int_pos_7_tuple;
static PyObject *const_str_digest_00cb46ac75ed4564dd76d2f838bf7090;
static PyObject *const_str_plain_szFriendlyName;
static PyObject *const_str_plain_ValidHandle;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___str__;
static PyObject *const_str_plain_SetupDiGetClassDevsW;
static PyObject *const_str_plain_ERROR_INSUFFICIENT_BUFFER;
static PyObject *const_tuple_str_plain_HWND_tuple;
static PyObject *const_tuple_d0253a75090419f6e6d627056db16731_tuple;
extern PyObject *const_str_digest_1b1b6b23a4b523b9fca1e553f8d15eaf;
static PyObject *const_str_digest_768b2bc4cb25c1172f889d1b7de16791;
static PyObject *const_str_plain_PDWORD;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_DIGCF_PRESENT;
static PyObject *const_str_plain_iterate_comports;
static PyObject *const_str_digest_116c3eaeea9958e59e9e6756df1ec9b6;
static PyObject *const_str_digest_d53afb1e07f3ee81f7c6c0213dcdd766;
static PyObject *const_str_plain_SP_DEVINFO_DATA;
static PyObject *const_str_plain_errcheck;
extern PyObject *const_slice_int_pos_2_none_none;
extern PyObject *const_str_plain_pid;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_serial_number;
static PyObject *const_str_plain_SetupDiEnumDeviceInfo;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_HWND;
static PyObject *const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple;
static PyObject *const_str_digest_ee3920580023d1af94223c48071ae060;
extern PyObject *const_str_digest_2a9b9e88acca55347e5ef4ae4b4dfd80;
extern PyObject *const_str_plain_usb_info;
extern PyObject *const_int_pos_7;
static PyObject *const_str_plain_Data2;
extern PyObject *const_str_plain_WinError;
static PyObject *const_str_plain_DIREG_DEV;
static PyObject *const_str_plain_ACCESS_MASK;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain_setupapi_tuple;
extern PyObject *const_int_pos_35;
static PyObject *const_str_plain_port_name_length;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_86fa33899a79b80323a28f9628b50153;
extern PyObject *const_tuple_str_plain_DWORD_tuple;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain_szHardwareID_str;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_RegQueryValueExW;
static PyObject *const_str_plain_szHardwareID;
static PyObject *const_str_plain_RegQueryValueEx;
static PyObject *const_tuple_str_plain_ULONG_PTR_tuple;
static PyObject *const_str_plain_DIGCF_DEVICEINTERFACE;
extern PyObject *const_tuple_str_plain_WORD_tuple;
static PyObject *const_str_plain_bInterfaceNumber;
static PyObject *const_str_digest_7a4b7d4aa73ef8f7e432ed3df7a3e1e7;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_d7ba96010f1a397fbd068a8158f3fa12 = UNSTREAM_STRING_ASCII( &constant_bin[ 5824948 ], 23, 0 );
    const_int_pos_122 = PyLong_FromUnsignedLong( 122ul );
    const_str_plain_PBYTE = UNSTREAM_STRING_ASCII( &constant_bin[ 103469 ], 5, 1 );
    const_str_plain_FTDIBUS = UNSTREAM_STRING_ASCII( &constant_bin[ 5824971 ], 7, 1 );
    const_str_plain_setupapi = UNSTREAM_STRING_ASCII( &constant_bin[ 5824978 ], 8, 1 );
    const_str_plain_ULONG = UNSTREAM_STRING_ASCII( &constant_bin[ 5824986 ], 5, 1 );
    const_str_plain_c_wchar_p = UNSTREAM_STRING_ASCII( &constant_bin[ 5824991 ], 9, 1 );
    const_str_digest_4d3f565b0dfa5040aa4e9ae0d9bdba89 = UNSTREAM_STRING_ASCII( &constant_bin[ 5825000 ], 46, 0 );
    const_str_plain_PSP_DEVINFO_DATA = UNSTREAM_STRING_ASCII( &constant_bin[ 5825046 ], 16, 1 );
    const_str_plain_PCTSTR = UNSTREAM_STRING_ASCII( &constant_bin[ 5825062 ], 6, 1 );
    const_str_plain_Advapi32 = UNSTREAM_STRING_ASCII( &constant_bin[ 5825068 ], 8, 1 );
    const_str_plain_Data3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5825076 ], 5, 1 );
    const_str_plain_guids_size = UNSTREAM_STRING_ASCII( &constant_bin[ 5825081 ], 10, 1 );
    const_str_plain_loc_path_str = UNSTREAM_STRING_ASCII( &constant_bin[ 5825091 ], 12, 1 );
    const_str_plain_LPBYTE = UNSTREAM_STRING_ASCII( &constant_bin[ 5825103 ], 6, 1 );
    const_tuple_str_plain_HKEY_tuple = PyTuple_New( 1 );
    const_str_plain_HKEY = UNSTREAM_STRING_ASCII( &constant_bin[ 1581494 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HKEY_tuple, 0, const_str_plain_HKEY ); Py_INCREF( const_str_plain_HKEY );
    const_str_plain_windll = UNSTREAM_STRING_ASCII( &constant_bin[ 5825109 ], 6, 1 );
    const_int_pos_131097 = PyLong_FromUnsignedLong( 131097ul );
    const_str_plain_port_name_buffer = UNSTREAM_STRING_ASCII( &constant_bin[ 5825115 ], 16, 1 );
    const_str_plain_cbSize = UNSTREAM_STRING_ASCII( &constant_bin[ 5825131 ], 6, 1 );
    const_str_plain_PSP_DEVICE_INTERFACE_DETAIL_DATA = UNSTREAM_STRING_ASCII( &constant_bin[ 5825137 ], 32, 1 );
    const_str_plain_SPDRP_FRIENDLYNAME = UNSTREAM_STRING_ASCII( &constant_bin[ 5825169 ], 18, 1 );
    const_str_plain_Data1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5825187 ], 5, 1 );
    const_str_plain_LPCTSTR = UNSTREAM_STRING_ASCII( &constant_bin[ 5825192 ], 7, 1 );
    const_str_plain_PTSTR = UNSTREAM_STRING_ASCII( &constant_bin[ 5825199 ], 5, 1 );
    const_str_plain_PortName = UNSTREAM_STRING_ASCII( &constant_bin[ 5825204 ], 8, 1 );
    const_tuple_int_pos_250_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_250_tuple, 0, const_int_pos_250 ); Py_INCREF( const_int_pos_250 );
    const_tuple_str_plain_ULONG_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ULONG_tuple, 0, const_str_plain_ULONG ); Py_INCREF( const_str_plain_ULONG );
    const_str_digest_3519366b87d5d83f0111d65dc0a20761 = UNSTREAM_STRING_ASCII( &constant_bin[ 5825212 ], 62, 0 );
    const_str_digest_3674e7e26d99f9444f49c13c382820d2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5825274 ], 6, 0 );
    const_tuple_str_plain_USB_tuple = PyTuple_New( 1 );
    const_str_plain_USB = UNSTREAM_STRING_ASCII( &constant_bin[ 5812547 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_USB_tuple, 0, const_str_plain_USB ); Py_INCREF( const_str_plain_USB );
    const_str_plain_advapi32 = UNSTREAM_STRING_ASCII( &constant_bin[ 5825280 ], 8, 1 );
    const_str_plain_SetupDiGetDeviceRegistryPropertyW = UNSTREAM_STRING_ASCII( &constant_bin[ 5825288 ], 33, 1 );
    const_tuple_str_plain_include_links_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_include_links_tuple, 0, const_str_plain_include_links ); Py_INCREF( const_str_plain_include_links );
    const_str_plain_KEY_READ = UNSTREAM_STRING_ASCII( &constant_bin[ 5825321 ], 8, 1 );
    const_str_digest_912bc8bb225b7547fc80e2202734bf7c = UNSTREAM_STRING_ASCII( &constant_bin[ 5825329 ], 6, 0 );
    const_str_plain_SPDRP_HARDWAREID = UNSTREAM_STRING_ASCII( &constant_bin[ 5825335 ], 16, 1 );
    const_tuple_str_plain_FTDIBUS_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FTDIBUS_tuple, 0, const_str_plain_FTDIBUS ); Py_INCREF( const_str_plain_FTDIBUS );
    const_str_plain_SetupDiGetDeviceRegistryProperty = UNSTREAM_STRING_ASCII( &constant_bin[ 5825288 ], 32, 1 );
    const_str_plain_szManufacturer = UNSTREAM_STRING_ASCII( &constant_bin[ 5825351 ], 14, 1 );
    const_str_plain_DICS_FLAG_GLOBAL = UNSTREAM_STRING_ASCII( &constant_bin[ 5825365 ], 16, 1 );
    const_str_plain_ClassGuid = UNSTREAM_STRING_ASCII( &constant_bin[ 5825381 ], 9, 1 );
    const_str_plain_SetupDiGetDeviceInstanceId = UNSTREAM_STRING_ASCII( &constant_bin[ 5825390 ], 26, 1 );
    const_str_digest_90e025c2236bcfa6860f28cc40572a03 = UNSTREAM_STRING_ASCII( &constant_bin[ 5825416 ], 40, 0 );
    const_str_plain_RegCloseKey = UNSTREAM_STRING_ASCII( &constant_bin[ 5825456 ], 11, 1 );
    const_str_plain_SetupDiOpenDevRegKey = UNSTREAM_STRING_ASCII( &constant_bin[ 5825467 ], 20, 1 );
    const_str_plain_HDEVINFO = UNSTREAM_STRING_ASCII( &constant_bin[ 5825487 ], 8, 1 );
    const_str_plain_REGSAM = UNSTREAM_STRING_ASCII( &constant_bin[ 5825495 ], 6, 1 );
    const_tuple_str_plain_LPT_tuple = PyTuple_New( 1 );
    const_str_plain_LPT = UNSTREAM_STRING_ASCII( &constant_bin[ 5825501 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LPT_tuple, 0, const_str_plain_LPT ); Py_INCREF( const_str_plain_LPT );
    const_str_plain_SPDRP_MFG = UNSTREAM_STRING_ASCII( &constant_bin[ 5825504 ], 9, 1 );
    const_str_plain_devinfo = UNSTREAM_STRING_ASCII( &constant_bin[ 5825513 ], 7, 1 );
    const_str_plain_SPDRP_LOCATION_PATHS = UNSTREAM_STRING_ASCII( &constant_bin[ 5825520 ], 20, 1 );
    const_str_plain_SetupDiClassGuidsFromNameW = UNSTREAM_STRING_ASCII( &constant_bin[ 5825540 ], 26, 1 );
    const_tuple_str_plain_Advapi32_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Advapi32_tuple, 0, const_str_plain_Advapi32 ); Py_INCREF( const_str_plain_Advapi32 );
    const_tuple_str_plain_LONG_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LONG_tuple, 0, const_str_plain_LONG ); Py_INCREF( const_str_plain_LONG );
    const_str_plain_DevInst = UNSTREAM_STRING_ASCII( &constant_bin[ 5825566 ], 7, 1 );
    const_str_plain_g_hdi = UNSTREAM_STRING_ASCII( &constant_bin[ 5825573 ], 5, 1 );
    const_str_plain_GUIDs = UNSTREAM_STRING_ASCII( &constant_bin[ 5825578 ], 5, 1 );
    const_str_plain_Data4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5825583 ], 5, 1 );
    const_str_plain_SetupDiDestroyDeviceInfoList = UNSTREAM_STRING_ASCII( &constant_bin[ 5825588 ], 28, 1 );
    const_str_plain_GUID = UNSTREAM_STRING_ASCII( &constant_bin[ 5429637 ], 4, 1 );
    const_str_plain_create_unicode_buffer = UNSTREAM_STRING_ASCII( &constant_bin[ 5825616 ], 21, 1 );
    const_str_plain_SetupDiGetClassDevs = UNSTREAM_STRING_ASCII( &constant_bin[ 5825637 ], 19, 1 );
    const_str_digest_af155e22823b02ebfdc380a93ed7dc8f = UNSTREAM_STRING_ASCII( &constant_bin[ 5825656 ], 30, 0 );
    const_str_plain_SetupDiGetDeviceInstanceIdW = UNSTREAM_STRING_ASCII( &constant_bin[ 5825686 ], 27, 1 );
    const_str_plain_SetupDiClassGuidsFromName = UNSTREAM_STRING_ASCII( &constant_bin[ 5825540 ], 25, 1 );
    const_str_digest_00cb46ac75ed4564dd76d2f838bf7090 = UNSTREAM_STRING_ASCII( &constant_bin[ 5825713 ], 34, 0 );
    const_str_plain_szFriendlyName = UNSTREAM_STRING_ASCII( &constant_bin[ 5825747 ], 14, 1 );
    const_str_plain_ValidHandle = UNSTREAM_STRING_ASCII( &constant_bin[ 5825761 ], 11, 1 );
    const_str_plain_SetupDiGetClassDevsW = UNSTREAM_STRING_ASCII( &constant_bin[ 5825772 ], 20, 1 );
    const_str_plain_ERROR_INSUFFICIENT_BUFFER = UNSTREAM_STRING_ASCII( &constant_bin[ 5825792 ], 25, 1 );
    const_tuple_str_plain_HWND_tuple = PyTuple_New( 1 );
    const_str_plain_HWND = UNSTREAM_STRING_ASCII( &constant_bin[ 5825817 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HWND_tuple, 0, const_str_plain_HWND ); Py_INCREF( const_str_plain_HWND );
    const_tuple_d0253a75090419f6e6d627056db16731_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 0, const_str_plain_GUIDs ); Py_INCREF( const_str_plain_GUIDs );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 1, const_str_plain_guids_size ); Py_INCREF( const_str_plain_guids_size );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 2, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    const_str_plain_bInterfaceNumber = UNSTREAM_STRING_ASCII( &constant_bin[ 5825821 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 3, const_str_plain_bInterfaceNumber ); Py_INCREF( const_str_plain_bInterfaceNumber );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 4, const_str_plain_g_hdi ); Py_INCREF( const_str_plain_g_hdi );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 5, const_str_plain_devinfo ); Py_INCREF( const_str_plain_devinfo );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 6, const_str_plain_hkey ); Py_INCREF( const_str_plain_hkey );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 7, const_str_plain_port_name_buffer ); Py_INCREF( const_str_plain_port_name_buffer );
    const_str_plain_port_name_length = UNSTREAM_STRING_ASCII( &constant_bin[ 5825837 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 8, const_str_plain_port_name_length ); Py_INCREF( const_str_plain_port_name_length );
    const_str_plain_szHardwareID = UNSTREAM_STRING_ASCII( &constant_bin[ 5825853 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 9, const_str_plain_szHardwareID ); Py_INCREF( const_str_plain_szHardwareID );
    const_str_plain_szHardwareID_str = UNSTREAM_STRING_ASCII( &constant_bin[ 5825865 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 10, const_str_plain_szHardwareID_str ); Py_INCREF( const_str_plain_szHardwareID_str );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 11, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 12, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 13, const_str_plain_loc_path_str ); Py_INCREF( const_str_plain_loc_path_str );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 14, const_str_plain_location ); Py_INCREF( const_str_plain_location );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 15, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 16, const_str_plain_szFriendlyName ); Py_INCREF( const_str_plain_szFriendlyName );
    PyTuple_SET_ITEM( const_tuple_d0253a75090419f6e6d627056db16731_tuple, 17, const_str_plain_szManufacturer ); Py_INCREF( const_str_plain_szManufacturer );
    const_str_digest_768b2bc4cb25c1172f889d1b7de16791 = UNSTREAM_STRING_ASCII( &constant_bin[ 68954 ], 4, 0 );
    const_str_plain_PDWORD = UNSTREAM_STRING_ASCII( &constant_bin[ 5825881 ], 6, 1 );
    const_str_plain_DIGCF_PRESENT = UNSTREAM_STRING_ASCII( &constant_bin[ 5825887 ], 13, 1 );
    const_str_plain_iterate_comports = UNSTREAM_STRING_ASCII( &constant_bin[ 5825900 ], 16, 1 );
    const_str_digest_116c3eaeea9958e59e9e6756df1ec9b6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5825916 ], 12, 0 );
    const_str_digest_d53afb1e07f3ee81f7c6c0213dcdd766 = UNSTREAM_STRING_ASCII( &constant_bin[ 5825928 ], 60, 0 );
    const_str_plain_SP_DEVINFO_DATA = UNSTREAM_STRING_ASCII( &constant_bin[ 5824948 ], 15, 1 );
    const_str_plain_errcheck = UNSTREAM_STRING_ASCII( &constant_bin[ 5825988 ], 8, 1 );
    const_str_plain_SetupDiEnumDeviceInfo = UNSTREAM_STRING_ASCII( &constant_bin[ 5825996 ], 21, 1 );
    const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple, 2, const_str_plain_arguments ); Py_INCREF( const_str_plain_arguments );
    const_str_digest_ee3920580023d1af94223c48071ae060 = UNSTREAM_STRING_ASCII( &constant_bin[ 5826017 ], 48, 0 );
    const_str_plain_Data2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5826065 ], 5, 1 );
    const_str_plain_DIREG_DEV = UNSTREAM_STRING_ASCII( &constant_bin[ 5826070 ], 9, 1 );
    const_str_plain_ACCESS_MASK = UNSTREAM_STRING_ASCII( &constant_bin[ 5826079 ], 11, 1 );
    const_tuple_str_plain_setupapi_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_setupapi_tuple, 0, const_str_plain_setupapi ); Py_INCREF( const_str_plain_setupapi );
    const_str_digest_86fa33899a79b80323a28f9628b50153 = UNSTREAM_STRING_ASCII( &constant_bin[ 5826090 ], 23, 0 );
    const_str_plain_RegQueryValueExW = UNSTREAM_STRING_ASCII( &constant_bin[ 5826113 ], 16, 1 );
    const_str_plain_RegQueryValueEx = UNSTREAM_STRING_ASCII( &constant_bin[ 5826113 ], 15, 1 );
    const_tuple_str_plain_ULONG_PTR_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ULONG_PTR_tuple, 0, const_str_plain_ULONG_PTR ); Py_INCREF( const_str_plain_ULONG_PTR );
    const_str_plain_DIGCF_DEVICEINTERFACE = UNSTREAM_STRING_ASCII( &constant_bin[ 5826129 ], 21, 1 );
    const_str_digest_7a4b7d4aa73ef8f7e432ed3df7a3e1e7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5826150 ], 30, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial$tools$list_ports_windows( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c009e4619c29f8cd3dd738ac97448b44;
static PyCodeObject *codeobj_39276fed314b2e3946ecdd0cb2a8fb71;
static PyCodeObject *codeobj_23cc64ce78865db4262714c2ba677207;
static PyCodeObject *codeobj_370f3f0317b1d5d37e783514eee3b4e8;
static PyCodeObject *codeobj_9ebffbcc9496ee07b139e93ea5bb0cec;
static PyCodeObject *codeobj_b1ac0a6740c4d25d66ede7b3febf4296;
static PyCodeObject *codeobj_ef0bcac5482d2a06d69a1e0fc432a1aa;
static PyCodeObject *codeobj_2b4137ae860c032f014dbf49d9aa90e2;
static PyCodeObject *codeobj_4cc8ee15a9b3ebab7b5a888dea3b2af7;
static PyCodeObject *codeobj_36fa9b868896c1ec3c1dae11a0b8cb33;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_00cb46ac75ed4564dd76d2f838bf7090 );
    codeobj_c009e4619c29f8cd3dd738ac97448b44 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 59, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_39276fed314b2e3946ecdd0cb2a8fb71 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 60, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_23cc64ce78865db4262714c2ba677207 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_90e025c2236bcfa6860f28cc40572a03, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_370f3f0317b1d5d37e783514eee3b4e8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GUID, 46, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_9ebffbcc9496ee07b139e93ea5bb0cec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SP_DEVINFO_DATA, 64, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_b1ac0a6740c4d25d66ede7b3febf4296 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ValidHandle, 27, const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ef0bcac5482d2a06d69a1e0fc432a1aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 54, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2b4137ae860c032f014dbf49d9aa90e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 72, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4cc8ee15a9b3ebab7b5a888dea3b2af7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_comports, 297, const_tuple_str_plain_include_links_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_36fa9b868896c1ec3c1dae11a0b8cb33 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iterate_comports, 133, const_tuple_d0253a75090419f6e6d627056db16731_tuple, 0, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *serial$tools$list_ports_windows$$$function_4_iterate_comports$$$genobj_1_iterate_comports_maker( void );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_1_ValidHandle(  );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_2___str__(  );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_3___str__(  );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_4_iterate_comports(  );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_5_comports( PyObject *defaults );


// The module function definitions.
static PyObject *impl_serial$tools$list_ports_windows$$$function_1_ValidHandle( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *par_func = python_pars[ 1 ];
    PyObject *par_arguments = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_b1ac0a6740c4d25d66ede7b3febf4296;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b1ac0a6740c4d25d66ede7b3febf4296 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b1ac0a6740c4d25d66ede7b3febf4296, codeobj_b1ac0a6740c4d25d66ede7b3febf4296, module_serial$tools$list_ports_windows, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b1ac0a6740c4d25d66ede7b3febf4296 = cache_frame_b1ac0a6740c4d25d66ede7b3febf4296;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b1ac0a6740c4d25d66ede7b3febf4296 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b1ac0a6740c4d25d66ede7b3febf4296 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_value );
        tmp_compexpr_left_1 = par_value;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 29;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            frame_b1ac0a6740c4d25d66ede7b3febf4296->m_frame.f_lineno = 29;
            tmp_raise_type_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_WinError );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 29;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1ac0a6740c4d25d66ede7b3febf4296 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1ac0a6740c4d25d66ede7b3febf4296 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b1ac0a6740c4d25d66ede7b3febf4296, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b1ac0a6740c4d25d66ede7b3febf4296->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b1ac0a6740c4d25d66ede7b3febf4296, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b1ac0a6740c4d25d66ede7b3febf4296,
        type_description_1,
        par_value,
        par_func,
        par_arguments
    );


    // Release cached frame.
    if ( frame_b1ac0a6740c4d25d66ede7b3febf4296 == cache_frame_b1ac0a6740c4d25d66ede7b3febf4296 )
    {
        Py_DECREF( frame_b1ac0a6740c4d25d66ede7b3febf4296 );
    }
    cache_frame_b1ac0a6740c4d25d66ede7b3febf4296 = NULL;

    assertFrameObject( frame_b1ac0a6740c4d25d66ede7b3febf4296 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_value );
    tmp_return_value = par_value;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_1_ValidHandle );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_arguments );
    Py_DECREF( par_arguments );
    par_arguments = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_arguments );
    Py_DECREF( par_arguments );
    par_arguments = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_1_ValidHandle );
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


static PyObject *impl_serial$tools$list_ports_windows$$$function_2___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *outline_0_var_d = NULL;
    PyObject *outline_1_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_ef0bcac5482d2a06d69a1e0fc432a1aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_c009e4619c29f8cd3dd738ac97448b44_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_c009e4619c29f8cd3dd738ac97448b44_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_39276fed314b2e3946ecdd0cb2a8fb71_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_39276fed314b2e3946ecdd0cb2a8fb71_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_ef0bcac5482d2a06d69a1e0fc432a1aa = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ef0bcac5482d2a06d69a1e0fc432a1aa, codeobj_ef0bcac5482d2a06d69a1e0fc432a1aa, module_serial$tools$list_ports_windows, sizeof(void *) );
    frame_ef0bcac5482d2a06d69a1e0fc432a1aa = cache_frame_ef0bcac5482d2a06d69a1e0fc432a1aa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ef0bcac5482d2a06d69a1e0fc432a1aa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ef0bcac5482d2a06d69a1e0fc432a1aa ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_source_name_1 = const_str_digest_7a4b7d4aa73ef8f7e432ed3df7a3e1e7;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
        assert( !(tmp_called_name_1 == NULL) );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Data1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Data2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Data3 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_source_name_5 = const_str_empty;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
        assert( !(tmp_called_name_2 == NULL) );
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Data4 );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            tmp_subscript_name_1 = const_slice_none_int_pos_2_none;
            tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
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
        MAKE_OR_REUSE_FRAME( cache_frame_c009e4619c29f8cd3dd738ac97448b44_2, codeobj_c009e4619c29f8cd3dd738ac97448b44, module_serial$tools$list_ports_windows, sizeof(void *) );
        frame_c009e4619c29f8cd3dd738ac97448b44_2 = cache_frame_c009e4619c29f8cd3dd738ac97448b44_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_c009e4619c29f8cd3dd738ac97448b44_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_c009e4619c29f8cd3dd738ac97448b44_2 ) == 2 ); // Frame stack

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
                    exception_lineno = 59;
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
                PyObject *old = outline_0_var_d;
                outline_0_var_d = tmp_assign_source_4;
                Py_INCREF( outline_0_var_d );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_instance_1 = const_str_digest_912bc8bb225b7547fc80e2202734bf7c;
            CHECK_OBJECT( outline_0_var_d );
            tmp_args_element_name_6 = outline_0_var_d;
            frame_c009e4619c29f8cd3dd738ac97448b44_2->m_frame.f_lineno = 59;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
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


                exception_lineno = 59;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_args_element_name_5 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_args_element_name_5 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_2___str__ );
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
        RESTORE_FRAME_EXCEPTION( frame_c009e4619c29f8cd3dd738ac97448b44_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_c009e4619c29f8cd3dd738ac97448b44_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c009e4619c29f8cd3dd738ac97448b44_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_c009e4619c29f8cd3dd738ac97448b44_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_c009e4619c29f8cd3dd738ac97448b44_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_c009e4619c29f8cd3dd738ac97448b44_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_c009e4619c29f8cd3dd738ac97448b44_2,
            type_description_2,
            outline_0_var_d
        );


        // Release cached frame.
        if ( frame_c009e4619c29f8cd3dd738ac97448b44_2 == cache_frame_c009e4619c29f8cd3dd738ac97448b44_2 )
        {
            Py_DECREF( frame_c009e4619c29f8cd3dd738ac97448b44_2 );
        }
        cache_frame_c009e4619c29f8cd3dd738ac97448b44_2 = NULL;

        assertFrameObject( frame_c009e4619c29f8cd3dd738ac97448b44_2 );

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
        NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_2___str__ );
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
        NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_2___str__ );
        return NULL;
        outline_exception_1:;
        exception_lineno = 59;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_ef0bcac5482d2a06d69a1e0fc432a1aa->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_source_name_7 = const_str_empty;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
        assert( !(tmp_called_name_3 == NULL) );
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_8;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Data4 );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_1 = "o";
                goto try_except_handler_4;
            }
            tmp_subscript_name_2 = const_slice_int_pos_2_none_none;
            tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_1 = "o";
                goto try_except_handler_4;
            }
            tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_1 = "o";
                goto try_except_handler_4;
            }
            assert( tmp_listcomp_2__$0 == NULL );
            tmp_listcomp_2__$0 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = PyList_New( 0 );
            assert( tmp_listcomp_2__contraction == NULL );
            tmp_listcomp_2__contraction = tmp_assign_source_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_39276fed314b2e3946ecdd0cb2a8fb71_3, codeobj_39276fed314b2e3946ecdd0cb2a8fb71, module_serial$tools$list_ports_windows, sizeof(void *) );
        frame_39276fed314b2e3946ecdd0cb2a8fb71_3 = cache_frame_39276fed314b2e3946ecdd0cb2a8fb71_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_39276fed314b2e3946ecdd0cb2a8fb71_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_39276fed314b2e3946ecdd0cb2a8fb71_3 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_listcomp_2__$0 );
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 60;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_7;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
            tmp_assign_source_8 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_d;
                outline_1_var_d = tmp_assign_source_8;
                Py_INCREF( outline_1_var_d );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT( tmp_listcomp_2__contraction );
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_instance_2 = const_str_digest_912bc8bb225b7547fc80e2202734bf7c;
            CHECK_OBJECT( outline_1_var_d );
            tmp_args_element_name_9 = outline_1_var_d;
            frame_39276fed314b2e3946ecdd0cb2a8fb71_3->m_frame.f_lineno = 60;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_append_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, call_args );
            }

            if ( tmp_append_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert( PyList_Check( tmp_append_list_2 ) );
            tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
            Py_DECREF( tmp_append_value_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_listcomp_2__contraction );
        tmp_args_element_name_8 = tmp_listcomp_2__contraction;
        Py_INCREF( tmp_args_element_name_8 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_2___str__ );
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
        RESTORE_FRAME_EXCEPTION( frame_39276fed314b2e3946ecdd0cb2a8fb71_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_39276fed314b2e3946ecdd0cb2a8fb71_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_39276fed314b2e3946ecdd0cb2a8fb71_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_39276fed314b2e3946ecdd0cb2a8fb71_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_39276fed314b2e3946ecdd0cb2a8fb71_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_39276fed314b2e3946ecdd0cb2a8fb71_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_39276fed314b2e3946ecdd0cb2a8fb71_3,
            type_description_2,
            outline_1_var_d
        );


        // Release cached frame.
        if ( frame_39276fed314b2e3946ecdd0cb2a8fb71_3 == cache_frame_39276fed314b2e3946ecdd0cb2a8fb71_3 )
        {
            Py_DECREF( frame_39276fed314b2e3946ecdd0cb2a8fb71_3 );
        }
        cache_frame_39276fed314b2e3946ecdd0cb2a8fb71_3 = NULL;

        assertFrameObject( frame_39276fed314b2e3946ecdd0cb2a8fb71_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "o";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_2___str__ );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF( outline_1_var_d );
        outline_1_var_d = NULL;

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

        Py_XDECREF( outline_1_var_d );
        outline_1_var_d = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_2___str__ );
        return NULL;
        outline_exception_2:;
        exception_lineno = 60;
        goto frame_exception_exit_1;
        outline_result_2:;
        frame_ef0bcac5482d2a06d69a1e0fc432a1aa->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ef0bcac5482d2a06d69a1e0fc432a1aa->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef0bcac5482d2a06d69a1e0fc432a1aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef0bcac5482d2a06d69a1e0fc432a1aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef0bcac5482d2a06d69a1e0fc432a1aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef0bcac5482d2a06d69a1e0fc432a1aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef0bcac5482d2a06d69a1e0fc432a1aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef0bcac5482d2a06d69a1e0fc432a1aa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef0bcac5482d2a06d69a1e0fc432a1aa,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_ef0bcac5482d2a06d69a1e0fc432a1aa == cache_frame_ef0bcac5482d2a06d69a1e0fc432a1aa )
    {
        Py_DECREF( frame_ef0bcac5482d2a06d69a1e0fc432a1aa );
    }
    cache_frame_ef0bcac5482d2a06d69a1e0fc432a1aa = NULL;

    assertFrameObject( frame_ef0bcac5482d2a06d69a1e0fc432a1aa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_2___str__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_2___str__ );
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


static PyObject *impl_serial$tools$list_ports_windows$$$function_3___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_2b4137ae860c032f014dbf49d9aa90e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b4137ae860c032f014dbf49d9aa90e2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2b4137ae860c032f014dbf49d9aa90e2, codeobj_2b4137ae860c032f014dbf49d9aa90e2, module_serial$tools$list_ports_windows, sizeof(void *) );
    frame_2b4137ae860c032f014dbf49d9aa90e2 = cache_frame_2b4137ae860c032f014dbf49d9aa90e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2b4137ae860c032f014dbf49d9aa90e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2b4137ae860c032f014dbf49d9aa90e2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        tmp_source_name_1 = const_str_digest_86fa33899a79b80323a28f9628b50153;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
        assert( !(tmp_called_name_1 == NULL) );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ClassGuid );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_DevInst );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2b4137ae860c032f014dbf49d9aa90e2->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b4137ae860c032f014dbf49d9aa90e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b4137ae860c032f014dbf49d9aa90e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b4137ae860c032f014dbf49d9aa90e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2b4137ae860c032f014dbf49d9aa90e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2b4137ae860c032f014dbf49d9aa90e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2b4137ae860c032f014dbf49d9aa90e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2b4137ae860c032f014dbf49d9aa90e2,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_2b4137ae860c032f014dbf49d9aa90e2 == cache_frame_2b4137ae860c032f014dbf49d9aa90e2 )
    {
        Py_DECREF( frame_2b4137ae860c032f014dbf49d9aa90e2 );
    }
    cache_frame_2b4137ae860c032f014dbf49d9aa90e2 = NULL;

    assertFrameObject( frame_2b4137ae860c032f014dbf49d9aa90e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_3___str__ );
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
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_3___str__ );
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


static PyObject *impl_serial$tools$list_ports_windows$$$function_4_iterate_comports( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = serial$tools$list_ports_windows$$$function_4_iterate_comports$$$genobj_1_iterate_comports_maker();



    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_4_iterate_comports );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct serial$tools$list_ports_windows$$$function_4_iterate_comports$$$genobj_1_iterate_comports_locals {
    PyObject *var_GUIDs;
    PyObject *var_guids_size;
    PyObject *var_index;
    PyObject *var_bInterfaceNumber;
    PyObject *var_g_hdi;
    PyObject *var_devinfo;
    PyObject *var_hkey;
    PyObject *var_port_name_buffer;
    PyObject *var_port_name_length;
    PyObject *var_szHardwareID;
    PyObject *var_szHardwareID_str;
    PyObject *var_info;
    PyObject *var_m;
    PyObject *var_loc_path_str;
    PyObject *var_location;
    PyObject *var_g;
    PyObject *var_szFriendlyName;
    PyObject *var_szManufacturer;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
};

static PyObject *serial$tools$list_ports_windows$$$function_4_iterate_comports$$$genobj_1_iterate_comports_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct serial$tools$list_ports_windows$$$function_4_iterate_comports$$$genobj_1_iterate_comports_locals *generator_heap = (struct serial$tools$list_ports_windows$$$function_4_iterate_comports$$$genobj_1_iterate_comports_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_GUIDs = NULL;
    generator_heap->var_guids_size = NULL;
    generator_heap->var_index = NULL;
    generator_heap->var_bInterfaceNumber = NULL;
    generator_heap->var_g_hdi = NULL;
    generator_heap->var_devinfo = NULL;
    generator_heap->var_hkey = NULL;
    generator_heap->var_port_name_buffer = NULL;
    generator_heap->var_port_name_length = NULL;
    generator_heap->var_szHardwareID = NULL;
    generator_heap->var_szHardwareID_str = NULL;
    generator_heap->var_info = NULL;
    generator_heap->var_m = NULL;
    generator_heap->var_loc_path_str = NULL;
    generator_heap->var_location = NULL;
    generator_heap->var_g = NULL;
    generator_heap->var_szFriendlyName = NULL;
    generator_heap->var_szManufacturer = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_36fa9b868896c1ec3c1dae11a0b8cb33, module_serial$tools$list_ports_windows, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GUID" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 135;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = tmp_mvar_value_1;
        tmp_right_name_1 = const_int_pos_8;
        tmp_called_name_1 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 135;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 135;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 135;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->var_GUIDs == NULL );
        generator_heap->var_GUIDs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 136;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        generator->m_frame->m_frame.f_lineno = 136;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 136;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->var_guids_size == NULL );
        generator_heap->var_guids_size = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiClassGuidsFromName" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_1 = const_str_plain_Ports;
        CHECK_OBJECT( generator_heap->var_GUIDs );
        tmp_args_element_name_2 = generator_heap->var_GUIDs;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        CHECK_OBJECT( generator_heap->var_GUIDs );
        tmp_args_element_name_4 = generator_heap->var_GUIDs;
        generator->m_frame->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sizeof, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_args_element_name_3 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 141;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        CHECK_OBJECT( generator_heap->var_guids_size );
        tmp_args_element_name_6 = generator_heap->var_guids_size;
        generator->m_frame->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            generator_heap->exception_lineno = 141;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_5 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( generator_heap->tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 142;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_6;
            generator->m_frame->m_frame.f_lineno = 142;
            tmp_raise_type_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_WinError );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 142;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            generator_heap->exception_type = tmp_raise_type_1;
            generator_heap->exception_lineno = 142;
            RAISE_EXCEPTION_WITH_TYPE( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( generator_heap->var_guids_size );
        tmp_source_name_1 = generator_heap->var_guids_size;
        tmp_xrange_low_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_value );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 145;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 145;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 145;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->tmp_for_loop_1__for_iterator == NULL );
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "oooooooooooooooooo";
                generator_heap->exception_lineno = 145;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
        tmp_assign_source_5 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_index;
            generator_heap->var_index = tmp_assign_source_5;
            Py_INCREF( generator_heap->var_index );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        {
            PyObject *old = generator_heap->var_bInterfaceNumber;
            generator_heap->var_bInterfaceNumber = tmp_assign_source_6;
            Py_INCREF( generator_heap->var_bInterfaceNumber );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetClassDevs" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 147;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_4 = tmp_mvar_value_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 148;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_2 = tmp_mvar_value_8;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_byref );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 148;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( generator_heap->var_GUIDs );
        tmp_subscribed_name_1 = generator_heap->var_GUIDs;
        CHECK_OBJECT( generator_heap->var_index );
        tmp_subscript_name_1 = generator_heap->var_index;
        tmp_args_element_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_called_name_5 );

            generator_heap->exception_lineno = 148;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 148;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_9 = Py_None;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_NULL );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NULL );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_args_element_name_7 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NULL" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 150;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_10 = tmp_mvar_value_9;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIGCF_PRESENT );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DIGCF_PRESENT );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_args_element_name_7 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DIGCF_PRESENT" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_11 = tmp_mvar_value_10;
        generator->m_frame->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 147;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_g_hdi;
            generator_heap->var_g_hdi = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SP_DEVINFO_DATA" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 153;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_6 = tmp_mvar_value_11;
        generator->m_frame->m_frame.f_lineno = 153;
        tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 153;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_devinfo;
            generator_heap->var_devinfo = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = tmp_mvar_value_12;
        CHECK_OBJECT( generator_heap->var_devinfo );
        tmp_args_element_name_12 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_sizeof, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( generator_heap->var_devinfo );
        tmp_assattr_target_1 = generator_heap->var_devinfo;
        generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_cbSize, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_int_0;
        {
            PyObject *old = generator_heap->var_index;
            assert( old != NULL );
            generator_heap->var_index = tmp_assign_source_9;
            Py_INCREF( generator_heap->var_index );
            Py_DECREF( old );
        }

    }
    loop_start_2:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_16;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiEnumDeviceInfo" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 156;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_7 = tmp_mvar_value_13;
        CHECK_OBJECT( generator_heap->var_g_hdi );
        tmp_args_element_name_13 = generator_heap->var_g_hdi;
        CHECK_OBJECT( generator_heap->var_index );
        tmp_args_element_name_14 = generator_heap->var_index;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 156;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_5 = tmp_mvar_value_14;
        CHECK_OBJECT( generator_heap->var_devinfo );
        tmp_args_element_name_16 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_args_element_name_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 156;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_15 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 156;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 156;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = ( generator_heap->tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        goto loop_end_2;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( generator_heap->var_index );
        tmp_left_name_2 = generator_heap->var_index;
        tmp_right_name_2 = const_int_pos_1;
        generator_heap->tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = tmp_left_name_2;
        generator_heap->var_index = tmp_assign_source_10;

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiOpenDevRegKey" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 160;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_8 = tmp_mvar_value_15;
        CHECK_OBJECT( generator_heap->var_g_hdi );
        tmp_args_element_name_17 = generator_heap->var_g_hdi;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_6 = tmp_mvar_value_16;
        CHECK_OBJECT( generator_heap->var_devinfo );
        tmp_args_element_name_19 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_args_element_name_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DICS_FLAG_GLOBAL );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DICS_FLAG_GLOBAL );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_args_element_name_18 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DICS_FLAG_GLOBAL" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 163;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_20 = tmp_mvar_value_17;
        tmp_args_element_name_21 = const_int_0;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIREG_DEV );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DIREG_DEV );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_args_element_name_18 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DIREG_DEV" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 165;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_22 = tmp_mvar_value_18;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_KEY_READ );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_KEY_READ );
        }

        if ( tmp_mvar_value_19 == NULL )
        {
            Py_DECREF( tmp_args_element_name_18 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "KEY_READ" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 166;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_23 = tmp_mvar_value_19;
        generator->m_frame->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 160;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_hkey;
            generator_heap->var_hkey = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_20;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 167;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_7 = tmp_mvar_value_20;
        generator->m_frame->m_frame.f_lineno = 167;
        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_create_unicode_buffer, &PyTuple_GET_ITEM( const_tuple_int_pos_250_tuple, 0 ) );

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 167;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_port_name_buffer;
            generator_heap->var_port_name_buffer = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_25;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ULONG );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ULONG" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 168;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_9 = tmp_mvar_value_21;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 168;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_8 = tmp_mvar_value_22;
        CHECK_OBJECT( generator_heap->var_port_name_buffer );
        tmp_args_element_name_25 = generator_heap->var_port_name_buffer;
        generator->m_frame->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_args_element_name_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_sizeof, call_args );
        }

        if ( tmp_args_element_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 168;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 168;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_port_name_length;
            generator_heap->var_port_name_length = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_33;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RegQueryValueEx" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 169;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_10 = tmp_mvar_value_23;
        CHECK_OBJECT( generator_heap->var_hkey );
        tmp_args_element_name_26 = generator_heap->var_hkey;
        tmp_args_element_name_27 = const_str_plain_PortName;
        tmp_args_element_name_28 = Py_None;
        tmp_args_element_name_29 = Py_None;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_9 = tmp_mvar_value_24;
        CHECK_OBJECT( generator_heap->var_port_name_buffer );
        tmp_args_element_name_31 = generator_heap->var_port_name_buffer;
        generator->m_frame->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = { tmp_args_element_name_31 };
            tmp_args_element_name_30 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_25 == NULL )
        {
            Py_DECREF( tmp_args_element_name_30 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_10 = tmp_mvar_value_25;
        CHECK_OBJECT( generator_heap->var_port_name_length );
        tmp_args_element_name_33 = generator_heap->var_port_name_length;
        generator->m_frame->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = { tmp_args_element_name_33 };
            tmp_args_element_name_32 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_args_element_name_30 );

            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_32 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_args_element_name_30 );
        Py_DECREF( tmp_args_element_name_32 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 169;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_34;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegCloseKey );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegCloseKey );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RegCloseKey" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_11 = tmp_mvar_value_26;
        CHECK_OBJECT( generator_heap->var_hkey );
        tmp_args_element_name_34 = generator_heap->var_hkey;
        generator->m_frame->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_34 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( generator_heap->var_port_name_buffer );
        tmp_source_name_3 = generator_heap->var_port_name_buffer;
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_value );
        if ( tmp_called_instance_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 181;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 181;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_LPT_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_11 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 181;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_call_result_3 );

            generator_heap->exception_lineno = 181;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        goto loop_start_2;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_12 = tmp_mvar_value_27;
        generator->m_frame->m_frame.f_lineno = 185;
        tmp_assign_source_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_create_unicode_buffer, &PyTuple_GET_ITEM( const_tuple_int_pos_250_tuple, 0 ) );

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_szHardwareID;
            generator_heap->var_szHardwareID = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_right_name_3;
        PyObject *tmp_args_element_name_41;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceInstanceId" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 187;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_12 = tmp_mvar_value_28;
        CHECK_OBJECT( generator_heap->var_g_hdi );
        tmp_args_element_name_35 = generator_heap->var_g_hdi;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 189;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_13 = tmp_mvar_value_29;
        CHECK_OBJECT( generator_heap->var_devinfo );
        tmp_args_element_name_37 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = { tmp_args_element_name_37 };
            tmp_args_element_name_36 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 189;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( generator_heap->var_szHardwareID );
        tmp_args_element_name_38 = generator_heap->var_szHardwareID;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_30 == NULL )
        {
            Py_DECREF( tmp_args_element_name_36 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 192;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_14 = tmp_mvar_value_30;
        CHECK_OBJECT( generator_heap->var_szHardwareID );
        tmp_args_element_name_40 = generator_heap->var_szHardwareID;
        generator->m_frame->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = { tmp_args_element_name_40 };
            tmp_left_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_sizeof, call_args );
        }

        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_args_element_name_36 );

            generator_heap->exception_lineno = 192;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_3 = const_int_pos_1;
        tmp_args_element_name_39 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_args_element_name_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_args_element_name_36 );

            generator_heap->exception_lineno = 192;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_41 = Py_None;
        generator->m_frame->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_38, tmp_args_element_name_39, tmp_args_element_name_41 };
            tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_args_element_name_36 );
        Py_DECREF( tmp_args_element_name_39 );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 187;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 187;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = ( generator_heap->tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_operand_name_4;
            PyObject *tmp_called_name_13;
            PyObject *tmp_mvar_value_31;
            PyObject *tmp_args_element_name_42;
            PyObject *tmp_args_element_name_43;
            PyObject *tmp_called_instance_15;
            PyObject *tmp_mvar_value_32;
            PyObject *tmp_args_element_name_44;
            PyObject *tmp_args_element_name_45;
            PyObject *tmp_mvar_value_33;
            PyObject *tmp_args_element_name_46;
            PyObject *tmp_args_element_name_47;
            PyObject *tmp_called_instance_16;
            PyObject *tmp_mvar_value_34;
            PyObject *tmp_args_element_name_48;
            PyObject *tmp_args_element_name_49;
            PyObject *tmp_left_name_4;
            PyObject *tmp_called_instance_17;
            PyObject *tmp_mvar_value_35;
            PyObject *tmp_args_element_name_50;
            PyObject *tmp_right_name_4;
            PyObject *tmp_args_element_name_51;
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

            if (unlikely( tmp_mvar_value_31 == NULL ))
            {
                tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
            }

            if ( tmp_mvar_value_31 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceRegistryProperty" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 195;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_13 = tmp_mvar_value_31;
            CHECK_OBJECT( generator_heap->var_g_hdi );
            tmp_args_element_name_42 = generator_heap->var_g_hdi;
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_32 == NULL ))
            {
                tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_32 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 197;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_15 = tmp_mvar_value_32;
            CHECK_OBJECT( generator_heap->var_devinfo );
            tmp_args_element_name_44 = generator_heap->var_devinfo;
            generator->m_frame->m_frame.f_lineno = 197;
            {
                PyObject *call_args[] = { tmp_args_element_name_44 };
                tmp_args_element_name_43 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_15, const_str_plain_byref, call_args );
            }

            if ( tmp_args_element_name_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 197;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_HARDWAREID );

            if (unlikely( tmp_mvar_value_33 == NULL ))
            {
                tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPDRP_HARDWAREID );
            }

            if ( tmp_mvar_value_33 == NULL )
            {
                Py_DECREF( tmp_args_element_name_43 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPDRP_HARDWAREID" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 198;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_args_element_name_45 = tmp_mvar_value_33;
            tmp_args_element_name_46 = Py_None;
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_34 == NULL ))
            {
                tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_34 == NULL )
            {
                Py_DECREF( tmp_args_element_name_43 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 200;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_16 = tmp_mvar_value_34;
            CHECK_OBJECT( generator_heap->var_szHardwareID );
            tmp_args_element_name_48 = generator_heap->var_szHardwareID;
            generator->m_frame->m_frame.f_lineno = 200;
            {
                PyObject *call_args[] = { tmp_args_element_name_48 };
                tmp_args_element_name_47 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_16, const_str_plain_byref, call_args );
            }

            if ( tmp_args_element_name_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_args_element_name_43 );

                generator_heap->exception_lineno = 200;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_35 == NULL ))
            {
                tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_35 == NULL )
            {
                Py_DECREF( tmp_args_element_name_43 );
                Py_DECREF( tmp_args_element_name_47 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 201;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_17 = tmp_mvar_value_35;
            CHECK_OBJECT( generator_heap->var_szHardwareID );
            tmp_args_element_name_50 = generator_heap->var_szHardwareID;
            generator->m_frame->m_frame.f_lineno = 201;
            {
                PyObject *call_args[] = { tmp_args_element_name_50 };
                tmp_left_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_17, const_str_plain_sizeof, call_args );
            }

            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_args_element_name_43 );
                Py_DECREF( tmp_args_element_name_47 );

                generator_heap->exception_lineno = 201;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_4 = const_int_pos_1;
            tmp_args_element_name_49 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_args_element_name_49 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_args_element_name_43 );
                Py_DECREF( tmp_args_element_name_47 );

                generator_heap->exception_lineno = 201;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_51 = Py_None;
            generator->m_frame->m_frame.f_lineno = 195;
            {
                PyObject *call_args[] = { tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_45, tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_49, tmp_args_element_name_51 };
                tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_args_element_name_43 );
            Py_DECREF( tmp_args_element_name_47 );
            Py_DECREF( tmp_args_element_name_49 );
            if ( tmp_operand_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 195;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            generator_heap->tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            Py_DECREF( tmp_operand_name_4 );
            if ( generator_heap->tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 195;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_5 = ( generator_heap->tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_compexpr_left_1;
                PyObject *tmp_compexpr_right_1;
                PyObject *tmp_called_instance_18;
                PyObject *tmp_mvar_value_36;
                PyObject *tmp_mvar_value_37;
                tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

                if (unlikely( tmp_mvar_value_36 == NULL ))
                {
                    tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
                }

                if ( tmp_mvar_value_36 == NULL )
                {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF( generator_heap->exception_type );
                    generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                    generator_heap->exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    CHAIN_EXCEPTION( generator_heap->exception_value );

                    generator_heap->exception_lineno = 204;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_called_instance_18 = tmp_mvar_value_36;
                generator->m_frame->m_frame.f_lineno = 204;
                tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_18, const_str_plain_GetLastError );
                if ( tmp_compexpr_left_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 204;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ERROR_INSUFFICIENT_BUFFER );

                if (unlikely( tmp_mvar_value_37 == NULL ))
                {
                    tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ERROR_INSUFFICIENT_BUFFER );
                }

                if ( tmp_mvar_value_37 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_1 );
                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF( generator_heap->exception_type );
                    generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ERROR_INSUFFICIENT_BUFFER" );
                    generator_heap->exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    CHAIN_EXCEPTION( generator_heap->exception_value );

                    generator_heap->exception_lineno = 204;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_compexpr_right_1 = tmp_mvar_value_37;
                generator_heap->tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
                Py_DECREF( tmp_compexpr_left_1 );
                if ( generator_heap->tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 204;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_6 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_called_instance_19;
                    PyObject *tmp_mvar_value_38;
                    tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

                    if (unlikely( tmp_mvar_value_38 == NULL ))
                    {
                        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
                    }

                    if ( tmp_mvar_value_38 == NULL )
                    {

                        generator_heap->exception_type = PyExc_NameError;
                        Py_INCREF( generator_heap->exception_type );
                        generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                        generator_heap->exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                        CHAIN_EXCEPTION( generator_heap->exception_value );

                        generator_heap->exception_lineno = 205;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_called_instance_19 = tmp_mvar_value_38;
                    generator->m_frame->m_frame.f_lineno = 205;
                    tmp_raise_type_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_19, const_str_plain_WinError );
                    if ( tmp_raise_type_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 205;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    generator_heap->exception_type = tmp_raise_type_2;
                    generator_heap->exception_lineno = 205;
                    RAISE_EXCEPTION_WITH_TYPE( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                branch_no_6:;
            }
            branch_no_5:;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( generator_heap->var_szHardwareID );
        tmp_source_name_4 = generator_heap->var_szHardwareID;
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_value );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 207;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_szHardwareID_str;
            generator_heap->var_szHardwareID_str = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_14;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_source_name_6;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_list_ports_common );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
        }

        if ( tmp_mvar_value_39 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 209;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_5 = tmp_mvar_value_39;
        tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ListPortInfo );
        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 209;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( generator_heap->var_port_name_buffer );
        tmp_source_name_6 = generator_heap->var_port_name_buffer;
        tmp_args_element_name_52 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_value );
        if ( tmp_args_element_name_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_called_name_14 );

            generator_heap->exception_lineno = 209;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = { tmp_args_element_name_52 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_52 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 209;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_info;
            generator_heap->var_info = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT( generator_heap->var_szHardwareID_str );
        tmp_called_instance_20 = generator_heap->var_szHardwareID_str;
        generator->m_frame->m_frame.f_lineno = 213;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_20, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_USB_tuple, 0 ) );

        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_4 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_call_result_4 );

            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_4 );
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
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_15;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_40;
            PyObject *tmp_args_element_name_53;
            PyObject *tmp_args_element_name_54;
            PyObject *tmp_args_element_name_55;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_41;
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_re );

            if (unlikely( tmp_mvar_value_40 == NULL ))
            {
                tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
            }

            if ( tmp_mvar_value_40 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 214;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_7 = tmp_mvar_value_40;
            tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_search );
            if ( tmp_called_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 214;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_53 = const_str_digest_3519366b87d5d83f0111d65dc0a20761;
            CHECK_OBJECT( generator_heap->var_szHardwareID_str );
            tmp_args_element_name_54 = generator_heap->var_szHardwareID_str;
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_re );

            if (unlikely( tmp_mvar_value_41 == NULL ))
            {
                tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
            }

            if ( tmp_mvar_value_41 == NULL )
            {
                Py_DECREF( tmp_called_name_15 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 214;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_8 = tmp_mvar_value_41;
            tmp_args_element_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_I );
            if ( tmp_args_element_name_55 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_called_name_15 );

                generator_heap->exception_lineno = 214;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            generator->m_frame->m_frame.f_lineno = 214;
            {
                PyObject *call_args[] = { tmp_args_element_name_53, tmp_args_element_name_54, tmp_args_element_name_55 };
                tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_15, call_args );
            }

            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_element_name_55 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 214;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = generator_heap->var_m;
                generator_heap->var_m = tmp_assign_source_17;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_8;
            int tmp_truth_name_3;
            CHECK_OBJECT( generator_heap->var_m );
            tmp_truth_name_3 = CHECK_IF_TRUE( generator_heap->var_m );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 215;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_8 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_value_name_1;
                PyObject *tmp_called_instance_21;
                PyObject *tmp_base_name_1;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT( generator_heap->var_m );
                tmp_called_instance_21 = generator_heap->var_m;
                generator->m_frame->m_frame.f_lineno = 216;
                tmp_value_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_21, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

                if ( tmp_value_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 216;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_base_name_1 = const_int_pos_16;
                tmp_assattr_name_2 = BUILTIN_INT2( tmp_value_name_1, tmp_base_name_1 );
                Py_DECREF( tmp_value_name_1 );
                if ( tmp_assattr_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 216;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( generator_heap->var_info );
                tmp_assattr_target_2 = generator_heap->var_info;
                generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_vid, tmp_assattr_name_2 );
                Py_DECREF( tmp_assattr_name_2 );
                if ( generator_heap->tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 216;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
            }
            {
                nuitka_bool tmp_condition_result_9;
                PyObject *tmp_called_instance_22;
                PyObject *tmp_call_result_5;
                int tmp_truth_name_4;
                CHECK_OBJECT( generator_heap->var_m );
                tmp_called_instance_22 = generator_heap->var_m;
                generator->m_frame->m_frame.f_lineno = 217;
                tmp_call_result_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_22, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

                if ( tmp_call_result_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 217;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_5 );
                if ( tmp_truth_name_4 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    Py_DECREF( tmp_call_result_5 );

                    generator_heap->exception_lineno = 217;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_9 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_5 );
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
                    PyObject *tmp_assattr_name_3;
                    PyObject *tmp_value_name_2;
                    PyObject *tmp_called_instance_23;
                    PyObject *tmp_base_name_2;
                    PyObject *tmp_assattr_target_3;
                    CHECK_OBJECT( generator_heap->var_m );
                    tmp_called_instance_23 = generator_heap->var_m;
                    generator->m_frame->m_frame.f_lineno = 218;
                    tmp_value_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_23, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

                    if ( tmp_value_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 218;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_base_name_2 = const_int_pos_16;
                    tmp_assattr_name_3 = BUILTIN_INT2( tmp_value_name_2, tmp_base_name_2 );
                    Py_DECREF( tmp_value_name_2 );
                    if ( tmp_assattr_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 218;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( generator_heap->var_info );
                    tmp_assattr_target_3 = generator_heap->var_info;
                    generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_pid, tmp_assattr_name_3 );
                    Py_DECREF( tmp_assattr_name_3 );
                    if ( generator_heap->tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 218;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                }
                branch_no_9:;
            }
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_called_instance_24;
                PyObject *tmp_call_result_6;
                int tmp_truth_name_5;
                CHECK_OBJECT( generator_heap->var_m );
                tmp_called_instance_24 = generator_heap->var_m;
                generator->m_frame->m_frame.f_lineno = 219;
                tmp_call_result_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_24, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_5_tuple, 0 ) );

                if ( tmp_call_result_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 219;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_truth_name_5 = CHECK_IF_TRUE( tmp_call_result_6 );
                if ( tmp_truth_name_5 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    Py_DECREF( tmp_call_result_6 );

                    generator_heap->exception_lineno = 219;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_10 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_6 );
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
                    PyObject *tmp_int_arg_1;
                    PyObject *tmp_called_instance_25;
                    CHECK_OBJECT( generator_heap->var_m );
                    tmp_called_instance_25 = generator_heap->var_m;
                    generator->m_frame->m_frame.f_lineno = 220;
                    tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_25, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_5_tuple, 0 ) );

                    if ( tmp_int_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 220;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_assign_source_18 = PyNumber_Int( tmp_int_arg_1 );
                    Py_DECREF( tmp_int_arg_1 );
                    if ( tmp_assign_source_18 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 220;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = generator_heap->var_bInterfaceNumber;
                        generator_heap->var_bInterfaceNumber = tmp_assign_source_18;
                        Py_XDECREF( old );
                    }

                }
                branch_no_10:;
            }
            {
                nuitka_bool tmp_condition_result_11;
                PyObject *tmp_called_instance_26;
                PyObject *tmp_call_result_7;
                int tmp_truth_name_6;
                CHECK_OBJECT( generator_heap->var_m );
                tmp_called_instance_26 = generator_heap->var_m;
                generator->m_frame->m_frame.f_lineno = 221;
                tmp_call_result_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_26, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_7_tuple, 0 ) );

                if ( tmp_call_result_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 221;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_truth_name_6 = CHECK_IF_TRUE( tmp_call_result_7 );
                if ( tmp_truth_name_6 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    Py_DECREF( tmp_call_result_7 );

                    generator_heap->exception_lineno = 221;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_11 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_7 );
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
                    PyObject *tmp_assattr_name_4;
                    PyObject *tmp_called_instance_27;
                    PyObject *tmp_assattr_target_4;
                    CHECK_OBJECT( generator_heap->var_m );
                    tmp_called_instance_27 = generator_heap->var_m;
                    generator->m_frame->m_frame.f_lineno = 222;
                    tmp_assattr_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_27, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_7_tuple, 0 ) );

                    if ( tmp_assattr_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 222;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( generator_heap->var_info );
                    tmp_assattr_target_4 = generator_heap->var_info;
                    generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_serial_number, tmp_assattr_name_4 );
                    Py_DECREF( tmp_assattr_name_4 );
                    if ( generator_heap->tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 222;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                }
                branch_no_11:;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_instance_28;
            PyObject *tmp_mvar_value_42;
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_42 == NULL ))
            {
                tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_42 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 224;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_28 = tmp_mvar_value_42;
            generator->m_frame->m_frame.f_lineno = 224;
            tmp_assign_source_19 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_28, const_str_plain_create_unicode_buffer, &PyTuple_GET_ITEM( const_tuple_int_pos_250_tuple, 0 ) );

            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 224;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = generator_heap->var_loc_path_str;
                generator_heap->var_loc_path_str = tmp_assign_source_19;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_name_16;
            PyObject *tmp_mvar_value_43;
            PyObject *tmp_call_result_8;
            PyObject *tmp_args_element_name_56;
            PyObject *tmp_args_element_name_57;
            PyObject *tmp_called_instance_29;
            PyObject *tmp_mvar_value_44;
            PyObject *tmp_args_element_name_58;
            PyObject *tmp_args_element_name_59;
            PyObject *tmp_mvar_value_45;
            PyObject *tmp_args_element_name_60;
            PyObject *tmp_args_element_name_61;
            PyObject *tmp_called_instance_30;
            PyObject *tmp_mvar_value_46;
            PyObject *tmp_args_element_name_62;
            PyObject *tmp_args_element_name_63;
            PyObject *tmp_left_name_5;
            PyObject *tmp_called_instance_31;
            PyObject *tmp_mvar_value_47;
            PyObject *tmp_args_element_name_64;
            PyObject *tmp_right_name_5;
            PyObject *tmp_args_element_name_65;
            int tmp_truth_name_7;
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

            if (unlikely( tmp_mvar_value_43 == NULL ))
            {
                tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
            }

            if ( tmp_mvar_value_43 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceRegistryProperty" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 225;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_16 = tmp_mvar_value_43;
            CHECK_OBJECT( generator_heap->var_g_hdi );
            tmp_args_element_name_56 = generator_heap->var_g_hdi;
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_44 == NULL ))
            {
                tmp_mvar_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_44 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 227;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_29 = tmp_mvar_value_44;
            CHECK_OBJECT( generator_heap->var_devinfo );
            tmp_args_element_name_58 = generator_heap->var_devinfo;
            generator->m_frame->m_frame.f_lineno = 227;
            {
                PyObject *call_args[] = { tmp_args_element_name_58 };
                tmp_args_element_name_57 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_29, const_str_plain_byref, call_args );
            }

            if ( tmp_args_element_name_57 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 227;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_LOCATION_PATHS );

            if (unlikely( tmp_mvar_value_45 == NULL ))
            {
                tmp_mvar_value_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPDRP_LOCATION_PATHS );
            }

            if ( tmp_mvar_value_45 == NULL )
            {
                Py_DECREF( tmp_args_element_name_57 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPDRP_LOCATION_PATHS" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 228;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_args_element_name_59 = tmp_mvar_value_45;
            tmp_args_element_name_60 = Py_None;
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_46 == NULL ))
            {
                tmp_mvar_value_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_46 == NULL )
            {
                Py_DECREF( tmp_args_element_name_57 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 230;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_30 = tmp_mvar_value_46;
            CHECK_OBJECT( generator_heap->var_loc_path_str );
            tmp_args_element_name_62 = generator_heap->var_loc_path_str;
            generator->m_frame->m_frame.f_lineno = 230;
            {
                PyObject *call_args[] = { tmp_args_element_name_62 };
                tmp_args_element_name_61 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_30, const_str_plain_byref, call_args );
            }

            if ( tmp_args_element_name_61 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_args_element_name_57 );

                generator_heap->exception_lineno = 230;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

            if (unlikely( tmp_mvar_value_47 == NULL ))
            {
                tmp_mvar_value_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
            }

            if ( tmp_mvar_value_47 == NULL )
            {
                Py_DECREF( tmp_args_element_name_57 );
                Py_DECREF( tmp_args_element_name_61 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 231;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_31 = tmp_mvar_value_47;
            CHECK_OBJECT( generator_heap->var_loc_path_str );
            tmp_args_element_name_64 = generator_heap->var_loc_path_str;
            generator->m_frame->m_frame.f_lineno = 231;
            {
                PyObject *call_args[] = { tmp_args_element_name_64 };
                tmp_left_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_31, const_str_plain_sizeof, call_args );
            }

            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_args_element_name_57 );
                Py_DECREF( tmp_args_element_name_61 );

                generator_heap->exception_lineno = 231;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_5 = const_int_pos_1;
            tmp_args_element_name_63 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_args_element_name_63 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_args_element_name_57 );
                Py_DECREF( tmp_args_element_name_61 );

                generator_heap->exception_lineno = 231;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_65 = Py_None;
            generator->m_frame->m_frame.f_lineno = 225;
            {
                PyObject *call_args[] = { tmp_args_element_name_56, tmp_args_element_name_57, tmp_args_element_name_59, tmp_args_element_name_60, tmp_args_element_name_61, tmp_args_element_name_63, tmp_args_element_name_65 };
                tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_16, call_args );
            }

            Py_DECREF( tmp_args_element_name_57 );
            Py_DECREF( tmp_args_element_name_61 );
            Py_DECREF( tmp_args_element_name_63 );
            if ( tmp_call_result_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 225;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_truth_name_7 = CHECK_IF_TRUE( tmp_call_result_8 );
            if ( tmp_truth_name_7 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_call_result_8 );

                generator_heap->exception_lineno = 225;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_12 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_8 );
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
                PyObject *tmp_assign_source_20;
                PyObject *tmp_called_name_17;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_48;
                PyObject *tmp_args_element_name_66;
                PyObject *tmp_args_element_name_67;
                PyObject *tmp_source_name_10;
                tmp_mvar_value_48 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_re );

                if (unlikely( tmp_mvar_value_48 == NULL ))
                {
                    tmp_mvar_value_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
                }

                if ( tmp_mvar_value_48 == NULL )
                {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF( generator_heap->exception_type );
                    generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
                    generator_heap->exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    CHAIN_EXCEPTION( generator_heap->exception_value );

                    generator_heap->exception_lineno = 233;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_9 = tmp_mvar_value_48;
                tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_finditer );
                if ( tmp_called_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 233;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_args_element_name_66 = const_str_digest_af155e22823b02ebfdc380a93ed7dc8f;
                CHECK_OBJECT( generator_heap->var_loc_path_str );
                tmp_source_name_10 = generator_heap->var_loc_path_str;
                tmp_args_element_name_67 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_value );
                if ( tmp_args_element_name_67 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    Py_DECREF( tmp_called_name_17 );

                    generator_heap->exception_lineno = 233;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                generator->m_frame->m_frame.f_lineno = 233;
                {
                    PyObject *call_args[] = { tmp_args_element_name_66, tmp_args_element_name_67 };
                    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
                }

                Py_DECREF( tmp_called_name_17 );
                Py_DECREF( tmp_args_element_name_67 );
                if ( tmp_assign_source_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 233;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = generator_heap->var_m;
                    assert( old != NULL );
                    generator_heap->var_m = tmp_assign_source_20;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_21;
                tmp_assign_source_21 = PyList_New( 0 );
                {
                    PyObject *old = generator_heap->var_location;
                    generator_heap->var_location = tmp_assign_source_21;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_22;
                PyObject *tmp_iter_arg_2;
                CHECK_OBJECT( generator_heap->var_m );
                tmp_iter_arg_2 = generator_heap->var_m;
                tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_2 );
                if ( tmp_assign_source_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 235;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
                    generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_22;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_23;
                CHECK_OBJECT( generator_heap->tmp_for_loop_2__for_iterator );
                tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
                tmp_assign_source_23 = ITERATOR_NEXT( tmp_next_source_2 );
                if ( tmp_assign_source_23 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_3;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        generator_heap->exception_lineno = 235;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
                    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_23;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_24;
                CHECK_OBJECT( generator_heap->tmp_for_loop_2__iter_value );
                tmp_assign_source_24 = generator_heap->tmp_for_loop_2__iter_value;
                {
                    PyObject *old = generator_heap->var_g;
                    generator_heap->var_g = tmp_assign_source_24;
                    Py_INCREF( generator_heap->var_g );
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_13;
                PyObject *tmp_called_instance_32;
                PyObject *tmp_call_result_9;
                int tmp_truth_name_8;
                CHECK_OBJECT( generator_heap->var_g );
                tmp_called_instance_32 = generator_heap->var_g;
                generator->m_frame->m_frame.f_lineno = 236;
                tmp_call_result_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_32, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

                if ( tmp_call_result_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 236;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_3;
                }
                tmp_truth_name_8 = CHECK_IF_TRUE( tmp_call_result_9 );
                if ( tmp_truth_name_8 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    Py_DECREF( tmp_call_result_9 );

                    generator_heap->exception_lineno = 236;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_3;
                }
                tmp_condition_result_13 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_9 );
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
                    PyObject *tmp_called_name_18;
                    PyObject *tmp_source_name_11;
                    PyObject *tmp_call_result_10;
                    PyObject *tmp_args_element_name_68;
                    PyObject *tmp_called_name_19;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_args_element_name_69;
                    PyObject *tmp_left_name_6;
                    PyObject *tmp_int_arg_2;
                    PyObject *tmp_called_instance_33;
                    PyObject *tmp_right_name_6;
                    CHECK_OBJECT( generator_heap->var_location );
                    tmp_source_name_11 = generator_heap->var_location;
                    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_append );
                    if ( tmp_called_name_18 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 237;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_3;
                    }
                    tmp_source_name_12 = const_str_digest_768b2bc4cb25c1172f889d1b7de16791;
                    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_format );
                    assert( !(tmp_called_name_19 == NULL) );
                    CHECK_OBJECT( generator_heap->var_g );
                    tmp_called_instance_33 = generator_heap->var_g;
                    generator->m_frame->m_frame.f_lineno = 237;
                    tmp_int_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_33, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

                    if ( tmp_int_arg_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                        Py_DECREF( tmp_called_name_18 );
                        Py_DECREF( tmp_called_name_19 );

                        generator_heap->exception_lineno = 237;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_3;
                    }
                    tmp_left_name_6 = PyNumber_Int( tmp_int_arg_2 );
                    Py_DECREF( tmp_int_arg_2 );
                    if ( tmp_left_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                        Py_DECREF( tmp_called_name_18 );
                        Py_DECREF( tmp_called_name_19 );

                        generator_heap->exception_lineno = 237;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_3;
                    }
                    tmp_right_name_6 = const_int_pos_1;
                    tmp_args_element_name_69 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
                    Py_DECREF( tmp_left_name_6 );
                    if ( tmp_args_element_name_69 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                        Py_DECREF( tmp_called_name_18 );
                        Py_DECREF( tmp_called_name_19 );

                        generator_heap->exception_lineno = 237;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_3;
                    }
                    generator->m_frame->m_frame.f_lineno = 237;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_69 };
                        tmp_args_element_name_68 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
                    }

                    Py_DECREF( tmp_called_name_19 );
                    Py_DECREF( tmp_args_element_name_69 );
                    if ( tmp_args_element_name_68 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                        Py_DECREF( tmp_called_name_18 );

                        generator_heap->exception_lineno = 237;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_3;
                    }
                    generator->m_frame->m_frame.f_lineno = 237;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_68 };
                        tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
                    }

                    Py_DECREF( tmp_called_name_18 );
                    Py_DECREF( tmp_args_element_name_68 );
                    if ( tmp_call_result_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 237;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_3;
                    }
                    Py_DECREF( tmp_call_result_10 );
                }
                goto branch_end_13;
                branch_no_13:;
                {
                    nuitka_bool tmp_condition_result_14;
                    PyObject *tmp_compexpr_left_2;
                    PyObject *tmp_compexpr_right_2;
                    PyObject *tmp_len_arg_1;
                    CHECK_OBJECT( generator_heap->var_location );
                    tmp_len_arg_1 = generator_heap->var_location;
                    tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
                    assert( !(tmp_compexpr_left_2 == NULL) );
                    tmp_compexpr_right_2 = const_int_pos_1;
                    generator_heap->tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                    Py_DECREF( tmp_compexpr_left_2 );
                    assert( !(generator_heap->tmp_res == -1) );
                    tmp_condition_result_14 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_called_instance_34;
                        PyObject *tmp_call_result_11;
                        CHECK_OBJECT( generator_heap->var_location );
                        tmp_called_instance_34 = generator_heap->var_location;
                        generator->m_frame->m_frame.f_lineno = 240;
                        tmp_call_result_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_34, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

                        if ( tmp_call_result_11 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                            generator_heap->exception_lineno = 240;
                            generator_heap->type_description_1 = "oooooooooooooooooo";
                            goto try_except_handler_3;
                        }
                        Py_DECREF( tmp_call_result_11 );
                    }
                    goto branch_end_14;
                    branch_no_14:;
                    {
                        PyObject *tmp_called_instance_35;
                        PyObject *tmp_call_result_12;
                        CHECK_OBJECT( generator_heap->var_location );
                        tmp_called_instance_35 = generator_heap->var_location;
                        generator->m_frame->m_frame.f_lineno = 242;
                        tmp_call_result_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_35, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_chr_45_tuple, 0 ) );

                        if ( tmp_call_result_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                            generator_heap->exception_lineno = 242;
                            generator_heap->type_description_1 = "oooooooooooooooooo";
                            goto try_except_handler_3;
                        }
                        Py_DECREF( tmp_call_result_12 );
                    }
                    branch_end_14:;
                }
                {
                    PyObject *tmp_called_name_20;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_call_result_13;
                    PyObject *tmp_args_element_name_70;
                    PyObject *tmp_called_instance_36;
                    CHECK_OBJECT( generator_heap->var_location );
                    tmp_source_name_13 = generator_heap->var_location;
                    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_append );
                    if ( tmp_called_name_20 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 243;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_3;
                    }
                    CHECK_OBJECT( generator_heap->var_g );
                    tmp_called_instance_36 = generator_heap->var_g;
                    generator->m_frame->m_frame.f_lineno = 243;
                    tmp_args_element_name_70 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_36, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

                    if ( tmp_args_element_name_70 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                        Py_DECREF( tmp_called_name_20 );

                        generator_heap->exception_lineno = 243;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_3;
                    }
                    generator->m_frame->m_frame.f_lineno = 243;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_70 };
                        tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
                    }

                    Py_DECREF( tmp_called_name_20 );
                    Py_DECREF( tmp_args_element_name_70 );
                    if ( tmp_call_result_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 243;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_3;
                    }
                    Py_DECREF( tmp_call_result_13 );
                }
                branch_end_13:;
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 235;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_3;
            }
            goto loop_start_3;
            loop_end_3:;
            goto try_end_1;
            // Exception handler code:
            try_except_handler_3:;
            generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
            generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
            generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
            generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
            generator_heap->exception_type = NULL;
            generator_heap->exception_value = NULL;
            generator_heap->exception_tb = NULL;
            generator_heap->exception_lineno = 0;

            Py_XDECREF( generator_heap->tmp_for_loop_2__iter_value );
            generator_heap->tmp_for_loop_2__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_2__for_iterator );
            Py_DECREF( generator_heap->tmp_for_loop_2__for_iterator );
            generator_heap->tmp_for_loop_2__for_iterator = NULL;

            // Re-raise.
            generator_heap->exception_type = generator_heap->exception_keeper_type_1;
            generator_heap->exception_value = generator_heap->exception_keeper_value_1;
            generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
            generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

            goto try_except_handler_2;
            // End of try:
            try_end_1:;
            Py_XDECREF( generator_heap->tmp_for_loop_2__iter_value );
            generator_heap->tmp_for_loop_2__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_2__for_iterator );
            Py_DECREF( generator_heap->tmp_for_loop_2__for_iterator );
            generator_heap->tmp_for_loop_2__for_iterator = NULL;

            {
                nuitka_bool tmp_condition_result_15;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                if ( generator_heap->var_bInterfaceNumber == NULL )
                {

                    generator_heap->exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( generator_heap->exception_type );
                    generator_heap->exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bInterfaceNumber" );
                    generator_heap->exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    CHAIN_EXCEPTION( generator_heap->exception_value );

                    generator_heap->exception_lineno = 244;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_compexpr_left_3 = generator_heap->var_bInterfaceNumber;
                tmp_compexpr_right_3 = Py_None;
                tmp_condition_result_15 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_called_name_21;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_call_result_14;
                    PyObject *tmp_args_element_name_71;
                    PyObject *tmp_called_name_22;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_args_element_name_72;
                    PyObject *tmp_args_element_name_73;
                    CHECK_OBJECT( generator_heap->var_location );
                    tmp_source_name_14 = generator_heap->var_location;
                    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
                    if ( tmp_called_name_21 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 245;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_source_name_15 = const_str_digest_3674e7e26d99f9444f49c13c382820d2;
                    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_format );
                    assert( !(tmp_called_name_22 == NULL) );
                    tmp_args_element_name_72 = const_str_plain_x;
                    if ( generator_heap->var_bInterfaceNumber == NULL )
                    {
                        Py_DECREF( tmp_called_name_21 );
                        Py_DECREF( tmp_called_name_22 );
                        generator_heap->exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( generator_heap->exception_type );
                        generator_heap->exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bInterfaceNumber" );
                        generator_heap->exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                        CHAIN_EXCEPTION( generator_heap->exception_value );

                        generator_heap->exception_lineno = 247;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_args_element_name_73 = generator_heap->var_bInterfaceNumber;
                    generator->m_frame->m_frame.f_lineno = 245;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_72, tmp_args_element_name_73 };
                        tmp_args_element_name_71 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_22, call_args );
                    }

                    Py_DECREF( tmp_called_name_22 );
                    if ( tmp_args_element_name_71 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                        Py_DECREF( tmp_called_name_21 );

                        generator_heap->exception_lineno = 245;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    generator->m_frame->m_frame.f_lineno = 245;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_71 };
                        tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
                    }

                    Py_DECREF( tmp_called_name_21 );
                    Py_DECREF( tmp_args_element_name_71 );
                    if ( tmp_call_result_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 245;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_14 );
                }
                branch_no_15:;
            }
            {
                nuitka_bool tmp_condition_result_16;
                int tmp_truth_name_9;
                CHECK_OBJECT( generator_heap->var_location );
                tmp_truth_name_9 = CHECK_IF_TRUE( generator_heap->var_location );
                assert( !(tmp_truth_name_9 == -1) );
                tmp_condition_result_16 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assattr_name_5;
                    PyObject *tmp_called_instance_37;
                    PyObject *tmp_args_element_name_74;
                    PyObject *tmp_assattr_target_5;
                    tmp_called_instance_37 = const_str_empty;
                    CHECK_OBJECT( generator_heap->var_location );
                    tmp_args_element_name_74 = generator_heap->var_location;
                    generator->m_frame->m_frame.f_lineno = 249;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_74 };
                        tmp_assattr_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_37, const_str_plain_join, call_args );
                    }

                    if ( tmp_assattr_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 249;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( generator_heap->var_info );
                    tmp_assattr_target_5 = generator_heap->var_info;
                    generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_location, tmp_assattr_name_5 );
                    Py_DECREF( tmp_assattr_name_5 );
                    if ( generator_heap->tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 249;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                }
                branch_no_16:;
            }
            branch_no_12:;
        }
        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_called_instance_38;
            PyObject *tmp_assattr_target_6;
            CHECK_OBJECT( generator_heap->var_info );
            tmp_called_instance_38 = generator_heap->var_info;
            generator->m_frame->m_frame.f_lineno = 250;
            tmp_assattr_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_38, const_str_plain_usb_info );
            if ( tmp_assattr_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 250;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( generator_heap->var_info );
            tmp_assattr_target_6 = generator_heap->var_info;
            generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_hwid, tmp_assattr_name_6 );
            Py_DECREF( tmp_assattr_name_6 );
            if ( generator_heap->tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 250;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
        }
        goto branch_end_7;
        branch_no_7:;
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_instance_39;
            PyObject *tmp_call_result_15;
            int tmp_truth_name_10;
            CHECK_OBJECT( generator_heap->var_szHardwareID_str );
            tmp_called_instance_39 = generator_heap->var_szHardwareID_str;
            generator->m_frame->m_frame.f_lineno = 251;
            tmp_call_result_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_39, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_FTDIBUS_tuple, 0 ) );

            if ( tmp_call_result_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 251;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_truth_name_10 = CHECK_IF_TRUE( tmp_call_result_15 );
            if ( tmp_truth_name_10 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_call_result_15 );

                generator_heap->exception_lineno = 251;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_17 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_15 );
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
                PyObject *tmp_assign_source_25;
                PyObject *tmp_called_name_23;
                PyObject *tmp_source_name_16;
                PyObject *tmp_mvar_value_49;
                PyObject *tmp_args_element_name_75;
                PyObject *tmp_args_element_name_76;
                PyObject *tmp_args_element_name_77;
                PyObject *tmp_source_name_17;
                PyObject *tmp_mvar_value_50;
                tmp_mvar_value_49 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_re );

                if (unlikely( tmp_mvar_value_49 == NULL ))
                {
                    tmp_mvar_value_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
                }

                if ( tmp_mvar_value_49 == NULL )
                {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF( generator_heap->exception_type );
                    generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
                    generator_heap->exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    CHAIN_EXCEPTION( generator_heap->exception_value );

                    generator_heap->exception_lineno = 252;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_16 = tmp_mvar_value_49;
                tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_search );
                if ( tmp_called_name_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 252;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_args_element_name_75 = const_str_digest_4d3f565b0dfa5040aa4e9ae0d9bdba89;
                CHECK_OBJECT( generator_heap->var_szHardwareID_str );
                tmp_args_element_name_76 = generator_heap->var_szHardwareID_str;
                tmp_mvar_value_50 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_re );

                if (unlikely( tmp_mvar_value_50 == NULL ))
                {
                    tmp_mvar_value_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
                }

                if ( tmp_mvar_value_50 == NULL )
                {
                    Py_DECREF( tmp_called_name_23 );
                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF( generator_heap->exception_type );
                    generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
                    generator_heap->exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    CHAIN_EXCEPTION( generator_heap->exception_value );

                    generator_heap->exception_lineno = 252;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_17 = tmp_mvar_value_50;
                tmp_args_element_name_77 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_I );
                if ( tmp_args_element_name_77 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    Py_DECREF( tmp_called_name_23 );

                    generator_heap->exception_lineno = 252;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                generator->m_frame->m_frame.f_lineno = 252;
                {
                    PyObject *call_args[] = { tmp_args_element_name_75, tmp_args_element_name_76, tmp_args_element_name_77 };
                    tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_23, call_args );
                }

                Py_DECREF( tmp_called_name_23 );
                Py_DECREF( tmp_args_element_name_77 );
                if ( tmp_assign_source_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 252;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = generator_heap->var_m;
                    generator_heap->var_m = tmp_assign_source_25;
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_18;
                int tmp_truth_name_11;
                CHECK_OBJECT( generator_heap->var_m );
                tmp_truth_name_11 = CHECK_IF_TRUE( generator_heap->var_m );
                if ( tmp_truth_name_11 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 253;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_18 = tmp_truth_name_11 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assattr_name_7;
                    PyObject *tmp_value_name_3;
                    PyObject *tmp_called_instance_40;
                    PyObject *tmp_base_name_3;
                    PyObject *tmp_assattr_target_7;
                    CHECK_OBJECT( generator_heap->var_m );
                    tmp_called_instance_40 = generator_heap->var_m;
                    generator->m_frame->m_frame.f_lineno = 254;
                    tmp_value_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_40, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

                    if ( tmp_value_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 254;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_base_name_3 = const_int_pos_16;
                    tmp_assattr_name_7 = BUILTIN_INT2( tmp_value_name_3, tmp_base_name_3 );
                    Py_DECREF( tmp_value_name_3 );
                    if ( tmp_assattr_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 254;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( generator_heap->var_info );
                    tmp_assattr_target_7 = generator_heap->var_info;
                    generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_vid, tmp_assattr_name_7 );
                    Py_DECREF( tmp_assattr_name_7 );
                    if ( generator_heap->tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 254;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                }
                {
                    PyObject *tmp_assattr_name_8;
                    PyObject *tmp_value_name_4;
                    PyObject *tmp_called_instance_41;
                    PyObject *tmp_base_name_4;
                    PyObject *tmp_assattr_target_8;
                    CHECK_OBJECT( generator_heap->var_m );
                    tmp_called_instance_41 = generator_heap->var_m;
                    generator->m_frame->m_frame.f_lineno = 255;
                    tmp_value_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_41, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

                    if ( tmp_value_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 255;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_base_name_4 = const_int_pos_16;
                    tmp_assattr_name_8 = BUILTIN_INT2( tmp_value_name_4, tmp_base_name_4 );
                    Py_DECREF( tmp_value_name_4 );
                    if ( tmp_assattr_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 255;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( generator_heap->var_info );
                    tmp_assattr_target_8 = generator_heap->var_info;
                    generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_pid, tmp_assattr_name_8 );
                    Py_DECREF( tmp_assattr_name_8 );
                    if ( generator_heap->tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 255;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                }
                {
                    nuitka_bool tmp_condition_result_19;
                    PyObject *tmp_called_instance_42;
                    PyObject *tmp_call_result_16;
                    int tmp_truth_name_12;
                    CHECK_OBJECT( generator_heap->var_m );
                    tmp_called_instance_42 = generator_heap->var_m;
                    generator->m_frame->m_frame.f_lineno = 256;
                    tmp_call_result_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_42, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

                    if ( tmp_call_result_16 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 256;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_truth_name_12 = CHECK_IF_TRUE( tmp_call_result_16 );
                    if ( tmp_truth_name_12 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                        Py_DECREF( tmp_call_result_16 );

                        generator_heap->exception_lineno = 256;
                        generator_heap->type_description_1 = "oooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_condition_result_19 = tmp_truth_name_12 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    Py_DECREF( tmp_call_result_16 );
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
                        PyObject *tmp_assattr_name_9;
                        PyObject *tmp_called_instance_43;
                        PyObject *tmp_assattr_target_9;
                        CHECK_OBJECT( generator_heap->var_m );
                        tmp_called_instance_43 = generator_heap->var_m;
                        generator->m_frame->m_frame.f_lineno = 257;
                        tmp_assattr_name_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_43, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

                        if ( tmp_assattr_name_9 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                            generator_heap->exception_lineno = 257;
                            generator_heap->type_description_1 = "oooooooooooooooooo";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT( generator_heap->var_info );
                        tmp_assattr_target_9 = generator_heap->var_info;
                        generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_serial_number, tmp_assattr_name_9 );
                        Py_DECREF( tmp_assattr_name_9 );
                        if ( generator_heap->tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                            generator_heap->exception_lineno = 257;
                            generator_heap->type_description_1 = "oooooooooooooooooo";
                            goto try_except_handler_2;
                        }
                    }
                    branch_no_19:;
                }
                branch_no_18:;
            }
            {
                PyObject *tmp_assattr_name_10;
                PyObject *tmp_called_instance_44;
                PyObject *tmp_assattr_target_10;
                CHECK_OBJECT( generator_heap->var_info );
                tmp_called_instance_44 = generator_heap->var_info;
                generator->m_frame->m_frame.f_lineno = 259;
                tmp_assattr_name_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_44, const_str_plain_usb_info );
                if ( tmp_assattr_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 259;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( generator_heap->var_info );
                tmp_assattr_target_10 = generator_heap->var_info;
                generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_hwid, tmp_assattr_name_10 );
                Py_DECREF( tmp_assattr_name_10 );
                if ( generator_heap->tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 259;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
            }
            goto branch_end_17;
            branch_no_17:;
            {
                PyObject *tmp_assattr_name_11;
                PyObject *tmp_assattr_target_11;
                CHECK_OBJECT( generator_heap->var_szHardwareID_str );
                tmp_assattr_name_11 = generator_heap->var_szHardwareID_str;
                CHECK_OBJECT( generator_heap->var_info );
                tmp_assattr_target_11 = generator_heap->var_info;
                generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_hwid, tmp_assattr_name_11 );
                if ( generator_heap->tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 261;
                    generator_heap->type_description_1 = "oooooooooooooooooo";
                    goto try_except_handler_2;
                }
            }
            branch_end_17:;
        }
        branch_end_7:;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_45;
        PyObject *tmp_mvar_value_51;
        tmp_mvar_value_51 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_51 == NULL ))
        {
            tmp_mvar_value_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_51 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_45 = tmp_mvar_value_51;
        generator->m_frame->m_frame.f_lineno = 264;
        tmp_assign_source_26 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_45, const_str_plain_create_unicode_buffer, &PyTuple_GET_ITEM( const_tuple_int_pos_250_tuple, 0 ) );

        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_szFriendlyName;
            generator_heap->var_szFriendlyName = tmp_assign_source_26;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_called_name_24;
        PyObject *tmp_mvar_value_52;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_args_element_name_79;
        PyObject *tmp_called_instance_46;
        PyObject *tmp_mvar_value_53;
        PyObject *tmp_args_element_name_80;
        PyObject *tmp_args_element_name_81;
        PyObject *tmp_mvar_value_54;
        PyObject *tmp_args_element_name_82;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_called_instance_47;
        PyObject *tmp_mvar_value_55;
        PyObject *tmp_args_element_name_84;
        PyObject *tmp_args_element_name_85;
        PyObject *tmp_left_name_7;
        PyObject *tmp_called_instance_48;
        PyObject *tmp_mvar_value_56;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_right_name_7;
        PyObject *tmp_args_element_name_87;
        int tmp_truth_name_13;
        tmp_mvar_value_52 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

        if (unlikely( tmp_mvar_value_52 == NULL ))
        {
            tmp_mvar_value_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
        }

        if ( tmp_mvar_value_52 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceRegistryProperty" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_24 = tmp_mvar_value_52;
        CHECK_OBJECT( generator_heap->var_g_hdi );
        tmp_args_element_name_78 = generator_heap->var_g_hdi;
        tmp_mvar_value_53 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_53 == NULL ))
        {
            tmp_mvar_value_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_53 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 267;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_46 = tmp_mvar_value_53;
        CHECK_OBJECT( generator_heap->var_devinfo );
        tmp_args_element_name_80 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = { tmp_args_element_name_80 };
            tmp_args_element_name_79 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_46, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_79 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 267;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_54 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_FRIENDLYNAME );

        if (unlikely( tmp_mvar_value_54 == NULL ))
        {
            tmp_mvar_value_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPDRP_FRIENDLYNAME );
        }

        if ( tmp_mvar_value_54 == NULL )
        {
            Py_DECREF( tmp_args_element_name_79 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPDRP_FRIENDLYNAME" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 268;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_81 = tmp_mvar_value_54;
        tmp_args_element_name_82 = Py_None;
        tmp_mvar_value_55 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_55 == NULL ))
        {
            tmp_mvar_value_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_55 == NULL )
        {
            Py_DECREF( tmp_args_element_name_79 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 271;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_47 = tmp_mvar_value_55;
        CHECK_OBJECT( generator_heap->var_szFriendlyName );
        tmp_args_element_name_84 = generator_heap->var_szFriendlyName;
        generator->m_frame->m_frame.f_lineno = 271;
        {
            PyObject *call_args[] = { tmp_args_element_name_84 };
            tmp_args_element_name_83 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_47, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_83 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_args_element_name_79 );

            generator_heap->exception_lineno = 271;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_56 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_56 == NULL ))
        {
            tmp_mvar_value_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_56 == NULL )
        {
            Py_DECREF( tmp_args_element_name_79 );
            Py_DECREF( tmp_args_element_name_83 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_48 = tmp_mvar_value_56;
        CHECK_OBJECT( generator_heap->var_szFriendlyName );
        tmp_args_element_name_86 = generator_heap->var_szFriendlyName;
        generator->m_frame->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = { tmp_args_element_name_86 };
            tmp_left_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_48, const_str_plain_sizeof, call_args );
        }

        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_args_element_name_79 );
            Py_DECREF( tmp_args_element_name_83 );

            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_7 = const_int_pos_1;
        tmp_args_element_name_85 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_args_element_name_85 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_args_element_name_79 );
            Py_DECREF( tmp_args_element_name_83 );

            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_87 = Py_None;
        generator->m_frame->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = { tmp_args_element_name_78, tmp_args_element_name_79, tmp_args_element_name_81, tmp_args_element_name_82, tmp_args_element_name_83, tmp_args_element_name_85, tmp_args_element_name_87 };
            tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_24, call_args );
        }

        Py_DECREF( tmp_args_element_name_79 );
        Py_DECREF( tmp_args_element_name_83 );
        Py_DECREF( tmp_args_element_name_85 );
        if ( tmp_call_result_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_13 = CHECK_IF_TRUE( tmp_call_result_17 );
        if ( tmp_truth_name_13 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_call_result_17 );

            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_20 = tmp_truth_name_13 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_17 );
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
            PyObject *tmp_assattr_name_12;
            PyObject *tmp_source_name_18;
            PyObject *tmp_assattr_target_12;
            CHECK_OBJECT( generator_heap->var_szFriendlyName );
            tmp_source_name_18 = generator_heap->var_szFriendlyName;
            tmp_assattr_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_value );
            if ( tmp_assattr_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 274;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( generator_heap->var_info );
            tmp_assattr_target_12 = generator_heap->var_info;
            generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_description, tmp_assattr_name_12 );
            Py_DECREF( tmp_assattr_name_12 );
            if ( generator_heap->tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 274;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
        }
        branch_no_20:;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_instance_49;
        PyObject *tmp_mvar_value_57;
        tmp_mvar_value_57 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_57 == NULL ))
        {
            tmp_mvar_value_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_57 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 282;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_49 = tmp_mvar_value_57;
        generator->m_frame->m_frame.f_lineno = 282;
        tmp_assign_source_27 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_49, const_str_plain_create_unicode_buffer, &PyTuple_GET_ITEM( const_tuple_int_pos_250_tuple, 0 ) );

        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 282;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_szManufacturer;
            generator_heap->var_szManufacturer = tmp_assign_source_27;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_called_name_25;
        PyObject *tmp_mvar_value_58;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_name_88;
        PyObject *tmp_args_element_name_89;
        PyObject *tmp_called_instance_50;
        PyObject *tmp_mvar_value_59;
        PyObject *tmp_args_element_name_90;
        PyObject *tmp_args_element_name_91;
        PyObject *tmp_mvar_value_60;
        PyObject *tmp_args_element_name_92;
        PyObject *tmp_args_element_name_93;
        PyObject *tmp_called_instance_51;
        PyObject *tmp_mvar_value_61;
        PyObject *tmp_args_element_name_94;
        PyObject *tmp_args_element_name_95;
        PyObject *tmp_left_name_8;
        PyObject *tmp_called_instance_52;
        PyObject *tmp_mvar_value_62;
        PyObject *tmp_args_element_name_96;
        PyObject *tmp_right_name_8;
        PyObject *tmp_args_element_name_97;
        int tmp_truth_name_14;
        tmp_mvar_value_58 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

        if (unlikely( tmp_mvar_value_58 == NULL ))
        {
            tmp_mvar_value_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
        }

        if ( tmp_mvar_value_58 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceRegistryProperty" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 283;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_25 = tmp_mvar_value_58;
        CHECK_OBJECT( generator_heap->var_g_hdi );
        tmp_args_element_name_88 = generator_heap->var_g_hdi;
        tmp_mvar_value_59 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_59 == NULL ))
        {
            tmp_mvar_value_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_59 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 285;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_50 = tmp_mvar_value_59;
        CHECK_OBJECT( generator_heap->var_devinfo );
        tmp_args_element_name_90 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = { tmp_args_element_name_90 };
            tmp_args_element_name_89 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_50, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_89 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 285;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_60 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_MFG );

        if (unlikely( tmp_mvar_value_60 == NULL ))
        {
            tmp_mvar_value_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPDRP_MFG );
        }

        if ( tmp_mvar_value_60 == NULL )
        {
            Py_DECREF( tmp_args_element_name_89 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPDRP_MFG" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 286;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_91 = tmp_mvar_value_60;
        tmp_args_element_name_92 = Py_None;
        tmp_mvar_value_61 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_61 == NULL ))
        {
            tmp_mvar_value_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_61 == NULL )
        {
            Py_DECREF( tmp_args_element_name_89 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 289;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_51 = tmp_mvar_value_61;
        CHECK_OBJECT( generator_heap->var_szManufacturer );
        tmp_args_element_name_94 = generator_heap->var_szManufacturer;
        generator->m_frame->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = { tmp_args_element_name_94 };
            tmp_args_element_name_93 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_51, const_str_plain_byref, call_args );
        }

        if ( tmp_args_element_name_93 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_args_element_name_89 );

            generator_heap->exception_lineno = 289;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_62 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_62 == NULL ))
        {
            tmp_mvar_value_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_62 == NULL )
        {
            Py_DECREF( tmp_args_element_name_89 );
            Py_DECREF( tmp_args_element_name_93 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 290;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_52 = tmp_mvar_value_62;
        CHECK_OBJECT( generator_heap->var_szManufacturer );
        tmp_args_element_name_96 = generator_heap->var_szManufacturer;
        generator->m_frame->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = { tmp_args_element_name_96 };
            tmp_left_name_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_52, const_str_plain_sizeof, call_args );
        }

        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_args_element_name_89 );
            Py_DECREF( tmp_args_element_name_93 );

            generator_heap->exception_lineno = 290;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_8 = const_int_pos_1;
        tmp_args_element_name_95 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_args_element_name_95 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_args_element_name_89 );
            Py_DECREF( tmp_args_element_name_93 );

            generator_heap->exception_lineno = 290;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_97 = Py_None;
        generator->m_frame->m_frame.f_lineno = 283;
        {
            PyObject *call_args[] = { tmp_args_element_name_88, tmp_args_element_name_89, tmp_args_element_name_91, tmp_args_element_name_92, tmp_args_element_name_93, tmp_args_element_name_95, tmp_args_element_name_97 };
            tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_25, call_args );
        }

        Py_DECREF( tmp_args_element_name_89 );
        Py_DECREF( tmp_args_element_name_93 );
        Py_DECREF( tmp_args_element_name_95 );
        if ( tmp_call_result_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 283;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_14 = CHECK_IF_TRUE( tmp_call_result_18 );
        if ( tmp_truth_name_14 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_call_result_18 );

            generator_heap->exception_lineno = 283;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_21 = tmp_truth_name_14 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_18 );
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
            PyObject *tmp_assattr_name_13;
            PyObject *tmp_source_name_19;
            PyObject *tmp_assattr_target_13;
            CHECK_OBJECT( generator_heap->var_szManufacturer );
            tmp_source_name_19 = generator_heap->var_szManufacturer;
            tmp_assattr_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_value );
            if ( tmp_assattr_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 292;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( generator_heap->var_info );
            tmp_assattr_target_13 = generator_heap->var_info;
            generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_manufacturer, tmp_assattr_name_13 );
            Py_DECREF( tmp_assattr_name_13 );
            if ( generator_heap->tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 292;
                generator_heap->type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
        }
        branch_no_21:;
    }
    {
        PyObject *tmp_expression_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_info );
        tmp_expression_name_1 = generator_heap->var_info;
        Py_INCREF( tmp_expression_name_1 );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 293;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 156;
        generator_heap->type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_called_name_26;
        PyObject *tmp_mvar_value_63;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_name_98;
        tmp_mvar_value_63 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );

        if (unlikely( tmp_mvar_value_63 == NULL ))
        {
            tmp_mvar_value_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );
        }

        if ( tmp_mvar_value_63 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiDestroyDeviceInfoList" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 294;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_26 = tmp_mvar_value_63;
        CHECK_OBJECT( generator_heap->var_g_hdi );
        tmp_args_element_name_98 = generator_heap->var_g_hdi;
        generator->m_frame->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = { tmp_args_element_name_98 };
            tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
        }

        if ( tmp_call_result_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 294;
            generator_heap->type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_19 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 145;
        generator_heap->type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            generator_heap->var_GUIDs,
            generator_heap->var_guids_size,
            generator_heap->var_index,
            generator_heap->var_bInterfaceNumber,
            generator_heap->var_g_hdi,
            generator_heap->var_devinfo,
            generator_heap->var_hkey,
            generator_heap->var_port_name_buffer,
            generator_heap->var_port_name_length,
            generator_heap->var_szHardwareID,
            generator_heap->var_szHardwareID_str,
            generator_heap->var_info,
            generator_heap->var_m,
            generator_heap->var_loc_path_str,
            generator_heap->var_location,
            generator_heap->var_g,
            generator_heap->var_szFriendlyName,
            generator_heap->var_szManufacturer
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_GUIDs );
    generator_heap->var_GUIDs = NULL;

    Py_XDECREF( generator_heap->var_guids_size );
    generator_heap->var_guids_size = NULL;

    Py_XDECREF( generator_heap->var_index );
    generator_heap->var_index = NULL;

    Py_XDECREF( generator_heap->var_bInterfaceNumber );
    generator_heap->var_bInterfaceNumber = NULL;

    Py_XDECREF( generator_heap->var_g_hdi );
    generator_heap->var_g_hdi = NULL;

    Py_XDECREF( generator_heap->var_devinfo );
    generator_heap->var_devinfo = NULL;

    Py_XDECREF( generator_heap->var_hkey );
    generator_heap->var_hkey = NULL;

    Py_XDECREF( generator_heap->var_port_name_buffer );
    generator_heap->var_port_name_buffer = NULL;

    Py_XDECREF( generator_heap->var_port_name_length );
    generator_heap->var_port_name_length = NULL;

    Py_XDECREF( generator_heap->var_szHardwareID );
    generator_heap->var_szHardwareID = NULL;

    Py_XDECREF( generator_heap->var_szHardwareID_str );
    generator_heap->var_szHardwareID_str = NULL;

    Py_XDECREF( generator_heap->var_info );
    generator_heap->var_info = NULL;

    Py_XDECREF( generator_heap->var_m );
    generator_heap->var_m = NULL;

    Py_XDECREF( generator_heap->var_loc_path_str );
    generator_heap->var_loc_path_str = NULL;

    Py_XDECREF( generator_heap->var_location );
    generator_heap->var_location = NULL;

    Py_XDECREF( generator_heap->var_g );
    generator_heap->var_g = NULL;

    Py_XDECREF( generator_heap->var_szFriendlyName );
    generator_heap->var_szFriendlyName = NULL;

    Py_XDECREF( generator_heap->var_szManufacturer );
    generator_heap->var_szManufacturer = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->var_GUIDs );
    Py_DECREF( generator_heap->var_GUIDs );
    generator_heap->var_GUIDs = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->var_guids_size );
    Py_DECREF( generator_heap->var_guids_size );
    generator_heap->var_guids_size = NULL;

    Py_XDECREF( generator_heap->var_index );
    generator_heap->var_index = NULL;

    Py_XDECREF( generator_heap->var_bInterfaceNumber );
    generator_heap->var_bInterfaceNumber = NULL;

    Py_XDECREF( generator_heap->var_g_hdi );
    generator_heap->var_g_hdi = NULL;

    Py_XDECREF( generator_heap->var_devinfo );
    generator_heap->var_devinfo = NULL;

    Py_XDECREF( generator_heap->var_hkey );
    generator_heap->var_hkey = NULL;

    Py_XDECREF( generator_heap->var_port_name_buffer );
    generator_heap->var_port_name_buffer = NULL;

    Py_XDECREF( generator_heap->var_port_name_length );
    generator_heap->var_port_name_length = NULL;

    Py_XDECREF( generator_heap->var_szHardwareID );
    generator_heap->var_szHardwareID = NULL;

    Py_XDECREF( generator_heap->var_szHardwareID_str );
    generator_heap->var_szHardwareID_str = NULL;

    Py_XDECREF( generator_heap->var_info );
    generator_heap->var_info = NULL;

    Py_XDECREF( generator_heap->var_m );
    generator_heap->var_m = NULL;

    Py_XDECREF( generator_heap->var_loc_path_str );
    generator_heap->var_loc_path_str = NULL;

    Py_XDECREF( generator_heap->var_location );
    generator_heap->var_location = NULL;

    Py_XDECREF( generator_heap->var_g );
    generator_heap->var_g = NULL;

    Py_XDECREF( generator_heap->var_szFriendlyName );
    generator_heap->var_szFriendlyName = NULL;

    Py_XDECREF( generator_heap->var_szManufacturer );
    generator_heap->var_szManufacturer = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *serial$tools$list_ports_windows$$$function_4_iterate_comports$$$genobj_1_iterate_comports_maker( void )
{
    return Nuitka_Generator_New(
        serial$tools$list_ports_windows$$$function_4_iterate_comports$$$genobj_1_iterate_comports_context,
        module_serial$tools$list_ports_windows,
        const_str_plain_iterate_comports,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_36fa9b868896c1ec3c1dae11a0b8cb33,
        0,
        sizeof(struct serial$tools$list_ports_windows$$$function_4_iterate_comports$$$genobj_1_iterate_comports_locals)
    );
}


static PyObject *impl_serial$tools$list_ports_windows$$$function_5_comports( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_include_links = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4cc8ee15a9b3ebab7b5a888dea3b2af7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4cc8ee15a9b3ebab7b5a888dea3b2af7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4cc8ee15a9b3ebab7b5a888dea3b2af7, codeobj_4cc8ee15a9b3ebab7b5a888dea3b2af7, module_serial$tools$list_ports_windows, sizeof(void *) );
    frame_4cc8ee15a9b3ebab7b5a888dea3b2af7 = cache_frame_4cc8ee15a9b3ebab7b5a888dea3b2af7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4cc8ee15a9b3ebab7b5a888dea3b2af7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4cc8ee15a9b3ebab7b5a888dea3b2af7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_iterate_comports );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iterate_comports );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "iterate_comports" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 299;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_4cc8ee15a9b3ebab7b5a888dea3b2af7->m_frame.f_lineno = 299;
        tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cc8ee15a9b3ebab7b5a888dea3b2af7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cc8ee15a9b3ebab7b5a888dea3b2af7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cc8ee15a9b3ebab7b5a888dea3b2af7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4cc8ee15a9b3ebab7b5a888dea3b2af7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4cc8ee15a9b3ebab7b5a888dea3b2af7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4cc8ee15a9b3ebab7b5a888dea3b2af7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4cc8ee15a9b3ebab7b5a888dea3b2af7,
        type_description_1,
        par_include_links
    );


    // Release cached frame.
    if ( frame_4cc8ee15a9b3ebab7b5a888dea3b2af7 == cache_frame_4cc8ee15a9b3ebab7b5a888dea3b2af7 )
    {
        Py_DECREF( frame_4cc8ee15a9b3ebab7b5a888dea3b2af7 );
    }
    cache_frame_4cc8ee15a9b3ebab7b5a888dea3b2af7 = NULL;

    assertFrameObject( frame_4cc8ee15a9b3ebab7b5a888dea3b2af7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_5_comports );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

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

    CHECK_OBJECT( (PyObject *)par_include_links );
    Py_DECREF( par_include_links );
    par_include_links = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_5_comports );
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



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_1_ValidHandle(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function_1_ValidHandle,
        const_str_plain_ValidHandle,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b1ac0a6740c4d25d66ede7b3febf4296,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_windows,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_2___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function_2___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        const_str_digest_116c3eaeea9958e59e9e6756df1ec9b6,
#endif
        codeobj_ef0bcac5482d2a06d69a1e0fc432a1aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_windows,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_3___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function_3___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        const_str_digest_d7ba96010f1a397fbd068a8158f3fa12,
#endif
        codeobj_2b4137ae860c032f014dbf49d9aa90e2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_windows,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_4_iterate_comports(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function_4_iterate_comports,
        const_str_plain_iterate_comports,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_36fa9b868896c1ec3c1dae11a0b8cb33,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_windows,
        const_str_digest_d53afb1e07f3ee81f7c6c0213dcdd766,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_5_comports( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function_5_comports,
        const_str_plain_comports,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4cc8ee15a9b3ebab7b5a888dea3b2af7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_windows,
        const_str_digest_ee3920580023d1af94223c48071ae060,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$tools$list_ports_windows =
{
    PyModuleDef_HEAD_INIT,
    "serial.tools.list_ports_windows",
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

MOD_INIT_DECL( serial$tools$list_ports_windows )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$tools$list_ports_windows );
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
    puts("serial.tools.list_ports_windows: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.tools.list_ports_windows: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.tools.list_ports_windows: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserial$tools$list_ports_windows" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$tools$list_ports_windows = Py_InitModule4(
        "serial.tools.list_ports_windows",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_serial$tools$list_ports_windows = PyModule_Create( &mdef_serial$tools$list_ports_windows );
#endif

    moduledict_serial$tools$list_ports_windows = MODULE_DICT( module_serial$tools$list_ports_windows );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_serial$tools$list_ports_windows,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_serial$tools$list_ports_windows,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_serial$tools$list_ports_windows,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_serial$tools$list_ports_windows,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_serial$tools$list_ports_windows );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_1b1b6b23a4b523b9fca1e553f8d15eaf, module_serial$tools$list_ports_windows );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    struct Nuitka_FrameObject *frame_23cc64ce78865db4262714c2ba677207;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_serial$tools$list_ports_windows_46 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_370f3f0317b1d5d37e783514eee3b4e8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_370f3f0317b1d5d37e783514eee3b4e8_2 = NULL;
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
    PyObject *locals_serial$tools$list_ports_windows_64 = NULL;
    struct Nuitka_FrameObject *frame_9ebffbcc9496ee07b139e93ea5bb0cec_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_9ebffbcc9496ee07b139e93ea5bb0cec_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_23cc64ce78865db4262714c2ba677207 = MAKE_MODULE_FRAME( codeobj_23cc64ce78865db4262714c2ba677207, module_serial$tools$list_ports_windows );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_23cc64ce78865db4262714c2ba677207 );
    assert( Py_REFCNT( frame_23cc64ce78865db4262714c2ba677207 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_re;
        tmp_globals_name_1 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 12;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_ctypes;
        tmp_globals_name_2 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 13;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_3 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_BOOL_tuple;
        tmp_level_name_3 = const_int_0;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 14;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_BOOL );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_4 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_HWND_tuple;
        tmp_level_name_4 = const_int_0;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 15;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_HWND );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HWND, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_5 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_DWORD_tuple;
        tmp_level_name_5 = const_int_0;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 16;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_DWORD );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_6 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_WORD_tuple;
        tmp_level_name_6 = const_int_0;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 17;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_WORD );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_WORD, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_7 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_LONG_tuple;
        tmp_level_name_7 = const_int_0;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 18;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_LONG );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LONG, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_8 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_ULONG_tuple;
        tmp_level_name_8 = const_int_0;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 19;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ULONG );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ULONG, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_9 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_HKEY_tuple;
        tmp_level_name_9 = const_int_0;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 20;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_HKEY );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HKEY, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
        tmp_globals_name_10 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_BYTE_tuple;
        tmp_level_name_10 = const_int_0;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 21;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_BYTE );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BYTE, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_serial;
        tmp_globals_name_11 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = Py_None;
        tmp_level_name_11 = const_int_0;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 22;
        tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_serial, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
        tmp_globals_name_12 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_str_plain_ULONG_PTR_tuple;
        tmp_level_name_12 = const_int_0;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 23;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_ULONG_PTR );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ULONG_PTR, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = const_str_digest_2a9b9e88acca55347e5ef4ae4b4dfd80;
        tmp_globals_name_13 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_name_13 = Py_None;
        tmp_fromlist_name_13 = const_tuple_str_plain_list_ports_common_tuple;
        tmp_level_name_13 = const_int_0;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 24;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_list_ports_common );
        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_list_ports_common, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_1_ValidHandle(  );



        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ValidHandle, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_NULL, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_c_void_p );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_c_wchar_p );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPCTSTR, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_5;
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_c_wchar_p );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PCTSTR, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_6;
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_c_wchar_p );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PTSTR, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_7;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_POINTER );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_8;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        assert( tmp_assign_unpack_1__assign_source == NULL );
        tmp_assign_unpack_1__assign_source = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_24 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPDWORD, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_25 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD, tmp_assign_source_25 );
    }
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_9;
        tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_c_void_p );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        assert( tmp_assign_unpack_2__assign_source == NULL );
        tmp_assign_unpack_2__assign_source = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( tmp_assign_unpack_2__assign_source );
        tmp_assign_source_27 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPBYTE, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( tmp_assign_unpack_2__assign_source );
        tmp_assign_source_28 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PBYTE, tmp_assign_source_28 );
    }
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_2__assign_source );
    Py_DECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_29 = tmp_mvar_value_10;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ACCESS_MASK, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ACCESS_MASK );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACCESS_MASK );
        }

        CHECK_OBJECT( tmp_mvar_value_11 );
        tmp_assign_source_30 = tmp_mvar_value_11;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_REGSAM, tmp_assign_source_30 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;

            goto try_except_handler_1;
        }

        tmp_source_name_7 = tmp_mvar_value_12;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Structure );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        tmp_assign_source_31 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_31, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
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


            exception_lineno = 46;

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


            exception_lineno = 46;

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


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_33 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_33;
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


            exception_lineno = 46;

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


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_8 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_8, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_9;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_9 = tmp_class_creation_1__metaclass;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___prepare__ );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

                goto try_except_handler_1;
            }
            tmp_tuple_element_2 = const_str_plain_GUID;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 46;
            tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_34;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_10 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_10, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

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
                PyObject *tmp_source_name_11;
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


                    exception_lineno = 46;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_11 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_11 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_11 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 46;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 46;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 46;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_35;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_serial$tools$list_ports_windows_46 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_1b1b6b23a4b523b9fca1e553f8d15eaf;
        tmp_res = PyObject_SetItem( locals_serial$tools$list_ports_windows_46, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_GUID;
        tmp_res = PyObject_SetItem( locals_serial$tools$list_ports_windows_46, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_370f3f0317b1d5d37e783514eee3b4e8_2, codeobj_370f3f0317b1d5d37e783514eee3b4e8, module_serial$tools$list_ports_windows, sizeof(void *) );
        frame_370f3f0317b1d5d37e783514eee3b4e8_2 = cache_frame_370f3f0317b1d5d37e783514eee3b4e8_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_370f3f0317b1d5d37e783514eee3b4e8_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_370f3f0317b1d5d37e783514eee3b4e8_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_left_name_2;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_right_name_2;
            tmp_tuple_element_4 = const_str_plain_Data1;
            tmp_list_element_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = PyObject_GetItem( locals_serial$tools$list_ports_windows_46, const_str_plain_DWORD );

            if ( tmp_tuple_element_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
                }

                if ( tmp_mvar_value_13 == NULL )
                {
                    Py_DECREF( tmp_list_element_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 48;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_tuple_element_4 = tmp_mvar_value_13;
                Py_INCREF( tmp_tuple_element_4 );
                }
            }

            PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_4 );
            tmp_dictset_value = PyList_New( 4 );
            PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_1 );
            tmp_tuple_element_5 = const_str_plain_Data2;
            tmp_list_element_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_5 );
            tmp_tuple_element_5 = PyObject_GetItem( locals_serial$tools$list_ports_windows_46, const_str_plain_WORD );

            if ( tmp_tuple_element_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_WORD );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
                }

                if ( tmp_mvar_value_14 == NULL )
                {
                    Py_DECREF( tmp_dictset_value );
                    Py_DECREF( tmp_list_element_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_tuple_element_5 = tmp_mvar_value_14;
                Py_INCREF( tmp_tuple_element_5 );
                }
            }

            PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_5 );
            PyList_SET_ITEM( tmp_dictset_value, 1, tmp_list_element_1 );
            tmp_tuple_element_6 = const_str_plain_Data3;
            tmp_list_element_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_6 );
            tmp_tuple_element_6 = PyObject_GetItem( locals_serial$tools$list_ports_windows_46, const_str_plain_WORD );

            if ( tmp_tuple_element_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_WORD );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
                }

                if ( tmp_mvar_value_15 == NULL )
                {
                    Py_DECREF( tmp_dictset_value );
                    Py_DECREF( tmp_list_element_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 50;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_tuple_element_6 = tmp_mvar_value_15;
                Py_INCREF( tmp_tuple_element_6 );
                }
            }

            PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_6 );
            PyList_SET_ITEM( tmp_dictset_value, 2, tmp_list_element_1 );
            tmp_tuple_element_7 = const_str_plain_Data4;
            tmp_list_element_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_7 );
            tmp_left_name_2 = PyObject_GetItem( locals_serial$tools$list_ports_windows_46, const_str_plain_BYTE );

            if ( tmp_left_name_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BYTE );

                if (unlikely( tmp_mvar_value_16 == NULL ))
                {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
                }

                if ( tmp_mvar_value_16 == NULL )
                {
                    Py_DECREF( tmp_dictset_value );
                    Py_DECREF( tmp_list_element_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BYTE" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 51;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_left_name_2 = tmp_mvar_value_16;
                Py_INCREF( tmp_left_name_2 );
                }
            }

            tmp_right_name_2 = const_int_pos_8;
            tmp_tuple_element_7 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_tuple_element_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dictset_value );
                Py_DECREF( tmp_list_element_1 );

                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_7 );
            PyList_SET_ITEM( tmp_dictset_value, 3, tmp_list_element_1 );
            tmp_res = PyObject_SetItem( locals_serial$tools$list_ports_windows_46, const_str_plain__fields_, tmp_dictset_value );
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
        tmp_dictset_value = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_2___str__(  );



        tmp_res = PyObject_SetItem( locals_serial$tools$list_ports_windows_46, const_str_plain___str__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_370f3f0317b1d5d37e783514eee3b4e8_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_370f3f0317b1d5d37e783514eee3b4e8_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_370f3f0317b1d5d37e783514eee3b4e8_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_370f3f0317b1d5d37e783514eee3b4e8_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_370f3f0317b1d5d37e783514eee3b4e8_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_370f3f0317b1d5d37e783514eee3b4e8_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_370f3f0317b1d5d37e783514eee3b4e8_2 == cache_frame_370f3f0317b1d5d37e783514eee3b4e8_2 )
        {
            Py_DECREF( frame_370f3f0317b1d5d37e783514eee3b4e8_2 );
        }
        cache_frame_370f3f0317b1d5d37e783514eee3b4e8_2 = NULL;

        assertFrameObject( frame_370f3f0317b1d5d37e783514eee3b4e8_2 );

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
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_8 = const_str_plain_GUID;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_8 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_8 );
            tmp_tuple_element_8 = locals_serial$tools$list_ports_windows_46;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 46;
            tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_36 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_36 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_serial$tools$list_ports_windows_46 );
        locals_serial$tools$list_ports_windows_46 = NULL;
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

        Py_DECREF( locals_serial$tools$list_ports_windows_46 );
        locals_serial$tools$list_ports_windows_46 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows );
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
        NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 46;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID, tmp_assign_source_36 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_17;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 64;

            goto try_except_handler_4;
        }

        tmp_source_name_12 = tmp_mvar_value_17;
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_Structure );
        if ( tmp_tuple_element_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_assign_source_38 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_38, 0, tmp_tuple_element_9 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        condexpr_end_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_40 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_40;
    }
    {
        nuitka_bool tmp_condition_result_6;
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


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_13 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_13, const_str_plain___prepare__ );
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_14;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_14 = tmp_class_creation_2__metaclass;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_4;
            }
            tmp_tuple_element_10 = const_str_plain_SP_DEVINFO_DATA;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_10 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 64;
            tmp_assign_source_41 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_41;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_15 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_15, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_4;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_16;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_11 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;

                    goto try_except_handler_4;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_11 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_16 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_16 == NULL) );
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_16 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 64;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_11 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 64;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_42;
            tmp_assign_source_42 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_42;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_serial$tools$list_ports_windows_64 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_1b1b6b23a4b523b9fca1e553f8d15eaf;
        tmp_res = PyObject_SetItem( locals_serial$tools$list_ports_windows_64, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_SP_DEVINFO_DATA;
        tmp_res = PyObject_SetItem( locals_serial$tools$list_ports_windows_64, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_9ebffbcc9496ee07b139e93ea5bb0cec_3, codeobj_9ebffbcc9496ee07b139e93ea5bb0cec, module_serial$tools$list_ports_windows, sizeof(void *) );
        frame_9ebffbcc9496ee07b139e93ea5bb0cec_3 = cache_frame_9ebffbcc9496ee07b139e93ea5bb0cec_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_9ebffbcc9496ee07b139e93ea5bb0cec_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_9ebffbcc9496ee07b139e93ea5bb0cec_3 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_mvar_value_21;
            tmp_tuple_element_12 = const_str_plain_cbSize;
            tmp_list_element_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_12 );
            tmp_tuple_element_12 = PyObject_GetItem( locals_serial$tools$list_ports_windows_64, const_str_plain_DWORD );

            if ( tmp_tuple_element_12 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
                }

                if ( tmp_mvar_value_18 == NULL )
                {
                    Py_DECREF( tmp_list_element_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 66;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_tuple_element_12 = tmp_mvar_value_18;
                Py_INCREF( tmp_tuple_element_12 );
                }
            }

            PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_12 );
            tmp_dictset_value = PyList_New( 4 );
            PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_2 );
            tmp_tuple_element_13 = const_str_plain_ClassGuid;
            tmp_list_element_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_13 );
            tmp_tuple_element_13 = PyObject_GetItem( locals_serial$tools$list_ports_windows_64, const_str_plain_GUID );

            if ( tmp_tuple_element_13 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID );
                }

                if ( tmp_mvar_value_19 == NULL )
                {
                    Py_DECREF( tmp_dictset_value );
                    Py_DECREF( tmp_list_element_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GUID" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 67;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_tuple_element_13 = tmp_mvar_value_19;
                Py_INCREF( tmp_tuple_element_13 );
                }
            }

            PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_13 );
            PyList_SET_ITEM( tmp_dictset_value, 1, tmp_list_element_2 );
            tmp_tuple_element_14 = const_str_plain_DevInst;
            tmp_list_element_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_14 );
            tmp_tuple_element_14 = PyObject_GetItem( locals_serial$tools$list_ports_windows_64, const_str_plain_DWORD );

            if ( tmp_tuple_element_14 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
                }

                if ( tmp_mvar_value_20 == NULL )
                {
                    Py_DECREF( tmp_dictset_value );
                    Py_DECREF( tmp_list_element_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 68;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_tuple_element_14 = tmp_mvar_value_20;
                Py_INCREF( tmp_tuple_element_14 );
                }
            }

            PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_14 );
            PyList_SET_ITEM( tmp_dictset_value, 2, tmp_list_element_2 );
            tmp_tuple_element_15 = const_str_plain_Reserved;
            tmp_list_element_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_15 );
            tmp_tuple_element_15 = PyObject_GetItem( locals_serial$tools$list_ports_windows_64, const_str_plain_ULONG_PTR );

            if ( tmp_tuple_element_15 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );

                if (unlikely( tmp_mvar_value_21 == NULL ))
                {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );
                }

                if ( tmp_mvar_value_21 == NULL )
                {
                    Py_DECREF( tmp_dictset_value );
                    Py_DECREF( tmp_list_element_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ULONG_PTR" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 69;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_tuple_element_15 = tmp_mvar_value_21;
                Py_INCREF( tmp_tuple_element_15 );
                }
            }

            PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_15 );
            PyList_SET_ITEM( tmp_dictset_value, 3, tmp_list_element_2 );
            tmp_res = PyObject_SetItem( locals_serial$tools$list_ports_windows_64, const_str_plain__fields_, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_3___str__(  );



        tmp_res = PyObject_SetItem( locals_serial$tools$list_ports_windows_64, const_str_plain___str__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_9ebffbcc9496ee07b139e93ea5bb0cec_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_9ebffbcc9496ee07b139e93ea5bb0cec_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_9ebffbcc9496ee07b139e93ea5bb0cec_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_9ebffbcc9496ee07b139e93ea5bb0cec_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_9ebffbcc9496ee07b139e93ea5bb0cec_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_9ebffbcc9496ee07b139e93ea5bb0cec_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_9ebffbcc9496ee07b139e93ea5bb0cec_3 == cache_frame_9ebffbcc9496ee07b139e93ea5bb0cec_3 )
        {
            Py_DECREF( frame_9ebffbcc9496ee07b139e93ea5bb0cec_3 );
        }
        cache_frame_9ebffbcc9496ee07b139e93ea5bb0cec_3 = NULL;

        assertFrameObject( frame_9ebffbcc9496ee07b139e93ea5bb0cec_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_16 = const_str_plain_SP_DEVINFO_DATA;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_16 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_16 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_16 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_16 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_16 );
            tmp_tuple_element_16 = locals_serial$tools$list_ports_windows_64;
            Py_INCREF( tmp_tuple_element_16 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_16 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 64;
            tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_6;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_43 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_43 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_serial$tools$list_ports_windows_64 );
        locals_serial$tools$list_ports_windows_64 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_serial$tools$list_ports_windows_64 );
        locals_serial$tools$list_ports_windows_64 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 64;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA, tmp_assign_source_43 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_23;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_22;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_POINTER );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA );
        }

        if ( tmp_mvar_value_23 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SP_DEVINFO_DATA" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_23;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_24;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = tmp_mvar_value_24;
        tmp_assign_source_46 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_c_void_p );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVICE_INTERFACE_DETAIL_DATA, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_25;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_source_name_19 = tmp_mvar_value_25;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_windll );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 80;
        tmp_assign_source_47 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_LoadLibrary, &PyTuple_GET_ITEM( const_tuple_str_plain_setupapi_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi, tmp_assign_source_47 );
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_26;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
        }

        CHECK_OBJECT( tmp_mvar_value_26 );
        tmp_source_name_20 = tmp_mvar_value_26;
        tmp_assign_source_48 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_SetupDiDestroyDeviceInfoList );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList, tmp_assign_source_48 );
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_list_element_3;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_mvar_value_28;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HDEVINFO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }

        tmp_list_element_3 = tmp_mvar_value_27;
        tmp_assattr_name_3 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_3 );
        PyList_SET_ITEM( tmp_assattr_name_3, 0, tmp_list_element_3 );
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );
        }

        CHECK_OBJECT( tmp_mvar_value_28 );
        tmp_assattr_target_3 = tmp_mvar_value_28;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_argtypes, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_mvar_value_30;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_4 = tmp_mvar_value_29;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiDestroyDeviceInfoList" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = tmp_mvar_value_30;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_restype, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_31;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupapi" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }

        tmp_source_name_21 = tmp_mvar_value_31;
        tmp_assign_source_49 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_SetupDiClassGuidsFromNameW );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName, tmp_assign_source_49 );
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_list_element_4;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_mvar_value_36;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_mvar_value_37;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PCTSTR );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PCTSTR );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PCTSTR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }

        tmp_list_element_4 = tmp_mvar_value_32;
        tmp_assattr_name_5 = PyList_New( 4 );
        Py_INCREF( tmp_list_element_4 );
        PyList_SET_ITEM( tmp_assattr_name_5, 0, tmp_list_element_4 );
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_33 == NULL )
        {
            Py_DECREF( tmp_assattr_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }

        tmp_source_name_22 = tmp_mvar_value_33;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_POINTER );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_5 );

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID );
        }

        if ( tmp_mvar_value_34 == NULL )
        {
            Py_DECREF( tmp_assattr_name_5 );
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GUID" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_34;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        if ( tmp_list_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_5 );

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assattr_name_5, 1, tmp_list_element_4 );
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_35 == NULL )
        {
            Py_DECREF( tmp_assattr_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }

        tmp_list_element_4 = tmp_mvar_value_35;
        Py_INCREF( tmp_list_element_4 );
        PyList_SET_ITEM( tmp_assattr_name_5, 2, tmp_list_element_4 );
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDWORD );
        }

        if ( tmp_mvar_value_36 == NULL )
        {
            Py_DECREF( tmp_assattr_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PDWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }

        tmp_list_element_4 = tmp_mvar_value_36;
        Py_INCREF( tmp_list_element_4 );
        PyList_SET_ITEM( tmp_assattr_name_5, 3, tmp_list_element_4 );
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName );

        if (unlikely( tmp_mvar_value_37 == NULL ))
        {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName );
        }

        if ( tmp_mvar_value_37 == NULL )
        {
            Py_DECREF( tmp_assattr_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiClassGuidsFromName" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = tmp_mvar_value_37;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_argtypes, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_mvar_value_39;
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_38 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_6 = tmp_mvar_value_38;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName );
        }

        if ( tmp_mvar_value_39 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiClassGuidsFromName" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = tmp_mvar_value_39;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_restype, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_source_name_23;
        PyObject *tmp_mvar_value_40;
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
        }

        if ( tmp_mvar_value_40 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupapi" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }

        tmp_source_name_23 = tmp_mvar_value_40;
        tmp_assign_source_50 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_SetupDiEnumDeviceInfo );
        if ( tmp_assign_source_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo, tmp_assign_source_50 );
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_list_element_5;
        PyObject *tmp_mvar_value_41;
        PyObject *tmp_mvar_value_42;
        PyObject *tmp_mvar_value_43;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_mvar_value_44;
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
        }

        if ( tmp_mvar_value_41 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HDEVINFO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }

        tmp_list_element_5 = tmp_mvar_value_41;
        tmp_assattr_name_7 = PyList_New( 3 );
        Py_INCREF( tmp_list_element_5 );
        PyList_SET_ITEM( tmp_assattr_name_7, 0, tmp_list_element_5 );
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_42 == NULL )
        {
            Py_DECREF( tmp_assattr_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }

        tmp_list_element_5 = tmp_mvar_value_42;
        Py_INCREF( tmp_list_element_5 );
        PyList_SET_ITEM( tmp_assattr_name_7, 1, tmp_list_element_5 );
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );

        if (unlikely( tmp_mvar_value_43 == NULL ))
        {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );
        }

        if ( tmp_mvar_value_43 == NULL )
        {
            Py_DECREF( tmp_assattr_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PSP_DEVINFO_DATA" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }

        tmp_list_element_5 = tmp_mvar_value_43;
        Py_INCREF( tmp_list_element_5 );
        PyList_SET_ITEM( tmp_assattr_name_7, 2, tmp_list_element_5 );
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo );

        if (unlikely( tmp_mvar_value_44 == NULL ))
        {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo );
        }

        CHECK_OBJECT( tmp_mvar_value_44 );
        tmp_assattr_target_7 = tmp_mvar_value_44;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_argtypes, tmp_assattr_name_7 );
        Py_DECREF( tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_mvar_value_45;
        PyObject *tmp_assattr_target_8;
        PyObject *tmp_mvar_value_46;
        tmp_mvar_value_45 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_45 == NULL ))
        {
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_45 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_8 = tmp_mvar_value_45;
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo );

        if (unlikely( tmp_mvar_value_46 == NULL ))
        {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo );
        }

        if ( tmp_mvar_value_46 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiEnumDeviceInfo" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = tmp_mvar_value_46;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_restype, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_source_name_24;
        PyObject *tmp_mvar_value_47;
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

        if (unlikely( tmp_mvar_value_47 == NULL ))
        {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
        }

        if ( tmp_mvar_value_47 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupapi" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }

        tmp_source_name_24 = tmp_mvar_value_47;
        tmp_assign_source_51 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_SetupDiGetClassDevsW );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs, tmp_assign_source_51 );
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_list_element_6;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_25;
        PyObject *tmp_mvar_value_48;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_49;
        PyObject *tmp_mvar_value_50;
        PyObject *tmp_mvar_value_51;
        PyObject *tmp_mvar_value_52;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_mvar_value_53;
        tmp_mvar_value_48 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_48 == NULL ))
        {
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_48 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }

        tmp_source_name_25 = tmp_mvar_value_48;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_POINTER );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_49 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID );

        if (unlikely( tmp_mvar_value_49 == NULL ))
        {
            tmp_mvar_value_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID );
        }

        if ( tmp_mvar_value_49 == NULL )
        {
            Py_DECREF( tmp_called_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GUID" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_49;
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        if ( tmp_list_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_9 = PyList_New( 4 );
        PyList_SET_ITEM( tmp_assattr_name_9, 0, tmp_list_element_6 );
        tmp_mvar_value_50 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PCTSTR );

        if (unlikely( tmp_mvar_value_50 == NULL ))
        {
            tmp_mvar_value_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PCTSTR );
        }

        if ( tmp_mvar_value_50 == NULL )
        {
            Py_DECREF( tmp_assattr_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PCTSTR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }

        tmp_list_element_6 = tmp_mvar_value_50;
        Py_INCREF( tmp_list_element_6 );
        PyList_SET_ITEM( tmp_assattr_name_9, 1, tmp_list_element_6 );
        tmp_mvar_value_51 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HWND );

        if (unlikely( tmp_mvar_value_51 == NULL ))
        {
            tmp_mvar_value_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HWND );
        }

        if ( tmp_mvar_value_51 == NULL )
        {
            Py_DECREF( tmp_assattr_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HWND" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }

        tmp_list_element_6 = tmp_mvar_value_51;
        Py_INCREF( tmp_list_element_6 );
        PyList_SET_ITEM( tmp_assattr_name_9, 2, tmp_list_element_6 );
        tmp_mvar_value_52 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_52 == NULL ))
        {
            tmp_mvar_value_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_52 == NULL )
        {
            Py_DECREF( tmp_assattr_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }

        tmp_list_element_6 = tmp_mvar_value_52;
        Py_INCREF( tmp_list_element_6 );
        PyList_SET_ITEM( tmp_assattr_name_9, 3, tmp_list_element_6 );
        tmp_mvar_value_53 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );

        if (unlikely( tmp_mvar_value_53 == NULL ))
        {
            tmp_mvar_value_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );
        }

        if ( tmp_mvar_value_53 == NULL )
        {
            Py_DECREF( tmp_assattr_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetClassDevs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = tmp_mvar_value_53;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_argtypes, tmp_assattr_name_9 );
        Py_DECREF( tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_mvar_value_54;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_mvar_value_55;
        tmp_mvar_value_54 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

        if (unlikely( tmp_mvar_value_54 == NULL ))
        {
            tmp_mvar_value_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
        }

        if ( tmp_mvar_value_54 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HDEVINFO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_10 = tmp_mvar_value_54;
        tmp_mvar_value_55 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );

        if (unlikely( tmp_mvar_value_55 == NULL ))
        {
            tmp_mvar_value_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );
        }

        if ( tmp_mvar_value_55 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetClassDevs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_10 = tmp_mvar_value_55;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_restype, tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_mvar_value_56;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_mvar_value_57;
        tmp_mvar_value_56 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ValidHandle );

        if (unlikely( tmp_mvar_value_56 == NULL ))
        {
            tmp_mvar_value_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValidHandle );
        }

        if ( tmp_mvar_value_56 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValidHandle" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_11 = tmp_mvar_value_56;
        tmp_mvar_value_57 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );

        if (unlikely( tmp_mvar_value_57 == NULL ))
        {
            tmp_mvar_value_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );
        }

        if ( tmp_mvar_value_57 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetClassDevs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_11 = tmp_mvar_value_57;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_errcheck, tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_source_name_26;
        PyObject *tmp_mvar_value_58;
        tmp_mvar_value_58 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

        if (unlikely( tmp_mvar_value_58 == NULL ))
        {
            tmp_mvar_value_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
        }

        if ( tmp_mvar_value_58 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupapi" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }

        tmp_source_name_26 = tmp_mvar_value_58;
        tmp_assign_source_52 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_SetupDiGetDeviceRegistryPropertyW );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty, tmp_assign_source_52 );
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_list_element_7;
        PyObject *tmp_mvar_value_59;
        PyObject *tmp_mvar_value_60;
        PyObject *tmp_mvar_value_61;
        PyObject *tmp_mvar_value_62;
        PyObject *tmp_mvar_value_63;
        PyObject *tmp_mvar_value_64;
        PyObject *tmp_mvar_value_65;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_mvar_value_66;
        tmp_mvar_value_59 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

        if (unlikely( tmp_mvar_value_59 == NULL ))
        {
            tmp_mvar_value_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
        }

        if ( tmp_mvar_value_59 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HDEVINFO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_list_element_7 = tmp_mvar_value_59;
        tmp_assattr_name_12 = PyList_New( 7 );
        Py_INCREF( tmp_list_element_7 );
        PyList_SET_ITEM( tmp_assattr_name_12, 0, tmp_list_element_7 );
        tmp_mvar_value_60 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );

        if (unlikely( tmp_mvar_value_60 == NULL ))
        {
            tmp_mvar_value_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );
        }

        if ( tmp_mvar_value_60 == NULL )
        {
            Py_DECREF( tmp_assattr_name_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PSP_DEVINFO_DATA" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_list_element_7 = tmp_mvar_value_60;
        Py_INCREF( tmp_list_element_7 );
        PyList_SET_ITEM( tmp_assattr_name_12, 1, tmp_list_element_7 );
        tmp_mvar_value_61 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_61 == NULL ))
        {
            tmp_mvar_value_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_61 == NULL )
        {
            Py_DECREF( tmp_assattr_name_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_list_element_7 = tmp_mvar_value_61;
        Py_INCREF( tmp_list_element_7 );
        PyList_SET_ITEM( tmp_assattr_name_12, 2, tmp_list_element_7 );
        tmp_mvar_value_62 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD );

        if (unlikely( tmp_mvar_value_62 == NULL ))
        {
            tmp_mvar_value_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDWORD );
        }

        if ( tmp_mvar_value_62 == NULL )
        {
            Py_DECREF( tmp_assattr_name_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PDWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_list_element_7 = tmp_mvar_value_62;
        Py_INCREF( tmp_list_element_7 );
        PyList_SET_ITEM( tmp_assattr_name_12, 3, tmp_list_element_7 );
        tmp_mvar_value_63 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PBYTE );

        if (unlikely( tmp_mvar_value_63 == NULL ))
        {
            tmp_mvar_value_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PBYTE );
        }

        if ( tmp_mvar_value_63 == NULL )
        {
            Py_DECREF( tmp_assattr_name_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PBYTE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_list_element_7 = tmp_mvar_value_63;
        Py_INCREF( tmp_list_element_7 );
        PyList_SET_ITEM( tmp_assattr_name_12, 4, tmp_list_element_7 );
        tmp_mvar_value_64 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_64 == NULL ))
        {
            tmp_mvar_value_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_64 == NULL )
        {
            Py_DECREF( tmp_assattr_name_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_list_element_7 = tmp_mvar_value_64;
        Py_INCREF( tmp_list_element_7 );
        PyList_SET_ITEM( tmp_assattr_name_12, 5, tmp_list_element_7 );
        tmp_mvar_value_65 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD );

        if (unlikely( tmp_mvar_value_65 == NULL ))
        {
            tmp_mvar_value_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDWORD );
        }

        if ( tmp_mvar_value_65 == NULL )
        {
            Py_DECREF( tmp_assattr_name_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PDWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_list_element_7 = tmp_mvar_value_65;
        Py_INCREF( tmp_list_element_7 );
        PyList_SET_ITEM( tmp_assattr_name_12, 6, tmp_list_element_7 );
        tmp_mvar_value_66 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

        if (unlikely( tmp_mvar_value_66 == NULL ))
        {
            tmp_mvar_value_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
        }

        CHECK_OBJECT( tmp_mvar_value_66 );
        tmp_assattr_target_12 = tmp_mvar_value_66;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_argtypes, tmp_assattr_name_12 );
        Py_DECREF( tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_mvar_value_67;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_mvar_value_68;
        tmp_mvar_value_67 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_67 == NULL ))
        {
            tmp_mvar_value_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_67 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_13 = tmp_mvar_value_67;
        tmp_mvar_value_68 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

        if (unlikely( tmp_mvar_value_68 == NULL ))
        {
            tmp_mvar_value_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
        }

        if ( tmp_mvar_value_68 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceRegistryProperty" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_13 = tmp_mvar_value_68;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_restype, tmp_assattr_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_source_name_27;
        PyObject *tmp_mvar_value_69;
        tmp_mvar_value_69 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

        if (unlikely( tmp_mvar_value_69 == NULL ))
        {
            tmp_mvar_value_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
        }

        if ( tmp_mvar_value_69 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupapi" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }

        tmp_source_name_27 = tmp_mvar_value_69;
        tmp_assign_source_53 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_SetupDiGetDeviceInstanceIdW );
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId, tmp_assign_source_53 );
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_list_element_8;
        PyObject *tmp_mvar_value_70;
        PyObject *tmp_mvar_value_71;
        PyObject *tmp_mvar_value_72;
        PyObject *tmp_mvar_value_73;
        PyObject *tmp_mvar_value_74;
        PyObject *tmp_assattr_target_14;
        PyObject *tmp_mvar_value_75;
        tmp_mvar_value_70 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

        if (unlikely( tmp_mvar_value_70 == NULL ))
        {
            tmp_mvar_value_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
        }

        if ( tmp_mvar_value_70 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HDEVINFO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }

        tmp_list_element_8 = tmp_mvar_value_70;
        tmp_assattr_name_14 = PyList_New( 5 );
        Py_INCREF( tmp_list_element_8 );
        PyList_SET_ITEM( tmp_assattr_name_14, 0, tmp_list_element_8 );
        tmp_mvar_value_71 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );

        if (unlikely( tmp_mvar_value_71 == NULL ))
        {
            tmp_mvar_value_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );
        }

        if ( tmp_mvar_value_71 == NULL )
        {
            Py_DECREF( tmp_assattr_name_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PSP_DEVINFO_DATA" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }

        tmp_list_element_8 = tmp_mvar_value_71;
        Py_INCREF( tmp_list_element_8 );
        PyList_SET_ITEM( tmp_assattr_name_14, 1, tmp_list_element_8 );
        tmp_mvar_value_72 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PTSTR );

        if (unlikely( tmp_mvar_value_72 == NULL ))
        {
            tmp_mvar_value_72 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PTSTR );
        }

        if ( tmp_mvar_value_72 == NULL )
        {
            Py_DECREF( tmp_assattr_name_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PTSTR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }

        tmp_list_element_8 = tmp_mvar_value_72;
        Py_INCREF( tmp_list_element_8 );
        PyList_SET_ITEM( tmp_assattr_name_14, 2, tmp_list_element_8 );
        tmp_mvar_value_73 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_73 == NULL ))
        {
            tmp_mvar_value_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_73 == NULL )
        {
            Py_DECREF( tmp_assattr_name_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }

        tmp_list_element_8 = tmp_mvar_value_73;
        Py_INCREF( tmp_list_element_8 );
        PyList_SET_ITEM( tmp_assattr_name_14, 3, tmp_list_element_8 );
        tmp_mvar_value_74 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD );

        if (unlikely( tmp_mvar_value_74 == NULL ))
        {
            tmp_mvar_value_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDWORD );
        }

        if ( tmp_mvar_value_74 == NULL )
        {
            Py_DECREF( tmp_assattr_name_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PDWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }

        tmp_list_element_8 = tmp_mvar_value_74;
        Py_INCREF( tmp_list_element_8 );
        PyList_SET_ITEM( tmp_assattr_name_14, 4, tmp_list_element_8 );
        tmp_mvar_value_75 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId );

        if (unlikely( tmp_mvar_value_75 == NULL ))
        {
            tmp_mvar_value_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId );
        }

        CHECK_OBJECT( tmp_mvar_value_75 );
        tmp_assattr_target_14 = tmp_mvar_value_75;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_argtypes, tmp_assattr_name_14 );
        Py_DECREF( tmp_assattr_name_14 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_mvar_value_76;
        PyObject *tmp_assattr_target_15;
        PyObject *tmp_mvar_value_77;
        tmp_mvar_value_76 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

        if (unlikely( tmp_mvar_value_76 == NULL ))
        {
            tmp_mvar_value_76 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
        }

        if ( tmp_mvar_value_76 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_15 = tmp_mvar_value_76;
        tmp_mvar_value_77 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId );

        if (unlikely( tmp_mvar_value_77 == NULL ))
        {
            tmp_mvar_value_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId );
        }

        if ( tmp_mvar_value_77 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceInstanceId" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_15 = tmp_mvar_value_77;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_restype, tmp_assattr_name_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_source_name_28;
        PyObject *tmp_mvar_value_78;
        tmp_mvar_value_78 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

        if (unlikely( tmp_mvar_value_78 == NULL ))
        {
            tmp_mvar_value_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
        }

        if ( tmp_mvar_value_78 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupapi" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }

        tmp_source_name_28 = tmp_mvar_value_78;
        tmp_assign_source_54 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_SetupDiOpenDevRegKey );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey, tmp_assign_source_54 );
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_list_element_9;
        PyObject *tmp_mvar_value_79;
        PyObject *tmp_mvar_value_80;
        PyObject *tmp_mvar_value_81;
        PyObject *tmp_mvar_value_82;
        PyObject *tmp_mvar_value_83;
        PyObject *tmp_mvar_value_84;
        PyObject *tmp_assattr_target_16;
        PyObject *tmp_mvar_value_85;
        tmp_mvar_value_79 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

        if (unlikely( tmp_mvar_value_79 == NULL ))
        {
            tmp_mvar_value_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
        }

        if ( tmp_mvar_value_79 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HDEVINFO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }

        tmp_list_element_9 = tmp_mvar_value_79;
        tmp_assattr_name_16 = PyList_New( 6 );
        Py_INCREF( tmp_list_element_9 );
        PyList_SET_ITEM( tmp_assattr_name_16, 0, tmp_list_element_9 );
        tmp_mvar_value_80 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );

        if (unlikely( tmp_mvar_value_80 == NULL ))
        {
            tmp_mvar_value_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );
        }

        if ( tmp_mvar_value_80 == NULL )
        {
            Py_DECREF( tmp_assattr_name_16 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PSP_DEVINFO_DATA" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }

        tmp_list_element_9 = tmp_mvar_value_80;
        Py_INCREF( tmp_list_element_9 );
        PyList_SET_ITEM( tmp_assattr_name_16, 1, tmp_list_element_9 );
        tmp_mvar_value_81 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_81 == NULL ))
        {
            tmp_mvar_value_81 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_81 == NULL )
        {
            Py_DECREF( tmp_assattr_name_16 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }

        tmp_list_element_9 = tmp_mvar_value_81;
        Py_INCREF( tmp_list_element_9 );
        PyList_SET_ITEM( tmp_assattr_name_16, 2, tmp_list_element_9 );
        tmp_mvar_value_82 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_82 == NULL ))
        {
            tmp_mvar_value_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_82 == NULL )
        {
            Py_DECREF( tmp_assattr_name_16 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }

        tmp_list_element_9 = tmp_mvar_value_82;
        Py_INCREF( tmp_list_element_9 );
        PyList_SET_ITEM( tmp_assattr_name_16, 3, tmp_list_element_9 );
        tmp_mvar_value_83 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_mvar_value_83 == NULL ))
        {
            tmp_mvar_value_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_mvar_value_83 == NULL )
        {
            Py_DECREF( tmp_assattr_name_16 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }

        tmp_list_element_9 = tmp_mvar_value_83;
        Py_INCREF( tmp_list_element_9 );
        PyList_SET_ITEM( tmp_assattr_name_16, 4, tmp_list_element_9 );
        tmp_mvar_value_84 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_REGSAM );

        if (unlikely( tmp_mvar_value_84 == NULL ))
        {
            tmp_mvar_value_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_REGSAM );
        }

        if ( tmp_mvar_value_84 == NULL )
        {
            Py_DECREF( tmp_assattr_name_16 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "REGSAM" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }

        tmp_list_element_9 = tmp_mvar_value_84;
        Py_INCREF( tmp_list_element_9 );
        PyList_SET_ITEM( tmp_assattr_name_16, 5, tmp_list_element_9 );
        tmp_mvar_value_85 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );

        if (unlikely( tmp_mvar_value_85 == NULL ))
        {
            tmp_mvar_value_85 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );
        }

        CHECK_OBJECT( tmp_mvar_value_85 );
        tmp_assattr_target_16 = tmp_mvar_value_85;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_argtypes, tmp_assattr_name_16 );
        Py_DECREF( tmp_assattr_name_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_17;
        PyObject *tmp_mvar_value_86;
        PyObject *tmp_assattr_target_17;
        PyObject *tmp_mvar_value_87;
        tmp_mvar_value_86 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HKEY );

        if (unlikely( tmp_mvar_value_86 == NULL ))
        {
            tmp_mvar_value_86 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HKEY );
        }

        if ( tmp_mvar_value_86 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HKEY" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_17 = tmp_mvar_value_86;
        tmp_mvar_value_87 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );

        if (unlikely( tmp_mvar_value_87 == NULL ))
        {
            tmp_mvar_value_87 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );
        }

        if ( tmp_mvar_value_87 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiOpenDevRegKey" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_17 = tmp_mvar_value_87;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_restype, tmp_assattr_name_17 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_29;
        PyObject *tmp_mvar_value_88;
        tmp_mvar_value_88 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

        if (unlikely( tmp_mvar_value_88 == NULL ))
        {
            tmp_mvar_value_88 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
        }

        if ( tmp_mvar_value_88 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }

        tmp_source_name_29 = tmp_mvar_value_88;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_windll );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        frame_23cc64ce78865db4262714c2ba677207->m_frame.f_lineno = 110;
        tmp_assign_source_55 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_LoadLibrary, &PyTuple_GET_ITEM( const_tuple_str_plain_Advapi32_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_advapi32, tmp_assign_source_55 );
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_source_name_30;
        PyObject *tmp_mvar_value_89;
        tmp_mvar_value_89 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_advapi32 );

        if (unlikely( tmp_mvar_value_89 == NULL ))
        {
            tmp_mvar_value_89 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_advapi32 );
        }

        CHECK_OBJECT( tmp_mvar_value_89 );
        tmp_source_name_30 = tmp_mvar_value_89;
        tmp_assign_source_56 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_RegCloseKey );
        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegCloseKey, tmp_assign_source_56 );
    }
    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_list_element_10;
        PyObject *tmp_mvar_value_90;
        PyObject *tmp_assattr_target_18;
        PyObject *tmp_mvar_value_91;
        tmp_mvar_value_90 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HKEY );

        if (unlikely( tmp_mvar_value_90 == NULL ))
        {
            tmp_mvar_value_90 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HKEY );
        }

        if ( tmp_mvar_value_90 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HKEY" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_list_element_10 = tmp_mvar_value_90;
        tmp_assattr_name_18 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_10 );
        PyList_SET_ITEM( tmp_assattr_name_18, 0, tmp_list_element_10 );
        tmp_mvar_value_91 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegCloseKey );

        if (unlikely( tmp_mvar_value_91 == NULL ))
        {
            tmp_mvar_value_91 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegCloseKey );
        }

        CHECK_OBJECT( tmp_mvar_value_91 );
        tmp_assattr_target_18 = tmp_mvar_value_91;
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
        PyObject *tmp_assattr_name_19;
        PyObject *tmp_mvar_value_92;
        PyObject *tmp_assattr_target_19;
        PyObject *tmp_mvar_value_93;
        tmp_mvar_value_92 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LONG );

        if (unlikely( tmp_mvar_value_92 == NULL ))
        {
            tmp_mvar_value_92 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
        }

        if ( tmp_mvar_value_92 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LONG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_19 = tmp_mvar_value_92;
        tmp_mvar_value_93 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegCloseKey );

        if (unlikely( tmp_mvar_value_93 == NULL ))
        {
            tmp_mvar_value_93 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegCloseKey );
        }

        if ( tmp_mvar_value_93 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RegCloseKey" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_19 = tmp_mvar_value_93;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_restype, tmp_assattr_name_19 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_source_name_31;
        PyObject *tmp_mvar_value_94;
        tmp_mvar_value_94 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_advapi32 );

        if (unlikely( tmp_mvar_value_94 == NULL ))
        {
            tmp_mvar_value_94 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_advapi32 );
        }

        if ( tmp_mvar_value_94 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "advapi32" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }

        tmp_source_name_31 = tmp_mvar_value_94;
        tmp_assign_source_57 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_RegQueryValueExW );
        if ( tmp_assign_source_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx, tmp_assign_source_57 );
    }
    {
        PyObject *tmp_assattr_name_20;
        PyObject *tmp_list_element_11;
        PyObject *tmp_mvar_value_95;
        PyObject *tmp_mvar_value_96;
        PyObject *tmp_mvar_value_97;
        PyObject *tmp_mvar_value_98;
        PyObject *tmp_mvar_value_99;
        PyObject *tmp_mvar_value_100;
        PyObject *tmp_assattr_target_20;
        PyObject *tmp_mvar_value_101;
        tmp_mvar_value_95 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HKEY );

        if (unlikely( tmp_mvar_value_95 == NULL ))
        {
            tmp_mvar_value_95 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HKEY );
        }

        if ( tmp_mvar_value_95 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HKEY" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }

        tmp_list_element_11 = tmp_mvar_value_95;
        tmp_assattr_name_20 = PyList_New( 6 );
        Py_INCREF( tmp_list_element_11 );
        PyList_SET_ITEM( tmp_assattr_name_20, 0, tmp_list_element_11 );
        tmp_mvar_value_96 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPCTSTR );

        if (unlikely( tmp_mvar_value_96 == NULL ))
        {
            tmp_mvar_value_96 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCTSTR );
        }

        if ( tmp_mvar_value_96 == NULL )
        {
            Py_DECREF( tmp_assattr_name_20 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCTSTR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }

        tmp_list_element_11 = tmp_mvar_value_96;
        Py_INCREF( tmp_list_element_11 );
        PyList_SET_ITEM( tmp_assattr_name_20, 1, tmp_list_element_11 );
        tmp_mvar_value_97 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPDWORD );

        if (unlikely( tmp_mvar_value_97 == NULL ))
        {
            tmp_mvar_value_97 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
        }

        if ( tmp_mvar_value_97 == NULL )
        {
            Py_DECREF( tmp_assattr_name_20 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }

        tmp_list_element_11 = tmp_mvar_value_97;
        Py_INCREF( tmp_list_element_11 );
        PyList_SET_ITEM( tmp_assattr_name_20, 2, tmp_list_element_11 );
        tmp_mvar_value_98 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPDWORD );

        if (unlikely( tmp_mvar_value_98 == NULL ))
        {
            tmp_mvar_value_98 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
        }

        if ( tmp_mvar_value_98 == NULL )
        {
            Py_DECREF( tmp_assattr_name_20 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }

        tmp_list_element_11 = tmp_mvar_value_98;
        Py_INCREF( tmp_list_element_11 );
        PyList_SET_ITEM( tmp_assattr_name_20, 3, tmp_list_element_11 );
        tmp_mvar_value_99 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPBYTE );

        if (unlikely( tmp_mvar_value_99 == NULL ))
        {
            tmp_mvar_value_99 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPBYTE );
        }

        if ( tmp_mvar_value_99 == NULL )
        {
            Py_DECREF( tmp_assattr_name_20 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPBYTE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }

        tmp_list_element_11 = tmp_mvar_value_99;
        Py_INCREF( tmp_list_element_11 );
        PyList_SET_ITEM( tmp_assattr_name_20, 4, tmp_list_element_11 );
        tmp_mvar_value_100 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPDWORD );

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

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }

        tmp_list_element_11 = tmp_mvar_value_100;
        Py_INCREF( tmp_list_element_11 );
        PyList_SET_ITEM( tmp_assattr_name_20, 5, tmp_list_element_11 );
        tmp_mvar_value_101 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );

        if (unlikely( tmp_mvar_value_101 == NULL ))
        {
            tmp_mvar_value_101 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );
        }

        CHECK_OBJECT( tmp_mvar_value_101 );
        tmp_assattr_target_20 = tmp_mvar_value_101;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_argtypes, tmp_assattr_name_20 );
        Py_DECREF( tmp_assattr_name_20 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_21;
        PyObject *tmp_mvar_value_102;
        PyObject *tmp_assattr_target_21;
        PyObject *tmp_mvar_value_103;
        tmp_mvar_value_102 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LONG );

        if (unlikely( tmp_mvar_value_102 == NULL ))
        {
            tmp_mvar_value_102 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
        }

        if ( tmp_mvar_value_102 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LONG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_21 = tmp_mvar_value_102;
        tmp_mvar_value_103 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );

        if (unlikely( tmp_mvar_value_103 == NULL ))
        {
            tmp_mvar_value_103 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );
        }

        if ( tmp_mvar_value_103 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RegQueryValueEx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_21 = tmp_mvar_value_103;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_restype, tmp_assattr_name_21 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_23cc64ce78865db4262714c2ba677207 );
#endif
    popFrameStack();

    assertFrameObject( frame_23cc64ce78865db4262714c2ba677207 );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_23cc64ce78865db4262714c2ba677207 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_23cc64ce78865db4262714c2ba677207, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_23cc64ce78865db4262714c2ba677207->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_23cc64ce78865db4262714c2ba677207, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIGCF_PRESENT, tmp_assign_source_58 );
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = const_int_pos_16;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIGCF_DEVICEINTERFACE, tmp_assign_source_59 );
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_INVALID_HANDLE_VALUE, tmp_assign_source_60 );
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = const_int_pos_122;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ERROR_INSUFFICIENT_BUFFER, tmp_assign_source_61 );
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_HARDWAREID, tmp_assign_source_62 );
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = const_int_pos_12;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_FRIENDLYNAME, tmp_assign_source_63 );
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = const_int_pos_35;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_LOCATION_PATHS, tmp_assign_source_64 );
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = const_int_pos_11;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_MFG, tmp_assign_source_65 );
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DICS_FLAG_GLOBAL, tmp_assign_source_66 );
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIREG_DEV, tmp_assign_source_67 );
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = const_int_pos_131097;
        UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_KEY_READ, tmp_assign_source_68 );
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_4_iterate_comports(  );



        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_iterate_comports, tmp_assign_source_69 );
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_70 = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_5_comports( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_70 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_serial$tools$list_ports_windows );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
