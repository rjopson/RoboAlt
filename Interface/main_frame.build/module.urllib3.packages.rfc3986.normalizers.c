/* Generated code for Python module 'urllib3.packages.rfc3986.normalizers'
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

/* The "_module_urllib3$packages$rfc3986$normalizers" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$packages$rfc3986$normalizers;
PyDictObject *moduledict_urllib3$packages$rfc3986$normalizers;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_percent_encodings;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_path_tuple;
extern PyObject *const_str_plain_userinfo;
extern PyObject *const_str_plain_authority;
extern PyObject *const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_normalize_fragment;
static PyObject *const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_tuple;
extern PyObject *const_str_plain_encode;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_128;
static PyObject *const_tuple_str_plain_fragment_tuple;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_fragment;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_str_chr_37;
static PyObject *const_tuple_b30764eacb12ba410a3eb708c19304de_tuple;
static PyObject *const_tuple_str_plain_password_tuple;
extern PyObject *const_str_plain_normalize_query;
extern PyObject *const_str_plain_misc;
extern PyObject *const_str_plain_NON_PCT_ENCODED;
extern PyObject *const_str_plain_normalize_scheme;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_normalize_authority;
extern PyObject *const_str_plain_encode_component;
static PyObject *const_str_digest_072c30bdc55ec13b16b7f68a45207902;
static PyObject *const_tuple_tuple_57485aa9c6c9162c3ed375306f387210_tuple_tuple;
extern PyObject *const_str_plain_s;
static PyObject *const_tuple_str_digest_916547f65466291787e29f21c5534722_tuple;
static PyObject *const_str_plain_percent_25;
static PyObject *const_str_digest_d4d95c263c86f9556159c4b2ca5d6780;
extern PyObject *const_str_plain_host;
static PyObject *const_str_digest_e22144dc8975e431305d0a0acf83a852;
extern PyObject *const_str_plain_urlquote;
extern PyObject *const_bytes_chr_37;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_insert;
extern PyObject *const_str_plain_query;
extern PyObject *const_str_digest_916547f65466291787e29f21c5534722;
extern PyObject *const_tuple_str_chr_37_tuple;
extern PyObject *const_str_chr_64;
static PyObject *const_str_digest_da59e110c573f74cffc5afe18b2155ed;
static PyObject *const_str_digest_174ea5fedcbcd8f06f066fdc9a11c67a;
extern PyObject *const_str_plain_uri_bytes;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_bytes_chr_37_tuple;
extern PyObject *const_str_plain_username;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_64e6e71b48f3648314343cd5b634a184;
extern PyObject *const_tuple_str_plain_misc_tuple;
extern PyObject *const_str_plain_byte_ord;
extern PyObject *const_str_plain_endswith;
static PyObject *const_tuple_89a32d03ebeff2a60f5e8ab4f2b8c3ae_tuple;
static PyObject *const_tuple_str_plain_scheme_tuple;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_match;
extern PyObject *const_str_plain_percent;
static PyObject *const_tuple_e015478a59c2e32fb873414f4c5a615f_tuple;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_False;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_tuple_str_plain_compat_tuple;
extern PyObject *const_str_plain_output;
extern PyObject *const_str_plain_encoding;
static PyObject *const_str_digest_e0e328be7bc4e589a9feb2a79ca72187;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain_IPv6_MATCHER;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_digest_e27b6ef15927f9b1198e4f0794474007;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
static PyObject *const_str_digest_98cc5995dc694e801b18fec0bf5bd9a9;
static PyObject *const_tuple_str_plain_s_str_plain_matches_str_plain_m_tuple;
static PyObject *const_str_plain_normalize_password;
extern PyObject *const_str_plain_is_percent_encoded;
static PyObject *const_str_digest_a85d0c9e92cc3ceb26a20ddd164fa8d7;
static PyObject *const_str_digest_bc508aae9b6271fd4d4841879bb446ba;
extern PyObject *const_str_plain_segment;
static PyObject *const_str_digest_021d34f58f50a6f27d3a4387deb25d29;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_0ad6fb0916ebe6a012b0d9bf923f572e;
extern PyObject *const_str_plain_segments;
static PyObject *const_tuple_str_plain_host_str_plain_percent_str_plain_percent_25_tuple;
extern PyObject *const_str_digest_7b79a8950d64155a442741f6cc8c809b;
extern PyObject *const_str_plain_normalize_path;
extern PyObject *const_int_pos_4;
static PyObject *const_tuple_str_plain_username_tuple;
static PyObject *const_str_plain_normalize_username;
static PyObject *const_str_digest_4c04de773fb3196faec969b90f1fc524;
extern PyObject *const_str_plain_matches;
static PyObject *const_str_digest_efc221ddf28609fdd9a3ea252d60d12d;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_password;
extern PyObject *const_str_chr_47;
static PyObject *const_str_plain_normalize_percent_characters;
extern PyObject *const_str_plain_to_str;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_findall;
extern PyObject *const_str_plain_port;
static PyObject *const_tuple_int_0_str_empty_tuple;
extern PyObject *const_tuple_str_chr_47_tuple;
static PyObject *const_str_plain_uri_component;
extern PyObject *const_str_plain_PERCENT_MATCHER;
static PyObject *const_str_plain_encoded_uri;
static PyObject *const_tuple_b22264c680ee2b52b0a2a149cd4ae470_tuple;
extern PyObject *const_str_plain_byte;
static PyObject *const_str_digest_2a4966b774eee3370fad9df0e173f1fc;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_57485aa9c6c9162c3ed375306f387210_tuple;
extern PyObject *const_str_digest_2a2a30684f90933364df3e75c05835c8;
extern PyObject *const_str_plain_isupper;
extern PyObject *const_str_plain_compat;
extern PyObject *const_str_plain_to_bytes;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_find;
static PyObject *const_str_digest_5f745e1970c79190a05daa9bac9b131c;
static PyObject *const_tuple_str_plain_query_tuple;
extern PyObject *const_str_plain_normalize_host;
static PyObject *const_str_plain_remove_dot_segments;
static PyObject *const_str_digest_81780f49a37ec1dc101cc1cc0e464f31;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_tuple = PyTuple_New( 1 );
    const_str_digest_d4d95c263c86f9556159c4b2ca5d6780 = UNSTREAM_STRING_ASCII( &constant_bin[ 879211 ], 3, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_tuple, 0, const_str_digest_d4d95c263c86f9556159c4b2ca5d6780 ); Py_INCREF( const_str_digest_d4d95c263c86f9556159c4b2ca5d6780 );
    const_tuple_str_plain_fragment_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fragment_tuple, 0, const_str_plain_fragment ); Py_INCREF( const_str_plain_fragment );
    const_tuple_b30764eacb12ba410a3eb708c19304de_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_b30764eacb12ba410a3eb708c19304de_tuple, 0, const_str_chr_37 ); Py_INCREF( const_str_chr_37 );
    PyTuple_SET_ITEM( const_tuple_b30764eacb12ba410a3eb708c19304de_tuple, 1, const_str_digest_d4d95c263c86f9556159c4b2ca5d6780 ); Py_INCREF( const_str_digest_d4d95c263c86f9556159c4b2ca5d6780 );
    PyTuple_SET_ITEM( const_tuple_b30764eacb12ba410a3eb708c19304de_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_str_plain_password_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_password_tuple, 0, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_digest_072c30bdc55ec13b16b7f68a45207902 = UNSTREAM_STRING_ASCII( &constant_bin[ 5880726 ], 31, 0 );
    const_tuple_tuple_57485aa9c6c9162c3ed375306f387210_tuple_tuple = PyTuple_New( 1 );
    const_tuple_57485aa9c6c9162c3ed375306f387210_tuple = PyTuple_New( 2 );
    const_str_digest_5f745e1970c79190a05daa9bac9b131c = UNSTREAM_STRING_ASCII( &constant_bin[ 737422 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_57485aa9c6c9162c3ed375306f387210_tuple, 0, const_str_digest_5f745e1970c79190a05daa9bac9b131c ); Py_INCREF( const_str_digest_5f745e1970c79190a05daa9bac9b131c );
    const_str_digest_64e6e71b48f3648314343cd5b634a184 = UNSTREAM_STRING_ASCII( &constant_bin[ 2875877 ], 3, 0 );
    PyTuple_SET_ITEM( const_tuple_57485aa9c6c9162c3ed375306f387210_tuple, 1, const_str_digest_64e6e71b48f3648314343cd5b634a184 ); Py_INCREF( const_str_digest_64e6e71b48f3648314343cd5b634a184 );
    PyTuple_SET_ITEM( const_tuple_tuple_57485aa9c6c9162c3ed375306f387210_tuple_tuple, 0, const_tuple_57485aa9c6c9162c3ed375306f387210_tuple ); Py_INCREF( const_tuple_57485aa9c6c9162c3ed375306f387210_tuple );
    const_tuple_str_digest_916547f65466291787e29f21c5534722_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_916547f65466291787e29f21c5534722_tuple, 0, const_str_digest_916547f65466291787e29f21c5534722 ); Py_INCREF( const_str_digest_916547f65466291787e29f21c5534722 );
    const_str_plain_percent_25 = UNSTREAM_STRING_ASCII( &constant_bin[ 5880757 ], 10, 1 );
    const_str_digest_e22144dc8975e431305d0a0acf83a852 = UNSTREAM_STRING_ASCII( &constant_bin[ 5880767 ], 45, 0 );
    const_str_digest_da59e110c573f74cffc5afe18b2155ed = UNSTREAM_STRING_ASCII( &constant_bin[ 5880812 ], 24, 0 );
    const_str_digest_174ea5fedcbcd8f06f066fdc9a11c67a = UNSTREAM_STRING_ASCII( &constant_bin[ 5880836 ], 27, 0 );
    const_tuple_89a32d03ebeff2a60f5e8ab4f2b8c3ae_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_89a32d03ebeff2a60f5e8ab4f2b8c3ae_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_89a32d03ebeff2a60f5e8ab4f2b8c3ae_tuple, 1, const_str_plain_segments ); Py_INCREF( const_str_plain_segments );
    PyTuple_SET_ITEM( const_tuple_89a32d03ebeff2a60f5e8ab4f2b8c3ae_tuple, 2, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    PyTuple_SET_ITEM( const_tuple_89a32d03ebeff2a60f5e8ab4f2b8c3ae_tuple, 3, const_str_plain_segment ); Py_INCREF( const_str_plain_segment );
    const_tuple_str_plain_scheme_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_scheme_tuple, 0, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    const_tuple_e015478a59c2e32fb873414f4c5a615f_tuple = PyTuple_New( 9 );
    const_str_plain_uri_component = UNSTREAM_STRING_ASCII( &constant_bin[ 5880863 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_e015478a59c2e32fb873414f4c5a615f_tuple, 0, const_str_plain_uri_component ); Py_INCREF( const_str_plain_uri_component );
    PyTuple_SET_ITEM( const_tuple_e015478a59c2e32fb873414f4c5a615f_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_e015478a59c2e32fb873414f4c5a615f_tuple, 2, const_str_plain_percent_encodings ); Py_INCREF( const_str_plain_percent_encodings );
    PyTuple_SET_ITEM( const_tuple_e015478a59c2e32fb873414f4c5a615f_tuple, 3, const_str_plain_uri_bytes ); Py_INCREF( const_str_plain_uri_bytes );
    PyTuple_SET_ITEM( const_tuple_e015478a59c2e32fb873414f4c5a615f_tuple, 4, const_str_plain_is_percent_encoded ); Py_INCREF( const_str_plain_is_percent_encoded );
    const_str_plain_encoded_uri = UNSTREAM_STRING_ASCII( &constant_bin[ 5880876 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_e015478a59c2e32fb873414f4c5a615f_tuple, 5, const_str_plain_encoded_uri ); Py_INCREF( const_str_plain_encoded_uri );
    PyTuple_SET_ITEM( const_tuple_e015478a59c2e32fb873414f4c5a615f_tuple, 6, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_e015478a59c2e32fb873414f4c5a615f_tuple, 7, const_str_plain_byte ); Py_INCREF( const_str_plain_byte );
    PyTuple_SET_ITEM( const_tuple_e015478a59c2e32fb873414f4c5a615f_tuple, 8, const_str_plain_byte_ord ); Py_INCREF( const_str_plain_byte_ord );
    const_str_digest_e0e328be7bc4e589a9feb2a79ca72187 = UNSTREAM_STRING_ASCII( &constant_bin[ 5880887 ], 47, 0 );
    const_str_digest_e27b6ef15927f9b1198e4f0794474007 = UNSTREAM_STRING_ASCII( &constant_bin[ 5880934 ], 46, 0 );
    const_str_digest_98cc5995dc694e801b18fec0bf5bd9a9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5880980 ], 39, 0 );
    const_tuple_str_plain_s_str_plain_matches_str_plain_m_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_matches_str_plain_m_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_matches_str_plain_m_tuple, 1, const_str_plain_matches ); Py_INCREF( const_str_plain_matches );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_matches_str_plain_m_tuple, 2, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_str_plain_normalize_password = UNSTREAM_STRING_ASCII( &constant_bin[ 5881019 ], 18, 1 );
    const_str_digest_a85d0c9e92cc3ceb26a20ddd164fa8d7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5881037 ], 129, 0 );
    const_str_digest_bc508aae9b6271fd4d4841879bb446ba = UNSTREAM_STRING_ASCII( &constant_bin[ 5881166 ], 55, 0 );
    const_str_digest_021d34f58f50a6f27d3a4387deb25d29 = UNSTREAM_STRING_ASCII( &constant_bin[ 5880775 ], 36, 0 );
    const_str_digest_0ad6fb0916ebe6a012b0d9bf923f572e = UNSTREAM_STRING_ASCII( &constant_bin[ 5881221 ], 26, 0 );
    const_tuple_str_plain_host_str_plain_percent_str_plain_percent_25_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_host_str_plain_percent_str_plain_percent_25_tuple, 0, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_str_plain_host_str_plain_percent_str_plain_percent_25_tuple, 1, const_str_plain_percent ); Py_INCREF( const_str_plain_percent );
    PyTuple_SET_ITEM( const_tuple_str_plain_host_str_plain_percent_str_plain_percent_25_tuple, 2, const_str_plain_percent_25 ); Py_INCREF( const_str_plain_percent_25 );
    const_tuple_str_plain_username_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_username_tuple, 0, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    const_str_plain_normalize_username = UNSTREAM_STRING_ASCII( &constant_bin[ 5881247 ], 18, 1 );
    const_str_digest_4c04de773fb3196faec969b90f1fc524 = UNSTREAM_STRING_ASCII( &constant_bin[ 5881265 ], 30, 0 );
    const_str_digest_efc221ddf28609fdd9a3ea252d60d12d = UNSTREAM_STRING_ASCII( &constant_bin[ 5881295 ], 60, 0 );
    const_str_plain_normalize_percent_characters = UNSTREAM_STRING_ASCII( &constant_bin[ 5881355 ], 28, 1 );
    const_tuple_int_0_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_str_empty_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_tuple_b22264c680ee2b52b0a2a149cd4ae470_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b22264c680ee2b52b0a2a149cd4ae470_tuple, 0, const_str_plain_authority ); Py_INCREF( const_str_plain_authority );
    PyTuple_SET_ITEM( const_tuple_b22264c680ee2b52b0a2a149cd4ae470_tuple, 1, const_str_plain_userinfo ); Py_INCREF( const_str_plain_userinfo );
    PyTuple_SET_ITEM( const_tuple_b22264c680ee2b52b0a2a149cd4ae470_tuple, 2, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_b22264c680ee2b52b0a2a149cd4ae470_tuple, 3, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_b22264c680ee2b52b0a2a149cd4ae470_tuple, 4, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_digest_2a4966b774eee3370fad9df0e173f1fc = UNSTREAM_STRING_ASCII( &constant_bin[ 5881383 ], 85, 0 );
    const_tuple_str_plain_query_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_query_tuple, 0, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    const_str_plain_remove_dot_segments = UNSTREAM_STRING_ASCII( &constant_bin[ 5881468 ], 19, 1 );
    const_str_digest_81780f49a37ec1dc101cc1cc0e464f31 = UNSTREAM_STRING_ASCII( &constant_bin[ 5881487 ], 41, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$packages$rfc3986$normalizers( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c9a064b35bc1a98ef734148d72c1a073;
static PyCodeObject *codeobj_47b377e9ded39e5c141da8477b56a9ef;
static PyCodeObject *codeobj_4b43bdf4f808151f5ebbb1b2c973b852;
static PyCodeObject *codeobj_5326adf0bd067a3d8be456b1a517047e;
static PyCodeObject *codeobj_9132d5c25153f023fbbc69aebf174437;
static PyCodeObject *codeobj_4c13d9c21956a70479ab89c8ba9ee6aa;
static PyCodeObject *codeobj_d59d9eeb148b0882b84d1dc6c2cd18de;
static PyCodeObject *codeobj_f74932f4abfd1985b14dc4f2b9c66b30;
static PyCodeObject *codeobj_abf2c611fe26be30d2a7c1232e41d999;
static PyCodeObject *codeobj_d9b7a716eeebc2a7d06e640450796e10;
static PyCodeObject *codeobj_8124cbb9a79e37388121bd45f90f9a33;
static PyCodeObject *codeobj_2dc04b68d70a1f5fbea9161fa01939c5;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_98cc5995dc694e801b18fec0bf5bd9a9 );
    codeobj_c9a064b35bc1a98ef734148d72c1a073 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e22144dc8975e431305d0a0acf83a852, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_47b377e9ded39e5c141da8477b56a9ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode_component, 142, const_tuple_e015478a59c2e32fb873414f4c5a615f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4b43bdf4f808151f5ebbb1b2c973b852 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize_authority, 27, const_tuple_b22264c680ee2b52b0a2a149cd4ae470_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5326adf0bd067a3d8be456b1a517047e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize_fragment, 86, const_tuple_str_plain_fragment_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9132d5c25153f023fbbc69aebf174437 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize_host, 50, const_tuple_str_plain_host_str_plain_percent_str_plain_percent_25_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4c13d9c21956a70479ab89c8ba9ee6aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize_password, 45, const_tuple_str_plain_password_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d59d9eeb148b0882b84d1dc6c2cd18de = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize_path, 70, const_tuple_str_plain_path_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f74932f4abfd1985b14dc4f2b9c66b30 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize_percent_characters, 96, const_tuple_str_plain_s_str_plain_matches_str_plain_m_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_abf2c611fe26be30d2a7c1232e41d999 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize_query, 79, const_tuple_str_plain_query_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9b7a716eeebc2a7d06e640450796e10 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize_scheme, 22, const_tuple_str_plain_scheme_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8124cbb9a79e37388121bd45f90f9a33 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize_username, 40, const_tuple_str_plain_username_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2dc04b68d70a1f5fbea9161fa01939c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_remove_dot_segments, 108, const_tuple_89a32d03ebeff2a60f5e8ab4f2b8c3ae_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_10_remove_dot_segments(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_11_encode_component(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_1_normalize_scheme(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_2_normalize_authority(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_3_normalize_username(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_4_normalize_password(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_5_normalize_host(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_6_normalize_path(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_7_normalize_query(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_8_normalize_fragment(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_9_normalize_percent_characters(  );


// The module function definitions.
static PyObject *impl_urllib3$packages$rfc3986$normalizers$$$function_1_normalize_scheme( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_scheme = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d9b7a716eeebc2a7d06e640450796e10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d9b7a716eeebc2a7d06e640450796e10 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9b7a716eeebc2a7d06e640450796e10, codeobj_d9b7a716eeebc2a7d06e640450796e10, module_urllib3$packages$rfc3986$normalizers, sizeof(void *) );
    frame_d9b7a716eeebc2a7d06e640450796e10 = cache_frame_d9b7a716eeebc2a7d06e640450796e10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9b7a716eeebc2a7d06e640450796e10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9b7a716eeebc2a7d06e640450796e10 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_scheme );
        tmp_called_instance_1 = par_scheme;
        frame_d9b7a716eeebc2a7d06e640450796e10->m_frame.f_lineno = 24;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9b7a716eeebc2a7d06e640450796e10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9b7a716eeebc2a7d06e640450796e10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9b7a716eeebc2a7d06e640450796e10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9b7a716eeebc2a7d06e640450796e10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9b7a716eeebc2a7d06e640450796e10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9b7a716eeebc2a7d06e640450796e10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9b7a716eeebc2a7d06e640450796e10,
        type_description_1,
        par_scheme
    );


    // Release cached frame.
    if ( frame_d9b7a716eeebc2a7d06e640450796e10 == cache_frame_d9b7a716eeebc2a7d06e640450796e10 )
    {
        Py_DECREF( frame_d9b7a716eeebc2a7d06e640450796e10 );
    }
    cache_frame_d9b7a716eeebc2a7d06e640450796e10 = NULL;

    assertFrameObject( frame_d9b7a716eeebc2a7d06e640450796e10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_1_normalize_scheme );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_scheme );
    Py_DECREF( par_scheme );
    par_scheme = NULL;

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

    CHECK_OBJECT( (PyObject *)par_scheme );
    Py_DECREF( par_scheme );
    par_scheme = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_1_normalize_scheme );
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


static PyObject *impl_urllib3$packages$rfc3986$normalizers$$$function_2_normalize_authority( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_authority = python_pars[ 0 ];
    PyObject *var_userinfo = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4b43bdf4f808151f5ebbb1b2c973b852;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4b43bdf4f808151f5ebbb1b2c973b852 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4b43bdf4f808151f5ebbb1b2c973b852, codeobj_4b43bdf4f808151f5ebbb1b2c973b852, module_urllib3$packages$rfc3986$normalizers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4b43bdf4f808151f5ebbb1b2c973b852 = cache_frame_4b43bdf4f808151f5ebbb1b2c973b852;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4b43bdf4f808151f5ebbb1b2c973b852 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4b43bdf4f808151f5ebbb1b2c973b852 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_authority );
        tmp_iter_arg_1 = par_authority;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
        if ( tmp_assign_source_2 == NULL )
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
            exception_lineno = 29;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
        if ( tmp_assign_source_3 == NULL )
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
            exception_lineno = 29;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
        if ( tmp_assign_source_4 == NULL )
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
            exception_lineno = 29;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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
                    exception_lineno = 29;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooo";
            exception_lineno = 29;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert( var_userinfo == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_userinfo = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_host == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_host = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert( var_port == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_port = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_str_empty;
        assert( var_result == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_result = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_userinfo );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_userinfo );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_9;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_right_name_2;
            tmp_left_name_1 = const_str_empty;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_percent_characters );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalize_percent_characters );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalize_percent_characters" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 32;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( var_userinfo );
            tmp_args_element_name_1 = var_userinfo;
            frame_4b43bdf4f808151f5ebbb1b2c973b852->m_frame.f_lineno = 32;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_str_chr_64;
            tmp_right_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_9 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_result;
                assert( old != NULL );
                var_result = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_host );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_host );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_result );
            tmp_left_name_3 = var_result;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_host );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalize_host );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalize_host" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 34;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_host );
            tmp_args_element_name_2 = var_host;
            frame_4b43bdf4f808151f5ebbb1b2c973b852->m_frame.f_lineno = 34;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_10 = tmp_left_name_3;
            var_result = tmp_assign_source_10;

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_3;
        CHECK_OBJECT( var_port );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_port );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            if ( var_result == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 36;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_4 = var_result;
            tmp_left_name_5 = const_str_chr_58;
            CHECK_OBJECT( var_port );
            tmp_right_name_5 = var_port;
            tmp_right_name_4 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_11 = tmp_left_name_4;
            var_result = tmp_assign_source_11;

        }
        branch_no_3:;
    }
    if ( var_result == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b43bdf4f808151f5ebbb1b2c973b852 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b43bdf4f808151f5ebbb1b2c973b852 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b43bdf4f808151f5ebbb1b2c973b852 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4b43bdf4f808151f5ebbb1b2c973b852, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4b43bdf4f808151f5ebbb1b2c973b852->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4b43bdf4f808151f5ebbb1b2c973b852, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4b43bdf4f808151f5ebbb1b2c973b852,
        type_description_1,
        par_authority,
        var_userinfo,
        var_host,
        var_port,
        var_result
    );


    // Release cached frame.
    if ( frame_4b43bdf4f808151f5ebbb1b2c973b852 == cache_frame_4b43bdf4f808151f5ebbb1b2c973b852 )
    {
        Py_DECREF( frame_4b43bdf4f808151f5ebbb1b2c973b852 );
    }
    cache_frame_4b43bdf4f808151f5ebbb1b2c973b852 = NULL;

    assertFrameObject( frame_4b43bdf4f808151f5ebbb1b2c973b852 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_2_normalize_authority );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_authority );
    Py_DECREF( par_authority );
    par_authority = NULL;

    CHECK_OBJECT( (PyObject *)var_userinfo );
    Py_DECREF( var_userinfo );
    var_userinfo = NULL;

    CHECK_OBJECT( (PyObject *)var_host );
    Py_DECREF( var_host );
    var_host = NULL;

    CHECK_OBJECT( (PyObject *)var_port );
    Py_DECREF( var_port );
    var_port = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_authority );
    Py_DECREF( par_authority );
    par_authority = NULL;

    Py_XDECREF( var_userinfo );
    var_userinfo = NULL;

    Py_XDECREF( var_host );
    var_host = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_2_normalize_authority );
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


static PyObject *impl_urllib3$packages$rfc3986$normalizers$$$function_3_normalize_username( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_username = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8124cbb9a79e37388121bd45f90f9a33;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8124cbb9a79e37388121bd45f90f9a33 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8124cbb9a79e37388121bd45f90f9a33, codeobj_8124cbb9a79e37388121bd45f90f9a33, module_urllib3$packages$rfc3986$normalizers, sizeof(void *) );
    frame_8124cbb9a79e37388121bd45f90f9a33 = cache_frame_8124cbb9a79e37388121bd45f90f9a33;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8124cbb9a79e37388121bd45f90f9a33 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8124cbb9a79e37388121bd45f90f9a33 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_compat );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compat );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compat" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_username );
        tmp_args_element_name_1 = par_username;
        frame_8124cbb9a79e37388121bd45f90f9a33->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_urlquote, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8124cbb9a79e37388121bd45f90f9a33 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8124cbb9a79e37388121bd45f90f9a33 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8124cbb9a79e37388121bd45f90f9a33 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8124cbb9a79e37388121bd45f90f9a33, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8124cbb9a79e37388121bd45f90f9a33->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8124cbb9a79e37388121bd45f90f9a33, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8124cbb9a79e37388121bd45f90f9a33,
        type_description_1,
        par_username
    );


    // Release cached frame.
    if ( frame_8124cbb9a79e37388121bd45f90f9a33 == cache_frame_8124cbb9a79e37388121bd45f90f9a33 )
    {
        Py_DECREF( frame_8124cbb9a79e37388121bd45f90f9a33 );
    }
    cache_frame_8124cbb9a79e37388121bd45f90f9a33 = NULL;

    assertFrameObject( frame_8124cbb9a79e37388121bd45f90f9a33 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_3_normalize_username );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_username );
    Py_DECREF( par_username );
    par_username = NULL;

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

    CHECK_OBJECT( (PyObject *)par_username );
    Py_DECREF( par_username );
    par_username = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_3_normalize_username );
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


static PyObject *impl_urllib3$packages$rfc3986$normalizers$$$function_4_normalize_password( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_password = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4c13d9c21956a70479ab89c8ba9ee6aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4c13d9c21956a70479ab89c8ba9ee6aa = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4c13d9c21956a70479ab89c8ba9ee6aa, codeobj_4c13d9c21956a70479ab89c8ba9ee6aa, module_urllib3$packages$rfc3986$normalizers, sizeof(void *) );
    frame_4c13d9c21956a70479ab89c8ba9ee6aa = cache_frame_4c13d9c21956a70479ab89c8ba9ee6aa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4c13d9c21956a70479ab89c8ba9ee6aa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4c13d9c21956a70479ab89c8ba9ee6aa ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_compat );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compat );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compat" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_password );
        tmp_args_element_name_1 = par_password;
        frame_4c13d9c21956a70479ab89c8ba9ee6aa->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_urlquote, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c13d9c21956a70479ab89c8ba9ee6aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c13d9c21956a70479ab89c8ba9ee6aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c13d9c21956a70479ab89c8ba9ee6aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4c13d9c21956a70479ab89c8ba9ee6aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4c13d9c21956a70479ab89c8ba9ee6aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4c13d9c21956a70479ab89c8ba9ee6aa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4c13d9c21956a70479ab89c8ba9ee6aa,
        type_description_1,
        par_password
    );


    // Release cached frame.
    if ( frame_4c13d9c21956a70479ab89c8ba9ee6aa == cache_frame_4c13d9c21956a70479ab89c8ba9ee6aa )
    {
        Py_DECREF( frame_4c13d9c21956a70479ab89c8ba9ee6aa );
    }
    cache_frame_4c13d9c21956a70479ab89c8ba9ee6aa = NULL;

    assertFrameObject( frame_4c13d9c21956a70479ab89c8ba9ee6aa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_4_normalize_password );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

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

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_4_normalize_password );
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


static PyObject *impl_urllib3$packages$rfc3986$normalizers$$$function_5_normalize_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_host = python_pars[ 0 ];
    PyObject *var_percent = NULL;
    PyObject *var_percent_25 = NULL;
    struct Nuitka_FrameObject *frame_9132d5c25153f023fbbc69aebf174437;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9132d5c25153f023fbbc69aebf174437 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9132d5c25153f023fbbc69aebf174437, codeobj_9132d5c25153f023fbbc69aebf174437, module_urllib3$packages$rfc3986$normalizers, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9132d5c25153f023fbbc69aebf174437 = cache_frame_9132d5c25153f023fbbc69aebf174437;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9132d5c25153f023fbbc69aebf174437 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9132d5c25153f023fbbc69aebf174437 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_misc );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_misc );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "misc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_IPv6_MATCHER );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_host );
        tmp_args_element_name_1 = par_host;
        frame_9132d5c25153f023fbbc69aebf174437->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_match, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 52;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( par_host );
            tmp_called_instance_2 = par_host;
            frame_9132d5c25153f023fbbc69aebf174437->m_frame.f_lineno = 53;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_find, &PyTuple_GET_ITEM( const_tuple_str_chr_37_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_percent == NULL );
            var_percent = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( var_percent );
            tmp_compexpr_left_1 = var_percent;
            tmp_compexpr_right_1 = const_int_neg_1;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_called_instance_3;
                CHECK_OBJECT( par_host );
                tmp_called_instance_3 = par_host;
                frame_9132d5c25153f023fbbc69aebf174437->m_frame.f_lineno = 55;
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_find, &PyTuple_GET_ITEM( const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_tuple, 0 ) );

                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 55;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                assert( var_percent_25 == NULL );
                var_percent_25 = tmp_assign_source_2;
            }
            {
                nuitka_bool tmp_condition_result_3;
                int tmp_or_left_truth_1;
                nuitka_bool tmp_or_left_value_1;
                nuitka_bool tmp_or_right_value_1;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                int tmp_or_left_truth_2;
                nuitka_bool tmp_or_left_value_2;
                nuitka_bool tmp_or_right_value_2;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_left_name_1;
                PyObject *tmp_len_arg_1;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( var_percent_25 );
                tmp_compexpr_left_2 = var_percent_25;
                tmp_compexpr_right_2 = const_int_neg_1;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 60;
                    type_description_1 = "ooo";
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
                CHECK_OBJECT( var_percent );
                tmp_compexpr_left_3 = var_percent;
                CHECK_OBJECT( var_percent_25 );
                tmp_compexpr_right_3 = var_percent_25;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 60;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                CHECK_OBJECT( var_percent );
                tmp_compexpr_left_4 = var_percent;
                CHECK_OBJECT( var_percent_25 );
                tmp_compexpr_right_4 = var_percent_25;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 61;
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
                CHECK_OBJECT( var_percent_25 );
                tmp_compexpr_left_5 = var_percent_25;
                CHECK_OBJECT( par_host );
                tmp_len_arg_1 = par_host;
                tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
                if ( tmp_left_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 61;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_1 = const_int_pos_4;
                tmp_compexpr_right_5 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_left_name_1 );
                assert( !(tmp_compexpr_right_5 == NULL) );
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 61;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_or_right_value_2 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_or_right_value_2 = tmp_and_left_value_1;
                and_end_1:;
                tmp_or_right_value_1 = tmp_or_right_value_2;
                goto or_end_2;
                or_left_2:;
                tmp_or_right_value_1 = tmp_or_left_value_2;
                or_end_2:;
                tmp_condition_result_3 = tmp_or_right_value_1;
                goto or_end_1;
                or_left_1:;
                tmp_condition_result_3 = tmp_or_left_value_1;
                or_end_1:;
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
                    PyObject *tmp_called_instance_4;
                    CHECK_OBJECT( par_host );
                    tmp_called_instance_4 = par_host;
                    frame_9132d5c25153f023fbbc69aebf174437->m_frame.f_lineno = 62;
                    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_4, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_b30764eacb12ba410a3eb708c19304de_tuple, 0 ) );

                    if ( tmp_assign_source_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 62;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_host;
                        assert( old != NULL );
                        par_host = tmp_assign_source_3;
                        Py_DECREF( old );
                    }

                }
                branch_no_3:;
            }
            {
                PyObject *tmp_left_name_2;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_start_name_1;
                PyObject *tmp_stop_name_1;
                PyObject *tmp_step_name_1;
                PyObject *tmp_right_name_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_start_name_2;
                PyObject *tmp_stop_name_2;
                PyObject *tmp_step_name_2;
                CHECK_OBJECT( par_host );
                tmp_subscribed_name_1 = par_host;
                tmp_start_name_1 = Py_None;
                CHECK_OBJECT( var_percent );
                tmp_stop_name_1 = var_percent;
                tmp_step_name_1 = Py_None;
                tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                assert( !(tmp_subscript_name_1 == NULL) );
                tmp_called_instance_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscript_name_1 );
                if ( tmp_called_instance_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_9132d5c25153f023fbbc69aebf174437->m_frame.f_lineno = 65;
                tmp_left_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_lower );
                Py_DECREF( tmp_called_instance_5 );
                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_host );
                tmp_subscribed_name_2 = par_host;
                CHECK_OBJECT( var_percent );
                tmp_start_name_2 = var_percent;
                tmp_stop_name_2 = Py_None;
                tmp_step_name_2 = Py_None;
                tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                assert( !(tmp_subscript_name_2 == NULL) );
                tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                Py_DECREF( tmp_subscript_name_2 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 65;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT( par_host );
        tmp_called_instance_6 = par_host;
        frame_9132d5c25153f023fbbc69aebf174437->m_frame.f_lineno = 67;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_lower );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9132d5c25153f023fbbc69aebf174437 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9132d5c25153f023fbbc69aebf174437 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9132d5c25153f023fbbc69aebf174437 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9132d5c25153f023fbbc69aebf174437, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9132d5c25153f023fbbc69aebf174437->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9132d5c25153f023fbbc69aebf174437, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9132d5c25153f023fbbc69aebf174437,
        type_description_1,
        par_host,
        var_percent,
        var_percent_25
    );


    // Release cached frame.
    if ( frame_9132d5c25153f023fbbc69aebf174437 == cache_frame_9132d5c25153f023fbbc69aebf174437 )
    {
        Py_DECREF( frame_9132d5c25153f023fbbc69aebf174437 );
    }
    cache_frame_9132d5c25153f023fbbc69aebf174437 = NULL;

    assertFrameObject( frame_9132d5c25153f023fbbc69aebf174437 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_5_normalize_host );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( var_percent );
    var_percent = NULL;

    Py_XDECREF( var_percent_25 );
    var_percent_25 = NULL;

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

    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( var_percent );
    var_percent = NULL;

    Py_XDECREF( var_percent_25 );
    var_percent_25 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_5_normalize_host );
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


static PyObject *impl_urllib3$packages$rfc3986$normalizers$$$function_6_normalize_path( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d59d9eeb148b0882b84d1dc6c2cd18de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d59d9eeb148b0882b84d1dc6c2cd18de = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d59d9eeb148b0882b84d1dc6c2cd18de, codeobj_d59d9eeb148b0882b84d1dc6c2cd18de, module_urllib3$packages$rfc3986$normalizers, sizeof(void *) );
    frame_d59d9eeb148b0882b84d1dc6c2cd18de = cache_frame_d59d9eeb148b0882b84d1dc6c2cd18de;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d59d9eeb148b0882b84d1dc6c2cd18de );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d59d9eeb148b0882b84d1dc6c2cd18de ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_path );
        tmp_operand_name_1 = par_path;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
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
        CHECK_OBJECT( par_path );
        tmp_return_value = par_path;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_percent_characters );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalize_percent_characters );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalize_percent_characters" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_1 = par_path;
        frame_d59d9eeb148b0882b84d1dc6c2cd18de->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert( old != NULL );
            par_path = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_remove_dot_segments );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_remove_dot_segments );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "remove_dot_segments" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_2 = par_path;
        frame_d59d9eeb148b0882b84d1dc6c2cd18de->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d59d9eeb148b0882b84d1dc6c2cd18de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d59d9eeb148b0882b84d1dc6c2cd18de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d59d9eeb148b0882b84d1dc6c2cd18de );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d59d9eeb148b0882b84d1dc6c2cd18de, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d59d9eeb148b0882b84d1dc6c2cd18de->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d59d9eeb148b0882b84d1dc6c2cd18de, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d59d9eeb148b0882b84d1dc6c2cd18de,
        type_description_1,
        par_path
    );


    // Release cached frame.
    if ( frame_d59d9eeb148b0882b84d1dc6c2cd18de == cache_frame_d59d9eeb148b0882b84d1dc6c2cd18de )
    {
        Py_DECREF( frame_d59d9eeb148b0882b84d1dc6c2cd18de );
    }
    cache_frame_d59d9eeb148b0882b84d1dc6c2cd18de = NULL;

    assertFrameObject( frame_d59d9eeb148b0882b84d1dc6c2cd18de );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_6_normalize_path );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

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

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_6_normalize_path );
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


static PyObject *impl_urllib3$packages$rfc3986$normalizers$$$function_7_normalize_query( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_query = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_abf2c611fe26be30d2a7c1232e41d999;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_abf2c611fe26be30d2a7c1232e41d999 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_abf2c611fe26be30d2a7c1232e41d999, codeobj_abf2c611fe26be30d2a7c1232e41d999, module_urllib3$packages$rfc3986$normalizers, sizeof(void *) );
    frame_abf2c611fe26be30d2a7c1232e41d999 = cache_frame_abf2c611fe26be30d2a7c1232e41d999;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_abf2c611fe26be30d2a7c1232e41d999 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_abf2c611fe26be30d2a7c1232e41d999 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_query );
        tmp_operand_name_1 = par_query;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
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
        CHECK_OBJECT( par_query );
        tmp_return_value = par_query;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_percent_characters );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalize_percent_characters );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalize_percent_characters" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_query );
        tmp_args_element_name_1 = par_query;
        frame_abf2c611fe26be30d2a7c1232e41d999->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abf2c611fe26be30d2a7c1232e41d999 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_abf2c611fe26be30d2a7c1232e41d999 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abf2c611fe26be30d2a7c1232e41d999 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_abf2c611fe26be30d2a7c1232e41d999, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_abf2c611fe26be30d2a7c1232e41d999->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_abf2c611fe26be30d2a7c1232e41d999, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_abf2c611fe26be30d2a7c1232e41d999,
        type_description_1,
        par_query
    );


    // Release cached frame.
    if ( frame_abf2c611fe26be30d2a7c1232e41d999 == cache_frame_abf2c611fe26be30d2a7c1232e41d999 )
    {
        Py_DECREF( frame_abf2c611fe26be30d2a7c1232e41d999 );
    }
    cache_frame_abf2c611fe26be30d2a7c1232e41d999 = NULL;

    assertFrameObject( frame_abf2c611fe26be30d2a7c1232e41d999 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_7_normalize_query );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_query );
    Py_DECREF( par_query );
    par_query = NULL;

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

    CHECK_OBJECT( (PyObject *)par_query );
    Py_DECREF( par_query );
    par_query = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_7_normalize_query );
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


static PyObject *impl_urllib3$packages$rfc3986$normalizers$$$function_8_normalize_fragment( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fragment = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_5326adf0bd067a3d8be456b1a517047e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5326adf0bd067a3d8be456b1a517047e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5326adf0bd067a3d8be456b1a517047e, codeobj_5326adf0bd067a3d8be456b1a517047e, module_urllib3$packages$rfc3986$normalizers, sizeof(void *) );
    frame_5326adf0bd067a3d8be456b1a517047e = cache_frame_5326adf0bd067a3d8be456b1a517047e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5326adf0bd067a3d8be456b1a517047e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5326adf0bd067a3d8be456b1a517047e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_fragment );
        tmp_operand_name_1 = par_fragment;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
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
        CHECK_OBJECT( par_fragment );
        tmp_return_value = par_fragment;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_percent_characters );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalize_percent_characters );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalize_percent_characters" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fragment );
        tmp_args_element_name_1 = par_fragment;
        frame_5326adf0bd067a3d8be456b1a517047e->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5326adf0bd067a3d8be456b1a517047e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5326adf0bd067a3d8be456b1a517047e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5326adf0bd067a3d8be456b1a517047e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5326adf0bd067a3d8be456b1a517047e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5326adf0bd067a3d8be456b1a517047e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5326adf0bd067a3d8be456b1a517047e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5326adf0bd067a3d8be456b1a517047e,
        type_description_1,
        par_fragment
    );


    // Release cached frame.
    if ( frame_5326adf0bd067a3d8be456b1a517047e == cache_frame_5326adf0bd067a3d8be456b1a517047e )
    {
        Py_DECREF( frame_5326adf0bd067a3d8be456b1a517047e );
    }
    cache_frame_5326adf0bd067a3d8be456b1a517047e = NULL;

    assertFrameObject( frame_5326adf0bd067a3d8be456b1a517047e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_8_normalize_fragment );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fragment );
    Py_DECREF( par_fragment );
    par_fragment = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fragment );
    Py_DECREF( par_fragment );
    par_fragment = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_8_normalize_fragment );
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


static PyObject *impl_urllib3$packages$rfc3986$normalizers$$$function_9_normalize_percent_characters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *var_matches = NULL;
    PyObject *var_m = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_f74932f4abfd1985b14dc4f2b9c66b30;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f74932f4abfd1985b14dc4f2b9c66b30 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f74932f4abfd1985b14dc4f2b9c66b30, codeobj_f74932f4abfd1985b14dc4f2b9c66b30, module_urllib3$packages$rfc3986$normalizers, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f74932f4abfd1985b14dc4f2b9c66b30 = cache_frame_f74932f4abfd1985b14dc4f2b9c66b30;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f74932f4abfd1985b14dc4f2b9c66b30 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f74932f4abfd1985b14dc4f2b9c66b30 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_PERCENT_MATCHER );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PERCENT_MATCHER );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PERCENT_MATCHER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 101;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_1 = par_s;
        frame_f74932f4abfd1985b14dc4f2b9c66b30->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_set_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_findall, call_args );
        }

        if ( tmp_set_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PySet_New( tmp_set_arg_1 );
        Py_DECREF( tmp_set_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_matches == NULL );
        var_matches = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_matches );
        tmp_iter_arg_1 = var_matches;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 102;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_4;
            Py_INCREF( var_m );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_m );
        tmp_called_instance_2 = var_m;
        frame_f74932f4abfd1985b14dc4f2b9c66b30->m_frame.f_lineno = 103;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_isupper );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_3;
            if ( par_s == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 104;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_source_name_1 = par_s;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_replace );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_m );
            tmp_args_element_name_2 = var_m;
            CHECK_OBJECT( var_m );
            tmp_called_instance_3 = var_m;
            frame_f74932f4abfd1985b14dc4f2b9c66b30->m_frame.f_lineno = 104;
            tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_upper );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 104;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_f74932f4abfd1985b14dc4f2b9c66b30->m_frame.f_lineno = 104;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = par_s;
                par_s = tmp_assign_source_5;
                Py_XDECREF( old );
            }

        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "ooo";
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

    if ( par_s == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_s;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f74932f4abfd1985b14dc4f2b9c66b30 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f74932f4abfd1985b14dc4f2b9c66b30 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f74932f4abfd1985b14dc4f2b9c66b30 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f74932f4abfd1985b14dc4f2b9c66b30, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f74932f4abfd1985b14dc4f2b9c66b30->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f74932f4abfd1985b14dc4f2b9c66b30, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f74932f4abfd1985b14dc4f2b9c66b30,
        type_description_1,
        par_s,
        var_matches,
        var_m
    );


    // Release cached frame.
    if ( frame_f74932f4abfd1985b14dc4f2b9c66b30 == cache_frame_f74932f4abfd1985b14dc4f2b9c66b30 )
    {
        Py_DECREF( frame_f74932f4abfd1985b14dc4f2b9c66b30 );
    }
    cache_frame_f74932f4abfd1985b14dc4f2b9c66b30 = NULL;

    assertFrameObject( frame_f74932f4abfd1985b14dc4f2b9c66b30 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_9_normalize_percent_characters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)var_matches );
    Py_DECREF( var_matches );
    var_matches = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_matches );
    var_matches = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_9_normalize_percent_characters );
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


static PyObject *impl_urllib3$packages$rfc3986$normalizers$$$function_10_remove_dot_segments( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *var_segments = NULL;
    PyObject *var_output = NULL;
    PyObject *var_segment = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_2dc04b68d70a1f5fbea9161fa01939c5;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2dc04b68d70a1f5fbea9161fa01939c5 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2dc04b68d70a1f5fbea9161fa01939c5, codeobj_2dc04b68d70a1f5fbea9161fa01939c5, module_urllib3$packages$rfc3986$normalizers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2dc04b68d70a1f5fbea9161fa01939c5 = cache_frame_2dc04b68d70a1f5fbea9161fa01939c5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2dc04b68d70a1f5fbea9161fa01939c5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2dc04b68d70a1f5fbea9161fa01939c5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_s );
        tmp_called_instance_1 = par_s;
        frame_2dc04b68d70a1f5fbea9161fa01939c5->m_frame.f_lineno = 114;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_47_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_segments == NULL );
        var_segments = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( var_output == NULL );
        var_output = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_segments );
        tmp_iter_arg_1 = var_segments;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
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
                exception_lineno = 117;
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
            PyObject *old = var_segment;
            var_segment = tmp_assign_source_5;
            Py_INCREF( var_segment );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_segment );
        tmp_compexpr_left_1 = var_segment;
        tmp_compexpr_right_1 = const_str_dot;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oooo";
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
        goto loop_start_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_segment );
            tmp_compexpr_left_2 = var_segment;
            tmp_compexpr_right_2 = const_str_digest_7b79a8950d64155a442741f6cc8c809b;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "oooo";
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
                PyObject *tmp_called_instance_2;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                CHECK_OBJECT( var_output );
                tmp_called_instance_2 = var_output;
                CHECK_OBJECT( var_segment );
                tmp_args_element_name_1 = var_segment;
                frame_2dc04b68d70a1f5fbea9161fa01939c5->m_frame.f_lineno = 123;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 123;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                int tmp_truth_name_1;
                CHECK_OBJECT( var_output );
                tmp_truth_name_1 = CHECK_IF_TRUE( var_output );
                assert( !(tmp_truth_name_1 == -1) );
                tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_called_instance_3;
                    PyObject *tmp_call_result_2;
                    CHECK_OBJECT( var_output );
                    tmp_called_instance_3 = var_output;
                    frame_2dc04b68d70a1f5fbea9161fa01939c5->m_frame.f_lineno = 127;
                    tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_pop );
                    if ( tmp_call_result_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 127;
                        type_description_1 = "oooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_2 );
                }
                branch_no_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_s );
        tmp_called_instance_4 = par_s;
        frame_2dc04b68d70a1f5fbea9161fa01939c5->m_frame.f_lineno = 131;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_47_tuple, 0 ) );

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
        CHECK_OBJECT( var_output );
        tmp_operand_name_1 = var_output;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        assert( !(tmp_res == -1) );
        tmp_or_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_output );
        tmp_subscribed_name_1 = var_output;
        tmp_subscript_name_1 = const_int_0;
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_subscript_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_subscript_result_1 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_result_1 );

            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_subscript_result_1 );
        tmp_and_right_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( var_output );
            tmp_called_instance_5 = var_output;
            frame_2dc04b68d70a1f5fbea9161fa01939c5->m_frame.f_lineno = 132;
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_insert, &PyTuple_GET_ITEM( const_tuple_int_0_str_empty_tuple, 0 ) );

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 132;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        int tmp_truth_name_4;
        CHECK_OBJECT( par_s );
        tmp_called_instance_6 = par_s;
        frame_2dc04b68d70a1f5fbea9161fa01939c5->m_frame.f_lineno = 136;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_endswith, &PyTuple_GET_ITEM( const_tuple_tuple_57485aa9c6c9162c3ed375306f387210_tuple_tuple, 0 ) );

        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_5 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_5 );

            exception_lineno = 136;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_5 );
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
            PyObject *tmp_called_instance_7;
            PyObject *tmp_call_result_6;
            CHECK_OBJECT( var_output );
            tmp_called_instance_7 = var_output;
            frame_2dc04b68d70a1f5fbea9161fa01939c5->m_frame.f_lineno = 137;
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_8 = const_str_chr_47;
        CHECK_OBJECT( var_output );
        tmp_args_element_name_2 = var_output;
        frame_2dc04b68d70a1f5fbea9161fa01939c5->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_join, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2dc04b68d70a1f5fbea9161fa01939c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2dc04b68d70a1f5fbea9161fa01939c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2dc04b68d70a1f5fbea9161fa01939c5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2dc04b68d70a1f5fbea9161fa01939c5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2dc04b68d70a1f5fbea9161fa01939c5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2dc04b68d70a1f5fbea9161fa01939c5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2dc04b68d70a1f5fbea9161fa01939c5,
        type_description_1,
        par_s,
        var_segments,
        var_output,
        var_segment
    );


    // Release cached frame.
    if ( frame_2dc04b68d70a1f5fbea9161fa01939c5 == cache_frame_2dc04b68d70a1f5fbea9161fa01939c5 )
    {
        Py_DECREF( frame_2dc04b68d70a1f5fbea9161fa01939c5 );
    }
    cache_frame_2dc04b68d70a1f5fbea9161fa01939c5 = NULL;

    assertFrameObject( frame_2dc04b68d70a1f5fbea9161fa01939c5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_10_remove_dot_segments );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)var_segments );
    Py_DECREF( var_segments );
    var_segments = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

    Py_XDECREF( var_segment );
    var_segment = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_segments );
    var_segments = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    Py_XDECREF( var_segment );
    var_segment = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_10_remove_dot_segments );
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


static PyObject *impl_urllib3$packages$rfc3986$normalizers$$$function_11_encode_component( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri_component = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *var_percent_encodings = NULL;
    PyObject *var_uri_bytes = NULL;
    PyObject *var_is_percent_encoded = NULL;
    PyObject *var_encoded_uri = NULL;
    PyObject *var_i = NULL;
    PyObject *var_byte = NULL;
    PyObject *var_byte_ord = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_47b377e9ded39e5c141da8477b56a9ef;
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
    static struct Nuitka_FrameObject *cache_frame_47b377e9ded39e5c141da8477b56a9ef = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_uri_component );
        tmp_compexpr_left_1 = par_uri_component;
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
        CHECK_OBJECT( par_uri_component );
        tmp_return_value = par_uri_component;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_1;
        branch_no_1:;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_47b377e9ded39e5c141da8477b56a9ef, codeobj_47b377e9ded39e5c141da8477b56a9ef, module_urllib3$packages$rfc3986$normalizers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_47b377e9ded39e5c141da8477b56a9ef = cache_frame_47b377e9ded39e5c141da8477b56a9ef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_47b377e9ded39e5c141da8477b56a9ef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_47b377e9ded39e5c141da8477b56a9ef ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_PERCENT_MATCHER );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PERCENT_MATCHER );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PERCENT_MATCHER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_findall );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_compat );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compat );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compat" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_uri_component );
        tmp_args_element_name_2 = par_uri_component;
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_3 = par_encoding;
        frame_47b377e9ded39e5c141da8477b56a9ef->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_to_str, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 150;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_47b377e9ded39e5c141da8477b56a9ef->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_len_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_percent_encodings == NULL );
        var_percent_encodings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_compat );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compat );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compat" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_uri_component );
        tmp_args_element_name_4 = par_uri_component;
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_5 = par_encoding;
        frame_47b377e9ded39e5c141da8477b56a9ef->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_to_bytes, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_uri_bytes == NULL );
        var_uri_bytes = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_percent_encodings );
        tmp_compexpr_left_2 = var_percent_encodings;
        CHECK_OBJECT( var_uri_bytes );
        tmp_called_instance_3 = var_uri_bytes;
        frame_47b377e9ded39e5c141da8477b56a9ef->m_frame.f_lineno = 153;
        tmp_compexpr_right_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_bytes_chr_37_tuple, 0 ) );

        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_is_percent_encoded == NULL );
        var_is_percent_encoded = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = BYTEARRAY_COPY( const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e );
        assert( var_encoded_uri == NULL );
        var_encoded_uri = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_len_arg_2;
        tmp_xrange_low_1 = const_int_0;
        CHECK_OBJECT( var_uri_bytes );
        tmp_len_arg_2 = var_uri_bytes;
        tmp_xrange_high_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_xrange_high_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
        Py_DECREF( tmp_xrange_high_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
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
                type_description_1 = "ooooooooo";
                exception_lineno = 157;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_7;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_uri_bytes );
        tmp_subscribed_name_1 = var_uri_bytes;
        CHECK_OBJECT( var_i );
        tmp_start_name_1 = var_i;
        CHECK_OBJECT( var_i );
        tmp_left_name_1 = var_i;
        tmp_right_name_1 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_byte;
            var_byte = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_ord_arg_1;
        CHECK_OBJECT( var_byte );
        tmp_ord_arg_1 = var_byte;
        tmp_assign_source_9 = BUILTIN_ORD( tmp_ord_arg_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_byte_ord;
            var_byte_ord = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( var_is_percent_encoded );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_is_percent_encoded );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_byte );
        tmp_compexpr_left_3 = var_byte;
        tmp_compexpr_right_3 = const_bytes_chr_37;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_left_value_1 = tmp_and_left_value_1;
        and_end_1:;
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
        CHECK_OBJECT( var_byte_ord );
        tmp_compexpr_left_4 = var_byte_ord;
        tmp_compexpr_right_4 = const_int_pos_128;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooooooooo";
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
        CHECK_OBJECT( var_byte );
        tmp_called_instance_4 = var_byte;
        frame_47b377e9ded39e5c141da8477b56a9ef->m_frame.f_lineno = 162;
        tmp_compexpr_left_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_decode );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_misc );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_misc );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "misc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 162;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_NON_PCT_ENCODED );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 162;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_5, tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_or_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( var_encoded_uri );
            tmp_called_instance_5 = var_encoded_uri;
            CHECK_OBJECT( var_byte );
            tmp_args_element_name_6 = var_byte;
            frame_47b377e9ded39e5c141da8477b56a9ef->m_frame.f_lineno = 163;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_extend, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto loop_start_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( var_encoded_uri );
        tmp_source_name_3 = var_encoded_uri;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extend );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_8 = const_str_digest_2a2a30684f90933364df3e75c05835c8;
        CHECK_OBJECT( var_byte_ord );
        tmp_args_element_name_8 = var_byte_ord;
        frame_47b377e9ded39e5c141da8477b56a9ef->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_called_instance_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_format, call_args );
        }

        if ( tmp_called_instance_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 165;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_47b377e9ded39e5c141da8477b56a9ef->m_frame.f_lineno = 165;
        tmp_called_instance_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_encode );
        Py_DECREF( tmp_called_instance_7 );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 165;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_47b377e9ded39e5c141da8477b56a9ef->m_frame.f_lineno = 165;
        tmp_args_element_name_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_upper );
        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 165;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_47b377e9ded39e5c141da8477b56a9ef->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "ooooooooo";
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
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( var_encoded_uri );
        tmp_called_instance_9 = var_encoded_uri;
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_9 = par_encoding;
        frame_47b377e9ded39e5c141da8477b56a9ef->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_decode, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_47b377e9ded39e5c141da8477b56a9ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_47b377e9ded39e5c141da8477b56a9ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_47b377e9ded39e5c141da8477b56a9ef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_47b377e9ded39e5c141da8477b56a9ef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_47b377e9ded39e5c141da8477b56a9ef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_47b377e9ded39e5c141da8477b56a9ef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_47b377e9ded39e5c141da8477b56a9ef,
        type_description_1,
        par_uri_component,
        par_encoding,
        var_percent_encodings,
        var_uri_bytes,
        var_is_percent_encoded,
        var_encoded_uri,
        var_i,
        var_byte,
        var_byte_ord
    );


    // Release cached frame.
    if ( frame_47b377e9ded39e5c141da8477b56a9ef == cache_frame_47b377e9ded39e5c141da8477b56a9ef )
    {
        Py_DECREF( frame_47b377e9ded39e5c141da8477b56a9ef );
    }
    cache_frame_47b377e9ded39e5c141da8477b56a9ef = NULL;

    assertFrameObject( frame_47b377e9ded39e5c141da8477b56a9ef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_11_encode_component );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_uri_component );
    Py_DECREF( par_uri_component );
    par_uri_component = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( var_percent_encodings );
    var_percent_encodings = NULL;

    Py_XDECREF( var_uri_bytes );
    var_uri_bytes = NULL;

    Py_XDECREF( var_is_percent_encoded );
    var_is_percent_encoded = NULL;

    Py_XDECREF( var_encoded_uri );
    var_encoded_uri = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_byte );
    var_byte = NULL;

    Py_XDECREF( var_byte_ord );
    var_byte_ord = NULL;

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

    CHECK_OBJECT( (PyObject *)par_uri_component );
    Py_DECREF( par_uri_component );
    par_uri_component = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( var_percent_encodings );
    var_percent_encodings = NULL;

    Py_XDECREF( var_uri_bytes );
    var_uri_bytes = NULL;

    Py_XDECREF( var_is_percent_encoded );
    var_is_percent_encoded = NULL;

    Py_XDECREF( var_encoded_uri );
    var_encoded_uri = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_byte );
    var_byte = NULL;

    Py_XDECREF( var_byte_ord );
    var_byte_ord = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$normalizers$$$function_11_encode_component );
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



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_10_remove_dot_segments(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$normalizers$$$function_10_remove_dot_segments,
        const_str_plain_remove_dot_segments,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2dc04b68d70a1f5fbea9161fa01939c5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$normalizers,
        const_str_digest_2a4966b774eee3370fad9df0e173f1fc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_11_encode_component(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$normalizers$$$function_11_encode_component,
        const_str_plain_encode_component,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_47b377e9ded39e5c141da8477b56a9ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$normalizers,
        const_str_digest_bc508aae9b6271fd4d4841879bb446ba,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_1_normalize_scheme(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$normalizers$$$function_1_normalize_scheme,
        const_str_plain_normalize_scheme,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d9b7a716eeebc2a7d06e640450796e10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$normalizers,
        const_str_digest_072c30bdc55ec13b16b7f68a45207902,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_2_normalize_authority(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$normalizers$$$function_2_normalize_authority,
        const_str_plain_normalize_authority,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4b43bdf4f808151f5ebbb1b2c973b852,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$normalizers,
        const_str_digest_81780f49a37ec1dc101cc1cc0e464f31,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_3_normalize_username(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$normalizers$$$function_3_normalize_username,
        const_str_plain_normalize_username,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8124cbb9a79e37388121bd45f90f9a33,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$normalizers,
        const_str_digest_efc221ddf28609fdd9a3ea252d60d12d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_4_normalize_password(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$normalizers$$$function_4_normalize_password,
        const_str_plain_normalize_password,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4c13d9c21956a70479ab89c8ba9ee6aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$normalizers,
        const_str_digest_e0e328be7bc4e589a9feb2a79ca72187,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_5_normalize_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$normalizers$$$function_5_normalize_host,
        const_str_plain_normalize_host,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9132d5c25153f023fbbc69aebf174437,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$normalizers,
        const_str_digest_da59e110c573f74cffc5afe18b2155ed,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_6_normalize_path(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$normalizers$$$function_6_normalize_path,
        const_str_plain_normalize_path,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d59d9eeb148b0882b84d1dc6c2cd18de,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$normalizers,
        const_str_digest_0ad6fb0916ebe6a012b0d9bf923f572e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_7_normalize_query(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$normalizers$$$function_7_normalize_query,
        const_str_plain_normalize_query,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_abf2c611fe26be30d2a7c1232e41d999,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$normalizers,
        const_str_digest_174ea5fedcbcd8f06f066fdc9a11c67a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_8_normalize_fragment(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$normalizers$$$function_8_normalize_fragment,
        const_str_plain_normalize_fragment,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5326adf0bd067a3d8be456b1a517047e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$normalizers,
        const_str_digest_4c04de773fb3196faec969b90f1fc524,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_9_normalize_percent_characters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$normalizers$$$function_9_normalize_percent_characters,
        const_str_plain_normalize_percent_characters,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f74932f4abfd1985b14dc4f2b9c66b30,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$normalizers,
        const_str_digest_a85d0c9e92cc3ceb26a20ddd164fa8d7,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$packages$rfc3986$normalizers =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.packages.rfc3986.normalizers",
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

MOD_INIT_DECL( urllib3$packages$rfc3986$normalizers )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$packages$rfc3986$normalizers );
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
    puts("urllib3.packages.rfc3986.normalizers: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.packages.rfc3986.normalizers: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.packages.rfc3986.normalizers: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$packages$rfc3986$normalizers" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$packages$rfc3986$normalizers = Py_InitModule4(
        "urllib3.packages.rfc3986.normalizers",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$packages$rfc3986$normalizers = PyModule_Create( &mdef_urllib3$packages$rfc3986$normalizers );
#endif

    moduledict_urllib3$packages$rfc3986$normalizers = MODULE_DICT( module_urllib3$packages$rfc3986$normalizers );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_urllib3$packages$rfc3986$normalizers,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$packages$rfc3986$normalizers,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$rfc3986$normalizers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$rfc3986$normalizers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$packages$rfc3986$normalizers );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_021d34f58f50a6f27d3a4387deb25d29, module_urllib3$packages$rfc3986$normalizers );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_c9a064b35bc1a98ef734148d72c1a073;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_e27b6ef15927f9b1198e4f0794474007;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_c9a064b35bc1a98ef734148d72c1a073 = MAKE_MODULE_FRAME( codeobj_c9a064b35bc1a98ef734148d72c1a073, module_urllib3$packages$rfc3986$normalizers );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c9a064b35bc1a98ef734148d72c1a073 );
    assert( Py_REFCNT( frame_c9a064b35bc1a98ef734148d72c1a073 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_re;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$packages$rfc3986$normalizers;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_c9a064b35bc1a98ef734148d72c1a073->m_frame.f_lineno = 16;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_empty;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$packages$rfc3986$normalizers;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_compat_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_c9a064b35bc1a98ef734148d72c1a073->m_frame.f_lineno = 18;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_urllib3$packages$rfc3986$normalizers,
                const_str_plain_compat,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_compat );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_compat, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_empty;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$packages$rfc3986$normalizers;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_misc_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_c9a064b35bc1a98ef734148d72c1a073->m_frame.f_lineno = 19;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_urllib3$packages$rfc3986$normalizers,
                const_str_plain_misc,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_misc );
        }

        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_misc, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_1_normalize_scheme(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_scheme, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_2_normalize_authority(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_authority, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_3_normalize_username(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_username, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_4_normalize_password(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_password, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_5_normalize_host(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_host, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_6_normalize_path(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_path, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_7_normalize_query(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_query, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_8_normalize_fragment(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_fragment, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_c9a064b35bc1a98ef734148d72c1a073->m_frame.f_lineno = 93;
        tmp_assign_source_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_916547f65466291787e29f21c5534722_tuple, 0 ) );

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_PERCENT_MATCHER, tmp_assign_source_15 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9a064b35bc1a98ef734148d72c1a073 );
#endif
    popFrameStack();

    assertFrameObject( frame_c9a064b35bc1a98ef734148d72c1a073 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9a064b35bc1a98ef734148d72c1a073 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c9a064b35bc1a98ef734148d72c1a073, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c9a064b35bc1a98ef734148d72c1a073->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c9a064b35bc1a98ef734148d72c1a073, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_9_normalize_percent_characters(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_normalize_percent_characters, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_10_remove_dot_segments(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_remove_dot_segments, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_urllib3$packages$rfc3986$normalizers$$$function_11_encode_component(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain_encode_component, tmp_assign_source_18 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$normalizers, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_urllib3$packages$rfc3986$normalizers );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
