/* Generated code for Python module 'requests.cookies'
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

/* The "_module_requests$cookies" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$cookies;
PyDictObject *moduledict_requests$cookies;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_threading;
extern PyObject *const_str_plain_set;
static PyObject *const_str_digest_40890ce8458196445ad3a61ce14829f8;
extern PyObject *const_str_plain_headers;
static PyObject *const_str_plain_set_policy;
static PyObject *const_str_digest_c9dd2760a1399f089d616717f6e41ae2;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_dict;
static PyObject *const_str_digest_e02118ec259954e10ca6d6356803797f;
static PyObject *const_str_plain_multiple_domains;
extern PyObject *const_tuple_str_plain_path_tuple;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_plain_cookie_in_jar;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_8282cde113cd2232a516d421ec587b65;
static PyObject *const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0;
static PyObject *const_str_digest_101fa36882b0f5da69e72374403c2c30;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_MockRequest;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain_toReturn;
extern PyObject *const_str_plain_args;
static PyObject *const_str_plain_get_header;
static PyObject *const_str_plain_badargs;
extern PyObject *const_tuple_str_chr_34_tuple;
static PyObject *const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e;
extern PyObject *const_str_plain_err;
static PyObject *const_str_digest_5266e491bdb204b2a45e0a788e9bac94;
static PyObject *const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain__internal_utils;
static PyObject *const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa;
static PyObject *const_str_plain_new_jar;
extern PyObject *const_str_plain_items;
extern PyObject *const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple;
static PyObject *const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple;
static PyObject *const_str_plain_domain_initial_dot;
static PyObject *const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_str_plain_fragment;
static PyObject *const_str_digest_0a2127aa931e582083c667383d216ebd;
static PyObject *const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_d3a4a40c67458b1207db4bc7ab20d310;
static PyObject *const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple;
static PyObject *const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7;
static PyObject *const_str_digest_8d200ac749deb0ed034c3f2346adcc3d;
static PyObject *const_str_digest_e43e9402062b1dc16610d92a6e06da93;
extern PyObject *const_str_plain_get_type;
static PyObject *const_str_plain_httponly;
extern PyObject *const_str_plain_paths;
static PyObject *const_tuple_0a21cfa0564c2ba78573baca86543185_tuple;
static PyObject *const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
static PyObject *const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a;
static PyObject *const_tuple_ca917a44106411b262150e155c627a6c_tuple;
static PyObject *const_str_digest_445933e6a124a5d41f1f32e33f377bc9;
static PyObject *const_str_plain__find_no_duplicates;
extern PyObject *const_str_plain_get_host;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_digest_aba783cd55ce183297e8f8d9ff1dc698;
static PyObject *const_tuple_str_plain_MockRequest_tuple_type_object_tuple_tuple;
static PyObject *const_str_plain_set_cookie;
static PyObject *const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple;
static PyObject *const_str_plain_domains;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_MutableMapping;
static PyObject *const_str_digest_9559440875cf716ec7a8bef311cbaefe;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_44db063164c966fa5386728c86c1a06f;
static PyObject *const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d;
static PyObject *const_str_plain__headers;
static PyObject *const_str_digest_0d84ffc2aed365c467af25f17254de9e;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_cookielib;
extern PyObject *const_str_plain_time;
static PyObject *const_str_plain_morsel_to_cookie;
static PyObject *const_str_digest_741e4a7055b20857d935a0f7ed1c4abe;
extern PyObject *const_str_plain_urlparse;
static PyObject *const_str_digest_5c9dad01a3c84d4b998a25c6f245d693;
extern PyObject *const_tuple_str_plain_to_native_string_tuple;
static PyObject *const_str_plain_MockResponse;
static PyObject *const_str_plain_names_from_jar;
static PyObject *const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0;
static PyObject *const_str_digest_ad2094029011821e111452c0603108d0;
static PyObject *const_str_plain_time_template;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_b19ae27d1753e06c28990a42518b1f44;
static PyObject *const_str_digest_1ffe275872914b64c240c8cb178005ea;
extern PyObject *const_str_plain_host;
extern PyObject *const_str_plain_get_cookie_header;
extern PyObject *const_str_plain_iterkeys;
static PyObject *const_str_digest_58821042b0e0d98cc3b40076b38affdd;
static PyObject *const_str_digest_33e1091efb89a5aa5c06480eca194fed;
static PyObject *const_str_plain_create_cookie;
static PyObject *const_str_digest_0cf04dad003066735b1fdc1881f334a1;
static PyObject *const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple;
extern PyObject *const_str_plain_path;
static PyObject *const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd;
static PyObject *const_str_plain_is_unverifiable;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee;
static PyObject *const_str_digest_c99227a29db521837b47fa67726c6a3c;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_573342b2a8e1af18fbe63f15ee63f11b;
extern PyObject *const_str_plain_iteritems;
extern PyObject *const_str_plain_query;
static PyObject *const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f;
extern PyObject *const_str_plain_netloc;
static PyObject *const_dict_a5e68083723d45b7dd5e500852a4245b;
extern PyObject *const_str_plain_comment;
extern PyObject *const_str_plain_cookiejar;
extern PyObject *const_str_plain__r;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_domain;
static PyObject *const_str_digest_2aa7f18650b70bafed61b449ab43cbad;
extern PyObject *const_tuple_str_dot_tuple;
static PyObject *const_str_plain_add_unredirected_header;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_strptime;
static PyObject *const_str_digest_2fb13ce01af8e322e1090db877e250bd;
extern PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple;
static PyObject *const_str_digest_12188133309ffc390643b7a732954d08;
static PyObject *const_str_plain_unverifiable;
static PyObject *const_str_plain_get_new_headers;
static PyObject *const_str_digest_2041229f0580a80f49d71dc1aca7539f;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_calendar;
static PyObject *const_str_plain_domain_specified;
static PyObject *const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_str_plain_Host_tuple;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_endswith;
static PyObject *const_str_digest_80fe00ea301d02293abaf9dea17cddac;
static PyObject *const_str_plain_add_cookie_header;
static PyObject *const_str_digest_d4e8bce3e52a50e29fc0c09bd0f73e7f;
static PyObject *const_str_plain_timegm;
static PyObject *const_str_plain_rfc2109;
extern PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple;
static PyObject *const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple;
static PyObject *const_str_digest_955b7d6fef0bcb66b462d15cb6f41169;
static PyObject *const_str_plain_path_specified;
static PyObject *const_str_plain_list_domains;
extern PyObject *const_str_plain_Host;
static PyObject *const_str_digest_edb2a15c85f24da38984c0b5356f21c0;
static PyObject *const_str_digest_59f19da226d4479328efe53726a2e397;
static PyObject *const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d;
extern PyObject *const_tuple_str_plain_self_str_plain_state_tuple;
static PyObject *const_str_digest_bb11d917f97bb6215fd11706382927d9;
static PyObject *const_str_plain_get_dict;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___contains__;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_plain_has_header;
static PyObject *const_str_digest_ea904bab707be16235fbd17c19767f9f;
static PyObject *const_str_digest_58322b83779ad7d89ba5c63e2fe2855c;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_str_plain_HttpOnly;
extern PyObject *const_str_plain_cookie_dict;
extern PyObject *const_str_plain_rest;
extern PyObject *const_str_plain_encoding;
static PyObject *const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_plain__cookies_lock;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___setstate__;
static PyObject *const_str_digest_2a2d5b06d38da952ad812a68992fbb10;
static PyObject *const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6;
static PyObject *const_tuple_str_plain__cookies_lock_tuple;
static PyObject *const_str_digest_5427312272820286dba5b26f263d4c79;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain__original_response;
extern PyObject *const_str_plain_Cookie;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_response;
static PyObject *const_str_plain_new_cj;
static PyObject *const_str_digest_ccf021f29934e59f3e942390d0f913c3;
static PyObject *const_tuple_str_plain_self_str_plain_new_cj_tuple;
extern PyObject *const_str_plain_cookies;
extern PyObject *const_tuple_none_true_tuple;
static PyObject *const_str_digest_94ebad60c38a4f103db32744a5bab84d;
static PyObject *const_tuple_str_plain_Cookie_tuple;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_overwrite;
static PyObject *const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69;
static PyObject *const_str_digest_a9d19ccf5848be851d2f630cfe17789d;
extern PyObject *const_str_plain_to_native_string;
extern PyObject *const_str_plain_extract_cookies_to_jar;
static PyObject *const_str_plain__new_headers;
static PyObject *const_str_digest_6f0eeed3729339eac6c86da181041a13;
static PyObject *const_str_digest_c6a3c61d8189ea3789c38808f9f3af27;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
static PyObject *const_str_digest_fb0e88f14b774d1e98d525584951eabc;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_str_digest_28c35b2d382d530cb9f8e567735ee113;
static PyObject *const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3;
extern PyObject *const_str_digest_c245c8a772b3a33119deac8565a08f57;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_parsed;
static PyObject *const_str_plain_CookieConflictError;
static PyObject *const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d;
extern PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple;
static PyObject *const_str_plain__find;
static PyObject *const_str_plain_clearables;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba;
extern PyObject *const_str_plain__copy_cookie_jar;
extern PyObject *const_dict_81b3970727674c20ce12b1a4757dad21;
static PyObject *const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3;
static PyObject *const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple;
static PyObject *const_str_plain_expires;
extern PyObject *const_str_plain_req;
static PyObject *const_tuple_str_plain_self_str_plain_cookie_tuple;
static PyObject *const_tuple_str_plain_cookie_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_85e0ea626320458ddd4363cffbfdc559;
static PyObject *const_tuple_str_plain_self_str_plain_request_tuple;
static PyObject *const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6;
static PyObject *const_str_plain_comment_url;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_08b25300475453472c10345ee7168b50;
static PyObject *const_str_plain_get_origin_req_host;
static PyObject *const_str_plain_get_policy;
static PyObject *const_str_digest_572b1e9f5dc0656103cb358a7cbea16a;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_chr_47;
static PyObject *const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple;
static PyObject *const_str_digest_138ef95cec671591d9bedfa7e0898703;
extern PyObject *const_str_plain_params;
static PyObject *const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c;
extern PyObject *const_str_plain_RequestsCookieJar;
static PyObject *const_str_digest_95cacfdffdeafa2154ddb2520f2fb58f;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_port;
static PyObject *const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple;
extern PyObject *const_str_plain_values;
static PyObject *const_str_digest_59021ee0ac4a578b9169d1a96b78e1da;
static PyObject *const_str_digest_2fd659d0d93422f0a9d09e643f3b5831;
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain___getstate__;
static PyObject *const_str_digest_b270aaa39204bf1a293395efb6982c3e;
static PyObject *const_str_plain_morsel;
extern PyObject *const_str_plain_other;
static PyObject *const_str_digest_0d043b9a6c2c506833bb59840ef22ffd;
extern PyObject *const_str_plain_state;
static PyObject *const_str_digest_b30191bdb52236874918a4b5c3c5db8b;
static PyObject *const_tuple_str_plain_CookieConflictError_tuple_type_RuntimeError_tuple_tuple;
static PyObject *const_str_digest_019c0800875ec82d0b2ac07098d3dade;
static PyObject *const_str_plain_extract_cookies;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple;
extern PyObject *const_str_plain___setitem__;
static PyObject *const_str_digest_384c88e858c00a2981bdb05550c007ba;
extern PyObject *const_str_chr_34;
extern PyObject *const_str_plain_getheaders;
extern PyObject *const_str_plain_url;
static PyObject *const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6;
extern PyObject *const_str_plain_itervalues;
static PyObject *const_str_plain_add_header;
extern PyObject *const_str_plain_clear;
extern PyObject *const_str_plain_cookiejar_from_dict;
static PyObject *const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b;
static PyObject *const_str_digest_9bc80f2115d22815a80849e3086128b4;
extern PyObject *const_str_plain_CookieJar;
extern PyObject *const_str_plain_urlunparse;
static PyObject *const_str_plain_port_specified;
extern PyObject *const_str_plain_merge_cookies;
static PyObject *const_str_plain_jar;
static PyObject *const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_dictionary;
static PyObject *const_str_plain__policy;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_remove_cookie_by_name;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_discard;
extern PyObject *const_str_plain_compat;
static PyObject *const_str_plain_secure;
static PyObject *const_tuple_str_plain_domain_tuple;
static PyObject *const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5;
static PyObject *const_str_digest_b04a12651fd966784023636e22761d12;
extern PyObject *const_str_plain_RLock;
static PyObject *const_str_plain_get_full_url;
extern PyObject *const_str_plain_property;
static PyObject *const_str_plain_origin_req_host;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_Morsel;
static PyObject *const_tuple_str_plain_MockResponse_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_dummy_threading;
extern PyObject *const_str_plain_info;
extern PyObject *const_tuple_type_RuntimeError_tuple;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_digest_4f8d8ada6928f5a67aefe24138a8c253;
extern PyObject *const_str_plain___delitem__;
extern PyObject *const_tuple_str_plain_self_str_plain_headers_tuple;
extern PyObject *const_str_plain_cookie;
static PyObject *const_str_plain_list_paths;
static PyObject *const_str_digest_7fad1f4acdf828076344bcbd2f3093fc;
static PyObject *const_str_digest_2074f4b4dde671f06897bcc11d0d41da;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_40890ce8458196445ad3a61ce14829f8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4016992 ], 27, 0 );
    const_str_plain_set_policy = UNSTREAM_STRING_ASCII( &constant_bin[ 4017019 ], 10, 1 );
    const_str_digest_c9dd2760a1399f089d616717f6e41ae2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4017029 ], 25, 0 );
    const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_domains = UNSTREAM_STRING_ASCII( &constant_bin[ 1467943 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 1, const_str_plain_domains ); Py_INCREF( const_str_plain_domains );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 2, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_digest_e02118ec259954e10ca6d6356803797f = UNSTREAM_STRING_ASCII( &constant_bin[ 4017054 ], 192, 0 );
    const_str_plain_multiple_domains = UNSTREAM_STRING_ASCII( &constant_bin[ 4017246 ], 16, 1 );
    const_str_plain_cookie_in_jar = UNSTREAM_STRING_ASCII( &constant_bin[ 4017262 ], 13, 1 );
    const_str_digest_8282cde113cd2232a516d421ec587b65 = UNSTREAM_STRING_ASCII( &constant_bin[ 4017275 ], 149, 0 );
    const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4017424 ], 31, 0 );
    const_str_digest_101fa36882b0f5da69e72374403c2c30 = UNSTREAM_STRING_ASCII( &constant_bin[ 4017455 ], 108, 0 );
    const_str_plain_MockRequest = UNSTREAM_STRING_ASCII( &constant_bin[ 4017424 ], 11, 1 );
    const_str_plain_toReturn = UNSTREAM_STRING_ASCII( &constant_bin[ 4017563 ], 8, 1 );
    const_str_plain_get_header = UNSTREAM_STRING_ASCII( &constant_bin[ 3259 ], 10, 1 );
    const_str_plain_badargs = UNSTREAM_STRING_ASCII( &constant_bin[ 4017571 ], 7, 1 );
    const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e = UNSTREAM_STRING_ASCII( &constant_bin[ 4017578 ], 24, 0 );
    const_str_digest_5266e491bdb204b2a45e0a788e9bac94 = UNSTREAM_STRING_ASCII( &constant_bin[ 4017602 ], 50, 0 );
    const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, 0, const_str_plain_cookie_dict ); Py_INCREF( const_str_plain_cookie_dict );
    PyTuple_SET_ITEM( const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, 1, const_str_plain_cookiejar ); Py_INCREF( const_str_plain_cookiejar );
    const_str_plain_overwrite = UNSTREAM_STRING_ASCII( &constant_bin[ 2657288 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, 2, const_str_plain_overwrite ); Py_INCREF( const_str_plain_overwrite );
    const_str_plain_names_from_jar = UNSTREAM_STRING_ASCII( &constant_bin[ 4017652 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, 3, const_str_plain_names_from_jar ); Py_INCREF( const_str_plain_names_from_jar );
    PyTuple_SET_ITEM( const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, 4, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa = UNSTREAM_STRING_ASCII( &constant_bin[ 4017666 ], 38, 0 );
    const_str_plain_new_jar = UNSTREAM_STRING_ASCII( &constant_bin[ 4017704 ], 7, 1 );
    const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, 1, const_str_plain_paths ); Py_INCREF( const_str_plain_paths );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, 2, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_plain_domain_initial_dot = UNSTREAM_STRING_ASCII( &constant_bin[ 4017711 ], 18, 1 );
    const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple = PyTuple_New( 3 );
    const_str_plain_morsel = UNSTREAM_STRING_ASCII( &constant_bin[ 4017729 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple, 0, const_str_plain_morsel ); Py_INCREF( const_str_plain_morsel );
    const_str_plain_expires = UNSTREAM_STRING_ASCII( &constant_bin[ 4017735 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple, 1, const_str_plain_expires ); Py_INCREF( const_str_plain_expires );
    const_str_plain_time_template = UNSTREAM_STRING_ASCII( &constant_bin[ 4017742 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple, 2, const_str_plain_time_template ); Py_INCREF( const_str_plain_time_template );
    const_str_digest_0a2127aa931e582083c667383d216ebd = UNSTREAM_STRING_ASCII( &constant_bin[ 4017755 ], 28, 0 );
    const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, 1, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, 2, const_str_plain_parsed ); Py_INCREF( const_str_plain_parsed );
    const_str_digest_d3a4a40c67458b1207db4bc7ab20d310 = UNSTREAM_STRING_ASCII( &constant_bin[ 4017783 ], 190, 0 );
    const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple, 0, const_str_digest_c245c8a772b3a33119deac8565a08f57 ); Py_INCREF( const_str_digest_c245c8a772b3a33119deac8565a08f57 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4017973 ], 24, 0 );
    const_str_digest_8d200ac749deb0ed034c3f2346adcc3d = UNSTREAM_STRING_ASCII( &constant_bin[ 4017997 ], 25, 0 );
    const_str_digest_e43e9402062b1dc16610d92a6e06da93 = UNSTREAM_STRING_ASCII( &constant_bin[ 4018022 ], 20, 0 );
    const_str_plain_httponly = UNSTREAM_STRING_ASCII( &constant_bin[ 4018042 ], 8, 1 );
    const_tuple_0a21cfa0564c2ba78573baca86543185_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0a21cfa0564c2ba78573baca86543185_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0a21cfa0564c2ba78573baca86543185_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_0a21cfa0564c2ba78573baca86543185_tuple, 2, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    PyTuple_SET_ITEM( const_tuple_0a21cfa0564c2ba78573baca86543185_tuple, 3, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d = UNSTREAM_STRING_ASCII( &constant_bin[ 4018050 ], 7, 0 );
    const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a = UNSTREAM_STRING_ASCII( &constant_bin[ 4018057 ], 21, 0 );
    const_tuple_ca917a44106411b262150e155c627a6c_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_ca917a44106411b262150e155c627a6c_tuple, 0, const_str_plain_cookiejar ); Py_INCREF( const_str_plain_cookiejar );
    PyTuple_SET_ITEM( const_tuple_ca917a44106411b262150e155c627a6c_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_ca917a44106411b262150e155c627a6c_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_ca917a44106411b262150e155c627a6c_tuple, 3, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    const_str_plain_clearables = UNSTREAM_STRING_ASCII( &constant_bin[ 4018078 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_ca917a44106411b262150e155c627a6c_tuple, 4, const_str_plain_clearables ); Py_INCREF( const_str_plain_clearables );
    PyTuple_SET_ITEM( const_tuple_ca917a44106411b262150e155c627a6c_tuple, 5, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_digest_445933e6a124a5d41f1f32e33f377bc9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4018088 ], 20, 0 );
    const_str_plain__find_no_duplicates = UNSTREAM_STRING_ASCII( &constant_bin[ 4018108 ], 19, 1 );
    const_str_digest_aba783cd55ce183297e8f8d9ff1dc698 = UNSTREAM_STRING_ASCII( &constant_bin[ 4018127 ], 26, 0 );
    const_tuple_str_plain_MockRequest_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MockRequest_tuple_type_object_tuple_tuple, 0, const_str_plain_MockRequest ); Py_INCREF( const_str_plain_MockRequest );
    PyTuple_SET_ITEM( const_tuple_str_plain_MockRequest_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_plain_set_cookie = UNSTREAM_STRING_ASCII( &constant_bin[ 4018153 ], 10, 1 );
    const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 2, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 4, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    const_str_digest_9559440875cf716ec7a8bef311cbaefe = UNSTREAM_STRING_ASCII( &constant_bin[ 4018163 ], 26, 0 );
    const_str_digest_44db063164c966fa5386728c86c1a06f = UNSTREAM_STRING_ASCII( &constant_bin[ 4018189 ], 27, 0 );
    const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d = UNSTREAM_STRING_ASCII( &constant_bin[ 4018216 ], 27, 0 );
    const_str_plain__headers = UNSTREAM_STRING_ASCII( &constant_bin[ 4008626 ], 8, 1 );
    const_str_digest_0d84ffc2aed365c467af25f17254de9e = UNSTREAM_STRING_ASCII( &constant_bin[ 4018243 ], 17, 0 );
    const_str_plain_morsel_to_cookie = UNSTREAM_STRING_ASCII( &constant_bin[ 4018260 ], 16, 1 );
    const_str_digest_741e4a7055b20857d935a0f7ed1c4abe = UNSTREAM_STRING_ASCII( &constant_bin[ 4018276 ], 227, 0 );
    const_str_digest_5c9dad01a3c84d4b998a25c6f245d693 = UNSTREAM_STRING_ASCII( &constant_bin[ 4018503 ], 65, 0 );
    const_str_plain_MockResponse = UNSTREAM_STRING_ASCII( &constant_bin[ 4018243 ], 12, 1 );
    const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4018127 ], 21, 0 );
    const_str_digest_ad2094029011821e111452c0603108d0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4018568 ], 23, 0 );
    const_str_digest_b19ae27d1753e06c28990a42518b1f44 = UNSTREAM_STRING_ASCII( &constant_bin[ 4018591 ], 22, 0 );
    const_str_digest_1ffe275872914b64c240c8cb178005ea = UNSTREAM_STRING_ASCII( &constant_bin[ 4018613 ], 27, 0 );
    const_str_digest_58821042b0e0d98cc3b40076b38affdd = UNSTREAM_STRING_ASCII( &constant_bin[ 4018640 ], 48, 0 );
    const_str_digest_33e1091efb89a5aa5c06480eca194fed = UNSTREAM_STRING_ASCII( &constant_bin[ 4018688 ], 498, 0 );
    const_str_plain_create_cookie = UNSTREAM_STRING_ASCII( &constant_bin[ 4019186 ], 13, 1 );
    const_str_digest_0cf04dad003066735b1fdc1881f334a1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4019199 ], 30, 0 );
    const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, 1, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, 2, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, 3, const_str_plain_dictionary ); Py_INCREF( const_str_plain_dictionary );
    PyTuple_SET_ITEM( const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, 4, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd = UNSTREAM_STRING_ASCII( &constant_bin[ 4019229 ], 107, 0 );
    const_str_plain_is_unverifiable = UNSTREAM_STRING_ASCII( &constant_bin[ 4019336 ], 15, 1 );
    const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee = UNSTREAM_STRING_ASCII( &constant_bin[ 4019351 ], 40, 0 );
    const_str_digest_c99227a29db521837b47fa67726c6a3c = UNSTREAM_STRING_ASCII( &constant_bin[ 4019391 ], 52, 0 );
    const_str_digest_573342b2a8e1af18fbe63f15ee63f11b = UNSTREAM_STRING_ASCII( &constant_bin[ 4019443 ], 176, 0 );
    const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 3, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 4, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f = UNSTREAM_STRING_ASCII( &constant_bin[ 4019619 ], 202, 0 );
    const_dict_a5e68083723d45b7dd5e500852a4245b = _PyDict_NewPresized( 1 );
    const_str_plain_HttpOnly = UNSTREAM_STRING_ASCII( &constant_bin[ 4019821 ], 8, 1 );
    PyDict_SetItem( const_dict_a5e68083723d45b7dd5e500852a4245b, const_str_plain_HttpOnly, Py_None );
    assert( PyDict_Size( const_dict_a5e68083723d45b7dd5e500852a4245b ) == 1 );
    const_str_digest_2aa7f18650b70bafed61b449ab43cbad = UNSTREAM_STRING_ASCII( &constant_bin[ 4019829 ], 468, 0 );
    const_str_plain_add_unredirected_header = UNSTREAM_STRING_ASCII( &constant_bin[ 4020297 ], 23, 1 );
    const_str_digest_2fb13ce01af8e322e1090db877e250bd = UNSTREAM_STRING_ASCII( &constant_bin[ 4020320 ], 34, 0 );
    const_str_digest_12188133309ffc390643b7a732954d08 = UNSTREAM_STRING_ASCII( &constant_bin[ 4017037 ], 16, 0 );
    const_str_plain_unverifiable = UNSTREAM_STRING_ASCII( &constant_bin[ 4019339 ], 12, 1 );
    const_str_plain_get_new_headers = UNSTREAM_STRING_ASCII( &constant_bin[ 4018201 ], 15, 1 );
    const_str_digest_2041229f0580a80f49d71dc1aca7539f = UNSTREAM_STRING_ASCII( &constant_bin[ 4020354 ], 23, 0 );
    const_str_plain_domain_specified = UNSTREAM_STRING_ASCII( &constant_bin[ 4020377 ], 16, 1 );
    const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple = PyTuple_New( 3 );
    const_str_plain_jar = UNSTREAM_STRING_ASCII( &constant_bin[ 3533611 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, 0, const_str_plain_jar ); Py_INCREF( const_str_plain_jar );
    PyTuple_SET_ITEM( const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, 2, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_tuple_str_plain_Host_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Host_tuple, 0, const_str_plain_Host ); Py_INCREF( const_str_plain_Host );
    const_str_digest_80fe00ea301d02293abaf9dea17cddac = UNSTREAM_STRING_ASCII( &constant_bin[ 4020393 ], 33, 0 );
    const_str_plain_add_cookie_header = UNSTREAM_STRING_ASCII( &constant_bin[ 4020426 ], 17, 1 );
    const_str_digest_d4e8bce3e52a50e29fc0c09bd0f73e7f = UNSTREAM_STRING_ASCII( &constant_bin[ 4020443 ], 236, 0 );
    const_str_plain_timegm = UNSTREAM_STRING_ASCII( &constant_bin[ 4020679 ], 6, 1 );
    const_str_plain_rfc2109 = UNSTREAM_STRING_ASCII( &constant_bin[ 4020685 ], 7, 1 );
    const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 0, const_str_plain_jar ); Py_INCREF( const_str_plain_jar );
    PyTuple_SET_ITEM( const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 2, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 3, const_str_plain_req ); Py_INCREF( const_str_plain_req );
    PyTuple_SET_ITEM( const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 4, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_digest_955b7d6fef0bcb66b462d15cb6f41169 = UNSTREAM_STRING_ASCII( &constant_bin[ 4020692 ], 173, 0 );
    const_str_plain_path_specified = UNSTREAM_STRING_ASCII( &constant_bin[ 4020865 ], 14, 1 );
    const_str_plain_list_domains = UNSTREAM_STRING_ASCII( &constant_bin[ 4020879 ], 12, 1 );
    const_str_digest_edb2a15c85f24da38984c0b5356f21c0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4020891 ], 24, 0 );
    const_str_digest_59f19da226d4479328efe53726a2e397 = UNSTREAM_STRING_ASCII( &constant_bin[ 4020915 ], 16, 0 );
    const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d = UNSTREAM_STRING_ASCII( &constant_bin[ 4020931 ], 163, 0 );
    const_str_digest_bb11d917f97bb6215fd11706382927d9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4021094 ], 211, 0 );
    const_str_plain_get_dict = UNSTREAM_STRING_ASCII( &constant_bin[ 4018145 ], 8, 1 );
    const_str_plain_has_header = UNSTREAM_STRING_ASCII( &constant_bin[ 4021305 ], 10, 1 );
    const_str_digest_ea904bab707be16235fbd17c19767f9f = UNSTREAM_STRING_ASCII( &constant_bin[ 4021315 ], 21, 0 );
    const_str_digest_58322b83779ad7d89ba5c63e2fe2855c = UNSTREAM_STRING_ASCII( &constant_bin[ 4021336 ], 27, 0 );
    const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 3, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 4, const_str_plain_toReturn ); Py_INCREF( const_str_plain_toReturn );
    PyTuple_SET_ITEM( const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 5, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_plain__cookies_lock = UNSTREAM_STRING_ASCII( &constant_bin[ 4021363 ], 13, 1 );
    const_str_digest_2a2d5b06d38da952ad812a68992fbb10 = UNSTREAM_STRING_ASCII( &constant_bin[ 4021376 ], 22, 0 );
    const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4021398 ], 22, 0 );
    const_tuple_str_plain__cookies_lock_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__cookies_lock_tuple, 0, const_str_plain__cookies_lock ); Py_INCREF( const_str_plain__cookies_lock );
    const_str_digest_5427312272820286dba5b26f263d4c79 = UNSTREAM_STRING_ASCII( &constant_bin[ 4021420 ], 30, 0 );
    const_str_plain_new_cj = UNSTREAM_STRING_ASCII( &constant_bin[ 4021450 ], 6, 1 );
    const_str_digest_ccf021f29934e59f3e942390d0f913c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4021456 ], 22, 0 );
    const_tuple_str_plain_self_str_plain_new_cj_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_new_cj_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_new_cj_tuple, 1, const_str_plain_new_cj ); Py_INCREF( const_str_plain_new_cj );
    const_str_digest_94ebad60c38a4f103db32744a5bab84d = UNSTREAM_STRING_ASCII( &constant_bin[ 4021478 ], 149, 0 );
    const_tuple_str_plain_Cookie_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Cookie_tuple, 0, const_str_plain_Cookie ); Py_INCREF( const_str_plain_Cookie );
    const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69 = UNSTREAM_STRING_ASCII( &constant_bin[ 4021627 ], 35, 0 );
    const_str_digest_a9d19ccf5848be851d2f630cfe17789d = UNSTREAM_STRING_ASCII( &constant_bin[ 4021662 ], 61, 0 );
    const_str_plain__new_headers = UNSTREAM_STRING_ASCII( &constant_bin[ 4018204 ], 12, 1 );
    const_str_digest_6f0eeed3729339eac6c86da181041a13 = UNSTREAM_STRING_ASCII( &constant_bin[ 4021723 ], 40, 0 );
    const_str_digest_c6a3c61d8189ea3789c38808f9f3af27 = UNSTREAM_STRING_ASCII( &constant_bin[ 4021763 ], 689, 0 );
    const_str_digest_fb0e88f14b774d1e98d525584951eabc = UNSTREAM_STRING_ASCII( &constant_bin[ 4022452 ], 29, 0 );
    const_str_digest_28c35b2d382d530cb9f8e567735ee113 = UNSTREAM_STRING_ASCII( &constant_bin[ 4022481 ], 20, 0 );
    const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4022501 ], 28, 0 );
    const_str_plain_CookieConflictError = UNSTREAM_STRING_ASCII( &constant_bin[ 4022529 ], 19, 1 );
    const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d = UNSTREAM_STRING_ASCII( &constant_bin[ 4022548 ], 66, 0 );
    const_str_plain__find = UNSTREAM_STRING_ASCII( &constant_bin[ 440948 ], 5, 1 );
    const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba = UNSTREAM_STRING_ASCII( &constant_bin[ 4022614 ], 118, 0 );
    const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4022732 ], 29, 0 );
    const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple, 0, const_str_plain_cookiejar ); Py_INCREF( const_str_plain_cookiejar );
    PyTuple_SET_ITEM( const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple, 1, const_str_plain_cookies ); Py_INCREF( const_str_plain_cookies );
    PyTuple_SET_ITEM( const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple, 2, const_str_plain_cookie_in_jar ); Py_INCREF( const_str_plain_cookie_in_jar );
    const_tuple_str_plain_self_str_plain_cookie_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cookie_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cookie_tuple, 1, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_tuple_str_plain_cookie_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cookie_tuple, 0, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple, 0, const_str_plain_jar ); Py_INCREF( const_str_plain_jar );
    PyTuple_SET_ITEM( const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple, 1, const_str_plain_new_jar ); Py_INCREF( const_str_plain_new_jar );
    PyTuple_SET_ITEM( const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple, 2, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_digest_85e0ea626320458ddd4363cffbfdc559 = UNSTREAM_STRING_ASCII( &constant_bin[ 4022761 ], 323, 0 );
    const_tuple_str_plain_self_str_plain_request_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4023084 ], 28, 0 );
    const_str_plain_comment_url = UNSTREAM_STRING_ASCII( &constant_bin[ 4023112 ], 11, 1 );
    const_str_digest_08b25300475453472c10345ee7168b50 = UNSTREAM_STRING_ASCII( &constant_bin[ 4023123 ], 255, 0 );
    const_str_plain_get_origin_req_host = UNSTREAM_STRING_ASCII( &constant_bin[ 4017436 ], 19, 1 );
    const_str_plain_get_policy = UNSTREAM_STRING_ASCII( &constant_bin[ 4023378 ], 10, 1 );
    const_str_digest_572b1e9f5dc0656103cb358a7cbea16a = UNSTREAM_STRING_ASCII( &constant_bin[ 4023388 ], 22, 0 );
    const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple, 1, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    PyTuple_SET_ITEM( const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple, 4, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_138ef95cec671591d9bedfa7e0898703 = UNSTREAM_STRING_ASCII( &constant_bin[ 4023410 ], 77, 0 );
    const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c = UNSTREAM_STRING_ASCII( &constant_bin[ 4023487 ], 505, 0 );
    const_str_digest_95cacfdffdeafa2154ddb2520f2fb58f = UNSTREAM_STRING_ASCII( &constant_bin[ 4023992 ], 106, 0 );
    const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 0, const_str_plain_cookielib ); Py_INCREF( const_str_plain_cookielib );
    PyTuple_SET_ITEM( const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 1, const_str_plain_urlparse ); Py_INCREF( const_str_plain_urlparse );
    PyTuple_SET_ITEM( const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 2, const_str_plain_urlunparse ); Py_INCREF( const_str_plain_urlunparse );
    PyTuple_SET_ITEM( const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 3, const_str_plain_Morsel ); Py_INCREF( const_str_plain_Morsel );
    PyTuple_SET_ITEM( const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 4, const_str_plain_MutableMapping ); Py_INCREF( const_str_plain_MutableMapping );
    const_str_digest_59021ee0ac4a578b9169d1a96b78e1da = UNSTREAM_STRING_ASCII( &constant_bin[ 4024098 ], 52, 0 );
    const_str_digest_2fd659d0d93422f0a9d09e643f3b5831 = UNSTREAM_STRING_ASCII( &constant_bin[ 4024150 ], 30, 0 );
    const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876 = UNSTREAM_STRING_ASCII( &constant_bin[ 4024180 ], 132, 0 );
    const_str_digest_b270aaa39204bf1a293395efb6982c3e = UNSTREAM_STRING_ASCII( &constant_bin[ 4024312 ], 37, 0 );
    const_str_digest_0d043b9a6c2c506833bb59840ef22ffd = UNSTREAM_STRING_ASCII( &constant_bin[ 4024349 ], 29, 0 );
    const_str_digest_b30191bdb52236874918a4b5c3c5db8b = UNSTREAM_STRING_ASCII( &constant_bin[ 4024378 ], 24, 0 );
    const_tuple_str_plain_CookieConflictError_tuple_type_RuntimeError_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CookieConflictError_tuple_type_RuntimeError_tuple_tuple, 0, const_str_plain_CookieConflictError ); Py_INCREF( const_str_plain_CookieConflictError );
    PyTuple_SET_ITEM( const_tuple_str_plain_CookieConflictError_tuple_type_RuntimeError_tuple_tuple, 1, const_tuple_type_RuntimeError_tuple ); Py_INCREF( const_tuple_type_RuntimeError_tuple );
    const_str_digest_019c0800875ec82d0b2ac07098d3dade = UNSTREAM_STRING_ASCII( &constant_bin[ 4024402 ], 19, 0 );
    const_str_plain_extract_cookies = UNSTREAM_STRING_ASCII( &constant_bin[ 4024421 ], 15, 1 );
    const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 3, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 4, const_str_plain_badargs ); Py_INCREF( const_str_plain_badargs );
    PyTuple_SET_ITEM( const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 5, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    const_str_digest_384c88e858c00a2981bdb05550c007ba = UNSTREAM_STRING_ASCII( &constant_bin[ 4024436 ], 27, 0 );
    const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4024463 ], 148, 0 );
    const_str_plain_add_header = UNSTREAM_STRING_ASCII( &constant_bin[ 4008623 ], 10, 1 );
    const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b = UNSTREAM_STRING_ASCII( &constant_bin[ 4024611 ], 210, 0 );
    const_str_digest_9bc80f2115d22815a80849e3086128b4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4024312 ], 23, 0 );
    const_str_plain_port_specified = UNSTREAM_STRING_ASCII( &constant_bin[ 4024821 ], 14, 1 );
    const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 2, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    PyTuple_SET_ITEM( const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 3, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 4, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    const_str_plain__policy = UNSTREAM_STRING_ASCII( &constant_bin[ 4017022 ], 7, 1 );
    const_str_plain_remove_cookie_by_name = UNSTREAM_STRING_ASCII( &constant_bin[ 4017528 ], 21, 1 );
    const_str_plain_secure = UNSTREAM_STRING_ASCII( &constant_bin[ 3177224 ], 6, 1 );
    const_tuple_str_plain_domain_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_domain_tuple, 0, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5 = UNSTREAM_STRING_ASCII( &constant_bin[ 4024835 ], 28, 0 );
    const_str_digest_b04a12651fd966784023636e22761d12 = UNSTREAM_STRING_ASCII( &constant_bin[ 4024863 ], 245, 0 );
    const_str_plain_get_full_url = UNSTREAM_STRING_ASCII( &constant_bin[ 4024390 ], 12, 1 );
    const_str_plain_origin_req_host = UNSTREAM_STRING_ASCII( &constant_bin[ 4017440 ], 15, 1 );
    const_tuple_str_plain_MockResponse_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MockResponse_tuple_type_object_tuple_tuple, 0, const_str_plain_MockResponse ); Py_INCREF( const_str_plain_MockResponse );
    PyTuple_SET_ITEM( const_tuple_str_plain_MockResponse_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_4f8d8ada6928f5a67aefe24138a8c253 = UNSTREAM_STRING_ASCII( &constant_bin[ 4025108 ], 30, 0 );
    const_str_plain_list_paths = UNSTREAM_STRING_ASCII( &constant_bin[ 4022519 ], 10, 1 );
    const_str_digest_7fad1f4acdf828076344bcbd2f3093fc = UNSTREAM_STRING_ASCII( &constant_bin[ 4025138 ], 131, 0 );
    const_str_digest_2074f4b4dde671f06897bcc11d0d41da = UNSTREAM_STRING_ASCII( &constant_bin[ 4025269 ], 134, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$cookies( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1c504cd6c717b8bd32c24a8b0efa5f56;
static PyCodeObject *codeobj_db7b05c53bd6696e69504cc84286190f;
static PyCodeObject *codeobj_01e82067689cb9ed48bda6a420a26287;
static PyCodeObject *codeobj_5ba6a17e8818f3172be3dc01eff15b2e;
static PyCodeObject *codeobj_c5881e6e64937a8f05652068265f9c23;
static PyCodeObject *codeobj_c4276493927d1b67fbcb2611b8497182;
static PyCodeObject *codeobj_baea455d444af85054e6feaf0dc4713a;
static PyCodeObject *codeobj_a55efe02f692c44829765f9d8137adda;
static PyCodeObject *codeobj_c600b487f6535dc1935cfeea3cc27163;
static PyCodeObject *codeobj_548f6a0cfc7f2a70934a1734b1077526;
static PyCodeObject *codeobj_f31a7fdbd3eb3b73ec922fe9a794bd2b;
static PyCodeObject *codeobj_7e5163a9d59806ee74bebed98c90a49f;
static PyCodeObject *codeobj_5af861a59022fcda793b5604cc08c53e;
static PyCodeObject *codeobj_20abc09aff0c202073420ed9960b3ed5;
static PyCodeObject *codeobj_e86faa1b86d96cb0f8f2fbb4c3a7dca1;
static PyCodeObject *codeobj_e81af8f990e0ea0f61a5c1821066ba96;
static PyCodeObject *codeobj_c50931531274ecb6e735cbf0c999f520;
static PyCodeObject *codeobj_93c7cc16b82ac5bb3317855d1fda6e78;
static PyCodeObject *codeobj_b1b3e09f171f91f304417b3ba4d416fc;
static PyCodeObject *codeobj_1a7b4d1f03e9e1496a01e8b0c9d25f12;
static PyCodeObject *codeobj_177a797ffcb43364acc15320339e1b13;
static PyCodeObject *codeobj_f1e9f7f60165068fd1baa19cb1b74e6a;
static PyCodeObject *codeobj_b4f6b6444e1dc9a22197188eb8e1bbb0;
static PyCodeObject *codeobj_cb5e4c1426051bcb230ec7a6d7921785;
static PyCodeObject *codeobj_b4617c6ebc4f8788c8455e65f3ecce55;
static PyCodeObject *codeobj_40c8983808bef5ccd9f051a62565c821;
static PyCodeObject *codeobj_c12dc2d0e7544add316f0615f35aa76e;
static PyCodeObject *codeobj_c189f87aeeaf503ee94c482679ec2173;
static PyCodeObject *codeobj_64cf8d6a1c93cbfac24ff7088c50c69d;
static PyCodeObject *codeobj_e65281f481844fb90586c1bf4eb87a67;
static PyCodeObject *codeobj_c84f3ab52554706647aafdab73af7804;
static PyCodeObject *codeobj_ae970bd0d6f0a848529f89fea859b8bf;
static PyCodeObject *codeobj_2c65bdd7453852b29c7399ad0fec796b;
static PyCodeObject *codeobj_71dc96ff008dfd5b330a4f02c6a701b0;
static PyCodeObject *codeobj_fa6216cd1b197255a92de3beac91c26d;
static PyCodeObject *codeobj_67a5f110d636fbc0ecc446bca992daf8;
static PyCodeObject *codeobj_aaebc42d3059d2afce842afae248a319;
static PyCodeObject *codeobj_3f8d0ed57cc4410362336a1125142278;
static PyCodeObject *codeobj_e45fdd9df5bb097c5b96abedc3559758;
static PyCodeObject *codeobj_4309c2d840afd0ca598f80783c7ef377;
static PyCodeObject *codeobj_aca8e823d8c8dcd21c5ff284241847a9;
static PyCodeObject *codeobj_6e88561e4f9278122ced014a2ff83a60;
static PyCodeObject *codeobj_20b971062815ffb4253b1c9e86b05c70;
static PyCodeObject *codeobj_24b0b808022e207e3c3b35dec7c8c5ac;
static PyCodeObject *codeobj_f6e4e4eb800589518ce6600fb2faf6ec;
static PyCodeObject *codeobj_e6c2c05146c94bd0d18a9cf99a83f10e;
static PyCodeObject *codeobj_a837571046802aab75a5459b4a336872;
static PyCodeObject *codeobj_4e19cc60670ecd373a3b2833f1a46dc4;
static PyCodeObject *codeobj_64696ca0867510980988f706fce014ec;
static PyCodeObject *codeobj_e58e5bc1cd96f0f542474a5ea421a28f;
static PyCodeObject *codeobj_01b165a079b9f7424d030f33cc6676a2;
static PyCodeObject *codeobj_f584b2a832a03be500d30acc02a36621;
static PyCodeObject *codeobj_32cf436c2aeff5243697d41cdba1e74c;
static PyCodeObject *codeobj_a714d1b3a7776f24bfbf3bd245b55a24;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_019c0800875ec82d0b2ac07098d3dade );
    codeobj_1c504cd6c717b8bd32c24a8b0efa5f56 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 521, const_tuple_str_plain_cookie_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_db7b05c53bd6696e69504cc84286190f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c9dd2760a1399f089d616717f6e41ae2, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_01e82067689cb9ed48bda6a420a26287 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_MockRequest, 25, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_5ba6a17e8818f3172be3dc01eff15b2e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_MockResponse, 97, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_c5881e6e64937a8f05652068265f9c23 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RequestsCookieJar, 171, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_c4276493927d1b67fbcb2611b8497182 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___contains__, 315, const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_baea455d444af85054e6feaf0dc4713a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___delitem__, 337, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a55efe02f692c44829765f9d8137adda = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 321, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c600b487f6535dc1935cfeea3cc27163 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getstate__, 401, const_tuple_str_plain_self_str_plain_state_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_548f6a0cfc7f2a70934a1734b1077526 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 37, const_tuple_str_plain_self_str_plain_request_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f31a7fdbd3eb3b73ec922fe9a794bd2b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 104, const_tuple_str_plain_self_str_plain_headers_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7e5163a9d59806ee74bebed98c90a49f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setitem__, 330, const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5af861a59022fcda793b5604cc08c53e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setstate__, 408, const_tuple_str_plain_self_str_plain_state_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_20abc09aff0c202073420ed9960b3ed5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__copy_cookie_jar, 426, const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e86faa1b86d96cb0f8f2fbb4c3a7dca1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__find, 356, const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e81af8f990e0ea0f61a5c1821066ba96 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__find_no_duplicates, 376, const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c50931531274ecb6e735cbf0c999f520 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_header, 74, const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_93c7cc16b82ac5bb3317855d1fda6e78 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_unredirected_header, 78, const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b1b3e09f171f91f304417b3ba4d416fc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cookiejar_from_dict, 508, const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1a7b4d1f03e9e1496a01e8b0c9d25f12 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_copy, 414, const_tuple_str_plain_self_str_plain_new_cj_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_177a797ffcb43364acc15320339e1b13 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_cookie, 441, const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_f1e9f7f60165068fd1baa19cb1b74e6a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_extract_cookies_to_jar, 118, const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b4f6b6444e1dc9a22197188eb8e1bbb0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get, 189, const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cb5e4c1426051bcb230ec7a6d7921785 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_cookie_header, 135, const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b4617c6ebc4f8788c8455e65f3ecce55 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_dict, 299, const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_40c8983808bef5ccd9f051a62565c821 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_full_url, 51, const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c12dc2d0e7544add316f0615f35aa76e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_header, 71, const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c189f87aeeaf503ee94c482679ec2173 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_host, 45, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_64cf8d6a1c93cbfac24ff7088c50c69d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_new_headers, 81, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e65281f481844fb90586c1bf4eb87a67 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_origin_req_host, 48, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c84f3ab52554706647aafdab73af7804 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_policy, 421, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ae970bd0d6f0a848529f89fea859b8bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_type, 42, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2c65bdd7453852b29c7399ad0fec796b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getheaders, 114, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_71dc96ff008dfd5b330a4f02c6a701b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_header, 68, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fa6216cd1b197255a92de3beac91c26d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_host, 92, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_67a5f110d636fbc0ecc446bca992daf8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_info, 111, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aaebc42d3059d2afce842afae248a319 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_unverifiable, 65, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3f8d0ed57cc4410362336a1125142278 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_items, 261, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e45fdd9df5bb097c5b96abedc3559758 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iteritems, 252, const_tuple_str_plain_self_str_plain_cookie_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4309c2d840afd0ca598f80783c7ef377 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iterkeys, 218, const_tuple_str_plain_self_str_plain_cookie_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aca8e823d8c8dcd21c5ff284241847a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_itervalues, 235, const_tuple_str_plain_self_str_plain_cookie_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6e88561e4f9278122ced014a2ff83a60 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_keys, 227, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_20b971062815ffb4253b1c9e86b05c70 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_list_domains, 270, const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_24b0b808022e207e3c3b35dec7c8c5ac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_list_paths, 278, const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f6e4e4eb800589518ce6600fb2faf6ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_merge_cookies, 529, const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e6c2c05146c94bd0d18a9cf99a83f10e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_morsel_to_cookie, 477, const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a837571046802aab75a5459b4a336872 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_multiple_domains, 286, const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4e19cc60670ecd373a3b2833f1a46dc4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_origin_req_host, 88, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_64696ca0867510980988f706fce014ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_remove_cookie_by_name, 146, const_tuple_ca917a44106411b262150e155c627a6c_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e58e5bc1cd96f0f542474a5ea421a28f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set, 201, const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_01b165a079b9f7424d030f33cc6676a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_cookie, 343, const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS );
    codeobj_f584b2a832a03be500d30acc02a36621 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_unverifiable, 84, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_32cf436c2aeff5243697d41cdba1e74c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update, 348, const_tuple_0a21cfa0564c2ba78573baca86543185_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_a714d1b3a7776f24bfbf3bd245b55a24 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_values, 244, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_maker( void );


static PyObject *requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_maker( void );


static PyObject *requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_10_add_unredirected_header(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_11_get_new_headers(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_12_unverifiable(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_13_origin_req_host(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_14_host(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_15___init__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_16_info(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_17_getheaders(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_18_extract_cookies_to_jar(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_19_get_cookie_header(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_20_remove_cookie_by_name( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_21_get( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_22_set(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_23_iterkeys(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_24_keys(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_25_itervalues(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_26_values(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_27_iteritems(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_28_items(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_29_list_domains(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_2_get_type(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_30_list_paths(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_31_multiple_domains(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_32_get_dict( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_33___contains__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_34___getitem__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_35___setitem__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_36___delitem__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_37_set_cookie(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_38_update(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_39__find( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_3_get_host(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_40__find_no_duplicates( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_41___getstate__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_42___setstate__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_43_copy(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_44_get_policy(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_45__copy_cookie_jar(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_46_create_cookie(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_47_morsel_to_cookie(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_48_cookiejar_from_dict( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_49_merge_cookies(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_4_get_origin_req_host(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_5_get_full_url(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_6_is_unverifiable(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_7_has_header(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_8_get_header( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_9_add_header(  );


// The module function definitions.
static PyObject *impl_requests$cookies$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_548f6a0cfc7f2a70934a1734b1077526;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_548f6a0cfc7f2a70934a1734b1077526 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_548f6a0cfc7f2a70934a1734b1077526, codeobj_548f6a0cfc7f2a70934a1734b1077526, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_548f6a0cfc7f2a70934a1734b1077526 = cache_frame_548f6a0cfc7f2a70934a1734b1077526;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_548f6a0cfc7f2a70934a1734b1077526 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_548f6a0cfc7f2a70934a1734b1077526 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_request );
        tmp_assattr_name_1 = par_request;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__r, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = PyDict_New();
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__new_headers, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlparse );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__r );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_548f6a0cfc7f2a70934a1734b1077526->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_scheme );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_type, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_548f6a0cfc7f2a70934a1734b1077526 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_548f6a0cfc7f2a70934a1734b1077526 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_548f6a0cfc7f2a70934a1734b1077526, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_548f6a0cfc7f2a70934a1734b1077526->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_548f6a0cfc7f2a70934a1734b1077526, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_548f6a0cfc7f2a70934a1734b1077526,
        type_description_1,
        par_self,
        par_request
    );


    // Release cached frame.
    if ( frame_548f6a0cfc7f2a70934a1734b1077526 == cache_frame_548f6a0cfc7f2a70934a1734b1077526 )
    {
        Py_DECREF( frame_548f6a0cfc7f2a70934a1734b1077526 );
    }
    cache_frame_548f6a0cfc7f2a70934a1734b1077526 = NULL;

    assertFrameObject( frame_548f6a0cfc7f2a70934a1734b1077526 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

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

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_1___init__ );
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


static PyObject *impl_requests$cookies$$$function_2_get_type( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_ae970bd0d6f0a848529f89fea859b8bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae970bd0d6f0a848529f89fea859b8bf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ae970bd0d6f0a848529f89fea859b8bf, codeobj_ae970bd0d6f0a848529f89fea859b8bf, module_requests$cookies, sizeof(void *) );
    frame_ae970bd0d6f0a848529f89fea859b8bf = cache_frame_ae970bd0d6f0a848529f89fea859b8bf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ae970bd0d6f0a848529f89fea859b8bf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ae970bd0d6f0a848529f89fea859b8bf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae970bd0d6f0a848529f89fea859b8bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae970bd0d6f0a848529f89fea859b8bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae970bd0d6f0a848529f89fea859b8bf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ae970bd0d6f0a848529f89fea859b8bf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ae970bd0d6f0a848529f89fea859b8bf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ae970bd0d6f0a848529f89fea859b8bf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ae970bd0d6f0a848529f89fea859b8bf,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_ae970bd0d6f0a848529f89fea859b8bf == cache_frame_ae970bd0d6f0a848529f89fea859b8bf )
    {
        Py_DECREF( frame_ae970bd0d6f0a848529f89fea859b8bf );
    }
    cache_frame_ae970bd0d6f0a848529f89fea859b8bf = NULL;

    assertFrameObject( frame_ae970bd0d6f0a848529f89fea859b8bf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_2_get_type );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_2_get_type );
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


static PyObject *impl_requests$cookies$$$function_3_get_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c189f87aeeaf503ee94c482679ec2173;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c189f87aeeaf503ee94c482679ec2173 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c189f87aeeaf503ee94c482679ec2173, codeobj_c189f87aeeaf503ee94c482679ec2173, module_requests$cookies, sizeof(void *) );
    frame_c189f87aeeaf503ee94c482679ec2173 = cache_frame_c189f87aeeaf503ee94c482679ec2173;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c189f87aeeaf503ee94c482679ec2173 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c189f87aeeaf503ee94c482679ec2173 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlparse );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__r );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c189f87aeeaf503ee94c482679ec2173->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_netloc );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c189f87aeeaf503ee94c482679ec2173 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c189f87aeeaf503ee94c482679ec2173 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c189f87aeeaf503ee94c482679ec2173 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c189f87aeeaf503ee94c482679ec2173, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c189f87aeeaf503ee94c482679ec2173->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c189f87aeeaf503ee94c482679ec2173, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c189f87aeeaf503ee94c482679ec2173,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c189f87aeeaf503ee94c482679ec2173 == cache_frame_c189f87aeeaf503ee94c482679ec2173 )
    {
        Py_DECREF( frame_c189f87aeeaf503ee94c482679ec2173 );
    }
    cache_frame_c189f87aeeaf503ee94c482679ec2173 = NULL;

    assertFrameObject( frame_c189f87aeeaf503ee94c482679ec2173 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_3_get_host );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_3_get_host );
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


static PyObject *impl_requests$cookies$$$function_4_get_origin_req_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_e65281f481844fb90586c1bf4eb87a67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e65281f481844fb90586c1bf4eb87a67 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e65281f481844fb90586c1bf4eb87a67, codeobj_e65281f481844fb90586c1bf4eb87a67, module_requests$cookies, sizeof(void *) );
    frame_e65281f481844fb90586c1bf4eb87a67 = cache_frame_e65281f481844fb90586c1bf4eb87a67;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e65281f481844fb90586c1bf4eb87a67 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e65281f481844fb90586c1bf4eb87a67 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_e65281f481844fb90586c1bf4eb87a67->m_frame.f_lineno = 49;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_host );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e65281f481844fb90586c1bf4eb87a67 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e65281f481844fb90586c1bf4eb87a67 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e65281f481844fb90586c1bf4eb87a67 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e65281f481844fb90586c1bf4eb87a67, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e65281f481844fb90586c1bf4eb87a67->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e65281f481844fb90586c1bf4eb87a67, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e65281f481844fb90586c1bf4eb87a67,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_e65281f481844fb90586c1bf4eb87a67 == cache_frame_e65281f481844fb90586c1bf4eb87a67 )
    {
        Py_DECREF( frame_e65281f481844fb90586c1bf4eb87a67 );
    }
    cache_frame_e65281f481844fb90586c1bf4eb87a67 = NULL;

    assertFrameObject( frame_e65281f481844fb90586c1bf4eb87a67 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_4_get_origin_req_host );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_4_get_origin_req_host );
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


static PyObject *impl_requests$cookies$$$function_5_get_full_url( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_host = NULL;
    PyObject *var_parsed = NULL;
    struct Nuitka_FrameObject *frame_40c8983808bef5ccd9f051a62565c821;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_40c8983808bef5ccd9f051a62565c821 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_40c8983808bef5ccd9f051a62565c821, codeobj_40c8983808bef5ccd9f051a62565c821, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_40c8983808bef5ccd9f051a62565c821 = cache_frame_40c8983808bef5ccd9f051a62565c821;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_40c8983808bef5ccd9f051a62565c821 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_40c8983808bef5ccd9f051a62565c821 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__r );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_40c8983808bef5ccd9f051a62565c821->m_frame.f_lineno = 54;
        tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_Host_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
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
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__r );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_url );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_to_native_string );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "to_native_string" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__r );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_headers );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_Host;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
        frame_40c8983808bef5ccd9f051a62565c821->m_frame.f_lineno = 57;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_host == NULL );
        var_host = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlparse );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__r );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_url );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_40c8983808bef5ccd9f051a62565c821->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_parsed == NULL );
        var_parsed = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlunparse );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlunparse );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlunparse" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_parsed );
        tmp_source_name_9 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_scheme );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = PyList_New( 6 );
        PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_1 );
        CHECK_OBJECT( var_host );
        tmp_list_element_1 = var_host;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_2, 1, tmp_list_element_1 );
        CHECK_OBJECT( var_parsed );
        tmp_source_name_10 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_path );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_2, 2, tmp_list_element_1 );
        CHECK_OBJECT( var_parsed );
        tmp_source_name_11 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_params );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_2, 3, tmp_list_element_1 );
        CHECK_OBJECT( var_parsed );
        tmp_source_name_12 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_query );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_2, 4, tmp_list_element_1 );
        CHECK_OBJECT( var_parsed );
        tmp_source_name_13 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_fragment );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_2, 5, tmp_list_element_1 );
        frame_40c8983808bef5ccd9f051a62565c821->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_40c8983808bef5ccd9f051a62565c821 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_40c8983808bef5ccd9f051a62565c821 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_40c8983808bef5ccd9f051a62565c821 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_40c8983808bef5ccd9f051a62565c821, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_40c8983808bef5ccd9f051a62565c821->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_40c8983808bef5ccd9f051a62565c821, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_40c8983808bef5ccd9f051a62565c821,
        type_description_1,
        par_self,
        var_host,
        var_parsed
    );


    // Release cached frame.
    if ( frame_40c8983808bef5ccd9f051a62565c821 == cache_frame_40c8983808bef5ccd9f051a62565c821 )
    {
        Py_DECREF( frame_40c8983808bef5ccd9f051a62565c821 );
    }
    cache_frame_40c8983808bef5ccd9f051a62565c821 = NULL;

    assertFrameObject( frame_40c8983808bef5ccd9f051a62565c821 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_5_get_full_url );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_host );
    var_host = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

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

    Py_XDECREF( var_host );
    var_host = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_5_get_full_url );
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


static PyObject *impl_requests$cookies$$$function_6_is_unverifiable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_6_is_unverifiable );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_6_is_unverifiable );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_7_has_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_71dc96ff008dfd5b330a4f02c6a701b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_71dc96ff008dfd5b330a4f02c6a701b0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_71dc96ff008dfd5b330a4f02c6a701b0, codeobj_71dc96ff008dfd5b330a4f02c6a701b0, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_71dc96ff008dfd5b330a4f02c6a701b0 = cache_frame_71dc96ff008dfd5b330a4f02c6a701b0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_71dc96ff008dfd5b330a4f02c6a701b0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_71dc96ff008dfd5b330a4f02c6a701b0 ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_name );
        tmp_compexpr_left_1 = par_name;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__r );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res == 1 ) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_name );
        tmp_compexpr_left_2 = par_name;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__new_headers );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res == 1 ) ? Py_True : Py_False;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_71dc96ff008dfd5b330a4f02c6a701b0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_71dc96ff008dfd5b330a4f02c6a701b0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_71dc96ff008dfd5b330a4f02c6a701b0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_71dc96ff008dfd5b330a4f02c6a701b0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_71dc96ff008dfd5b330a4f02c6a701b0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_71dc96ff008dfd5b330a4f02c6a701b0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_71dc96ff008dfd5b330a4f02c6a701b0,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_71dc96ff008dfd5b330a4f02c6a701b0 == cache_frame_71dc96ff008dfd5b330a4f02c6a701b0 )
    {
        Py_DECREF( frame_71dc96ff008dfd5b330a4f02c6a701b0 );
    }
    cache_frame_71dc96ff008dfd5b330a4f02c6a701b0 = NULL;

    assertFrameObject( frame_71dc96ff008dfd5b330a4f02c6a701b0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_7_has_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_7_has_header );
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


static PyObject *impl_requests$cookies$$$function_8_get_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_default = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_c12dc2d0e7544add316f0615f35aa76e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c12dc2d0e7544add316f0615f35aa76e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c12dc2d0e7544add316f0615f35aa76e, codeobj_c12dc2d0e7544add316f0615f35aa76e, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c12dc2d0e7544add316f0615f35aa76e = cache_frame_c12dc2d0e7544add316f0615f35aa76e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c12dc2d0e7544add316f0615f35aa76e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c12dc2d0e7544add316f0615f35aa76e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__r );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_headers );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__new_headers );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_name );
        tmp_args_element_name_3 = par_name;
        CHECK_OBJECT( par_default );
        tmp_args_element_name_4 = par_default;
        frame_c12dc2d0e7544add316f0615f35aa76e->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c12dc2d0e7544add316f0615f35aa76e->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c12dc2d0e7544add316f0615f35aa76e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c12dc2d0e7544add316f0615f35aa76e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c12dc2d0e7544add316f0615f35aa76e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c12dc2d0e7544add316f0615f35aa76e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c12dc2d0e7544add316f0615f35aa76e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c12dc2d0e7544add316f0615f35aa76e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c12dc2d0e7544add316f0615f35aa76e,
        type_description_1,
        par_self,
        par_name,
        par_default
    );


    // Release cached frame.
    if ( frame_c12dc2d0e7544add316f0615f35aa76e == cache_frame_c12dc2d0e7544add316f0615f35aa76e )
    {
        Py_DECREF( frame_c12dc2d0e7544add316f0615f35aa76e );
    }
    cache_frame_c12dc2d0e7544add316f0615f35aa76e = NULL;

    assertFrameObject( frame_c12dc2d0e7544add316f0615f35aa76e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_8_get_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_8_get_header );
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


static PyObject *impl_requests$cookies$$$function_9_add_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_val = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_c50931531274ecb6e735cbf0c999f520;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c50931531274ecb6e735cbf0c999f520 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c50931531274ecb6e735cbf0c999f520, codeobj_c50931531274ecb6e735cbf0c999f520, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c50931531274ecb6e735cbf0c999f520 = cache_frame_c50931531274ecb6e735cbf0c999f520;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c50931531274ecb6e735cbf0c999f520 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c50931531274ecb6e735cbf0c999f520 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_a9d19ccf5848be851d2f630cfe17789d;
        frame_c50931531274ecb6e735cbf0c999f520->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
        }

        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 76;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c50931531274ecb6e735cbf0c999f520 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c50931531274ecb6e735cbf0c999f520 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c50931531274ecb6e735cbf0c999f520, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c50931531274ecb6e735cbf0c999f520->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c50931531274ecb6e735cbf0c999f520, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c50931531274ecb6e735cbf0c999f520,
        type_description_1,
        par_self,
        par_key,
        par_val
    );


    // Release cached frame.
    if ( frame_c50931531274ecb6e735cbf0c999f520 == cache_frame_c50931531274ecb6e735cbf0c999f520 )
    {
        Py_DECREF( frame_c50931531274ecb6e735cbf0c999f520 );
    }
    cache_frame_c50931531274ecb6e735cbf0c999f520 = NULL;

    assertFrameObject( frame_c50931531274ecb6e735cbf0c999f520 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_9_add_header );
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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_9_add_header );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_requests$cookies$$$function_10_add_unredirected_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_value = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_93c7cc16b82ac5bb3317855d1fda6e78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_93c7cc16b82ac5bb3317855d1fda6e78 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_93c7cc16b82ac5bb3317855d1fda6e78, codeobj_93c7cc16b82ac5bb3317855d1fda6e78, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_93c7cc16b82ac5bb3317855d1fda6e78 = cache_frame_93c7cc16b82ac5bb3317855d1fda6e78;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_93c7cc16b82ac5bb3317855d1fda6e78 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_93c7cc16b82ac5bb3317855d1fda6e78 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_value );
        tmp_ass_subvalue_1 = par_value;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new_headers );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_name );
        tmp_ass_subscript_1 = par_name;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93c7cc16b82ac5bb3317855d1fda6e78 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93c7cc16b82ac5bb3317855d1fda6e78 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_93c7cc16b82ac5bb3317855d1fda6e78, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_93c7cc16b82ac5bb3317855d1fda6e78->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_93c7cc16b82ac5bb3317855d1fda6e78, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_93c7cc16b82ac5bb3317855d1fda6e78,
        type_description_1,
        par_self,
        par_name,
        par_value
    );


    // Release cached frame.
    if ( frame_93c7cc16b82ac5bb3317855d1fda6e78 == cache_frame_93c7cc16b82ac5bb3317855d1fda6e78 )
    {
        Py_DECREF( frame_93c7cc16b82ac5bb3317855d1fda6e78 );
    }
    cache_frame_93c7cc16b82ac5bb3317855d1fda6e78 = NULL;

    assertFrameObject( frame_93c7cc16b82ac5bb3317855d1fda6e78 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_10_add_unredirected_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_10_add_unredirected_header );
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


static PyObject *impl_requests$cookies$$$function_11_get_new_headers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_64cf8d6a1c93cbfac24ff7088c50c69d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_64cf8d6a1c93cbfac24ff7088c50c69d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_64cf8d6a1c93cbfac24ff7088c50c69d, codeobj_64cf8d6a1c93cbfac24ff7088c50c69d, module_requests$cookies, sizeof(void *) );
    frame_64cf8d6a1c93cbfac24ff7088c50c69d = cache_frame_64cf8d6a1c93cbfac24ff7088c50c69d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_64cf8d6a1c93cbfac24ff7088c50c69d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_64cf8d6a1c93cbfac24ff7088c50c69d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new_headers );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64cf8d6a1c93cbfac24ff7088c50c69d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_64cf8d6a1c93cbfac24ff7088c50c69d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64cf8d6a1c93cbfac24ff7088c50c69d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_64cf8d6a1c93cbfac24ff7088c50c69d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_64cf8d6a1c93cbfac24ff7088c50c69d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_64cf8d6a1c93cbfac24ff7088c50c69d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_64cf8d6a1c93cbfac24ff7088c50c69d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_64cf8d6a1c93cbfac24ff7088c50c69d == cache_frame_64cf8d6a1c93cbfac24ff7088c50c69d )
    {
        Py_DECREF( frame_64cf8d6a1c93cbfac24ff7088c50c69d );
    }
    cache_frame_64cf8d6a1c93cbfac24ff7088c50c69d = NULL;

    assertFrameObject( frame_64cf8d6a1c93cbfac24ff7088c50c69d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_11_get_new_headers );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_11_get_new_headers );
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


static PyObject *impl_requests$cookies$$$function_12_unverifiable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_f584b2a832a03be500d30acc02a36621;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f584b2a832a03be500d30acc02a36621 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f584b2a832a03be500d30acc02a36621, codeobj_f584b2a832a03be500d30acc02a36621, module_requests$cookies, sizeof(void *) );
    frame_f584b2a832a03be500d30acc02a36621 = cache_frame_f584b2a832a03be500d30acc02a36621;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f584b2a832a03be500d30acc02a36621 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f584b2a832a03be500d30acc02a36621 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_f584b2a832a03be500d30acc02a36621->m_frame.f_lineno = 86;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_is_unverifiable );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f584b2a832a03be500d30acc02a36621 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f584b2a832a03be500d30acc02a36621 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f584b2a832a03be500d30acc02a36621 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f584b2a832a03be500d30acc02a36621, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f584b2a832a03be500d30acc02a36621->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f584b2a832a03be500d30acc02a36621, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f584b2a832a03be500d30acc02a36621,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_f584b2a832a03be500d30acc02a36621 == cache_frame_f584b2a832a03be500d30acc02a36621 )
    {
        Py_DECREF( frame_f584b2a832a03be500d30acc02a36621 );
    }
    cache_frame_f584b2a832a03be500d30acc02a36621 = NULL;

    assertFrameObject( frame_f584b2a832a03be500d30acc02a36621 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_12_unverifiable );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_12_unverifiable );
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


static PyObject *impl_requests$cookies$$$function_13_origin_req_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4e19cc60670ecd373a3b2833f1a46dc4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e19cc60670ecd373a3b2833f1a46dc4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4e19cc60670ecd373a3b2833f1a46dc4, codeobj_4e19cc60670ecd373a3b2833f1a46dc4, module_requests$cookies, sizeof(void *) );
    frame_4e19cc60670ecd373a3b2833f1a46dc4 = cache_frame_4e19cc60670ecd373a3b2833f1a46dc4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4e19cc60670ecd373a3b2833f1a46dc4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4e19cc60670ecd373a3b2833f1a46dc4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_4e19cc60670ecd373a3b2833f1a46dc4->m_frame.f_lineno = 90;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_origin_req_host );
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
    RESTORE_FRAME_EXCEPTION( frame_4e19cc60670ecd373a3b2833f1a46dc4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e19cc60670ecd373a3b2833f1a46dc4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e19cc60670ecd373a3b2833f1a46dc4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4e19cc60670ecd373a3b2833f1a46dc4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4e19cc60670ecd373a3b2833f1a46dc4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4e19cc60670ecd373a3b2833f1a46dc4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4e19cc60670ecd373a3b2833f1a46dc4,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4e19cc60670ecd373a3b2833f1a46dc4 == cache_frame_4e19cc60670ecd373a3b2833f1a46dc4 )
    {
        Py_DECREF( frame_4e19cc60670ecd373a3b2833f1a46dc4 );
    }
    cache_frame_4e19cc60670ecd373a3b2833f1a46dc4 = NULL;

    assertFrameObject( frame_4e19cc60670ecd373a3b2833f1a46dc4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_13_origin_req_host );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_13_origin_req_host );
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


static PyObject *impl_requests$cookies$$$function_14_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_fa6216cd1b197255a92de3beac91c26d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fa6216cd1b197255a92de3beac91c26d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fa6216cd1b197255a92de3beac91c26d, codeobj_fa6216cd1b197255a92de3beac91c26d, module_requests$cookies, sizeof(void *) );
    frame_fa6216cd1b197255a92de3beac91c26d = cache_frame_fa6216cd1b197255a92de3beac91c26d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fa6216cd1b197255a92de3beac91c26d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fa6216cd1b197255a92de3beac91c26d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_fa6216cd1b197255a92de3beac91c26d->m_frame.f_lineno = 94;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_host );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa6216cd1b197255a92de3beac91c26d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa6216cd1b197255a92de3beac91c26d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa6216cd1b197255a92de3beac91c26d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fa6216cd1b197255a92de3beac91c26d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fa6216cd1b197255a92de3beac91c26d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fa6216cd1b197255a92de3beac91c26d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fa6216cd1b197255a92de3beac91c26d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_fa6216cd1b197255a92de3beac91c26d == cache_frame_fa6216cd1b197255a92de3beac91c26d )
    {
        Py_DECREF( frame_fa6216cd1b197255a92de3beac91c26d );
    }
    cache_frame_fa6216cd1b197255a92de3beac91c26d = NULL;

    assertFrameObject( frame_fa6216cd1b197255a92de3beac91c26d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_14_host );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_14_host );
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


static PyObject *impl_requests$cookies$$$function_15___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_headers = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_f31a7fdbd3eb3b73ec922fe9a794bd2b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f31a7fdbd3eb3b73ec922fe9a794bd2b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f31a7fdbd3eb3b73ec922fe9a794bd2b, codeobj_f31a7fdbd3eb3b73ec922fe9a794bd2b, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_f31a7fdbd3eb3b73ec922fe9a794bd2b = cache_frame_f31a7fdbd3eb3b73ec922fe9a794bd2b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f31a7fdbd3eb3b73ec922fe9a794bd2b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f31a7fdbd3eb3b73ec922fe9a794bd2b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_headers );
        tmp_assattr_name_1 = par_headers;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__headers, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f31a7fdbd3eb3b73ec922fe9a794bd2b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f31a7fdbd3eb3b73ec922fe9a794bd2b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f31a7fdbd3eb3b73ec922fe9a794bd2b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f31a7fdbd3eb3b73ec922fe9a794bd2b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f31a7fdbd3eb3b73ec922fe9a794bd2b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f31a7fdbd3eb3b73ec922fe9a794bd2b,
        type_description_1,
        par_self,
        par_headers
    );


    // Release cached frame.
    if ( frame_f31a7fdbd3eb3b73ec922fe9a794bd2b == cache_frame_f31a7fdbd3eb3b73ec922fe9a794bd2b )
    {
        Py_DECREF( frame_f31a7fdbd3eb3b73ec922fe9a794bd2b );
    }
    cache_frame_f31a7fdbd3eb3b73ec922fe9a794bd2b = NULL;

    assertFrameObject( frame_f31a7fdbd3eb3b73ec922fe9a794bd2b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_15___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

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

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_15___init__ );
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


static PyObject *impl_requests$cookies$$$function_16_info( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_67a5f110d636fbc0ecc446bca992daf8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_67a5f110d636fbc0ecc446bca992daf8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_67a5f110d636fbc0ecc446bca992daf8, codeobj_67a5f110d636fbc0ecc446bca992daf8, module_requests$cookies, sizeof(void *) );
    frame_67a5f110d636fbc0ecc446bca992daf8 = cache_frame_67a5f110d636fbc0ecc446bca992daf8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67a5f110d636fbc0ecc446bca992daf8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67a5f110d636fbc0ecc446bca992daf8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__headers );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67a5f110d636fbc0ecc446bca992daf8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_67a5f110d636fbc0ecc446bca992daf8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67a5f110d636fbc0ecc446bca992daf8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67a5f110d636fbc0ecc446bca992daf8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67a5f110d636fbc0ecc446bca992daf8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67a5f110d636fbc0ecc446bca992daf8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67a5f110d636fbc0ecc446bca992daf8,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_67a5f110d636fbc0ecc446bca992daf8 == cache_frame_67a5f110d636fbc0ecc446bca992daf8 )
    {
        Py_DECREF( frame_67a5f110d636fbc0ecc446bca992daf8 );
    }
    cache_frame_67a5f110d636fbc0ecc446bca992daf8 = NULL;

    assertFrameObject( frame_67a5f110d636fbc0ecc446bca992daf8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_16_info );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_16_info );
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


static PyObject *impl_requests$cookies$$$function_17_getheaders( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2c65bdd7453852b29c7399ad0fec796b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2c65bdd7453852b29c7399ad0fec796b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2c65bdd7453852b29c7399ad0fec796b, codeobj_2c65bdd7453852b29c7399ad0fec796b, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_2c65bdd7453852b29c7399ad0fec796b = cache_frame_2c65bdd7453852b29c7399ad0fec796b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2c65bdd7453852b29c7399ad0fec796b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2c65bdd7453852b29c7399ad0fec796b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__headers );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        frame_2c65bdd7453852b29c7399ad0fec796b->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getheaders, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c65bdd7453852b29c7399ad0fec796b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c65bdd7453852b29c7399ad0fec796b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c65bdd7453852b29c7399ad0fec796b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c65bdd7453852b29c7399ad0fec796b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c65bdd7453852b29c7399ad0fec796b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2c65bdd7453852b29c7399ad0fec796b,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_2c65bdd7453852b29c7399ad0fec796b == cache_frame_2c65bdd7453852b29c7399ad0fec796b )
    {
        Py_DECREF( frame_2c65bdd7453852b29c7399ad0fec796b );
    }
    cache_frame_2c65bdd7453852b29c7399ad0fec796b = NULL;

    assertFrameObject( frame_2c65bdd7453852b29c7399ad0fec796b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_17_getheaders );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_17_getheaders );
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


static PyObject *impl_requests$cookies$$$function_18_extract_cookies_to_jar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jar = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_response = python_pars[ 2 ];
    PyObject *var_req = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_f1e9f7f60165068fd1baa19cb1b74e6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f1e9f7f60165068fd1baa19cb1b74e6a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f1e9f7f60165068fd1baa19cb1b74e6a, codeobj_f1e9f7f60165068fd1baa19cb1b74e6a, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f1e9f7f60165068fd1baa19cb1b74e6a = cache_frame_f1e9f7f60165068fd1baa19cb1b74e6a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f1e9f7f60165068fd1baa19cb1b74e6a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f1e9f7f60165068fd1baa19cb1b74e6a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_response );
        tmp_source_name_1 = par_response;
        tmp_attribute_name_1 = const_str_plain__original_response;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par_response );
        tmp_source_name_2 = par_response;
        tmp_and_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__original_response );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF( tmp_and_left_value_1 );
        tmp_operand_name_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockRequest );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MockRequest );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MockRequest" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_request );
        tmp_args_element_name_1 = par_request;
        frame_f1e9f7f60165068fd1baa19cb1b74e6a->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_req == NULL );
        var_req = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockResponse );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MockResponse );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MockResponse" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_response );
        tmp_source_name_4 = par_response;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__original_response );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_msg );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_f1e9f7f60165068fd1baa19cb1b74e6a->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_jar );
        tmp_called_instance_1 = par_jar;
        CHECK_OBJECT( var_res );
        tmp_args_element_name_3 = var_res;
        CHECK_OBJECT( var_req );
        tmp_args_element_name_4 = var_req;
        frame_f1e9f7f60165068fd1baa19cb1b74e6a->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_extract_cookies, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1e9f7f60165068fd1baa19cb1b74e6a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1e9f7f60165068fd1baa19cb1b74e6a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1e9f7f60165068fd1baa19cb1b74e6a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f1e9f7f60165068fd1baa19cb1b74e6a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f1e9f7f60165068fd1baa19cb1b74e6a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f1e9f7f60165068fd1baa19cb1b74e6a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f1e9f7f60165068fd1baa19cb1b74e6a,
        type_description_1,
        par_jar,
        par_request,
        par_response,
        var_req,
        var_res
    );


    // Release cached frame.
    if ( frame_f1e9f7f60165068fd1baa19cb1b74e6a == cache_frame_f1e9f7f60165068fd1baa19cb1b74e6a )
    {
        Py_DECREF( frame_f1e9f7f60165068fd1baa19cb1b74e6a );
    }
    cache_frame_f1e9f7f60165068fd1baa19cb1b74e6a = NULL;

    assertFrameObject( frame_f1e9f7f60165068fd1baa19cb1b74e6a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_18_extract_cookies_to_jar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_jar );
    Py_DECREF( par_jar );
    par_jar = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

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

    CHECK_OBJECT( (PyObject *)par_jar );
    Py_DECREF( par_jar );
    par_jar = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_18_extract_cookies_to_jar );
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


static PyObject *impl_requests$cookies$$$function_19_get_cookie_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jar = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_cb5e4c1426051bcb230ec7a6d7921785;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cb5e4c1426051bcb230ec7a6d7921785 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb5e4c1426051bcb230ec7a6d7921785, codeobj_cb5e4c1426051bcb230ec7a6d7921785, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cb5e4c1426051bcb230ec7a6d7921785 = cache_frame_cb5e4c1426051bcb230ec7a6d7921785;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb5e4c1426051bcb230ec7a6d7921785 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb5e4c1426051bcb230ec7a6d7921785 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockRequest );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MockRequest );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MockRequest" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_request );
        tmp_args_element_name_1 = par_request;
        frame_cb5e4c1426051bcb230ec7a6d7921785->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_jar );
        tmp_called_instance_1 = par_jar;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_2 = var_r;
        frame_cb5e4c1426051bcb230ec7a6d7921785->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_add_cookie_header, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_r );
        tmp_called_instance_3 = var_r;
        frame_cb5e4c1426051bcb230ec7a6d7921785->m_frame.f_lineno = 143;
        tmp_called_instance_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_get_new_headers );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_cb5e4c1426051bcb230ec7a6d7921785->m_frame.f_lineno = 143;
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_Cookie_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb5e4c1426051bcb230ec7a6d7921785 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb5e4c1426051bcb230ec7a6d7921785 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb5e4c1426051bcb230ec7a6d7921785 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb5e4c1426051bcb230ec7a6d7921785, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb5e4c1426051bcb230ec7a6d7921785->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb5e4c1426051bcb230ec7a6d7921785, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb5e4c1426051bcb230ec7a6d7921785,
        type_description_1,
        par_jar,
        par_request,
        var_r
    );


    // Release cached frame.
    if ( frame_cb5e4c1426051bcb230ec7a6d7921785 == cache_frame_cb5e4c1426051bcb230ec7a6d7921785 )
    {
        Py_DECREF( frame_cb5e4c1426051bcb230ec7a6d7921785 );
    }
    cache_frame_cb5e4c1426051bcb230ec7a6d7921785 = NULL;

    assertFrameObject( frame_cb5e4c1426051bcb230ec7a6d7921785 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_19_get_cookie_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_jar );
    Py_DECREF( par_jar );
    par_jar = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_jar );
    Py_DECREF( par_jar );
    par_jar = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_19_get_cookie_header );
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


static PyObject *impl_requests$cookies$$$function_20_remove_cookie_by_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cookiejar = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_path = python_pars[ 3 ];
    PyObject *var_clearables = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_64696ca0867510980988f706fce014ec;
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
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_64696ca0867510980988f706fce014ec = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_clearables == NULL );
        var_clearables = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_64696ca0867510980988f706fce014ec, codeobj_64696ca0867510980988f706fce014ec, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_64696ca0867510980988f706fce014ec = cache_frame_64696ca0867510980988f706fce014ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_64696ca0867510980988f706fce014ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_64696ca0867510980988f706fce014ec ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_cookiejar );
        tmp_iter_arg_1 = par_cookiejar;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 152;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_name );
        tmp_compexpr_right_1 = par_name;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
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
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_domain );
        tmp_compexpr_left_2 = par_domain;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_domain );
        tmp_compexpr_left_3 = par_domain;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_2 = var_cookie;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        goto loop_start_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_path );
        tmp_compexpr_left_4 = par_path;
        tmp_compexpr_right_4 = Py_None;
        tmp_and_left_value_2 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_path );
        tmp_compexpr_left_5 = par_path;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_3 = var_cookie;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_3 = tmp_and_left_value_2;
        and_end_2:;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        goto loop_start_1;
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( var_clearables );
        tmp_source_name_4 = var_clearables;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_cookie );
        tmp_source_name_5 = var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_cookie );
        tmp_source_name_6 = var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_cookie );
        tmp_source_name_7 = var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_name );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_1, 2, tmp_tuple_element_1 );
        frame_64696ca0867510980988f706fce014ec->m_frame.f_lineno = 159;
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


            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( var_clearables );
        tmp_iter_arg_2 = var_clearables;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                exception_lineno = 161;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


            type_description_1 = "oooooo";
            exception_lineno = 161;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
        if ( tmp_assign_source_9 == NULL )
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


            type_description_1 = "oooooo";
            exception_lineno = 161;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
        if ( tmp_assign_source_10 == NULL )
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


            type_description_1 = "oooooo";
            exception_lineno = 161;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_10;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 161;
                    goto try_except_handler_5;
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

            type_description_1 = "oooooo";
            exception_lineno = 161;
            goto try_except_handler_5;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_domain;
            assert( old != NULL );
            par_domain = tmp_assign_source_11;
            Py_INCREF( par_domain );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_path;
            assert( old != NULL );
            par_path = tmp_assign_source_12;
            Py_INCREF( par_path );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_name;
            assert( old != NULL );
            par_name = tmp_assign_source_13;
            Py_INCREF( par_name );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_cookiejar );
        tmp_called_instance_1 = par_cookiejar;
        CHECK_OBJECT( par_domain );
        tmp_args_element_name_2 = par_domain;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_3 = par_path;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_4 = par_name;
        frame_64696ca0867510980988f706fce014ec->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_clear, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64696ca0867510980988f706fce014ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64696ca0867510980988f706fce014ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_64696ca0867510980988f706fce014ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_64696ca0867510980988f706fce014ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_64696ca0867510980988f706fce014ec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_64696ca0867510980988f706fce014ec,
        type_description_1,
        par_cookiejar,
        par_name,
        par_domain,
        par_path,
        var_clearables,
        var_cookie
    );


    // Release cached frame.
    if ( frame_64696ca0867510980988f706fce014ec == cache_frame_64696ca0867510980988f706fce014ec )
    {
        Py_DECREF( frame_64696ca0867510980988f706fce014ec );
    }
    cache_frame_64696ca0867510980988f706fce014ec = NULL;

    assertFrameObject( frame_64696ca0867510980988f706fce014ec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_20_remove_cookie_by_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cookiejar );
    Py_DECREF( par_cookiejar );
    par_cookiejar = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)var_clearables );
    Py_DECREF( var_clearables );
    var_clearables = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cookiejar );
    Py_DECREF( par_cookiejar );
    par_cookiejar = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    Py_XDECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)var_clearables );
    Py_DECREF( var_clearables );
    var_clearables = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_20_remove_cookie_by_name );
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


static PyObject *impl_requests$cookies$$$function_21_get( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_default = python_pars[ 2 ];
    PyObject *par_domain = python_pars[ 3 ];
    PyObject *par_path = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_b4f6b6444e1dc9a22197188eb8e1bbb0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_b4f6b6444e1dc9a22197188eb8e1bbb0 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4f6b6444e1dc9a22197188eb8e1bbb0, codeobj_b4f6b6444e1dc9a22197188eb8e1bbb0, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b4f6b6444e1dc9a22197188eb8e1bbb0 = cache_frame_b4f6b6444e1dc9a22197188eb8e1bbb0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4f6b6444e1dc9a22197188eb8e1bbb0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4f6b6444e1dc9a22197188eb8e1bbb0 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        CHECK_OBJECT( par_domain );
        tmp_args_element_name_2 = par_domain;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_3 = par_path;
        frame_b4f6b6444e1dc9a22197188eb8e1bbb0->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain__find_no_duplicates, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_21_get );
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b4f6b6444e1dc9a22197188eb8e1bbb0, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b4f6b6444e1dc9a22197188eb8e1bbb0, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
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
        CHECK_OBJECT( par_default );
        tmp_return_value = par_default;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 196;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_b4f6b6444e1dc9a22197188eb8e1bbb0->m_frame) frame_b4f6b6444e1dc9a22197188eb8e1bbb0->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_21_get );
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4f6b6444e1dc9a22197188eb8e1bbb0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4f6b6444e1dc9a22197188eb8e1bbb0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4f6b6444e1dc9a22197188eb8e1bbb0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4f6b6444e1dc9a22197188eb8e1bbb0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4f6b6444e1dc9a22197188eb8e1bbb0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4f6b6444e1dc9a22197188eb8e1bbb0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4f6b6444e1dc9a22197188eb8e1bbb0,
        type_description_1,
        par_self,
        par_name,
        par_default,
        par_domain,
        par_path
    );


    // Release cached frame.
    if ( frame_b4f6b6444e1dc9a22197188eb8e1bbb0 == cache_frame_b4f6b6444e1dc9a22197188eb8e1bbb0 )
    {
        Py_DECREF( frame_b4f6b6444e1dc9a22197188eb8e1bbb0 );
    }
    cache_frame_b4f6b6444e1dc9a22197188eb8e1bbb0 = NULL;

    assertFrameObject( frame_b4f6b6444e1dc9a22197188eb8e1bbb0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_21_get );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_21_get );
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


static PyObject *impl_requests$cookies$$$function_22_set( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_value = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *var_c = NULL;
    struct Nuitka_FrameObject *frame_e58e5bc1cd96f0f542474a5ea421a28f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e58e5bc1cd96f0f542474a5ea421a28f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e58e5bc1cd96f0f542474a5ea421a28f, codeobj_e58e5bc1cd96f0f542474a5ea421a28f, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e58e5bc1cd96f0f542474a5ea421a28f = cache_frame_e58e5bc1cd96f0f542474a5ea421a28f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e58e5bc1cd96f0f542474a5ea421a28f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e58e5bc1cd96f0f542474a5ea421a28f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_value );
        tmp_compexpr_left_1 = par_value;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_called_instance_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "remove_cookie_by_name" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_self );
            tmp_tuple_element_1 = par_self;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_name );
            tmp_tuple_element_1 = par_name;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_domain;
            CHECK_OBJECT( par_kwargs );
            tmp_called_instance_1 = par_kwargs;
            frame_e58e5bc1cd96f0f542474a5ea421a28f->m_frame.f_lineno = 208;
            tmp_dict_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_domain_tuple, 0 ) );

            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_path;
            CHECK_OBJECT( par_kwargs );
            tmp_called_instance_2 = par_kwargs;
            frame_e58e5bc1cd96f0f542474a5ea421a28f->m_frame.f_lineno = 208;
            tmp_dict_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_path_tuple, 0 ) );

            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_e58e5bc1cd96f0f542474a5ea421a28f->m_frame.f_lineno = 208;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_value );
        tmp_isinstance_inst_1 = par_value;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_Morsel );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Morsel );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Morsel" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_morsel_to_cookie );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_morsel_to_cookie );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "morsel_to_cookie" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 212;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_value );
            tmp_args_element_name_1 = par_value;
            frame_e58e5bc1cd96f0f542474a5ea421a28f->m_frame.f_lineno = 212;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c == NULL );
            var_c = tmp_assign_source_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_create_cookie );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_cookie );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "create_cookie" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 214;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_4;
            CHECK_OBJECT( par_name );
            tmp_tuple_element_2 = par_name;
            tmp_dircall_arg2_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_value );
            tmp_tuple_element_2 = par_value;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( par_kwargs );
            tmp_dircall_arg3_1 = par_kwargs;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg3_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_assign_source_2 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 214;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c == NULL );
            var_c = tmp_assign_source_2;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT( var_c );
        tmp_args_element_name_2 = var_c;
        frame_e58e5bc1cd96f0f542474a5ea421a28f->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_set_cookie, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e58e5bc1cd96f0f542474a5ea421a28f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e58e5bc1cd96f0f542474a5ea421a28f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e58e5bc1cd96f0f542474a5ea421a28f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e58e5bc1cd96f0f542474a5ea421a28f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e58e5bc1cd96f0f542474a5ea421a28f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e58e5bc1cd96f0f542474a5ea421a28f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e58e5bc1cd96f0f542474a5ea421a28f,
        type_description_1,
        par_self,
        par_name,
        par_value,
        par_kwargs,
        var_c
    );


    // Release cached frame.
    if ( frame_e58e5bc1cd96f0f542474a5ea421a28f == cache_frame_e58e5bc1cd96f0f542474a5ea421a28f )
    {
        Py_DECREF( frame_e58e5bc1cd96f0f542474a5ea421a28f );
    }
    cache_frame_e58e5bc1cd96f0f542474a5ea421a28f = NULL;

    assertFrameObject( frame_e58e5bc1cd96f0f542474a5ea421a28f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_c );
    tmp_return_value = var_c;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_22_set );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_22_set );
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


static PyObject *impl_requests$cookies$$$function_23_iterkeys( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_23_iterkeys );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_23_iterkeys );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_locals {
    PyObject *var_cookie;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_locals *generator_heap = (struct requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cookie = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_4309c2d840afd0ca598f80783c7ef377, module_requests$cookies, sizeof(void *)+sizeof(void *) );
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
        PyObject *tmp_iter_arg_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 224;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 224;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->tmp_for_loop_1__for_iterator == NULL );
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "co";
                generator_heap->exception_lineno = 224;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_cookie;
            generator_heap->var_cookie = tmp_assign_source_3;
            Py_INCREF( generator_heap->var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_source_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_cookie );
        tmp_source_name_1 = generator_heap->var_cookie;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 225;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 225;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 224;
        generator_heap->type_description_1 = "co";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            generator->m_closure[0],
            generator_heap->var_cookie
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_cookie );
    generator_heap->var_cookie = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( generator_heap->var_cookie );
    generator_heap->var_cookie = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_maker( void )
{
    return Nuitka_Generator_New(
        requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_context,
        module_requests$cookies,
        const_str_plain_iterkeys,
#if PYTHON_VERSION >= 350
        const_str_digest_9559440875cf716ec7a8bef311cbaefe,
#endif
        codeobj_4309c2d840afd0ca598f80783c7ef377,
        1,
        sizeof(struct requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_locals)
    );
}


static PyObject *impl_requests$cookies$$$function_24_keys( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_6e88561e4f9278122ced014a2ff83a60;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e88561e4f9278122ced014a2ff83a60 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6e88561e4f9278122ced014a2ff83a60, codeobj_6e88561e4f9278122ced014a2ff83a60, module_requests$cookies, sizeof(void *) );
    frame_6e88561e4f9278122ced014a2ff83a60 = cache_frame_6e88561e4f9278122ced014a2ff83a60;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6e88561e4f9278122ced014a2ff83a60 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6e88561e4f9278122ced014a2ff83a60 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_6e88561e4f9278122ced014a2ff83a60->m_frame.f_lineno = 233;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_iterkeys );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
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
    RESTORE_FRAME_EXCEPTION( frame_6e88561e4f9278122ced014a2ff83a60 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e88561e4f9278122ced014a2ff83a60 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e88561e4f9278122ced014a2ff83a60 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6e88561e4f9278122ced014a2ff83a60, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6e88561e4f9278122ced014a2ff83a60->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6e88561e4f9278122ced014a2ff83a60, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6e88561e4f9278122ced014a2ff83a60,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_6e88561e4f9278122ced014a2ff83a60 == cache_frame_6e88561e4f9278122ced014a2ff83a60 )
    {
        Py_DECREF( frame_6e88561e4f9278122ced014a2ff83a60 );
    }
    cache_frame_6e88561e4f9278122ced014a2ff83a60 = NULL;

    assertFrameObject( frame_6e88561e4f9278122ced014a2ff83a60 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_24_keys );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_24_keys );
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


static PyObject *impl_requests$cookies$$$function_25_itervalues( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_25_itervalues );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_25_itervalues );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_locals {
    PyObject *var_cookie;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_locals *generator_heap = (struct requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cookie = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_aca8e823d8c8dcd21c5ff284241847a9, module_requests$cookies, sizeof(void *)+sizeof(void *) );
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
        PyObject *tmp_iter_arg_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 241;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 241;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->tmp_for_loop_1__for_iterator == NULL );
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "co";
                generator_heap->exception_lineno = 241;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_cookie;
            generator_heap->var_cookie = tmp_assign_source_3;
            Py_INCREF( generator_heap->var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_source_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_cookie );
        tmp_source_name_1 = generator_heap->var_cookie;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_value );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 241;
        generator_heap->type_description_1 = "co";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            generator->m_closure[0],
            generator_heap->var_cookie
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_cookie );
    generator_heap->var_cookie = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( generator_heap->var_cookie );
    generator_heap->var_cookie = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_maker( void )
{
    return Nuitka_Generator_New(
        requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_context,
        module_requests$cookies,
        const_str_plain_itervalues,
#if PYTHON_VERSION >= 350
        const_str_digest_0a2127aa931e582083c667383d216ebd,
#endif
        codeobj_aca8e823d8c8dcd21c5ff284241847a9,
        1,
        sizeof(struct requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_locals)
    );
}


static PyObject *impl_requests$cookies$$$function_26_values( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a714d1b3a7776f24bfbf3bd245b55a24;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a714d1b3a7776f24bfbf3bd245b55a24 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a714d1b3a7776f24bfbf3bd245b55a24, codeobj_a714d1b3a7776f24bfbf3bd245b55a24, module_requests$cookies, sizeof(void *) );
    frame_a714d1b3a7776f24bfbf3bd245b55a24 = cache_frame_a714d1b3a7776f24bfbf3bd245b55a24;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a714d1b3a7776f24bfbf3bd245b55a24 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a714d1b3a7776f24bfbf3bd245b55a24 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_a714d1b3a7776f24bfbf3bd245b55a24->m_frame.f_lineno = 250;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_itervalues );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a714d1b3a7776f24bfbf3bd245b55a24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a714d1b3a7776f24bfbf3bd245b55a24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a714d1b3a7776f24bfbf3bd245b55a24 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a714d1b3a7776f24bfbf3bd245b55a24, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a714d1b3a7776f24bfbf3bd245b55a24->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a714d1b3a7776f24bfbf3bd245b55a24, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a714d1b3a7776f24bfbf3bd245b55a24,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a714d1b3a7776f24bfbf3bd245b55a24 == cache_frame_a714d1b3a7776f24bfbf3bd245b55a24 )
    {
        Py_DECREF( frame_a714d1b3a7776f24bfbf3bd245b55a24 );
    }
    cache_frame_a714d1b3a7776f24bfbf3bd245b55a24 = NULL;

    assertFrameObject( frame_a714d1b3a7776f24bfbf3bd245b55a24 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_26_values );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_26_values );
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


static PyObject *impl_requests$cookies$$$function_27_iteritems( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_27_iteritems );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_27_iteritems );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_locals {
    PyObject *var_cookie;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_locals *generator_heap = (struct requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cookie = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_e45fdd9df5bb097c5b96abedc3559758, module_requests$cookies, sizeof(void *)+sizeof(void *) );
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
        PyObject *tmp_iter_arg_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->tmp_for_loop_1__for_iterator == NULL );
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "co";
                generator_heap->exception_lineno = 258;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_cookie;
            generator_heap->var_cookie = tmp_assign_source_3;
            Py_INCREF( generator_heap->var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_cookie );
        tmp_source_name_1 = generator_heap->var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_expression_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( generator_heap->var_cookie );
        tmp_source_name_2 = generator_heap->var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_value );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_expression_name_1 );

            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_source_name_2, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_source_name_2, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 258;
        generator_heap->type_description_1 = "co";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            generator->m_closure[0],
            generator_heap->var_cookie
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_cookie );
    generator_heap->var_cookie = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( generator_heap->var_cookie );
    generator_heap->var_cookie = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_maker( void )
{
    return Nuitka_Generator_New(
        requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_context,
        module_requests$cookies,
        const_str_plain_iteritems,
#if PYTHON_VERSION >= 350
        const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d,
#endif
        codeobj_e45fdd9df5bb097c5b96abedc3559758,
        1,
        sizeof(struct requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_locals)
    );
}


static PyObject *impl_requests$cookies$$$function_28_items( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3f8d0ed57cc4410362336a1125142278;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3f8d0ed57cc4410362336a1125142278 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3f8d0ed57cc4410362336a1125142278, codeobj_3f8d0ed57cc4410362336a1125142278, module_requests$cookies, sizeof(void *) );
    frame_3f8d0ed57cc4410362336a1125142278 = cache_frame_3f8d0ed57cc4410362336a1125142278;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3f8d0ed57cc4410362336a1125142278 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3f8d0ed57cc4410362336a1125142278 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_3f8d0ed57cc4410362336a1125142278->m_frame.f_lineno = 268;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_iteritems );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f8d0ed57cc4410362336a1125142278 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f8d0ed57cc4410362336a1125142278 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f8d0ed57cc4410362336a1125142278 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3f8d0ed57cc4410362336a1125142278, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3f8d0ed57cc4410362336a1125142278->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3f8d0ed57cc4410362336a1125142278, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3f8d0ed57cc4410362336a1125142278,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_3f8d0ed57cc4410362336a1125142278 == cache_frame_3f8d0ed57cc4410362336a1125142278 )
    {
        Py_DECREF( frame_3f8d0ed57cc4410362336a1125142278 );
    }
    cache_frame_3f8d0ed57cc4410362336a1125142278 = NULL;

    assertFrameObject( frame_3f8d0ed57cc4410362336a1125142278 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_28_items );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_28_items );
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


static PyObject *impl_requests$cookies$$$function_29_list_domains( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_domains = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_20b971062815ffb4253b1c9e86b05c70;
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
    static struct Nuitka_FrameObject *cache_frame_20b971062815ffb4253b1c9e86b05c70 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_domains == NULL );
        var_domains = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_20b971062815ffb4253b1c9e86b05c70, codeobj_20b971062815ffb4253b1c9e86b05c70, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_20b971062815ffb4253b1c9e86b05c70 = cache_frame_20b971062815ffb4253b1c9e86b05c70;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_20b971062815ffb4253b1c9e86b05c70 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_20b971062815ffb4253b1c9e86b05c70 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_self );
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
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
                exception_lineno = 273;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_domains );
        tmp_compexpr_right_1 = var_domains;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( var_domains );
            tmp_source_name_2 = var_domains;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_cookie );
            tmp_source_name_3 = var_cookie;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 275;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_20b971062815ffb4253b1c9e86b05c70->m_frame.f_lineno = 275;
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


                exception_lineno = 275;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20b971062815ffb4253b1c9e86b05c70 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20b971062815ffb4253b1c9e86b05c70 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_20b971062815ffb4253b1c9e86b05c70, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_20b971062815ffb4253b1c9e86b05c70->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_20b971062815ffb4253b1c9e86b05c70, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_20b971062815ffb4253b1c9e86b05c70,
        type_description_1,
        par_self,
        var_domains,
        var_cookie
    );


    // Release cached frame.
    if ( frame_20b971062815ffb4253b1c9e86b05c70 == cache_frame_20b971062815ffb4253b1c9e86b05c70 )
    {
        Py_DECREF( frame_20b971062815ffb4253b1c9e86b05c70 );
    }
    cache_frame_20b971062815ffb4253b1c9e86b05c70 = NULL;

    assertFrameObject( frame_20b971062815ffb4253b1c9e86b05c70 );

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

    CHECK_OBJECT( var_domains );
    tmp_return_value = var_domains;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_29_list_domains );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_domains );
    Py_DECREF( var_domains );
    var_domains = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_domains );
    Py_DECREF( var_domains );
    var_domains = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_29_list_domains );
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


static PyObject *impl_requests$cookies$$$function_30_list_paths( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_paths = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_24b0b808022e207e3c3b35dec7c8c5ac;
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
    static struct Nuitka_FrameObject *cache_frame_24b0b808022e207e3c3b35dec7c8c5ac = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_paths == NULL );
        var_paths = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_24b0b808022e207e3c3b35dec7c8c5ac, codeobj_24b0b808022e207e3c3b35dec7c8c5ac, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_24b0b808022e207e3c3b35dec7c8c5ac = cache_frame_24b0b808022e207e3c3b35dec7c8c5ac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_24b0b808022e207e3c3b35dec7c8c5ac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_24b0b808022e207e3c3b35dec7c8c5ac ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_self );
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
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
                exception_lineno = 281;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_path );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_paths );
        tmp_compexpr_right_1 = var_paths;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( var_paths );
            tmp_source_name_2 = var_paths;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_cookie );
            tmp_source_name_3 = var_cookie;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 283;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_24b0b808022e207e3c3b35dec7c8c5ac->m_frame.f_lineno = 283;
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


                exception_lineno = 283;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24b0b808022e207e3c3b35dec7c8c5ac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24b0b808022e207e3c3b35dec7c8c5ac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_24b0b808022e207e3c3b35dec7c8c5ac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_24b0b808022e207e3c3b35dec7c8c5ac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_24b0b808022e207e3c3b35dec7c8c5ac, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_24b0b808022e207e3c3b35dec7c8c5ac,
        type_description_1,
        par_self,
        var_paths,
        var_cookie
    );


    // Release cached frame.
    if ( frame_24b0b808022e207e3c3b35dec7c8c5ac == cache_frame_24b0b808022e207e3c3b35dec7c8c5ac )
    {
        Py_DECREF( frame_24b0b808022e207e3c3b35dec7c8c5ac );
    }
    cache_frame_24b0b808022e207e3c3b35dec7c8c5ac = NULL;

    assertFrameObject( frame_24b0b808022e207e3c3b35dec7c8c5ac );

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

    CHECK_OBJECT( var_paths );
    tmp_return_value = var_paths;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_30_list_paths );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_paths );
    Py_DECREF( var_paths );
    var_paths = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_paths );
    Py_DECREF( var_paths );
    var_paths = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_30_list_paths );
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


static PyObject *impl_requests$cookies$$$function_31_multiple_domains( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_domains = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a837571046802aab75a5459b4a336872;
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
    static struct Nuitka_FrameObject *cache_frame_a837571046802aab75a5459b4a336872 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_domains == NULL );
        var_domains = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a837571046802aab75a5459b4a336872, codeobj_a837571046802aab75a5459b4a336872, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a837571046802aab75a5459b4a336872 = cache_frame_a837571046802aab75a5459b4a336872;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a837571046802aab75a5459b4a336872 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a837571046802aab75a5459b4a336872 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_self );
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
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
                exception_lineno = 293;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
        CHECK_OBJECT( var_cookie );
        tmp_source_name_2 = var_cookie;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_domains );
        tmp_compexpr_right_2 = var_domains;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_2;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_domains );
        tmp_source_name_3 = var_domains;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_cookie );
        tmp_source_name_4 = var_cookie;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 296;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_a837571046802aab75a5459b4a336872->m_frame.f_lineno = 296;
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


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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
    RESTORE_FRAME_EXCEPTION( frame_a837571046802aab75a5459b4a336872 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a837571046802aab75a5459b4a336872 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a837571046802aab75a5459b4a336872 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a837571046802aab75a5459b4a336872, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a837571046802aab75a5459b4a336872->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a837571046802aab75a5459b4a336872, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a837571046802aab75a5459b4a336872,
        type_description_1,
        par_self,
        var_domains,
        var_cookie
    );


    // Release cached frame.
    if ( frame_a837571046802aab75a5459b4a336872 == cache_frame_a837571046802aab75a5459b4a336872 )
    {
        Py_DECREF( frame_a837571046802aab75a5459b4a336872 );
    }
    cache_frame_a837571046802aab75a5459b4a336872 = NULL;

    assertFrameObject( frame_a837571046802aab75a5459b4a336872 );

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

    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_31_multiple_domains );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_domains );
    Py_DECREF( var_domains );
    var_domains = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_domains );
    Py_DECREF( var_domains );
    var_domains = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_31_multiple_domains );
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


static PyObject *impl_requests$cookies$$$function_32_get_dict( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_domain = python_pars[ 1 ];
    PyObject *par_path = python_pars[ 2 ];
    PyObject *var_dictionary = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_b4617c6ebc4f8788c8455e65f3ecce55;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_b4617c6ebc4f8788c8455e65f3ecce55 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_dictionary == NULL );
        var_dictionary = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4617c6ebc4f8788c8455e65f3ecce55, codeobj_b4617c6ebc4f8788c8455e65f3ecce55, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b4617c6ebc4f8788c8455e65f3ecce55 = cache_frame_b4617c6ebc4f8788c8455e65f3ecce55;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4617c6ebc4f8788c8455e65f3ecce55 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4617c6ebc4f8788c8455e65f3ecce55 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_self );
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
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
                exception_lineno = 307;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_domain );
        tmp_compexpr_left_1 = par_domain;
        tmp_compexpr_right_1 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 309;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_domain );
        tmp_compexpr_right_2 = par_domain;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 309;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_left_value_1 = tmp_or_left_value_1;
        or_end_1:;
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
        tmp_compexpr_left_3 = par_path;
        tmp_compexpr_right_3 = Py_None;
        tmp_or_left_value_2 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_cookie );
        tmp_source_name_2 = var_cookie;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_path );
        tmp_compexpr_right_4 = par_path;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_and_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
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
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( var_cookie );
            tmp_source_name_3 = var_cookie;
            tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_value );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_dictionary );
            tmp_dictset_dict = var_dictionary;
            CHECK_OBJECT( var_cookie );
            tmp_source_name_4 = var_cookie;
            tmp_dictset_key = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
            if ( tmp_dictset_key == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dictset_value );

                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_dictset_key );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
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
    RESTORE_FRAME_EXCEPTION( frame_b4617c6ebc4f8788c8455e65f3ecce55 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4617c6ebc4f8788c8455e65f3ecce55 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4617c6ebc4f8788c8455e65f3ecce55, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4617c6ebc4f8788c8455e65f3ecce55->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4617c6ebc4f8788c8455e65f3ecce55, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4617c6ebc4f8788c8455e65f3ecce55,
        type_description_1,
        par_self,
        par_domain,
        par_path,
        var_dictionary,
        var_cookie
    );


    // Release cached frame.
    if ( frame_b4617c6ebc4f8788c8455e65f3ecce55 == cache_frame_b4617c6ebc4f8788c8455e65f3ecce55 )
    {
        Py_DECREF( frame_b4617c6ebc4f8788c8455e65f3ecce55 );
    }
    cache_frame_b4617c6ebc4f8788c8455e65f3ecce55 = NULL;

    assertFrameObject( frame_b4617c6ebc4f8788c8455e65f3ecce55 );

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

    CHECK_OBJECT( var_dictionary );
    tmp_return_value = var_dictionary;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_32_get_dict );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)var_dictionary );
    Py_DECREF( var_dictionary );
    var_dictionary = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)var_dictionary );
    Py_DECREF( var_dictionary );
    var_dictionary = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_32_get_dict );
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


static PyObject *impl_requests$cookies$$$function_33___contains__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c4276493927d1b67fbcb2611b8497182;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_c4276493927d1b67fbcb2611b8497182 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c4276493927d1b67fbcb2611b8497182, codeobj_c4276493927d1b67fbcb2611b8497182, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c4276493927d1b67fbcb2611b8497182 = cache_frame_c4276493927d1b67fbcb2611b8497182;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c4276493927d1b67fbcb2611b8497182 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c4276493927d1b67fbcb2611b8497182 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestsCookieJar" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 317;
            type_description_1 = "ooN";
            goto try_except_handler_2;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooN";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        frame_c4276493927d1b67fbcb2611b8497182->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___contains__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooN";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_33___contains__ );
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c4276493927d1b67fbcb2611b8497182, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c4276493927d1b67fbcb2611b8497182, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_2;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_CookieConflictError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CookieConflictError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CookieConflictError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 318;
            type_description_1 = "ooN";
            goto try_except_handler_3;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_1 = "ooN";
            goto try_except_handler_3;
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
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 316;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c4276493927d1b67fbcb2611b8497182->m_frame) frame_c4276493927d1b67fbcb2611b8497182->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooN";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_33___contains__ );
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4276493927d1b67fbcb2611b8497182 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4276493927d1b67fbcb2611b8497182 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4276493927d1b67fbcb2611b8497182 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c4276493927d1b67fbcb2611b8497182, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c4276493927d1b67fbcb2611b8497182->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c4276493927d1b67fbcb2611b8497182, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c4276493927d1b67fbcb2611b8497182,
        type_description_1,
        par_self,
        par_name,
        NULL
    );


    // Release cached frame.
    if ( frame_c4276493927d1b67fbcb2611b8497182 == cache_frame_c4276493927d1b67fbcb2611b8497182 )
    {
        Py_DECREF( frame_c4276493927d1b67fbcb2611b8497182 );
    }
    cache_frame_c4276493927d1b67fbcb2611b8497182 = NULL;

    assertFrameObject( frame_c4276493927d1b67fbcb2611b8497182 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_33___contains__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_33___contains__ );
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


static PyObject *impl_requests$cookies$$$function_34___getitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a55efe02f692c44829765f9d8137adda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a55efe02f692c44829765f9d8137adda = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a55efe02f692c44829765f9d8137adda, codeobj_a55efe02f692c44829765f9d8137adda, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_a55efe02f692c44829765f9d8137adda = cache_frame_a55efe02f692c44829765f9d8137adda;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a55efe02f692c44829765f9d8137adda );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a55efe02f692c44829765f9d8137adda ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        frame_a55efe02f692c44829765f9d8137adda->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__find_no_duplicates, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a55efe02f692c44829765f9d8137adda );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a55efe02f692c44829765f9d8137adda );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a55efe02f692c44829765f9d8137adda );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a55efe02f692c44829765f9d8137adda, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a55efe02f692c44829765f9d8137adda->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a55efe02f692c44829765f9d8137adda, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a55efe02f692c44829765f9d8137adda,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_a55efe02f692c44829765f9d8137adda == cache_frame_a55efe02f692c44829765f9d8137adda )
    {
        Py_DECREF( frame_a55efe02f692c44829765f9d8137adda );
    }
    cache_frame_a55efe02f692c44829765f9d8137adda = NULL;

    assertFrameObject( frame_a55efe02f692c44829765f9d8137adda );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_34___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_34___getitem__ );
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


static PyObject *impl_requests$cookies$$$function_35___setitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_value = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_7e5163a9d59806ee74bebed98c90a49f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7e5163a9d59806ee74bebed98c90a49f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7e5163a9d59806ee74bebed98c90a49f, codeobj_7e5163a9d59806ee74bebed98c90a49f, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7e5163a9d59806ee74bebed98c90a49f = cache_frame_7e5163a9d59806ee74bebed98c90a49f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7e5163a9d59806ee74bebed98c90a49f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7e5163a9d59806ee74bebed98c90a49f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        CHECK_OBJECT( par_value );
        tmp_args_element_name_2 = par_value;
        frame_7e5163a9d59806ee74bebed98c90a49f->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_set, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e5163a9d59806ee74bebed98c90a49f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e5163a9d59806ee74bebed98c90a49f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7e5163a9d59806ee74bebed98c90a49f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7e5163a9d59806ee74bebed98c90a49f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7e5163a9d59806ee74bebed98c90a49f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7e5163a9d59806ee74bebed98c90a49f,
        type_description_1,
        par_self,
        par_name,
        par_value
    );


    // Release cached frame.
    if ( frame_7e5163a9d59806ee74bebed98c90a49f == cache_frame_7e5163a9d59806ee74bebed98c90a49f )
    {
        Py_DECREF( frame_7e5163a9d59806ee74bebed98c90a49f );
    }
    cache_frame_7e5163a9d59806ee74bebed98c90a49f = NULL;

    assertFrameObject( frame_7e5163a9d59806ee74bebed98c90a49f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_35___setitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_35___setitem__ );
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


static PyObject *impl_requests$cookies$$$function_36___delitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_baea455d444af85054e6feaf0dc4713a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_baea455d444af85054e6feaf0dc4713a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_baea455d444af85054e6feaf0dc4713a, codeobj_baea455d444af85054e6feaf0dc4713a, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_baea455d444af85054e6feaf0dc4713a = cache_frame_baea455d444af85054e6feaf0dc4713a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_baea455d444af85054e6feaf0dc4713a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_baea455d444af85054e6feaf0dc4713a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "remove_cookie_by_name" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 341;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_2 = par_name;
        frame_baea455d444af85054e6feaf0dc4713a->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_baea455d444af85054e6feaf0dc4713a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_baea455d444af85054e6feaf0dc4713a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_baea455d444af85054e6feaf0dc4713a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_baea455d444af85054e6feaf0dc4713a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_baea455d444af85054e6feaf0dc4713a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_baea455d444af85054e6feaf0dc4713a,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_baea455d444af85054e6feaf0dc4713a == cache_frame_baea455d444af85054e6feaf0dc4713a )
    {
        Py_DECREF( frame_baea455d444af85054e6feaf0dc4713a );
    }
    cache_frame_baea455d444af85054e6feaf0dc4713a = NULL;

    assertFrameObject( frame_baea455d444af85054e6feaf0dc4713a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_36___delitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_36___delitem__ );
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


static PyObject *impl_requests$cookies$$$function_37_set_cookie( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cookie = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_01b165a079b9f7424d030f33cc6676a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_01b165a079b9f7424d030f33cc6676a2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_01b165a079b9f7424d030f33cc6676a2, codeobj_01b165a079b9f7424d030f33cc6676a2, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_01b165a079b9f7424d030f33cc6676a2 = cache_frame_01b165a079b9f7424d030f33cc6676a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_01b165a079b9f7424d030f33cc6676a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_01b165a079b9f7424d030f33cc6676a2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_cookie );
        tmp_source_name_2 = par_cookie;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_value );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_attribute_name_1 = const_str_plain_startswith;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooN";
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
        CHECK_OBJECT( par_cookie );
        tmp_source_name_3 = par_cookie;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_value );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        frame_01b165a079b9f7424d030f33cc6676a2->m_frame.f_lineno = 344;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_34_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        CHECK_OBJECT( par_cookie );
        tmp_source_name_4 = par_cookie;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_value );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        frame_01b165a079b9f7424d030f33cc6676a2->m_frame.f_lineno = 344;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_endswith, &PyTuple_GET_ITEM( const_tuple_str_chr_34_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( par_cookie );
            tmp_source_name_5 = par_cookie;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_value );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 345;
                type_description_1 = "ooooN";
                goto frame_exception_exit_1;
            }
            frame_01b165a079b9f7424d030f33cc6676a2->m_frame.f_lineno = 345;
            tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 345;
                type_description_1 = "ooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_cookie );
            tmp_assattr_target_1 = par_cookie;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_value, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 345;
                type_description_1 = "ooooN";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestsCookieJar" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 346;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_source_name_6 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_set_cookie );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_cookie );
        tmp_tuple_element_1 = par_cookie;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_01b165a079b9f7424d030f33cc6676a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_01b165a079b9f7424d030f33cc6676a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_01b165a079b9f7424d030f33cc6676a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_01b165a079b9f7424d030f33cc6676a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_01b165a079b9f7424d030f33cc6676a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_01b165a079b9f7424d030f33cc6676a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_01b165a079b9f7424d030f33cc6676a2,
        type_description_1,
        par_self,
        par_cookie,
        par_args,
        par_kwargs,
        NULL
    );


    // Release cached frame.
    if ( frame_01b165a079b9f7424d030f33cc6676a2 == cache_frame_01b165a079b9f7424d030f33cc6676a2 )
    {
        Py_DECREF( frame_01b165a079b9f7424d030f33cc6676a2 );
    }
    cache_frame_01b165a079b9f7424d030f33cc6676a2 = NULL;

    assertFrameObject( frame_01b165a079b9f7424d030f33cc6676a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_37_set_cookie );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cookie );
    Py_DECREF( par_cookie );
    par_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cookie );
    Py_DECREF( par_cookie );
    par_cookie = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_37_set_cookie );
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


static PyObject *impl_requests$cookies$$$function_38_update( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_32cf436c2aeff5243697d41cdba1e74c;
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
    static struct Nuitka_FrameObject *cache_frame_32cf436c2aeff5243697d41cdba1e74c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_32cf436c2aeff5243697d41cdba1e74c, codeobj_32cf436c2aeff5243697d41cdba1e74c, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_32cf436c2aeff5243697d41cdba1e74c = cache_frame_32cf436c2aeff5243697d41cdba1e74c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_32cf436c2aeff5243697d41cdba1e74c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_32cf436c2aeff5243697d41cdba1e74c ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_other );
        tmp_isinstance_inst_1 = par_other;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cookielib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 350;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CookieJar );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oooN";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_other );
            tmp_iter_arg_1 = par_other;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 351;
                type_description_1 = "oooN";
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
                    type_description_1 = "oooN";
                    exception_lineno = 351;
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
                PyObject *old = var_cookie;
                var_cookie = tmp_assign_source_3;
                Py_INCREF( var_cookie );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_set_cookie );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "oooN";
                goto try_except_handler_2;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_copy );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "copy" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 352;
                type_description_1 = "oooN";
                goto try_except_handler_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( var_cookie );
            tmp_args_element_name_2 = var_cookie;
            frame_32cf436c2aeff5243697d41cdba1e74c->m_frame.f_lineno = 352;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_copy, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 352;
                type_description_1 = "oooN";
                goto try_except_handler_2;
            }
            frame_32cf436c2aeff5243697d41cdba1e74c->m_frame.f_lineno = 352;
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


                exception_lineno = 352;
                type_description_1 = "oooN";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 351;
            type_description_1 = "oooN";
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

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_type_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_object_name_1;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestsCookieJar" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 354;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }

            tmp_type_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_self );
            tmp_object_name_1 = par_self;
            tmp_called_instance_2 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_other );
            tmp_args_element_name_3 = par_other;
            frame_32cf436c2aeff5243697d41cdba1e74c->m_frame.f_lineno = 354;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_update, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_32cf436c2aeff5243697d41cdba1e74c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_32cf436c2aeff5243697d41cdba1e74c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_32cf436c2aeff5243697d41cdba1e74c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_32cf436c2aeff5243697d41cdba1e74c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_32cf436c2aeff5243697d41cdba1e74c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_32cf436c2aeff5243697d41cdba1e74c,
        type_description_1,
        par_self,
        par_other,
        var_cookie,
        NULL
    );


    // Release cached frame.
    if ( frame_32cf436c2aeff5243697d41cdba1e74c == cache_frame_32cf436c2aeff5243697d41cdba1e74c )
    {
        Py_DECREF( frame_32cf436c2aeff5243697d41cdba1e74c );
    }
    cache_frame_32cf436c2aeff5243697d41cdba1e74c = NULL;

    assertFrameObject( frame_32cf436c2aeff5243697d41cdba1e74c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_38_update );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_38_update );
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


static PyObject *impl_requests$cookies$$$function_39__find( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_path = python_pars[ 3 ];
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1;
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
    static struct Nuitka_FrameObject *cache_frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1, codeobj_e86faa1b86d96cb0f8f2fbb4c3a7dca1, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1 = cache_frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1 ) == 2 ); // Frame stack

    // Framed code:
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


            exception_lineno = 368;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 368;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_3;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_name );
        tmp_compexpr_right_1 = par_name;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooooo";
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
            nuitka_bool tmp_condition_result_2;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_domain );
            tmp_compexpr_left_2 = par_domain;
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
            CHECK_OBJECT( var_cookie );
            tmp_source_name_2 = var_cookie;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 370;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_domain );
            tmp_compexpr_right_3 = par_domain;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 370;
                type_description_1 = "ooooo";
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
                nuitka_bool tmp_condition_result_3;
                int tmp_or_left_truth_2;
                nuitka_bool tmp_or_left_value_2;
                nuitka_bool tmp_or_right_value_2;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT( par_path );
                tmp_compexpr_left_4 = par_path;
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
                CHECK_OBJECT( var_cookie );
                tmp_source_name_3 = var_cookie;
                tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 371;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( par_path );
                tmp_compexpr_right_5 = par_path;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 371;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
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
                    PyObject *tmp_source_name_4;
                    CHECK_OBJECT( var_cookie );
                    tmp_source_name_4 = var_cookie;
                    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_value );
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 372;
                        type_description_1 = "ooooo";
                        goto try_except_handler_2;
                    }
                    goto try_return_handler_2;
                }
                branch_no_3:;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_1 = const_str_digest_40890ce8458196445ad3a61ce14829f8;
        CHECK_OBJECT( par_name );
        tmp_tuple_element_1 = par_name;
        tmp_right_name_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_domain );
        tmp_tuple_element_1 = par_domain;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_path );
        tmp_tuple_element_1 = par_path;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
        tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_make_exception_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_KeyError, call_args );
        }

        Py_DECREF( tmp_make_exception_arg_1 );
        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 374;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1,
        type_description_1,
        par_self,
        par_name,
        par_domain,
        par_path,
        var_cookie
    );


    // Release cached frame.
    if ( frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1 == cache_frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1 )
    {
        Py_DECREF( frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1 );
    }
    cache_frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1 = NULL;

    assertFrameObject( frame_e86faa1b86d96cb0f8f2fbb4c3a7dca1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_39__find );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)var_cookie );
    Py_DECREF( var_cookie );
    var_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_39__find );
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


static PyObject *impl_requests$cookies$$$function_40__find_no_duplicates( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_path = python_pars[ 3 ];
    PyObject *var_toReturn = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e81af8f990e0ea0f61a5c1821066ba96;
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
    static struct Nuitka_FrameObject *cache_frame_e81af8f990e0ea0f61a5c1821066ba96 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert( var_toReturn == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_toReturn = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e81af8f990e0ea0f61a5c1821066ba96, codeobj_e81af8f990e0ea0f61a5c1821066ba96, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e81af8f990e0ea0f61a5c1821066ba96 = cache_frame_e81af8f990e0ea0f61a5c1821066ba96;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e81af8f990e0ea0f61a5c1821066ba96 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e81af8f990e0ea0f61a5c1821066ba96 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_self );
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 389;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_name );
        tmp_compexpr_right_1 = par_name;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
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
            nuitka_bool tmp_condition_result_2;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_domain );
            tmp_compexpr_left_2 = par_domain;
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
            CHECK_OBJECT( var_cookie );
            tmp_source_name_2 = var_cookie;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 391;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_domain );
            tmp_compexpr_right_3 = par_domain;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 391;
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
                nuitka_bool tmp_condition_result_3;
                int tmp_or_left_truth_2;
                nuitka_bool tmp_or_left_value_2;
                nuitka_bool tmp_or_right_value_2;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT( par_path );
                tmp_compexpr_left_4 = par_path;
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
                CHECK_OBJECT( var_cookie );
                tmp_source_name_3 = var_cookie;
                tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 392;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( par_path );
                tmp_compexpr_right_5 = par_path;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 392;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
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
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    if ( var_toReturn == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "toReturn" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 393;
                        type_description_1 = "oooooo";
                        goto try_except_handler_2;
                    }

                    tmp_compexpr_left_6 = var_toReturn;
                    tmp_compexpr_right_6 = Py_None;
                    tmp_condition_result_4 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_called_name_1;
                        PyObject *tmp_mvar_value_1;
                        PyObject *tmp_args_element_name_1;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_CookieConflictError );

                        if (unlikely( tmp_mvar_value_1 == NULL ))
                        {
                            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CookieConflictError );
                        }

                        if ( tmp_mvar_value_1 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CookieConflictError" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 394;
                            type_description_1 = "oooooo";
                            goto try_except_handler_2;
                        }

                        tmp_called_name_1 = tmp_mvar_value_1;
                        tmp_left_name_1 = const_str_digest_6f0eeed3729339eac6c86da181041a13;
                        CHECK_OBJECT( par_name );
                        tmp_right_name_1 = par_name;
                        tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                        if ( tmp_args_element_name_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 394;
                            type_description_1 = "oooooo";
                            goto try_except_handler_2;
                        }
                        frame_e81af8f990e0ea0f61a5c1821066ba96->m_frame.f_lineno = 394;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_1 };
                            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                        }

                        Py_DECREF( tmp_args_element_name_1 );
                        if ( tmp_raise_type_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 394;
                            type_description_1 = "oooooo";
                            goto try_except_handler_2;
                        }
                        exception_type = tmp_raise_type_1;
                        exception_lineno = 394;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooo";
                        goto try_except_handler_2;
                    }
                    branch_no_4:;
                }
                {
                    PyObject *tmp_assign_source_5;
                    PyObject *tmp_source_name_4;
                    CHECK_OBJECT( var_cookie );
                    tmp_source_name_4 = var_cookie;
                    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_value );
                    if ( tmp_assign_source_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 395;
                        type_description_1 = "oooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_toReturn;
                        var_toReturn = tmp_assign_source_5;
                        Py_XDECREF( old );
                    }

                }
                branch_no_3:;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
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
        int tmp_truth_name_1;
        if ( var_toReturn == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "toReturn" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( var_toReturn );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        if ( var_toReturn == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "toReturn" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 398;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = var_toReturn;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_5:;
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_2 = const_str_digest_40890ce8458196445ad3a61ce14829f8;
        CHECK_OBJECT( par_name );
        tmp_tuple_element_1 = par_name;
        tmp_right_name_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_domain );
        tmp_tuple_element_1 = par_domain;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_path );
        tmp_tuple_element_1 = par_path;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_2, 2, tmp_tuple_element_1 );
        tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_make_exception_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 399;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_e81af8f990e0ea0f61a5c1821066ba96->m_frame.f_lineno = 399;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_KeyError, call_args );
        }

        Py_DECREF( tmp_make_exception_arg_1 );
        assert( !(tmp_raise_type_2 == NULL) );
        exception_type = tmp_raise_type_2;
        exception_lineno = 399;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e81af8f990e0ea0f61a5c1821066ba96 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e81af8f990e0ea0f61a5c1821066ba96 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e81af8f990e0ea0f61a5c1821066ba96 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e81af8f990e0ea0f61a5c1821066ba96, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e81af8f990e0ea0f61a5c1821066ba96->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e81af8f990e0ea0f61a5c1821066ba96, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e81af8f990e0ea0f61a5c1821066ba96,
        type_description_1,
        par_self,
        par_name,
        par_domain,
        par_path,
        var_toReturn,
        var_cookie
    );


    // Release cached frame.
    if ( frame_e81af8f990e0ea0f61a5c1821066ba96 == cache_frame_e81af8f990e0ea0f61a5c1821066ba96 )
    {
        Py_DECREF( frame_e81af8f990e0ea0f61a5c1821066ba96 );
    }
    cache_frame_e81af8f990e0ea0f61a5c1821066ba96 = NULL;

    assertFrameObject( frame_e81af8f990e0ea0f61a5c1821066ba96 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_40__find_no_duplicates );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_toReturn );
    var_toReturn = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_toReturn );
    var_toReturn = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_40__find_no_duplicates );
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


static PyObject *impl_requests$cookies$$$function_41___getstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_state = NULL;
    struct Nuitka_FrameObject *frame_c600b487f6535dc1935cfeea3cc27163;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c600b487f6535dc1935cfeea3cc27163 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c600b487f6535dc1935cfeea3cc27163, codeobj_c600b487f6535dc1935cfeea3cc27163, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_c600b487f6535dc1935cfeea3cc27163 = cache_frame_c600b487f6535dc1935cfeea3cc27163;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c600b487f6535dc1935cfeea3cc27163 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c600b487f6535dc1935cfeea3cc27163 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c600b487f6535dc1935cfeea3cc27163->m_frame.f_lineno = 403;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_state == NULL );
        var_state = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_state );
        tmp_called_instance_2 = var_state;
        frame_c600b487f6535dc1935cfeea3cc27163->m_frame.f_lineno = 405;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain__cookies_lock_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c600b487f6535dc1935cfeea3cc27163 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c600b487f6535dc1935cfeea3cc27163 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c600b487f6535dc1935cfeea3cc27163, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c600b487f6535dc1935cfeea3cc27163->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c600b487f6535dc1935cfeea3cc27163, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c600b487f6535dc1935cfeea3cc27163,
        type_description_1,
        par_self,
        var_state
    );


    // Release cached frame.
    if ( frame_c600b487f6535dc1935cfeea3cc27163 == cache_frame_c600b487f6535dc1935cfeea3cc27163 )
    {
        Py_DECREF( frame_c600b487f6535dc1935cfeea3cc27163 );
    }
    cache_frame_c600b487f6535dc1935cfeea3cc27163 = NULL;

    assertFrameObject( frame_c600b487f6535dc1935cfeea3cc27163 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_state );
    tmp_return_value = var_state;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_41___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_state );
    Py_DECREF( var_state );
    var_state = NULL;

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

    Py_XDECREF( var_state );
    var_state = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_41___getstate__ );
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


static PyObject *impl_requests$cookies$$$function_42___setstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_state = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_5af861a59022fcda793b5604cc08c53e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5af861a59022fcda793b5604cc08c53e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5af861a59022fcda793b5604cc08c53e, codeobj_5af861a59022fcda793b5604cc08c53e, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_5af861a59022fcda793b5604cc08c53e = cache_frame_5af861a59022fcda793b5604cc08c53e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5af861a59022fcda793b5604cc08c53e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5af861a59022fcda793b5604cc08c53e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_state );
        tmp_args_element_name_1 = par_state;
        frame_5af861a59022fcda793b5604cc08c53e->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        tmp_compexpr_left_1 = const_str_plain__cookies_lock;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_threading );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_threading );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "threading" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 412;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_1;
            frame_5af861a59022fcda793b5604cc08c53e->m_frame.f_lineno = 412;
            tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_RLock );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__cookies_lock, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5af861a59022fcda793b5604cc08c53e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5af861a59022fcda793b5604cc08c53e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5af861a59022fcda793b5604cc08c53e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5af861a59022fcda793b5604cc08c53e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5af861a59022fcda793b5604cc08c53e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5af861a59022fcda793b5604cc08c53e,
        type_description_1,
        par_self,
        par_state
    );


    // Release cached frame.
    if ( frame_5af861a59022fcda793b5604cc08c53e == cache_frame_5af861a59022fcda793b5604cc08c53e )
    {
        Py_DECREF( frame_5af861a59022fcda793b5604cc08c53e );
    }
    cache_frame_5af861a59022fcda793b5604cc08c53e = NULL;

    assertFrameObject( frame_5af861a59022fcda793b5604cc08c53e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_42___setstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

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

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_42___setstate__ );
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


static PyObject *impl_requests$cookies$$$function_43_copy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_new_cj = NULL;
    struct Nuitka_FrameObject *frame_1a7b4d1f03e9e1496a01e8b0c9d25f12;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a7b4d1f03e9e1496a01e8b0c9d25f12 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1a7b4d1f03e9e1496a01e8b0c9d25f12, codeobj_1a7b4d1f03e9e1496a01e8b0c9d25f12, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_1a7b4d1f03e9e1496a01e8b0c9d25f12 = cache_frame_1a7b4d1f03e9e1496a01e8b0c9d25f12;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1a7b4d1f03e9e1496a01e8b0c9d25f12 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1a7b4d1f03e9e1496a01e8b0c9d25f12 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestsCookieJar" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 416;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_1a7b4d1f03e9e1496a01e8b0c9d25f12->m_frame.f_lineno = 416;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_new_cj == NULL );
        var_new_cj = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( var_new_cj );
        tmp_source_name_1 = var_new_cj;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_policy );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_1a7b4d1f03e9e1496a01e8b0c9d25f12->m_frame.f_lineno = 417;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_policy );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1a7b4d1f03e9e1496a01e8b0c9d25f12->m_frame.f_lineno = 417;
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


            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_new_cj );
        tmp_called_instance_2 = var_new_cj;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_2 = par_self;
        frame_1a7b4d1f03e9e1496a01e8b0c9d25f12->m_frame.f_lineno = 418;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_update, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a7b4d1f03e9e1496a01e8b0c9d25f12 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a7b4d1f03e9e1496a01e8b0c9d25f12 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1a7b4d1f03e9e1496a01e8b0c9d25f12, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1a7b4d1f03e9e1496a01e8b0c9d25f12->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1a7b4d1f03e9e1496a01e8b0c9d25f12, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1a7b4d1f03e9e1496a01e8b0c9d25f12,
        type_description_1,
        par_self,
        var_new_cj
    );


    // Release cached frame.
    if ( frame_1a7b4d1f03e9e1496a01e8b0c9d25f12 == cache_frame_1a7b4d1f03e9e1496a01e8b0c9d25f12 )
    {
        Py_DECREF( frame_1a7b4d1f03e9e1496a01e8b0c9d25f12 );
    }
    cache_frame_1a7b4d1f03e9e1496a01e8b0c9d25f12 = NULL;

    assertFrameObject( frame_1a7b4d1f03e9e1496a01e8b0c9d25f12 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_new_cj );
    tmp_return_value = var_new_cj;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_43_copy );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_new_cj );
    Py_DECREF( var_new_cj );
    var_new_cj = NULL;

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

    Py_XDECREF( var_new_cj );
    var_new_cj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_43_copy );
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


static PyObject *impl_requests$cookies$$$function_44_get_policy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c84f3ab52554706647aafdab73af7804;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c84f3ab52554706647aafdab73af7804 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c84f3ab52554706647aafdab73af7804, codeobj_c84f3ab52554706647aafdab73af7804, module_requests$cookies, sizeof(void *) );
    frame_c84f3ab52554706647aafdab73af7804 = cache_frame_c84f3ab52554706647aafdab73af7804;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c84f3ab52554706647aafdab73af7804 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c84f3ab52554706647aafdab73af7804 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__policy );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c84f3ab52554706647aafdab73af7804 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c84f3ab52554706647aafdab73af7804 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c84f3ab52554706647aafdab73af7804 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c84f3ab52554706647aafdab73af7804, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c84f3ab52554706647aafdab73af7804->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c84f3ab52554706647aafdab73af7804, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c84f3ab52554706647aafdab73af7804,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c84f3ab52554706647aafdab73af7804 == cache_frame_c84f3ab52554706647aafdab73af7804 )
    {
        Py_DECREF( frame_c84f3ab52554706647aafdab73af7804 );
    }
    cache_frame_c84f3ab52554706647aafdab73af7804 = NULL;

    assertFrameObject( frame_c84f3ab52554706647aafdab73af7804 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_44_get_policy );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_44_get_policy );
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


static PyObject *impl_requests$cookies$$$function_45__copy_cookie_jar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jar = python_pars[ 0 ];
    PyObject *var_new_jar = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_20abc09aff0c202073420ed9960b3ed5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_20abc09aff0c202073420ed9960b3ed5 = NULL;
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
        CHECK_OBJECT( par_jar );
        tmp_compexpr_left_1 = par_jar;
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
        goto try_return_handler_1;
        branch_no_1:;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_20abc09aff0c202073420ed9960b3ed5, codeobj_20abc09aff0c202073420ed9960b3ed5, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_20abc09aff0c202073420ed9960b3ed5 = cache_frame_20abc09aff0c202073420ed9960b3ed5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_20abc09aff0c202073420ed9960b3ed5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_20abc09aff0c202073420ed9960b3ed5 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( par_jar );
        tmp_source_name_1 = par_jar;
        tmp_attribute_name_1 = const_str_plain_copy;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_jar );
            tmp_called_instance_1 = par_jar;
            frame_20abc09aff0c202073420ed9960b3ed5->m_frame.f_lineno = 432;
            tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 432;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_copy );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "copy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 434;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_jar );
        tmp_args_element_name_1 = par_jar;
        frame_20abc09aff0c202073420ed9960b3ed5->m_frame.f_lineno = 434;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_copy, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_new_jar == NULL );
        var_new_jar = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_new_jar );
        tmp_called_instance_3 = var_new_jar;
        frame_20abc09aff0c202073420ed9960b3ed5->m_frame.f_lineno = 435;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_clear );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_jar );
        tmp_iter_arg_1 = par_jar;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
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
                exception_lineno = 436;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_new_jar );
        tmp_source_name_2 = var_new_jar;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_set_cookie );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_copy );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "copy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 437;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = tmp_mvar_value_2;
        CHECK_OBJECT( var_cookie );
        tmp_args_element_name_3 = var_cookie;
        frame_20abc09aff0c202073420ed9960b3ed5->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_copy, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 437;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_20abc09aff0c202073420ed9960b3ed5->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20abc09aff0c202073420ed9960b3ed5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_20abc09aff0c202073420ed9960b3ed5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20abc09aff0c202073420ed9960b3ed5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_20abc09aff0c202073420ed9960b3ed5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_20abc09aff0c202073420ed9960b3ed5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_20abc09aff0c202073420ed9960b3ed5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_20abc09aff0c202073420ed9960b3ed5,
        type_description_1,
        par_jar,
        var_new_jar,
        var_cookie
    );


    // Release cached frame.
    if ( frame_20abc09aff0c202073420ed9960b3ed5 == cache_frame_20abc09aff0c202073420ed9960b3ed5 )
    {
        Py_DECREF( frame_20abc09aff0c202073420ed9960b3ed5 );
    }
    cache_frame_20abc09aff0c202073420ed9960b3ed5 = NULL;

    assertFrameObject( frame_20abc09aff0c202073420ed9960b3ed5 );

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

    CHECK_OBJECT( var_new_jar );
    tmp_return_value = var_new_jar;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_45__copy_cookie_jar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_jar );
    Py_DECREF( par_jar );
    par_jar = NULL;

    Py_XDECREF( var_new_jar );
    var_new_jar = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)par_jar );
    Py_DECREF( par_jar );
    par_jar = NULL;

    Py_XDECREF( var_new_jar );
    var_new_jar = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_45__copy_cookie_jar );
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


static PyObject *impl_requests$cookies$$$function_46_create_cookie( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_result = NULL;
    PyObject *var_badargs = NULL;
    int tmp_res;
    struct Nuitka_FrameObject *frame_177a797ffcb43364acc15320339e1b13;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_177a797ffcb43364acc15320339e1b13 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_dict_key_1 = const_str_plain_version;
        tmp_dict_value_1 = const_int_0;
        tmp_assign_source_1 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_name;
        CHECK_OBJECT( par_name );
        tmp_dict_value_2 = par_name;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_value;
        CHECK_OBJECT( par_value );
        tmp_dict_value_3 = par_value;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_port;
        tmp_dict_value_4 = Py_None;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_domain;
        tmp_dict_value_5 = const_str_empty;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_path;
        tmp_dict_value_6 = const_str_chr_47;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_secure;
        tmp_dict_value_7 = Py_False;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_expires;
        tmp_dict_value_8 = Py_None;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_discard;
        tmp_dict_value_9 = Py_True;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_comment;
        tmp_dict_value_10 = Py_None;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_comment_url;
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_12 = const_str_plain_rest;
        tmp_dict_value_12 = PyDict_Copy( const_dict_a5e68083723d45b7dd5e500852a4245b );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_12, tmp_dict_value_12 );
        Py_DECREF( tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_13 = const_str_plain_rfc2109;
        tmp_dict_value_13 = Py_False;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_13, tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_177a797ffcb43364acc15320339e1b13, codeobj_177a797ffcb43364acc15320339e1b13, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_177a797ffcb43364acc15320339e1b13 = cache_frame_177a797ffcb43364acc15320339e1b13;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_177a797ffcb43364acc15320339e1b13 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_177a797ffcb43364acc15320339e1b13 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_set_arg_2;
        CHECK_OBJECT( par_kwargs );
        tmp_set_arg_1 = par_kwargs;
        tmp_left_name_1 = PySet_New( tmp_set_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_set_arg_2 = var_result;
        tmp_right_name_1 = PySet_New( tmp_set_arg_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 463;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        assert( !(tmp_assign_source_2 == NULL) );
        assert( var_badargs == NULL );
        var_badargs = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_badargs );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_badargs );
        assert( !(tmp_truth_name_1 == -1) );
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_list_arg_1;
            tmp_left_name_2 = const_str_digest_c99227a29db521837b47fa67726c6a3c;
            CHECK_OBJECT( var_badargs );
            tmp_list_arg_1 = var_badargs;
            tmp_right_name_2 = PySequence_List( tmp_list_arg_1 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 466;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 466;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }
            frame_177a797ffcb43364acc15320339e1b13->m_frame.f_lineno = 466;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 466;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_result );
        tmp_called_instance_1 = var_result;
        CHECK_OBJECT( par_kwargs );
        tmp_args_element_name_1 = par_kwargs;
        frame_177a797ffcb43364acc15320339e1b13->m_frame.f_lineno = 468;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 468;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_key_name_1;
        CHECK_OBJECT( var_result );
        tmp_dict_name_1 = var_result;
        tmp_key_name_1 = const_str_plain_port;
        tmp_value_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_value_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 469;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        Py_DECREF( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 469;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_dictset_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        CHECK_OBJECT( var_result );
        tmp_dictset_dict = var_result;
        tmp_dictset_key = const_str_plain_port_specified;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
    }
    {
        PyObject *tmp_value_name_2;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        CHECK_OBJECT( var_result );
        tmp_dict_name_2 = var_result;
        tmp_key_name_2 = const_str_plain_domain;
        tmp_value_name_2 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_value_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 470;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_2 );
        Py_DECREF( tmp_value_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 470;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_dictset_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        CHECK_OBJECT( var_result );
        tmp_dictset_dict = var_result;
        tmp_dictset_key = const_str_plain_domain_specified;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_dict_name_3;
        PyObject *tmp_key_name_3;
        CHECK_OBJECT( var_result );
        tmp_dict_name_3 = var_result;
        tmp_key_name_3 = const_str_plain_domain;
        tmp_called_instance_2 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 471;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        frame_177a797ffcb43364acc15320339e1b13->m_frame.f_lineno = 471;
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 471;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_dictset_dict = var_result;
        tmp_dictset_key = const_str_plain_domain_initial_dot;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
    }
    {
        PyObject *tmp_value_name_3;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_key_name_4;
        CHECK_OBJECT( var_result );
        tmp_dict_name_4 = var_result;
        tmp_key_name_4 = const_str_plain_path;
        tmp_value_name_3 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_value_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_3 );
        Py_DECREF( tmp_value_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_dictset_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        CHECK_OBJECT( var_result );
        tmp_dictset_dict = var_result;
        tmp_dictset_key = const_str_plain_path_specified;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cookielib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 474;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Cookie );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 474;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_dircall_arg2_1 = var_result;
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_3_complex_call_helper_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 474;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_177a797ffcb43364acc15320339e1b13 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_177a797ffcb43364acc15320339e1b13 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_177a797ffcb43364acc15320339e1b13 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_177a797ffcb43364acc15320339e1b13, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_177a797ffcb43364acc15320339e1b13->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_177a797ffcb43364acc15320339e1b13, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_177a797ffcb43364acc15320339e1b13,
        type_description_1,
        par_name,
        par_value,
        par_kwargs,
        var_result,
        var_badargs,
        NULL
    );


    // Release cached frame.
    if ( frame_177a797ffcb43364acc15320339e1b13 == cache_frame_177a797ffcb43364acc15320339e1b13 )
    {
        Py_DECREF( frame_177a797ffcb43364acc15320339e1b13 );
    }
    cache_frame_177a797ffcb43364acc15320339e1b13 = NULL;

    assertFrameObject( frame_177a797ffcb43364acc15320339e1b13 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_46_create_cookie );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    CHECK_OBJECT( (PyObject *)var_badargs );
    Py_DECREF( var_badargs );
    var_badargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_badargs );
    var_badargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_46_create_cookie );
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


static PyObject *impl_requests$cookies$$$function_47_morsel_to_cookie( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_morsel = python_pars[ 0 ];
    PyObject *var_expires = NULL;
    struct Nuitka_FrameObject *frame_e6c2c05146c94bd0d18a9cf99a83f10e;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e6c2c05146c94bd0d18a9cf99a83f10e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert( var_expires == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_expires = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e6c2c05146c94bd0d18a9cf99a83f10e, codeobj_e6c2c05146c94bd0d18a9cf99a83f10e, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e6c2c05146c94bd0d18a9cf99a83f10e = cache_frame_e6c2c05146c94bd0d18a9cf99a83f10e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e6c2c05146c94bd0d18a9cf99a83f10e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e6c2c05146c94bd0d18a9cf99a83f10e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_1 = par_morsel;
        tmp_subscript_name_1 = const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_subscript_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 481;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_subscript_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_result_1 );

            exception_lineno = 481;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_subscript_result_1 );
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_int_arg_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_time );

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

                exception_lineno = 483;
                type_description_1 = "ooN";
                goto try_except_handler_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            frame_e6c2c05146c94bd0d18a9cf99a83f10e->m_frame.f_lineno = 483;
            tmp_left_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_time );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_1 = "ooN";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_morsel );
            tmp_subscribed_name_2 = par_morsel;
            tmp_subscript_name_2 = const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
            tmp_int_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_int_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 483;
                type_description_1 = "ooN";
                goto try_except_handler_2;
            }
            tmp_right_name_1 = PyNumber_Int( tmp_int_arg_2 );
            Py_DECREF( tmp_int_arg_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 483;
                type_description_1 = "ooN";
                goto try_except_handler_2;
            }
            tmp_int_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_1 = "ooN";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_1 = "ooN";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_expires;
                assert( old != NULL );
                var_expires = tmp_assign_source_2;
                Py_DECREF( old );
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
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_e6c2c05146c94bd0d18a9cf99a83f10e, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_e6c2c05146c94bd0d18a9cf99a83f10e, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_1 = PyExc_ValueError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 484;
                type_description_1 = "ooN";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                tmp_left_name_2 = const_str_digest_384c88e858c00a2981bdb05550c007ba;
                CHECK_OBJECT( par_morsel );
                tmp_subscribed_name_3 = par_morsel;
                tmp_subscript_name_3 = const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
                tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 485;
                    type_description_1 = "ooN";
                    goto try_except_handler_3;
                }
                tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_make_exception_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 485;
                    type_description_1 = "ooN";
                    goto try_except_handler_3;
                }
                frame_e6c2c05146c94bd0d18a9cf99a83f10e->m_frame.f_lineno = 485;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_1 );
                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 485;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooN";
                goto try_except_handler_3;
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 482;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_e6c2c05146c94bd0d18a9cf99a83f10e->m_frame) frame_e6c2c05146c94bd0d18a9cf99a83f10e->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooN";
            goto try_except_handler_3;
            branch_end_2:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_47_morsel_to_cookie );
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
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_subscript_result_2;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_morsel );
            tmp_subscribed_name_4 = par_morsel;
            tmp_subscript_name_4 = const_str_plain_expires;
            tmp_subscript_result_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_subscript_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 486;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_subscript_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscript_result_2 );

                exception_lineno = 486;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_subscript_result_2 );
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_calendar );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_calendar );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "calendar" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 488;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_1 = tmp_mvar_value_2;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_timegm );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 488;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_time );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
                }

                if ( tmp_mvar_value_3 == NULL )
                {
                    Py_DECREF( tmp_called_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 489;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_2 = tmp_mvar_value_3;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_strptime );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 489;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_morsel );
                tmp_subscribed_name_5 = par_morsel;
                tmp_subscript_name_5 = const_str_plain_expires;
                tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 489;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_3 = const_str_digest_8d200ac749deb0ed034c3f2346adcc3d;
                frame_e6c2c05146c94bd0d18a9cf99a83f10e->m_frame.f_lineno = 489;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 489;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                frame_e6c2c05146c94bd0d18a9cf99a83f10e->m_frame.f_lineno = 488;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 488;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_expires;
                    assert( old != NULL );
                    var_expires = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_no_3:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_value_name_1;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_value_name_2;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_create_cookie );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_cookie );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "create_cookie" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 491;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        tmp_dict_key_1 = const_str_plain_comment;
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_6 = par_morsel;
        tmp_subscript_name_6 = const_str_plain_comment;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 492;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_comment_url;
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_7 = par_morsel;
        tmp_subscript_name_7 = const_str_plain_comment;
        tmp_value_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_value_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 493;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        Py_DECREF( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 493;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_discard;
        tmp_dict_value_3 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_domain;
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_8 = par_morsel;
        tmp_subscript_name_8 = const_str_plain_domain;
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 495;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_expires;
        if ( var_expires == NULL )
        {
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expires" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 496;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_5 = var_expires;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_name;
        CHECK_OBJECT( par_morsel );
        tmp_source_name_3 = par_morsel;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_key );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 497;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_path;
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_9 = par_morsel;
        tmp_subscript_name_9 = const_str_plain_path;
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 498;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_port;
        tmp_dict_value_8 = Py_None;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_rest;
        tmp_dict_key_10 = const_str_plain_HttpOnly;
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_10 = par_morsel;
        tmp_subscript_name_10 = const_str_plain_httponly;
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        if ( tmp_dict_value_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 500;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_9 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10 );
        Py_DECREF( tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
        Py_DECREF( tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_rfc2109;
        tmp_dict_value_11 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_12 = const_str_plain_secure;
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_11 = par_morsel;
        tmp_subscript_name_11 = const_str_plain_secure;
        tmp_value_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
        if ( tmp_value_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 502;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_2 );
        Py_DECREF( tmp_value_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 502;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_12 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_12, tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_13 = const_str_plain_value;
        CHECK_OBJECT( par_morsel );
        tmp_source_name_4 = par_morsel;
        tmp_dict_value_13 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_value );
        if ( tmp_dict_value_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 503;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_13, tmp_dict_value_13 );
        Py_DECREF( tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_14 = const_str_plain_version;
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_12 = par_morsel;
        tmp_subscript_name_12 = const_str_plain_version;
        tmp_or_left_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 504;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 504;
            type_description_1 = "ooN";
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
        tmp_or_right_value_1 = const_int_0;
        Py_INCREF( tmp_or_right_value_1 );
        tmp_dict_value_14 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_dict_value_14 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_14, tmp_dict_value_14 );
        Py_DECREF( tmp_dict_value_14 );
        assert( !(tmp_res != 0) );
        frame_e6c2c05146c94bd0d18a9cf99a83f10e->m_frame.f_lineno = 491;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 491;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6c2c05146c94bd0d18a9cf99a83f10e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6c2c05146c94bd0d18a9cf99a83f10e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6c2c05146c94bd0d18a9cf99a83f10e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e6c2c05146c94bd0d18a9cf99a83f10e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e6c2c05146c94bd0d18a9cf99a83f10e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e6c2c05146c94bd0d18a9cf99a83f10e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e6c2c05146c94bd0d18a9cf99a83f10e,
        type_description_1,
        par_morsel,
        var_expires,
        NULL
    );


    // Release cached frame.
    if ( frame_e6c2c05146c94bd0d18a9cf99a83f10e == cache_frame_e6c2c05146c94bd0d18a9cf99a83f10e )
    {
        Py_DECREF( frame_e6c2c05146c94bd0d18a9cf99a83f10e );
    }
    cache_frame_e6c2c05146c94bd0d18a9cf99a83f10e = NULL;

    assertFrameObject( frame_e6c2c05146c94bd0d18a9cf99a83f10e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_47_morsel_to_cookie );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_morsel );
    Py_DECREF( par_morsel );
    par_morsel = NULL;

    Py_XDECREF( var_expires );
    var_expires = NULL;

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

    CHECK_OBJECT( (PyObject *)par_morsel );
    Py_DECREF( par_morsel );
    par_morsel = NULL;

    Py_XDECREF( var_expires );
    var_expires = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_47_morsel_to_cookie );
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


static PyObject *impl_requests$cookies$$$function_48_cookiejar_from_dict( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cookie_dict = python_pars[ 0 ];
    PyObject *par_cookiejar = python_pars[ 1 ];
    PyObject *par_overwrite = python_pars[ 2 ];
    PyObject *var_names_from_jar = NULL;
    PyObject *var_name = NULL;
    PyObject *outline_0_var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_b1b3e09f171f91f304417b3ba4d416fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_1c504cd6c717b8bd32c24a8b0efa5f56_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1c504cd6c717b8bd32c24a8b0efa5f56_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_b1b3e09f171f91f304417b3ba4d416fc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b1b3e09f171f91f304417b3ba4d416fc, codeobj_b1b3e09f171f91f304417b3ba4d416fc, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b1b3e09f171f91f304417b3ba4d416fc = cache_frame_b1b3e09f171f91f304417b3ba4d416fc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b1b3e09f171f91f304417b3ba4d416fc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b1b3e09f171f91f304417b3ba4d416fc ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_cookiejar );
        tmp_compexpr_left_1 = par_cookiejar;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestsCookieJar" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 518;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_b1b3e09f171f91f304417b3ba4d416fc->m_frame.f_lineno = 518;
            tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 518;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_cookiejar;
                assert( old != NULL );
                par_cookiejar = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_cookie_dict );
        tmp_compexpr_left_2 = par_cookie_dict;
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
            PyObject *tmp_assign_source_2;
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT( par_cookiejar );
                tmp_iter_arg_1 = par_cookiejar;
                tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 521;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_4;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_1c504cd6c717b8bd32c24a8b0efa5f56_2, codeobj_1c504cd6c717b8bd32c24a8b0efa5f56, module_requests$cookies, sizeof(void *) );
            frame_1c504cd6c717b8bd32c24a8b0efa5f56_2 = cache_frame_1c504cd6c717b8bd32c24a8b0efa5f56_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_1c504cd6c717b8bd32c24a8b0efa5f56_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_1c504cd6c717b8bd32c24a8b0efa5f56_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
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
                        type_description_2 = "o";
                        exception_lineno = 521;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_cookie;
                    outline_0_var_cookie = tmp_assign_source_6;
                    Py_INCREF( outline_0_var_cookie );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_source_name_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( outline_0_var_cookie );
                tmp_source_name_1 = outline_0_var_cookie;
                tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 521;
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


                    exception_lineno = 521;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 521;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_assign_source_2 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_assign_source_2 );
            goto try_return_handler_3;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_48_cookiejar_from_dict );
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

            goto frame_return_exit_1;
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
            RESTORE_FRAME_EXCEPTION( frame_1c504cd6c717b8bd32c24a8b0efa5f56_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_1:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_1c504cd6c717b8bd32c24a8b0efa5f56_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_2;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_1c504cd6c717b8bd32c24a8b0efa5f56_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_1c504cd6c717b8bd32c24a8b0efa5f56_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_1c504cd6c717b8bd32c24a8b0efa5f56_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_1c504cd6c717b8bd32c24a8b0efa5f56_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_1c504cd6c717b8bd32c24a8b0efa5f56_2,
                type_description_2,
                outline_0_var_cookie
            );


            // Release cached frame.
            if ( frame_1c504cd6c717b8bd32c24a8b0efa5f56_2 == cache_frame_1c504cd6c717b8bd32c24a8b0efa5f56_2 )
            {
                Py_DECREF( frame_1c504cd6c717b8bd32c24a8b0efa5f56_2 );
            }
            cache_frame_1c504cd6c717b8bd32c24a8b0efa5f56_2 = NULL;

            assertFrameObject( frame_1c504cd6c717b8bd32c24a8b0efa5f56_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_48_cookiejar_from_dict );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            Py_XDECREF( outline_0_var_cookie );
            outline_0_var_cookie = NULL;

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

            Py_XDECREF( outline_0_var_cookie );
            outline_0_var_cookie = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_48_cookiejar_from_dict );
            return NULL;
            outline_exception_1:;
            exception_lineno = 521;
            goto frame_exception_exit_1;
            outline_result_1:;
            assert( var_names_from_jar == NULL );
            var_names_from_jar = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_cookie_dict );
            tmp_iter_arg_2 = par_cookie_dict;
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 522;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_7;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_2 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooo";
                    exception_lineno = 522;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_9 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_name;
                var_name = tmp_assign_source_9;
                Py_INCREF( var_name );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            int tmp_truth_name_1;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_overwrite );
            tmp_truth_name_1 = CHECK_IF_TRUE( par_overwrite );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 523;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
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
            CHECK_OBJECT( var_name );
            tmp_compexpr_left_3 = var_name;
            CHECK_OBJECT( var_names_from_jar );
            tmp_compexpr_right_3 = var_names_from_jar;
            tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 523;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            tmp_or_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_2;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                CHECK_OBJECT( par_cookiejar );
                tmp_source_name_2 = par_cookiejar;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_set_cookie );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 524;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_create_cookie );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_cookie );
                }

                if ( tmp_mvar_value_2 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "create_cookie" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 524;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_3 = tmp_mvar_value_2;
                CHECK_OBJECT( var_name );
                tmp_args_element_name_2 = var_name;
                CHECK_OBJECT( par_cookie_dict );
                tmp_subscribed_name_1 = par_cookie_dict;
                CHECK_OBJECT( var_name );
                tmp_subscript_name_1 = var_name;
                tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                if ( tmp_args_element_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 524;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }
                frame_b1b3e09f171f91f304417b3ba4d416fc->m_frame.f_lineno = 524;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_3 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 524;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }
                frame_b1b3e09f171f91f304417b3ba4d416fc->m_frame.f_lineno = 524;
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


                    exception_lineno = 524;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_no_3:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 522;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
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
        try_end_1:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1b3e09f171f91f304417b3ba4d416fc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1b3e09f171f91f304417b3ba4d416fc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b1b3e09f171f91f304417b3ba4d416fc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b1b3e09f171f91f304417b3ba4d416fc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b1b3e09f171f91f304417b3ba4d416fc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b1b3e09f171f91f304417b3ba4d416fc,
        type_description_1,
        par_cookie_dict,
        par_cookiejar,
        par_overwrite,
        var_names_from_jar,
        var_name
    );


    // Release cached frame.
    if ( frame_b1b3e09f171f91f304417b3ba4d416fc == cache_frame_b1b3e09f171f91f304417b3ba4d416fc )
    {
        Py_DECREF( frame_b1b3e09f171f91f304417b3ba4d416fc );
    }
    cache_frame_b1b3e09f171f91f304417b3ba4d416fc = NULL;

    assertFrameObject( frame_b1b3e09f171f91f304417b3ba4d416fc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    CHECK_OBJECT( par_cookiejar );
    tmp_return_value = par_cookiejar;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_48_cookiejar_from_dict );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cookie_dict );
    Py_DECREF( par_cookie_dict );
    par_cookie_dict = NULL;

    CHECK_OBJECT( (PyObject *)par_cookiejar );
    Py_DECREF( par_cookiejar );
    par_cookiejar = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite );
    Py_DECREF( par_overwrite );
    par_overwrite = NULL;

    Py_XDECREF( var_names_from_jar );
    var_names_from_jar = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cookie_dict );
    Py_DECREF( par_cookie_dict );
    par_cookie_dict = NULL;

    Py_XDECREF( par_cookiejar );
    par_cookiejar = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite );
    Py_DECREF( par_overwrite );
    par_overwrite = NULL;

    Py_XDECREF( var_names_from_jar );
    var_names_from_jar = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_48_cookiejar_from_dict );
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


static PyObject *impl_requests$cookies$$$function_49_merge_cookies( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cookiejar = python_pars[ 0 ];
    PyObject *par_cookies = python_pars[ 1 ];
    PyObject *var_cookie_in_jar = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_f6e4e4eb800589518ce6600fb2faf6ec;
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
    static struct Nuitka_FrameObject *cache_frame_f6e4e4eb800589518ce6600fb2faf6ec = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f6e4e4eb800589518ce6600fb2faf6ec, codeobj_f6e4e4eb800589518ce6600fb2faf6ec, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f6e4e4eb800589518ce6600fb2faf6ec = cache_frame_f6e4e4eb800589518ce6600fb2faf6ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f6e4e4eb800589518ce6600fb2faf6ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f6e4e4eb800589518ce6600fb2faf6ec ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_cookiejar );
        tmp_isinstance_inst_1 = par_cookiejar;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cookielib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 536;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CookieJar );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 536;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 536;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 536;
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
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_80fe00ea301d02293abaf9dea17cddac;
            frame_f6e4e4eb800589518ce6600fb2faf6ec->m_frame.f_lineno = 537;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 537;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT( par_cookies );
        tmp_isinstance_inst_2 = par_cookies;
        tmp_isinstance_cls_2 = (PyObject *)&PyDict_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 539;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cookiejar_from_dict" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 540;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_cookies );
            tmp_tuple_element_1 = par_cookies;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_cookiejar;
            CHECK_OBJECT( par_cookiejar );
            tmp_dict_value_1 = par_cookiejar;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_overwrite;
            tmp_dict_value_2 = Py_False;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_f6e4e4eb800589518ce6600fb2faf6ec->m_frame.f_lineno = 540;
            tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 540;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_cookiejar;
                assert( old != NULL );
                par_cookiejar = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( par_cookies );
            tmp_isinstance_inst_3 = par_cookies;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cookielib" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 542;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CookieJar );
            if ( tmp_isinstance_cls_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 542;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
            Py_DECREF( tmp_isinstance_cls_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 542;
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
            // Tried code:
            {
                PyObject *tmp_called_instance_1;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                CHECK_OBJECT( par_cookiejar );
                tmp_called_instance_1 = par_cookiejar;
                CHECK_OBJECT( par_cookies );
                tmp_args_element_name_1 = par_cookies;
                frame_f6e4e4eb800589518ce6600fb2faf6ec->m_frame.f_lineno = 544;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 544;
                    type_description_1 = "ooo";
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
                exception_keeper_tb_1 = MAKE_TRACEBACK( frame_f6e4e4eb800589518ce6600fb2faf6ec, exception_keeper_lineno_1 );
            }
            else if ( exception_keeper_lineno_1 != 0 )
            {
                exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_f6e4e4eb800589518ce6600fb2faf6ec, exception_keeper_lineno_1 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
            PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            // Tried code:
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_1;
                PyObject *tmp_compexpr_right_1;
                tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_1 = PyExc_AttributeError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 545;
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
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_iter_arg_1;
                    CHECK_OBJECT( par_cookies );
                    tmp_iter_arg_1 = par_cookies;
                    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
                    if ( tmp_assign_source_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 546;
                        type_description_1 = "ooo";
                        goto try_except_handler_3;
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
                            exception_lineno = 546;
                            goto try_except_handler_4;
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
                        PyObject *old = var_cookie_in_jar;
                        var_cookie_in_jar = tmp_assign_source_4;
                        Py_INCREF( var_cookie_in_jar );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_call_result_2;
                    PyObject *tmp_args_element_name_2;
                    CHECK_OBJECT( par_cookiejar );
                    tmp_called_instance_2 = par_cookiejar;
                    CHECK_OBJECT( var_cookie_in_jar );
                    tmp_args_element_name_2 = var_cookie_in_jar;
                    frame_f6e4e4eb800589518ce6600fb2faf6ec->m_frame.f_lineno = 547;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2 };
                        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_set_cookie, call_args );
                    }

                    if ( tmp_call_result_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 547;
                        type_description_1 = "ooo";
                        goto try_except_handler_4;
                    }
                    Py_DECREF( tmp_call_result_2 );
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 546;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                goto loop_start_1;
                loop_end_1:;
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

                Py_XDECREF( tmp_for_loop_1__iter_value );
                tmp_for_loop_1__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
                Py_DECREF( tmp_for_loop_1__for_iterator );
                tmp_for_loop_1__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_2;
                exception_value = exception_keeper_value_2;
                exception_tb = exception_keeper_tb_2;
                exception_lineno = exception_keeper_lineno_2;

                goto try_except_handler_3;
                // End of try:
                try_end_2:;
                Py_XDECREF( tmp_for_loop_1__iter_value );
                tmp_for_loop_1__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
                Py_DECREF( tmp_for_loop_1__for_iterator );
                tmp_for_loop_1__for_iterator = NULL;

                goto branch_end_4;
                branch_no_4:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 543;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_f6e4e4eb800589518ce6600fb2faf6ec->m_frame) frame_f6e4e4eb800589518ce6600fb2faf6ec->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooo";
                goto try_except_handler_3;
                branch_end_4:;
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

            // Restore previous exception.
            SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_1;
            // End of try:
            try_end_3:;
            // Restore previous exception.
            SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
            goto try_end_1;
            // exception handler codes exits in all cases
            NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_49_merge_cookies );
            return NULL;
            // End of try:
            try_end_1:;
            branch_no_3:;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6e4e4eb800589518ce6600fb2faf6ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6e4e4eb800589518ce6600fb2faf6ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f6e4e4eb800589518ce6600fb2faf6ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f6e4e4eb800589518ce6600fb2faf6ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f6e4e4eb800589518ce6600fb2faf6ec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f6e4e4eb800589518ce6600fb2faf6ec,
        type_description_1,
        par_cookiejar,
        par_cookies,
        var_cookie_in_jar
    );


    // Release cached frame.
    if ( frame_f6e4e4eb800589518ce6600fb2faf6ec == cache_frame_f6e4e4eb800589518ce6600fb2faf6ec )
    {
        Py_DECREF( frame_f6e4e4eb800589518ce6600fb2faf6ec );
    }
    cache_frame_f6e4e4eb800589518ce6600fb2faf6ec = NULL;

    assertFrameObject( frame_f6e4e4eb800589518ce6600fb2faf6ec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_cookiejar );
    tmp_return_value = par_cookiejar;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_49_merge_cookies );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cookiejar );
    Py_DECREF( par_cookiejar );
    par_cookiejar = NULL;

    CHECK_OBJECT( (PyObject *)par_cookies );
    Py_DECREF( par_cookies );
    par_cookies = NULL;

    Py_XDECREF( var_cookie_in_jar );
    var_cookie_in_jar = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cookiejar );
    Py_DECREF( par_cookiejar );
    par_cookiejar = NULL;

    CHECK_OBJECT( (PyObject *)par_cookies );
    Py_DECREF( par_cookies );
    par_cookies = NULL;

    Py_XDECREF( var_cookie_in_jar );
    var_cookie_in_jar = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_49_merge_cookies );
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



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_10_add_unredirected_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_10_add_unredirected_header,
        const_str_plain_add_unredirected_header,
#if PYTHON_VERSION >= 300
        const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69,
#endif
        codeobj_93c7cc16b82ac5bb3317855d1fda6e78,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_11_get_new_headers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_11_get_new_headers,
        const_str_plain_get_new_headers,
#if PYTHON_VERSION >= 300
        const_str_digest_44db063164c966fa5386728c86c1a06f,
#endif
        codeobj_64cf8d6a1c93cbfac24ff7088c50c69d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_12_unverifiable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_12_unverifiable,
        const_str_plain_unverifiable,
#if PYTHON_VERSION >= 300
        const_str_digest_edb2a15c85f24da38984c0b5356f21c0,
#endif
        codeobj_f584b2a832a03be500d30acc02a36621,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_13_origin_req_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_13_origin_req_host,
        const_str_plain_origin_req_host,
#if PYTHON_VERSION >= 300
        const_str_digest_1ffe275872914b64c240c8cb178005ea,
#endif
        codeobj_4e19cc60670ecd373a3b2833f1a46dc4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_14_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_14_host,
        const_str_plain_host,
#if PYTHON_VERSION >= 300
        const_str_digest_59f19da226d4479328efe53726a2e397,
#endif
        codeobj_fa6216cd1b197255a92de3beac91c26d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_15___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_ea904bab707be16235fbd17c19767f9f,
#endif
        codeobj_f31a7fdbd3eb3b73ec922fe9a794bd2b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_2074f4b4dde671f06897bcc11d0d41da,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_16_info(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_16_info,
        const_str_plain_info,
#if PYTHON_VERSION >= 300
        const_str_digest_0d84ffc2aed365c467af25f17254de9e,
#endif
        codeobj_67a5f110d636fbc0ecc446bca992daf8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_17_getheaders(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_17_getheaders,
        const_str_plain_getheaders,
#if PYTHON_VERSION >= 300
        const_str_digest_2041229f0580a80f49d71dc1aca7539f,
#endif
        codeobj_2c65bdd7453852b29c7399ad0fec796b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_18_extract_cookies_to_jar(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_18_extract_cookies_to_jar,
        const_str_plain_extract_cookies_to_jar,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f1e9f7f60165068fd1baa19cb1b74e6a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_d4e8bce3e52a50e29fc0c09bd0f73e7f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_19_get_cookie_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_19_get_cookie_header,
        const_str_plain_get_cookie_header,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cb5e4c1426051bcb230ec7a6d7921785,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_95cacfdffdeafa2154ddb2520f2fb58f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_445933e6a124a5d41f1f32e33f377bc9,
#endif
        codeobj_548f6a0cfc7f2a70934a1734b1077526,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_20_remove_cookie_by_name( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_20_remove_cookie_by_name,
        const_str_plain_remove_cookie_by_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_64696ca0867510980988f706fce014ec,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_21_get( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_21_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 300
        const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0,
#endif
        codeobj_b4f6b6444e1dc9a22197188eb8e1bbb0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_741e4a7055b20857d935a0f7ed1c4abe,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_22_set(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_22_set,
        const_str_plain_set,
#if PYTHON_VERSION >= 300
        const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a,
#endif
        codeobj_e58e5bc1cd96f0f542474a5ea421a28f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_573342b2a8e1af18fbe63f15ee63f11b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_23_iterkeys(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_23_iterkeys,
        const_str_plain_iterkeys,
#if PYTHON_VERSION >= 300
        const_str_digest_9559440875cf716ec7a8bef311cbaefe,
#endif
        codeobj_4309c2d840afd0ca598f80783c7ef377,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_24_keys(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_24_keys,
        const_str_plain_keys,
#if PYTHON_VERSION >= 300
        const_str_digest_572b1e9f5dc0656103cb358a7cbea16a,
#endif
        codeobj_6e88561e4f9278122ced014a2ff83a60,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_7fad1f4acdf828076344bcbd2f3093fc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_25_itervalues(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_25_itervalues,
        const_str_plain_itervalues,
#if PYTHON_VERSION >= 300
        const_str_digest_0a2127aa931e582083c667383d216ebd,
#endif
        codeobj_aca8e823d8c8dcd21c5ff284241847a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_8282cde113cd2232a516d421ec587b65,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_26_values(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_26_values,
        const_str_plain_values,
#if PYTHON_VERSION >= 300
        const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7,
#endif
        codeobj_a714d1b3a7776f24bfbf3bd245b55a24,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_27_iteritems(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_27_iteritems,
        const_str_plain_iteritems,
#if PYTHON_VERSION >= 300
        const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d,
#endif
        codeobj_e45fdd9df5bb097c5b96abedc3559758,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_94ebad60c38a4f103db32744a5bab84d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_28_items(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_28_items,
        const_str_plain_items,
#if PYTHON_VERSION >= 300
        const_str_digest_ad2094029011821e111452c0603108d0,
#endif
        codeobj_3f8d0ed57cc4410362336a1125142278,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_b04a12651fd966784023636e22761d12,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_29_list_domains(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_29_list_domains,
        const_str_plain_list_domains,
#if PYTHON_VERSION >= 300
        const_str_digest_4f8d8ada6928f5a67aefe24138a8c253,
#endif
        codeobj_20b971062815ffb4253b1c9e86b05c70,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_5266e491bdb204b2a45e0a788e9bac94,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_2_get_type(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_2_get_type,
        const_str_plain_get_type,
#if PYTHON_VERSION >= 300
        const_str_digest_28c35b2d382d530cb9f8e567735ee113,
#endif
        codeobj_ae970bd0d6f0a848529f89fea859b8bf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_30_list_paths(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_30_list_paths,
        const_str_plain_list_paths,
#if PYTHON_VERSION >= 300
        const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3,
#endif
        codeobj_24b0b808022e207e3c3b35dec7c8c5ac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_58821042b0e0d98cc3b40076b38affdd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_31_multiple_domains(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_31_multiple_domains,
        const_str_plain_multiple_domains,
#if PYTHON_VERSION >= 300
        const_str_digest_2fb13ce01af8e322e1090db877e250bd,
#endif
        codeobj_a837571046802aab75a5459b4a336872,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_32_get_dict( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_32_get_dict,
        const_str_plain_get_dict,
#if PYTHON_VERSION >= 300
        const_str_digest_aba783cd55ce183297e8f8d9ff1dc698,
#endif
        codeobj_b4617c6ebc4f8788c8455e65f3ecce55,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_d3a4a40c67458b1207db4bc7ab20d310,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_33___contains__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_33___contains__,
        const_str_plain___contains__,
#if PYTHON_VERSION >= 300
        const_str_digest_5427312272820286dba5b26f263d4c79,
#endif
        codeobj_c4276493927d1b67fbcb2611b8497182,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_34___getitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_34___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 300
        const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3,
#endif
        codeobj_a55efe02f692c44829765f9d8137adda,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_08b25300475453472c10345ee7168b50,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_35___setitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_35___setitem__,
        const_str_plain___setitem__,
#if PYTHON_VERSION >= 300
        const_str_digest_0d043b9a6c2c506833bb59840ef22ffd,
#endif
        codeobj_7e5163a9d59806ee74bebed98c90a49f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_bb11d917f97bb6215fd11706382927d9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_36___delitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_36___delitem__,
        const_str_plain___delitem__,
#if PYTHON_VERSION >= 300
        const_str_digest_fb0e88f14b774d1e98d525584951eabc,
#endif
        codeobj_baea455d444af85054e6feaf0dc4713a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_101fa36882b0f5da69e72374403c2c30,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_37_set_cookie(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_37_set_cookie,
        const_str_plain_set_cookie,
#if PYTHON_VERSION >= 300
        const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6,
#endif
        codeobj_01b165a079b9f7424d030f33cc6676a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_38_update(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_38_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 300
        const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e,
#endif
        codeobj_32cf436c2aeff5243697d41cdba1e74c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_5c9dad01a3c84d4b998a25c6f245d693,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_39__find( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_39__find,
        const_str_plain__find,
#if PYTHON_VERSION >= 300
        const_str_digest_9bc80f2115d22815a80849e3086128b4,
#endif
        codeobj_e86faa1b86d96cb0f8f2fbb4c3a7dca1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_2aa7f18650b70bafed61b449ab43cbad,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_3_get_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_3_get_host,
        const_str_plain_get_host,
#if PYTHON_VERSION >= 300
        const_str_digest_e43e9402062b1dc16610d92a6e06da93,
#endif
        codeobj_c189f87aeeaf503ee94c482679ec2173,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_40__find_no_duplicates( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_40__find_no_duplicates,
        const_str_plain__find_no_duplicates,
#if PYTHON_VERSION >= 300
        const_str_digest_b270aaa39204bf1a293395efb6982c3e,
#endif
        codeobj_e81af8f990e0ea0f61a5c1821066ba96,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_41___getstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_41___getstate__,
        const_str_plain___getstate__,
#if PYTHON_VERSION >= 300
        const_str_digest_2fd659d0d93422f0a9d09e643f3b5831,
#endif
        codeobj_c600b487f6535dc1935cfeea3cc27163,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_59021ee0ac4a578b9169d1a96b78e1da,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_42___setstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_42___setstate__,
        const_str_plain___setstate__,
#if PYTHON_VERSION >= 300
        const_str_digest_0cf04dad003066735b1fdc1881f334a1,
#endif
        codeobj_5af861a59022fcda793b5604cc08c53e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_59021ee0ac4a578b9169d1a96b78e1da,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_43_copy(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_43_copy,
        const_str_plain_copy,
#if PYTHON_VERSION >= 300
        const_str_digest_ccf021f29934e59f3e942390d0f913c3,
#endif
        codeobj_1a7b4d1f03e9e1496a01e8b0c9d25f12,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_44_get_policy(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_44_get_policy,
        const_str_plain_get_policy,
#if PYTHON_VERSION >= 300
        const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5,
#endif
        codeobj_c84f3ab52554706647aafdab73af7804,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_45__copy_cookie_jar(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_45__copy_cookie_jar,
        const_str_plain__copy_cookie_jar,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_20abc09aff0c202073420ed9960b3ed5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_46_create_cookie(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_46_create_cookie,
        const_str_plain_create_cookie,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_177a797ffcb43364acc15320339e1b13,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_47_morsel_to_cookie(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_47_morsel_to_cookie,
        const_str_plain_morsel_to_cookie,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e6c2c05146c94bd0d18a9cf99a83f10e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_48_cookiejar_from_dict( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_48_cookiejar_from_dict,
        const_str_plain_cookiejar_from_dict,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b1b3e09f171f91f304417b3ba4d416fc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_85e0ea626320458ddd4363cffbfdc559,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_49_merge_cookies(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_49_merge_cookies,
        const_str_plain_merge_cookies,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f6e4e4eb800589518ce6600fb2faf6ec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_4_get_origin_req_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_4_get_origin_req_host,
        const_str_plain_get_origin_req_host,
#if PYTHON_VERSION >= 300
        const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0,
#endif
        codeobj_e65281f481844fb90586c1bf4eb87a67,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_5_get_full_url(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_5_get_full_url,
        const_str_plain_get_full_url,
#if PYTHON_VERSION >= 300
        const_str_digest_b30191bdb52236874918a4b5c3c5db8b,
#endif
        codeobj_40c8983808bef5ccd9f051a62565c821,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_6_is_unverifiable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_6_is_unverifiable,
        const_str_plain_is_unverifiable,
#if PYTHON_VERSION >= 300
        const_str_digest_58322b83779ad7d89ba5c63e2fe2855c,
#endif
        codeobj_aaebc42d3059d2afce842afae248a319,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_7_has_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_7_has_header,
        const_str_plain_has_header,
#if PYTHON_VERSION >= 300
        const_str_digest_2a2d5b06d38da952ad812a68992fbb10,
#endif
        codeobj_71dc96ff008dfd5b330a4f02c6a701b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_8_get_header( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_8_get_header,
        const_str_plain_get_header,
#if PYTHON_VERSION >= 300
        const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6,
#endif
        codeobj_c12dc2d0e7544add316f0615f35aa76e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_9_add_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_9_add_header,
        const_str_plain_add_header,
#if PYTHON_VERSION >= 300
        const_str_digest_b19ae27d1753e06c28990a42518b1f44,
#endif
        codeobj_c50931531274ecb6e735cbf0c999f520,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_138ef95cec671591d9bedfa7e0898703,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$cookies =
{
    PyModuleDef_HEAD_INIT,
    "requests.cookies",
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

MOD_INIT_DECL( requests$cookies )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$cookies );
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
    puts("requests.cookies: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.cookies: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.cookies: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$cookies" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$cookies = Py_InitModule4(
        "requests.cookies",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$cookies = PyModule_Create( &mdef_requests$cookies );
#endif

    moduledict_requests$cookies = MODULE_DICT( module_requests$cookies );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_requests$cookies,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$cookies,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$cookies,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$cookies,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$cookies );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_12188133309ffc390643b7a732954d08, module_requests$cookies );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_db7b05c53bd6696e69504cc84286190f;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_requests$cookies_25 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_01e82067689cb9ed48bda6a420a26287_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_01e82067689cb9ed48bda6a420a26287_2 = NULL;
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
    PyObject *locals_requests$cookies_97 = NULL;
    struct Nuitka_FrameObject *frame_5ba6a17e8818f3172be3dc01eff15b2e_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5ba6a17e8818f3172be3dc01eff15b2e_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_requests$cookies_165 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_requests$cookies_171 = NULL;
    struct Nuitka_FrameObject *frame_c5881e6e64937a8f05652068265f9c23_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c5881e6e64937a8f05652068265f9c23_4 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_955b7d6fef0bcb66b462d15cb6f41169;
        UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_db7b05c53bd6696e69504cc84286190f = MAKE_MODULE_FRAME( codeobj_db7b05c53bd6696e69504cc84286190f, module_requests$cookies );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_db7b05c53bd6696e69504cc84286190f );
    assert( Py_REFCNT( frame_db7b05c53bd6696e69504cc84286190f ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_copy;
        tmp_globals_name_1 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 12;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_copy, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_time;
        tmp_globals_name_2 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 13;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_calendar;
        tmp_globals_name_3 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 14;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_calendar, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain__internal_utils;
        tmp_globals_name_4 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_to_native_string_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 16;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_requests$cookies,
                const_str_plain_to_native_string,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_to_native_string );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_to_native_string, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_compat;
        tmp_globals_name_5 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 17;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

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
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_requests$cookies,
                const_str_plain_cookielib,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_cookielib );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_requests$cookies,
                const_str_plain_urlparse,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_urlparse );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_requests$cookies,
                const_str_plain_urlunparse,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_urlunparse );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlunparse, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_requests$cookies,
                const_str_plain_Morsel,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Morsel );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_Morsel, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_requests$cookies,
                const_str_plain_MutableMapping,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_MutableMapping );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MutableMapping, tmp_assign_source_13 );
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
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_threading;
        tmp_globals_name_6 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 20;
        tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_14 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_db7b05c53bd6696e69504cc84286190f, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_db7b05c53bd6696e69504cc84286190f, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_3;
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
            PyObject *tmp_assign_source_15;
            PyObject *tmp_name_name_7;
            PyObject *tmp_globals_name_7;
            PyObject *tmp_locals_name_7;
            PyObject *tmp_fromlist_name_7;
            PyObject *tmp_level_name_7;
            tmp_name_name_7 = const_str_plain_dummy_threading;
            tmp_globals_name_7 = (PyObject *)moduledict_requests$cookies;
            tmp_locals_name_7 = Py_None;
            tmp_fromlist_name_7 = Py_None;
            tmp_level_name_7 = const_int_0;
            frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 22;
            tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_15 );
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 19;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_db7b05c53bd6696e69504cc84286190f->m_frame) frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_3;
        branch_end_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_2;
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


            exception_lineno = 25;

            goto try_except_handler_4;
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


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_1 != NULL );
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_type_object_tuple;
        tmp_assign_source_17 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_17;
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


            exception_lineno = 25;

            goto try_except_handler_4;
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


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_18;
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


                exception_lineno = 25;

                goto try_except_handler_4;
            }
            tmp_args_name_1 = const_tuple_str_plain_MockRequest_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 25;
            tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_18;
        }
        {
            nuitka_bool tmp_condition_result_5;
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


                exception_lineno = 25;

                goto try_except_handler_4;
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


                    exception_lineno = 25;

                    goto try_except_handler_4;
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

                    exception_lineno = 25;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
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
            branch_no_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_19;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_requests$cookies_25 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_12188133309ffc390643b7a732954d08;
        tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_33e1091efb89a5aa5c06480eca194fed;
        tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_MockRequest;
        tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_01e82067689cb9ed48bda6a420a26287_2, codeobj_01e82067689cb9ed48bda6a420a26287, module_requests$cookies, sizeof(void *) );
        frame_01e82067689cb9ed48bda6a420a26287_2 = cache_frame_01e82067689cb9ed48bda6a420a26287_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_01e82067689cb9ed48bda6a420a26287_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_01e82067689cb9ed48bda6a420a26287_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_2_get_type(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain_get_type, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_3_get_host(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain_get_host, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_4_get_origin_req_host(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain_get_origin_req_host, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_5_get_full_url(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain_get_full_url, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_6_is_unverifiable(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain_is_unverifiable, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_7_has_header(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain_has_header, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_8_get_header( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain_get_header, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_9_add_header(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain_add_header, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_10_add_unredirected_header(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain_add_unredirected_header, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_11_get_new_headers(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain_get_new_headers, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            tmp_res = MAPPING_HAS_ITEM( locals_requests$cookies_25, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_2;
            }
            else
            {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_name_2 = PyObject_GetItem( locals_requests$cookies_25, const_str_plain_property );

            if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_requests$cookies$$$function_12_unverifiable(  );



            frame_01e82067689cb9ed48bda6a420a26287_2->m_frame.f_lineno = 84;
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


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_name_3 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_2 = MAKE_FUNCTION_requests$cookies$$$function_12_unverifiable(  );



            frame_01e82067689cb9ed48bda6a420a26287_2->m_frame.f_lineno = 84;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain_unverifiable, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_4;
            tmp_res = MAPPING_HAS_ITEM( locals_requests$cookies_25, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_3;
            }
            else
            {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_4 = PyObject_GetItem( locals_requests$cookies_25, const_str_plain_property );

            if ( tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_3 = MAKE_FUNCTION_requests$cookies$$$function_13_origin_req_host(  );



            frame_01e82067689cb9ed48bda6a420a26287_2->m_frame.f_lineno = 88;
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


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_name_5 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_4 = MAKE_FUNCTION_requests$cookies$$$function_13_origin_req_host(  );



            frame_01e82067689cb9ed48bda6a420a26287_2->m_frame.f_lineno = 88;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain_origin_req_host, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_6;
            tmp_res = MAPPING_HAS_ITEM( locals_requests$cookies_25, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_4;
            }
            else
            {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_name_6 = PyObject_GetItem( locals_requests$cookies_25, const_str_plain_property );

            if ( tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_5 = MAKE_FUNCTION_requests$cookies$$$function_14_host(  );



            frame_01e82067689cb9ed48bda6a420a26287_2->m_frame.f_lineno = 92;
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


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_name_7 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_6 = MAKE_FUNCTION_requests$cookies$$$function_14_host(  );



            frame_01e82067689cb9ed48bda6a420a26287_2->m_frame.f_lineno = 92;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem( locals_requests$cookies_25, const_str_plain_host, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_01e82067689cb9ed48bda6a420a26287_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_01e82067689cb9ed48bda6a420a26287_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_01e82067689cb9ed48bda6a420a26287_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_01e82067689cb9ed48bda6a420a26287_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_01e82067689cb9ed48bda6a420a26287_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_01e82067689cb9ed48bda6a420a26287_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_01e82067689cb9ed48bda6a420a26287_2 == cache_frame_01e82067689cb9ed48bda6a420a26287_2 )
        {
            Py_DECREF( frame_01e82067689cb9ed48bda6a420a26287_2 );
        }
        cache_frame_01e82067689cb9ed48bda6a420a26287_2 = NULL;

        assertFrameObject( frame_01e82067689cb9ed48bda6a420a26287_2 );

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
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_8 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_MockRequest;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_requests$cookies_25;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 25;
            tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_6;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_20 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_20 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_requests$cookies_25 );
        locals_requests$cookies_25 = NULL;
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

        Py_DECREF( locals_requests$cookies_25 );
        locals_requests$cookies_25 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies );
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
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 25;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockRequest, tmp_assign_source_20 );
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
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
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_2 != NULL );
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_5:;
        tmp_bases_name_2 = const_tuple_type_object_tuple;
        tmp_assign_source_23 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_10;
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


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_5 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;

                goto try_except_handler_7;
            }
            tmp_args_name_3 = const_tuple_str_plain_MockResponse_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 97;
            tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_9 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;

                goto try_except_handler_7;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_24;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_7 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;

                goto try_except_handler_7;
            }
            tmp_condition_result_12 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 97;

                    goto try_except_handler_7;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_2 = tmp_class_creation_2__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_8 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 97;

                    goto try_except_handler_7;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_3 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 97;

                    goto try_except_handler_7;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 97;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_7;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_25;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_requests$cookies_97 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_12188133309ffc390643b7a732954d08;
        tmp_res = PyObject_SetItem( locals_requests$cookies_97, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_digest_e02118ec259954e10ca6d6356803797f;
        tmp_res = PyObject_SetItem( locals_requests$cookies_97, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_plain_MockResponse;
        tmp_res = PyObject_SetItem( locals_requests$cookies_97, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto try_except_handler_9;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_5ba6a17e8818f3172be3dc01eff15b2e_3, codeobj_5ba6a17e8818f3172be3dc01eff15b2e, module_requests$cookies, sizeof(void *) );
        frame_5ba6a17e8818f3172be3dc01eff15b2e_3 = cache_frame_5ba6a17e8818f3172be3dc01eff15b2e_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_5ba6a17e8818f3172be3dc01eff15b2e_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_5ba6a17e8818f3172be3dc01eff15b2e_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_15___init__(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_97, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_16_info(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_97, const_str_plain_info, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_17_getheaders(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_97, const_str_plain_getheaders, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_5ba6a17e8818f3172be3dc01eff15b2e_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_5ba6a17e8818f3172be3dc01eff15b2e_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_5ba6a17e8818f3172be3dc01eff15b2e_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_5ba6a17e8818f3172be3dc01eff15b2e_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_5ba6a17e8818f3172be3dc01eff15b2e_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_5ba6a17e8818f3172be3dc01eff15b2e_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_5ba6a17e8818f3172be3dc01eff15b2e_3 == cache_frame_5ba6a17e8818f3172be3dc01eff15b2e_3 )
        {
            Py_DECREF( frame_5ba6a17e8818f3172be3dc01eff15b2e_3 );
        }
        cache_frame_5ba6a17e8818f3172be3dc01eff15b2e_3 = NULL;

        assertFrameObject( frame_5ba6a17e8818f3172be3dc01eff15b2e_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_10 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_4 = const_str_plain_MockResponse;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_requests$cookies_97;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 97;
            tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;

                goto try_except_handler_9;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_26 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_26 );
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF( locals_requests$cookies_97 );
        locals_requests$cookies_97 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$cookies_97 );
        locals_requests$cookies_97 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 97;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockResponse, tmp_assign_source_26 );
    }
    goto try_end_5;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_requests$cookies$$$function_18_extract_cookies_to_jar(  );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_requests$cookies$$$function_19_get_cookie_header(  );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_get_cookie_header, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_30 = MAKE_FUNCTION_requests$cookies$$$function_20_remove_cookie_by_name( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_6;
        }
        else
        {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_3 != NULL );
        Py_INCREF( tmp_metaclass_name_3 );
        condexpr_end_6:;
        tmp_bases_name_3 = const_tuple_type_RuntimeError_tuple;
        tmp_assign_source_32 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_14;
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


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_9 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___prepare__ );
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_5;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_10 = tmp_class_creation_3__metaclass;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;

                goto try_except_handler_10;
            }
            tmp_args_name_5 = const_tuple_str_plain_CookieConflictError_tuple_type_RuntimeError_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 165;
            tmp_assign_source_33 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_11 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;

                goto try_except_handler_10;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_33;
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_11 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_11, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;

                goto try_except_handler_10;
            }
            tmp_condition_result_16 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_10;
            }
            else
            {
                goto branch_no_10;
            }
            branch_yes_10:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_12;
                PyObject *tmp_type_arg_3;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_5 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 165;

                    goto try_except_handler_10;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_3 = tmp_class_creation_3__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1( tmp_type_arg_3 );
                assert( !(tmp_source_name_12 == NULL) );
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 165;

                    goto try_except_handler_10;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_5 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 165;

                    goto try_except_handler_10;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 165;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_10;
            }
            branch_no_10:;
        }
        goto branch_end_9;
        branch_no_9:;
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_34;
        }
        branch_end_9:;
    }
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_requests$cookies_165 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_12188133309ffc390643b7a732954d08;
        tmp_res = PyObject_SetItem( locals_requests$cookies_165, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d;
        tmp_res = PyObject_SetItem( locals_requests$cookies_165, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_plain_CookieConflictError;
        tmp_res = PyObject_SetItem( locals_requests$cookies_165, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;

            goto try_except_handler_12;
        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_12 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_6 = const_str_plain_CookieConflictError;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_6 );
            tmp_tuple_element_6 = const_tuple_type_RuntimeError_tuple;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_requests$cookies_165;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 165;
            tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;

                goto try_except_handler_12;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_35 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_35 );
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF( locals_requests$cookies_165 );
        locals_requests$cookies_165 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$cookies_165 );
        locals_requests$cookies_165 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 165;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_CookieConflictError, tmp_assign_source_35 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cookielib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 171;

            goto try_except_handler_13;
        }

        tmp_source_name_13 = tmp_mvar_value_3;
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_CookieJar );
        if ( tmp_tuple_element_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        tmp_assign_source_37 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_7 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MutableMapping );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MutableMapping );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assign_source_37 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MutableMapping" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 171;

            goto try_except_handler_13;
        }

        tmp_tuple_element_7 = tmp_mvar_value_4;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_assign_source_37, 1, tmp_tuple_element_7 );
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = PyDict_New();
        assert( tmp_class_creation_4__class_decl_dict == NULL );
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        PyObject *tmp_type_arg_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_7;
        }
        else
        {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = const_str_plain_metaclass;
        tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_subscribed_name_1 = tmp_class_creation_4__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
        Py_DECREF( tmp_type_arg_4 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        condexpr_end_7:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_39 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
        Py_DECREF( tmp_metaclass_name_4 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_18;
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


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        branch_no_11:;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_source_name_14;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_source_name_14 = tmp_class_creation_4__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_14, const_str_plain___prepare__ );
        tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_12;
        }
        else
        {
            goto branch_no_12;
        }
        branch_yes_12:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_15;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_source_name_15 = tmp_class_creation_4__metaclass;
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain___prepare__ );
            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;

                goto try_except_handler_13;
            }
            tmp_tuple_element_8 = const_str_plain_RequestsCookieJar;
            tmp_args_name_7 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_8 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
            frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 171;
            tmp_assign_source_40 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_7, tmp_kw_name_7 );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_name_7 );
            if ( tmp_assign_source_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;

                goto try_except_handler_13;
            }
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_40;
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_source_name_16;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_source_name_16 = tmp_class_creation_4__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_16, const_str_plain___getitem__ );
            tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;

                goto try_except_handler_13;
            }
            tmp_condition_result_20 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_13;
            }
            else
            {
                goto branch_no_13;
            }
            branch_yes_13:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_raise_value_4;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_getattr_default_4;
                PyObject *tmp_source_name_17;
                PyObject *tmp_type_arg_5;
                tmp_raise_type_4 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_4__metaclass );
                tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
                tmp_getattr_attr_4 = const_str_plain___name__;
                tmp_getattr_default_4 = const_str_angle_metaclass;
                tmp_tuple_element_9 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 171;

                    goto try_except_handler_13;
                }
                tmp_right_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_9 );
                CHECK_OBJECT( tmp_class_creation_4__prepared );
                tmp_type_arg_5 = tmp_class_creation_4__prepared;
                tmp_source_name_17 = BUILTIN_TYPE1( tmp_type_arg_5 );
                assert( !(tmp_source_name_17 == NULL) );
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_17 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_4 );

                    exception_lineno = 171;

                    goto try_except_handler_13;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_9 );
                tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 171;

                    goto try_except_handler_13;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF( tmp_raise_type_4 );
                exception_value = tmp_raise_value_4;
                exception_lineno = 171;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_13;
            }
            branch_no_13:;
        }
        goto branch_end_12;
        branch_no_12:;
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = PyDict_New();
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_41;
        }
        branch_end_12:;
    }
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_requests$cookies_171 = tmp_set_locals_4;
            Py_INCREF( tmp_set_locals_4 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_12188133309ffc390643b7a732954d08;
        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_digest_c6a3c61d8189ea3789c38808f9f3af27;
        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_plain_RequestsCookieJar;
        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_15;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_c5881e6e64937a8f05652068265f9c23_4, codeobj_c5881e6e64937a8f05652068265f9c23, module_requests$cookies, sizeof(void *) );
        frame_c5881e6e64937a8f05652068265f9c23_4 = cache_frame_c5881e6e64937a8f05652068265f9c23_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_c5881e6e64937a8f05652068265f9c23_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_c5881e6e64937a8f05652068265f9c23_4 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_none_none_none_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_21_get( tmp_defaults_3 );



            tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_get, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_22_set(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_set, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_23_iterkeys(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_iterkeys, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_24_keys(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_keys, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_25_itervalues(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_itervalues, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_26_values(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_values, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_27_iteritems(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_iteritems, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_28_items(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_items, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_29_list_domains(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_list_domains, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_30_list_paths(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_list_paths, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_31_multiple_domains(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_multiple_domains, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_none_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_32_get_dict( tmp_defaults_4 );



            tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_get_dict, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_33___contains__(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain___contains__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_34___getitem__(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain___getitem__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_35___setitem__(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain___setitem__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_36___delitem__(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain___delitem__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_37_set_cookie(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_set_cookie, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_38_update(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_update, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 348;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_none_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_39__find( tmp_defaults_5 );



            tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain__find, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_none_none_tuple;
            Py_INCREF( tmp_defaults_6 );
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_40__find_no_duplicates( tmp_defaults_6 );



            tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain__find_no_duplicates, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 376;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_41___getstate__(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain___getstate__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_42___setstate__(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain___setstate__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_43_copy(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_copy, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_44_get_policy(  );



        tmp_res = PyObject_SetItem( locals_requests$cookies_171, const_str_plain_get_policy, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c5881e6e64937a8f05652068265f9c23_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c5881e6e64937a8f05652068265f9c23_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_c5881e6e64937a8f05652068265f9c23_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_c5881e6e64937a8f05652068265f9c23_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_c5881e6e64937a8f05652068265f9c23_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_c5881e6e64937a8f05652068265f9c23_4,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame.
        if ( frame_c5881e6e64937a8f05652068265f9c23_4 == cache_frame_c5881e6e64937a8f05652068265f9c23_4 )
        {
            Py_DECREF( frame_c5881e6e64937a8f05652068265f9c23_4 );
        }
        cache_frame_c5881e6e64937a8f05652068265f9c23_4 = NULL;

        assertFrameObject( frame_c5881e6e64937a8f05652068265f9c23_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_15;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_called_name_14 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_10 = const_str_plain_RequestsCookieJar;
            tmp_args_name_8 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_10 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_10 );
            tmp_tuple_element_10 = locals_requests$cookies_171;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_db7b05c53bd6696e69504cc84286190f->m_frame.f_lineno = 171;
            tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_8 );
            if ( tmp_assign_source_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;

                goto try_except_handler_15;
            }
            assert( outline_3_var___class__ == NULL );
            outline_3_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT( outline_3_var___class__ );
        tmp_assign_source_42 = outline_3_var___class__;
        Py_INCREF( tmp_assign_source_42 );
        goto try_return_handler_15;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF( locals_requests$cookies_171 );
        locals_requests$cookies_171 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$cookies_171 );
        locals_requests$cookies_171 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
        Py_DECREF( outline_3_var___class__ );
        outline_3_var___class__ = NULL;

        goto outline_result_4;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 171;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar, tmp_assign_source_42 );
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_db7b05c53bd6696e69504cc84286190f );
#endif
    popFrameStack();

    assertFrameObject( frame_db7b05c53bd6696e69504cc84286190f );

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_db7b05c53bd6696e69504cc84286190f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_db7b05c53bd6696e69504cc84286190f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_db7b05c53bd6696e69504cc84286190f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_db7b05c53bd6696e69504cc84286190f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;
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
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_FUNCTION_requests$cookies$$$function_45__copy_cookie_jar(  );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain__copy_cookie_jar, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_FUNCTION_requests$cookies$$$function_46_create_cookie(  );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_create_cookie, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_FUNCTION_requests$cookies$$$function_47_morsel_to_cookie(  );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_morsel_to_cookie, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = const_tuple_none_true_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_assign_source_47 = MAKE_FUNCTION_requests$cookies$$$function_48_cookiejar_from_dict( tmp_defaults_7 );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict, tmp_assign_source_47 );
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_FUNCTION_requests$cookies$$$function_49_merge_cookies(  );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_merge_cookies, tmp_assign_source_48 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_requests$cookies );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
