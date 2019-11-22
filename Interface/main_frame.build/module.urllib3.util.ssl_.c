/* Generated code for Python module 'urllib3.util.ssl_'
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

/* The "_module_urllib3$util$ssl_" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$ssl_;
PyDictObject *moduledict_urllib3$util$ssl_;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_7c46323d1955d9b4a74a964a21041d91;
extern PyObject *const_str_plain_warn;
static PyObject *const_tuple_str_plain_HAS_SNI_tuple;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_load_cert_chain;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_unhexlify;
static PyObject *const_tuple_str_plain_self_str_plain_cipher_suite_tuple;
static PyObject *const_tuple_9473549b7ba644563513e7e61e0dc810_tuple;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_hashfunc;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_digest_9122c237564b58c6d395bd61e093c6a7;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_plain_OP_NO_SSLv2;
extern PyObject *const_str_plain_zip;
static PyObject *const_str_digest_90dcfb0c5b2e395585c44f2c6f8db8bf;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_hmac;
static PyObject *const_str_digest_8dea7a9de4b59b57c96f518f0d07104f;
static PyObject *const_str_digest_f2ba34680fb338cc7c2e32fdb7c1301a;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_HAS_SNI;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_IPv4_RE;
static PyObject *const_tuple_str_plain_self_str_plain_protocol_version_tuple;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_resolve_cert_reqs;
extern PyObject *const_str_plain_protocol;
static PyObject *const_str_plain_HASHFUNC_MAP;
static PyObject *const_str_digest_69e25692dfd1b01029aea21de378705a;
static PyObject *const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple;
extern PyObject *const_str_plain_IS_PYOPENSSL;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_hexlify;
extern PyObject *const_str_plain_server_side;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_load_default_certs;
static PyObject *const_tuple_str_plain_PROTOCOL_TLS_tuple;
static PyObject *const_str_plain__is_key_file_encrypted;
static PyObject *const_str_digest_2ab5f213d34b1c74c5006ab35306cc75;
extern PyObject *const_str_plain_ciphers;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple;
static PyObject *const_str_digest_af8fbc6bbb34bfe947825ffe4bd0065f;
static PyObject *const_str_digest_b701eed1b0dbd7c95bf0642b83f3618a;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_digest_7bff4188ca4a22a0aa0a123e748246d2;
static PyObject *const_str_digest_b84a0b30b5a2d1387bf77d4f514973de;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_lower;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_candidate;
extern PyObject *const_int_pos_16777216;
extern PyObject *const_str_plain_errno;
extern PyObject *const_str_plain_CERT_REQUIRED;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_options;
extern PyObject *const_tuple_str_plain_ascii_tuple;
extern PyObject *const_str_plain_load_verify_locations;
extern PyObject *const_str_plain_ssl_version;
static PyObject *const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple;
extern PyObject *const_str_plain_IPv6_ADDRZ_RFC4007_RE;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_tuple_none_false_tuple;
static PyObject *const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple;
extern PyObject *const_str_plain_str;
extern PyObject *const_tuple_none_none_none_none_tuple;
static PyObject *const_str_digest_d069314bcc014e8d1c0cdffc71176664;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_fa180d3d80537b2aa9f9227fc855b3ea;
extern PyObject *const_str_plain_packages;
static PyObject *const_str_digest_b1b851bd94b3604444b241240c75e7c3;
extern PyObject *const_str_plain_hashlib;
extern PyObject *const_str_plain_SSLContext;
extern PyObject *const_str_plain_sock;
static PyObject *const_tuple_str_plain_SSLContext_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_IS_SECURETRANSPORT;
extern PyObject *const_str_plain_key_password;
extern PyObject *const_str_plain_SNIMissingWarning;
extern PyObject *const_str_plain_six;
static PyObject *const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple;
extern PyObject *const_tuple_str_chr_58_str_empty_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple;
extern PyObject *const_tuple_none_none_none_none_none_none_none_none_none_none_tuple;
static PyObject *const_str_digest_60133ff820b8c343c7e20e0a0152c1b7;
extern PyObject *const_str_plain_create_urllib3_context;
static PyObject *const_int_pos_131072;
static PyObject *const_str_plain_protocol_version;
extern PyObject *const_str_plain_line;
static PyObject *const_str_digest_1e4f35ebb0482ef8f0f24ba4e0927107;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_context;
static PyObject *const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8;
extern PyObject *const_str_plain_set_ciphers;
extern PyObject *const_str_plain_l;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_assert_fingerprint;
extern PyObject *const_str_plain_ssl_context;
static PyObject *const_str_digest_5af34d61d2693f4cb5ec31c92baaebb5;
extern PyObject *const_str_plain_r;
static PyObject *const_str_digest_6efba4feba5d3ac1fc26ca13b212a604;
extern PyObject *const_str_plain_verify_mode;
static PyObject *const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b;
static PyObject *const_str_plain_ENCRYPTED;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_tuple_str_plain_abnf_regexp_tuple;
static PyObject *const_str_digest_7433ea5e9bf8137907952033c6cfa210;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_b;
static PyObject *const_str_plain_OP_NO_SSLv3;
static PyObject *const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple;
extern PyObject *const_str_plain_PROTOCOL_TLS;
extern PyObject *const_str_plain_match;
static PyObject *const_str_digest_d003c9c097edbd2a450c14deecbcfd2e;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_digest_6ffcf66c5c876dcb3dc480220c734062;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain_decode;
static PyObject *const_str_plain_cert_digest;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_fdc80410a2b2c167f6d010d95118c7a2;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_resolve_ssl_version;
static PyObject *const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple;
extern PyObject *const_str_plain_ssl;
extern PyObject *const_str_plain_capath;
extern PyObject *const_int_0;
static PyObject *const_str_plain__const_compare_digest_backport;
static PyObject *const_tuple_int_pos_16777216_int_pos_33554432_tuple;
extern PyObject *const_str_plain_server_hostname;
extern PyObject *const_str_plain_abnf_regexp;
static PyObject *const_str_digest_1f7b5ce5a77b16d07a45e4d29e803bbc;
static PyObject *const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1;
static PyObject *const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_DEFAULT_CIPHERS;
extern PyObject *const_str_plain_cert_reqs;
extern PyObject *const_str_plain_ca_cert_dir;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_plain_CERT_;
extern PyObject *const_int_pos_64;
static PyObject *const_int_pos_33554432;
static PyObject *const_str_plain_digest_length;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_CERT_NONE;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_PROTOCOL_SSLv23;
static PyObject *const_str_plain_cipher_suite;
static PyObject *const_str_plain_fingerprint;
static PyObject *const_str_digest_d58b91cb97ab091d5f2ca31e327d619f;
static PyObject *const_str_digest_11208532747ea36cadee31118e841464;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_355d1696e5e022fa728033399bc0d0e8;
static PyObject *const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6;
static PyObject *const_str_digest_c6e5c4394838f24a74fcd724137f89e0;
extern PyObject *const_str_plain_binascii;
extern PyObject *const_str_plain_wrap_socket;
extern PyObject *const_str_plain_sha1;
static PyObject *const_str_plain_ENOENT;
extern PyObject *const_str_plain_cafile;
extern PyObject *const_str_plain_IPv6_RE;
static PyObject *const_tuple_str_plain_PROTOCOL_SSLv23_tuple;
static PyObject *const_str_plain_is_ipaddress;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_ca_certs;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_ssl_wrap_socket;
static PyObject *const_tuple_str_plain_hostname_tuple;
static PyObject *const_str_digest_4c54965eee2f9057ca84664177c253ba;
extern PyObject *const_str_plain_hostname;
static PyObject *const_str_plain__IP_ADDRESS_REGEX;
extern PyObject *const_str_plain_digest;
static PyObject *const_str_digest_fb43a38a807b012d6115ce5bca79e777;
static PyObject *const_str_plain_compare_digest;
static PyObject *const_str_plain_PROTOCOL_;
static PyObject *const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain_fingerprint_bytes;
static PyObject *const_tuple_str_plain_candidate_str_plain_res_tuple;
static PyObject *const_str_digest_873f89c91a6f1965f5902998a695e3d7;
static PyObject *const_str_plain_OP_NO_COMPRESSION;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple;
extern PyObject *const_str_plain_key_file;
static PyObject *const_str_plain__const_compare_digest;
static PyObject *const_tuple_str_plain_wrap_socket_str_plain_CERT_REQUIRED_tuple;
static PyObject *const_str_digest_265453facacdc76d97e06e2b7ad3f2c4;
static PyObject *const_str_digest_935dace93363545d379a5e2ed3994f38;
extern PyObject *const_str_plain_md5;
extern PyObject *const_tuple_str_plain_six_tuple;
extern PyObject *const_str_plain_keyfile;
extern PyObject *const_int_pos_40;
static PyObject *const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple;
static PyObject *const_str_digest_2681ca4c75814cad499c8358504657b6;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
static PyObject *const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_check_hostname;
extern PyObject *const_str_plain_sha256;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_ascii;
extern PyObject *const_str_plain_certfile;
extern PyObject *const_str_plain_format;
static PyObject *const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list;
extern PyObject *const_str_empty;
static PyObject *const_tuple_str_plain_SSLContext_tuple;
extern PyObject *const_str_plain_SSLError;
static PyObject *const_str_digest_913763b75a83910d47b63aee55c4ce7c;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_InsecurePlatformWarning;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_7c46323d1955d9b4a74a964a21041d91 = UNSTREAM_STRING_ASCII( &constant_bin[ 5923500 ], 45, 0 );
    const_tuple_str_plain_HAS_SNI_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HAS_SNI_tuple, 0, const_str_plain_HAS_SNI ); Py_INCREF( const_str_plain_HAS_SNI );
    const_str_plain_unhexlify = UNSTREAM_STRING_ASCII( &constant_bin[ 5923545 ], 9, 1 );
    const_tuple_str_plain_self_str_plain_cipher_suite_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cipher_suite_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_cipher_suite = UNSTREAM_STRING_ASCII( &constant_bin[ 5923554 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cipher_suite_tuple, 1, const_str_plain_cipher_suite ); Py_INCREF( const_str_plain_cipher_suite );
    const_tuple_9473549b7ba644563513e7e61e0dc810_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 1, const_str_plain_socket ); Py_INCREF( const_str_plain_socket );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 2, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 3, const_str_plain_server_side ); Py_INCREF( const_str_plain_server_side );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_plain_hashfunc = UNSTREAM_STRING_ASCII( &constant_bin[ 5923566 ], 8, 1 );
    const_str_digest_9122c237564b58c6d395bd61e093c6a7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5923574 ], 53, 0 );
    const_str_plain_OP_NO_SSLv2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5923627 ], 11, 1 );
    const_str_digest_90dcfb0c5b2e395585c44f2c6f8db8bf = UNSTREAM_STRING_ASCII( &constant_bin[ 5854777 ], 22, 0 );
    const_str_plain_hmac = UNSTREAM_STRING_ASCII( &constant_bin[ 5923638 ], 4, 1 );
    const_str_digest_8dea7a9de4b59b57c96f518f0d07104f = UNSTREAM_STRING_ASCII( &constant_bin[ 5923642 ], 26, 0 );
    const_str_digest_f2ba34680fb338cc7c2e32fdb7c1301a = UNSTREAM_STRING_ASCII( &constant_bin[ 5852817 ], 32, 0 );
    const_tuple_str_plain_self_str_plain_protocol_version_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_protocol_version_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_protocol_version = UNSTREAM_STRING_ASCII( &constant_bin[ 5853840 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_protocol_version_tuple, 1, const_str_plain_protocol_version ); Py_INCREF( const_str_plain_protocol_version );
    const_str_plain_HASHFUNC_MAP = UNSTREAM_STRING_ASCII( &constant_bin[ 5923668 ], 12, 1 );
    const_str_digest_69e25692dfd1b01029aea21de378705a = UNSTREAM_STRING_ASCII( &constant_bin[ 5852557 ], 26, 0 );
    const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 0, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    const_str_plain_fingerprint = UNSTREAM_STRING_ASCII( &constant_bin[ 5838012 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 1, const_str_plain_fingerprint ); Py_INCREF( const_str_plain_fingerprint );
    const_str_plain_digest_length = UNSTREAM_STRING_ASCII( &constant_bin[ 5923680 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 2, const_str_plain_digest_length ); Py_INCREF( const_str_plain_digest_length );
    PyTuple_SET_ITEM( const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 3, const_str_plain_hashfunc ); Py_INCREF( const_str_plain_hashfunc );
    const_str_plain_fingerprint_bytes = UNSTREAM_STRING_ASCII( &constant_bin[ 5923693 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 4, const_str_plain_fingerprint_bytes ); Py_INCREF( const_str_plain_fingerprint_bytes );
    const_str_plain_cert_digest = UNSTREAM_STRING_ASCII( &constant_bin[ 5923710 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 5, const_str_plain_cert_digest ); Py_INCREF( const_str_plain_cert_digest );
    const_tuple_str_plain_PROTOCOL_TLS_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PROTOCOL_TLS_tuple, 0, const_str_plain_PROTOCOL_TLS ); Py_INCREF( const_str_plain_PROTOCOL_TLS );
    const_str_plain__is_key_file_encrypted = UNSTREAM_STRING_ASCII( &constant_bin[ 5923721 ], 22, 1 );
    const_str_digest_2ab5f213d34b1c74c5006ab35306cc75 = UNSTREAM_STRING_ASCII( &constant_bin[ 5923743 ], 12, 0 );
    const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple, 0, const_str_plain_key_file ); Py_INCREF( const_str_plain_key_file );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple, 1, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple, 2, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    const_str_digest_af8fbc6bbb34bfe947825ffe4bd0065f = UNSTREAM_STRING_ASCII( &constant_bin[ 5923755 ], 7, 0 );
    const_str_digest_b701eed1b0dbd7c95bf0642b83f3618a = UNSTREAM_STRING_ASCII( &constant_bin[ 5923762 ], 14, 0 );
    const_str_digest_b84a0b30b5a2d1387bf77d4f514973de = UNSTREAM_STRING_ASCII( &constant_bin[ 5923776 ], 14, 0 );
    const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, 0, const_str_plain_md5 ); Py_INCREF( const_str_plain_md5 );
    PyTuple_SET_ITEM( const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, 1, const_str_plain_sha1 ); Py_INCREF( const_str_plain_sha1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, 2, const_str_plain_sha256 ); Py_INCREF( const_str_plain_sha256 );
    const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 0, const_str_plain_ssl_version ); Py_INCREF( const_str_plain_ssl_version );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 1, const_str_plain_cert_reqs ); Py_INCREF( const_str_plain_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 2, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 3, const_str_plain_ciphers ); Py_INCREF( const_str_plain_ciphers );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 4, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    const_str_digest_d069314bcc014e8d1c0cdffc71176664 = UNSTREAM_STRING_ASCII( &constant_bin[ 5923790 ], 9, 0 );
    const_str_digest_fa180d3d80537b2aa9f9227fc855b3ea = UNSTREAM_STRING_ASCII( &constant_bin[ 5923799 ], 6, 0 );
    const_str_digest_b1b851bd94b3604444b241240c75e7c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5923805 ], 4, 0 );
    const_tuple_str_plain_SSLContext_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SSLContext_tuple_type_object_tuple_tuple, 0, const_str_plain_SSLContext ); Py_INCREF( const_str_plain_SSLContext );
    PyTuple_SET_ITEM( const_tuple_str_plain_SSLContext_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 1, const_str_plain_keyfile ); Py_INCREF( const_str_plain_keyfile );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 2, const_str_plain_certfile ); Py_INCREF( const_str_plain_certfile );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 3, const_str_plain_cert_reqs ); Py_INCREF( const_str_plain_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 4, const_str_plain_ca_certs ); Py_INCREF( const_str_plain_ca_certs );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 5, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 6, const_str_plain_ssl_version ); Py_INCREF( const_str_plain_ssl_version );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 7, const_str_plain_ciphers ); Py_INCREF( const_str_plain_ciphers );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 8, const_str_plain_ssl_context ); Py_INCREF( const_str_plain_ssl_context );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 9, const_str_plain_ca_cert_dir ); Py_INCREF( const_str_plain_ca_cert_dir );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 10, const_str_plain_key_password ); Py_INCREF( const_str_plain_key_password );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 11, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 12, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 1, const_str_plain_certfile ); Py_INCREF( const_str_plain_certfile );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 2, const_str_plain_keyfile ); Py_INCREF( const_str_plain_keyfile );
    const_str_digest_60133ff820b8c343c7e20e0a0152c1b7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5923809 ], 4, 0 );
    const_int_pos_131072 = PyLong_FromUnsignedLong( 131072ul );
    const_str_digest_1e4f35ebb0482ef8f0f24ba4e0927107 = UNSTREAM_STRING_ASCII( &constant_bin[ 5852259 ], 22, 0 );
    const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5923813 ], 34, 0 );
    const_str_digest_5af34d61d2693f4cb5ec31c92baaebb5 = UNSTREAM_STRING_ASCII( &constant_bin[ 5923847 ], 11, 0 );
    const_str_digest_6efba4feba5d3ac1fc26ca13b212a604 = UNSTREAM_STRING_ASCII( &constant_bin[ 5848663 ], 17, 0 );
    const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b = UNSTREAM_STRING_ASCII( &constant_bin[ 5923858 ], 54, 0 );
    const_str_plain_ENCRYPTED = UNSTREAM_STRING_ASCII( &constant_bin[ 5923912 ], 9, 1 );
    const_str_digest_7433ea5e9bf8137907952033c6cfa210 = UNSTREAM_STRING_ASCII( &constant_bin[ 5923921 ], 230, 0 );
    const_str_plain_OP_NO_SSLv3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5924151 ], 11, 1 );
    const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple, 2, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple, 3, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    PyTuple_SET_ITEM( const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple, 4, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_digest_d003c9c097edbd2a450c14deecbcfd2e = UNSTREAM_STRING_ASCII( &constant_bin[ 5924162 ], 787, 0 );
    const_str_digest_6ffcf66c5c876dcb3dc480220c734062 = UNSTREAM_STRING_ASCII( &constant_bin[ 5851784 ], 19, 0 );
    const_str_digest_fdc80410a2b2c167f6d010d95118c7a2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5924949 ], 10, 0 );
    const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple, 0, const_str_digest_9122c237564b58c6d395bd61e093c6a7 ); Py_INCREF( const_str_digest_9122c237564b58c6d395bd61e093c6a7 );
    const_str_plain__const_compare_digest_backport = UNSTREAM_STRING_ASCII( &constant_bin[ 5924959 ], 30, 1 );
    const_tuple_int_pos_16777216_int_pos_33554432_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_16777216_int_pos_33554432_tuple, 0, const_int_pos_16777216 ); Py_INCREF( const_int_pos_16777216 );
    const_int_pos_33554432 = PyLong_FromUnsignedLong( 33554432ul );
    PyTuple_SET_ITEM( const_tuple_int_pos_16777216_int_pos_33554432_tuple, 1, const_int_pos_33554432 ); Py_INCREF( const_int_pos_33554432 );
    const_str_digest_1f7b5ce5a77b16d07a45e4d29e803bbc = UNSTREAM_STRING_ASCII( &constant_bin[ 5924989 ], 384, 0 );
    const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5925373 ], 32, 0 );
    const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, 0, const_str_plain_SSLError ); Py_INCREF( const_str_plain_SSLError );
    PyTuple_SET_ITEM( const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, 1, const_str_plain_InsecurePlatformWarning ); Py_INCREF( const_str_plain_InsecurePlatformWarning );
    PyTuple_SET_ITEM( const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, 2, const_str_plain_SNIMissingWarning ); Py_INCREF( const_str_plain_SNIMissingWarning );
    const_str_plain_DEFAULT_CIPHERS = UNSTREAM_STRING_ASCII( &constant_bin[ 5925405 ], 15, 1 );
    const_str_plain_CERT_ = UNSTREAM_STRING_ASCII( &constant_bin[ 5853357 ], 5, 1 );
    const_str_plain_PROTOCOL_SSLv23 = UNSTREAM_STRING_ASCII( &constant_bin[ 5925420 ], 15, 1 );
    const_str_digest_d58b91cb97ab091d5f2ca31e327d619f = UNSTREAM_STRING_ASCII( &constant_bin[ 5925435 ], 12, 0 );
    const_str_digest_11208532747ea36cadee31118e841464 = UNSTREAM_STRING_ASCII( &constant_bin[ 5925447 ], 42, 0 );
    const_str_digest_355d1696e5e022fa728033399bc0d0e8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5923790 ], 6, 0 );
    const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5925489 ], 167, 0 );
    const_str_digest_c6e5c4394838f24a74fcd724137f89e0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5925656 ], 1259, 0 );
    const_str_plain_ENOENT = UNSTREAM_STRING_ASCII( &constant_bin[ 5926915 ], 6, 1 );
    const_tuple_str_plain_PROTOCOL_SSLv23_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PROTOCOL_SSLv23_tuple, 0, const_str_plain_PROTOCOL_SSLv23 ); Py_INCREF( const_str_plain_PROTOCOL_SSLv23 );
    const_str_plain_is_ipaddress = UNSTREAM_STRING_ASCII( &constant_bin[ 5926921 ], 12, 1 );
    const_tuple_str_plain_hostname_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hostname_tuple, 0, const_str_plain_hostname ); Py_INCREF( const_str_plain_hostname );
    const_str_digest_4c54965eee2f9057ca84664177c253ba = UNSTREAM_STRING_ASCII( &constant_bin[ 5926933 ], 20, 0 );
    const_str_plain__IP_ADDRESS_REGEX = UNSTREAM_STRING_ASCII( &constant_bin[ 5926953 ], 17, 1 );
    const_str_digest_fb43a38a807b012d6115ce5bca79e777 = UNSTREAM_STRING_ASCII( &constant_bin[ 5926970 ], 6, 0 );
    const_str_plain_compare_digest = UNSTREAM_STRING_ASCII( &constant_bin[ 5924966 ], 14, 1 );
    const_str_plain_PROTOCOL_ = UNSTREAM_STRING_ASCII( &constant_bin[ 5851848 ], 9, 1 );
    const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple, 0, const_str_digest_7c46323d1955d9b4a74a964a21041d91 ); Py_INCREF( const_str_digest_7c46323d1955d9b4a74a964a21041d91 );
    const_tuple_str_plain_candidate_str_plain_res_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_candidate_str_plain_res_tuple, 0, const_str_plain_candidate ); Py_INCREF( const_str_plain_candidate );
    PyTuple_SET_ITEM( const_tuple_str_plain_candidate_str_plain_res_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_digest_873f89c91a6f1965f5902998a695e3d7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5926976 ], 487, 0 );
    const_str_plain_OP_NO_COMPRESSION = UNSTREAM_STRING_ASCII( &constant_bin[ 5926713 ], 17, 1 );
    const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple, 0, const_str_plain_hexlify ); Py_INCREF( const_str_plain_hexlify );
    PyTuple_SET_ITEM( const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple, 1, const_str_plain_unhexlify ); Py_INCREF( const_str_plain_unhexlify );
    const_str_plain__const_compare_digest = UNSTREAM_STRING_ASCII( &constant_bin[ 5924959 ], 21, 1 );
    const_tuple_str_plain_wrap_socket_str_plain_CERT_REQUIRED_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_wrap_socket_str_plain_CERT_REQUIRED_tuple, 0, const_str_plain_wrap_socket ); Py_INCREF( const_str_plain_wrap_socket );
    PyTuple_SET_ITEM( const_tuple_str_plain_wrap_socket_str_plain_CERT_REQUIRED_tuple, 1, const_str_plain_CERT_REQUIRED ); Py_INCREF( const_str_plain_CERT_REQUIRED );
    const_str_digest_265453facacdc76d97e06e2b7ad3f2c4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5927463 ], 306, 0 );
    const_str_digest_935dace93363545d379a5e2ed3994f38 = UNSTREAM_STRING_ASCII( &constant_bin[ 5927769 ], 225, 0 );
    const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, 0, const_str_plain_OP_NO_SSLv2 ); Py_INCREF( const_str_plain_OP_NO_SSLv2 );
    PyTuple_SET_ITEM( const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, 1, const_str_plain_OP_NO_SSLv3 ); Py_INCREF( const_str_plain_OP_NO_SSLv3 );
    PyTuple_SET_ITEM( const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, 2, const_str_plain_OP_NO_COMPRESSION ); Py_INCREF( const_str_plain_OP_NO_COMPRESSION );
    const_str_digest_2681ca4c75814cad499c8358504657b6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5925437 ], 10, 0 );
    const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 1, const_str_plain_cafile ); Py_INCREF( const_str_plain_cafile );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 2, const_str_plain_capath ); Py_INCREF( const_str_plain_capath );
    const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 0, const_str_digest_d58b91cb97ab091d5f2ca31e327d619f ); Py_INCREF( const_str_digest_d58b91cb97ab091d5f2ca31e327d619f );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 1, const_str_digest_b701eed1b0dbd7c95bf0642b83f3618a ); Py_INCREF( const_str_digest_b701eed1b0dbd7c95bf0642b83f3618a );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 2, const_str_digest_2681ca4c75814cad499c8358504657b6 ); Py_INCREF( const_str_digest_2681ca4c75814cad499c8358504657b6 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 3, const_str_digest_2ab5f213d34b1c74c5006ab35306cc75 ); Py_INCREF( const_str_digest_2ab5f213d34b1c74c5006ab35306cc75 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 4, const_str_digest_5af34d61d2693f4cb5ec31c92baaebb5 ); Py_INCREF( const_str_digest_5af34d61d2693f4cb5ec31c92baaebb5 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 5, const_str_digest_d069314bcc014e8d1c0cdffc71176664 ); Py_INCREF( const_str_digest_d069314bcc014e8d1c0cdffc71176664 );
    const_str_digest_913763b75a83910d47b63aee55c4ce7c = UNSTREAM_STRING_ASCII( &constant_bin[ 5923847 ], 8, 0 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 6, const_str_digest_913763b75a83910d47b63aee55c4ce7c ); Py_INCREF( const_str_digest_913763b75a83910d47b63aee55c4ce7c );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 7, const_str_digest_355d1696e5e022fa728033399bc0d0e8 ); Py_INCREF( const_str_digest_355d1696e5e022fa728033399bc0d0e8 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 8, const_str_digest_fdc80410a2b2c167f6d010d95118c7a2 ); Py_INCREF( const_str_digest_fdc80410a2b2c167f6d010d95118c7a2 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 9, const_str_digest_af8fbc6bbb34bfe947825ffe4bd0065f ); Py_INCREF( const_str_digest_af8fbc6bbb34bfe947825ffe4bd0065f );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 10, const_str_digest_fa180d3d80537b2aa9f9227fc855b3ea ); Py_INCREF( const_str_digest_fa180d3d80537b2aa9f9227fc855b3ea );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 11, const_str_digest_fb43a38a807b012d6115ce5bca79e777 ); Py_INCREF( const_str_digest_fb43a38a807b012d6115ce5bca79e777 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 12, const_str_digest_b1b851bd94b3604444b241240c75e7c3 ); Py_INCREF( const_str_digest_b1b851bd94b3604444b241240c75e7c3 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 13, const_str_digest_60133ff820b8c343c7e20e0a0152c1b7 ); Py_INCREF( const_str_digest_60133ff820b8c343c7e20e0a0152c1b7 );
    const_tuple_str_plain_SSLContext_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SSLContext_tuple, 0, const_str_plain_SSLContext ); Py_INCREF( const_str_plain_SSLContext );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$ssl_( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4536222e4d7a4f8dac7984c5dc3542d1;
static PyCodeObject *codeobj_9b2e219286b979493792e42f47fb970c;
static PyCodeObject *codeobj_49552c6df3c60581db1488a67dfb3d5a;
static PyCodeObject *codeobj_892b25b4731ac07bbc7d770217521d6b;
static PyCodeObject *codeobj_27de0af775b3126c6c3eefa8f5d5b198;
static PyCodeObject *codeobj_66630531ce860ac7b4a165d1ceffa908;
static PyCodeObject *codeobj_ecef3a7e9fe772765b99a8639f742375;
static PyCodeObject *codeobj_e68818d670f9b79128955921e70e6066;
static PyCodeObject *codeobj_bba503c85b689b1b5051004c667e823b;
static PyCodeObject *codeobj_7196113aa15fa2fc3b3be5e283819878;
static PyCodeObject *codeobj_22712747fd4141c24aa69c1be8ce8d48;
static PyCodeObject *codeobj_b1e4bb9ac98c34657b0d21c79cb856ae;
static PyCodeObject *codeobj_cc8b154b6f000ff9f8ba39285dfd0f07;
static PyCodeObject *codeobj_358bef4eb00a000110b6d7bc076f3c2f;
static PyCodeObject *codeobj_853ccb0feb90a811158cd704d10c9bf8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_4c54965eee2f9057ca84664177c253ba );
    codeobj_4536222e4d7a4f8dac7984c5dc3542d1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8dea7a9de4b59b57c96f518f0d07104f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_9b2e219286b979493792e42f47fb970c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SSLContext, 116, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_49552c6df3c60581db1488a67dfb3d5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 117, const_tuple_str_plain_self_str_plain_protocol_version_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_892b25b4731ac07bbc7d770217521d6b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__const_compare_digest_backport, 28, const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_27de0af775b3126c6c3eefa8f5d5b198 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_key_file_encrypted, 384, const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_66630531ce860ac7b4a165d1ceffa908 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_assert_fingerprint, 162, const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ecef3a7e9fe772765b99a8639f742375 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_urllib3_context, 228, const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e68818d670f9b79128955921e70e6066 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_ipaddress, 371, const_tuple_str_plain_hostname_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bba503c85b689b1b5051004c667e823b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_cert_chain, 128, const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7196113aa15fa2fc3b3be5e283819878 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_verify_locations, 132, const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_22712747fd4141c24aa69c1be8ce8d48 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_cert_reqs, 189, const_tuple_str_plain_candidate_str_plain_res_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b1e4bb9ac98c34657b0d21c79cb856ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_ssl_version, 212, const_tuple_str_plain_candidate_str_plain_res_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cc8b154b6f000ff9f8ba39285dfd0f07 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_ciphers, 138, const_tuple_str_plain_self_str_plain_cipher_suite_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_358bef4eb00a000110b6d7bc076f3c2f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ssl_wrap_socket, 290, const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 11, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_853ccb0feb90a811158cd704d10c9bf8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrap_socket, 141, const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_10_create_urllib3_context( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_11_ssl_wrap_socket( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_12_is_ipaddress(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_13__is_key_file_encrypted(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_1__const_compare_digest_backport(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_2___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_3_load_cert_chain(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_4_load_verify_locations( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_5_set_ciphers(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_6_wrap_socket( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_7_assert_fingerprint(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_8_resolve_cert_reqs(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_9_resolve_ssl_version(  );


// The module function definitions.
static PyObject *impl_urllib3$util$ssl_$$$function_1__const_compare_digest_backport( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *var_result = NULL;
    PyObject *var_l = NULL;
    PyObject *var_r = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_892b25b4731ac07bbc7d770217521d6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_892b25b4731ac07bbc7d770217521d6b = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_892b25b4731ac07bbc7d770217521d6b, codeobj_892b25b4731ac07bbc7d770217521d6b, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_892b25b4731ac07bbc7d770217521d6b = cache_frame_892b25b4731ac07bbc7d770217521d6b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_892b25b4731ac07bbc7d770217521d6b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_892b25b4731ac07bbc7d770217521d6b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_2;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( par_a );
        tmp_len_arg_1 = par_a;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_len_arg_2 = par_b;
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 35;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        assert( !(tmp_args_element_name_1 == NULL) );
        frame_892b25b4731ac07bbc7d770217521d6b->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_bytearray_arg_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_bytearray_arg_2;
        tmp_called_name_2 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( par_a );
        tmp_bytearray_arg_1 = par_a;
        tmp_args_element_name_2 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_bytearray_arg_2 = par_b;
        tmp_args_element_name_3 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_2 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_892b25b4731ac07bbc7d770217521d6b->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
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
                type_description_1 = "ooooo";
                exception_lineno = 36;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "ooooo";
            exception_lineno = 36;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "ooooo";
            exception_lineno = 36;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF( old );
        }

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

                    type_description_1 = "ooooo";
                    exception_lineno = 36;
                    goto try_except_handler_4;
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

            type_description_1 = "ooooo";
            exception_lineno = 36;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_l;
            var_l = tmp_assign_source_7;
            Py_INCREF( var_l );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_8;
            Py_INCREF( var_r );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_result );
        tmp_left_name_2 = var_result;
        CHECK_OBJECT( var_l );
        tmp_left_name_3 = var_l;
        CHECK_OBJECT( var_r );
        tmp_right_name_3 = var_r;
        tmp_right_name_2 = BINARY_OPERATION( PyNumber_Xor, tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = tmp_left_name_2;
        var_result = tmp_assign_source_9;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_result );
        tmp_compexpr_left_1 = var_result;
        tmp_compexpr_right_1 = const_int_0;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_892b25b4731ac07bbc7d770217521d6b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_892b25b4731ac07bbc7d770217521d6b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_892b25b4731ac07bbc7d770217521d6b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_892b25b4731ac07bbc7d770217521d6b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_892b25b4731ac07bbc7d770217521d6b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_892b25b4731ac07bbc7d770217521d6b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_892b25b4731ac07bbc7d770217521d6b,
        type_description_1,
        par_a,
        par_b,
        var_result,
        var_l,
        var_r
    );


    // Release cached frame.
    if ( frame_892b25b4731ac07bbc7d770217521d6b == cache_frame_892b25b4731ac07bbc7d770217521d6b )
    {
        Py_DECREF( frame_892b25b4731ac07bbc7d770217521d6b );
    }
    cache_frame_892b25b4731ac07bbc7d770217521d6b = NULL;

    assertFrameObject( frame_892b25b4731ac07bbc7d770217521d6b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_1__const_compare_digest_backport );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_1__const_compare_digest_backport );
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


static PyObject *impl_urllib3$util$ssl_$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_protocol_version = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_49552c6df3c60581db1488a67dfb3d5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_49552c6df3c60581db1488a67dfb3d5a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_49552c6df3c60581db1488a67dfb3d5a, codeobj_49552c6df3c60581db1488a67dfb3d5a, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_49552c6df3c60581db1488a67dfb3d5a = cache_frame_49552c6df3c60581db1488a67dfb3d5a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_49552c6df3c60581db1488a67dfb3d5a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_49552c6df3c60581db1488a67dfb3d5a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_protocol_version );
        tmp_assattr_name_1 = par_protocol_version;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_protocol, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_False;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_check_hostname, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CERT_NONE );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_verify_mode, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_ca_certs, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_options, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_certfile, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_name_7 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_keyfile, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_ciphers, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_49552c6df3c60581db1488a67dfb3d5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_49552c6df3c60581db1488a67dfb3d5a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_49552c6df3c60581db1488a67dfb3d5a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_49552c6df3c60581db1488a67dfb3d5a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_49552c6df3c60581db1488a67dfb3d5a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_49552c6df3c60581db1488a67dfb3d5a,
        type_description_1,
        par_self,
        par_protocol_version
    );


    // Release cached frame.
    if ( frame_49552c6df3c60581db1488a67dfb3d5a == cache_frame_49552c6df3c60581db1488a67dfb3d5a )
    {
        Py_DECREF( frame_49552c6df3c60581db1488a67dfb3d5a );
    }
    cache_frame_49552c6df3c60581db1488a67dfb3d5a = NULL;

    assertFrameObject( frame_49552c6df3c60581db1488a67dfb3d5a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_protocol_version );
    Py_DECREF( par_protocol_version );
    par_protocol_version = NULL;

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

    CHECK_OBJECT( (PyObject *)par_protocol_version );
    Py_DECREF( par_protocol_version );
    par_protocol_version = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_2___init__ );
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


static PyObject *impl_urllib3$util$ssl_$$$function_3_load_cert_chain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_certfile = python_pars[ 1 ];
    PyObject *par_keyfile = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_bba503c85b689b1b5051004c667e823b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bba503c85b689b1b5051004c667e823b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bba503c85b689b1b5051004c667e823b, codeobj_bba503c85b689b1b5051004c667e823b, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bba503c85b689b1b5051004c667e823b = cache_frame_bba503c85b689b1b5051004c667e823b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bba503c85b689b1b5051004c667e823b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bba503c85b689b1b5051004c667e823b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_certfile );
        tmp_assattr_name_1 = par_certfile;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_certfile, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_keyfile );
        tmp_assattr_name_2 = par_keyfile;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_keyfile, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bba503c85b689b1b5051004c667e823b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bba503c85b689b1b5051004c667e823b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bba503c85b689b1b5051004c667e823b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bba503c85b689b1b5051004c667e823b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bba503c85b689b1b5051004c667e823b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bba503c85b689b1b5051004c667e823b,
        type_description_1,
        par_self,
        par_certfile,
        par_keyfile
    );


    // Release cached frame.
    if ( frame_bba503c85b689b1b5051004c667e823b == cache_frame_bba503c85b689b1b5051004c667e823b )
    {
        Py_DECREF( frame_bba503c85b689b1b5051004c667e823b );
    }
    cache_frame_bba503c85b689b1b5051004c667e823b = NULL;

    assertFrameObject( frame_bba503c85b689b1b5051004c667e823b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_3_load_cert_chain );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

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

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_3_load_cert_chain );
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


static PyObject *impl_urllib3$util$ssl_$$$function_4_load_verify_locations( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cafile = python_pars[ 1 ];
    PyObject *par_capath = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_7196113aa15fa2fc3b3be5e283819878;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7196113aa15fa2fc3b3be5e283819878 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7196113aa15fa2fc3b3be5e283819878, codeobj_7196113aa15fa2fc3b3be5e283819878, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7196113aa15fa2fc3b3be5e283819878 = cache_frame_7196113aa15fa2fc3b3be5e283819878;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7196113aa15fa2fc3b3be5e283819878 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7196113aa15fa2fc3b3be5e283819878 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_cafile );
        tmp_assattr_name_1 = par_cafile;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ca_certs, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_capath );
        tmp_compexpr_left_1 = par_capath;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 136;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_7196113aa15fa2fc3b3be5e283819878->m_frame.f_lineno = 136;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 136;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7196113aa15fa2fc3b3be5e283819878 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7196113aa15fa2fc3b3be5e283819878 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7196113aa15fa2fc3b3be5e283819878, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7196113aa15fa2fc3b3be5e283819878->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7196113aa15fa2fc3b3be5e283819878, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7196113aa15fa2fc3b3be5e283819878,
        type_description_1,
        par_self,
        par_cafile,
        par_capath
    );


    // Release cached frame.
    if ( frame_7196113aa15fa2fc3b3be5e283819878 == cache_frame_7196113aa15fa2fc3b3be5e283819878 )
    {
        Py_DECREF( frame_7196113aa15fa2fc3b3be5e283819878 );
    }
    cache_frame_7196113aa15fa2fc3b3be5e283819878 = NULL;

    assertFrameObject( frame_7196113aa15fa2fc3b3be5e283819878 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_4_load_verify_locations );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cafile );
    Py_DECREF( par_cafile );
    par_cafile = NULL;

    CHECK_OBJECT( (PyObject *)par_capath );
    Py_DECREF( par_capath );
    par_capath = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cafile );
    Py_DECREF( par_cafile );
    par_cafile = NULL;

    CHECK_OBJECT( (PyObject *)par_capath );
    Py_DECREF( par_capath );
    par_capath = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_4_load_verify_locations );
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


static PyObject *impl_urllib3$util$ssl_$$$function_5_set_ciphers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cipher_suite = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_cc8b154b6f000ff9f8ba39285dfd0f07;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cc8b154b6f000ff9f8ba39285dfd0f07 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cc8b154b6f000ff9f8ba39285dfd0f07, codeobj_cc8b154b6f000ff9f8ba39285dfd0f07, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_cc8b154b6f000ff9f8ba39285dfd0f07 = cache_frame_cc8b154b6f000ff9f8ba39285dfd0f07;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cc8b154b6f000ff9f8ba39285dfd0f07 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cc8b154b6f000ff9f8ba39285dfd0f07 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_cipher_suite );
        tmp_assattr_name_1 = par_cipher_suite;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ciphers, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc8b154b6f000ff9f8ba39285dfd0f07 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc8b154b6f000ff9f8ba39285dfd0f07 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cc8b154b6f000ff9f8ba39285dfd0f07, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cc8b154b6f000ff9f8ba39285dfd0f07->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cc8b154b6f000ff9f8ba39285dfd0f07, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cc8b154b6f000ff9f8ba39285dfd0f07,
        type_description_1,
        par_self,
        par_cipher_suite
    );


    // Release cached frame.
    if ( frame_cc8b154b6f000ff9f8ba39285dfd0f07 == cache_frame_cc8b154b6f000ff9f8ba39285dfd0f07 )
    {
        Py_DECREF( frame_cc8b154b6f000ff9f8ba39285dfd0f07 );
    }
    cache_frame_cc8b154b6f000ff9f8ba39285dfd0f07 = NULL;

    assertFrameObject( frame_cc8b154b6f000ff9f8ba39285dfd0f07 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_5_set_ciphers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher_suite );
    Py_DECREF( par_cipher_suite );
    par_cipher_suite = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cipher_suite );
    Py_DECREF( par_cipher_suite );
    par_cipher_suite = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_5_set_ciphers );
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


static PyObject *impl_urllib3$util$ssl_$$$function_6_wrap_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_socket = python_pars[ 1 ];
    PyObject *par_server_hostname = python_pars[ 2 ];
    PyObject *par_server_side = python_pars[ 3 ];
    PyObject *var_kwargs = NULL;
    struct Nuitka_FrameObject *frame_853ccb0feb90a811158cd704d10c9bf8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_853ccb0feb90a811158cd704d10c9bf8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_853ccb0feb90a811158cd704d10c9bf8, codeobj_853ccb0feb90a811158cd704d10c9bf8, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_853ccb0feb90a811158cd704d10c9bf8 = cache_frame_853ccb0feb90a811158cd704d10c9bf8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_853ccb0feb90a811158cd704d10c9bf8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_853ccb0feb90a811158cd704d10c9bf8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_digest_265453facacdc76d97e06e2b7ad3f2c4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InsecurePlatformWarning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        frame_853ccb0feb90a811158cd704d10c9bf8->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_dict_key_1 = const_str_plain_keyfile;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_keyfile );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_certfile;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_certfile );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_ca_certs;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ca_certs );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_cert_reqs;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_verify_mode );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 155;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_ssl_version;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_protocol );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_server_side;
        CHECK_OBJECT( par_server_side );
        tmp_dict_value_6 = par_server_side;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        assert( var_kwargs == NULL );
        var_kwargs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_wrap_socket );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_socket );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrap_socket" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 159;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_socket );
        tmp_tuple_element_1 = par_socket;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_7 = const_str_plain_ciphers;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ciphers );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 159;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_kwargs );
        tmp_dircall_arg4_1 = var_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_853ccb0feb90a811158cd704d10c9bf8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_853ccb0feb90a811158cd704d10c9bf8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_853ccb0feb90a811158cd704d10c9bf8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_853ccb0feb90a811158cd704d10c9bf8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_853ccb0feb90a811158cd704d10c9bf8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_853ccb0feb90a811158cd704d10c9bf8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_853ccb0feb90a811158cd704d10c9bf8,
        type_description_1,
        par_self,
        par_socket,
        par_server_hostname,
        par_server_side,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_853ccb0feb90a811158cd704d10c9bf8 == cache_frame_853ccb0feb90a811158cd704d10c9bf8 )
    {
        Py_DECREF( frame_853ccb0feb90a811158cd704d10c9bf8 );
    }
    cache_frame_853ccb0feb90a811158cd704d10c9bf8 = NULL;

    assertFrameObject( frame_853ccb0feb90a811158cd704d10c9bf8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_6_wrap_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_socket );
    Py_DECREF( par_socket );
    par_socket = NULL;

    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_server_side );
    Py_DECREF( par_server_side );
    par_server_side = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_socket );
    Py_DECREF( par_socket );
    par_socket = NULL;

    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_server_side );
    Py_DECREF( par_server_side );
    par_server_side = NULL;

    Py_XDECREF( var_kwargs );
    var_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_6_wrap_socket );
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


static PyObject *impl_urllib3$util$ssl_$$$function_7_assert_fingerprint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cert = python_pars[ 0 ];
    PyObject *par_fingerprint = python_pars[ 1 ];
    PyObject *var_digest_length = NULL;
    PyObject *var_hashfunc = NULL;
    PyObject *var_fingerprint_bytes = NULL;
    PyObject *var_cert_digest = NULL;
    struct Nuitka_FrameObject *frame_66630531ce860ac7b4a165d1ceffa908;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_66630531ce860ac7b4a165d1ceffa908 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_66630531ce860ac7b4a165d1ceffa908, codeobj_66630531ce860ac7b4a165d1ceffa908, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_66630531ce860ac7b4a165d1ceffa908 = cache_frame_66630531ce860ac7b4a165d1ceffa908;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_66630531ce860ac7b4a165d1ceffa908 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_66630531ce860ac7b4a165d1ceffa908 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_fingerprint );
        tmp_called_instance_2 = par_fingerprint;
        frame_66630531ce860ac7b4a165d1ceffa908->m_frame.f_lineno = 172;
        tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_58_str_empty_tuple, 0 ) );

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_66630531ce860ac7b4a165d1ceffa908->m_frame.f_lineno = 172;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_fingerprint;
            assert( old != NULL );
            par_fingerprint = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_fingerprint );
        tmp_len_arg_1 = par_fingerprint;
        tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_digest_length == NULL );
        var_digest_length = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HASHFUNC_MAP" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 174;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_1;
        CHECK_OBJECT( var_digest_length );
        tmp_args_element_name_1 = var_digest_length;
        frame_66630531ce860ac7b4a165d1ceffa908->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_hashfunc == NULL );
        var_hashfunc = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_hashfunc );
        tmp_operand_name_1 = var_hashfunc;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
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
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 176;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            tmp_called_instance_4 = const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8;
            CHECK_OBJECT( par_fingerprint );
            tmp_args_element_name_3 = par_fingerprint;
            frame_66630531ce860ac7b4a165d1ceffa908->m_frame.f_lineno = 177;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_format, call_args );
            }

            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_66630531ce860ac7b4a165d1ceffa908->m_frame.f_lineno = 176;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 176;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_unhexlify );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unhexlify );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unhexlify" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 180;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_fingerprint );
        tmp_called_instance_5 = par_fingerprint;
        frame_66630531ce860ac7b4a165d1ceffa908->m_frame.f_lineno = 180;
        tmp_args_element_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_encode );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_66630531ce860ac7b4a165d1ceffa908->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_fingerprint_bytes == NULL );
        var_fingerprint_bytes = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( var_hashfunc );
        tmp_called_name_3 = var_hashfunc;
        CHECK_OBJECT( par_cert );
        tmp_args_element_name_5 = par_cert;
        frame_66630531ce860ac7b4a165d1ceffa908->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_instance_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_66630531ce860ac7b4a165d1ceffa908->m_frame.f_lineno = 182;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_digest );
        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cert_digest == NULL );
        var_cert_digest = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__const_compare_digest );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_const_compare_digest" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( var_cert_digest );
        tmp_args_element_name_6 = var_cert_digest;
        CHECK_OBJECT( var_fingerprint_bytes );
        tmp_args_element_name_7 = var_fingerprint_bytes;
        frame_66630531ce860ac7b4a165d1ceffa908->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "oooooo";
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 185;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            tmp_source_name_1 = const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
            assert( !(tmp_called_name_6 == NULL) );
            CHECK_OBJECT( par_fingerprint );
            tmp_args_element_name_9 = par_fingerprint;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hexlify );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hexlify );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hexlify" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 186;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_6;
            CHECK_OBJECT( var_cert_digest );
            tmp_args_element_name_11 = var_cert_digest;
            frame_66630531ce860ac7b4a165d1ceffa908->m_frame.f_lineno = 186;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 186;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_66630531ce860ac7b4a165d1ceffa908->m_frame.f_lineno = 185;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_66630531ce860ac7b4a165d1ceffa908->m_frame.f_lineno = 185;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 185;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66630531ce860ac7b4a165d1ceffa908 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66630531ce860ac7b4a165d1ceffa908 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_66630531ce860ac7b4a165d1ceffa908, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_66630531ce860ac7b4a165d1ceffa908->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_66630531ce860ac7b4a165d1ceffa908, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_66630531ce860ac7b4a165d1ceffa908,
        type_description_1,
        par_cert,
        par_fingerprint,
        var_digest_length,
        var_hashfunc,
        var_fingerprint_bytes,
        var_cert_digest
    );


    // Release cached frame.
    if ( frame_66630531ce860ac7b4a165d1ceffa908 == cache_frame_66630531ce860ac7b4a165d1ceffa908 )
    {
        Py_DECREF( frame_66630531ce860ac7b4a165d1ceffa908 );
    }
    cache_frame_66630531ce860ac7b4a165d1ceffa908 = NULL;

    assertFrameObject( frame_66630531ce860ac7b4a165d1ceffa908 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_7_assert_fingerprint );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_fingerprint );
    Py_DECREF( par_fingerprint );
    par_fingerprint = NULL;

    CHECK_OBJECT( (PyObject *)var_digest_length );
    Py_DECREF( var_digest_length );
    var_digest_length = NULL;

    CHECK_OBJECT( (PyObject *)var_hashfunc );
    Py_DECREF( var_hashfunc );
    var_hashfunc = NULL;

    CHECK_OBJECT( (PyObject *)var_fingerprint_bytes );
    Py_DECREF( var_fingerprint_bytes );
    var_fingerprint_bytes = NULL;

    CHECK_OBJECT( (PyObject *)var_cert_digest );
    Py_DECREF( var_cert_digest );
    var_cert_digest = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_fingerprint );
    Py_DECREF( par_fingerprint );
    par_fingerprint = NULL;

    Py_XDECREF( var_digest_length );
    var_digest_length = NULL;

    Py_XDECREF( var_hashfunc );
    var_hashfunc = NULL;

    Py_XDECREF( var_fingerprint_bytes );
    var_fingerprint_bytes = NULL;

    Py_XDECREF( var_cert_digest );
    var_cert_digest = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_7_assert_fingerprint );
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


static PyObject *impl_urllib3$util$ssl_$$$function_8_resolve_cert_reqs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_candidate = python_pars[ 0 ];
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_22712747fd4141c24aa69c1be8ce8d48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_22712747fd4141c24aa69c1be8ce8d48 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_22712747fd4141c24aa69c1be8ce8d48, codeobj_22712747fd4141c24aa69c1be8ce8d48, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_22712747fd4141c24aa69c1be8ce8d48 = cache_frame_22712747fd4141c24aa69c1be8ce8d48;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_22712747fd4141c24aa69c1be8ce8d48 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_22712747fd4141c24aa69c1be8ce8d48 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_candidate );
        tmp_compexpr_left_1 = par_candidate;
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_CERT_REQUIRED );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CERT_REQUIRED );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CERT_REQUIRED" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 201;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_return_value = tmp_mvar_value_1;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_candidate );
        tmp_isinstance_inst_1 = par_candidate;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 204;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_getattr_target_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_candidate );
            tmp_getattr_attr_1 = par_candidate;
            tmp_getattr_default_1 = Py_None;
            tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_res );
            tmp_compexpr_left_2 = var_res;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 206;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_getattr_target_2 = tmp_mvar_value_3;
                tmp_left_name_1 = const_str_plain_CERT_;
                CHECK_OBJECT( par_candidate );
                tmp_right_name_1 = par_candidate;
                tmp_getattr_attr_2 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_getattr_attr_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 206;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
                Py_DECREF( tmp_getattr_attr_2 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 206;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_res;
                    assert( old != NULL );
                    var_res = tmp_assign_source_2;
                    Py_DECREF( old );
                }

            }
            branch_no_3:;
        }
        CHECK_OBJECT( var_res );
        tmp_return_value = var_res;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22712747fd4141c24aa69c1be8ce8d48 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_22712747fd4141c24aa69c1be8ce8d48 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22712747fd4141c24aa69c1be8ce8d48 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_22712747fd4141c24aa69c1be8ce8d48, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_22712747fd4141c24aa69c1be8ce8d48->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_22712747fd4141c24aa69c1be8ce8d48, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_22712747fd4141c24aa69c1be8ce8d48,
        type_description_1,
        par_candidate,
        var_res
    );


    // Release cached frame.
    if ( frame_22712747fd4141c24aa69c1be8ce8d48 == cache_frame_22712747fd4141c24aa69c1be8ce8d48 )
    {
        Py_DECREF( frame_22712747fd4141c24aa69c1be8ce8d48 );
    }
    cache_frame_22712747fd4141c24aa69c1be8ce8d48 = NULL;

    assertFrameObject( frame_22712747fd4141c24aa69c1be8ce8d48 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_candidate );
    tmp_return_value = par_candidate;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_8_resolve_cert_reqs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_candidate );
    Py_DECREF( par_candidate );
    par_candidate = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    CHECK_OBJECT( (PyObject *)par_candidate );
    Py_DECREF( par_candidate );
    par_candidate = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_8_resolve_cert_reqs );
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


static PyObject *impl_urllib3$util$ssl_$$$function_9_resolve_ssl_version( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_candidate = python_pars[ 0 ];
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_b1e4bb9ac98c34657b0d21c79cb856ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b1e4bb9ac98c34657b0d21c79cb856ae = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b1e4bb9ac98c34657b0d21c79cb856ae, codeobj_b1e4bb9ac98c34657b0d21c79cb856ae, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_b1e4bb9ac98c34657b0d21c79cb856ae = cache_frame_b1e4bb9ac98c34657b0d21c79cb856ae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b1e4bb9ac98c34657b0d21c79cb856ae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b1e4bb9ac98c34657b0d21c79cb856ae ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_candidate );
        tmp_compexpr_left_1 = par_candidate;
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PROTOCOL_TLS" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 217;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_return_value = tmp_mvar_value_1;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_candidate );
        tmp_isinstance_inst_1 = par_candidate;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 220;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_getattr_target_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_candidate );
            tmp_getattr_attr_1 = par_candidate;
            tmp_getattr_default_1 = Py_None;
            tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 220;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_res );
            tmp_compexpr_left_2 = var_res;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 222;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_getattr_target_2 = tmp_mvar_value_3;
                tmp_left_name_1 = const_str_plain_PROTOCOL_;
                CHECK_OBJECT( par_candidate );
                tmp_right_name_1 = par_candidate;
                tmp_getattr_attr_2 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_getattr_attr_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
                Py_DECREF( tmp_getattr_attr_2 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_res;
                    assert( old != NULL );
                    var_res = tmp_assign_source_2;
                    Py_DECREF( old );
                }

            }
            branch_no_3:;
        }
        CHECK_OBJECT( var_res );
        tmp_return_value = var_res;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1e4bb9ac98c34657b0d21c79cb856ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1e4bb9ac98c34657b0d21c79cb856ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1e4bb9ac98c34657b0d21c79cb856ae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b1e4bb9ac98c34657b0d21c79cb856ae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b1e4bb9ac98c34657b0d21c79cb856ae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b1e4bb9ac98c34657b0d21c79cb856ae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b1e4bb9ac98c34657b0d21c79cb856ae,
        type_description_1,
        par_candidate,
        var_res
    );


    // Release cached frame.
    if ( frame_b1e4bb9ac98c34657b0d21c79cb856ae == cache_frame_b1e4bb9ac98c34657b0d21c79cb856ae )
    {
        Py_DECREF( frame_b1e4bb9ac98c34657b0d21c79cb856ae );
    }
    cache_frame_b1e4bb9ac98c34657b0d21c79cb856ae = NULL;

    assertFrameObject( frame_b1e4bb9ac98c34657b0d21c79cb856ae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_candidate );
    tmp_return_value = par_candidate;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_9_resolve_ssl_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_candidate );
    Py_DECREF( par_candidate );
    par_candidate = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    CHECK_OBJECT( (PyObject *)par_candidate );
    Py_DECREF( par_candidate );
    par_candidate = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_9_resolve_ssl_version );
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


static PyObject *impl_urllib3$util$ssl_$$$function_10_create_urllib3_context( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ssl_version = python_pars[ 0 ];
    PyObject *par_cert_reqs = python_pars[ 1 ];
    PyObject *par_options = python_pars[ 2 ];
    PyObject *par_ciphers = python_pars[ 3 ];
    PyObject *var_context = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_ecef3a7e9fe772765b99a8639f742375;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_ecef3a7e9fe772765b99a8639f742375 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ecef3a7e9fe772765b99a8639f742375, codeobj_ecef3a7e9fe772765b99a8639f742375, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ecef3a7e9fe772765b99a8639f742375 = cache_frame_ecef3a7e9fe772765b99a8639f742375;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ecef3a7e9fe772765b99a8639f742375 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ecef3a7e9fe772765b99a8639f742375 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLContext );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLContext" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ssl_version );
        tmp_or_left_value_1 = par_ssl_version;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "ooooo";
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PROTOCOL_TLS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_or_right_value_1 = tmp_mvar_value_2;
        tmp_args_element_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_1 = tmp_or_left_value_1;
        or_end_1:;
        frame_ecef3a7e9fe772765b99a8639f742375->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_context == NULL );
        var_context = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( var_context );
        tmp_source_name_1 = var_context;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_ciphers );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ciphers );
        tmp_or_left_value_2 = par_ciphers;
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 265;
            type_description_1 = "ooooo";
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
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_CIPHERS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 265;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_or_right_value_2 = tmp_mvar_value_3;
        tmp_args_element_name_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_args_element_name_2 = tmp_or_left_value_2;
        or_end_2:;
        frame_ecef3a7e9fe772765b99a8639f742375->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( par_cert_reqs );
        tmp_compexpr_left_1 = par_cert_reqs;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 268;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CERT_REQUIRED );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_cert_reqs );
        tmp_assign_source_2 = par_cert_reqs;
        Py_INCREF( tmp_assign_source_2 );
        condexpr_end_1:;
        {
            PyObject *old = par_cert_reqs;
            assert( old != NULL );
            par_cert_reqs = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_options );
        tmp_compexpr_left_2 = par_options;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        Py_XDECREF( par_options );
        par_options = NULL;

        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_mvar_value_5;
            tmp_left_name_1 = const_int_0;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2 );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2 );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OP_NO_SSLv2" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 273;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_1 = tmp_mvar_value_5;
            tmp_assign_source_3 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 273;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( par_options == NULL );
            par_options = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_mvar_value_6;
            CHECK_OBJECT( par_options );
            tmp_left_name_2 = par_options;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3 );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3 );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OP_NO_SSLv3" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 275;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_2 = tmp_mvar_value_6;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = tmp_left_name_2;
            par_options = tmp_assign_source_4;

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_mvar_value_7;
            CHECK_OBJECT( par_options );
            tmp_left_name_3 = par_options;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OP_NO_COMPRESSION" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 278;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_3 = tmp_mvar_value_7;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = tmp_left_name_3;
            par_options = tmp_assign_source_5;

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( var_context );
        tmp_source_name_3 = var_context;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_options );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_4 = tmp_inplace_assign_attr_1__start;
        CHECK_OBJECT( par_options );
        tmp_right_name_4 = par_options;
        tmp_assign_source_7 = BINARY_OPERATION( PyNumber_InPlaceOr, tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( var_context );
        tmp_assattr_target_1 = var_context;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_options, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "ooooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_cert_reqs );
        tmp_assattr_name_2 = par_cert_reqs;
        CHECK_OBJECT( var_context );
        tmp_assattr_target_2 = var_context;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_verify_mode, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT( var_context );
        tmp_getattr_target_1 = var_context;
        tmp_getattr_attr_1 = const_str_plain_check_hostname;
        tmp_getattr_default_1 = Py_None;
        tmp_compexpr_left_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_3 );
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
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            tmp_assattr_name_3 = Py_False;
            CHECK_OBJECT( var_context );
            tmp_assattr_target_3 = var_context;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_check_hostname, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 286;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ecef3a7e9fe772765b99a8639f742375 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ecef3a7e9fe772765b99a8639f742375 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ecef3a7e9fe772765b99a8639f742375, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ecef3a7e9fe772765b99a8639f742375->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ecef3a7e9fe772765b99a8639f742375, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ecef3a7e9fe772765b99a8639f742375,
        type_description_1,
        par_ssl_version,
        par_cert_reqs,
        par_options,
        par_ciphers,
        var_context
    );


    // Release cached frame.
    if ( frame_ecef3a7e9fe772765b99a8639f742375 == cache_frame_ecef3a7e9fe772765b99a8639f742375 )
    {
        Py_DECREF( frame_ecef3a7e9fe772765b99a8639f742375 );
    }
    cache_frame_ecef3a7e9fe772765b99a8639f742375 = NULL;

    assertFrameObject( frame_ecef3a7e9fe772765b99a8639f742375 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_context );
    tmp_return_value = var_context;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_10_create_urllib3_context );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ssl_version );
    Py_DECREF( par_ssl_version );
    par_ssl_version = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_reqs );
    Py_DECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

    CHECK_OBJECT( (PyObject *)var_context );
    Py_DECREF( var_context );
    var_context = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ssl_version );
    Py_DECREF( par_ssl_version );
    par_ssl_version = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_reqs );
    Py_DECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_10_create_urllib3_context );
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


static PyObject *impl_urllib3$util$ssl_$$$function_11_ssl_wrap_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_keyfile = python_pars[ 1 ];
    PyObject *par_certfile = python_pars[ 2 ];
    PyObject *par_cert_reqs = python_pars[ 3 ];
    PyObject *par_ca_certs = python_pars[ 4 ];
    PyObject *par_server_hostname = python_pars[ 5 ];
    PyObject *par_ssl_version = python_pars[ 6 ];
    PyObject *par_ciphers = python_pars[ 7 ];
    PyObject *par_ssl_context = python_pars[ 8 ];
    PyObject *par_ca_cert_dir = python_pars[ 9 ];
    PyObject *par_key_password = python_pars[ 10 ];
    PyObject *var_context = NULL;
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_358bef4eb00a000110b6d7bc076f3c2f;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_358bef4eb00a000110b6d7bc076f3c2f = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( par_ssl_context );
        tmp_assign_source_1 = par_ssl_context;
        assert( var_context == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_context = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_358bef4eb00a000110b6d7bc076f3c2f, codeobj_358bef4eb00a000110b6d7bc076f3c2f, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_358bef4eb00a000110b6d7bc076f3c2f = cache_frame_358bef4eb00a000110b6d7bc076f3c2f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_358bef4eb00a000110b6d7bc076f3c2f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_358bef4eb00a000110b6d7bc076f3c2f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_context );
        tmp_compexpr_left_1 = var_context;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "create_urllib3_context" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 317;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_ssl_version );
            tmp_tuple_element_1 = par_ssl_version;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_cert_reqs );
            tmp_tuple_element_1 = par_cert_reqs;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_ciphers;
            CHECK_OBJECT( par_ciphers );
            tmp_dict_value_1 = par_ciphers;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = 317;
            tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_context;
                assert( old != NULL );
                var_context = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_ca_certs );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_ca_certs );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_ca_cert_dir );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_ca_cert_dir );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_context );
            tmp_called_instance_1 = var_context;
            CHECK_OBJECT( par_ca_certs );
            tmp_args_element_name_1 = par_ca_certs;
            CHECK_OBJECT( par_ca_cert_dir );
            tmp_args_element_name_2 = par_ca_cert_dir;
            frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = 322;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_load_verify_locations, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;
                type_description_1 = "ooooooooooooo";
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
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_358bef4eb00a000110b6d7bc076f3c2f, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_358bef4eb00a000110b6d7bc076f3c2f, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_IOError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 323;
                type_description_1 = "ooooooooooooo";
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
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_3 );
                var_e = tmp_assign_source_3;
            }
            // Tried code:
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLError" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 324;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_2 = tmp_mvar_value_2;
                CHECK_OBJECT( var_e );
                tmp_args_element_name_3 = var_e;
                frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = 324;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 324;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 324;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_11_ssl_wrap_socket );
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
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_3 = PyExc_OSError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 327;
                    type_description_1 = "ooooooooooooo";
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
                    PyObject *tmp_assign_source_4;
                    tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
                    assert( var_e == NULL );
                    Py_INCREF( tmp_assign_source_4 );
                    var_e = tmp_assign_source_4;
                }
                // Tried code:
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_source_name_1;
                    PyObject *tmp_source_name_2;
                    PyObject *tmp_mvar_value_3;
                    CHECK_OBJECT( var_e );
                    tmp_source_name_1 = var_e;
                    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_errno );
                    if ( tmp_compexpr_left_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 328;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_5;
                    }
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_errno );

                    if (unlikely( tmp_mvar_value_3 == NULL ))
                    {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
                    }

                    if ( tmp_mvar_value_3 == NULL )
                    {
                        Py_DECREF( tmp_compexpr_left_4 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "errno" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 328;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_5;
                    }

                    tmp_source_name_2 = tmp_mvar_value_3;
                    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ENOENT );
                    if ( tmp_compexpr_right_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_compexpr_left_4 );

                        exception_lineno = 328;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_5;
                    }
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    Py_DECREF( tmp_compexpr_left_4 );
                    Py_DECREF( tmp_compexpr_right_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 328;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_5;
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
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_mvar_value_4;
                        PyObject *tmp_args_element_name_4;
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

                        if (unlikely( tmp_mvar_value_4 == NULL ))
                        {
                            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
                        }

                        if ( tmp_mvar_value_4 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLError" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 329;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_5;
                        }

                        tmp_called_name_3 = tmp_mvar_value_4;
                        CHECK_OBJECT( var_e );
                        tmp_args_element_name_4 = var_e;
                        frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = 329;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_4 };
                            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                        }

                        if ( tmp_raise_type_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 329;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_5;
                        }
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 329;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_5;
                    }
                    branch_no_5:;
                }
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 330;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame) frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_11_ssl_wrap_socket );
                return NULL;
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

                Py_XDECREF( var_e );
                var_e = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_3;
                exception_value = exception_keeper_value_3;
                exception_tb = exception_keeper_tb_3;
                exception_lineno = exception_keeper_lineno_3;

                goto try_except_handler_3;
                // End of try:
                goto branch_end_4;
                branch_no_4:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 321;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame) frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
                branch_end_4:;
            }
            branch_end_3:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_11_ssl_wrap_socket );
        return NULL;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        try_end_1:;
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_3;
            PyObject *tmp_attribute_name_1;
            CHECK_OBJECT( par_ssl_context );
            tmp_compexpr_left_5 = par_ssl_context;
            tmp_compexpr_right_5 = Py_None;
            tmp_and_left_value_1 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_context );
            tmp_source_name_3 = var_context;
            tmp_attribute_name_1 = const_str_plain_load_default_certs;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_3, tmp_attribute_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_6 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_6 = tmp_and_left_value_1;
            and_end_1:;
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
                PyObject *tmp_called_instance_2;
                PyObject *tmp_call_result_2;
                CHECK_OBJECT( var_context );
                tmp_called_instance_2 = var_context;
                frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = 334;
                tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load_default_certs );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 334;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_6:;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_3;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_5;
        int tmp_truth_name_4;
        CHECK_OBJECT( par_keyfile );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_keyfile );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_key_password );
        tmp_compexpr_left_6 = par_key_password;
        tmp_compexpr_right_6 = Py_None;
        tmp_and_left_value_3 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__is_key_file_encrypted );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__is_key_file_encrypted );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_is_key_file_encrypted" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 339;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        CHECK_OBJECT( par_keyfile );
        tmp_args_element_name_5 = par_keyfile;
        frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = 339;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 339;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_condition_result_7 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_7 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 340;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_6;
            frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = 340;
            tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple, 0 ) );

            if ( tmp_raise_type_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_3;
            exception_lineno = 340;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_5;
        CHECK_OBJECT( par_certfile );
        tmp_truth_name_5 = CHECK_IF_TRUE( par_certfile );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( par_key_password );
            tmp_compexpr_left_7 = par_key_password;
            tmp_compexpr_right_7 = Py_None;
            tmp_condition_result_9 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_instance_3;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                CHECK_OBJECT( var_context );
                tmp_called_instance_3 = var_context;
                CHECK_OBJECT( par_certfile );
                tmp_args_element_name_6 = par_certfile;
                CHECK_OBJECT( par_keyfile );
                tmp_args_element_name_7 = par_keyfile;
                frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = 344;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_call_result_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_load_cert_chain, call_args );
                }

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 344;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            goto branch_end_9;
            branch_no_9:;
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_call_result_5;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_args_element_name_10;
                CHECK_OBJECT( var_context );
                tmp_called_instance_4 = var_context;
                CHECK_OBJECT( par_certfile );
                tmp_args_element_name_8 = par_certfile;
                CHECK_OBJECT( par_keyfile );
                tmp_args_element_name_9 = par_keyfile;
                CHECK_OBJECT( par_key_password );
                tmp_args_element_name_10 = par_key_password;
                frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = 346;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
                    tmp_call_result_5 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_4, const_str_plain_load_cert_chain, call_args );
                }

                if ( tmp_call_result_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 346;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_5 );
            }
            branch_end_9:;
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_mvar_value_8;
        int tmp_truth_name_6;
        CHECK_OBJECT( par_server_hostname );
        tmp_compexpr_left_8 = par_server_hostname;
        tmp_compexpr_right_8 = Py_None;
        tmp_and_left_value_4 = ( tmp_compexpr_left_8 != tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_4 == 1 )
        {
            goto and_right_4;
        }
        else
        {
            goto and_left_4;
        }
        and_right_4:;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_is_ipaddress );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_ipaddress );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_ipaddress" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 352;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_7;
        CHECK_OBJECT( par_server_hostname );
        tmp_args_element_name_11 = par_server_hostname;
        frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 352;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 352;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_value_2 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_or_left_value_2 = tmp_and_left_value_4;
        and_end_4:;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_IS_SECURETRANSPORT );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IS_SECURETRANSPORT );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IS_SECURETRANSPORT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 353;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_6 = CHECK_IF_TRUE( tmp_mvar_value_8 );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_10 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_10 = tmp_or_left_value_2;
        or_end_2:;
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
            nuitka_bool tmp_condition_result_11;
            int tmp_and_left_truth_5;
            nuitka_bool tmp_and_left_value_5;
            nuitka_bool tmp_and_right_value_5;
            PyObject *tmp_mvar_value_9;
            int tmp_truth_name_7;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HAS_SNI );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HAS_SNI" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 354;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_truth_name_7 = CHECK_IF_TRUE( tmp_mvar_value_9 );
            if ( tmp_truth_name_7 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_5 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_5 == 1 )
            {
                goto and_right_5;
            }
            else
            {
                goto and_left_5;
            }
            and_right_5:;
            CHECK_OBJECT( par_server_hostname );
            tmp_compexpr_left_9 = par_server_hostname;
            tmp_compexpr_right_9 = Py_None;
            tmp_and_right_value_5 = ( tmp_compexpr_left_9 != tmp_compexpr_right_9 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_11 = tmp_and_right_value_5;
            goto and_end_5;
            and_left_5:;
            tmp_condition_result_11 = tmp_and_left_value_5;
            and_end_5:;
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
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_4;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                CHECK_OBJECT( var_context );
                tmp_source_name_4 = var_context;
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_wrap_socket );
                if ( tmp_called_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 355;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_sock );
                tmp_tuple_element_2 = par_sock;
                tmp_args_name_2 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
                tmp_dict_key_2 = const_str_plain_server_hostname;
                CHECK_OBJECT( par_server_hostname );
                tmp_dict_value_2 = par_server_hostname;
                tmp_kw_name_2 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = 355;
                tmp_return_value = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 355;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_11:;
        }
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_mvar_value_11;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 357;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_10;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_warn );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 357;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_12 = const_str_digest_1f7b5ce5a77b16d07a45e4d29e803bbc;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning );
            }

            if ( tmp_mvar_value_11 == NULL )
            {
                Py_DECREF( tmp_called_name_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SNIMissingWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 365;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_13 = tmp_mvar_value_11;
            frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = 357;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 357;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        branch_no_10:;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_14;
        CHECK_OBJECT( var_context );
        tmp_called_instance_5 = var_context;
        CHECK_OBJECT( par_sock );
        tmp_args_element_name_14 = par_sock;
        frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_wrap_socket, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_358bef4eb00a000110b6d7bc076f3c2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_358bef4eb00a000110b6d7bc076f3c2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_358bef4eb00a000110b6d7bc076f3c2f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_358bef4eb00a000110b6d7bc076f3c2f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_358bef4eb00a000110b6d7bc076f3c2f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_358bef4eb00a000110b6d7bc076f3c2f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_358bef4eb00a000110b6d7bc076f3c2f,
        type_description_1,
        par_sock,
        par_keyfile,
        par_certfile,
        par_cert_reqs,
        par_ca_certs,
        par_server_hostname,
        par_ssl_version,
        par_ciphers,
        par_ssl_context,
        par_ca_cert_dir,
        par_key_password,
        var_context,
        var_e
    );


    // Release cached frame.
    if ( frame_358bef4eb00a000110b6d7bc076f3c2f == cache_frame_358bef4eb00a000110b6d7bc076f3c2f )
    {
        Py_DECREF( frame_358bef4eb00a000110b6d7bc076f3c2f );
    }
    cache_frame_358bef4eb00a000110b6d7bc076f3c2f = NULL;

    assertFrameObject( frame_358bef4eb00a000110b6d7bc076f3c2f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_11_ssl_wrap_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_reqs );
    Py_DECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_certs );
    Py_DECREF( par_ca_certs );
    par_ca_certs = NULL;

    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_version );
    Py_DECREF( par_ssl_version );
    par_ssl_version = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_context );
    Py_DECREF( par_ssl_context );
    par_ssl_context = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_cert_dir );
    Py_DECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    CHECK_OBJECT( (PyObject *)par_key_password );
    Py_DECREF( par_key_password );
    par_key_password = NULL;

    CHECK_OBJECT( (PyObject *)var_context );
    Py_DECREF( var_context );
    var_context = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_reqs );
    Py_DECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_certs );
    Py_DECREF( par_ca_certs );
    par_ca_certs = NULL;

    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_version );
    Py_DECREF( par_ssl_version );
    par_ssl_version = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_context );
    Py_DECREF( par_ssl_context );
    par_ssl_context = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_cert_dir );
    Py_DECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    CHECK_OBJECT( (PyObject *)par_key_password );
    Py_DECREF( par_key_password );
    par_key_password = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_11_ssl_wrap_socket );
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


static PyObject *impl_urllib3$util$ssl_$$$function_12_is_ipaddress( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hostname = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_e68818d670f9b79128955921e70e6066;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e68818d670f9b79128955921e70e6066 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e68818d670f9b79128955921e70e6066, codeobj_e68818d670f9b79128955921e70e6066, module_urllib3$util$ssl_, sizeof(void *) );
    frame_e68818d670f9b79128955921e70e6066 = cache_frame_e68818d670f9b79128955921e70e6066;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e68818d670f9b79128955921e70e6066 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e68818d670f9b79128955921e70e6066 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_six );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 378;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY3 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 378;
            type_description_1 = "o";
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
        CHECK_OBJECT( par_hostname );
        tmp_isinstance_inst_1 = par_hostname;
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "o";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_hostname );
            tmp_called_instance_1 = par_hostname;
            frame_e68818d670f9b79128955921e70e6066->m_frame.f_lineno = 380;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 380;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_hostname;
                assert( old != NULL );
                par_hostname = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__IP_ADDRESS_REGEX );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__IP_ADDRESS_REGEX );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_IP_ADDRESS_REGEX" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 381;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_hostname );
        tmp_args_element_name_1 = par_hostname;
        frame_e68818d670f9b79128955921e70e6066->m_frame.f_lineno = 381;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_match, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 381;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_return_value = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? Py_True : Py_False;
        Py_DECREF( tmp_compexpr_left_1 );
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e68818d670f9b79128955921e70e6066 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e68818d670f9b79128955921e70e6066 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e68818d670f9b79128955921e70e6066 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e68818d670f9b79128955921e70e6066, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e68818d670f9b79128955921e70e6066->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e68818d670f9b79128955921e70e6066, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e68818d670f9b79128955921e70e6066,
        type_description_1,
        par_hostname
    );


    // Release cached frame.
    if ( frame_e68818d670f9b79128955921e70e6066 == cache_frame_e68818d670f9b79128955921e70e6066 )
    {
        Py_DECREF( frame_e68818d670f9b79128955921e70e6066 );
    }
    cache_frame_e68818d670f9b79128955921e70e6066 = NULL;

    assertFrameObject( frame_e68818d670f9b79128955921e70e6066 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_12_is_ipaddress );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_hostname );
    Py_DECREF( par_hostname );
    par_hostname = NULL;

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

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_12_is_ipaddress );
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


static PyObject *impl_urllib3$util$ssl_$$$function_13__is_key_file_encrypted( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key_file = python_pars[ 0 ];
    PyObject *var_f = NULL;
    PyObject *var_line = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_27de0af775b3126c6c3eefa8f5d5b198;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_27de0af775b3126c6c3eefa8f5d5b198 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_27de0af775b3126c6c3eefa8f5d5b198, codeobj_27de0af775b3126c6c3eefa8f5d5b198, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_27de0af775b3126c6c3eefa8f5d5b198 = cache_frame_27de0af775b3126c6c3eefa8f5d5b198;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_27de0af775b3126c6c3eefa8f5d5b198 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_27de0af775b3126c6c3eefa8f5d5b198 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT( par_key_file );
        tmp_open_filename_1 = par_key_file;
        tmp_open_mode_1 = const_str_plain_r;
        tmp_assign_source_1 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_1 = tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___enter__ );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_27de0af775b3126c6c3eefa8f5d5b198->m_frame.f_lineno = 386;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___exit__ );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_with_1__enter );
        tmp_assign_source_5 = tmp_with_1__enter;
        assert( var_f == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_f = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_f );
        tmp_iter_arg_1 = var_f;
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                exception_lineno = 387;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_8;
            Py_INCREF( var_line );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_plain_ENCRYPTED;
        CHECK_OBJECT( var_line );
        tmp_compexpr_right_1 = var_line;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_5;
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto try_return_handler_3;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto try_end_2;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_27de0af775b3126c6c3eefa8f5d5b198, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_27de0af775b3126c6c3eefa8f5d5b198, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooo";
            goto try_except_handler_6;
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
            nuitka_bool tmp_assign_source_9;
            tmp_assign_source_9 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_9;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_2 = tmp_with_1__exit;
            tmp_args_element_name_1 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_2 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_3 = EXC_TRACEBACK(PyThreadState_GET());
            frame_27de0af775b3126c6c3eefa8f5d5b198->m_frame.f_lineno = 386;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 386;
                type_description_1 = "ooo";
                goto try_except_handler_6;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 386;
                type_description_1 = "ooo";
                goto try_except_handler_6;
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
                exception_lineno = 386;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_27de0af775b3126c6c3eefa8f5d5b198->m_frame) frame_27de0af775b3126c6c3eefa8f5d5b198->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto try_except_handler_6;
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 386;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_27de0af775b3126c6c3eefa8f5d5b198->m_frame) frame_27de0af775b3126c6c3eefa8f5d5b198->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_6;
        branch_end_2:;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_13__is_key_file_encrypted );
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_3:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( tmp_with_1__exit );
        tmp_called_name_3 = tmp_with_1__exit;
        frame_27de0af775b3126c6c3eefa8f5d5b198->m_frame.f_lineno = 386;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_4 = tmp_with_1__exit;
            frame_27de0af775b3126c6c3eefa8f5d5b198->m_frame.f_lineno = 386;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_4 );
                Py_XDECREF( exception_keeper_value_4 );
                Py_XDECREF( exception_keeper_tb_4 );

                exception_lineno = 386;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_4:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    {
        nuitka_bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_with_1__indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_5 = tmp_with_1__exit;
            frame_27de0af775b3126c6c3eefa8f5d5b198->m_frame.f_lineno = 386;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 386;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_5:;
    }
    goto try_end_5;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_27de0af775b3126c6c3eefa8f5d5b198 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_27de0af775b3126c6c3eefa8f5d5b198 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_27de0af775b3126c6c3eefa8f5d5b198 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_27de0af775b3126c6c3eefa8f5d5b198, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_27de0af775b3126c6c3eefa8f5d5b198->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_27de0af775b3126c6c3eefa8f5d5b198, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_27de0af775b3126c6c3eefa8f5d5b198,
        type_description_1,
        par_key_file,
        var_f,
        var_line
    );


    // Release cached frame.
    if ( frame_27de0af775b3126c6c3eefa8f5d5b198 == cache_frame_27de0af775b3126c6c3eefa8f5d5b198 )
    {
        Py_DECREF( frame_27de0af775b3126c6c3eefa8f5d5b198 );
    }
    cache_frame_27de0af775b3126c6c3eefa8f5d5b198 = NULL;

    assertFrameObject( frame_27de0af775b3126c6c3eefa8f5d5b198 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_13__is_key_file_encrypted );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_key_file );
    Py_DECREF( par_key_file );
    par_key_file = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key_file );
    Py_DECREF( par_key_file );
    par_key_file = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_13__is_key_file_encrypted );
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



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_10_create_urllib3_context( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_10_create_urllib3_context,
        const_str_plain_create_urllib3_context,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ecef3a7e9fe772765b99a8639f742375,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_c6e5c4394838f24a74fcd724137f89e0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_11_ssl_wrap_socket( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_11_ssl_wrap_socket,
        const_str_plain_ssl_wrap_socket,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_358bef4eb00a000110b6d7bc076f3c2f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_d003c9c097edbd2a450c14deecbcfd2e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_12_is_ipaddress(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_12_is_ipaddress,
        const_str_plain_is_ipaddress,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e68818d670f9b79128955921e70e6066,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_7433ea5e9bf8137907952033c6cfa210,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_13__is_key_file_encrypted(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_13__is_key_file_encrypted,
        const_str_plain__is_key_file_encrypted,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_27de0af775b3126c6c3eefa8f5d5b198,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_11208532747ea36cadee31118e841464,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_1__const_compare_digest_backport(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_1__const_compare_digest_backport,
        const_str_plain__const_compare_digest_backport,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_892b25b4731ac07bbc7d770217521d6b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_2___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_6ffcf66c5c876dcb3dc480220c734062,
#endif
        codeobj_49552c6df3c60581db1488a67dfb3d5a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_3_load_cert_chain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_3_load_cert_chain,
        const_str_plain_load_cert_chain,
#if PYTHON_VERSION >= 300
        const_str_digest_69e25692dfd1b01029aea21de378705a,
#endif
        codeobj_bba503c85b689b1b5051004c667e823b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_4_load_verify_locations( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_4_load_verify_locations,
        const_str_plain_load_verify_locations,
#if PYTHON_VERSION >= 300
        const_str_digest_f2ba34680fb338cc7c2e32fdb7c1301a,
#endif
        codeobj_7196113aa15fa2fc3b3be5e283819878,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_5_set_ciphers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_5_set_ciphers,
        const_str_plain_set_ciphers,
#if PYTHON_VERSION >= 300
        const_str_digest_1e4f35ebb0482ef8f0f24ba4e0927107,
#endif
        codeobj_cc8b154b6f000ff9f8ba39285dfd0f07,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_6_wrap_socket( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_6_wrap_socket,
        const_str_plain_wrap_socket,
#if PYTHON_VERSION >= 300
        const_str_digest_90dcfb0c5b2e395585c44f2c6f8db8bf,
#endif
        codeobj_853ccb0feb90a811158cd704d10c9bf8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_7_assert_fingerprint(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_7_assert_fingerprint,
        const_str_plain_assert_fingerprint,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_66630531ce860ac7b4a165d1ceffa908,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_935dace93363545d379a5e2ed3994f38,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_8_resolve_cert_reqs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_8_resolve_cert_reqs,
        const_str_plain_resolve_cert_reqs,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_22712747fd4141c24aa69c1be8ce8d48,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_873f89c91a6f1965f5902998a695e3d7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_9_resolve_ssl_version(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_9_resolve_ssl_version,
        const_str_plain_resolve_ssl_version,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b1e4bb9ac98c34657b0d21c79cb856ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$ssl_ =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.ssl_",
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

MOD_INIT_DECL( urllib3$util$ssl_ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$ssl_ );
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
    puts("urllib3.util.ssl_: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.ssl_: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.ssl_: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$ssl_" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$ssl_ = Py_InitModule4(
        "urllib3.util.ssl_",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$util$ssl_ = PyModule_Create( &mdef_urllib3$util$ssl_ );
#endif

    moduledict_urllib3$util$ssl_ = MODULE_DICT( module_urllib3$util$ssl_ );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_urllib3$util$ssl_,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$ssl_,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$ssl_,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$ssl_,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$util$ssl_ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_6efba4feba5d3ac1fc26ca13b212a604, module_urllib3$util$ssl_ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4536222e4d7a4f8dac7984c5dc3542d1;
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
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_preserved_type_5;
    PyObject *exception_preserved_value_5;
    PyTracebackObject *exception_preserved_tb_5;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_urllib3$util$ssl__116 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_9b2e219286b979493792e42f47fb970c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_9b2e219286b979493792e42f47fb970c_2 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_4536222e4d7a4f8dac7984c5dc3542d1 = MAKE_MODULE_FRAME( codeobj_4536222e4d7a4f8dac7984c5dc3542d1, module_urllib3$util$ssl_ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4536222e4d7a4f8dac7984c5dc3542d1 );
    assert( Py_REFCNT( frame_4536222e4d7a4f8dac7984c5dc3542d1 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_errno;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_errno, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_warnings;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_hmac;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hmac, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_re;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_binascii;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple;
        tmp_level_name_5 = const_int_0;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 7;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        assert( !(tmp_assign_source_9 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_hexlify );
        assert( !(tmp_assign_source_10 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hexlify, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_unhexlify );
        assert( !(tmp_assign_source_11 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_unhexlify, tmp_assign_source_11 );
    }
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_hashlib;
        tmp_globals_name_6 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple;
        tmp_level_name_6 = const_int_0;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 8;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_md5 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_md5, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_sha1 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha1, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_sha256 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha256, tmp_assign_source_15 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_exceptions;
        tmp_globals_name_7 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple;
        tmp_level_name_7 = const_int_pos_2;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 10;
        tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_urllib3$util$ssl_,
                const_str_plain_SSLError,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_SSLError );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_urllib3$util$ssl_,
                const_str_plain_InsecurePlatformWarning,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_InsecurePlatformWarning );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_urllib3$util$ssl_,
                const_str_plain_SNIMissingWarning,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_SNIMissingWarning );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning, tmp_assign_source_19 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_packages;
        tmp_globals_name_8 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_six_tuple;
        tmp_level_name_8 = const_int_pos_2;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 11;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_urllib3$util$ssl_,
                const_str_plain_six,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_six );
        }

        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_digest_7bff4188ca4a22a0aa0a123e748246d2;
        tmp_globals_name_9 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_abnf_regexp_tuple;
        tmp_level_name_9 = const_int_pos_2;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 12;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_urllib3$util$ssl_,
                const_str_plain_abnf_regexp,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_abnf_regexp );
        }

        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_abnf_regexp, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = Py_None;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = Py_False;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = Py_False;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_IS_PYOPENSSL, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = Py_False;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_IS_SECURETRANSPORT, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_5;
        tmp_dict_key_1 = const_int_pos_32;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_md5 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_md5 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "md5" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = tmp_mvar_value_3;
        tmp_assign_source_26 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_int_pos_40;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha1 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sha1 );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assign_source_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sha1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = tmp_mvar_value_4;
        tmp_res = PyDict_SetItem( tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_int_pos_64;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha256 );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sha256 );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assign_source_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sha256" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = tmp_mvar_value_5;
        tmp_res = PyDict_SetItem( tmp_assign_source_26, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_1__const_compare_digest_backport(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hmac );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hmac );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hmac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }

        tmp_getattr_target_1 = tmp_mvar_value_6;
        tmp_getattr_attr_1 = const_str_plain_compare_digest;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport );
        }

        CHECK_OBJECT( tmp_mvar_value_7 );
        tmp_getattr_default_1 = tmp_mvar_value_7;
        tmp_assign_source_28 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_8;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compile );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_str_digest_b84a0b30b5a2d1387bf77d4f514973de;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_abnf_regexp );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abnf_regexp );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abnf_regexp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_9;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_IPv4_RE );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_abnf_regexp );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abnf_regexp );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_right_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abnf_regexp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_10;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_IPv6_RE );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_abnf_regexp );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abnf_regexp );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_right_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abnf_regexp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_11;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_IPv6_ADDRZ_RFC4007_RE );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
        tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__IP_ADDRESS_REGEX, tmp_assign_source_29 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain_ssl;
        tmp_globals_name_10 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = Py_None;
        tmp_level_name_10 = const_int_0;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 55;
        tmp_assign_source_30 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_ssl;
        tmp_globals_name_11 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_wrap_socket_str_plain_CERT_REQUIRED_tuple;
        tmp_level_name_11 = const_int_0;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 56;
        tmp_assign_source_31 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;

            goto try_except_handler_3;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_12 = tmp_import_from_4__module;
        tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_wrap_socket );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_wrap_socket, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_13 = tmp_import_from_4__module;
        tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_CERT_REQUIRED );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_CERT_REQUIRED, tmp_assign_source_33 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_plain_ssl;
        tmp_globals_name_12 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_str_plain_HAS_SNI_tuple;
        tmp_level_name_12 = const_int_0;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 57;
        tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
        if ( tmp_import_name_from_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto try_except_handler_3;
        }
        tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_HAS_SNI );
        Py_DECREF( tmp_import_name_from_14 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_34 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_4536222e4d7a4f8dac7984c5dc3542d1, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_4536222e4d7a4f8dac7984c5dc3542d1, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_5;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_5;
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
            exception_lineno = 54;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame) frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_5;
        branch_no_1:;
    }
    goto try_end_5;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = const_str_plain_ssl;
        tmp_globals_name_13 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_13 = Py_None;
        tmp_fromlist_name_13 = const_tuple_str_plain_PROTOCOL_TLS_tuple;
        tmp_level_name_13 = const_int_0;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 62;
        tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
        if ( tmp_import_name_from_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;

            goto try_except_handler_6;
        }
        tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_PROTOCOL_TLS );
        Py_DECREF( tmp_import_name_from_15 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );
        }

        CHECK_OBJECT( tmp_mvar_value_12 );
        tmp_assign_source_36 = tmp_mvar_value_12;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23, tmp_assign_source_36 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_4536222e4d7a4f8dac7984c5dc3542d1, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_4536222e4d7a4f8dac7984c5dc3542d1, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_7;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_import_name_from_16;
            PyObject *tmp_name_name_14;
            PyObject *tmp_globals_name_14;
            PyObject *tmp_locals_name_14;
            PyObject *tmp_fromlist_name_14;
            PyObject *tmp_level_name_14;
            tmp_name_name_14 = const_str_plain_ssl;
            tmp_globals_name_14 = (PyObject *)moduledict_urllib3$util$ssl_;
            tmp_locals_name_14 = Py_None;
            tmp_fromlist_name_14 = const_tuple_str_plain_PROTOCOL_SSLv23_tuple;
            tmp_level_name_14 = const_int_0;
            frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 66;
            tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
            if ( tmp_import_name_from_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_8;
            }
            tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_PROTOCOL_SSLv23 );
            Py_DECREF( tmp_import_name_from_16 );
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_8;
            }
            UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS, tmp_assign_source_37 );
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_mvar_value_13;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );
            }

            CHECK_OBJECT( tmp_mvar_value_13 );
            tmp_assign_source_38 = tmp_mvar_value_13;
            UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23, tmp_assign_source_38 );
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
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

        if ( exception_keeper_tb_7 == NULL )
        {
            exception_keeper_tb_7 = MAKE_TRACEBACK( frame_4536222e4d7a4f8dac7984c5dc3542d1, exception_keeper_lineno_7 );
        }
        else if ( exception_keeper_lineno_7 != 0 )
        {
            exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_4536222e4d7a4f8dac7984c5dc3542d1, exception_keeper_lineno_7 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
        PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
        PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_3 = PyExc_ImportError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;

                goto try_except_handler_9;
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
                PyObject *tmp_assign_source_39;
                tmp_assign_source_39 = const_int_pos_2;
                UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23, tmp_assign_source_39 );
            }
            {
                PyObject *tmp_assign_source_40;
                tmp_assign_source_40 = const_int_pos_2;
                UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS, tmp_assign_source_40 );
            }
            goto branch_end_3;
            branch_no_3:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 65;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame) frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = exception_tb->tb_lineno;

            goto try_except_handler_9;
            branch_end_3:;
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_7;
        // End of try:
        try_end_8:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        goto try_end_7;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
        return MOD_RETURN_VALUE( NULL );
        // End of try:
        try_end_7:;
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 61;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame) frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_7;
        branch_end_2:;
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_name_15;
        PyObject *tmp_locals_name_15;
        PyObject *tmp_fromlist_name_15;
        PyObject *tmp_level_name_15;
        tmp_name_name_15 = const_str_plain_ssl;
        tmp_globals_name_15 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_15 = Py_None;
        tmp_fromlist_name_15 = const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple;
        tmp_level_name_15 = const_int_0;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 73;
        tmp_assign_source_41 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto try_except_handler_10;
        }
        assert( tmp_import_from_5__module == NULL );
        tmp_import_from_5__module = tmp_assign_source_41;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_17 = tmp_import_from_5__module;
        tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_OP_NO_SSLv2 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_18 = tmp_import_from_5__module;
        tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_OP_NO_SSLv3 );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_19 = tmp_import_from_5__module;
        tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_OP_NO_COMPRESSION );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION, tmp_assign_source_44 );
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_10;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    goto try_end_11;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_4 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_4 );
    exception_preserved_value_4 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_4 );
    exception_preserved_tb_4 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_4 );

    if ( exception_keeper_tb_11 == NULL )
    {
        exception_keeper_tb_11 = MAKE_TRACEBACK( frame_4536222e4d7a4f8dac7984c5dc3542d1, exception_keeper_lineno_11 );
    }
    else if ( exception_keeper_lineno_11 != 0 )
    {
        exception_keeper_tb_11 = ADD_TRACEBACK( exception_keeper_tb_11, frame_4536222e4d7a4f8dac7984c5dc3542d1, exception_keeper_lineno_11 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11 );
    PyException_SetTraceback( exception_keeper_value_11, (PyObject *)exception_keeper_tb_11 );
    PUBLISH_EXCEPTION( &exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;

            goto try_except_handler_12;
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
            PyObject *tmp_assign_source_45;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = const_tuple_int_pos_16777216_int_pos_33554432_tuple;
            tmp_assign_source_45 = MAKE_ITERATOR( tmp_iter_arg_1 );
            assert( !(tmp_assign_source_45 == NULL) );
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_45;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_46 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
            if ( tmp_assign_source_46 == NULL )
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



                exception_lineno = 75;
                goto try_except_handler_14;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_46;
        }
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_47 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
            if ( tmp_assign_source_47 == NULL )
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



                exception_lineno = 75;
                goto try_except_handler_14;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_47;
        }
        goto try_end_12;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        try_end_12:;
        goto try_end_13;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_12;
        // End of try:
        try_end_13:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_48;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_48 = tmp_tuple_unpack_1__element_1;
            UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2, tmp_assign_source_48 );
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_49;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_49 = tmp_tuple_unpack_1__element_2;
            UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3, tmp_assign_source_49 );
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = const_int_pos_131072;
            UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION, tmp_assign_source_50 );
        }
        goto branch_end_4;
        branch_no_4:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 72;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame) frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_12;
        branch_end_4:;
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4 );
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4 );
    goto try_end_11;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_11:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        tmp_called_instance_1 = const_str_chr_58;
        tmp_call_arg_element_1 = LIST_COPY( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list );
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = { tmp_call_arg_element_1 };
            tmp_assign_source_51 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_join, call_args );
        }

        Py_DECREF( tmp_call_arg_element_1 );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS, tmp_assign_source_51 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_name_16;
        PyObject *tmp_globals_name_16;
        PyObject *tmp_locals_name_16;
        PyObject *tmp_fromlist_name_16;
        PyObject *tmp_level_name_16;
        tmp_name_name_16 = const_str_plain_ssl;
        tmp_globals_name_16 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_16 = Py_None;
        tmp_fromlist_name_16 = const_tuple_str_plain_SSLContext_tuple;
        tmp_level_name_16 = const_int_0;
        frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 114;
        tmp_import_name_from_20 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
        if ( tmp_import_name_from_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_15;
        }
        tmp_assign_source_52 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_SSLContext );
        Py_DECREF( tmp_import_name_from_20 );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_52 );
    }
    goto try_end_15;
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

    // Preserve existing published exception.
    exception_preserved_type_5 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_5 );
    exception_preserved_value_5 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_5 );
    exception_preserved_tb_5 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_5 );

    if ( exception_keeper_tb_15 == NULL )
    {
        exception_keeper_tb_15 = MAKE_TRACEBACK( frame_4536222e4d7a4f8dac7984c5dc3542d1, exception_keeper_lineno_15 );
    }
    else if ( exception_keeper_lineno_15 != 0 )
    {
        exception_keeper_tb_15 = ADD_TRACEBACK( exception_keeper_tb_15, frame_4536222e4d7a4f8dac7984c5dc3542d1, exception_keeper_lineno_15 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15 );
    PyException_SetTraceback( exception_keeper_value_15, (PyObject *)exception_keeper_tb_15 );
    PUBLISH_EXCEPTION( &exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_5 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;

            goto try_except_handler_16;
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
            PyObject *tmp_assign_source_53;
            tmp_assign_source_53 = PyDict_New();
            assert( tmp_class_creation_1__class_decl_dict == NULL );
            tmp_class_creation_1__class_decl_dict = tmp_assign_source_53;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_metaclass_name_1;
            nuitka_bool tmp_condition_result_6;
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


                exception_lineno = 116;

                goto try_except_handler_17;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
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


                exception_lineno = 116;

                goto try_except_handler_17;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
            assert( tmp_metaclass_name_1 != NULL );
            Py_INCREF( tmp_metaclass_name_1 );
            condexpr_end_1:;
            tmp_bases_name_1 = const_tuple_type_object_tuple;
            tmp_assign_source_54 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
            Py_DECREF( tmp_metaclass_name_1 );
            if ( tmp_assign_source_54 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;

                goto try_except_handler_17;
            }
            assert( tmp_class_creation_1__metaclass == NULL );
            tmp_class_creation_1__metaclass = tmp_assign_source_54;
        }
        {
            nuitka_bool tmp_condition_result_7;
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


                exception_lineno = 116;

                goto try_except_handler_17;
            }
            tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
            tmp_dictdel_key = const_str_plain_metaclass;
            tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;

                goto try_except_handler_17;
            }
            branch_no_6:;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_5 = tmp_class_creation_1__metaclass;
            tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
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
                PyObject *tmp_assign_source_55;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_6;
                PyObject *tmp_args_name_1;
                PyObject *tmp_kw_name_1;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_source_name_6 = tmp_class_creation_1__metaclass;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 116;

                    goto try_except_handler_17;
                }
                tmp_args_name_1 = const_tuple_str_plain_SSLContext_tuple_type_object_tuple_tuple;
                CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
                tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
                frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 116;
                tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_2 );
                if ( tmp_assign_source_55 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 116;

                    goto try_except_handler_17;
                }
                assert( tmp_class_creation_1__prepared == NULL );
                tmp_class_creation_1__prepared = tmp_assign_source_55;
            }
            {
                nuitka_bool tmp_condition_result_9;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_source_name_7;
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_source_name_7 = tmp_class_creation_1__prepared;
                tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___getitem__ );
                tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 116;

                    goto try_except_handler_17;
                }
                tmp_condition_result_9 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_raise_value_1;
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_right_name_2;
                    PyObject *tmp_tuple_element_2;
                    PyObject *tmp_getattr_target_2;
                    PyObject *tmp_getattr_attr_2;
                    PyObject *tmp_getattr_default_2;
                    PyObject *tmp_source_name_8;
                    PyObject *tmp_type_arg_1;
                    tmp_raise_type_1 = PyExc_TypeError;
                    tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                    CHECK_OBJECT( tmp_class_creation_1__metaclass );
                    tmp_getattr_target_2 = tmp_class_creation_1__metaclass;
                    tmp_getattr_attr_2 = const_str_plain___name__;
                    tmp_getattr_default_2 = const_str_angle_metaclass;
                    tmp_tuple_element_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                    if ( tmp_tuple_element_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 116;

                        goto try_except_handler_17;
                    }
                    tmp_right_name_2 = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
                    CHECK_OBJECT( tmp_class_creation_1__prepared );
                    tmp_type_arg_1 = tmp_class_creation_1__prepared;
                    tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_1 );
                    assert( !(tmp_source_name_8 == NULL) );
                    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
                    Py_DECREF( tmp_source_name_8 );
                    if ( tmp_tuple_element_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_right_name_2 );

                        exception_lineno = 116;

                        goto try_except_handler_17;
                    }
                    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_2 );
                    tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                    Py_DECREF( tmp_right_name_2 );
                    if ( tmp_raise_value_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 116;

                        goto try_except_handler_17;
                    }
                    exception_type = tmp_raise_type_1;
                    Py_INCREF( tmp_raise_type_1 );
                    exception_value = tmp_raise_value_1;
                    exception_lineno = 116;
                    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                    goto try_except_handler_17;
                }
                branch_no_8:;
            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_assign_source_56;
                tmp_assign_source_56 = PyDict_New();
                assert( tmp_class_creation_1__prepared == NULL );
                tmp_class_creation_1__prepared = tmp_assign_source_56;
            }
            branch_end_7:;
        }
        {
            PyObject *tmp_assign_source_57;
            {
                PyObject *tmp_set_locals_1;
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_set_locals_1 = tmp_class_creation_1__prepared;
                locals_urllib3$util$ssl__116 = tmp_set_locals_1;
                Py_INCREF( tmp_set_locals_1 );
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = const_str_digest_6efba4feba5d3ac1fc26ca13b212a604;
            tmp_res = PyObject_SetItem( locals_urllib3$util$ssl__116, const_str_plain___module__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;

                goto try_except_handler_19;
            }
            tmp_dictset_value = const_str_plain_SSLContext;
            tmp_res = PyObject_SetItem( locals_urllib3$util$ssl__116, const_str_plain___qualname__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;

                goto try_except_handler_19;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_9b2e219286b979493792e42f47fb970c_2, codeobj_9b2e219286b979493792e42f47fb970c, module_urllib3$util$ssl_, sizeof(void *) );
            frame_9b2e219286b979493792e42f47fb970c_2 = cache_frame_9b2e219286b979493792e42f47fb970c_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_9b2e219286b979493792e42f47fb970c_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_9b2e219286b979493792e42f47fb970c_2 ) == 2 ); // Frame stack

            // Framed code:
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_2___init__(  );



            tmp_res = PyObject_SetItem( locals_urllib3$util$ssl__116, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_3_load_cert_chain(  );



            tmp_res = PyObject_SetItem( locals_urllib3$util$ssl__116, const_str_plain_load_cert_chain, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            {
                PyObject *tmp_defaults_1;
                tmp_defaults_1 = const_tuple_none_none_tuple;
                Py_INCREF( tmp_defaults_1 );
                tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_4_load_verify_locations( tmp_defaults_1 );



                tmp_res = PyObject_SetItem( locals_urllib3$util$ssl__116, const_str_plain_load_verify_locations, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 132;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }
            }
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_5_set_ciphers(  );



            tmp_res = PyObject_SetItem( locals_urllib3$util$ssl__116, const_str_plain_set_ciphers, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            {
                PyObject *tmp_defaults_2;
                tmp_defaults_2 = const_tuple_none_false_tuple;
                Py_INCREF( tmp_defaults_2 );
                tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_6_wrap_socket( tmp_defaults_2 );



                tmp_res = PyObject_SetItem( locals_urllib3$util$ssl__116, const_str_plain_wrap_socket, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 141;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }
            }

#if 0
            RESTORE_FRAME_EXCEPTION( frame_9b2e219286b979493792e42f47fb970c_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_9b2e219286b979493792e42f47fb970c_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_9b2e219286b979493792e42f47fb970c_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_9b2e219286b979493792e42f47fb970c_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_9b2e219286b979493792e42f47fb970c_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_9b2e219286b979493792e42f47fb970c_2,
                type_description_2,
                outline_0_var___class__
            );


            // Release cached frame.
            if ( frame_9b2e219286b979493792e42f47fb970c_2 == cache_frame_9b2e219286b979493792e42f47fb970c_2 )
            {
                Py_DECREF( frame_9b2e219286b979493792e42f47fb970c_2 );
            }
            cache_frame_9b2e219286b979493792e42f47fb970c_2 = NULL;

            assertFrameObject( frame_9b2e219286b979493792e42f47fb970c_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;

            goto try_except_handler_19;
            skip_nested_handling_1:;
            {
                PyObject *tmp_assign_source_58;
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_kw_name_2;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_called_name_3 = tmp_class_creation_1__metaclass;
                tmp_tuple_element_3 = const_str_plain_SSLContext;
                tmp_args_name_2 = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
                tmp_tuple_element_3 = const_tuple_type_object_tuple;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
                tmp_tuple_element_3 = locals_urllib3$util$ssl__116;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
                tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
                frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = 116;
                tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_args_name_2 );
                if ( tmp_assign_source_58 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 116;

                    goto try_except_handler_19;
                }
                assert( outline_0_var___class__ == NULL );
                outline_0_var___class__ = tmp_assign_source_58;
            }
            CHECK_OBJECT( outline_0_var___class__ );
            tmp_assign_source_57 = outline_0_var___class__;
            Py_INCREF( tmp_assign_source_57 );
            goto try_return_handler_19;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_19:;
            Py_DECREF( locals_urllib3$util$ssl__116 );
            locals_urllib3$util$ssl__116 = NULL;
            goto try_return_handler_18;
            // Exception handler code:
            try_except_handler_19:;
            exception_keeper_type_16 = exception_type;
            exception_keeper_value_16 = exception_value;
            exception_keeper_tb_16 = exception_tb;
            exception_keeper_lineno_16 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF( locals_urllib3$util$ssl__116 );
            locals_urllib3$util$ssl__116 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_16;
            exception_value = exception_keeper_value_16;
            exception_tb = exception_keeper_tb_16;
            exception_lineno = exception_keeper_lineno_16;

            goto try_except_handler_18;
            // End of try:
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_18:;
            CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
            Py_DECREF( outline_0_var___class__ );
            outline_0_var___class__ = NULL;

            goto outline_result_1;
            // Exception handler code:
            try_except_handler_18:;
            exception_keeper_type_17 = exception_type;
            exception_keeper_value_17 = exception_value;
            exception_keeper_tb_17 = exception_tb;
            exception_keeper_lineno_17 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_17;
            exception_value = exception_keeper_value_17;
            exception_tb = exception_keeper_tb_17;
            exception_lineno = exception_keeper_lineno_17;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
            return MOD_RETURN_VALUE( NULL );
            outline_exception_1:;
            exception_lineno = 116;
            goto try_except_handler_17;
            outline_result_1:;
            UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_57 );
        }
        goto try_end_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
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
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_16;
        // End of try:
        try_end_16:;
        CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
        Py_DECREF( tmp_class_creation_1__class_decl_dict );
        tmp_class_creation_1__class_decl_dict = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
        Py_DECREF( tmp_class_creation_1__metaclass );
        tmp_class_creation_1__metaclass = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
        Py_DECREF( tmp_class_creation_1__prepared );
        tmp_class_creation_1__prepared = NULL;

        goto branch_end_5;
        branch_no_5:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 113;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame) frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_16;
        branch_end_5:;
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5 );
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5 );
    goto try_end_15;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_15:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4536222e4d7a4f8dac7984c5dc3542d1 );
#endif
    popFrameStack();

    assertFrameObject( frame_4536222e4d7a4f8dac7984c5dc3542d1 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4536222e4d7a4f8dac7984c5dc3542d1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4536222e4d7a4f8dac7984c5dc3542d1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4536222e4d7a4f8dac7984c5dc3542d1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4536222e4d7a4f8dac7984c5dc3542d1, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_7_assert_fingerprint(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_assert_fingerprint, tmp_assign_source_59 );
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_8_resolve_cert_reqs(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs, tmp_assign_source_60 );
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_9_resolve_ssl_version(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version, tmp_assign_source_61 );
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_62 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_10_create_urllib3_context( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_create_urllib3_context, tmp_assign_source_62 );
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_none_none_none_none_none_none_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_63 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_11_ssl_wrap_socket( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket, tmp_assign_source_63 );
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_12_is_ipaddress(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_is_ipaddress, tmp_assign_source_64 );
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_13__is_key_file_encrypted(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__is_key_file_encrypted, tmp_assign_source_65 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_urllib3$util$ssl_ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
