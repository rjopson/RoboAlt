/* Generated code for Python module 'urllib3.util.url'
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

/* The "_module_urllib3$util$url" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$url;
PyDictObject *moduledict_urllib3$util$url;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_digest_a05fa8f67e9c342eb59afe566750507b;
extern PyObject *const_str_plain_normalizers;
extern PyObject *const_str_plain_IRIReference;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_split_iri;
extern PyObject *const_str_plain_percent_encodings;
static PyObject *const_str_digest_e9a6f4feb2dc60b44c5283699c7cabc7;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_set_ce2337c37dea2cd674cc672020e00412;
extern PyObject *const_str_plain___name__;
static PyObject *const_tuple_c8aedce4730d4dfb3e10e3bec653f9b1_tuple;
extern PyObject *const_str_plain_userinfo;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_authority;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e;
extern PyObject *const_str_plain_i;
static PyObject *const_tuple_str_digest_965d2d7f57f4d4ad4fed3a2e2dd0be7e_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_13971ae58b983978540cbb4bbf3b1360;
extern PyObject *const_str_plain_IRI_MATCHER;
static PyObject *const_tuple_str_plain_url_str_plain_p_tuple;
static PyObject *const_tuple_str_plain_RFC3986Exception_str_plain_ValidationError_tuple;
extern PyObject *const_str_plain_binary_type;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_digest_d059371e62041157c75568892a4792b2;
static PyObject *const_tuple_af72b9f401f86d76742051a1e8f50fce_tuple;
static PyObject *const_str_plain_QUERY_CHARS;
extern PyObject *const_str_plain_any;
static PyObject *const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple;
static PyObject *const_tuple_str_plain_http_str_plain_https_none_tuple;
extern PyObject *const_int_pos_128;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_str_plain_fragment;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_c43db29d076cad78fc09fe62520eefdf_tuple;
extern PyObject *const_str_plain_IDNAError;
extern PyObject *const_str_plain_LocationParseError;
extern PyObject *const_str_plain_uri_ref;
static PyObject *const_str_plain_surrogatepass;
extern PyObject *const_str_plain_COMPONENT_NAMES;
extern PyObject *const_str_plain_validate;
extern PyObject *const_str_plain_validator;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_misc;
static PyObject *const_str_digest_765dab07d74be80538ce6ac3920866dd;
extern PyObject *const_str_plain_idna_encode;
static PyObject *const_str_digest_81e795540c1089cfcc1b50aaf38a2508;
extern PyObject *const_str_plain_get_host;
extern PyObject *const_str_chr_63;
extern PyObject *const_str_digest_7bff4188ca4a22a0aa0a123e748246d2;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_re;
static PyObject *const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_extend;
static PyObject *const_str_plain_has_authority;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_min_delim;
static PyObject *const_str_plain_min_idx;
extern PyObject *const_str_plain_s;
extern PyObject *const_tuple_none_none_none_none_none_none_none_tuple;
extern PyObject *const_tuple_str_plain_namedtuple_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_host;
extern PyObject *const_str_plain_packages;
extern PyObject *const_str_plain_https;
extern PyObject *const_str_plain_raise_from;
extern PyObject *const_str_plain_parse_url;
extern PyObject *const_bytes_chr_37;
extern PyObject *const_str_plain_path;
static PyObject *const_str_digest_8bedf24b0b7ebbf0d2d5d14d176c4819;
static PyObject *const_str_digest_f43e189ec0b8de0c869cd891f79f8d5c;
extern PyObject *const_str_plain_p;
static PyObject *const_str_digest_93b1a23f821c1fea91e627ae367d1497;
extern PyObject *const_str_plain_six;
static PyObject *const_str_plain_encoded_component;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_chr_35;
extern PyObject *const_str_plain_query;
extern PyObject *const_str_plain_collections;
static PyObject *const_tuple_str_plain_LocationParseError_tuple;
static PyObject *const_str_digest_dd838215e36fed4c181b0929ebe2299a;
extern PyObject *const_str_plain_netloc;
extern PyObject *const_str_chr_64;
static PyObject *const_list_e5c5e46e19f9df51f3e1864dfe99c669_list;
static PyObject *const_str_digest_67a7add68e3824f4c255c17aad8377c0;
extern PyObject *const_str_plain_uri_bytes;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_to_input_type;
static PyObject *const_str_digest_d503b56d297494d3676c16d8414f11cd;
extern PyObject *const_tuple_bytes_chr_37_tuple;
static PyObject *const_str_digest_843e5e449c5c660cac4f7289e6c2e25c;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_byte_ord;
static PyObject *const_str_digest_965d2d7f57f4d4ad4fed3a2e2dd0be7e;
extern PyObject *const_str_plain_groupdict;
static PyObject *const_str_digest_c75c0d39d2a0196f8742722a8a16332e;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_tuple_str_plain_x_str_plain_is_string_tuple;
static PyObject *const_str_digest_9f408ca4b5e4cc49018b5a17e7f41139;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_digest_b8db79b9d0912cab551b32203f01865e;
extern PyObject *const_str_plain_match;
static PyObject *const_str_plain_delims;
extern PyObject *const_str_plain_decode;
static PyObject *const_tuple_1a721ce6c709adbfca1336a22103b857_tuple;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_52fcab19777304152a06b82c3c4b25a9;
static PyObject *const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_str_digest_ba44c1ca6ead3bd22179c5b60b235495;
extern PyObject *const_str_plain_strict;
extern PyObject *const_str_plain___new__;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain_UNRESERVED_CHARS_SET;
static PyObject *const_str_digest_b04d4c22614b9ff9b4fadfb8c8b3f608;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_plain_is_percent_encoded;
extern PyObject *const_str_plain_abnf_regexp;
static PyObject *const_tuple_str_plain_name_str_plain_idna_tuple;
static PyObject *const_str_plain_SCHEME_REGEX;
extern PyObject *const_str_plain_search;
extern PyObject *const_str_plain___slots__;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_split_first;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_component;
static PyObject *const_str_digest_f2e7abf6479a90230cbe3ce330dc9ae3;
extern PyObject *const_str_plain_request_uri;
extern PyObject *const_str_plain_NORMALIZABLE_SCHEMES;
static PyObject *const_str_plain_PATH_CHARS;
extern PyObject *const_str_plain_namedtuple;
static PyObject *const_str_plain_url_attrs;
extern PyObject *const_str_plain_check_validity_of;
extern PyObject *const_str_plain_normalize;
static PyObject *const_set_94862d1b972dbe3e8dbcd9d9f3051bdc;
static PyObject *const_str_digest_e588ffd8998d7aa65d2f47eef1a83f98;
static PyObject *const_tuple_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7_tuple;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_ValidationError;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_iri_ref;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_allowed_chars;
extern PyObject *const_str_plain_idx;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___str__;
static PyObject *const_str_plain__encode_invalid_chars;
extern PyObject *const_str_chr_47;
extern PyObject *const_str_plain_idna;
extern PyObject *const_str_plain_to_str;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_findall;
extern PyObject *const_str_plain_hostname;
extern PyObject *const_str_plain_uri;
static PyObject *const_tuple_str_plain_Validator_tuple;
extern PyObject *const_tuple_str_chr_47_tuple;
static PyObject *const_str_plain_is_string;
extern PyObject *const_str_plain_RFC3986Exception;
extern PyObject *const_str_plain_auth;
extern PyObject *const_str_plain_PERCENT_MATCHER;
extern PyObject *const_str_plain_rfc3986;
extern PyObject *const_dict_80bb7efdcf083ae7bdc4dd85cadebd85;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_SUB_DELIMITERS_SET;
extern PyObject *const_str_plain_url;
static PyObject *const_tuple_str_plain_six_str_plain_rfc3986_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7;
extern PyObject *const_str_plain_byte;
static PyObject *const_str_digest_251e998edf7039761db2ef3d557cc500;
extern PyObject *const_str_plain_Validator;
extern PyObject *const_str_plain_std3_rules;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_digest_2a2a30684f90933364df3e75c05835c8;
extern PyObject *const_str_plain_http;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_eee64e928d1d5bb591f23189f7760b5c;
extern PyObject *const_str_plain_compat;
static PyObject *const_str_digest_6c649fac88b2fbb1f84d4549e20576e1;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_property;
static PyObject *const_tuple_str_plain_self_str_plain_uri_tuple;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_idna_encoder;
extern PyObject *const_str_plain_find;
static PyObject *const_str_digest_6c98314eb39c4e401401496918ddcefd;
extern PyObject *const_str_plain_Url;
static PyObject *const_str_plain_FRAGMENT_CHARS;
static PyObject *const_str_digest_03397e6c6f8efefb5edec8e8f233752a;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_e9a6f4feb2dc60b44c5283699c7cabc7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5934270 ], 30, 0 );
    const_set_ce2337c37dea2cd674cc672020e00412 = PySet_New( NULL );
    PySet_Add( const_set_ce2337c37dea2cd674cc672020e00412, const_str_chr_63 );
    assert( PySet_Size( const_set_ce2337c37dea2cd674cc672020e00412 ) == 1 );
    const_tuple_c8aedce4730d4dfb3e10e3bec653f9b1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_c8aedce4730d4dfb3e10e3bec653f9b1_tuple, 0, const_str_plain_abnf_regexp ); Py_INCREF( const_str_plain_abnf_regexp );
    PyTuple_SET_ITEM( const_tuple_c8aedce4730d4dfb3e10e3bec653f9b1_tuple, 1, const_str_plain_normalizers ); Py_INCREF( const_str_plain_normalizers );
    PyTuple_SET_ITEM( const_tuple_c8aedce4730d4dfb3e10e3bec653f9b1_tuple, 2, const_str_plain_compat ); Py_INCREF( const_str_plain_compat );
    PyTuple_SET_ITEM( const_tuple_c8aedce4730d4dfb3e10e3bec653f9b1_tuple, 3, const_str_plain_misc ); Py_INCREF( const_str_plain_misc );
    const_tuple_str_digest_965d2d7f57f4d4ad4fed3a2e2dd0be7e_tuple = PyTuple_New( 1 );
    const_str_digest_965d2d7f57f4d4ad4fed3a2e2dd0be7e = UNSTREAM_STRING_ASCII( &constant_bin[ 5934300 ], 31, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_965d2d7f57f4d4ad4fed3a2e2dd0be7e_tuple, 0, const_str_digest_965d2d7f57f4d4ad4fed3a2e2dd0be7e ); Py_INCREF( const_str_digest_965d2d7f57f4d4ad4fed3a2e2dd0be7e );
    const_tuple_str_plain_url_str_plain_p_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_p_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_p_tuple, 1, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_tuple_str_plain_RFC3986Exception_str_plain_ValidationError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_RFC3986Exception_str_plain_ValidationError_tuple, 0, const_str_plain_RFC3986Exception ); Py_INCREF( const_str_plain_RFC3986Exception );
    PyTuple_SET_ITEM( const_tuple_str_plain_RFC3986Exception_str_plain_ValidationError_tuple, 1, const_str_plain_ValidationError ); Py_INCREF( const_str_plain_ValidationError );
    const_str_digest_d059371e62041157c75568892a4792b2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5934331 ], 11, 0 );
    const_tuple_af72b9f401f86d76742051a1e8f50fce_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_af72b9f401f86d76742051a1e8f50fce_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    const_str_plain_is_string = UNSTREAM_STRING_ASCII( &constant_bin[ 3462570 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_af72b9f401f86d76742051a1e8f50fce_tuple, 1, const_str_plain_is_string ); Py_INCREF( const_str_plain_is_string );
    PyTuple_SET_ITEM( const_tuple_af72b9f401f86d76742051a1e8f50fce_tuple, 2, const_str_plain_idna_encode ); Py_INCREF( const_str_plain_idna_encode );
    PyTuple_SET_ITEM( const_tuple_af72b9f401f86d76742051a1e8f50fce_tuple, 3, const_str_plain_split_iri ); Py_INCREF( const_str_plain_split_iri );
    const_str_plain_iri_ref = UNSTREAM_STRING_ASCII( &constant_bin[ 5934342 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_af72b9f401f86d76742051a1e8f50fce_tuple, 4, const_str_plain_iri_ref ); Py_INCREF( const_str_plain_iri_ref );
    const_str_plain_has_authority = UNSTREAM_STRING_ASCII( &constant_bin[ 5934349 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_af72b9f401f86d76742051a1e8f50fce_tuple, 5, const_str_plain_has_authority ); Py_INCREF( const_str_plain_has_authority );
    PyTuple_SET_ITEM( const_tuple_af72b9f401f86d76742051a1e8f50fce_tuple, 6, const_str_plain_uri_ref ); Py_INCREF( const_str_plain_uri_ref );
    PyTuple_SET_ITEM( const_tuple_af72b9f401f86d76742051a1e8f50fce_tuple, 7, const_str_plain_validator ); Py_INCREF( const_str_plain_validator );
    PyTuple_SET_ITEM( const_tuple_af72b9f401f86d76742051a1e8f50fce_tuple, 8, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    const_str_plain_to_input_type = UNSTREAM_STRING_ASCII( &constant_bin[ 5934362 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_af72b9f401f86d76742051a1e8f50fce_tuple, 9, const_str_plain_to_input_type ); Py_INCREF( const_str_plain_to_input_type );
    const_str_plain_QUERY_CHARS = UNSTREAM_STRING_ASCII( &constant_bin[ 5934375 ], 11, 1 );
    const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple, 1, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyTuple_SET_ITEM( const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple, 2, const_str_plain_auth ); Py_INCREF( const_str_plain_auth );
    PyTuple_SET_ITEM( const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple, 3, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple, 4, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple, 5, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple, 6, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    PyTuple_SET_ITEM( const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple, 7, const_str_plain_fragment ); Py_INCREF( const_str_plain_fragment );
    PyTuple_SET_ITEM( const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple, 8, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    const_tuple_str_plain_http_str_plain_https_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_http_str_plain_https_none_tuple, 0, const_str_plain_http ); Py_INCREF( const_str_plain_http );
    PyTuple_SET_ITEM( const_tuple_str_plain_http_str_plain_https_none_tuple, 1, const_str_plain_https ); Py_INCREF( const_str_plain_https );
    PyTuple_SET_ITEM( const_tuple_str_plain_http_str_plain_https_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_tuple_c43db29d076cad78fc09fe62520eefdf_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c43db29d076cad78fc09fe62520eefdf_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_plain_delims = UNSTREAM_STRING_ASCII( &constant_bin[ 570988 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_c43db29d076cad78fc09fe62520eefdf_tuple, 1, const_str_plain_delims ); Py_INCREF( const_str_plain_delims );
    const_str_plain_min_idx = UNSTREAM_STRING_ASCII( &constant_bin[ 5934386 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_c43db29d076cad78fc09fe62520eefdf_tuple, 2, const_str_plain_min_idx ); Py_INCREF( const_str_plain_min_idx );
    const_str_plain_min_delim = UNSTREAM_STRING_ASCII( &constant_bin[ 5934393 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_c43db29d076cad78fc09fe62520eefdf_tuple, 3, const_str_plain_min_delim ); Py_INCREF( const_str_plain_min_delim );
    PyTuple_SET_ITEM( const_tuple_c43db29d076cad78fc09fe62520eefdf_tuple, 4, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_c43db29d076cad78fc09fe62520eefdf_tuple, 5, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    const_str_plain_surrogatepass = UNSTREAM_STRING_ASCII( &constant_bin[ 5934402 ], 13, 1 );
    const_str_digest_765dab07d74be80538ce6ac3920866dd = UNSTREAM_STRING_ASCII( &constant_bin[ 5934415 ], 154, 0 );
    const_str_digest_81e795540c1089cfcc1b50aaf38a2508 = UNSTREAM_STRING_ASCII( &constant_bin[ 5934569 ], 52, 0 );
    const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple, 1, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyTuple_SET_ITEM( const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple, 2, const_str_plain_auth ); Py_INCREF( const_str_plain_auth );
    PyTuple_SET_ITEM( const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple, 3, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple, 4, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple, 5, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple, 6, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    PyTuple_SET_ITEM( const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple, 7, const_str_plain_fragment ); Py_INCREF( const_str_plain_fragment );
    PyTuple_SET_ITEM( const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple, 8, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_8bedf24b0b7ebbf0d2d5d14d176c4819 = UNSTREAM_STRING_ASCII( &constant_bin[ 5934621 ], 25, 0 );
    const_str_digest_f43e189ec0b8de0c869cd891f79f8d5c = UNSTREAM_STRING_ASCII( &constant_bin[ 5934646 ], 64, 0 );
    const_str_digest_93b1a23f821c1fea91e627ae367d1497 = UNSTREAM_STRING_ASCII( &constant_bin[ 5934710 ], 5, 0 );
    const_str_plain_encoded_component = UNSTREAM_STRING_ASCII( &constant_bin[ 5934715 ], 17, 1 );
    const_tuple_str_plain_LocationParseError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LocationParseError_tuple, 0, const_str_plain_LocationParseError ); Py_INCREF( const_str_plain_LocationParseError );
    const_str_digest_dd838215e36fed4c181b0929ebe2299a = UNSTREAM_STRING_ASCII( &constant_bin[ 5934732 ], 19, 0 );
    const_list_e5c5e46e19f9df51f3e1864dfe99c669_list = PyList_New( 7 );
    PyList_SET_ITEM( const_list_e5c5e46e19f9df51f3e1864dfe99c669_list, 0, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyList_SET_ITEM( const_list_e5c5e46e19f9df51f3e1864dfe99c669_list, 1, const_str_plain_auth ); Py_INCREF( const_str_plain_auth );
    PyList_SET_ITEM( const_list_e5c5e46e19f9df51f3e1864dfe99c669_list, 2, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyList_SET_ITEM( const_list_e5c5e46e19f9df51f3e1864dfe99c669_list, 3, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyList_SET_ITEM( const_list_e5c5e46e19f9df51f3e1864dfe99c669_list, 4, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyList_SET_ITEM( const_list_e5c5e46e19f9df51f3e1864dfe99c669_list, 5, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    PyList_SET_ITEM( const_list_e5c5e46e19f9df51f3e1864dfe99c669_list, 6, const_str_plain_fragment ); Py_INCREF( const_str_plain_fragment );
    const_str_digest_67a7add68e3824f4c255c17aad8377c0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5934751 ], 7, 0 );
    const_str_digest_d503b56d297494d3676c16d8414f11cd = UNSTREAM_STRING_ASCII( &constant_bin[ 5934758 ], 12, 0 );
    const_str_digest_843e5e449c5c660cac4f7289e6c2e25c = UNSTREAM_STRING_ASCII( &constant_bin[ 5934770 ], 205, 0 );
    const_str_digest_c75c0d39d2a0196f8742722a8a16332e = UNSTREAM_STRING_ASCII( &constant_bin[ 5934975 ], 40, 0 );
    const_tuple_str_plain_x_str_plain_is_string_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_is_string_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_is_string_tuple, 1, const_str_plain_is_string ); Py_INCREF( const_str_plain_is_string );
    const_str_digest_9f408ca4b5e4cc49018b5a17e7f41139 = UNSTREAM_STRING_ASCII( &constant_bin[ 5935015 ], 676, 0 );
    const_str_digest_b8db79b9d0912cab551b32203f01865e = UNSTREAM_STRING_ASCII( &constant_bin[ 5935691 ], 15, 0 );
    const_tuple_1a721ce6c709adbfca1336a22103b857_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_1a721ce6c709adbfca1336a22103b857_tuple, 0, const_str_plain_component ); Py_INCREF( const_str_plain_component );
    const_str_plain_allowed_chars = UNSTREAM_STRING_ASCII( &constant_bin[ 5935706 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_1a721ce6c709adbfca1336a22103b857_tuple, 1, const_str_plain_allowed_chars ); Py_INCREF( const_str_plain_allowed_chars );
    PyTuple_SET_ITEM( const_tuple_1a721ce6c709adbfca1336a22103b857_tuple, 2, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_1a721ce6c709adbfca1336a22103b857_tuple, 3, const_str_plain_percent_encodings ); Py_INCREF( const_str_plain_percent_encodings );
    PyTuple_SET_ITEM( const_tuple_1a721ce6c709adbfca1336a22103b857_tuple, 4, const_str_plain_uri_bytes ); Py_INCREF( const_str_plain_uri_bytes );
    PyTuple_SET_ITEM( const_tuple_1a721ce6c709adbfca1336a22103b857_tuple, 5, const_str_plain_is_percent_encoded ); Py_INCREF( const_str_plain_is_percent_encoded );
    PyTuple_SET_ITEM( const_tuple_1a721ce6c709adbfca1336a22103b857_tuple, 6, const_str_plain_encoded_component ); Py_INCREF( const_str_plain_encoded_component );
    PyTuple_SET_ITEM( const_tuple_1a721ce6c709adbfca1336a22103b857_tuple, 7, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_1a721ce6c709adbfca1336a22103b857_tuple, 8, const_str_plain_byte ); Py_INCREF( const_str_plain_byte );
    PyTuple_SET_ITEM( const_tuple_1a721ce6c709adbfca1336a22103b857_tuple, 9, const_str_plain_byte_ord ); Py_INCREF( const_str_plain_byte_ord );
    const_str_digest_52fcab19777304152a06b82c3c4b25a9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5935719 ], 35, 0 );
    const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple, 0, const_str_digest_c075052d723d6707083e869a0e3659bb ); Py_INCREF( const_str_digest_c075052d723d6707083e869a0e3659bb );
    PyTuple_SET_ITEM( const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple, 1, const_str_plain_surrogatepass ); Py_INCREF( const_str_plain_surrogatepass );
    const_str_digest_ba44c1ca6ead3bd22179c5b60b235495 = UNSTREAM_STRING_ASCII( &constant_bin[ 5935754 ], 11, 0 );
    const_str_digest_b04d4c22614b9ff9b4fadfb8c8b3f608 = UNSTREAM_STRING_ASCII( &constant_bin[ 5934629 ], 16, 0 );
    const_tuple_str_plain_name_str_plain_idna_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_idna_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_idna_tuple, 1, const_str_plain_idna ); Py_INCREF( const_str_plain_idna );
    const_str_plain_SCHEME_REGEX = UNSTREAM_STRING_ASCII( &constant_bin[ 5935765 ], 12, 1 );
    const_str_digest_f2e7abf6479a90230cbe3ce330dc9ae3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5935777 ], 492, 0 );
    const_str_plain_PATH_CHARS = UNSTREAM_STRING_ASCII( &constant_bin[ 5936269 ], 10, 1 );
    const_str_plain_url_attrs = UNSTREAM_STRING_ASCII( &constant_bin[ 5936279 ], 9, 1 );
    const_set_94862d1b972dbe3e8dbcd9d9f3051bdc = PySet_New( NULL );
    PySet_Add( const_set_94862d1b972dbe3e8dbcd9d9f3051bdc, const_str_chr_47 );
    PySet_Add( const_set_94862d1b972dbe3e8dbcd9d9f3051bdc, const_str_chr_64 );
    PySet_Add( const_set_94862d1b972dbe3e8dbcd9d9f3051bdc, const_str_chr_58 );
    assert( PySet_Size( const_set_94862d1b972dbe3e8dbcd9d9f3051bdc ) == 3 );
    const_str_digest_e588ffd8998d7aa65d2f47eef1a83f98 = UNSTREAM_STRING_ASCII( &constant_bin[ 5936288 ], 10, 0 );
    const_tuple_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7_tuple = PyTuple_New( 1 );
    const_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5936298 ], 45, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7_tuple, 0, const_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7 ); Py_INCREF( const_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7 );
    const_str_plain__encode_invalid_chars = UNSTREAM_STRING_ASCII( &constant_bin[ 5936343 ], 21, 1 );
    const_tuple_str_plain_Validator_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Validator_tuple, 0, const_str_plain_Validator ); Py_INCREF( const_str_plain_Validator );
    const_tuple_str_plain_six_str_plain_rfc3986_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_six_str_plain_rfc3986_tuple, 0, const_str_plain_six ); Py_INCREF( const_str_plain_six );
    PyTuple_SET_ITEM( const_tuple_str_plain_six_str_plain_rfc3986_tuple, 1, const_str_plain_rfc3986 ); Py_INCREF( const_str_plain_rfc3986 );
    const_str_digest_251e998edf7039761db2ef3d557cc500 = UNSTREAM_STRING_ASCII( &constant_bin[ 5888220 ], 27, 0 );
    const_str_digest_eee64e928d1d5bb591f23189f7760b5c = UNSTREAM_STRING_ASCII( &constant_bin[ 5936364 ], 41, 0 );
    const_str_digest_6c649fac88b2fbb1f84d4549e20576e1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5936405 ], 648, 0 );
    const_tuple_str_plain_self_str_plain_uri_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_uri_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_uri_tuple, 1, const_str_plain_uri ); Py_INCREF( const_str_plain_uri );
    const_str_digest_6c98314eb39c4e401401496918ddcefd = UNSTREAM_STRING_ASCII( &constant_bin[ 5877251 ], 27, 0 );
    const_str_plain_FRAGMENT_CHARS = UNSTREAM_STRING_ASCII( &constant_bin[ 5937053 ], 14, 1 );
    const_str_digest_03397e6c6f8efefb5edec8e8f233752a = UNSTREAM_STRING_ASCII( &constant_bin[ 5937067 ], 32, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$url( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c7097309caa33db85208996f28733a67;
static PyCodeObject *codeobj_1cc67d1b46ca6a490f34665d25e1178f;
static PyCodeObject *codeobj_148e34529516cf4e7f4c76384550ebbb;
static PyCodeObject *codeobj_e06397723d1c74a2cc57f5fb772827a6;
static PyCodeObject *codeobj_1d26f2ed2277d7dedd8e870b2ad2991b;
static PyCodeObject *codeobj_fb8704f2ddaad393b79af470b4b5537f;
static PyCodeObject *codeobj_297296c56e6b82f67b26982927f2eda6;
static PyCodeObject *codeobj_339948c20e092c1a2a7471856e25cf9e;
static PyCodeObject *codeobj_11d919e5be6c4ac96b263f3f54402721;
static PyCodeObject *codeobj_343c0f54f936a926fb92a7c06964f6cf;
static PyCodeObject *codeobj_c746e3d74648aa361e95f8a1e9c72a62;
static PyCodeObject *codeobj_38aa4122539bdc8552e4eb59d2f59cd5;
static PyCodeObject *codeobj_2d3d1522b8069529693885dfdfdeb643;
static PyCodeObject *codeobj_fc23a8a691e5aa03a9bad321333db51f;
static PyCodeObject *codeobj_056f2867ec97b81fc686d658702b2627;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_dd838215e36fed4c181b0929ebe2299a );
    codeobj_c7097309caa33db85208996f28733a67 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 208, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1cc67d1b46ca6a490f34665d25e1178f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8bedf24b0b7ebbf0d2d5d14d176c4819, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_148e34529516cf4e7f4c76384550ebbb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Url, 25, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_e06397723d1c74a2cc57f5fb772827a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___new__, 33, const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_1d26f2ed2277d7dedd8e870b2ad2991b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 104, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fb8704f2ddaad393b79af470b4b5537f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__encode_invalid_chars, 143, const_tuple_1a721ce6c709adbfca1336a22103b857_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_297296c56e6b82f67b26982927f2eda6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_host, 284, const_tuple_str_plain_url_str_plain_p_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_339948c20e092c1a2a7471856e25cf9e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hostname, 42, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_11d919e5be6c4ac96b263f3f54402721 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_idna_encode, 207, const_tuple_str_plain_name_str_plain_idna_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_343c0f54f936a926fb92a7c06964f6cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_netloc, 57, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c746e3d74648aa361e95f8a1e9c72a62 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_url, 174, const_tuple_af72b9f401f86d76742051a1e8f50fce_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_38aa4122539bdc8552e4eb59d2f59cd5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request_uri, 47, const_tuple_str_plain_self_str_plain_uri_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2d3d1522b8069529693885dfdfdeb643 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_split_first, 108, const_tuple_c43db29d076cad78fc09fe62520eefdf_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fc23a8a691e5aa03a9bad321333db51f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_to_input_type, 266, const_tuple_str_plain_x_str_plain_is_string_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_056f2867ec97b81fc686d658702b2627 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_url, 64, const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_10_get_host(  );


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_1___new__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_2_hostname(  );


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_3_request_uri(  );


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_4_netloc(  );


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_5_url(  );


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_6___str__(  );


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_7_split_first(  );


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_8__encode_invalid_chars( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_9_parse_url(  );


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_9_parse_url$$$function_1_idna_encode(  );


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_9_parse_url$$$function_2_to_input_type(  );


// The module function definitions.
static PyObject *impl_urllib3$util$url$$$function_1___new__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_scheme = python_pars[ 1 ];
    PyObject *par_auth = python_pars[ 2 ];
    PyObject *par_host = python_pars[ 3 ];
    PyObject *par_port = python_pars[ 4 ];
    PyObject *par_path = python_pars[ 5 ];
    PyObject *par_query = python_pars[ 6 ];
    PyObject *par_fragment = python_pars[ 7 ];
    struct Nuitka_FrameObject *frame_e06397723d1c74a2cc57f5fb772827a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e06397723d1c74a2cc57f5fb772827a6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e06397723d1c74a2cc57f5fb772827a6, codeobj_e06397723d1c74a2cc57f5fb772827a6, module_urllib3$util$url, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e06397723d1c74a2cc57f5fb772827a6 = cache_frame_e06397723d1c74a2cc57f5fb772827a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e06397723d1c74a2cc57f5fb772827a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e06397723d1c74a2cc57f5fb772827a6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_path );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_path );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( par_path );
        tmp_called_instance_1 = par_path;
        frame_e06397723d1c74a2cc57f5fb772827a6->m_frame.f_lineno = 35;
        tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_47_tuple, 0 ) );

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooooooN";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_chr_47;
            CHECK_OBJECT( par_path );
            tmp_right_name_1 = par_path;
            tmp_assign_source_1 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                type_description_1 = "ooooooooN";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_path;
                assert( old != NULL );
                par_path = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_scheme );
        tmp_compexpr_left_1 = par_scheme;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( par_scheme );
            tmp_called_instance_2 = par_scheme;
            frame_e06397723d1c74a2cc57f5fb772827a6->m_frame.f_lineno = 38;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;
                type_description_1 = "ooooooooN";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_scheme;
                assert( old != NULL );
                par_scheme = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_Url );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Url );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Url" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_cls );
        tmp_object_name_1 = par_cls;
        tmp_called_instance_3 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_cls );
        tmp_args_element_name_1 = par_cls;
        CHECK_OBJECT( par_scheme );
        tmp_args_element_name_2 = par_scheme;
        CHECK_OBJECT( par_auth );
        tmp_args_element_name_3 = par_auth;
        CHECK_OBJECT( par_host );
        tmp_args_element_name_4 = par_host;
        CHECK_OBJECT( par_port );
        tmp_args_element_name_5 = par_port;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_6 = par_path;
        CHECK_OBJECT( par_query );
        tmp_args_element_name_7 = par_query;
        CHECK_OBJECT( par_fragment );
        tmp_args_element_name_8 = par_fragment;
        frame_e06397723d1c74a2cc57f5fb772827a6->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_return_value = CALL_METHOD_WITH_ARGS8( tmp_called_instance_3, const_str_plain___new__, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e06397723d1c74a2cc57f5fb772827a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e06397723d1c74a2cc57f5fb772827a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e06397723d1c74a2cc57f5fb772827a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e06397723d1c74a2cc57f5fb772827a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e06397723d1c74a2cc57f5fb772827a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e06397723d1c74a2cc57f5fb772827a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e06397723d1c74a2cc57f5fb772827a6,
        type_description_1,
        par_cls,
        par_scheme,
        par_auth,
        par_host,
        par_port,
        par_path,
        par_query,
        par_fragment,
        NULL
    );


    // Release cached frame.
    if ( frame_e06397723d1c74a2cc57f5fb772827a6 == cache_frame_e06397723d1c74a2cc57f5fb772827a6 )
    {
        Py_DECREF( frame_e06397723d1c74a2cc57f5fb772827a6 );
    }
    cache_frame_e06397723d1c74a2cc57f5fb772827a6 = NULL;

    assertFrameObject( frame_e06397723d1c74a2cc57f5fb772827a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_1___new__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_scheme );
    Py_DECREF( par_scheme );
    par_scheme = NULL;

    CHECK_OBJECT( (PyObject *)par_auth );
    Py_DECREF( par_auth );
    par_auth = NULL;

    CHECK_OBJECT( (PyObject *)par_host );
    Py_DECREF( par_host );
    par_host = NULL;

    CHECK_OBJECT( (PyObject *)par_port );
    Py_DECREF( par_port );
    par_port = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_query );
    Py_DECREF( par_query );
    par_query = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    CHECK_OBJECT( (PyObject *)par_auth );
    Py_DECREF( par_auth );
    par_auth = NULL;

    CHECK_OBJECT( (PyObject *)par_host );
    Py_DECREF( par_host );
    par_host = NULL;

    CHECK_OBJECT( (PyObject *)par_port );
    Py_DECREF( par_port );
    par_port = NULL;

    Py_XDECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_query );
    Py_DECREF( par_query );
    par_query = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_1___new__ );
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


static PyObject *impl_urllib3$util$url$$$function_2_hostname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_339948c20e092c1a2a7471856e25cf9e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_339948c20e092c1a2a7471856e25cf9e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_339948c20e092c1a2a7471856e25cf9e, codeobj_339948c20e092c1a2a7471856e25cf9e, module_urllib3$util$url, sizeof(void *) );
    frame_339948c20e092c1a2a7471856e25cf9e = cache_frame_339948c20e092c1a2a7471856e25cf9e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_339948c20e092c1a2a7471856e25cf9e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_339948c20e092c1a2a7471856e25cf9e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_host );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_339948c20e092c1a2a7471856e25cf9e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_339948c20e092c1a2a7471856e25cf9e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_339948c20e092c1a2a7471856e25cf9e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_339948c20e092c1a2a7471856e25cf9e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_339948c20e092c1a2a7471856e25cf9e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_339948c20e092c1a2a7471856e25cf9e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_339948c20e092c1a2a7471856e25cf9e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_339948c20e092c1a2a7471856e25cf9e == cache_frame_339948c20e092c1a2a7471856e25cf9e )
    {
        Py_DECREF( frame_339948c20e092c1a2a7471856e25cf9e );
    }
    cache_frame_339948c20e092c1a2a7471856e25cf9e = NULL;

    assertFrameObject( frame_339948c20e092c1a2a7471856e25cf9e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_2_hostname );
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
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_2_hostname );
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


static PyObject *impl_urllib3$util$url$$$function_3_request_uri( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_uri = NULL;
    struct Nuitka_FrameObject *frame_38aa4122539bdc8552e4eb59d2f59cd5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_38aa4122539bdc8552e4eb59d2f59cd5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_38aa4122539bdc8552e4eb59d2f59cd5, codeobj_38aa4122539bdc8552e4eb59d2f59cd5, module_urllib3$util$url, sizeof(void *)+sizeof(void *) );
    frame_38aa4122539bdc8552e4eb59d2f59cd5 = cache_frame_38aa4122539bdc8552e4eb59d2f59cd5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_38aa4122539bdc8552e4eb59d2f59cd5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_38aa4122539bdc8552e4eb59d2f59cd5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_path );
        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 50;
            type_description_1 = "oo";
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
        Py_DECREF( tmp_or_left_value_1 );
        tmp_or_right_value_1 = const_str_chr_47;
        Py_INCREF( tmp_or_right_value_1 );
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert( var_uri == NULL );
        var_uri = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_query );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( var_uri );
            tmp_left_name_1 = var_uri;
            tmp_left_name_2 = const_str_chr_63;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_query );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = tmp_left_name_1;
            var_uri = tmp_assign_source_2;

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_38aa4122539bdc8552e4eb59d2f59cd5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_38aa4122539bdc8552e4eb59d2f59cd5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_38aa4122539bdc8552e4eb59d2f59cd5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_38aa4122539bdc8552e4eb59d2f59cd5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_38aa4122539bdc8552e4eb59d2f59cd5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_38aa4122539bdc8552e4eb59d2f59cd5,
        type_description_1,
        par_self,
        var_uri
    );


    // Release cached frame.
    if ( frame_38aa4122539bdc8552e4eb59d2f59cd5 == cache_frame_38aa4122539bdc8552e4eb59d2f59cd5 )
    {
        Py_DECREF( frame_38aa4122539bdc8552e4eb59d2f59cd5 );
    }
    cache_frame_38aa4122539bdc8552e4eb59d2f59cd5 = NULL;

    assertFrameObject( frame_38aa4122539bdc8552e4eb59d2f59cd5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_uri );
    tmp_return_value = var_uri;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_3_request_uri );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_uri );
    Py_DECREF( var_uri );
    var_uri = NULL;

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

    Py_XDECREF( var_uri );
    var_uri = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_3_request_uri );
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


static PyObject *impl_urllib3$util$url$$$function_4_netloc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_343c0f54f936a926fb92a7c06964f6cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_343c0f54f936a926fb92a7c06964f6cf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_343c0f54f936a926fb92a7c06964f6cf, codeobj_343c0f54f936a926fb92a7c06964f6cf, module_urllib3$util$url, sizeof(void *) );
    frame_343c0f54f936a926fb92a7c06964f6cf = cache_frame_343c0f54f936a926fb92a7c06964f6cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_343c0f54f936a926fb92a7c06964f6cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_343c0f54f936a926fb92a7c06964f6cf ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_port );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 60;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            tmp_left_name_1 = const_str_digest_93b1a23f821c1fea91e627ae367d1497;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_host );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_port );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_1 );

                exception_lineno = 61;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
            tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_host );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_343c0f54f936a926fb92a7c06964f6cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_343c0f54f936a926fb92a7c06964f6cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_343c0f54f936a926fb92a7c06964f6cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_343c0f54f936a926fb92a7c06964f6cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_343c0f54f936a926fb92a7c06964f6cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_343c0f54f936a926fb92a7c06964f6cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_343c0f54f936a926fb92a7c06964f6cf,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_343c0f54f936a926fb92a7c06964f6cf == cache_frame_343c0f54f936a926fb92a7c06964f6cf )
    {
        Py_DECREF( frame_343c0f54f936a926fb92a7c06964f6cf );
    }
    cache_frame_343c0f54f936a926fb92a7c06964f6cf = NULL;

    assertFrameObject( frame_343c0f54f936a926fb92a7c06964f6cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_4_netloc );
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
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_4_netloc );
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


static PyObject *impl_urllib3$util$url$$$function_5_url( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_scheme = NULL;
    PyObject *var_auth = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *var_path = NULL;
    PyObject *var_query = NULL;
    PyObject *var_fragment = NULL;
    PyObject *var_url = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_056f2867ec97b81fc686d658702b2627;
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
    static struct Nuitka_FrameObject *cache_frame_056f2867ec97b81fc686d658702b2627 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_056f2867ec97b81fc686d658702b2627, codeobj_056f2867ec97b81fc686d658702b2627, module_urllib3$util$url, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_056f2867ec97b81fc686d658702b2627 = cache_frame_056f2867ec97b81fc686d658702b2627;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_056f2867ec97b81fc686d658702b2627 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_056f2867ec97b81fc686d658702b2627 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_self );
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 7 );
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


            type_description_1 = "ooooooooo";
            exception_lineno = 83;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 7 );
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


            type_description_1 = "ooooooooo";
            exception_lineno = 83;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 7 );
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


            type_description_1 = "ooooooooo";
            exception_lineno = 83;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_4, 3, 7 );
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


            type_description_1 = "ooooooooo";
            exception_lineno = 83;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_5, 4, 7 );
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


            type_description_1 = "ooooooooo";
            exception_lineno = 83;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_5 == NULL );
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_6, 5, 7 );
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


            type_description_1 = "ooooooooo";
            exception_lineno = 83;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_6 == NULL );
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_7, 6, 7 );
        if ( tmp_assign_source_8 == NULL )
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


            type_description_1 = "ooooooooo";
            exception_lineno = 83;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_7 == NULL );
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_8;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 83;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 7)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooo";
            exception_lineno = 83;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_7 );
    tmp_tuple_unpack_1__element_7 = NULL;

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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        assert( var_scheme == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_scheme = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        assert( var_auth == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_auth = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_3;
        assert( var_host == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_host = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_4;
        assert( var_port == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_port = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_5;
        assert( var_path == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_path = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_6 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_6;
        assert( var_query == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_query = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_7 );
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_7;
        assert( var_fragment == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_fragment = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_7 );
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_str_empty;
        assert( var_url == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_url = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_scheme );
        tmp_compexpr_left_1 = var_scheme;
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
            PyObject *tmp_assign_source_17;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_left_name_1 = const_str_empty;
            CHECK_OBJECT( var_scheme );
            tmp_left_name_2 = var_scheme;
            tmp_right_name_2 = const_str_digest_a05fa8f67e9c342eb59afe566750507b;
            tmp_right_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_17 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_url;
                assert( old != NULL );
                var_url = tmp_assign_source_17;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_auth );
        tmp_compexpr_left_2 = var_auth;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_url );
            tmp_left_name_3 = var_url;
            CHECK_OBJECT( var_auth );
            tmp_left_name_4 = var_auth;
            tmp_right_name_4 = const_str_chr_64;
            tmp_right_name_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_18 = tmp_left_name_3;
            var_url = tmp_assign_source_18;

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_host );
        tmp_compexpr_left_3 = var_host;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_19;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            if ( var_url == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 92;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_5 = var_url;
            CHECK_OBJECT( var_host );
            tmp_right_name_5 = var_host;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_19 = tmp_left_name_5;
            var_url = tmp_assign_source_19;

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_port );
        tmp_compexpr_left_4 = var_port;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_4 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_20;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_unicode_arg_1;
            if ( var_url == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 94;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_6 = var_url;
            tmp_left_name_7 = const_str_chr_58;
            CHECK_OBJECT( var_port );
            tmp_unicode_arg_1 = var_port;
            tmp_right_name_7 = PyObject_Unicode( tmp_unicode_arg_1 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_6 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_20 = tmp_left_name_6;
            var_url = tmp_assign_source_20;

        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_path );
        tmp_compexpr_left_5 = var_path;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_21;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            if ( var_url == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_8 = var_url;
            CHECK_OBJECT( var_path );
            tmp_right_name_8 = var_path;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_21 = tmp_left_name_8;
            var_url = tmp_assign_source_21;

        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( var_query );
        tmp_compexpr_left_6 = var_query;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_22;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            if ( var_url == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 98;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_9 = var_url;
            tmp_left_name_10 = const_str_chr_63;
            CHECK_OBJECT( var_query );
            tmp_right_name_10 = var_query;
            tmp_right_name_9 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            if ( tmp_right_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
            Py_DECREF( tmp_right_name_9 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_22 = tmp_left_name_9;
            var_url = tmp_assign_source_22;

        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_fragment );
        tmp_compexpr_left_7 = var_fragment;
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_7 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_23;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            if ( var_url == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 100;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_11 = var_url;
            tmp_left_name_12 = const_str_chr_35;
            CHECK_OBJECT( var_fragment );
            tmp_right_name_12 = var_fragment;
            tmp_right_name_11 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_12, tmp_right_name_12 );
            if ( tmp_right_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_11, tmp_right_name_11 );
            Py_DECREF( tmp_right_name_11 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_23 = tmp_left_name_11;
            var_url = tmp_assign_source_23;

        }
        branch_no_7:;
    }
    if ( var_url == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_url;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_056f2867ec97b81fc686d658702b2627 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_056f2867ec97b81fc686d658702b2627 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_056f2867ec97b81fc686d658702b2627 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_056f2867ec97b81fc686d658702b2627, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_056f2867ec97b81fc686d658702b2627->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_056f2867ec97b81fc686d658702b2627, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_056f2867ec97b81fc686d658702b2627,
        type_description_1,
        par_self,
        var_scheme,
        var_auth,
        var_host,
        var_port,
        var_path,
        var_query,
        var_fragment,
        var_url
    );


    // Release cached frame.
    if ( frame_056f2867ec97b81fc686d658702b2627 == cache_frame_056f2867ec97b81fc686d658702b2627 )
    {
        Py_DECREF( frame_056f2867ec97b81fc686d658702b2627 );
    }
    cache_frame_056f2867ec97b81fc686d658702b2627 = NULL;

    assertFrameObject( frame_056f2867ec97b81fc686d658702b2627 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_5_url );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_scheme );
    Py_DECREF( var_scheme );
    var_scheme = NULL;

    CHECK_OBJECT( (PyObject *)var_auth );
    Py_DECREF( var_auth );
    var_auth = NULL;

    CHECK_OBJECT( (PyObject *)var_host );
    Py_DECREF( var_host );
    var_host = NULL;

    CHECK_OBJECT( (PyObject *)var_port );
    Py_DECREF( var_port );
    var_port = NULL;

    CHECK_OBJECT( (PyObject *)var_path );
    Py_DECREF( var_path );
    var_path = NULL;

    CHECK_OBJECT( (PyObject *)var_query );
    Py_DECREF( var_query );
    var_query = NULL;

    CHECK_OBJECT( (PyObject *)var_fragment );
    Py_DECREF( var_fragment );
    var_fragment = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

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

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_auth );
    var_auth = NULL;

    Py_XDECREF( var_host );
    var_host = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_query );
    var_query = NULL;

    Py_XDECREF( var_fragment );
    var_fragment = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_5_url );
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


static PyObject *impl_urllib3$util$url$$$function_6___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_1d26f2ed2277d7dedd8e870b2ad2991b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1d26f2ed2277d7dedd8e870b2ad2991b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1d26f2ed2277d7dedd8e870b2ad2991b, codeobj_1d26f2ed2277d7dedd8e870b2ad2991b, module_urllib3$util$url, sizeof(void *) );
    frame_1d26f2ed2277d7dedd8e870b2ad2991b = cache_frame_1d26f2ed2277d7dedd8e870b2ad2991b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1d26f2ed2277d7dedd8e870b2ad2991b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1d26f2ed2277d7dedd8e870b2ad2991b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_url );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d26f2ed2277d7dedd8e870b2ad2991b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d26f2ed2277d7dedd8e870b2ad2991b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d26f2ed2277d7dedd8e870b2ad2991b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1d26f2ed2277d7dedd8e870b2ad2991b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1d26f2ed2277d7dedd8e870b2ad2991b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1d26f2ed2277d7dedd8e870b2ad2991b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1d26f2ed2277d7dedd8e870b2ad2991b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_1d26f2ed2277d7dedd8e870b2ad2991b == cache_frame_1d26f2ed2277d7dedd8e870b2ad2991b )
    {
        Py_DECREF( frame_1d26f2ed2277d7dedd8e870b2ad2991b );
    }
    cache_frame_1d26f2ed2277d7dedd8e870b2ad2991b = NULL;

    assertFrameObject( frame_1d26f2ed2277d7dedd8e870b2ad2991b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_6___str__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_6___str__ );
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


static PyObject *impl_urllib3$util$url$$$function_7_split_first( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *par_delims = python_pars[ 1 ];
    PyObject *var_min_idx = NULL;
    PyObject *var_min_delim = NULL;
    PyObject *var_d = NULL;
    PyObject *var_idx = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_2d3d1522b8069529693885dfdfdeb643;
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
    static struct Nuitka_FrameObject *cache_frame_2d3d1522b8069529693885dfdfdeb643 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert( var_min_idx == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_min_idx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert( var_min_delim == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_min_delim = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d3d1522b8069529693885dfdfdeb643, codeobj_2d3d1522b8069529693885dfdfdeb643, module_urllib3$util$url, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d3d1522b8069529693885dfdfdeb643 = cache_frame_2d3d1522b8069529693885dfdfdeb643;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d3d1522b8069529693885dfdfdeb643 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d3d1522b8069529693885dfdfdeb643 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_delims );
        tmp_iter_arg_1 = par_delims;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 128;
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
            PyObject *old = var_d;
            var_d = tmp_assign_source_5;
            Py_INCREF( var_d );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_s );
        tmp_called_instance_1 = par_s;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_1 = var_d;
        frame_2d3d1522b8069529693885dfdfdeb643->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_find, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_idx;
            var_idx = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_idx );
        tmp_compexpr_left_1 = var_idx;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
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
        goto loop_start_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if ( var_min_idx == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "min_idx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_left_2 = var_min_idx;
        tmp_compexpr_right_2 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_idx );
        tmp_compexpr_left_3 = var_idx;
        if ( var_min_idx == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "min_idx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_3 = var_min_idx;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( var_idx );
            tmp_assign_source_7 = var_idx;
            {
                PyObject *old = var_min_idx;
                var_min_idx = tmp_assign_source_7;
                Py_INCREF( var_min_idx );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( var_d );
            tmp_assign_source_8 = var_d;
            {
                PyObject *old = var_min_delim;
                var_min_delim = tmp_assign_source_8;
                Py_INCREF( var_min_delim );
                Py_XDECREF( old );
            }

        }
        branch_no_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
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
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        if ( var_min_idx == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "min_idx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = var_min_idx;
        tmp_compexpr_right_4 = Py_None;
        tmp_or_left_value_2 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        if ( var_min_idx == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "min_idx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_5 = var_min_idx;
        tmp_compexpr_right_5 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_3 = tmp_or_left_value_2;
        or_end_2:;
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
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_s );
            tmp_tuple_element_1 = par_s;
            tmp_return_value = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_str_empty;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            tmp_tuple_element_1 = Py_None;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_1 = par_s;
        tmp_start_name_1 = Py_None;
        if ( var_min_idx == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "min_idx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_name_1 = var_min_idx;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_2 = par_s;
        if ( var_min_idx == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "min_idx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = var_min_idx;
        tmp_right_name_1 = const_int_pos_1;
        tmp_start_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_start_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_2 = Py_None;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_start_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        if ( var_min_delim == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "min_delim" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_min_delim;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d3d1522b8069529693885dfdfdeb643 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d3d1522b8069529693885dfdfdeb643 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d3d1522b8069529693885dfdfdeb643 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d3d1522b8069529693885dfdfdeb643, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d3d1522b8069529693885dfdfdeb643->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d3d1522b8069529693885dfdfdeb643, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d3d1522b8069529693885dfdfdeb643,
        type_description_1,
        par_s,
        par_delims,
        var_min_idx,
        var_min_delim,
        var_d,
        var_idx
    );


    // Release cached frame.
    if ( frame_2d3d1522b8069529693885dfdfdeb643 == cache_frame_2d3d1522b8069529693885dfdfdeb643 )
    {
        Py_DECREF( frame_2d3d1522b8069529693885dfdfdeb643 );
    }
    cache_frame_2d3d1522b8069529693885dfdfdeb643 = NULL;

    assertFrameObject( frame_2d3d1522b8069529693885dfdfdeb643 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_7_split_first );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_delims );
    Py_DECREF( par_delims );
    par_delims = NULL;

    Py_XDECREF( var_min_idx );
    var_min_idx = NULL;

    Py_XDECREF( var_min_delim );
    var_min_delim = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_delims );
    Py_DECREF( par_delims );
    par_delims = NULL;

    Py_XDECREF( var_min_idx );
    var_min_idx = NULL;

    Py_XDECREF( var_min_delim );
    var_min_delim = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_7_split_first );
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


static PyObject *impl_urllib3$util$url$$$function_8__encode_invalid_chars( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_component = python_pars[ 0 ];
    PyObject *par_allowed_chars = python_pars[ 1 ];
    PyObject *par_encoding = python_pars[ 2 ];
    PyObject *var_percent_encodings = NULL;
    PyObject *var_uri_bytes = NULL;
    PyObject *var_is_percent_encoded = NULL;
    PyObject *var_encoded_component = NULL;
    PyObject *var_i = NULL;
    PyObject *var_byte = NULL;
    PyObject *var_byte_ord = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_fb8704f2ddaad393b79af470b4b5537f;
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
    static struct Nuitka_FrameObject *cache_frame_fb8704f2ddaad393b79af470b4b5537f = NULL;
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
        CHECK_OBJECT( par_component );
        tmp_compexpr_left_1 = par_component;
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
        CHECK_OBJECT( par_component );
        tmp_return_value = par_component;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_1;
        branch_no_1:;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_fb8704f2ddaad393b79af470b4b5537f, codeobj_fb8704f2ddaad393b79af470b4b5537f, module_urllib3$util$url, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fb8704f2ddaad393b79af470b4b5537f = cache_frame_fb8704f2ddaad393b79af470b4b5537f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fb8704f2ddaad393b79af470b4b5537f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fb8704f2ddaad393b79af470b4b5537f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_normalizers );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalizers );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalizers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 153;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PERCENT_MATCHER );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_findall );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_compat );

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

            exception_lineno = 154;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_component );
        tmp_args_element_name_2 = par_component;
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_3 = par_encoding;
        frame_fb8704f2ddaad393b79af470b4b5537f->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_to_str, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 154;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fb8704f2ddaad393b79af470b4b5537f->m_frame.f_lineno = 153;
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


            exception_lineno = 153;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_percent_encodings == NULL );
        var_percent_encodings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_component );
        tmp_called_instance_2 = par_component;
        frame_fb8704f2ddaad393b79af470b4b5537f->m_frame.f_lineno = 156;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple, 0 ) );

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "oooooooooo";
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
        frame_fb8704f2ddaad393b79af470b4b5537f->m_frame.f_lineno = 157;
        tmp_compexpr_right_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_bytes_chr_37_tuple, 0 ) );

        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_is_percent_encoded == NULL );
        var_is_percent_encoded = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = BYTEARRAY_COPY( const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e );
        assert( var_encoded_component == NULL );
        var_encoded_component = tmp_assign_source_4;
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


            exception_lineno = 161;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
        Py_DECREF( tmp_xrange_high_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "oooooooooo";
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
                type_description_1 = "oooooooooo";
                exception_lineno = 161;
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


            exception_lineno = 163;
            type_description_1 = "oooooooooo";
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


            exception_lineno = 163;
            type_description_1 = "oooooooooo";
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


            exception_lineno = 164;
            type_description_1 = "oooooooooo";
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
        CHECK_OBJECT( var_is_percent_encoded );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_is_percent_encoded );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "oooooooooo";
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


            exception_lineno = 165;
            type_description_1 = "oooooooooo";
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


            exception_lineno = 166;
            type_description_1 = "oooooooooo";
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
        frame_fb8704f2ddaad393b79af470b4b5537f->m_frame.f_lineno = 166;
        tmp_compexpr_left_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_decode );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_allowed_chars );
        tmp_compexpr_right_5 = par_allowed_chars;
        tmp_res = PySequence_Contains( tmp_compexpr_right_5, tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( var_encoded_component );
            tmp_called_instance_5 = var_encoded_component;
            CHECK_OBJECT( var_byte );
            tmp_args_element_name_4 = var_byte;
            frame_fb8704f2ddaad393b79af470b4b5537f->m_frame.f_lineno = 167;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_extend, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 167;
                type_description_1 = "oooooooooo";
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
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( var_encoded_component );
        tmp_source_name_3 = var_encoded_component;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extend );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_8 = const_str_digest_2a2a30684f90933364df3e75c05835c8;
        CHECK_OBJECT( var_byte_ord );
        tmp_args_element_name_6 = var_byte_ord;
        frame_fb8704f2ddaad393b79af470b4b5537f->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_called_instance_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_format, call_args );
        }

        if ( tmp_called_instance_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 169;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_fb8704f2ddaad393b79af470b4b5537f->m_frame.f_lineno = 169;
        tmp_called_instance_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_encode );
        Py_DECREF( tmp_called_instance_7 );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 169;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_fb8704f2ddaad393b79af470b4b5537f->m_frame.f_lineno = 169;
        tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_upper );
        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 169;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_fb8704f2ddaad393b79af470b4b5537f->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oooooooooo";
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
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_encoded_component );
        tmp_called_instance_9 = var_encoded_component;
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_7 = par_encoding;
        frame_fb8704f2ddaad393b79af470b4b5537f->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_decode, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb8704f2ddaad393b79af470b4b5537f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb8704f2ddaad393b79af470b4b5537f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb8704f2ddaad393b79af470b4b5537f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fb8704f2ddaad393b79af470b4b5537f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fb8704f2ddaad393b79af470b4b5537f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fb8704f2ddaad393b79af470b4b5537f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fb8704f2ddaad393b79af470b4b5537f,
        type_description_1,
        par_component,
        par_allowed_chars,
        par_encoding,
        var_percent_encodings,
        var_uri_bytes,
        var_is_percent_encoded,
        var_encoded_component,
        var_i,
        var_byte,
        var_byte_ord
    );


    // Release cached frame.
    if ( frame_fb8704f2ddaad393b79af470b4b5537f == cache_frame_fb8704f2ddaad393b79af470b4b5537f )
    {
        Py_DECREF( frame_fb8704f2ddaad393b79af470b4b5537f );
    }
    cache_frame_fb8704f2ddaad393b79af470b4b5537f = NULL;

    assertFrameObject( frame_fb8704f2ddaad393b79af470b4b5537f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_8__encode_invalid_chars );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_component );
    Py_DECREF( par_component );
    par_component = NULL;

    CHECK_OBJECT( (PyObject *)par_allowed_chars );
    Py_DECREF( par_allowed_chars );
    par_allowed_chars = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( var_percent_encodings );
    var_percent_encodings = NULL;

    Py_XDECREF( var_uri_bytes );
    var_uri_bytes = NULL;

    Py_XDECREF( var_is_percent_encoded );
    var_is_percent_encoded = NULL;

    Py_XDECREF( var_encoded_component );
    var_encoded_component = NULL;

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

    CHECK_OBJECT( (PyObject *)par_component );
    Py_DECREF( par_component );
    par_component = NULL;

    CHECK_OBJECT( (PyObject *)par_allowed_chars );
    Py_DECREF( par_allowed_chars );
    par_allowed_chars = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( var_percent_encodings );
    var_percent_encodings = NULL;

    Py_XDECREF( var_uri_bytes );
    var_uri_bytes = NULL;

    Py_XDECREF( var_is_percent_encoded );
    var_is_percent_encoded = NULL;

    Py_XDECREF( var_encoded_component );
    var_encoded_component = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_8__encode_invalid_chars );
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


static PyObject *impl_urllib3$util$url$$$function_9_parse_url( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    struct Nuitka_CellObject *var_is_string = PyCell_EMPTY();
    PyObject *var_idna_encode = NULL;
    PyObject *var_split_iri = NULL;
    PyObject *var_iri_ref = NULL;
    nuitka_bool var_has_authority = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_uri_ref = NULL;
    PyObject *var_validator = NULL;
    PyObject *var_path = NULL;
    PyObject *var_to_input_type = NULL;
    struct Nuitka_FrameObject *frame_c746e3d74648aa361e95f8a1e9c72a62;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_c746e3d74648aa361e95f8a1e9c72a62 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c746e3d74648aa361e95f8a1e9c72a62, codeobj_c746e3d74648aa361e95f8a1e9c72a62, module_urllib3$util$url, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c746e3d74648aa361e95f8a1e9c72a62 = cache_frame_c746e3d74648aa361e95f8a1e9c72a62;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c746e3d74648aa361e95f8a1e9c72a62 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c746e3d74648aa361e95f8a1e9c72a62 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_url );
        tmp_operand_name_1 = par_url;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ocoooboooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_Url );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Url );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Url" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 195;
                type_description_1 = "ocoooboooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 195;
            tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ocoooboooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_url );
        tmp_isinstance_inst_1 = par_url;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_six );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 197;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_binary_type );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = ( tmp_res == 0 ) ? Py_True : Py_False;
        assert( PyCell_GET( var_is_string ) == NULL );
        Py_INCREF( tmp_assign_source_1 );
        PyCell_SET( var_is_string, tmp_assign_source_1 );

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_SCHEME_REGEX );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SCHEME_REGEX );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SCHEME_REGEX" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 204;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_url );
        tmp_args_element_name_1 = par_url;
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_search, call_args );
        }

        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ocoooboooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_13971ae58b983978540cbb4bbf3b1360;
            CHECK_OBJECT( par_url );
            tmp_right_name_1 = par_url;
            tmp_assign_source_2 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "ocoooboooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_url;
                assert( old != NULL );
                par_url = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_FUNCTION_urllib3$util$url$$$function_9_parse_url$$$function_1_idna_encode(  );



        assert( var_idna_encode == NULL );
        var_idna_encode = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_misc );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_misc );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "misc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 220;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_IRI_MATCHER );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_match );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_compat );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compat );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compat" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 220;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = tmp_mvar_value_5;
        CHECK_OBJECT( par_url );
        tmp_args_element_name_3 = par_url;
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_to_str, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 220;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 220;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_groupdict );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        assert( var_split_iri == NULL );
        var_split_iri = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_rfc3986 );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rfc3986 );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rfc3986" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 221;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }

        tmp_source_name_4 = tmp_mvar_value_6;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_IRIReference );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_split_iri );
        tmp_subscribed_name_1 = var_split_iri;
        tmp_subscript_name_1 = const_str_plain_scheme;
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 222;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_split_iri );
        tmp_subscribed_name_2 = var_split_iri;
        tmp_subscript_name_2 = const_str_plain_authority;
        tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 222;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain__encode_invalid_chars );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__encode_invalid_chars );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_encode_invalid_chars" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 223;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }

        tmp_called_name_4 = tmp_mvar_value_7;
        CHECK_OBJECT( var_split_iri );
        tmp_subscribed_name_3 = var_split_iri;
        tmp_subscript_name_3 = const_str_plain_path;
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 223;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_PATH_CHARS );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PATH_CHARS );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PATH_CHARS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 223;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_8 = tmp_mvar_value_8;
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 223;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain__encode_invalid_chars );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__encode_invalid_chars );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_encode_invalid_chars" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 224;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }

        tmp_called_name_5 = tmp_mvar_value_9;
        CHECK_OBJECT( var_split_iri );
        tmp_subscribed_name_4 = var_split_iri;
        tmp_subscript_name_4 = const_str_plain_query;
        tmp_args_element_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 224;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_QUERY_CHARS );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_QUERY_CHARS );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_args_element_name_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "QUERY_CHARS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 224;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_11 = tmp_mvar_value_10;
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 224;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain__encode_invalid_chars );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__encode_invalid_chars );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_args_element_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_encode_invalid_chars" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 225;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }

        tmp_called_name_6 = tmp_mvar_value_11;
        CHECK_OBJECT( var_split_iri );
        tmp_subscribed_name_5 = var_split_iri;
        tmp_subscript_name_5 = const_str_plain_fragment;
        tmp_args_element_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 225;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_FRAGMENT_CHARS );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FRAGMENT_CHARS );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_args_element_name_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FRAGMENT_CHARS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 225;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_14 = tmp_mvar_value_12;
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 225;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_9, tmp_args_element_name_12 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_9 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        assert( var_iri_ref == NULL );
        var_iri_ref = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( var_iri_ref );
        tmp_source_name_5 = var_iri_ref;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_authority );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_assign_source_6 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
        var_has_authority = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_6;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( var_iri_ref );
        tmp_source_name_6 = var_iri_ref;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_encode );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = const_str_plain_idna_encoder;
        CHECK_OBJECT( var_idna_encode );
        tmp_dict_value_1 = var_idna_encode;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 228;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_2;
        }
        assert( var_uri_ref == NULL );
        var_uri_ref = tmp_assign_source_7;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c746e3d74648aa361e95f8a1e9c72a62, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c746e3d74648aa361e95f8a1e9c72a62, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_13;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_1 = PyExc_ValueError;
        tmp_compexpr_right_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_2, 0, tmp_tuple_element_1 );
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_RFC3986Exception );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RFC3986Exception );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RFC3986Exception" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 229;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_13;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_2, 1, tmp_tuple_element_1 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "ocoooboooo";
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
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_six );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 230;
                type_description_1 = "ocoooboooo";
                goto try_except_handler_3;
            }

            tmp_source_name_7 = tmp_mvar_value_14;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_raise_from );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "ocoooboooo";
                goto try_except_handler_3;
            }
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_LocationParseError );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationParseError );
            }

            if ( tmp_mvar_value_15 == NULL )
            {
                Py_DECREF( tmp_called_name_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LocationParseError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 230;
                type_description_1 = "ocoooboooo";
                goto try_except_handler_3;
            }

            tmp_called_name_9 = tmp_mvar_value_15;
            CHECK_OBJECT( par_url );
            tmp_args_element_name_16 = par_url;
            frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 230;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_args_element_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_8 );

                exception_lineno = 230;
                type_description_1 = "ocoooboooo";
                goto try_except_handler_3;
            }
            tmp_args_element_name_17 = Py_None;
            frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 230;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_17 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "ocoooboooo";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 219;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame) frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ocoooboooo";
        goto try_except_handler_3;
        branch_end_3:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_8;
        assert( var_has_authority != NUITKA_BOOL_UNASSIGNED);
        tmp_and_left_value_1 = var_has_authority;
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
        CHECK_OBJECT( var_uri_ref );
        tmp_source_name_8 = var_uri_ref;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_authority );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_3 );
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_18;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_LocationParseError );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationParseError );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LocationParseError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 234;
                type_description_1 = "ocoooboooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_10 = tmp_mvar_value_16;
            CHECK_OBJECT( par_url );
            tmp_args_element_name_18 = par_url;
            frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 234;
            {
                PyObject *call_args[] = { tmp_args_element_name_18 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 234;
                type_description_1 = "ocoooboooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 234;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_17;
        CHECK_OBJECT( var_uri_ref );
        tmp_source_name_9 = var_uri_ref;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_scheme );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_4 );
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
        CHECK_OBJECT( var_uri_ref );
        tmp_source_name_10 = var_uri_ref;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_scheme );
        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 238;
        tmp_compexpr_left_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_lower );
        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_NORMALIZABLE_SCHEMES );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NORMALIZABLE_SCHEMES );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NORMALIZABLE_SCHEMES" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 238;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_5 = tmp_mvar_value_17;
        tmp_res = PySequence_Contains( tmp_compexpr_right_5, tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_instance_5;
            CHECK_OBJECT( var_uri_ref );
            tmp_called_instance_5 = var_uri_ref;
            frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 239;
            tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_normalize );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "ocoooboooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_uri_ref;
                assert( old != NULL );
                var_uri_ref = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_Validator );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Validator );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Validator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 244;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_18;
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 244;
        tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS( tmp_called_name_11 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        assert( var_validator == NULL );
        var_validator = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_11;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_source_name_12;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_19;
        CHECK_OBJECT( var_validator );
        tmp_source_name_11 = var_validator;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_check_validity_of );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_validator );
        tmp_source_name_12 = var_validator;
        tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_COMPONENT_NAMES );
        if ( tmp_dircall_arg2_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );

            exception_lineno = 247;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_4;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_called_instance_6 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_uri_ref );
        tmp_args_element_name_19 = var_uri_ref;
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_validate, call_args );
        }

        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_end_2;
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
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_c746e3d74648aa361e95f8a1e9c72a62, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_c746e3d74648aa361e95f8a1e9c72a62, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_mvar_value_19;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_ValidationError );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValidationError );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValidationError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 249;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_5;
        }

        tmp_compexpr_right_6 = tmp_mvar_value_19;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "ocoooboooo";
            goto try_except_handler_5;
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
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_13;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_called_name_13;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_args_element_name_22;
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_six );

            if (unlikely( tmp_mvar_value_20 == NULL ))
            {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
            }

            if ( tmp_mvar_value_20 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 250;
                type_description_1 = "ocoooboooo";
                goto try_except_handler_5;
            }

            tmp_source_name_13 = tmp_mvar_value_20;
            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_raise_from );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "ocoooboooo";
                goto try_except_handler_5;
            }
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_LocationParseError );

            if (unlikely( tmp_mvar_value_21 == NULL ))
            {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationParseError );
            }

            if ( tmp_mvar_value_21 == NULL )
            {
                Py_DECREF( tmp_called_name_12 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LocationParseError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 250;
                type_description_1 = "ocoooboooo";
                goto try_except_handler_5;
            }

            tmp_called_name_13 = tmp_mvar_value_21;
            CHECK_OBJECT( par_url );
            tmp_args_element_name_21 = par_url;
            frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 250;
            {
                PyObject *call_args[] = { tmp_args_element_name_21 };
                tmp_args_element_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
            }

            if ( tmp_args_element_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 250;
                type_description_1 = "ocoooboooo";
                goto try_except_handler_5;
            }
            tmp_args_element_name_22 = Py_None;
            frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 250;
            {
                PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_22 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_element_name_20 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "ocoooboooo";
                goto try_except_handler_5;
            }
            goto try_return_handler_5;
        }
        goto branch_end_6;
        branch_no_6:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 245;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame) frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ocoooboooo";
        goto try_except_handler_5;
        branch_end_6:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto frame_return_exit_1;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_source_name_14;
        CHECK_OBJECT( var_uri_ref );
        tmp_source_name_14 = var_uri_ref;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_path );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        assert( var_path == NULL );
        var_path = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT( var_path );
        tmp_operand_name_4 = var_path;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 257;
            type_description_1 = "ocoooboooo";
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
            nuitka_bool tmp_condition_result_8;
            int tmp_or_left_truth_2;
            nuitka_bool tmp_or_left_value_2;
            nuitka_bool tmp_or_right_value_2;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_source_name_15;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_source_name_16;
            CHECK_OBJECT( var_uri_ref );
            tmp_source_name_15 = var_uri_ref;
            tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_query );
            if ( tmp_compexpr_left_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 258;
                type_description_1 = "ocoooboooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_7 = Py_None;
            tmp_or_left_value_2 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_7 );
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
            CHECK_OBJECT( var_uri_ref );
            tmp_source_name_16 = var_uri_ref;
            tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_fragment );
            if ( tmp_compexpr_left_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 259;
                type_description_1 = "ocoooboooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_8 = Py_None;
            tmp_or_right_value_2 = ( tmp_compexpr_left_8 != tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_8 );
            tmp_condition_result_8 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_condition_result_8 = tmp_or_left_value_2;
            or_end_2:;
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
                PyObject *tmp_assign_source_11;
                tmp_assign_source_11 = const_str_empty;
                {
                    PyObject *old = var_path;
                    assert( old != NULL );
                    var_path = tmp_assign_source_11;
                    Py_INCREF( var_path );
                    Py_DECREF( old );
                }

            }
            goto branch_end_8;
            branch_no_8:;
            {
                PyObject *tmp_assign_source_12;
                tmp_assign_source_12 = Py_None;
                {
                    PyObject *old = var_path;
                    assert( old != NULL );
                    var_path = tmp_assign_source_12;
                    Py_INCREF( var_path );
                    Py_DECREF( old );
                }

            }
            branch_end_8:;
        }
        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_urllib3$util$url$$$function_9_parse_url$$$function_2_to_input_type(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[0] = var_is_string;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[0] );


        assert( var_to_input_type == NULL );
        var_to_input_type = tmp_assign_source_13;
    }
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_name_15;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_source_name_17;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_called_name_16;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_source_name_18;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_source_name_19;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_source_name_20;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_source_name_21;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_called_name_18;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_source_name_22;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_called_name_20;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_source_name_23;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_Url );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Url );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Url" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 273;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_14 = tmp_mvar_value_22;
        tmp_dict_key_2 = const_str_plain_scheme;
        CHECK_OBJECT( var_to_input_type );
        tmp_called_name_15 = var_to_input_type;
        CHECK_OBJECT( var_uri_ref );
        tmp_source_name_17 = var_uri_ref;
        tmp_args_element_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_scheme );
        if ( tmp_args_element_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_args_element_name_23 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_2 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_auth;
        CHECK_OBJECT( var_to_input_type );
        tmp_called_name_16 = var_to_input_type;
        CHECK_OBJECT( var_uri_ref );
        tmp_source_name_18 = var_uri_ref;
        tmp_args_element_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_userinfo );
        if ( tmp_args_element_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 275;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_dict_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 275;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_host;
        CHECK_OBJECT( var_to_input_type );
        tmp_called_name_17 = var_to_input_type;
        CHECK_OBJECT( var_uri_ref );
        tmp_source_name_19 = var_uri_ref;
        tmp_args_element_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_host );
        if ( tmp_args_element_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 276;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_dict_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        Py_DECREF( tmp_args_element_name_25 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 276;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_port;
        CHECK_OBJECT( var_uri_ref );
        tmp_source_name_20 = var_uri_ref;
        tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_port );
        if ( tmp_compexpr_left_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 277;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = Py_None;
        tmp_condition_result_9 = ( tmp_compexpr_left_9 != tmp_compexpr_right_9 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_9 );
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( var_uri_ref );
        tmp_source_name_21 = var_uri_ref;
        tmp_int_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_port );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 277;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 277;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_dict_value_5 = Py_None;
        Py_INCREF( tmp_dict_value_5 );
        condexpr_end_1:;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_path;
        CHECK_OBJECT( var_to_input_type );
        tmp_called_name_18 = var_to_input_type;
        if ( var_path == NULL )
        {
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 278;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_26 = var_path;
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_dict_value_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 278;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_query;
        CHECK_OBJECT( var_to_input_type );
        tmp_called_name_19 = var_to_input_type;
        CHECK_OBJECT( var_uri_ref );
        tmp_source_name_22 = var_uri_ref;
        tmp_args_element_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_query );
        if ( tmp_args_element_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 279;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 279;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_dict_value_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        Py_DECREF( tmp_args_element_name_27 );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 279;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_fragment;
        CHECK_OBJECT( var_to_input_type );
        tmp_called_name_20 = var_to_input_type;
        CHECK_OBJECT( var_uri_ref );
        tmp_source_name_23 = var_uri_ref;
        tmp_args_element_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_fragment );
        if ( tmp_args_element_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 280;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = { tmp_args_element_name_28 };
            tmp_dict_value_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
        }

        Py_DECREF( tmp_args_element_name_28 );
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 280;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame.f_lineno = 273;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_14, tmp_kw_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ocoooboooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c746e3d74648aa361e95f8a1e9c72a62 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c746e3d74648aa361e95f8a1e9c72a62 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c746e3d74648aa361e95f8a1e9c72a62 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c746e3d74648aa361e95f8a1e9c72a62, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c746e3d74648aa361e95f8a1e9c72a62->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c746e3d74648aa361e95f8a1e9c72a62, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c746e3d74648aa361e95f8a1e9c72a62,
        type_description_1,
        par_url,
        var_is_string,
        var_idna_encode,
        var_split_iri,
        var_iri_ref,
        (int)var_has_authority,
        var_uri_ref,
        var_validator,
        var_path,
        var_to_input_type
    );


    // Release cached frame.
    if ( frame_c746e3d74648aa361e95f8a1e9c72a62 == cache_frame_c746e3d74648aa361e95f8a1e9c72a62 )
    {
        Py_DECREF( frame_c746e3d74648aa361e95f8a1e9c72a62 );
    }
    cache_frame_c746e3d74648aa361e95f8a1e9c72a62 = NULL;

    assertFrameObject( frame_c746e3d74648aa361e95f8a1e9c72a62 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)var_is_string );
    Py_DECREF( var_is_string );
    var_is_string = NULL;

    Py_XDECREF( var_idna_encode );
    var_idna_encode = NULL;

    Py_XDECREF( var_split_iri );
    var_split_iri = NULL;

    Py_XDECREF( var_iri_ref );
    var_iri_ref = NULL;

    Py_XDECREF( var_uri_ref );
    var_uri_ref = NULL;

    Py_XDECREF( var_validator );
    var_validator = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_to_input_type );
    var_to_input_type = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)var_is_string );
    Py_DECREF( var_is_string );
    var_is_string = NULL;

    Py_XDECREF( var_idna_encode );
    var_idna_encode = NULL;

    Py_XDECREF( var_split_iri );
    var_split_iri = NULL;

    Py_XDECREF( var_iri_ref );
    var_iri_ref = NULL;

    Py_XDECREF( var_uri_ref );
    var_uri_ref = NULL;

    Py_XDECREF( var_validator );
    var_validator = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_to_input_type );
    var_to_input_type = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url );
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


static PyObject *impl_urllib3$util$url$$$function_9_parse_url$$$function_1_idna_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_idna = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_11d919e5be6c4ac96b263f3f54402721;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_c7097309caa33db85208996f28733a67_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_c7097309caa33db85208996f28733a67_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_11d919e5be6c4ac96b263f3f54402721 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_11d919e5be6c4ac96b263f3f54402721, codeobj_11d919e5be6c4ac96b263f3f54402721, module_urllib3$util$url, sizeof(void *)+sizeof(void *) );
    frame_11d919e5be6c4ac96b263f3f54402721 = cache_frame_11d919e5be6c4ac96b263f3f54402721;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_11d919e5be6c4ac96b263f3f54402721 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_11d919e5be6c4ac96b263f3f54402721 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_name );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_name );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
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
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_any );
        assert( tmp_called_name_1 != NULL );
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_name );
            tmp_iter_arg_1 = par_name;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "oo";
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
        MAKE_OR_REUSE_FRAME( cache_frame_c7097309caa33db85208996f28733a67_2, codeobj_c7097309caa33db85208996f28733a67, module_urllib3$util$url, sizeof(void *) );
        frame_c7097309caa33db85208996f28733a67_2 = cache_frame_c7097309caa33db85208996f28733a67_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_c7097309caa33db85208996f28733a67_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_c7097309caa33db85208996f28733a67_2 ) == 2 ); // Frame stack

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
                    exception_lineno = 208;
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
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_ord_arg_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( outline_0_var_x );
            tmp_ord_arg_1 = outline_0_var_x;
            tmp_compexpr_left_1 = BUILTIN_ORD( tmp_ord_arg_1 );
            if ( tmp_compexpr_left_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_compexpr_right_1 = const_int_pos_128;
            tmp_append_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            Py_DECREF( tmp_compexpr_left_1 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
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


                exception_lineno = 208;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
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
        NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url$$$function_1_idna_encode );
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
        RESTORE_FRAME_EXCEPTION( frame_c7097309caa33db85208996f28733a67_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_c7097309caa33db85208996f28733a67_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c7097309caa33db85208996f28733a67_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_c7097309caa33db85208996f28733a67_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_c7097309caa33db85208996f28733a67_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_c7097309caa33db85208996f28733a67_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_c7097309caa33db85208996f28733a67_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame.
        if ( frame_c7097309caa33db85208996f28733a67_2 == cache_frame_c7097309caa33db85208996f28733a67_2 )
        {
            Py_DECREF( frame_c7097309caa33db85208996f28733a67_2 );
        }
        cache_frame_c7097309caa33db85208996f28733a67_2 = NULL;

        assertFrameObject( frame_c7097309caa33db85208996f28733a67_2 );

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
        NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url$$$function_1_idna_encode );
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
        NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url$$$function_1_idna_encode );
        return NULL;
        outline_exception_1:;
        exception_lineno = 208;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_11d919e5be6c4ac96b263f3f54402721->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_plain_idna;
            tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$url;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = Py_None;
            tmp_level_name_1 = const_int_0;
            frame_11d919e5be6c4ac96b263f3f54402721->m_frame.f_lineno = 210;
            tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 210;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
            assert( var_idna == NULL );
            var_idna = tmp_assign_source_5;
        }
        goto try_end_1;
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
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_1 );
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_1 );
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_1 );

        if ( exception_keeper_tb_3 == NULL )
        {
            exception_keeper_tb_3 = MAKE_TRACEBACK( frame_11d919e5be6c4ac96b263f3f54402721, exception_keeper_lineno_3 );
        }
        else if ( exception_keeper_lineno_3 != 0 )
        {
            exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_11d919e5be6c4ac96b263f3f54402721, exception_keeper_lineno_3 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
        PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
        PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
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


                exception_lineno = 211;
                type_description_1 = "oo";
                goto try_except_handler_5;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_1;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_LocationParseError );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationParseError );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LocationParseError" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 212;
                    type_description_1 = "oo";
                    goto try_except_handler_5;
                }

                tmp_called_name_2 = tmp_mvar_value_1;
                frame_11d919e5be6c4ac96b263f3f54402721->m_frame.f_lineno = 212;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7_tuple, 0 ) );

                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 212;
                    type_description_1 = "oo";
                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 212;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                goto try_except_handler_5;
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 209;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_11d919e5be6c4ac96b263f3f54402721->m_frame) frame_11d919e5be6c4ac96b263f3f54402721->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oo";
            goto try_except_handler_5;
            branch_end_2:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url$$$function_1_idna_encode );
        return NULL;
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
        // Tried code:
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( var_idna );
            tmp_source_name_1 = var_idna;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encode );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 214;
                type_description_1 = "oo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( par_name );
            tmp_called_instance_1 = par_name;
            frame_11d919e5be6c4ac96b263f3f54402721->m_frame.f_lineno = 214;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 214;
                type_description_1 = "oo";
                goto try_except_handler_6;
            }
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_80bb7efdcf083ae7bdc4dd85cadebd85 );
            frame_11d919e5be6c4ac96b263f3f54402721->m_frame.f_lineno = 214;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 214;
                type_description_1 = "oo";
                goto try_except_handler_6;
            }
            goto frame_return_exit_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url$$$function_1_idna_encode );
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

        // Preserve existing published exception.
        exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_2 );
        exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_2 );
        exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_2 );

        if ( exception_keeper_tb_5 == NULL )
        {
            exception_keeper_tb_5 = MAKE_TRACEBACK( frame_11d919e5be6c4ac96b263f3f54402721, exception_keeper_lineno_5 );
        }
        else if ( exception_keeper_lineno_5 != 0 )
        {
            exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_11d919e5be6c4ac96b263f3f54402721, exception_keeper_lineno_5 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
        PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
        PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_2;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            CHECK_OBJECT( var_idna );
            tmp_source_name_2 = var_idna;
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_IDNAError );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_1 = "oo";
                goto try_except_handler_7;
            }
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_1 = "oo";
                goto try_except_handler_7;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_LocationParseError );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationParseError );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LocationParseError" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 216;
                    type_description_1 = "oo";
                    goto try_except_handler_7;
                }

                tmp_called_name_4 = tmp_mvar_value_2;
                tmp_left_name_1 = const_str_digest_52fcab19777304152a06b82c3c4b25a9;
                CHECK_OBJECT( par_name );
                tmp_right_name_1 = par_name;
                tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 216;
                    type_description_1 = "oo";
                    goto try_except_handler_7;
                }
                frame_11d919e5be6c4ac96b263f3f54402721->m_frame.f_lineno = 216;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_raise_type_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 216;
                    type_description_1 = "oo";
                    goto try_except_handler_7;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 216;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                goto try_except_handler_7;
            }
            goto branch_end_3;
            branch_no_3:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 213;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_11d919e5be6c4ac96b263f3f54402721->m_frame) frame_11d919e5be6c4ac96b263f3f54402721->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oo";
            goto try_except_handler_7;
            branch_end_3:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url$$$function_1_idna_encode );
        return NULL;
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
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11d919e5be6c4ac96b263f3f54402721 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_11d919e5be6c4ac96b263f3f54402721 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11d919e5be6c4ac96b263f3f54402721 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_11d919e5be6c4ac96b263f3f54402721, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_11d919e5be6c4ac96b263f3f54402721->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_11d919e5be6c4ac96b263f3f54402721, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_11d919e5be6c4ac96b263f3f54402721,
        type_description_1,
        par_name,
        var_idna
    );


    // Release cached frame.
    if ( frame_11d919e5be6c4ac96b263f3f54402721 == cache_frame_11d919e5be6c4ac96b263f3f54402721 )
    {
        Py_DECREF( frame_11d919e5be6c4ac96b263f3f54402721 );
    }
    cache_frame_11d919e5be6c4ac96b263f3f54402721 = NULL;

    assertFrameObject( frame_11d919e5be6c4ac96b263f3f54402721 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    CHECK_OBJECT( par_name );
    tmp_return_value = par_name;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url$$$function_1_idna_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_idna );
    var_idna = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_idna );
    var_idna = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url$$$function_1_idna_encode );
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


static PyObject *impl_urllib3$util$url$$$function_9_parse_url$$$function_2_to_input_type( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_fc23a8a691e5aa03a9bad321333db51f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fc23a8a691e5aa03a9bad321333db51f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fc23a8a691e5aa03a9bad321333db51f, codeobj_fc23a8a691e5aa03a9bad321333db51f, module_urllib3$util$url, sizeof(void *)+sizeof(void *) );
    frame_fc23a8a691e5aa03a9bad321333db51f = cache_frame_fc23a8a691e5aa03a9bad321333db51f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fc23a8a691e5aa03a9bad321333db51f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fc23a8a691e5aa03a9bad321333db51f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_1 = par_x;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "is_string" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 269;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }

            tmp_operand_name_1 = PyCell_GET( self->m_closure[0] );
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;
                type_description_1 = "oc";
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
            CHECK_OBJECT( par_x );
            tmp_isinstance_inst_1 = par_x;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_six );

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

                exception_lineno = 269;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_binary_type );
            if ( tmp_isinstance_cls_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            Py_DECREF( tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_2 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_2 = tmp_and_left_value_1;
            and_end_1:;
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
                CHECK_OBJECT( par_x );
                tmp_called_instance_1 = par_x;
                frame_fc23a8a691e5aa03a9bad321333db51f->m_frame.f_lineno = 270;
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 270;
                    type_description_1 = "oc";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc23a8a691e5aa03a9bad321333db51f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc23a8a691e5aa03a9bad321333db51f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc23a8a691e5aa03a9bad321333db51f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fc23a8a691e5aa03a9bad321333db51f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fc23a8a691e5aa03a9bad321333db51f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fc23a8a691e5aa03a9bad321333db51f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fc23a8a691e5aa03a9bad321333db51f,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_fc23a8a691e5aa03a9bad321333db51f == cache_frame_fc23a8a691e5aa03a9bad321333db51f )
    {
        Py_DECREF( frame_fc23a8a691e5aa03a9bad321333db51f );
    }
    cache_frame_fc23a8a691e5aa03a9bad321333db51f = NULL;

    assertFrameObject( frame_fc23a8a691e5aa03a9bad321333db51f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url$$$function_2_to_input_type );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_9_parse_url$$$function_2_to_input_type );
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


static PyObject *impl_urllib3$util$url$$$function_10_get_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *var_p = NULL;
    struct Nuitka_FrameObject *frame_297296c56e6b82f67b26982927f2eda6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_297296c56e6b82f67b26982927f2eda6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_297296c56e6b82f67b26982927f2eda6, codeobj_297296c56e6b82f67b26982927f2eda6, module_urllib3$util$url, sizeof(void *)+sizeof(void *) );
    frame_297296c56e6b82f67b26982927f2eda6 = cache_frame_297296c56e6b82f67b26982927f2eda6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_297296c56e6b82f67b26982927f2eda6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_297296c56e6b82f67b26982927f2eda6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_parse_url );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "parse_url" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_url );
        tmp_args_element_name_1 = par_url;
        frame_297296c56e6b82f67b26982927f2eda6->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_p == NULL );
        var_p = tmp_assign_source_1;
    }
    {
        PyObject *tmp_tuple_element_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( var_p );
        tmp_source_name_1 = var_p;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_scheme );
        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 289;
            type_description_1 = "oo";
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
        Py_DECREF( tmp_or_left_value_1 );
        tmp_or_right_value_1 = const_str_plain_http;
        Py_INCREF( tmp_or_right_value_1 );
        tmp_tuple_element_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_tuple_element_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_return_value = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_p );
        tmp_source_name_2 = var_p;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hostname );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_p );
        tmp_source_name_3 = var_p;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_port );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_297296c56e6b82f67b26982927f2eda6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_297296c56e6b82f67b26982927f2eda6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_297296c56e6b82f67b26982927f2eda6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_297296c56e6b82f67b26982927f2eda6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_297296c56e6b82f67b26982927f2eda6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_297296c56e6b82f67b26982927f2eda6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_297296c56e6b82f67b26982927f2eda6,
        type_description_1,
        par_url,
        var_p
    );


    // Release cached frame.
    if ( frame_297296c56e6b82f67b26982927f2eda6 == cache_frame_297296c56e6b82f67b26982927f2eda6 )
    {
        Py_DECREF( frame_297296c56e6b82f67b26982927f2eda6 );
    }
    cache_frame_297296c56e6b82f67b26982927f2eda6 = NULL;

    assertFrameObject( frame_297296c56e6b82f67b26982927f2eda6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_10_get_host );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)var_p );
    Py_DECREF( var_p );
    var_p = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$url$$$function_10_get_host );
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



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_10_get_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function_10_get_host,
        const_str_plain_get_host,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_297296c56e6b82f67b26982927f2eda6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$url,
        const_str_digest_81e795540c1089cfcc1b50aaf38a2508,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_1___new__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function_1___new__,
        const_str_plain___new__,
#if PYTHON_VERSION >= 300
        const_str_digest_d059371e62041157c75568892a4792b2,
#endif
        codeobj_e06397723d1c74a2cc57f5fb772827a6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$url,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_2_hostname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function_2_hostname,
        const_str_plain_hostname,
#if PYTHON_VERSION >= 300
        const_str_digest_d503b56d297494d3676c16d8414f11cd,
#endif
        codeobj_339948c20e092c1a2a7471856e25cf9e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$url,
        const_str_digest_f43e189ec0b8de0c869cd891f79f8d5c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_3_request_uri(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function_3_request_uri,
        const_str_plain_request_uri,
#if PYTHON_VERSION >= 300
        const_str_digest_b8db79b9d0912cab551b32203f01865e,
#endif
        codeobj_38aa4122539bdc8552e4eb59d2f59cd5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$url,
        const_str_digest_eee64e928d1d5bb591f23189f7760b5c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_4_netloc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function_4_netloc,
        const_str_plain_netloc,
#if PYTHON_VERSION >= 300
        const_str_digest_e588ffd8998d7aa65d2f47eef1a83f98,
#endif
        codeobj_343c0f54f936a926fb92a7c06964f6cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$url,
        const_str_digest_c75c0d39d2a0196f8742722a8a16332e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_5_url(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function_5_url,
        const_str_plain_url,
#if PYTHON_VERSION >= 300
        const_str_digest_67a7add68e3824f4c255c17aad8377c0,
#endif
        codeobj_056f2867ec97b81fc686d658702b2627,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$url,
        const_str_digest_6c649fac88b2fbb1f84d4549e20576e1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_6___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function_6___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        const_str_digest_ba44c1ca6ead3bd22179c5b60b235495,
#endif
        codeobj_1d26f2ed2277d7dedd8e870b2ad2991b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$url,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_7_split_first(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function_7_split_first,
        const_str_plain_split_first,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2d3d1522b8069529693885dfdfdeb643,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$url,
        const_str_digest_f2e7abf6479a90230cbe3ce330dc9ae3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_8__encode_invalid_chars( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function_8__encode_invalid_chars,
        const_str_plain__encode_invalid_chars,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fb8704f2ddaad393b79af470b4b5537f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$url,
        const_str_digest_765dab07d74be80538ce6ac3920866dd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_9_parse_url(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function_9_parse_url,
        const_str_plain_parse_url,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c746e3d74648aa361e95f8a1e9c72a62,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$url,
        const_str_digest_9f408ca4b5e4cc49018b5a17e7f41139,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_9_parse_url$$$function_1_idna_encode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function_9_parse_url$$$function_1_idna_encode,
        const_str_plain_idna_encode,
#if PYTHON_VERSION >= 300
        const_str_digest_e9a6f4feb2dc60b44c5283699c7cabc7,
#endif
        codeobj_11d919e5be6c4ac96b263f3f54402721,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$url,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function_9_parse_url$$$function_2_to_input_type(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function_9_parse_url$$$function_2_to_input_type,
        const_str_plain_to_input_type,
#if PYTHON_VERSION >= 300
        const_str_digest_03397e6c6f8efefb5edec8e8f233752a,
#endif
        codeobj_fc23a8a691e5aa03a9bad321333db51f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$url,
        NULL,
        1
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$url =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.url",
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

MOD_INIT_DECL( urllib3$util$url )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$url );
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
    puts("urllib3.util.url: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.url: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.url: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$url" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$url = Py_InitModule4(
        "urllib3.util.url",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$util$url = PyModule_Create( &mdef_urllib3$util$url );
#endif

    moduledict_urllib3$util$url = MODULE_DICT( module_urllib3$util$url );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_urllib3$util$url,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$url,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$url,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$url,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$util$url );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b04d4c22614b9ff9b4fadfb8c8b3f608, module_urllib3$util$url );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_1cc67d1b46ca6a490f34665d25e1178f;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_urllib3$util$url_25 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_148e34529516cf4e7f4c76384550ebbb_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_148e34529516cf4e7f4c76384550ebbb_2 = NULL;
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
        UPDATE_STRING_DICT0( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_1cc67d1b46ca6a490f34665d25e1178f = MAKE_MODULE_FRAME( codeobj_1cc67d1b46ca6a490f34665d25e1178f, module_urllib3$util$url );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1cc67d1b46ca6a490f34665d25e1178f );
    assert( Py_REFCNT( frame_1cc67d1b46ca6a490f34665d25e1178f ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_1cc67d1b46ca6a490f34665d25e1178f->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_re;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$url;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_1cc67d1b46ca6a490f34665d25e1178f->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_collections;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$url;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_namedtuple_tuple;
        tmp_level_name_2 = const_int_0;
        frame_1cc67d1b46ca6a490f34665d25e1178f->m_frame.f_lineno = 3;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_namedtuple );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_namedtuple, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_exceptions;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$url;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_LocationParseError_tuple;
        tmp_level_name_3 = const_int_pos_2;
        frame_1cc67d1b46ca6a490f34665d25e1178f->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_urllib3$util$url,
                const_str_plain_LocationParseError,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_LocationParseError );
        }

        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_LocationParseError, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_packages;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util$url;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_six_str_plain_rfc3986_tuple;
        tmp_level_name_4 = const_int_pos_2;
        frame_1cc67d1b46ca6a490f34665d25e1178f->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_urllib3$util$url,
                const_str_plain_six,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_six );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_urllib3$util$url,
                const_str_plain_rfc3986,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_rfc3986 );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_rfc3986, tmp_assign_source_10 );
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_6c98314eb39c4e401401496918ddcefd;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$util$url;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_RFC3986Exception_str_plain_ValidationError_tuple;
        tmp_level_name_5 = const_int_pos_2;
        frame_1cc67d1b46ca6a490f34665d25e1178f->m_frame.f_lineno = 7;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_urllib3$util$url,
                const_str_plain_RFC3986Exception,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_RFC3986Exception );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_RFC3986Exception, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_urllib3$util$url,
                const_str_plain_ValidationError,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ValidationError );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_ValidationError, tmp_assign_source_13 );
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_251e998edf7039761db2ef3d557cc500;
        tmp_globals_name_6 = (PyObject *)moduledict_urllib3$util$url;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_Validator_tuple;
        tmp_level_name_6 = const_int_pos_2;
        frame_1cc67d1b46ca6a490f34665d25e1178f->m_frame.f_lineno = 8;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_urllib3$util$url,
                const_str_plain_Validator,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Validator );
        }

        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_Validator, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_7bff4188ca4a22a0aa0a123e748246d2;
        tmp_globals_name_7 = (PyObject *)moduledict_urllib3$util$url;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_c8aedce4730d4dfb3e10e3bec653f9b1_tuple;
        tmp_level_name_7 = const_int_pos_2;
        frame_1cc67d1b46ca6a490f34665d25e1178f->m_frame.f_lineno = 9;
        tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_urllib3$util$url,
                const_str_plain_abnf_regexp,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_abnf_regexp );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_abnf_regexp, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_urllib3$util$url,
                const_str_plain_normalizers,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_normalizers );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_normalizers, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_urllib3$util$url,
                const_str_plain_compat,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_compat );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_compat, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_urllib3$util$url,
                const_str_plain_misc,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_misc );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_misc, tmp_assign_source_19 );
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
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = LIST_COPY( const_list_e5c5e46e19f9df51f3e1864dfe99c669_list );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_url_attrs, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = const_tuple_str_plain_http_str_plain_https_none_tuple;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_NORMALIZABLE_SCHEMES, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_re );

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

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_1cc67d1b46ca6a490f34665d25e1178f->m_frame.f_lineno = 19;
        tmp_assign_source_22 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_965d2d7f57f4d4ad4fed3a2e2dd0be7e_tuple, 0 ) );

        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_SCHEME_REGEX, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_abnf_regexp );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abnf_regexp );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abnf_regexp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_UNRESERVED_CHARS_SET );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_abnf_regexp );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abnf_regexp );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abnf_regexp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_5;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SUB_DELIMITERS_SET );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = PySet_New( const_set_94862d1b972dbe3e8dbcd9d9f3051bdc );
        tmp_assign_source_23 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_PATH_CHARS, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_left_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_right_name_3;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_PATH_CHARS );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PATH_CHARS );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_left_name_3 = tmp_mvar_value_6;
        tmp_right_name_3 = PySet_New( const_set_ce2337c37dea2cd674cc672020e00412 );
        tmp_assign_source_24 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert( tmp_assign_unpack_1__assign_source == NULL );
        tmp_assign_unpack_1__assign_source = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_25 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_QUERY_CHARS, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_26 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_FRAGMENT_CHARS, tmp_assign_source_26 );
    }
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_namedtuple );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtuple );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "namedtuple" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;

            goto try_except_handler_4;
        }

        tmp_called_name_1 = tmp_mvar_value_7;
        tmp_args_element_name_1 = const_str_plain_Url;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_url_attrs );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_url_attrs );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "url_attrs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;

            goto try_except_handler_4;
        }

        tmp_args_element_name_2 = tmp_mvar_value_8;
        frame_1cc67d1b46ca6a490f34665d25e1178f->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        tmp_assign_source_27 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
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


            exception_lineno = 25;

            goto try_except_handler_4;
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


            exception_lineno = 25;

            goto try_except_handler_4;
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


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_29 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_29;
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


            exception_lineno = 25;

            goto try_except_handler_4;
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


            exception_lineno = 25;

            goto try_except_handler_4;
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
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_4 = tmp_class_creation_1__metaclass;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_4;
            }
            tmp_tuple_element_2 = const_str_plain_Url;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_1cc67d1b46ca6a490f34665d25e1178f->m_frame.f_lineno = 25;
            tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_30;
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


                exception_lineno = 25;

                goto try_except_handler_4;
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
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_6;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 25;

                    goto try_except_handler_4;
                }
                tmp_right_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_3 );
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
                    Py_DECREF( tmp_right_name_4 );

                    exception_lineno = 25;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 25;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 25;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_31;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_urllib3$util$url_25 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b04d4c22614b9ff9b4fadfb8c8b3f608;
        tmp_res = PyObject_SetItem( locals_urllib3$util$url_25, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_843e5e449c5c660cac4f7289e6c2e25c;
        tmp_res = PyObject_SetItem( locals_urllib3$util$url_25, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_Url;
        tmp_res = PyObject_SetItem( locals_urllib3$util$url_25, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_148e34529516cf4e7f4c76384550ebbb_2, codeobj_148e34529516cf4e7f4c76384550ebbb, module_urllib3$util$url, sizeof(void *) );
        frame_148e34529516cf4e7f4c76384550ebbb_2 = cache_frame_148e34529516cf4e7f4c76384550ebbb_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_148e34529516cf4e7f4c76384550ebbb_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_148e34529516cf4e7f4c76384550ebbb_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_tuple_empty;
        tmp_res = PyObject_SetItem( locals_urllib3$util$url_25, const_str_plain___slots__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_none_none_none_none_none_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$url$$$function_1___new__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_urllib3$util$url_25, const_str_plain___new__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_4;
            tmp_res = MAPPING_HAS_ITEM( locals_urllib3$util$url_25, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
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
            tmp_called_name_3 = PyObject_GetItem( locals_urllib3$util$url_25, const_str_plain_property );

            if ( tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_3 = MAKE_FUNCTION_urllib3$util$url$$$function_2_hostname(  );



            frame_148e34529516cf4e7f4c76384550ebbb_2->m_frame.f_lineno = 42;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_name_4 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_4 = MAKE_FUNCTION_urllib3$util$url$$$function_2_hostname(  );



            frame_148e34529516cf4e7f4c76384550ebbb_2->m_frame.f_lineno = 42;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem( locals_urllib3$util$url_25, const_str_plain_hostname, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_6;
            tmp_res = MAPPING_HAS_ITEM( locals_urllib3$util$url_25, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
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
            tmp_called_name_5 = PyObject_GetItem( locals_urllib3$util$url_25, const_str_plain_property );

            if ( tmp_called_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
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

            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_5 = MAKE_FUNCTION_urllib3$util$url$$$function_3_request_uri(  );



            frame_148e34529516cf4e7f4c76384550ebbb_2->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_name_6 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_6 = MAKE_FUNCTION_urllib3$util$url$$$function_3_request_uri(  );



            frame_148e34529516cf4e7f4c76384550ebbb_2->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem( locals_urllib3$util$url_25, const_str_plain_request_uri, tmp_dictset_value );
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
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_8;
            tmp_res = MAPPING_HAS_ITEM( locals_urllib3$util$url_25, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
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
            tmp_called_name_7 = PyObject_GetItem( locals_urllib3$util$url_25, const_str_plain_property );

            if ( tmp_called_name_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_7 = MAKE_FUNCTION_urllib3$util$url$$$function_4_netloc(  );



            frame_148e34529516cf4e7f4c76384550ebbb_2->m_frame.f_lineno = 57;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_name_8 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_8 = MAKE_FUNCTION_urllib3$util$url$$$function_4_netloc(  );



            frame_148e34529516cf4e7f4c76384550ebbb_2->m_frame.f_lineno = 57;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem( locals_urllib3$util$url_25, const_str_plain_netloc, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_10;
            tmp_res = MAPPING_HAS_ITEM( locals_urllib3$util$url_25, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
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
            tmp_called_name_9 = PyObject_GetItem( locals_urllib3$util$url_25, const_str_plain_property );

            if ( tmp_called_name_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_9 = MAKE_FUNCTION_urllib3$util$url$$$function_5_url(  );



            frame_148e34529516cf4e7f4c76384550ebbb_2->m_frame.f_lineno = 64;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_name_10 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_10 = MAKE_FUNCTION_urllib3$util$url$$$function_5_url(  );



            frame_148e34529516cf4e7f4c76384550ebbb_2->m_frame.f_lineno = 64;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem( locals_urllib3$util$url_25, const_str_plain_url, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$url$$$function_6___str__(  );



        tmp_res = PyObject_SetItem( locals_urllib3$util$url_25, const_str_plain___str__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_148e34529516cf4e7f4c76384550ebbb_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_148e34529516cf4e7f4c76384550ebbb_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_148e34529516cf4e7f4c76384550ebbb_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_148e34529516cf4e7f4c76384550ebbb_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_148e34529516cf4e7f4c76384550ebbb_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_148e34529516cf4e7f4c76384550ebbb_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_148e34529516cf4e7f4c76384550ebbb_2 == cache_frame_148e34529516cf4e7f4c76384550ebbb_2 )
        {
            Py_DECREF( frame_148e34529516cf4e7f4c76384550ebbb_2 );
        }
        cache_frame_148e34529516cf4e7f4c76384550ebbb_2 = NULL;

        assertFrameObject( frame_148e34529516cf4e7f4c76384550ebbb_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_11 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_Url;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_urllib3$util$url_25;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_1cc67d1b46ca6a490f34665d25e1178f->m_frame.f_lineno = 25;
            tmp_assign_source_33 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_6;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_33;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_32 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_32 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$url );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_urllib3$util$url_25 );
        locals_urllib3$util$url_25 = NULL;
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

        Py_DECREF( locals_urllib3$util$url_25 );
        locals_urllib3$util$url_25 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$url );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$util$url );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 25;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_Url, tmp_assign_source_32 );
    }
    goto try_end_4;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1cc67d1b46ca6a490f34665d25e1178f );
#endif
    popFrameStack();

    assertFrameObject( frame_1cc67d1b46ca6a490f34665d25e1178f );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1cc67d1b46ca6a490f34665d25e1178f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1cc67d1b46ca6a490f34665d25e1178f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1cc67d1b46ca6a490f34665d25e1178f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1cc67d1b46ca6a490f34665d25e1178f, exception_lineno );
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

    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_urllib3$util$url$$$function_7_split_first(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_split_first, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_35 = MAKE_FUNCTION_urllib3$util$url$$$function_8__encode_invalid_chars( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain__encode_invalid_chars, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_urllib3$util$url$$$function_9_parse_url(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_parse_url, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_urllib3$util$url$$$function_10_get_host(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain_get_host, tmp_assign_source_37 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_urllib3$util$url );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
