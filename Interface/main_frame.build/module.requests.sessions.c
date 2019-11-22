/* Generated code for Python module 'requests.sessions'
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

/* The "_module_requests$sessions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$sessions;
PyDictObject *moduledict_requests$sessions;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_8ae4830b7ee99e05bb48d2cc82ed2d03;
extern PyObject *const_str_plain_headers;
extern PyObject *const_tuple_str_plain_self_str_plain_args_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_70c41d0154ea67575d96c5031e23167a_tuple;
static PyObject *const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_33222436398dec9a5c85de068ea71100;
extern PyObject *const_str_plain__next;
static PyObject *const_str_plain_keys_to_move;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain_POST;
extern PyObject *const_str_plain_decode_content;
extern PyObject *const_str_plain_Request;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_PUT;
extern PyObject *const_tuple_str_plain_CaseInsensitiveDict_tuple;
static PyObject *const_str_plain_see_other;
extern PyObject *const_str_plain_temporary_redirect;
static PyObject *const_str_digest_0cf52c61701094af14cce92132a5b4f5;
extern PyObject *const_tuple_str_plain_response_tuple;
static PyObject *const_tuple_str_plain_REQUESTS_CA_BUNDLE_tuple;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_83a4d90de9f8b0862d918bd04dff2cc4;
static PyObject *const_str_plain_bypass_proxy;
extern PyObject *const_str_plain_prepare_auth;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_models;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_is_py3;
extern PyObject *const_str_plain_time;
static PyObject *const_str_plain_merge_environment_settings;
static PyObject *const_str_digest_5a03fab32d979e313c02d1eea965ab54;
static PyObject *const_str_plain_environ_proxies;
extern PyObject *const_str_plain_proxies;
extern PyObject *const_str_plain_head;
extern PyObject *const_str_plain_seconds;
static PyObject *const_str_digest_1c229bac7f81999111a1bfbc0984644e;
static PyObject *const_str_digest_e811a9baa0ffd56d1b59860a4fbec4dc;
extern PyObject *const_tuple_str_plain_allow_redirects_false_tuple;
extern PyObject *const_str_plain_DEFAULT_PORTS;
static PyObject *const_str_digest_131435ff30698deac2d874478938fdd4;
extern PyObject *const_str_plain_ContentDecodingError;
static PyObject *const_str_plain_CURL_CA_BUNDLE;
extern PyObject *const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
static PyObject *const_str_digest_504b77692b694460b8c25198a52c83ba;
static PyObject *const_tuple_str_plain_stream_tuple;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain_proxy;
extern PyObject *const_tuple_str_plain_codes_tuple;
extern PyObject *const_str_digest_2b15502c566d8238f4869c227793bd1a;
extern PyObject *const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_found;
static PyObject *const_str_plain_yield_requests;
extern PyObject *const_str_plain_HTTPAdapter;
extern PyObject *const_str_plain_pop;
extern PyObject *const_int_0;
static PyObject *const_str_digest_3dc3a32088712bcdf672f48f5c0bf5c5;
extern PyObject *const_str_plain_response;
static PyObject *const_str_digest_5ff5f1f3210d8f43b1d10d053061c2c7;
extern PyObject *const_str_plain_cookies;
extern PyObject *const_str_plain_extract_cookies_to_jar;
extern PyObject *const_str_plain_to_native_string;
extern PyObject *const_str_plain_patch;
static PyObject *const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple;
static PyObject *const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple;
extern PyObject *const_str_plain_location;
extern PyObject *const_str_plain_setdefault;
extern PyObject *const_str_plain_no_proxy;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_cb48bb05adb0e091eb1c115fffeb4c8a;
extern PyObject *const_str_plain_password;
static PyObject *const_str_plain_rebuild_proxies;
static PyObject *const_str_plain_prepare_request;
static PyObject *const_tuple_false_none_true_none_none_false_tuple;
extern PyObject *const_str_plain_geturl;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_post;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_merge_cookies;
static PyObject *const_str_plain_new_parsed;
extern PyObject *const_str_plain_get_auth_from_url;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_http;
extern PyObject *const_str_plain_startswith;
static PyObject *const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple;
extern PyObject *const_str_plain_to_key_val_list;
extern PyObject *const_str_plain_TooManyRedirects;
static PyObject *const_str_digest_0bca56866bcf0b75f74d31c9da00963c;
static PyObject *const_str_digest_489820f4fee1c95447c20d7aee4bc394;
static PyObject *const_str_plain_preferred_clock;
extern PyObject *const_str_plain_timedelta;
static PyObject *const_tuple_str_plain_resp_tuple;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_latin1;
static PyObject *const_tuple_6f9808eb443f87f0ee5bc64e0fba0061_tuple;
static PyObject *const_tuple_88099abfc2d744feb222ef53bae67000_tuple;
extern PyObject *const_int_pos_80;
extern PyObject *const_str_plain_GET;
extern PyObject *const_str_plain_fragment;
static PyObject *const_str_digest_0da4ca7e1d267b7753ceb4b2770531dd;
static PyObject *const_str_plain_should_strip_auth;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_platform;
static PyObject *const_str_plain_changed_scheme;
static PyObject *const_str_digest_1e854b3c946780bd62f1ad991507dc9c;
static PyObject *const_str_plain_mount;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_put;
extern PyObject *const_str_plain_urlparse;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_dict_class;
static PyObject *const_str_plain_merge_setting;
extern PyObject *const_str_plain_p;
static PyObject *const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_insert;
extern PyObject *const_tuple_str_plain_latin1_tuple;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_netloc;
static PyObject *const_tuple_str_plain_REDIRECT_STATI_tuple;
extern PyObject *const_str_plain_structures;
extern PyObject *const_str_plain_datetime;
static PyObject *const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple;
static PyObject *const_tuple_5b6c44de3d260d52690cdfdbee689d80_tuple;
extern PyObject *const_str_plain_raw;
extern PyObject *const_tuple_str_plain_k_str_plain_v_tuple;
extern PyObject *const_tuple_str_plain_timedelta_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_state_tuple;
static PyObject *const_str_plain_adapters;
static PyObject *const_tuple_str_plain_CURL_CA_BUNDLE_tuple;
extern PyObject *const_str_plain_default_headers;
extern PyObject *const_str_plain_permanent_redirect;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_92db2e8ed71c2e367d5357b04d0462c4;
static PyObject *const_str_plain_REQUESTS_CA_BUNDLE;
static PyObject *const_str_plain_adapter;
static PyObject *const_list_dc982aca766e4d1362a255cd6d36b4fb_list;
extern PyObject *const_str_plain_upper;
static PyObject *const_str_digest_21406c84cc6f02469836def5bcdcadba;
extern PyObject *const_str_plain__body_position;
static PyObject *const_str_plain_perf_counter;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_moved;
extern PyObject *const_str_plain_DELETE;
static PyObject *const_str_digest_382a6a157ce1707d0f242d5ea1fea71c;
static PyObject *const_str_digest_83853292c48098773b03eae760dcfe38;
extern PyObject *const_str_plain_InvalidSchema;
static PyObject *const_str_digest_f7f26a899d15b0307bb1388a5bda3892;
extern PyObject *const_str_plain_v;
static PyObject *const_str_digest_368818c648e1111518d4140f8cd94f10;
static PyObject *const_str_plain_get_redirect_target;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_none_keys;
extern PyObject *const_str_plain_hostname;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_key;
static PyObject *const_dict_5a980a96e502e21a57174819267c7344;
static PyObject *const_tuple_int_pos_80_none_tuple;
static PyObject *const_str_digest_f2636f029da6046e540b6721c0c69c64;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_cookiejar_from_dict;
extern PyObject *const_str_plain_method;
static PyObject *const_str_plain_max_redirects;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_SessionRedirectMixin;
extern PyObject *const_str_plain_compat;
extern PyObject *const_str_plain_default_port;
extern PyObject *const_str_plain_delete;
static PyObject *const_str_digest_fa3b2211e965dde050b87ae23cfb152f;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_allow_redirects;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_digest_48d563b3d6be908aabde89b2dd46bb34;
extern PyObject *const_str_plain_status_codes;
static PyObject *const_str_digest_df29e6ce65bab6565825f33ca253f321;
static PyObject *const_str_plain_trust_env;
static PyObject *const_str_digest_3773766f3922dc10926506cd67493626;
extern PyObject *const_str_plain_request;
static PyObject *const_str_digest_28eb6d6e3c84195b87f5eda206592417;
static PyObject *const_str_plain_get_adapter;
static PyObject *const_str_plain_session_hooks;
extern PyObject *const_str_plain_prefix;
extern PyObject *const_str_plain_json;
static PyObject *const_str_digest_5f2af7e954563f0f1b8598cb903357ce;
static PyObject *const_str_digest_19cf6e4b470974146c094a9eb3c6c9c0;
extern PyObject *const_str_plain__internal_utils;
extern PyObject *const_str_plain_scheme;
static PyObject *const_str_digest_7e68f1bdd87458491c575c9c8a14f24c;
static PyObject *const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple;
static PyObject *const_str_plain_changed_port;
extern PyObject *const_str_plain_elapsed;
extern PyObject *const_tuple_a95b72743b8804bf0e9cb38b968c0b18_tuple;
extern PyObject *const_str_plain_body;
static PyObject *const_str_digest_df652bc3c79065c8732d0893d1f77479;
static PyObject *const_str_digest_2326510b09c332a083755ce27f812d9d;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_clock;
static PyObject *const_str_digest_7c06a402579f6f9d9db7f3e04da983fc;
extern PyObject *const_str_plain_cookielib;
static PyObject *const_str_digest_ab50d4439ade3e74bd04aeb12b9713ae;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_https;
static PyObject *const_str_plain_PATCH;
extern PyObject *const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_8f1f8a6d2be18d195ed7df0d436d212e;
static PyObject *const_str_digest_69a73433942a43d30c3208872597fbc4;
static PyObject *const_str_plain_merged_cookies;
extern PyObject *const_int_pos_443;
static PyObject *const_tuple_int_pos_443_none_tuple;
static PyObject *const_str_digest_e53d4a974ffbd6783b2c04e911c575f6;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_default_hooks;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_REDIRECT_STATI;
static PyObject *const_tuple_cc65bfcb889275d4618cf0078e40b354_tuple;
extern PyObject *const_str_plain_session;
extern PyObject *const_str_plain_files;
static PyObject *const_str_plain_old_parsed;
static PyObject *const_str_plain_new_url;
static PyObject *const_str_plain_rebuild_auth;
extern PyObject *const_str_plain_stream;
static PyObject *const_tuple_str_plain_HTTPAdapter_tuple;
static PyObject *const_str_plain_old_url;
extern PyObject *const_str_plain_content;
extern PyObject *const_str_plain___setstate__;
extern PyObject *const_str_plain_dispatch_hook;
extern PyObject *const_str_plain_CaseInsensitiveDict;
extern PyObject *const_str_plain_Cookie;
static PyObject *const_str_plain_session_setting;
extern PyObject *const_str_plain_Authorization;
extern PyObject *const_str_plain_requote_uri;
static PyObject *const_str_digest_67055a59082a8581b7a2c86a2d1c1f83;
static PyObject *const_str_digest_d41fb1dddc6f7cfe3e1d581e7ccdd852;
static PyObject *const_str_digest_0186b0786c0e31948d9081496849d709;
static PyObject *const_str_plain_env_proxies;
extern PyObject *const_tuple_str_plain_all_tuple;
static PyObject *const_str_plain_resolve_redirects;
static PyObject *const_str_plain_request_setting;
static PyObject *const_str_digest_e46ea1d9ca0677a0f1ae14af39cbbfc2;
static PyObject *const_str_plain_new_proxies;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_str_plain_attr_str_plain_self_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_utf8;
static PyObject *const_str_digest_b49e9dfe95a484cf32f4e0dcf61e3c53;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_get_environ_proxies;
extern PyObject *const_str_plain_OPTIONS;
extern PyObject *const_str_plain___getstate__;
extern PyObject *const_str_plain_Mapping;
static PyObject *const_tuple_2c98c4c331bb707fb97c99607664a158_tuple;
static PyObject *const_str_plain_new_auth;
static PyObject *const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_prepare;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_bb0c986a4d44a65e09f2da3af698fc66;
extern PyObject *const_str_plain_resp;
static PyObject *const_tuple_56022d833a2133ea98bc9669558d4a13_tuple;
extern PyObject *const_str_plain_win32;
extern PyObject *const_tuple_str_plain__basic_auth_str_tuple;
extern PyObject *const_str_angle_dictcontraction;
static PyObject *const_str_digest_7905fa3cf6a1b7f0e3f1aa2a48144462;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_digest_13971ae58b983978540cbb4bbf3b1360;
static PyObject *const_str_plain_prefetch;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_hooks;
static PyObject *const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple;
static PyObject *const_str_digest_8b3e93dde92996b29edc87dca601bdd4;
extern PyObject *const_str_plain_codes;
extern PyObject *const_str_plain_gen;
extern PyObject *const_str_plain_is_redirect;
extern PyObject *const_str_plain_items;
extern PyObject *const_tuple_str_plain_no_proxy_tuple;
static PyObject *const_str_digest_dfcd0fe2f27ce725c44199fb8c6f7973;
static PyObject *const_str_digest_0850b94f6eea1bda1db9b25ee4381193;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_digest_962cc75eef259550816f5f0e877500ef;
static PyObject *const_tuple_str_plain_k_str_plain_prefix_tuple;
extern PyObject *const_str_plain_environ;
static PyObject *const_tuple_str_plain_SessionRedirectMixin_tuple_type_object_tuple_tuple;
extern PyObject *const_tuple_str_plain_to_native_string_tuple;
static PyObject *const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86;
extern PyObject *const_str_plain_get_netrc_auth;
static PyObject *const_str_plain_merge_hooks;
extern PyObject *const_str_plain_Session;
extern PyObject *const_tuple_str_plain_allow_redirects_true_tuple;
extern PyObject *const_str_plain___attrs__;
static PyObject *const_str_digest_6eb3e921e45fc048c38157ffc06e2eea;
extern PyObject *const_str_plain_ChunkedEncodingError;
static PyObject *const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple;
extern PyObject *const_str_plain_username;
extern PyObject *const_str_plain_status_code;
static PyObject *const_str_plain_merged_setting;
static PyObject *const_tuple_667f897da4eaa203681d962b0447b021_tuple;
extern PyObject *const_str_plain_prepare_cookies;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain_attr;
extern PyObject *const_str_plain_should_bypass_proxies;
static PyObject *const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple;
extern PyObject *const_str_plain_prepared_request;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain__replace;
static PyObject *const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple;
extern PyObject *const_str_plain__cookies;
static PyObject *const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple;
static PyObject *const_str_digest_70e065559513e1162375c7bbb9f9de21;
static PyObject *const_tuple_59ffa986ae907cb93da3cb0708948d9b_tuple;
static PyObject *const_str_digest_73d6d8215c67828c30ea5a0548aac597;
extern PyObject *const_str_plain_OrderedDict;
static PyObject *const_str_digest_dde136ad554213eb3ece20209a69ac24;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_verify;
static PyObject *const_str_digest_a1b7979c671004beb348b3acf3fa3833;
static PyObject *const_str_digest_0334ac5a65e948ab1a00ac2f5cfe75c1;
extern PyObject *const_str_plain_PreparedRequest;
extern PyObject *const_str_plain_HEAD;
extern PyObject *const_str_plain_urljoin;
static PyObject *const_str_plain_rebuild_method;
extern PyObject *const_str_plain_rewind_body;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple;
static PyObject *const_tuple_52aba6df13b8e2e8ba17d2489d63a933_tuple;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain_RequestsCookieJar;
extern PyObject *const_str_plain_values;
static PyObject *const_str_digest_3e0ba908deebf0523c3ebb720f614f88;
extern PyObject *const_str_plain_auth;
extern PyObject *const_tuple_str_plain_self_str_plain_v_tuple;
extern PyObject *const_str_plain__basic_auth_str;
extern PyObject *const_str_plain_history;
extern PyObject *const_str_plain_DEFAULT_REDIRECT_LIMIT;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_CookieJar;
static PyObject *const_str_plain_request_hooks;
static PyObject *const_str_digest_147a008155143b0e10b18dcd3be84fb5;
static PyObject *const_str_digest_e8d5174c22a95e9965201ef3b005935d;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_8ae4830b7ee99e05bb48d2cc82ed2d03 = UNSTREAM_STRING_ASCII( &constant_bin[ 4035740 ], 35, 0 );
    const_tuple_70c41d0154ea67575d96c5031e23167a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 2, const_str_plain_cookies ); Py_INCREF( const_str_plain_cookies );
    const_str_plain_merged_cookies = UNSTREAM_STRING_ASCII( &constant_bin[ 4035775 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 3, const_str_plain_merged_cookies ); Py_INCREF( const_str_plain_merged_cookies );
    PyTuple_SET_ITEM( const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 4, const_str_plain_auth ); Py_INCREF( const_str_plain_auth );
    PyTuple_SET_ITEM( const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 5, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 1, const_str_plain_prepared_request ); Py_INCREF( const_str_plain_prepared_request );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 2, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 3, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 4, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 5, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    const_str_plain_new_proxies = UNSTREAM_STRING_ASCII( &constant_bin[ 4035789 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 6, const_str_plain_new_proxies ); Py_INCREF( const_str_plain_new_proxies );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 7, const_str_plain_no_proxy ); Py_INCREF( const_str_plain_no_proxy );
    const_str_plain_bypass_proxy = UNSTREAM_STRING_ASCII( &constant_bin[ 4035800 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 8, const_str_plain_bypass_proxy ); Py_INCREF( const_str_plain_bypass_proxy );
    const_str_plain_environ_proxies = UNSTREAM_STRING_ASCII( &constant_bin[ 4035812 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 9, const_str_plain_environ_proxies ); Py_INCREF( const_str_plain_environ_proxies );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 10, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 11, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 12, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_digest_33222436398dec9a5c85de068ea71100 = UNSTREAM_STRING_ASCII( &constant_bin[ 4035827 ], 11, 0 );
    const_str_plain_keys_to_move = UNSTREAM_STRING_ASCII( &constant_bin[ 4035838 ], 12, 1 );
    const_str_plain_POST = UNSTREAM_STRING_ASCII( &constant_bin[ 3999434 ], 4, 1 );
    const_str_plain_see_other = UNSTREAM_STRING_ASCII( &constant_bin[ 4035850 ], 9, 1 );
    const_str_digest_0cf52c61701094af14cce92132a5b4f5 = UNSTREAM_STRING_ASCII( &constant_bin[ 4035859 ], 42, 0 );
    const_tuple_str_plain_REQUESTS_CA_BUNDLE_tuple = PyTuple_New( 1 );
    const_str_plain_REQUESTS_CA_BUNDLE = UNSTREAM_STRING_ASCII( &constant_bin[ 4035901 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_REQUESTS_CA_BUNDLE_tuple, 0, const_str_plain_REQUESTS_CA_BUNDLE ); Py_INCREF( const_str_plain_REQUESTS_CA_BUNDLE );
    const_str_digest_83a4d90de9f8b0862d918bd04dff2cc4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4035919 ], 230, 0 );
    const_str_plain_merge_environment_settings = UNSTREAM_STRING_ASCII( &constant_bin[ 4036149 ], 26, 1 );
    const_str_digest_5a03fab32d979e313c02d1eea965ab54 = UNSTREAM_STRING_ASCII( &constant_bin[ 4036175 ], 373, 0 );
    const_str_digest_1c229bac7f81999111a1bfbc0984644e = UNSTREAM_STRING_ASCII( &constant_bin[ 4036548 ], 233, 0 );
    const_str_digest_e811a9baa0ffd56d1b59860a4fbec4dc = UNSTREAM_STRING_ASCII( &constant_bin[ 4036781 ], 17, 0 );
    const_str_digest_131435ff30698deac2d874478938fdd4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4036798 ], 432, 0 );
    const_str_plain_CURL_CA_BUNDLE = UNSTREAM_STRING_ASCII( &constant_bin[ 4037230 ], 14, 1 );
    const_str_digest_504b77692b694460b8c25198a52c83ba = UNSTREAM_STRING_ASCII( &constant_bin[ 913 ], 8, 0 );
    const_tuple_str_plain_stream_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_tuple, 0, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    const_str_plain_yield_requests = UNSTREAM_STRING_ASCII( &constant_bin[ 4037244 ], 14, 1 );
    const_str_digest_3dc3a32088712bcdf672f48f5c0bf5c5 = UNSTREAM_STRING_ASCII( &constant_bin[ 4037258 ], 94, 0 );
    const_str_digest_5ff5f1f3210d8f43b1d10d053061c2c7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4037352 ], 38, 0 );
    const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple, 1, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    const_str_plain_adapter = UNSTREAM_STRING_ASCII( &constant_bin[ 4001838 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple, 2, const_str_plain_adapter ); Py_INCREF( const_str_plain_adapter );
    PyTuple_SET_ITEM( const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple, 3, const_str_plain_keys_to_move ); Py_INCREF( const_str_plain_keys_to_move );
    PyTuple_SET_ITEM( const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple, 4, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple, 0, const_str_plain_default_hooks ); Py_INCREF( const_str_plain_default_hooks );
    PyTuple_SET_ITEM( const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple, 1, const_str_plain_dispatch_hook ); Py_INCREF( const_str_plain_dispatch_hook );
    const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 7, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 8, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 9, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 10, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 11, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 12, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 13, Py_None ); Py_INCREF( Py_None );
    const_str_digest_cb48bb05adb0e091eb1c115fffeb4c8a = UNSTREAM_STRING_ASCII( &constant_bin[ 4037390 ], 15, 0 );
    const_str_plain_rebuild_proxies = UNSTREAM_STRING_ASCII( &constant_bin[ 4037405 ], 15, 1 );
    const_str_plain_prepare_request = UNSTREAM_STRING_ASCII( &constant_bin[ 4037420 ], 15, 1 );
    const_tuple_false_none_true_none_none_false_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 5, Py_False ); Py_INCREF( Py_False );
    const_str_plain_new_parsed = UNSTREAM_STRING_ASCII( &constant_bin[ 4037435 ], 10, 1 );
    const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple, 0, const_str_plain_TooManyRedirects ); Py_INCREF( const_str_plain_TooManyRedirects );
    PyTuple_SET_ITEM( const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple, 1, const_str_plain_InvalidSchema ); Py_INCREF( const_str_plain_InvalidSchema );
    PyTuple_SET_ITEM( const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple, 2, const_str_plain_ChunkedEncodingError ); Py_INCREF( const_str_plain_ChunkedEncodingError );
    PyTuple_SET_ITEM( const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple, 3, const_str_plain_ContentDecodingError ); Py_INCREF( const_str_plain_ContentDecodingError );
    const_str_digest_0bca56866bcf0b75f74d31c9da00963c = UNSTREAM_STRING_ASCII( &constant_bin[ 4037445 ], 33, 0 );
    const_str_digest_489820f4fee1c95447c20d7aee4bc394 = UNSTREAM_STRING_ASCII( &constant_bin[ 4037478 ], 232, 0 );
    const_str_plain_preferred_clock = UNSTREAM_STRING_ASCII( &constant_bin[ 4037710 ], 15, 1 );
    const_tuple_str_plain_resp_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_resp_tuple, 0, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    const_tuple_6f9808eb443f87f0ee5bc64e0fba0061_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_6f9808eb443f87f0ee5bc64e0fba0061_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6f9808eb443f87f0ee5bc64e0fba0061_tuple, 1, const_str_plain_prepared_request ); Py_INCREF( const_str_plain_prepared_request );
    PyTuple_SET_ITEM( const_tuple_6f9808eb443f87f0ee5bc64e0fba0061_tuple, 2, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_6f9808eb443f87f0ee5bc64e0fba0061_tuple, 3, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_6f9808eb443f87f0ee5bc64e0fba0061_tuple, 4, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    const_str_plain_new_auth = UNSTREAM_STRING_ASCII( &constant_bin[ 4037725 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_6f9808eb443f87f0ee5bc64e0fba0061_tuple, 5, const_str_plain_new_auth ); Py_INCREF( const_str_plain_new_auth );
    const_tuple_88099abfc2d744feb222ef53bae67000_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_88099abfc2d744feb222ef53bae67000_tuple, 0, const_str_plain_cookiejar_from_dict ); Py_INCREF( const_str_plain_cookiejar_from_dict );
    PyTuple_SET_ITEM( const_tuple_88099abfc2d744feb222ef53bae67000_tuple, 1, const_str_plain_extract_cookies_to_jar ); Py_INCREF( const_str_plain_extract_cookies_to_jar );
    PyTuple_SET_ITEM( const_tuple_88099abfc2d744feb222ef53bae67000_tuple, 2, const_str_plain_RequestsCookieJar ); Py_INCREF( const_str_plain_RequestsCookieJar );
    PyTuple_SET_ITEM( const_tuple_88099abfc2d744feb222ef53bae67000_tuple, 3, const_str_plain_merge_cookies ); Py_INCREF( const_str_plain_merge_cookies );
    const_str_digest_0da4ca7e1d267b7753ceb4b2770531dd = UNSTREAM_STRING_ASCII( &constant_bin[ 4037733 ], 55, 0 );
    const_str_plain_should_strip_auth = UNSTREAM_STRING_ASCII( &constant_bin[ 4037373 ], 17, 1 );
    const_str_plain_changed_scheme = UNSTREAM_STRING_ASCII( &constant_bin[ 4037788 ], 14, 1 );
    const_str_digest_1e854b3c946780bd62f1ad991507dc9c = UNSTREAM_STRING_ASCII( &constant_bin[ 4037802 ], 20, 0 );
    const_str_plain_mount = UNSTREAM_STRING_ASCII( &constant_bin[ 997494 ], 5, 1 );
    const_str_plain_dict_class = UNSTREAM_STRING_ASCII( &constant_bin[ 4037822 ], 10, 1 );
    const_str_plain_merge_setting = UNSTREAM_STRING_ASCII( &constant_bin[ 4037832 ], 13, 1 );
    const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple = PyTuple_New( 6 );
    const_str_plain_request_setting = UNSTREAM_STRING_ASCII( &constant_bin[ 4037845 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 0, const_str_plain_request_setting ); Py_INCREF( const_str_plain_request_setting );
    const_str_plain_session_setting = UNSTREAM_STRING_ASCII( &constant_bin[ 4037860 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 1, const_str_plain_session_setting ); Py_INCREF( const_str_plain_session_setting );
    PyTuple_SET_ITEM( const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 2, const_str_plain_dict_class ); Py_INCREF( const_str_plain_dict_class );
    const_str_plain_merged_setting = UNSTREAM_STRING_ASCII( &constant_bin[ 4037875 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 3, const_str_plain_merged_setting ); Py_INCREF( const_str_plain_merged_setting );
    const_str_plain_none_keys = UNSTREAM_STRING_ASCII( &constant_bin[ 4037889 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 4, const_str_plain_none_keys ); Py_INCREF( const_str_plain_none_keys );
    PyTuple_SET_ITEM( const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 5, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_tuple_str_plain_REDIRECT_STATI_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_REDIRECT_STATI_tuple, 0, const_str_plain_REDIRECT_STATI ); Py_INCREF( const_str_plain_REDIRECT_STATI );
    const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple, 1, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple, 2, const_str_plain_location ); Py_INCREF( const_str_plain_location );
    const_tuple_5b6c44de3d260d52690cdfdbee689d80_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_5b6c44de3d260d52690cdfdbee689d80_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_old_url = UNSTREAM_STRING_ASCII( &constant_bin[ 4037898 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_5b6c44de3d260d52690cdfdbee689d80_tuple, 1, const_str_plain_old_url ); Py_INCREF( const_str_plain_old_url );
    const_str_plain_new_url = UNSTREAM_STRING_ASCII( &constant_bin[ 4037905 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_5b6c44de3d260d52690cdfdbee689d80_tuple, 2, const_str_plain_new_url ); Py_INCREF( const_str_plain_new_url );
    const_str_plain_old_parsed = UNSTREAM_STRING_ASCII( &constant_bin[ 4037912 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_5b6c44de3d260d52690cdfdbee689d80_tuple, 3, const_str_plain_old_parsed ); Py_INCREF( const_str_plain_old_parsed );
    PyTuple_SET_ITEM( const_tuple_5b6c44de3d260d52690cdfdbee689d80_tuple, 4, const_str_plain_new_parsed ); Py_INCREF( const_str_plain_new_parsed );
    const_str_plain_changed_port = UNSTREAM_STRING_ASCII( &constant_bin[ 4037922 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_5b6c44de3d260d52690cdfdbee689d80_tuple, 5, const_str_plain_changed_port ); Py_INCREF( const_str_plain_changed_port );
    PyTuple_SET_ITEM( const_tuple_5b6c44de3d260d52690cdfdbee689d80_tuple, 6, const_str_plain_changed_scheme ); Py_INCREF( const_str_plain_changed_scheme );
    PyTuple_SET_ITEM( const_tuple_5b6c44de3d260d52690cdfdbee689d80_tuple, 7, const_str_plain_default_port ); Py_INCREF( const_str_plain_default_port );
    const_str_plain_adapters = UNSTREAM_STRING_ASCII( &constant_bin[ 4001838 ], 8, 1 );
    const_tuple_str_plain_CURL_CA_BUNDLE_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CURL_CA_BUNDLE_tuple, 0, const_str_plain_CURL_CA_BUNDLE ); Py_INCREF( const_str_plain_CURL_CA_BUNDLE );
    const_str_digest_92db2e8ed71c2e367d5357b04d0462c4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4037934 ], 12, 0 );
    const_list_dc982aca766e4d1362a255cd6d36b4fb_list = PyList_New( 13 );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 0, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 1, const_str_plain_cookies ); Py_INCREF( const_str_plain_cookies );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 2, const_str_plain_auth ); Py_INCREF( const_str_plain_auth );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 3, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 4, const_str_plain_hooks ); Py_INCREF( const_str_plain_hooks );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 5, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 6, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 7, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    const_str_plain_prefetch = UNSTREAM_STRING_ASCII( &constant_bin[ 4037946 ], 8, 1 );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 8, const_str_plain_prefetch ); Py_INCREF( const_str_plain_prefetch );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 9, const_str_plain_adapters ); Py_INCREF( const_str_plain_adapters );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 10, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    const_str_plain_trust_env = UNSTREAM_STRING_ASCII( &constant_bin[ 4037954 ], 9, 1 );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 11, const_str_plain_trust_env ); Py_INCREF( const_str_plain_trust_env );
    const_str_plain_max_redirects = UNSTREAM_STRING_ASCII( &constant_bin[ 4037963 ], 13, 1 );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 12, const_str_plain_max_redirects ); Py_INCREF( const_str_plain_max_redirects );
    const_str_digest_21406c84cc6f02469836def5bcdcadba = UNSTREAM_STRING_ASCII( &constant_bin[ 4037976 ], 147, 0 );
    const_str_plain_perf_counter = UNSTREAM_STRING_ASCII( &constant_bin[ 4038123 ], 12, 1 );
    const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple = PyTuple_New( 3 );
    const_str_plain_request_hooks = UNSTREAM_STRING_ASCII( &constant_bin[ 4038135 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple, 0, const_str_plain_request_hooks ); Py_INCREF( const_str_plain_request_hooks );
    const_str_plain_session_hooks = UNSTREAM_STRING_ASCII( &constant_bin[ 4038148 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple, 1, const_str_plain_session_hooks ); Py_INCREF( const_str_plain_session_hooks );
    PyTuple_SET_ITEM( const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple, 2, const_str_plain_dict_class ); Py_INCREF( const_str_plain_dict_class );
    const_str_digest_382a6a157ce1707d0f242d5ea1fea71c = UNSTREAM_STRING_ASCII( &constant_bin[ 4038161 ], 13, 0 );
    const_str_digest_83853292c48098773b03eae760dcfe38 = UNSTREAM_STRING_ASCII( &constant_bin[ 4038174 ], 66, 0 );
    const_str_digest_f7f26a899d15b0307bb1388a5bda3892 = UNSTREAM_STRING_ASCII( &constant_bin[ 4038240 ], 11, 0 );
    const_str_digest_368818c648e1111518d4140f8cd94f10 = UNSTREAM_STRING_ASCII( &constant_bin[ 4038251 ], 26, 0 );
    const_str_plain_get_redirect_target = UNSTREAM_STRING_ASCII( &constant_bin[ 4038277 ], 19, 1 );
    const_dict_5a980a96e502e21a57174819267c7344 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_5a980a96e502e21a57174819267c7344, const_str_plain_yield_requests, Py_True );
    assert( PyDict_Size( const_dict_5a980a96e502e21a57174819267c7344 ) == 1 );
    const_tuple_int_pos_80_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_80_none_tuple, 0, const_int_pos_80 ); Py_INCREF( const_int_pos_80 );
    PyTuple_SET_ITEM( const_tuple_int_pos_80_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_f2636f029da6046e540b6721c0c69c64 = UNSTREAM_STRING_ASCII( &constant_bin[ 4038296 ], 38, 0 );
    const_str_plain_SessionRedirectMixin = UNSTREAM_STRING_ASCII( &constant_bin[ 4037352 ], 20, 1 );
    const_str_digest_fa3b2211e965dde050b87ae23cfb152f = UNSTREAM_STRING_ASCII( &constant_bin[ 4038334 ], 16, 0 );
    const_str_digest_48d563b3d6be908aabde89b2dd46bb34 = UNSTREAM_STRING_ASCII( &constant_bin[ 4038350 ], 73, 0 );
    const_str_digest_df29e6ce65bab6565825f33ca253f321 = UNSTREAM_STRING_ASCII( &constant_bin[ 4038423 ], 456, 0 );
    const_str_digest_3773766f3922dc10926506cd67493626 = UNSTREAM_STRING_ASCII( &constant_bin[ 4038879 ], 233, 0 );
    const_str_digest_28eb6d6e3c84195b87f5eda206592417 = UNSTREAM_STRING_ASCII( &constant_bin[ 4039112 ], 229, 0 );
    const_str_plain_get_adapter = UNSTREAM_STRING_ASCII( &constant_bin[ 4039341 ], 11, 1 );
    const_str_digest_5f2af7e954563f0f1b8598cb903357ce = UNSTREAM_STRING_ASCII( &constant_bin[ 4039352 ], 375, 0 );
    const_str_digest_19cf6e4b470974146c094a9eb3c6c9c0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4039727 ], 126, 0 );
    const_str_digest_7e68f1bdd87458491c575c9c8a14f24c = UNSTREAM_STRING_ASCII( &constant_bin[ 4039853 ], 43, 0 );
    const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 3, const_str_plain_json ); Py_INCREF( const_str_plain_json );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_df652bc3c79065c8732d0893d1f77479 = UNSTREAM_STRING_ASCII( &constant_bin[ 4039896 ], 12, 0 );
    const_str_digest_2326510b09c332a083755ce27f812d9d = UNSTREAM_STRING_ASCII( &constant_bin[ 4039908 ], 14, 0 );
    const_str_plain_clock = UNSTREAM_STRING_ASCII( &constant_bin[ 37800 ], 5, 1 );
    const_str_digest_7c06a402579f6f9d9db7f3e04da983fc = UNSTREAM_STRING_ASCII( &constant_bin[ 84061 ], 7, 0 );
    const_str_digest_ab50d4439ade3e74bd04aeb12b9713ae = UNSTREAM_STRING_ASCII( &constant_bin[ 4039922 ], 13, 0 );
    const_str_plain_PATCH = UNSTREAM_STRING_ASCII( &constant_bin[ 4010940 ], 5, 1 );
    const_str_digest_8f1f8a6d2be18d195ed7df0d436d212e = UNSTREAM_STRING_ASCII( &constant_bin[ 4039935 ], 35, 0 );
    const_str_digest_69a73433942a43d30c3208872597fbc4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4039970 ], 15, 0 );
    const_tuple_int_pos_443_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_443_none_tuple, 0, const_int_pos_443 ); Py_INCREF( const_int_pos_443 );
    PyTuple_SET_ITEM( const_tuple_int_pos_443_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_e53d4a974ffbd6783b2c04e911c575f6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4039985 ], 23, 0 );
    const_tuple_cc65bfcb889275d4618cf0078e40b354_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_cc65bfcb889275d4618cf0078e40b354_tuple, 0, const_str_plain_to_key_val_list ); Py_INCREF( const_str_plain_to_key_val_list );
    PyTuple_SET_ITEM( const_tuple_cc65bfcb889275d4618cf0078e40b354_tuple, 1, const_str_plain_default_headers ); Py_INCREF( const_str_plain_default_headers );
    PyTuple_SET_ITEM( const_tuple_cc65bfcb889275d4618cf0078e40b354_tuple, 2, const_str_plain_DEFAULT_PORTS ); Py_INCREF( const_str_plain_DEFAULT_PORTS );
    const_str_plain_rebuild_auth = UNSTREAM_STRING_ASCII( &constant_bin[ 4037466 ], 12, 1 );
    const_tuple_str_plain_HTTPAdapter_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPAdapter_tuple, 0, const_str_plain_HTTPAdapter ); Py_INCREF( const_str_plain_HTTPAdapter );
    const_str_digest_67055a59082a8581b7a2c86a2d1c1f83 = UNSTREAM_STRING_ASCII( &constant_bin[ 4040008 ], 232, 0 );
    const_str_digest_d41fb1dddc6f7cfe3e1d581e7ccdd852 = UNSTREAM_STRING_ASCII( &constant_bin[ 4040240 ], 119, 0 );
    const_str_digest_0186b0786c0e31948d9081496849d709 = UNSTREAM_STRING_ASCII( &constant_bin[ 4040359 ], 70, 0 );
    const_str_plain_env_proxies = UNSTREAM_STRING_ASCII( &constant_bin[ 4040429 ], 11, 1 );
    const_str_plain_resolve_redirects = UNSTREAM_STRING_ASCII( &constant_bin[ 4027594 ], 17, 1 );
    const_str_digest_e46ea1d9ca0677a0f1ae14af39cbbfc2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4040440 ], 34, 0 );
    const_str_digest_b49e9dfe95a484cf32f4e0dcf61e3c53 = UNSTREAM_STRING_ASCII( &constant_bin[ 4040474 ], 20, 0 );
    const_tuple_2c98c4c331bb707fb97c99607664a158_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_2c98c4c331bb707fb97c99607664a158_tuple, 0, const_str_plain_cookielib ); Py_INCREF( const_str_plain_cookielib );
    PyTuple_SET_ITEM( const_tuple_2c98c4c331bb707fb97c99607664a158_tuple, 1, const_str_plain_is_py3 ); Py_INCREF( const_str_plain_is_py3 );
    PyTuple_SET_ITEM( const_tuple_2c98c4c331bb707fb97c99607664a158_tuple, 2, const_str_plain_OrderedDict ); Py_INCREF( const_str_plain_OrderedDict );
    PyTuple_SET_ITEM( const_tuple_2c98c4c331bb707fb97c99607664a158_tuple, 3, const_str_plain_urljoin ); Py_INCREF( const_str_plain_urljoin );
    PyTuple_SET_ITEM( const_tuple_2c98c4c331bb707fb97c99607664a158_tuple, 4, const_str_plain_urlparse ); Py_INCREF( const_str_plain_urlparse );
    PyTuple_SET_ITEM( const_tuple_2c98c4c331bb707fb97c99607664a158_tuple, 5, const_str_plain_Mapping ); Py_INCREF( const_str_plain_Mapping );
    const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple, 0, const_str_digest_3c9527fc53ea2272c2080ca035d6631c ); Py_INCREF( const_str_digest_3c9527fc53ea2272c2080ca035d6631c );
    PyTuple_SET_ITEM( const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple, 1, const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3 ); Py_INCREF( const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3 );
    PyTuple_SET_ITEM( const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple, 2, const_str_digest_2b15502c566d8238f4869c227793bd1a ); Py_INCREF( const_str_digest_2b15502c566d8238f4869c227793bd1a );
    const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_bb0c986a4d44a65e09f2da3af698fc66 = UNSTREAM_STRING_ASCII( &constant_bin[ 4040494 ], 395, 0 );
    const_tuple_56022d833a2133ea98bc9669558d4a13_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 3, const_str_plain_allow_redirects ); Py_INCREF( const_str_plain_allow_redirects );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 4, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 5, const_str_plain_hooks ); Py_INCREF( const_str_plain_hooks );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 6, const_str_plain_adapter ); Py_INCREF( const_str_plain_adapter );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 7, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 8, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 9, const_str_plain_elapsed ); Py_INCREF( const_str_plain_elapsed );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 10, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 11, const_str_plain_gen ); Py_INCREF( const_str_plain_gen );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 12, const_str_plain_history ); Py_INCREF( const_str_plain_history );
    const_str_digest_7905fa3cf6a1b7f0e3f1aa2a48144462 = UNSTREAM_STRING_ASCII( &constant_bin[ 4040889 ], 16, 0 );
    const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple, 2, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    PyTuple_SET_ITEM( const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple, 3, const_str_plain_adapter ); Py_INCREF( const_str_plain_adapter );
    const_str_digest_8b3e93dde92996b29edc87dca601bdd4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4040905 ], 130, 0 );
    const_str_digest_dfcd0fe2f27ce725c44199fb8c6f7973 = UNSTREAM_STRING_ASCII( &constant_bin[ 4041035 ], 36, 0 );
    const_str_digest_0850b94f6eea1bda1db9b25ee4381193 = UNSTREAM_STRING_ASCII( &constant_bin[ 4041071 ], 40, 0 );
    const_str_digest_962cc75eef259550816f5f0e877500ef = UNSTREAM_STRING_ASCII( &constant_bin[ 4041111 ], 12, 0 );
    const_tuple_str_plain_k_str_plain_prefix_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_k_str_plain_prefix_tuple, 0, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_str_plain_k_str_plain_prefix_tuple, 1, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    const_tuple_str_plain_SessionRedirectMixin_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SessionRedirectMixin_tuple_type_object_tuple_tuple, 0, const_str_plain_SessionRedirectMixin ); Py_INCREF( const_str_plain_SessionRedirectMixin );
    PyTuple_SET_ITEM( const_tuple_str_plain_SessionRedirectMixin_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86, const_str_plain_decode_content, Py_False );
    assert( PyDict_Size( const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86 ) == 1 );
    const_str_plain_merge_hooks = UNSTREAM_STRING_ASCII( &constant_bin[ 4041123 ], 11, 1 );
    const_str_digest_6eb3e921e45fc048c38157ffc06e2eea = UNSTREAM_STRING_ASCII( &constant_bin[ 4041134 ], 20, 0 );
    const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple, 0, const_str_plain_Request ); Py_INCREF( const_str_plain_Request );
    PyTuple_SET_ITEM( const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple, 1, const_str_plain_PreparedRequest ); Py_INCREF( const_str_plain_PreparedRequest );
    PyTuple_SET_ITEM( const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple, 2, const_str_plain_DEFAULT_REDIRECT_LIMIT ); Py_INCREF( const_str_plain_DEFAULT_REDIRECT_LIMIT );
    const_tuple_667f897da4eaa203681d962b0447b021_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_667f897da4eaa203681d962b0447b021_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_667f897da4eaa203681d962b0447b021_tuple, 1, const_str_plain_prepared_request ); Py_INCREF( const_str_plain_prepared_request );
    PyTuple_SET_ITEM( const_tuple_667f897da4eaa203681d962b0447b021_tuple, 2, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_667f897da4eaa203681d962b0447b021_tuple, 3, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 2, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 3, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 4, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 5, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 6, const_str_plain_no_proxy ); Py_INCREF( const_str_plain_no_proxy );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 7, const_str_plain_env_proxies ); Py_INCREF( const_str_plain_env_proxies );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 8, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 9, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple, 0, const_str_digest_13971ae58b983978540cbb4bbf3b1360 ); Py_INCREF( const_str_digest_13971ae58b983978540cbb4bbf3b1360 );
    const_str_digest_70e065559513e1162375c7bbb9f9de21 = UNSTREAM_STRING_ASCII( &constant_bin[ 4041154 ], 13, 0 );
    const_tuple_59ffa986ae907cb93da3cb0708948d9b_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4041167 ], 176 );
    const_str_digest_73d6d8215c67828c30ea5a0548aac597 = UNSTREAM_STRING_ASCII( &constant_bin[ 4041343 ], 346, 0 );
    const_str_digest_dde136ad554213eb3ece20209a69ac24 = UNSTREAM_STRING_ASCII( &constant_bin[ 4041689 ], 22, 0 );
    const_str_digest_a1b7979c671004beb348b3acf3fa3833 = UNSTREAM_STRING_ASCII( &constant_bin[ 4041711 ], 19, 0 );
    const_str_digest_0334ac5a65e948ab1a00ac2f5cfe75c1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4041730 ], 169, 0 );
    const_str_plain_rebuild_method = UNSTREAM_STRING_ASCII( &constant_bin[ 4039956 ], 14, 1 );
    const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 0, const_str_plain_requote_uri ); Py_INCREF( const_str_plain_requote_uri );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 1, const_str_plain_get_environ_proxies ); Py_INCREF( const_str_plain_get_environ_proxies );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 2, const_str_plain_get_netrc_auth ); Py_INCREF( const_str_plain_get_netrc_auth );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 3, const_str_plain_should_bypass_proxies ); Py_INCREF( const_str_plain_should_bypass_proxies );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 4, const_str_plain_get_auth_from_url ); Py_INCREF( const_str_plain_get_auth_from_url );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 5, const_str_plain_rewind_body ); Py_INCREF( const_str_plain_rewind_body );
    const_tuple_52aba6df13b8e2e8ba17d2489d63a933_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4041899 ], 205 );
    const_str_digest_3e0ba908deebf0523c3ebb720f614f88 = UNSTREAM_STRING_ASCII( &constant_bin[ 4042104 ], 2049, 0 );
    const_str_digest_147a008155143b0e10b18dcd3be84fb5 = UNSTREAM_STRING_ASCII( &constant_bin[ 4038259 ], 17, 0 );
    const_str_digest_e8d5174c22a95e9965201ef3b005935d = UNSTREAM_STRING_ASCII( &constant_bin[ 4044153 ], 384, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$sessions( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a7dd71989b4f654973766af5982717ee;
static PyCodeObject *codeobj_8f87378c1fe5c17e6291186d82e422e0;
static PyCodeObject *codeobj_0a7526fb5c7928b3e24a08684e327d1d;
static PyCodeObject *codeobj_9be611a0714d2070b01cda9ab6126955;
static PyCodeObject *codeobj_c2ebeebfbf84cfd9ca6c3eadb37c3737;
static PyCodeObject *codeobj_559361b8510a977153a18cff600dd738;
static PyCodeObject *codeobj_2ad20751beca140024f522ac59e7f97b;
static PyCodeObject *codeobj_6f4e9f99af6d4b48ad371e4fff1ea832;
static PyCodeObject *codeobj_57ad141d27ce7ee6b7a2e485d5cd8bad;
static PyCodeObject *codeobj_19740737a79ef2c65c7b8ac03bab2bf7;
static PyCodeObject *codeobj_62d4e1aaf3d402595a3f4705af446542;
static PyCodeObject *codeobj_312284e0ac37b13728f84427268ae50e;
static PyCodeObject *codeobj_2c251a64bcf658c421cc683c0a987c00;
static PyCodeObject *codeobj_89c93d71801f1897d52f3ee7f588c6f8;
static PyCodeObject *codeobj_79b5c72a051e844324ec83d768774c36;
static PyCodeObject *codeobj_111b200b155489f61e7ed89c7c6b5932;
static PyCodeObject *codeobj_af14358177050e80d3ab3fd8db342b9f;
static PyCodeObject *codeobj_009efd8cfb7c38e1657601a95f613a2a;
static PyCodeObject *codeobj_66481eb4d21d5b59fafd135d83450d02;
static PyCodeObject *codeobj_a9492bbab880f1e457316bec4d33eec4;
static PyCodeObject *codeobj_56d28986c1e7bbfdeb665a35a5cac7ed;
static PyCodeObject *codeobj_5413b684b2fc2ff22a7a82a05f1b2673;
static PyCodeObject *codeobj_29d86f83de1d534eb7fcddd6956d0094;
static PyCodeObject *codeobj_e6b285891199cb0e01da2586e28b62cf;
static PyCodeObject *codeobj_7bc40ad62e23397e44fc80db4c38dd89;
static PyCodeObject *codeobj_054888eaf456c72dfe2b870bc9f8c20e;
static PyCodeObject *codeobj_fb045110390fd2999138da9ddcefd9e1;
static PyCodeObject *codeobj_2cf8d1ef62c5e4d6ede165a722d18352;
static PyCodeObject *codeobj_bba2e37927ab45d3eeea43d803f006de;
static PyCodeObject *codeobj_e37288314cccff983eccab6609ffbf3b;
static PyCodeObject *codeobj_993f1053533082b129eaebf9c7d0ec24;
static PyCodeObject *codeobj_385316c0c356d085b618445227bee3c7;
static PyCodeObject *codeobj_1180d5161be01fba696caf667cc02d31;
static PyCodeObject *codeobj_ead4de2350069ce0c969faaf027f196a;
static PyCodeObject *codeobj_bcc11b79615511468244ddf1e96abc29;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_6eb3e921e45fc048c38157ffc06e2eea );
    codeobj_a7dd71989b4f654973766af5982717ee = MAKE_CODEOBJ( module_filename_obj, const_str_angle_dictcontraction, 750, const_tuple_str_plain_attr_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8f87378c1fe5c17e6291186d82e422e0 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 73, const_tuple_str_plain_k_str_plain_v_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0a7526fb5c7928b3e24a08684e327d1d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 668, const_tuple_str_plain_resp_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9be611a0714d2070b01cda9ab6126955 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 744, const_tuple_str_plain_k_str_plain_prefix_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c2ebeebfbf84cfd9ca6c3eadb37c3737 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_368818c648e1111518d4140f8cd94f10, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_559361b8510a977153a18cff600dd738 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Session, 340, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_2ad20751beca140024f522ac59e7f97b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SessionRedirectMixin, 95, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_6f4e9f99af6d4b48ad371e4fff1ea832 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___enter__, 420, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_57ad141d27ce7ee6b7a2e485d5cd8bad = MAKE_CODEOBJ( module_filename_obj, const_str_plain___exit__, 423, const_tuple_str_plain_self_str_plain_args_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_19740737a79ef2c65c7b8ac03bab2bf7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getstate__, 749, const_tuple_str_plain_self_str_plain_state_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_62d4e1aaf3d402595a3f4705af446542 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 365, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_312284e0ac37b13728f84427268ae50e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setstate__, 753, const_tuple_a95b72743b8804bf0e9cb38b968c0b18_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2c251a64bcf658c421cc683c0a987c00 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 733, const_tuple_str_plain_self_str_plain_v_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_89c93d71801f1897d52f3ee7f588c6f8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_delete, 607, const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_79b5c72a051e844324ec83d768774c36 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get, 537, const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_111b200b155489f61e7ed89c7c6b5932 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_adapter, 719, const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_af14358177050e80d3ab3fd8db342b9f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_redirect_target, 97, const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_009efd8cfb7c38e1657601a95f613a2a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_head, 559, const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_66481eb4d21d5b59fafd135d83450d02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_merge_environment_settings, 690, const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a9492bbab880f1e457316bec4d33eec4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_merge_hooks, 80, const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_56d28986c1e7bbfdeb665a35a5cac7ed = MAKE_CODEOBJ( module_filename_obj, const_str_plain_merge_setting, 49, const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5413b684b2fc2ff22a7a82a05f1b2673 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mount, 738, const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_29d86f83de1d534eb7fcddd6956d0094 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_options, 548, const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_e6b285891199cb0e01da2586e28b62cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_patch, 595, const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_7bc40ad62e23397e44fc80db4c38dd89 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_post, 570, const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_054888eaf456c72dfe2b870bc9f8c20e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prepare_request, 426, const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fb045110390fd2999138da9ddcefd9e1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_put, 583, const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_2cf8d1ef62c5e4d6ede165a722d18352 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rebuild_auth, 256, const_tuple_6f9808eb443f87f0ee5bc64e0fba0061_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bba2e37927ab45d3eeea43d803f006de = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rebuild_method, 317, const_tuple_667f897da4eaa203681d962b0447b021_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e37288314cccff983eccab6609ffbf3b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rebuild_proxies, 276, const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_993f1053533082b129eaebf9c7d0ec24 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request, 466, const_tuple_59ffa986ae907cb93da3cb0708948d9b_tuple, 17, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_385316c0c356d085b618445227bee3c7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_redirects, 143, const_tuple_52aba6df13b8e2e8ba17d2489d63a933_tuple, 9, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_1180d5161be01fba696caf667cc02d31 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send, 617, const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_ead4de2350069ce0c969faaf027f196a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_session, 758, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bcc11b79615511468244ddf1e96abc29 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_should_strip_auth, 118, const_tuple_5b6c44de3d260d52690cdfdbee689d80_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_10___enter__(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_11___exit__(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_12_prepare_request(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_13_request( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_14_get(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_15_options(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_16_head(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_17_post( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_18_put( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_19_patch( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_1_merge_setting( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_20_delete(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_21_send(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_22_merge_environment_settings(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_23_get_adapter(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_24_close(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_25_mount(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_26___getstate__(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_27___setstate__(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_28_session(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_2_merge_hooks( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_3_get_redirect_target(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_4_should_strip_auth(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_5_resolve_redirects( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_6_rebuild_auth(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_7_rebuild_proxies(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_8_rebuild_method(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_9___init__(  );


// The module function definitions.
static PyObject *impl_requests$sessions$$$function_1_merge_setting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request_setting = python_pars[ 0 ];
    PyObject *par_session_setting = python_pars[ 1 ];
    PyObject *par_dict_class = python_pars[ 2 ];
    PyObject *var_merged_setting = NULL;
    PyObject *var_none_keys = NULL;
    PyObject *var_key = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_56d28986c1e7bbfdeb665a35a5cac7ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_8f87378c1fe5c17e6291186d82e422e0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_8f87378c1fe5c17e6291186d82e422e0_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_56d28986c1e7bbfdeb665a35a5cac7ed = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_session_setting );
        tmp_compexpr_left_1 = par_session_setting;
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
        CHECK_OBJECT( par_request_setting );
        tmp_return_value = par_request_setting;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_request_setting );
        tmp_compexpr_left_2 = par_request_setting;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT( par_session_setting );
        tmp_return_value = par_session_setting;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_1;
        branch_no_2:;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_56d28986c1e7bbfdeb665a35a5cac7ed, codeobj_56d28986c1e7bbfdeb665a35a5cac7ed, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_56d28986c1e7bbfdeb665a35a5cac7ed = cache_frame_56d28986c1e7bbfdeb665a35a5cac7ed;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_56d28986c1e7bbfdeb665a35a5cac7ed );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_56d28986c1e7bbfdeb665a35a5cac7ed ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_session_setting );
        tmp_isinstance_inst_1 = par_session_setting;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Mapping );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mapping );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Mapping" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( par_request_setting );
        tmp_isinstance_inst_2 = par_request_setting;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Mapping );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mapping );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Mapping" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_2 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_operand_name_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_operand_name_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( par_request_setting );
        tmp_return_value = par_request_setting;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_dict_class );
        tmp_called_name_1 = par_dict_class;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_key_val_list );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_key_val_list );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "to_key_val_list" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 68;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_session_setting );
        tmp_args_element_name_2 = par_session_setting;
        frame_56d28986c1e7bbfdeb665a35a5cac7ed->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_56d28986c1e7bbfdeb665a35a5cac7ed->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_merged_setting == NULL );
        var_merged_setting = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_merged_setting );
        tmp_source_name_1 = var_merged_setting;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_update );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_key_val_list );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_key_val_list );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "to_key_val_list" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_request_setting );
        tmp_args_element_name_4 = par_request_setting;
        frame_56d28986c1e7bbfdeb665a35a5cac7ed->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_56d28986c1e7bbfdeb665a35a5cac7ed->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( var_merged_setting );
            tmp_called_instance_1 = var_merged_setting;
            frame_56d28986c1e7bbfdeb665a35a5cac7ed->m_frame.f_lineno = 73;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "oooooo";
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
        MAKE_OR_REUSE_FRAME( cache_frame_8f87378c1fe5c17e6291186d82e422e0_2, codeobj_8f87378c1fe5c17e6291186d82e422e0, module_requests$sessions, sizeof(void *)+sizeof(void *) );
        frame_8f87378c1fe5c17e6291186d82e422e0_2 = cache_frame_8f87378c1fe5c17e6291186d82e422e0_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_8f87378c1fe5c17e6291186d82e422e0_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_8f87378c1fe5c17e6291186d82e422e0_2 ) == 2 ); // Frame stack

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
                    type_description_2 = "oo";
                    exception_lineno = 73;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


                type_description_2 = "oo";
                exception_lineno = 73;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_7;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


                type_description_2 = "oo";
                exception_lineno = 73;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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

                        type_description_2 = "oo";
                        exception_lineno = 73;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "oo";
                exception_lineno = 73;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
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

        CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_1__source_iter );
        Py_DECREF( tmp_listcomp$tuple_unpack_1__source_iter );
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
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

        Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_1 );
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_2 );
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_1__source_iter );
        Py_DECREF( tmp_listcomp$tuple_unpack_1__source_iter );
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__element_1 );
            tmp_assign_source_9 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_9;
                Py_INCREF( outline_0_var_k );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_1 );
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__element_2 );
            tmp_assign_source_10 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_10;
                Py_INCREF( outline_0_var_v );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_2 );
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( outline_0_var_v );
            tmp_compexpr_left_3 = outline_0_var_v;
            tmp_compexpr_right_3 = Py_None;
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
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( outline_0_var_k );
                tmp_append_value_1 = outline_0_var_k;
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 73;
                    type_description_2 = "oo";
                    goto try_except_handler_3;
                }
            }
            branch_no_4:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_2 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_2 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
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
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
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
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8f87378c1fe5c17e6291186d82e422e0_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_8f87378c1fe5c17e6291186d82e422e0_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8f87378c1fe5c17e6291186d82e422e0_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_8f87378c1fe5c17e6291186d82e422e0_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_8f87378c1fe5c17e6291186d82e422e0_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_8f87378c1fe5c17e6291186d82e422e0_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_8f87378c1fe5c17e6291186d82e422e0_2,
            type_description_2,
            outline_0_var_k,
            outline_0_var_v
        );


        // Release cached frame.
        if ( frame_8f87378c1fe5c17e6291186d82e422e0_2 == cache_frame_8f87378c1fe5c17e6291186d82e422e0_2 )
        {
            Py_DECREF( frame_8f87378c1fe5c17e6291186d82e422e0_2 );
        }
        cache_frame_8f87378c1fe5c17e6291186d82e422e0_2 = NULL;

        assertFrameObject( frame_8f87378c1fe5c17e6291186d82e422e0_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_k );
        outline_0_var_k = NULL;

        Py_XDECREF( outline_0_var_v );
        outline_0_var_v = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_k );
        outline_0_var_k = NULL;

        Py_XDECREF( outline_0_var_v );
        outline_0_var_v = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
        return NULL;
        outline_exception_1:;
        exception_lineno = 73;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert( var_none_keys == NULL );
        var_none_keys = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT( var_none_keys );
        tmp_iter_arg_3 = var_none_keys;
        tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                exception_lineno = 74;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_13 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_13;
            Py_INCREF( var_key );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT( var_merged_setting );
        tmp_delsubscr_target_1 = var_merged_setting;
        CHECK_OBJECT( var_key );
        tmp_delsubscr_subscript_1 = var_key;
        tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56d28986c1e7bbfdeb665a35a5cac7ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_56d28986c1e7bbfdeb665a35a5cac7ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56d28986c1e7bbfdeb665a35a5cac7ed );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_56d28986c1e7bbfdeb665a35a5cac7ed, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_56d28986c1e7bbfdeb665a35a5cac7ed->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_56d28986c1e7bbfdeb665a35a5cac7ed, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_56d28986c1e7bbfdeb665a35a5cac7ed,
        type_description_1,
        par_request_setting,
        par_session_setting,
        par_dict_class,
        var_merged_setting,
        var_none_keys,
        var_key
    );


    // Release cached frame.
    if ( frame_56d28986c1e7bbfdeb665a35a5cac7ed == cache_frame_56d28986c1e7bbfdeb665a35a5cac7ed )
    {
        Py_DECREF( frame_56d28986c1e7bbfdeb665a35a5cac7ed );
    }
    cache_frame_56d28986c1e7bbfdeb665a35a5cac7ed = NULL;

    assertFrameObject( frame_56d28986c1e7bbfdeb665a35a5cac7ed );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT( var_merged_setting );
    tmp_return_value = var_merged_setting;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_request_setting );
    Py_DECREF( par_request_setting );
    par_request_setting = NULL;

    CHECK_OBJECT( (PyObject *)par_session_setting );
    Py_DECREF( par_session_setting );
    par_session_setting = NULL;

    CHECK_OBJECT( (PyObject *)par_dict_class );
    Py_DECREF( par_dict_class );
    par_dict_class = NULL;

    Py_XDECREF( var_merged_setting );
    var_merged_setting = NULL;

    Py_XDECREF( var_none_keys );
    var_none_keys = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_request_setting );
    Py_DECREF( par_request_setting );
    par_request_setting = NULL;

    CHECK_OBJECT( (PyObject *)par_session_setting );
    Py_DECREF( par_session_setting );
    par_session_setting = NULL;

    CHECK_OBJECT( (PyObject *)par_dict_class );
    Py_DECREF( par_dict_class );
    par_dict_class = NULL;

    Py_XDECREF( var_merged_setting );
    var_merged_setting = NULL;

    Py_XDECREF( var_none_keys );
    var_none_keys = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
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


static PyObject *impl_requests$sessions$$$function_2_merge_hooks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request_hooks = python_pars[ 0 ];
    PyObject *par_session_hooks = python_pars[ 1 ];
    PyObject *par_dict_class = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_a9492bbab880f1e457316bec4d33eec4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a9492bbab880f1e457316bec4d33eec4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a9492bbab880f1e457316bec4d33eec4, codeobj_a9492bbab880f1e457316bec4d33eec4, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a9492bbab880f1e457316bec4d33eec4 = cache_frame_a9492bbab880f1e457316bec4d33eec4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a9492bbab880f1e457316bec4d33eec4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a9492bbab880f1e457316bec4d33eec4 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_session_hooks );
        tmp_compexpr_left_1 = par_session_hooks;
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
        CHECK_OBJECT( par_session_hooks );
        tmp_called_instance_1 = par_session_hooks;
        frame_a9492bbab880f1e457316bec4d33eec4->m_frame.f_lineno = 86;
        tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_response_tuple, 0 ) );

        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = PyList_New( 0 );
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( par_request_hooks );
        tmp_return_value = par_request_hooks;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_request_hooks );
        tmp_compexpr_left_3 = par_request_hooks;
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
        CHECK_OBJECT( par_request_hooks );
        tmp_called_instance_2 = par_request_hooks;
        frame_a9492bbab880f1e457316bec4d33eec4->m_frame.f_lineno = 89;
        tmp_compexpr_left_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_response_tuple, 0 ) );

        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = PyList_New( 0 );
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_2 = tmp_or_left_value_2;
        or_end_2:;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT( par_session_hooks );
        tmp_return_value = par_session_hooks;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_request_hooks );
        tmp_args_element_name_1 = par_request_hooks;
        CHECK_OBJECT( par_session_hooks );
        tmp_args_element_name_2 = par_session_hooks;
        CHECK_OBJECT( par_dict_class );
        tmp_args_element_name_3 = par_dict_class;
        frame_a9492bbab880f1e457316bec4d33eec4->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9492bbab880f1e457316bec4d33eec4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9492bbab880f1e457316bec4d33eec4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9492bbab880f1e457316bec4d33eec4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a9492bbab880f1e457316bec4d33eec4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a9492bbab880f1e457316bec4d33eec4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a9492bbab880f1e457316bec4d33eec4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a9492bbab880f1e457316bec4d33eec4,
        type_description_1,
        par_request_hooks,
        par_session_hooks,
        par_dict_class
    );


    // Release cached frame.
    if ( frame_a9492bbab880f1e457316bec4d33eec4 == cache_frame_a9492bbab880f1e457316bec4d33eec4 )
    {
        Py_DECREF( frame_a9492bbab880f1e457316bec4d33eec4 );
    }
    cache_frame_a9492bbab880f1e457316bec4d33eec4 = NULL;

    assertFrameObject( frame_a9492bbab880f1e457316bec4d33eec4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_2_merge_hooks );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_request_hooks );
    Py_DECREF( par_request_hooks );
    par_request_hooks = NULL;

    CHECK_OBJECT( (PyObject *)par_session_hooks );
    Py_DECREF( par_session_hooks );
    par_session_hooks = NULL;

    CHECK_OBJECT( (PyObject *)par_dict_class );
    Py_DECREF( par_dict_class );
    par_dict_class = NULL;

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

    CHECK_OBJECT( (PyObject *)par_request_hooks );
    Py_DECREF( par_request_hooks );
    par_request_hooks = NULL;

    CHECK_OBJECT( (PyObject *)par_session_hooks );
    Py_DECREF( par_session_hooks );
    par_session_hooks = NULL;

    CHECK_OBJECT( (PyObject *)par_dict_class );
    Py_DECREF( par_dict_class );
    par_dict_class = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_2_merge_hooks );
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


static PyObject *impl_requests$sessions$$$function_3_get_redirect_target( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_resp = python_pars[ 1 ];
    PyObject *var_location = NULL;
    struct Nuitka_FrameObject *frame_af14358177050e80d3ab3fd8db342b9f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_af14358177050e80d3ab3fd8db342b9f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_af14358177050e80d3ab3fd8db342b9f, codeobj_af14358177050e80d3ab3fd8db342b9f, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_af14358177050e80d3ab3fd8db342b9f = cache_frame_af14358177050e80d3ab3fd8db342b9f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_af14358177050e80d3ab3fd8db342b9f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_af14358177050e80d3ab3fd8db342b9f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_resp );
        tmp_source_name_1 = par_resp;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_redirect );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 105;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_resp );
            tmp_source_name_2 = par_resp;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_headers );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_str_plain_location;
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_location == NULL );
            var_location = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_mvar_value_1;
            int tmp_truth_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_is_py3 );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py3 );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_py3" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 113;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_mvar_value_1 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;
                type_description_1 = "ooo";
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( var_location );
                tmp_called_instance_1 = var_location;
                frame_af14358177050e80d3ab3fd8db342b9f->m_frame.f_lineno = 114;
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_latin1_tuple, 0 ) );

                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_location;
                    assert( old != NULL );
                    var_location = tmp_assign_source_2;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_native_string );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "to_native_string" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 115;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( var_location );
            tmp_args_element_name_1 = var_location;
            tmp_args_element_name_2 = const_str_plain_utf8;
            frame_af14358177050e80d3ab3fd8db342b9f->m_frame.f_lineno = 115;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af14358177050e80d3ab3fd8db342b9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_af14358177050e80d3ab3fd8db342b9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af14358177050e80d3ab3fd8db342b9f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_af14358177050e80d3ab3fd8db342b9f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_af14358177050e80d3ab3fd8db342b9f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_af14358177050e80d3ab3fd8db342b9f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_af14358177050e80d3ab3fd8db342b9f,
        type_description_1,
        par_self,
        par_resp,
        var_location
    );


    // Release cached frame.
    if ( frame_af14358177050e80d3ab3fd8db342b9f == cache_frame_af14358177050e80d3ab3fd8db342b9f )
    {
        Py_DECREF( frame_af14358177050e80d3ab3fd8db342b9f );
    }
    cache_frame_af14358177050e80d3ab3fd8db342b9f = NULL;

    assertFrameObject( frame_af14358177050e80d3ab3fd8db342b9f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_3_get_redirect_target );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_resp );
    Py_DECREF( par_resp );
    par_resp = NULL;

    Py_XDECREF( var_location );
    var_location = NULL;

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

    CHECK_OBJECT( (PyObject *)par_resp );
    Py_DECREF( par_resp );
    par_resp = NULL;

    Py_XDECREF( var_location );
    var_location = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_3_get_redirect_target );
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


static PyObject *impl_requests$sessions$$$function_4_should_strip_auth( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_old_url = python_pars[ 1 ];
    PyObject *par_new_url = python_pars[ 2 ];
    PyObject *var_old_parsed = NULL;
    PyObject *var_new_parsed = NULL;
    PyObject *var_changed_port = NULL;
    PyObject *var_changed_scheme = NULL;
    PyObject *var_default_port = NULL;
    struct Nuitka_FrameObject *frame_bcc11b79615511468244ddf1e96abc29;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bcc11b79615511468244ddf1e96abc29 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bcc11b79615511468244ddf1e96abc29, codeobj_bcc11b79615511468244ddf1e96abc29, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bcc11b79615511468244ddf1e96abc29 = cache_frame_bcc11b79615511468244ddf1e96abc29;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bcc11b79615511468244ddf1e96abc29 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bcc11b79615511468244ddf1e96abc29 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

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

            exception_lineno = 120;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_old_url );
        tmp_args_element_name_1 = par_old_url;
        frame_bcc11b79615511468244ddf1e96abc29->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_old_parsed == NULL );
        var_old_parsed = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

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

            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_new_url );
        tmp_args_element_name_2 = par_new_url;
        frame_bcc11b79615511468244ddf1e96abc29->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_new_parsed == NULL );
        var_new_parsed = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_old_parsed );
        tmp_source_name_1 = var_old_parsed;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hostname );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_new_parsed );
        tmp_source_name_2 = var_new_parsed;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hostname );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 122;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooooooo";
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
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_4;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( var_old_parsed );
        tmp_source_name_3 = var_old_parsed;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_scheme );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_str_plain_http;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooooo";
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
        CHECK_OBJECT( var_old_parsed );
        tmp_source_name_4 = var_old_parsed;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_port );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_tuple_int_pos_80_none_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_new_parsed );
        tmp_source_name_5 = var_new_parsed;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_scheme );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_str_plain_https;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_new_parsed );
        tmp_source_name_6 = var_new_parsed;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_port );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_tuple_int_pos_443_none_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_5, tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( var_old_parsed );
        tmp_source_name_7 = var_old_parsed;
        tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_port );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_new_parsed );
        tmp_source_name_8 = var_new_parsed;
        tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_port );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 133;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_changed_port == NULL );
        var_changed_port = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( var_old_parsed );
        tmp_source_name_9 = var_old_parsed;
        tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_scheme );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_new_parsed );
        tmp_source_name_10 = var_new_parsed;
        tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_scheme );
        if ( tmp_compexpr_right_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_7 );

            exception_lineno = 134;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        Py_DECREF( tmp_compexpr_right_7 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_changed_scheme == NULL );
        var_changed_scheme = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_12;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_DEFAULT_PORTS );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_PORTS );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_PORTS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 135;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_get );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_old_parsed );
        tmp_source_name_12 = var_old_parsed;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_scheme );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 135;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = Py_None;
        frame_bcc11b79615511468244ddf1e96abc29->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_5, 1, tmp_tuple_element_1 );
        assert( var_default_port == NULL );
        var_default_port = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_operand_name_1;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_source_name_13;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_source_name_14;
        CHECK_OBJECT( var_changed_scheme );
        tmp_operand_name_1 = var_changed_scheme;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_old_parsed );
        tmp_source_name_13 = var_old_parsed;
        tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_port );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_default_port );
        tmp_compexpr_right_8 = var_default_port;
        tmp_res = PySequence_Contains( tmp_compexpr_right_8, tmp_compexpr_left_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_5 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_new_parsed );
        tmp_source_name_14 = var_new_parsed;
        tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_port );
        if ( tmp_compexpr_left_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_default_port );
        tmp_compexpr_right_9 = var_default_port;
        tmp_res = PySequence_Contains( tmp_compexpr_right_9, tmp_compexpr_left_9 );
        Py_DECREF( tmp_compexpr_left_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_5 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_4 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_and_right_value_4 = tmp_and_left_value_5;
        and_end_5:;
        tmp_condition_result_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_3 = tmp_and_left_value_4;
        and_end_4:;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_3:;
    }
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT( var_changed_port );
        tmp_or_left_value_1 = var_changed_port;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "oooooooo";
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
        CHECK_OBJECT( var_changed_scheme );
        tmp_or_right_value_1 = var_changed_scheme;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcc11b79615511468244ddf1e96abc29 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcc11b79615511468244ddf1e96abc29 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcc11b79615511468244ddf1e96abc29 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bcc11b79615511468244ddf1e96abc29, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bcc11b79615511468244ddf1e96abc29->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bcc11b79615511468244ddf1e96abc29, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bcc11b79615511468244ddf1e96abc29,
        type_description_1,
        par_self,
        par_old_url,
        par_new_url,
        var_old_parsed,
        var_new_parsed,
        var_changed_port,
        var_changed_scheme,
        var_default_port
    );


    // Release cached frame.
    if ( frame_bcc11b79615511468244ddf1e96abc29 == cache_frame_bcc11b79615511468244ddf1e96abc29 )
    {
        Py_DECREF( frame_bcc11b79615511468244ddf1e96abc29 );
    }
    cache_frame_bcc11b79615511468244ddf1e96abc29 = NULL;

    assertFrameObject( frame_bcc11b79615511468244ddf1e96abc29 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_4_should_strip_auth );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_old_url );
    Py_DECREF( par_old_url );
    par_old_url = NULL;

    CHECK_OBJECT( (PyObject *)par_new_url );
    Py_DECREF( par_new_url );
    par_new_url = NULL;

    CHECK_OBJECT( (PyObject *)var_old_parsed );
    Py_DECREF( var_old_parsed );
    var_old_parsed = NULL;

    CHECK_OBJECT( (PyObject *)var_new_parsed );
    Py_DECREF( var_new_parsed );
    var_new_parsed = NULL;

    Py_XDECREF( var_changed_port );
    var_changed_port = NULL;

    Py_XDECREF( var_changed_scheme );
    var_changed_scheme = NULL;

    Py_XDECREF( var_default_port );
    var_default_port = NULL;

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

    CHECK_OBJECT( (PyObject *)par_old_url );
    Py_DECREF( par_old_url );
    par_old_url = NULL;

    CHECK_OBJECT( (PyObject *)par_new_url );
    Py_DECREF( par_new_url );
    par_new_url = NULL;

    Py_XDECREF( var_old_parsed );
    var_old_parsed = NULL;

    Py_XDECREF( var_new_parsed );
    var_new_parsed = NULL;

    Py_XDECREF( var_changed_port );
    var_changed_port = NULL;

    Py_XDECREF( var_changed_scheme );
    var_changed_scheme = NULL;

    Py_XDECREF( var_default_port );
    var_default_port = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_4_should_strip_auth );
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


static PyObject *impl_requests$sessions$$$function_5_resolve_redirects( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_resp = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_req = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *par_stream = PyCell_NEW1( python_pars[ 3 ] );
    struct Nuitka_CellObject *par_timeout = PyCell_NEW1( python_pars[ 4 ] );
    struct Nuitka_CellObject *par_verify = PyCell_NEW1( python_pars[ 5 ] );
    struct Nuitka_CellObject *par_cert = PyCell_NEW1( python_pars[ 6 ] );
    struct Nuitka_CellObject *par_proxies = PyCell_NEW1( python_pars[ 7 ] );
    struct Nuitka_CellObject *par_yield_requests = PyCell_NEW1( python_pars[ 8 ] );
    struct Nuitka_CellObject *par_adapter_kwargs = PyCell_NEW1( python_pars[ 9 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_adapter_kwargs;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_cert;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] = par_proxies;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[3] = par_req;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[3] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[4] = par_resp;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[4] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[5] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[5] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[6] = par_stream;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[6] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[7] = par_timeout;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[7] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[8] = par_verify;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[8] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[9] = par_yield_requests;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[9] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_5_resolve_redirects );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_resp );
    Py_DECREF( par_resp );
    par_resp = NULL;

    CHECK_OBJECT( (PyObject *)par_req );
    Py_DECREF( par_req );
    par_req = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_yield_requests );
    Py_DECREF( par_yield_requests );
    par_yield_requests = NULL;

    CHECK_OBJECT( (PyObject *)par_adapter_kwargs );
    Py_DECREF( par_adapter_kwargs );
    par_adapter_kwargs = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_resp );
    Py_DECREF( par_resp );
    par_resp = NULL;

    CHECK_OBJECT( (PyObject *)par_req );
    Py_DECREF( par_req );
    par_req = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_yield_requests );
    Py_DECREF( par_yield_requests );
    par_yield_requests = NULL;

    CHECK_OBJECT( (PyObject *)par_adapter_kwargs );
    Py_DECREF( par_adapter_kwargs );
    par_adapter_kwargs = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_5_resolve_redirects );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_locals {
    PyObject *var_hist;
    PyObject *var_url;
    PyObject *var_previous_fragment;
    PyObject *var_prepared_request;
    PyObject *var_parsed_rurl;
    PyObject *var_parsed;
    PyObject *var_purged_headers;
    PyObject *var_header;
    PyObject *var_headers;
    PyObject *var_rewindable;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
};

static PyObject *requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_locals *generator_heap = (struct requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_hist = NULL;
    generator_heap->var_url = NULL;
    generator_heap->var_previous_fragment = NULL;
    generator_heap->var_prepared_request = NULL;
    generator_heap->var_parsed_rurl = NULL;
    generator_heap->var_parsed = NULL;
    generator_heap->var_purged_headers = NULL;
    generator_heap->var_header = NULL;
    generator_heap->var_headers = NULL;
    generator_heap->var_rewindable = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( generator_heap->var_hist == NULL );
        generator_heap->var_hist = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_385316c0c356d085b618445227bee3c7, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( generator->m_closure[5] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 149;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( generator->m_closure[5] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_redirect_target );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 149;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( generator->m_closure[4] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 149;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[4] );
        generator->m_frame->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 149;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->var_url == NULL );
        generator_heap->var_url = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 150;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        if ( PyCell_GET( generator->m_closure[3] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "req" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 150;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = PyCell_GET( generator->m_closure[3] );
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_url );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 150;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 150;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fragment );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 150;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->var_previous_fragment == NULL );
        generator_heap->var_previous_fragment = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        if ( generator_heap->var_url == NULL )
        {

            generator_heap->exception_type = PyExc_UnboundLocalError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_1 = generator_heap->var_url;
        generator_heap->tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        if ( PyCell_GET( generator->m_closure[3] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "req" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( generator->m_closure[3] );
        generator->m_frame->m_frame.f_lineno = 152;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_prepared_request;
            generator_heap->var_prepared_request = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( generator_heap->var_hist );
        tmp_source_name_4 = generator_heap->var_hist;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 156;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( generator->m_closure[4] ) == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 156;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = PyCell_GET( generator->m_closure[4] );
        generator->m_frame->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 156;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( generator_heap->var_hist );
        tmp_subscribed_name_1 = generator_heap->var_hist;
        tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
        tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( generator->m_closure[4] ) == NULL )
        {
            Py_DECREF( tmp_assattr_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = PyCell_GET( generator->m_closure[4] );
        generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_history, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_source_name_5;
        PyObject *tmp_attribute_value_1;
        if ( PyCell_GET( generator->m_closure[4] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 160;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_5 = PyCell_GET( generator->m_closure[4] );
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_content );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 160;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_attribute_value_1 );
    }
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

    // Preserve existing published exception.
    generator_heap->exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( generator_heap->exception_preserved_type_1 );
    generator_heap->exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( generator_heap->exception_preserved_value_1 );
    generator_heap->exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( generator_heap->exception_preserved_tb_1 );

    if ( generator_heap->exception_keeper_tb_1 == NULL )
    {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_keeper_lineno_1 );
    }
    else if ( generator_heap->exception_keeper_lineno_1 != 0 )
    {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK( generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1 );
    PyException_SetTraceback( generator_heap->exception_keeper_value_1, (PyObject *)generator_heap->exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_mvar_value_3;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ChunkedEncodingError" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 161;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        tmp_compexpr_right_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_ContentDecodingError );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ContentDecodingError );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ContentDecodingError" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 161;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyExc_RuntimeError;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 2, tmp_tuple_element_1 );
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 161;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_call_result_2;
            PyObject *tmp_kw_name_1;
            if ( PyCell_GET( generator->m_closure[4] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 162;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto try_except_handler_3;
            }

            tmp_source_name_7 = PyCell_GET( generator->m_closure[4] );
            tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_raw );
            if ( tmp_source_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 162;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto try_except_handler_3;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_read );
            Py_DECREF( tmp_source_name_6 );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 162;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto try_except_handler_3;
            }
            tmp_kw_name_1 = PyDict_Copy( const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86 );
            generator->m_frame->m_frame.f_lineno = 162;
            tmp_call_result_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 162;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto branch_end_2;
        branch_no_2:;
        generator_heap->tmp_result = RERAISE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
        if (unlikely( generator_heap->tmp_result == false ))
        {
            generator_heap->exception_lineno = 159;
        }

        if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
        generator_heap->type_description_1 = "ccccccccccoooooooooo";
        goto try_except_handler_3;
        branch_end_2:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( generator_heap->exception_preserved_type_1, generator_heap->exception_preserved_value_1, generator_heap->exception_preserved_tb_1 );
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( generator_heap->exception_preserved_type_1, generator_heap->exception_preserved_value_1, generator_heap->exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects );
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_8;
        PyObject *tmp_source_name_9;
        if ( PyCell_GET( generator->m_closure[4] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = PyCell_GET( generator->m_closure[4] );
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_history );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( generator->m_closure[5] ) == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = PyCell_GET( generator->m_closure[5] );
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_max_redirects );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_source_name_10;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_TooManyRedirects );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TooManyRedirects );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TooManyRedirects" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 165;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_4;
            tmp_left_name_1 = const_str_digest_dde136ad554213eb3ece20209a69ac24;
            if ( PyCell_GET( generator->m_closure[5] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 165;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_10 = PyCell_GET( generator->m_closure[5] );
            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_max_redirects );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 165;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 165;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            tmp_dict_key_1 = const_str_plain_response;
            if ( PyCell_GET( generator->m_closure[4] ) == NULL )
            {
                Py_DECREF( tmp_args_name_1 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 165;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_1 = PyCell_GET( generator->m_closure[4] );
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            generator_heap->tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(generator_heap->tmp_res != 0) );
            generator->m_frame->m_frame.f_lineno = 165;
            tmp_raise_type_1 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 165;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            generator_heap->exception_type = tmp_raise_type_1;
            generator_heap->exception_lineno = 165;
            RAISE_EXCEPTION_WITH_TYPE( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        if ( PyCell_GET( generator->m_closure[4] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 168;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = PyCell_GET( generator->m_closure[4] );
        generator->m_frame->m_frame.f_lineno = 168;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 168;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_1;
        if ( generator_heap->var_url == NULL )
        {

            generator_heap->exception_type = PyExc_UnboundLocalError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 171;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = generator_heap->var_url;
        generator->m_frame->m_frame.f_lineno = 171;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple, 0 ) );

        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 171;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_4 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_call_result_4 );

            generator_heap->exception_lineno = 171;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_4 );
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_11;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 172;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_5;
            if ( PyCell_GET( generator->m_closure[4] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 172;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_11 = PyCell_GET( generator->m_closure[4] );
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_url );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 172;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 172;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 172;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->var_parsed_rurl;
                generator_heap->var_parsed_rurl = tmp_assign_source_5;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_12;
            tmp_left_name_2 = const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_native_string );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "to_native_string" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 173;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_6;
            CHECK_OBJECT( generator_heap->var_parsed_rurl );
            tmp_source_name_12 = generator_heap->var_parsed_rurl;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_scheme );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 173;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 173;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 173;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_3 );
            if ( generator_heap->var_url == NULL )
            {
                Py_DECREF( tmp_right_name_2 );
                generator_heap->exception_type = PyExc_UnboundLocalError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 173;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_3 = generator_heap->var_url;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_3 );
            tmp_assign_source_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 173;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->var_url;
                generator_heap->var_url = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_7;
        if ( generator_heap->var_url == NULL )
        {

            generator_heap->exception_type = PyExc_UnboundLocalError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = generator_heap->var_url;
        generator->m_frame->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_parsed;
            generator_heap->var_parsed = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_13;
        int tmp_truth_name_2;
        CHECK_OBJECT( generator_heap->var_parsed );
        tmp_source_name_13 = generator_heap->var_parsed;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_fragment );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 177;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_str_empty;
        generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 177;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        if ( generator_heap->var_previous_fragment == NULL )
        {

            generator_heap->exception_type = PyExc_UnboundLocalError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "previous_fragment" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 177;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE( generator_heap->var_previous_fragment );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 177;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_14;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            CHECK_OBJECT( generator_heap->var_parsed );
            tmp_source_name_14 = generator_heap->var_parsed;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__replace );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 178;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_2 = const_str_plain_fragment;
            if ( generator_heap->var_previous_fragment == NULL )
            {
                Py_DECREF( tmp_called_name_9 );
                generator_heap->exception_type = PyExc_UnboundLocalError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "previous_fragment" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 178;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_2 = generator_heap->var_previous_fragment;
            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
            generator_heap->tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(generator_heap->tmp_res != 0) );
            generator->m_frame->m_frame.f_lineno = 178;
            tmp_assign_source_8 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_9, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 178;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->var_parsed;
                assert( old != NULL );
                generator_heap->var_parsed = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_source_name_15;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_3;
            CHECK_OBJECT( generator_heap->var_parsed );
            tmp_source_name_15 = generator_heap->var_parsed;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_fragment );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 179;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE( tmp_attribute_value_2 );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_attribute_value_2 );

                generator_heap->exception_lineno = 179;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_2 );
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
                PyObject *tmp_assign_source_9;
                PyObject *tmp_source_name_16;
                CHECK_OBJECT( generator_heap->var_parsed );
                tmp_source_name_16 = generator_heap->var_parsed;
                tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_fragment );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 180;
                    generator_heap->type_description_1 = "ccccccccccoooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = generator_heap->var_previous_fragment;
                    generator_heap->var_previous_fragment = tmp_assign_source_9;
                    Py_XDECREF( old );
                }

            }
            branch_no_6:;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( generator_heap->var_parsed );
        tmp_called_instance_4 = generator_heap->var_parsed;
        generator->m_frame->m_frame.f_lineno = 181;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_geturl );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 181;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_url;
            generator_heap->var_url = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( generator_heap->var_parsed );
        tmp_source_name_17 = generator_heap->var_parsed;
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_netloc );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 186;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 186;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = ( generator_heap->tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_18;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_called_name_11;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_9;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urljoin );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urljoin );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urljoin" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 187;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_10 = tmp_mvar_value_8;
            if ( PyCell_GET( generator->m_closure[4] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 187;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_18 = PyCell_GET( generator->m_closure[4] );
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_url );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 187;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_requote_uri );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_requote_uri );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_args_element_name_7 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "requote_uri" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 187;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_11 = tmp_mvar_value_9;
            CHECK_OBJECT( generator_heap->var_url );
            tmp_args_element_name_9 = generator_heap->var_url;
            generator->m_frame->m_frame.f_lineno = 187;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_args_element_name_7 );

                generator_heap->exception_lineno = 187;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 187;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 187;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->var_url;
                assert( old != NULL );
                generator_heap->var_url = tmp_assign_source_11;
                Py_DECREF( old );
            }

        }
        goto branch_end_7;
        branch_no_7:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_12;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_10;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_requote_uri );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_requote_uri );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "requote_uri" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 189;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_12 = tmp_mvar_value_10;
            CHECK_OBJECT( generator_heap->var_url );
            tmp_args_element_name_10 = generator_heap->var_url;
            generator->m_frame->m_frame.f_lineno = 189;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
            }

            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 189;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->var_url;
                assert( old != NULL );
                generator_heap->var_url = tmp_assign_source_12;
                Py_DECREF( old );
            }

        }
        branch_end_7:;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_native_string );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "to_native_string" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 191;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_11;
        CHECK_OBJECT( generator_heap->var_url );
        tmp_args_element_name_11 = generator_heap->var_url;
        generator->m_frame->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 191;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( generator_heap->var_prepared_request );
        tmp_assattr_target_2 = generator_heap->var_prepared_request;
        generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_url, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 191;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_source_name_19;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        if ( PyCell_GET( generator->m_closure[5] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_19 = PyCell_GET( generator->m_closure[5] );
        tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_rebuild_method );
        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( generator_heap->var_prepared_request );
        tmp_args_element_name_12 = generator_heap->var_prepared_request;
        if ( PyCell_GET( generator->m_closure[4] ) == NULL )
        {
            Py_DECREF( tmp_called_name_14 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_13 = PyCell_GET( generator->m_closure[4] );
        generator->m_frame->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_20;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_13;
        if ( PyCell_GET( generator->m_closure[4] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_20 = PyCell_GET( generator->m_closure[4] );
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_status_code );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_4 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_21 = tmp_mvar_value_12;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_temporary_redirect );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_compexpr_right_4, 0, tmp_tuple_element_4 );
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codes" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_22 = tmp_mvar_value_13;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_permanent_redirect );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_right_4 );

            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_compexpr_right_4, 1, tmp_tuple_element_4 );
        generator_heap->tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = ( generator_heap->tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple;
            {
                PyObject *old = generator_heap->var_purged_headers;
                generator_heap->var_purged_headers = tmp_assign_source_13;
                Py_INCREF( generator_heap->var_purged_headers );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( generator_heap->var_purged_headers );
            tmp_iter_arg_1 = generator_heap->var_purged_headers;
            tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 199;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->tmp_for_loop_1__for_iterator;
                generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
            tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_15 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    generator_heap->type_description_1 = "ccccccccccoooooooooo";
                    generator_heap->exception_lineno = 199;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
                generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_15;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
            tmp_assign_source_16 = generator_heap->tmp_for_loop_1__iter_value;
            {
                PyObject *old = generator_heap->var_header;
                generator_heap->var_header = tmp_assign_source_16;
                Py_INCREF( generator_heap->var_header );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_source_name_23;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            CHECK_OBJECT( generator_heap->var_prepared_request );
            tmp_source_name_23 = generator_heap->var_prepared_request;
            tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_headers );
            if ( tmp_called_instance_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 200;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( generator_heap->var_header );
            tmp_args_element_name_14 = generator_heap->var_header;
            tmp_args_element_name_15 = Py_None;
            generator->m_frame->m_frame.f_lineno = 200;
            {
                PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_call_result_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_pop, call_args );
            }

            Py_DECREF( tmp_called_instance_5 );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 200;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 199;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_3;
        // Exception handler code:
        try_except_handler_4:;
        generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
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
        generator_heap->exception_type = generator_heap->exception_keeper_type_3;
        generator_heap->exception_value = generator_heap->exception_keeper_value_3;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
        generator_heap->tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
        Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
        generator_heap->tmp_for_loop_1__for_iterator = NULL;

        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            tmp_assattr_name_3 = Py_None;
            CHECK_OBJECT( generator_heap->var_prepared_request );
            tmp_assattr_target_3 = generator_heap->var_prepared_request;
            generator_heap->tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_body, tmp_assattr_name_3 );
            if ( generator_heap->tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 201;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_source_name_24;
        CHECK_OBJECT( generator_heap->var_prepared_request );
        tmp_source_name_24 = generator_heap->var_prepared_request;
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_headers );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 203;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_headers;
            generator_heap->var_headers = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT( generator_heap->var_headers );
        tmp_delsubscr_target_1 = generator_heap->var_headers;
        tmp_delsubscr_subscript_1 = const_str_plain_Cookie;
        generator_heap->tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 205;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception.
    generator_heap->exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( generator_heap->exception_preserved_type_2 );
    generator_heap->exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( generator_heap->exception_preserved_value_2 );
    generator_heap->exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( generator_heap->exception_preserved_tb_2 );

    if ( generator_heap->exception_keeper_tb_4 == NULL )
    {
        generator_heap->exception_keeper_tb_4 = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_keeper_lineno_4 );
    }
    else if ( generator_heap->exception_keeper_lineno_4 != 0 )
    {
        generator_heap->exception_keeper_tb_4 = ADD_TRACEBACK( generator_heap->exception_keeper_tb_4, generator->m_frame, generator_heap->exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &generator_heap->exception_keeper_type_4, &generator_heap->exception_keeper_value_4, &generator_heap->exception_keeper_tb_4 );
    PyException_SetTraceback( generator_heap->exception_keeper_value_4, (PyObject *)generator_heap->exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &generator_heap->exception_keeper_type_4, &generator_heap->exception_keeper_value_4, &generator_heap->exception_keeper_tb_4 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_5 = PyExc_KeyError;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 206;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto try_except_handler_6;
        }
        tmp_operand_name_3 = ( generator_heap->tmp_res != 0 ) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 206;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_9 = ( generator_heap->tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        generator_heap->tmp_result = RERAISE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
        if (unlikely( generator_heap->tmp_result == false ))
        {
            generator_heap->exception_lineno = 204;
        }

        if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
        generator_heap->type_description_1 = "ccccccccccoooooooooo";
        goto try_except_handler_6;
        branch_no_9:;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( generator_heap->exception_preserved_type_2, generator_heap->exception_preserved_value_2, generator_heap->exception_preserved_tb_2 );
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( generator_heap->exception_preserved_type_2, generator_heap->exception_preserved_value_2, generator_heap->exception_preserved_tb_2 );
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects );
    return NULL;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_source_name_25;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_source_name_26;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "extract_cookies_to_jar" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 212;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_14;
        CHECK_OBJECT( generator_heap->var_prepared_request );
        tmp_source_name_25 = generator_heap->var_prepared_request;
        tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__cookies );
        if ( tmp_args_element_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 212;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( generator->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_16 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "req" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 212;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_17 = PyCell_GET( generator->m_closure[3] );
        if ( PyCell_GET( generator->m_closure[4] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_16 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 212;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_26 = PyCell_GET( generator->m_closure[4] );
        tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_raw );
        if ( tmp_args_element_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_args_element_name_16 );

            generator_heap->exception_lineno = 212;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_args_element_name_16 );
        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_call_result_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 212;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_7 );
    }
    {
        PyObject *tmp_called_name_16;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_source_name_27;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_source_name_28;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_cookies );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_cookies );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_cookies" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_16 = tmp_mvar_value_15;
        CHECK_OBJECT( generator_heap->var_prepared_request );
        tmp_source_name_27 = generator_heap->var_prepared_request;
        tmp_args_element_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain__cookies );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( generator->m_closure[5] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_19 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_28 = PyCell_GET( generator->m_closure[5] );
        tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_cookies );
        if ( tmp_args_element_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_args_element_name_19 );

            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_args_element_name_19 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_call_result_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_8 );
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_source_name_29;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_source_name_30;
        CHECK_OBJECT( generator_heap->var_prepared_request );
        tmp_source_name_29 = generator_heap->var_prepared_request;
        tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_prepare_cookies );
        if ( tmp_called_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( generator_heap->var_prepared_request );
        tmp_source_name_30 = generator_heap->var_prepared_request;
        tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain__cookies );
        if ( tmp_args_element_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_called_name_17 );

            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_args_element_name_21 );
        if ( tmp_call_result_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_9 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_18;
        PyObject *tmp_source_name_31;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        if ( PyCell_GET( generator->m_closure[5] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_31 = PyCell_GET( generator->m_closure[5] );
        tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_rebuild_proxies );
        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( generator_heap->var_prepared_request );
        tmp_args_element_name_22 = generator_heap->var_prepared_request;
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_called_name_18 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "proxies" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_23 = PyCell_GET( generator->m_closure[2] );
        generator->m_frame->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_called_name_18 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( generator->m_closure[2] );
            PyCell_SET( generator->m_closure[2], tmp_assign_source_18 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_source_name_32;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        if ( PyCell_GET( generator->m_closure[5] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_32 = PyCell_GET( generator->m_closure[5] );
        tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_rebuild_auth );
        if ( tmp_called_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( generator_heap->var_prepared_request );
        tmp_args_element_name_24 = generator_heap->var_prepared_request;
        if ( PyCell_GET( generator->m_closure[4] ) == NULL )
        {
            Py_DECREF( tmp_called_name_19 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_25 = PyCell_GET( generator->m_closure[4] );
        generator->m_frame->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25 };
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
        }

        Py_DECREF( tmp_called_name_19 );
        if ( tmp_call_result_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_10 );
    }
    {
        PyObject *tmp_assign_source_19;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_source_name_33;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT( generator_heap->var_prepared_request );
        tmp_source_name_33 = generator_heap->var_prepared_request;
        tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain__body_position );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 224;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = Py_None;
        tmp_and_left_value_2 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? Py_True : Py_False;
        Py_DECREF( tmp_compexpr_left_6 );
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        tmp_compexpr_left_7 = const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
        CHECK_OBJECT( generator_heap->var_headers );
        tmp_compexpr_right_7 = generator_heap->var_headers;
        generator_heap->tmp_res = PySequence_Contains( tmp_compexpr_right_7, tmp_compexpr_left_7 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 225;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( generator_heap->tmp_res == 1 ) ? Py_True : Py_False;
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
        tmp_compexpr_left_8 = const_str_digest_2b15502c566d8238f4869c227793bd1a;
        CHECK_OBJECT( generator_heap->var_headers );
        tmp_compexpr_right_8 = generator_heap->var_headers;
        generator_heap->tmp_res = PySequence_Contains( tmp_compexpr_right_8, tmp_compexpr_left_8 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 225;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( generator_heap->tmp_res == 1 ) ? Py_True : Py_False;
        tmp_and_right_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_2 = tmp_or_left_value_1;
        or_end_1:;
        tmp_assign_source_19 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_assign_source_19 = tmp_and_left_value_2;
        and_end_2:;
        {
            PyObject *old = generator_heap->var_rewindable;
            generator_heap->var_rewindable = tmp_assign_source_19;
            Py_INCREF( generator_heap->var_rewindable );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_4;
        CHECK_OBJECT( generator_heap->var_rewindable );
        tmp_truth_name_4 = CHECK_IF_TRUE( generator_heap->var_rewindable );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 229;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_20;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_call_result_11;
            PyObject *tmp_args_element_name_26;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_rewind_body );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rewind_body );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rewind_body" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 230;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_20 = tmp_mvar_value_16;
            CHECK_OBJECT( generator_heap->var_prepared_request );
            tmp_args_element_name_26 = generator_heap->var_prepared_request;
            generator->m_frame->m_frame.f_lineno = 230;
            {
                PyObject *call_args[] = { tmp_args_element_name_26 };
                tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
            }

            if ( tmp_call_result_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 230;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_11 );
        }
        branch_no_10:;
    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( generator_heap->var_prepared_request );
        tmp_assign_source_20 = generator_heap->var_prepared_request;
        {
            PyObject *old = PyCell_GET( generator->m_closure[3] );
            PyCell_SET( generator->m_closure[3], tmp_assign_source_20 );
            Py_INCREF( tmp_assign_source_20 );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_5;
        if ( PyCell_GET( generator->m_closure[9] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "yield_requests" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 235;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_5 = CHECK_IF_TRUE( PyCell_GET( generator->m_closure[9] ) );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 235;
            generator_heap->type_description_1 = "ccccccccccoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_expression_name_1;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
            CHECK_OBJECT( PyCell_GET( generator->m_closure[3] ) );
            tmp_expression_name_1 = PyCell_GET( generator->m_closure[3] );
            Py_INCREF( tmp_expression_name_1 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_11, sizeof(nuitka_bool), &tmp_truth_name_5, sizeof(int), NULL );
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_11, sizeof(nuitka_bool), &tmp_truth_name_5, sizeof(int), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 236;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_yield_result_1 = yield_return_value;
        }
        goto branch_end_11;
        branch_no_11:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_34;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_dircall_arg3_1;
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
            PyObject *tmp_dircall_arg4_1;
            if ( PyCell_GET( generator->m_closure[5] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 239;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_34 = PyCell_GET( generator->m_closure[5] );
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_send );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 239;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( generator->m_closure[3] ) );
            tmp_tuple_element_5 = PyCell_GET( generator->m_closure[3] );
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_5 );
            tmp_dict_key_3 = const_str_plain_stream;
            if ( PyCell_GET( generator->m_closure[6] ) == NULL )
            {
                Py_DECREF( tmp_dircall_arg1_1 );
                Py_DECREF( tmp_dircall_arg2_1 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stream" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 241;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_3 = PyCell_GET( generator->m_closure[6] );
            tmp_dircall_arg3_1 = _PyDict_NewPresized( 6 );
            generator_heap->tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(generator_heap->tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_timeout;
            if ( PyCell_GET( generator->m_closure[7] ) == NULL )
            {
                Py_DECREF( tmp_dircall_arg1_1 );
                Py_DECREF( tmp_dircall_arg2_1 );
                Py_DECREF( tmp_dircall_arg3_1 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "timeout" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 242;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_4 = PyCell_GET( generator->m_closure[7] );
            generator_heap->tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(generator_heap->tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_verify;
            if ( PyCell_GET( generator->m_closure[8] ) == NULL )
            {
                Py_DECREF( tmp_dircall_arg1_1 );
                Py_DECREF( tmp_dircall_arg2_1 );
                Py_DECREF( tmp_dircall_arg3_1 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "verify" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 243;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_5 = PyCell_GET( generator->m_closure[8] );
            generator_heap->tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(generator_heap->tmp_res != 0) );
            tmp_dict_key_6 = const_str_plain_cert;
            if ( PyCell_GET( generator->m_closure[1] ) == NULL )
            {
                Py_DECREF( tmp_dircall_arg1_1 );
                Py_DECREF( tmp_dircall_arg2_1 );
                Py_DECREF( tmp_dircall_arg3_1 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cert" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 244;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_6 = PyCell_GET( generator->m_closure[1] );
            generator_heap->tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(generator_heap->tmp_res != 0) );
            tmp_dict_key_7 = const_str_plain_proxies;
            CHECK_OBJECT( PyCell_GET( generator->m_closure[2] ) );
            tmp_dict_value_7 = PyCell_GET( generator->m_closure[2] );
            generator_heap->tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(generator_heap->tmp_res != 0) );
            tmp_dict_key_8 = const_str_plain_allow_redirects;
            tmp_dict_value_8 = Py_False;
            generator_heap->tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(generator_heap->tmp_res != 0) );
            if ( PyCell_GET( generator->m_closure[0] ) == NULL )
            {
                Py_DECREF( tmp_dircall_arg1_1 );
                Py_DECREF( tmp_dircall_arg2_1 );
                Py_DECREF( tmp_dircall_arg3_1 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "adapter_kwargs" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 247;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg4_1 = PyCell_GET( generator->m_closure[0] );
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_assign_source_21 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 239;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( generator->m_closure[4] );
                PyCell_SET( generator->m_closure[4], tmp_assign_source_21 );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_21;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_call_result_12;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_source_name_35;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_args_element_name_29;
            PyObject *tmp_source_name_36;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "extract_cookies_to_jar" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 250;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_21 = tmp_mvar_value_17;
            if ( PyCell_GET( generator->m_closure[5] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 250;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_35 = PyCell_GET( generator->m_closure[5] );
            tmp_args_element_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_cookies );
            if ( tmp_args_element_name_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 250;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( generator_heap->var_prepared_request );
            tmp_args_element_name_28 = generator_heap->var_prepared_request;
            CHECK_OBJECT( PyCell_GET( generator->m_closure[4] ) );
            tmp_source_name_36 = PyCell_GET( generator->m_closure[4] );
            tmp_args_element_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_raw );
            if ( tmp_args_element_name_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_args_element_name_27 );

                generator_heap->exception_lineno = 250;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 250;
            {
                PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29 };
                tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_21, call_args );
            }

            Py_DECREF( tmp_args_element_name_27 );
            Py_DECREF( tmp_args_element_name_29 );
            if ( tmp_call_result_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 250;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_12 );
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_30;
            if ( PyCell_GET( generator->m_closure[5] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 253;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = PyCell_GET( generator->m_closure[5] );
            CHECK_OBJECT( PyCell_GET( generator->m_closure[4] ) );
            tmp_args_element_name_30 = PyCell_GET( generator->m_closure[4] );
            generator->m_frame->m_frame.f_lineno = 253;
            {
                PyObject *call_args[] = { tmp_args_element_name_30 };
                tmp_assign_source_22 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_get_redirect_target, call_args );
            }

            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 253;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->var_url;
                assert( old != NULL );
                generator_heap->var_url = tmp_assign_source_22;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_expression_name_2;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
            CHECK_OBJECT( PyCell_GET( generator->m_closure[4] ) );
            tmp_expression_name_2 = PyCell_GET( generator->m_closure[4] );
            Py_INCREF( tmp_expression_name_2 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_11, sizeof(nuitka_bool), &tmp_truth_name_5, sizeof(int), NULL );
            generator->m_yield_return_index = 2;
            return tmp_expression_name_2;
            yield_return_2:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_11, sizeof(nuitka_bool), &tmp_truth_name_5, sizeof(int), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 254;
                generator_heap->type_description_1 = "ccccccccccoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_yield_result_2 = yield_return_value;
        }
        branch_end_11:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 151;
        generator_heap->type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

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
            generator->m_closure[5],
            generator->m_closure[4],
            generator->m_closure[3],
            generator->m_closure[6],
            generator->m_closure[7],
            generator->m_closure[8],
            generator->m_closure[1],
            generator->m_closure[2],
            generator->m_closure[9],
            generator->m_closure[0],
            generator_heap->var_hist,
            generator_heap->var_url,
            generator_heap->var_previous_fragment,
            generator_heap->var_prepared_request,
            generator_heap->var_parsed_rurl,
            generator_heap->var_parsed,
            generator_heap->var_purged_headers,
            generator_heap->var_header,
            generator_heap->var_headers,
            generator_heap->var_rewindable
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
    goto try_end_6;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)generator_heap->var_hist );
    Py_DECREF( generator_heap->var_hist );
    generator_heap->var_hist = NULL;

    Py_XDECREF( generator_heap->var_url );
    generator_heap->var_url = NULL;

    Py_XDECREF( generator_heap->var_previous_fragment );
    generator_heap->var_previous_fragment = NULL;

    Py_XDECREF( generator_heap->var_prepared_request );
    generator_heap->var_prepared_request = NULL;

    Py_XDECREF( generator_heap->var_parsed_rurl );
    generator_heap->var_parsed_rurl = NULL;

    Py_XDECREF( generator_heap->var_parsed );
    generator_heap->var_parsed = NULL;

    Py_XDECREF( generator_heap->var_purged_headers );
    generator_heap->var_purged_headers = NULL;

    Py_XDECREF( generator_heap->var_header );
    generator_heap->var_header = NULL;

    Py_XDECREF( generator_heap->var_headers );
    generator_heap->var_headers = NULL;

    Py_XDECREF( generator_heap->var_rewindable );
    generator_heap->var_rewindable = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)generator_heap->var_hist );
    Py_DECREF( generator_heap->var_hist );
    generator_heap->var_hist = NULL;

    Py_XDECREF( generator_heap->var_url );
    generator_heap->var_url = NULL;

    Py_XDECREF( generator_heap->var_previous_fragment );
    generator_heap->var_previous_fragment = NULL;

    Py_XDECREF( generator_heap->var_prepared_request );
    generator_heap->var_prepared_request = NULL;

    Py_XDECREF( generator_heap->var_parsed_rurl );
    generator_heap->var_parsed_rurl = NULL;

    Py_XDECREF( generator_heap->var_parsed );
    generator_heap->var_parsed = NULL;

    Py_XDECREF( generator_heap->var_purged_headers );
    generator_heap->var_purged_headers = NULL;

    Py_XDECREF( generator_heap->var_header );
    generator_heap->var_header = NULL;

    Py_XDECREF( generator_heap->var_headers );
    generator_heap->var_headers = NULL;

    Py_XDECREF( generator_heap->var_rewindable );
    generator_heap->var_rewindable = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_maker( void )
{
    return Nuitka_Generator_New(
        requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_context,
        module_requests$sessions,
        const_str_plain_resolve_redirects,
#if PYTHON_VERSION >= 350
        const_str_digest_f2636f029da6046e540b6721c0c69c64,
#endif
        codeobj_385316c0c356d085b618445227bee3c7,
        10,
        sizeof(struct requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_locals)
    );
}


static PyObject *impl_requests$sessions$$$function_6_rebuild_auth( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prepared_request = python_pars[ 1 ];
    PyObject *par_response = python_pars[ 2 ];
    PyObject *var_headers = NULL;
    PyObject *var_url = NULL;
    PyObject *var_new_auth = NULL;
    struct Nuitka_FrameObject *frame_2cf8d1ef62c5e4d6ede165a722d18352;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2cf8d1ef62c5e4d6ede165a722d18352 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2cf8d1ef62c5e4d6ede165a722d18352, codeobj_2cf8d1ef62c5e4d6ede165a722d18352, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2cf8d1ef62c5e4d6ede165a722d18352 = cache_frame_2cf8d1ef62c5e4d6ede165a722d18352;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2cf8d1ef62c5e4d6ede165a722d18352 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2cf8d1ef62c5e4d6ede165a722d18352 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_prepared_request );
        tmp_source_name_1 = par_prepared_request;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_headers == NULL );
        var_headers = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_prepared_request );
        tmp_source_name_2 = par_prepared_request;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_url == NULL );
        var_url = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        tmp_compexpr_left_1 = const_str_plain_Authorization;
        CHECK_OBJECT( var_headers );
        tmp_compexpr_right_1 = var_headers;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_source_name_3 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_should_strip_auth );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_response );
        tmp_source_name_5 = par_response;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_request );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_url );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_url );
        tmp_args_element_name_2 = var_url;
        frame_2cf8d1ef62c5e4d6ede165a722d18352->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        {
            PyObject *tmp_delsubscr_target_1;
            PyObject *tmp_delsubscr_subscript_1;
            CHECK_OBJECT( var_headers );
            tmp_delsubscr_target_1 = var_headers;
            tmp_delsubscr_subscript_1 = const_str_plain_Authorization;
            tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_trust_env );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_netrc_auth );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_netrc_auth );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_netrc_auth" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_url );
        tmp_args_element_name_3 = var_url;
        frame_2cf8d1ef62c5e4d6ede165a722d18352->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_3 = Py_None;
        Py_INCREF( tmp_assign_source_3 );
        condexpr_end_1:;
        assert( var_new_auth == NULL );
        var_new_auth = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_new_auth );
        tmp_compexpr_left_2 = var_new_auth;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( par_prepared_request );
            tmp_called_instance_1 = par_prepared_request;
            CHECK_OBJECT( var_new_auth );
            tmp_args_element_name_4 = var_new_auth;
            frame_2cf8d1ef62c5e4d6ede165a722d18352->m_frame.f_lineno = 272;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_prepare_auth, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cf8d1ef62c5e4d6ede165a722d18352 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cf8d1ef62c5e4d6ede165a722d18352 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2cf8d1ef62c5e4d6ede165a722d18352, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2cf8d1ef62c5e4d6ede165a722d18352->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2cf8d1ef62c5e4d6ede165a722d18352, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2cf8d1ef62c5e4d6ede165a722d18352,
        type_description_1,
        par_self,
        par_prepared_request,
        par_response,
        var_headers,
        var_url,
        var_new_auth
    );


    // Release cached frame.
    if ( frame_2cf8d1ef62c5e4d6ede165a722d18352 == cache_frame_2cf8d1ef62c5e4d6ede165a722d18352 )
    {
        Py_DECREF( frame_2cf8d1ef62c5e4d6ede165a722d18352 );
    }
    cache_frame_2cf8d1ef62c5e4d6ede165a722d18352 = NULL;

    assertFrameObject( frame_2cf8d1ef62c5e4d6ede165a722d18352 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_6_rebuild_auth );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_prepared_request );
    Py_DECREF( par_prepared_request );
    par_prepared_request = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    CHECK_OBJECT( (PyObject *)var_headers );
    Py_DECREF( var_headers );
    var_headers = NULL;

    CHECK_OBJECT( (PyObject *)var_url );
    Py_DECREF( var_url );
    var_url = NULL;

    CHECK_OBJECT( (PyObject *)var_new_auth );
    Py_DECREF( var_new_auth );
    var_new_auth = NULL;

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

    CHECK_OBJECT( (PyObject *)par_prepared_request );
    Py_DECREF( par_prepared_request );
    par_prepared_request = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_new_auth );
    var_new_auth = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_6_rebuild_auth );
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


static PyObject *impl_requests$sessions$$$function_7_rebuild_proxies( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prepared_request = python_pars[ 1 ];
    PyObject *par_proxies = python_pars[ 2 ];
    PyObject *var_headers = NULL;
    PyObject *var_url = NULL;
    PyObject *var_scheme = NULL;
    PyObject *var_new_proxies = NULL;
    PyObject *var_no_proxy = NULL;
    PyObject *var_bypass_proxy = NULL;
    PyObject *var_environ_proxies = NULL;
    PyObject *var_proxy = NULL;
    PyObject *var_username = NULL;
    PyObject *var_password = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e37288314cccff983eccab6609ffbf3b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    static struct Nuitka_FrameObject *cache_frame_e37288314cccff983eccab6609ffbf3b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_proxies );
        tmp_compexpr_left_1 = par_proxies;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( par_proxies );
        tmp_assign_source_1 = par_proxies;
        Py_INCREF( tmp_assign_source_1 );
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_1 = PyDict_New();
        condexpr_end_1:;
        {
            PyObject *old = par_proxies;
            assert( old != NULL );
            par_proxies = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e37288314cccff983eccab6609ffbf3b, codeobj_e37288314cccff983eccab6609ffbf3b, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e37288314cccff983eccab6609ffbf3b = cache_frame_e37288314cccff983eccab6609ffbf3b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e37288314cccff983eccab6609ffbf3b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e37288314cccff983eccab6609ffbf3b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_prepared_request );
        tmp_source_name_1 = par_prepared_request;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_headers == NULL );
        var_headers = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_prepared_request );
        tmp_source_name_2 = par_prepared_request;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_url == NULL );
        var_url = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

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

            exception_lineno = 291;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_url );
        tmp_args_element_name_1 = var_url;
        frame_e37288314cccff983eccab6609ffbf3b->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_scheme );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_scheme == NULL );
        var_scheme = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_proxies );
        tmp_called_instance_1 = par_proxies;
        frame_e37288314cccff983eccab6609ffbf3b->m_frame.f_lineno = 292;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_new_proxies == NULL );
        var_new_proxies = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_proxies );
        tmp_called_instance_2 = par_proxies;
        frame_e37288314cccff983eccab6609ffbf3b->m_frame.f_lineno = 293;
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_no_proxy_tuple, 0 ) );

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_no_proxy == NULL );
        var_no_proxy = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_should_bypass_proxies );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_should_bypass_proxies );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "should_bypass_proxies" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 295;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_url );
        tmp_tuple_element_1 = var_url;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_no_proxy;
        CHECK_OBJECT( var_no_proxy );
        tmp_dict_value_1 = var_no_proxy;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_e37288314cccff983eccab6609ffbf3b->m_frame.f_lineno = 295;
        tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_bypass_proxy == NULL );
        var_bypass_proxy = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_trust_env );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 296;
            type_description_1 = "ooooooooooooo";
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
        CHECK_OBJECT( var_bypass_proxy );
        tmp_operand_name_1 = var_bypass_proxy;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooooooooooooo";
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
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_environ_proxies );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_environ_proxies );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_environ_proxies" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 297;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_url );
            tmp_tuple_element_2 = var_url;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_2 = const_str_plain_no_proxy;
            CHECK_OBJECT( var_no_proxy );
            tmp_dict_value_2 = var_no_proxy;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_e37288314cccff983eccab6609ffbf3b->m_frame.f_lineno = 297;
            tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 297;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_environ_proxies == NULL );
            var_environ_proxies = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( var_environ_proxies );
            tmp_source_name_5 = var_environ_proxies;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 299;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_scheme );
            tmp_args_element_name_2 = var_scheme;
            CHECK_OBJECT( var_environ_proxies );
            tmp_called_instance_3 = var_environ_proxies;
            frame_e37288314cccff983eccab6609ffbf3b->m_frame.f_lineno = 299;
            tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_all_tuple, 0 ) );

            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 299;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_e37288314cccff983eccab6609ffbf3b->m_frame.f_lineno = 299;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 299;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_proxy == NULL );
            var_proxy = tmp_assign_source_9;
        }
        {
            nuitka_bool tmp_condition_result_3;
            int tmp_truth_name_2;
            CHECK_OBJECT( var_proxy );
            tmp_truth_name_2 = CHECK_IF_TRUE( var_proxy );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 301;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_instance_4;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                CHECK_OBJECT( var_new_proxies );
                tmp_called_instance_4 = var_new_proxies;
                CHECK_OBJECT( var_scheme );
                tmp_args_element_name_4 = var_scheme;
                CHECK_OBJECT( var_proxy );
                tmp_args_element_name_5 = var_proxy;
                frame_e37288314cccff983eccab6609ffbf3b->m_frame.f_lineno = 302;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_setdefault, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 302;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
        CHECK_OBJECT( var_headers );
        tmp_compexpr_right_2 = var_headers;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_delsubscr_target_1;
            PyObject *tmp_delsubscr_subscript_1;
            CHECK_OBJECT( var_headers );
            tmp_delsubscr_target_1 = var_headers;
            tmp_delsubscr_subscript_1 = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
            tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_3:;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_auth_from_url" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 308;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_5 = tmp_mvar_value_4;
        CHECK_OBJECT( var_new_proxies );
        tmp_subscribed_name_1 = var_new_proxies;
        CHECK_OBJECT( var_scheme );
        tmp_subscript_name_1 = var_scheme;
        tmp_args_element_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        frame_e37288314cccff983eccab6609ffbf3b->m_frame.f_lineno = 308;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_11 == NULL )
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 308;
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_12 == NULL )
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 308;
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 308;
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

            type_description_1 = "ooooooooooooo";
            exception_lineno = 308;
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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        assert( var_username == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_username = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        assert( var_password == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_password = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_e37288314cccff983eccab6609ffbf3b, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_e37288314cccff983eccab6609ffbf3b, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 309;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
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
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = const_tuple_none_none_tuple;
            tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
            assert( !(tmp_assign_source_15 == NULL) );
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
            if ( tmp_assign_source_16 == NULL )
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


                type_description_1 = "ooooooooooooo";
                exception_lineno = 310;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
            if ( tmp_assign_source_17 == NULL )
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


                type_description_1 = "ooooooooooooo";
                exception_lineno = 310;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_6;
        // End of try:
        try_end_4:;
        goto try_end_5;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_5;
        // End of try:
        try_end_5:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;
            assert( var_username == NULL );
            Py_INCREF( tmp_assign_source_18 );
            var_username = tmp_assign_source_18;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;
            assert( var_password == NULL );
            Py_INCREF( tmp_assign_source_19 );
            var_password = tmp_assign_source_19;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        goto branch_end_4;
        branch_no_4:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 307;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_e37288314cccff983eccab6609ffbf3b->m_frame) frame_e37288314cccff983eccab6609ffbf3b->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
        branch_end_4:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_5:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_7_rebuild_proxies );
    return NULL;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_3;
        int tmp_truth_name_4;
        if ( var_username == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 312;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE( var_username );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
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
        if ( var_password == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 312;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE( var_password );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_6 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain__basic_auth_str );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_auth_str );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_basic_auth_str" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 313;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_5;
            if ( var_username == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 313;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_7 = var_username;
            if ( var_password == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 313;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_8 = var_password;
            frame_e37288314cccff983eccab6609ffbf3b->m_frame.f_lineno = 313;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_headers );
            tmp_ass_subscribed_1 = var_headers;
            tmp_ass_subscript_1 = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e37288314cccff983eccab6609ffbf3b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e37288314cccff983eccab6609ffbf3b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e37288314cccff983eccab6609ffbf3b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e37288314cccff983eccab6609ffbf3b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e37288314cccff983eccab6609ffbf3b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e37288314cccff983eccab6609ffbf3b,
        type_description_1,
        par_self,
        par_prepared_request,
        par_proxies,
        var_headers,
        var_url,
        var_scheme,
        var_new_proxies,
        var_no_proxy,
        var_bypass_proxy,
        var_environ_proxies,
        var_proxy,
        var_username,
        var_password
    );


    // Release cached frame.
    if ( frame_e37288314cccff983eccab6609ffbf3b == cache_frame_e37288314cccff983eccab6609ffbf3b )
    {
        Py_DECREF( frame_e37288314cccff983eccab6609ffbf3b );
    }
    cache_frame_e37288314cccff983eccab6609ffbf3b = NULL;

    assertFrameObject( frame_e37288314cccff983eccab6609ffbf3b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_new_proxies );
    tmp_return_value = var_new_proxies;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_7_rebuild_proxies );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_prepared_request );
    Py_DECREF( par_prepared_request );
    par_prepared_request = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)var_headers );
    Py_DECREF( var_headers );
    var_headers = NULL;

    CHECK_OBJECT( (PyObject *)var_url );
    Py_DECREF( var_url );
    var_url = NULL;

    CHECK_OBJECT( (PyObject *)var_scheme );
    Py_DECREF( var_scheme );
    var_scheme = NULL;

    CHECK_OBJECT( (PyObject *)var_new_proxies );
    Py_DECREF( var_new_proxies );
    var_new_proxies = NULL;

    CHECK_OBJECT( (PyObject *)var_no_proxy );
    Py_DECREF( var_no_proxy );
    var_no_proxy = NULL;

    CHECK_OBJECT( (PyObject *)var_bypass_proxy );
    Py_DECREF( var_bypass_proxy );
    var_bypass_proxy = NULL;

    Py_XDECREF( var_environ_proxies );
    var_environ_proxies = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    Py_XDECREF( var_username );
    var_username = NULL;

    Py_XDECREF( var_password );
    var_password = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_prepared_request );
    Py_DECREF( par_prepared_request );
    par_prepared_request = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_new_proxies );
    var_new_proxies = NULL;

    Py_XDECREF( var_no_proxy );
    var_no_proxy = NULL;

    Py_XDECREF( var_bypass_proxy );
    var_bypass_proxy = NULL;

    Py_XDECREF( var_environ_proxies );
    var_environ_proxies = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    Py_XDECREF( var_username );
    var_username = NULL;

    Py_XDECREF( var_password );
    var_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_7_rebuild_proxies );
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


static PyObject *impl_requests$sessions$$$function_8_rebuild_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prepared_request = python_pars[ 1 ];
    PyObject *par_response = python_pars[ 2 ];
    PyObject *var_method = NULL;
    struct Nuitka_FrameObject *frame_bba2e37927ab45d3eeea43d803f006de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_bba2e37927ab45d3eeea43d803f006de = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bba2e37927ab45d3eeea43d803f006de, codeobj_bba2e37927ab45d3eeea43d803f006de, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bba2e37927ab45d3eeea43d803f006de = cache_frame_bba2e37927ab45d3eeea43d803f006de;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bba2e37927ab45d3eeea43d803f006de );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bba2e37927ab45d3eeea43d803f006de ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_prepared_request );
        tmp_source_name_1 = par_prepared_request;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_method );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_method == NULL );
        var_method = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_response );
        tmp_source_name_2 = par_response;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_status_code );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 324;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_see_other );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 324;
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


            exception_lineno = 324;
            type_description_1 = "oooo";
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
        CHECK_OBJECT( var_method );
        tmp_compexpr_left_2 = var_method;
        tmp_compexpr_right_2 = const_str_plain_HEAD;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "oooo";
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_str_plain_GET;
            {
                PyObject *old = var_method;
                assert( old != NULL );
                var_method = tmp_assign_source_2;
                Py_INCREF( var_method );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_response );
        tmp_source_name_4 = par_response;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_status_code );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_2;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_found );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( var_method );
        tmp_compexpr_left_4 = var_method;
        tmp_compexpr_right_4 = const_str_plain_HEAD;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_str_plain_GET;
            {
                PyObject *old = var_method;
                assert( old != NULL );
                var_method = tmp_assign_source_3;
                Py_INCREF( var_method );
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_response );
        tmp_source_name_6 = par_response;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_status_code );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_3;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_moved );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        if ( var_method == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_6 = var_method;
        tmp_compexpr_right_6 = const_str_plain_POST;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_3 = tmp_and_left_value_3;
        and_end_3:;
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
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_str_plain_GET;
            {
                PyObject *old = var_method;
                var_method = tmp_assign_source_4;
                Py_INCREF( var_method );
                Py_XDECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        if ( var_method == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_1 = var_method;
        CHECK_OBJECT( par_prepared_request );
        tmp_assattr_target_1 = par_prepared_request;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_method, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bba2e37927ab45d3eeea43d803f006de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bba2e37927ab45d3eeea43d803f006de );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bba2e37927ab45d3eeea43d803f006de, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bba2e37927ab45d3eeea43d803f006de->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bba2e37927ab45d3eeea43d803f006de, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bba2e37927ab45d3eeea43d803f006de,
        type_description_1,
        par_self,
        par_prepared_request,
        par_response,
        var_method
    );


    // Release cached frame.
    if ( frame_bba2e37927ab45d3eeea43d803f006de == cache_frame_bba2e37927ab45d3eeea43d803f006de )
    {
        Py_DECREF( frame_bba2e37927ab45d3eeea43d803f006de );
    }
    cache_frame_bba2e37927ab45d3eeea43d803f006de = NULL;

    assertFrameObject( frame_bba2e37927ab45d3eeea43d803f006de );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_8_rebuild_method );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_prepared_request );
    Py_DECREF( par_prepared_request );
    par_prepared_request = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

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

    CHECK_OBJECT( (PyObject *)par_prepared_request );
    Py_DECREF( par_prepared_request );
    par_prepared_request = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_8_rebuild_method );
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


static PyObject *impl_requests$sessions$$$function_9___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_62d4e1aaf3d402595a3f4705af446542;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_62d4e1aaf3d402595a3f4705af446542 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_62d4e1aaf3d402595a3f4705af446542, codeobj_62d4e1aaf3d402595a3f4705af446542, module_requests$sessions, sizeof(void *) );
    frame_62d4e1aaf3d402595a3f4705af446542 = cache_frame_62d4e1aaf3d402595a3f4705af446542;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_62d4e1aaf3d402595a3f4705af446542 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_62d4e1aaf3d402595a3f4705af446542 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_default_headers );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_headers );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_headers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 370;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_62d4e1aaf3d402595a3f4705af446542->m_frame.f_lineno = 370;
        tmp_assattr_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_headers, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_auth, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = PyDict_New();
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_proxies, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_assattr_target_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_default_hooks );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_hooks );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_hooks" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 382;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        frame_62d4e1aaf3d402595a3f4705af446542->m_frame.f_lineno = 382;
        tmp_assattr_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_assattr_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_hooks, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = PyDict_New();
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_params, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = Py_False;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_stream, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_name_7 = Py_True;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_verify, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_cert, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_assattr_target_9;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_DEFAULT_REDIRECT_LIMIT );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_REDIRECT_LIMIT );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_REDIRECT_LIMIT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 403;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_9 = tmp_mvar_value_3;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_max_redirects, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_name_10 = Py_True;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_trust_env, tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_assattr_target_11;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cookiejar_from_dict" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 413;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        tmp_call_arg_element_1 = PyDict_New();
        frame_62d4e1aaf3d402595a3f4705af446542->m_frame.f_lineno = 413;
        {
            PyObject *call_args[] = { tmp_call_arg_element_1 };
            tmp_assattr_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_call_arg_element_1 );
        if ( tmp_assattr_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_cookies, tmp_assattr_name_11 );
        Py_DECREF( tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_assattr_target_12;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_OrderedDict );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OrderedDict );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OrderedDict" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 416;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        frame_62d4e1aaf3d402595a3f4705af446542->m_frame.f_lineno = 416;
        tmp_assattr_name_12 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
        if ( tmp_assattr_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_adapters, tmp_assattr_name_12 );
        Py_DECREF( tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mount );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_digest_504b77692b694460b8c25198a52c83ba;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPAdapter" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 417;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        frame_62d4e1aaf3d402595a3f4705af446542->m_frame.f_lineno = 417;
        tmp_args_element_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 417;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_62d4e1aaf3d402595a3f4705af446542->m_frame.f_lineno = 417;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_mount );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_digest_7c06a402579f6f9d9db7f3e04da983fc;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPAdapter" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 418;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_7;
        frame_62d4e1aaf3d402595a3f4705af446542->m_frame.f_lineno = 418;
        tmp_args_element_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 418;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_62d4e1aaf3d402595a3f4705af446542->m_frame.f_lineno = 418;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62d4e1aaf3d402595a3f4705af446542 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62d4e1aaf3d402595a3f4705af446542 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62d4e1aaf3d402595a3f4705af446542, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62d4e1aaf3d402595a3f4705af446542->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62d4e1aaf3d402595a3f4705af446542, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62d4e1aaf3d402595a3f4705af446542,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_62d4e1aaf3d402595a3f4705af446542 == cache_frame_62d4e1aaf3d402595a3f4705af446542 )
    {
        Py_DECREF( frame_62d4e1aaf3d402595a3f4705af446542 );
    }
    cache_frame_62d4e1aaf3d402595a3f4705af446542 = NULL;

    assertFrameObject( frame_62d4e1aaf3d402595a3f4705af446542 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_9___init__ );
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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_9___init__ );
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


static PyObject *impl_requests$sessions$$$function_10___enter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    CHECK_OBJECT( par_self );
    tmp_return_value = par_self;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_10___enter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_10___enter__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_requests$sessions$$$function_11___exit__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_57ad141d27ce7ee6b7a2e485d5cd8bad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_57ad141d27ce7ee6b7a2e485d5cd8bad = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_57ad141d27ce7ee6b7a2e485d5cd8bad, codeobj_57ad141d27ce7ee6b7a2e485d5cd8bad, module_requests$sessions, sizeof(void *)+sizeof(void *) );
    frame_57ad141d27ce7ee6b7a2e485d5cd8bad = cache_frame_57ad141d27ce7ee6b7a2e485d5cd8bad;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_57ad141d27ce7ee6b7a2e485d5cd8bad );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_57ad141d27ce7ee6b7a2e485d5cd8bad ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_57ad141d27ce7ee6b7a2e485d5cd8bad->m_frame.f_lineno = 424;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57ad141d27ce7ee6b7a2e485d5cd8bad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57ad141d27ce7ee6b7a2e485d5cd8bad );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_57ad141d27ce7ee6b7a2e485d5cd8bad, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_57ad141d27ce7ee6b7a2e485d5cd8bad->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_57ad141d27ce7ee6b7a2e485d5cd8bad, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_57ad141d27ce7ee6b7a2e485d5cd8bad,
        type_description_1,
        par_self,
        par_args
    );


    // Release cached frame.
    if ( frame_57ad141d27ce7ee6b7a2e485d5cd8bad == cache_frame_57ad141d27ce7ee6b7a2e485d5cd8bad )
    {
        Py_DECREF( frame_57ad141d27ce7ee6b7a2e485d5cd8bad );
    }
    cache_frame_57ad141d27ce7ee6b7a2e485d5cd8bad = NULL;

    assertFrameObject( frame_57ad141d27ce7ee6b7a2e485d5cd8bad );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_11___exit__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_11___exit__ );
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


static PyObject *impl_requests$sessions$$$function_12_prepare_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *var_cookies = NULL;
    PyObject *var_merged_cookies = NULL;
    PyObject *var_auth = NULL;
    PyObject *var_p = NULL;
    struct Nuitka_FrameObject *frame_054888eaf456c72dfe2b870bc9f8c20e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_054888eaf456c72dfe2b870bc9f8c20e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_054888eaf456c72dfe2b870bc9f8c20e, codeobj_054888eaf456c72dfe2b870bc9f8c20e, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_054888eaf456c72dfe2b870bc9f8c20e = cache_frame_054888eaf456c72dfe2b870bc9f8c20e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_054888eaf456c72dfe2b870bc9f8c20e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_054888eaf456c72dfe2b870bc9f8c20e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_request );
        tmp_source_name_1 = par_request;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cookies );
        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 436;
            type_description_1 = "oooooo";
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
        tmp_or_right_value_1 = PyDict_New();
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert( var_cookies == NULL );
        var_cookies = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( var_cookies );
        tmp_isinstance_inst_1 = var_cookies;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookielib );

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

            exception_lineno = 439;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CookieJar );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );

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

                exception_lineno = 440;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( var_cookies );
            tmp_args_element_name_1 = var_cookies;
            frame_054888eaf456c72dfe2b870bc9f8c20e->m_frame.f_lineno = 440;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 440;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_cookies;
                assert( old != NULL );
                var_cookies = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_cookies );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_cookies );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_cookies" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 443;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_cookies );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_cookies );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_cookies" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 444;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestsCookieJar" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 444;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        frame_054888eaf456c72dfe2b870bc9f8c20e->m_frame.f_lineno = 444;
        tmp_args_element_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cookies );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 444;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_054888eaf456c72dfe2b870bc9f8c20e->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_cookies );
        tmp_args_element_name_5 = var_cookies;
        frame_054888eaf456c72dfe2b870bc9f8c20e->m_frame.f_lineno = 443;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_5 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_merged_cookies == NULL );
        var_merged_cookies = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_request );
        tmp_source_name_4 = par_request;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_auth );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 447;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_auth == NULL );
        var_auth = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_trust_env );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 448;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( var_auth );
        tmp_operand_name_2 = var_auth;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_operand_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_auth );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_netrc_auth );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_netrc_auth );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_netrc_auth" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 449;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_6;
            CHECK_OBJECT( par_request );
            tmp_source_name_7 = par_request;
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_url );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 449;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_054888eaf456c72dfe2b870bc9f8c20e->m_frame.f_lineno = 449;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 449;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_auth;
                assert( old != NULL );
                var_auth = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_PreparedRequest );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PreparedRequest );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PreparedRequest" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_7;
        frame_054888eaf456c72dfe2b870bc9f8c20e->m_frame.f_lineno = 451;
        tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p == NULL );
        var_p = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_10;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_11;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_12;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_13;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_14;
        PyObject *tmp_source_name_15;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_16;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_17;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_18;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_19;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_20;
        CHECK_OBJECT( var_p );
        tmp_source_name_8 = var_p;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_prepare );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_method;
        CHECK_OBJECT( par_request );
        tmp_source_name_9 = par_request;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_method );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 453;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_054888eaf456c72dfe2b870bc9f8c20e->m_frame.f_lineno = 453;
        tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 453;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_url;
        CHECK_OBJECT( par_request );
        tmp_source_name_10 = par_request;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_url );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 454;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_files;
        CHECK_OBJECT( par_request );
        tmp_source_name_11 = par_request;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_files );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 455;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_data;
        CHECK_OBJECT( par_request );
        tmp_source_name_12 = par_request;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_data );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 456;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_json;
        CHECK_OBJECT( par_request );
        tmp_source_name_13 = par_request;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_json );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 457;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_headers;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 458;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_8;
        CHECK_OBJECT( par_request );
        tmp_source_name_14 = par_request;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_headers );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 458;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_headers );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 458;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_7 = const_str_plain_dict_class;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CaseInsensitiveDict" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 458;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_7 = tmp_mvar_value_9;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        frame_054888eaf456c72dfe2b870bc9f8c20e->m_frame.f_lineno = 458;
        tmp_dict_value_6 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_1, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 458;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_params;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 459;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_10;
        CHECK_OBJECT( par_request );
        tmp_source_name_16 = par_request;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_params );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 459;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_params );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 459;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_054888eaf456c72dfe2b870bc9f8c20e->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_dict_value_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 459;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_auth;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 460;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_11;
        CHECK_OBJECT( var_auth );
        tmp_args_element_name_9 = var_auth;
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_auth );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 460;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_054888eaf456c72dfe2b870bc9f8c20e->m_frame.f_lineno = 460;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_dict_value_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_dict_value_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 460;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
        Py_DECREF( tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_cookies;
        CHECK_OBJECT( var_merged_cookies );
        tmp_dict_value_10 = var_merged_cookies;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_hooks;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_hooks );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_hooks );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_hooks" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 462;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_12;
        CHECK_OBJECT( par_request );
        tmp_source_name_19 = par_request;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_hooks );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 462;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_hooks );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_args_element_name_11 );

            exception_lineno = 462;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_054888eaf456c72dfe2b870bc9f8c20e->m_frame.f_lineno = 462;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_dict_value_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_args_element_name_11 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_dict_value_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 462;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_11, tmp_dict_value_11 );
        Py_DECREF( tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        frame_054888eaf456c72dfe2b870bc9f8c20e->m_frame.f_lineno = 452;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_054888eaf456c72dfe2b870bc9f8c20e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_054888eaf456c72dfe2b870bc9f8c20e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_054888eaf456c72dfe2b870bc9f8c20e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_054888eaf456c72dfe2b870bc9f8c20e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_054888eaf456c72dfe2b870bc9f8c20e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_054888eaf456c72dfe2b870bc9f8c20e,
        type_description_1,
        par_self,
        par_request,
        var_cookies,
        var_merged_cookies,
        var_auth,
        var_p
    );


    // Release cached frame.
    if ( frame_054888eaf456c72dfe2b870bc9f8c20e == cache_frame_054888eaf456c72dfe2b870bc9f8c20e )
    {
        Py_DECREF( frame_054888eaf456c72dfe2b870bc9f8c20e );
    }
    cache_frame_054888eaf456c72dfe2b870bc9f8c20e = NULL;

    assertFrameObject( frame_054888eaf456c72dfe2b870bc9f8c20e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_p );
    tmp_return_value = var_p;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_12_prepare_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    CHECK_OBJECT( (PyObject *)var_cookies );
    Py_DECREF( var_cookies );
    var_cookies = NULL;

    CHECK_OBJECT( (PyObject *)var_merged_cookies );
    Py_DECREF( var_merged_cookies );
    var_merged_cookies = NULL;

    CHECK_OBJECT( (PyObject *)var_auth );
    Py_DECREF( var_auth );
    var_auth = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_cookies );
    var_cookies = NULL;

    Py_XDECREF( var_merged_cookies );
    var_merged_cookies = NULL;

    Py_XDECREF( var_auth );
    var_auth = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_12_prepare_request );
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


static PyObject *impl_requests$sessions$$$function_13_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_params = python_pars[ 3 ];
    PyObject *par_data = python_pars[ 4 ];
    PyObject *par_headers = python_pars[ 5 ];
    PyObject *par_cookies = python_pars[ 6 ];
    PyObject *par_files = python_pars[ 7 ];
    PyObject *par_auth = python_pars[ 8 ];
    PyObject *par_timeout = python_pars[ 9 ];
    PyObject *par_allow_redirects = python_pars[ 10 ];
    PyObject *par_proxies = python_pars[ 11 ];
    PyObject *par_hooks = python_pars[ 12 ];
    PyObject *par_stream = python_pars[ 13 ];
    PyObject *par_verify = python_pars[ 14 ];
    PyObject *par_cert = python_pars[ 15 ];
    PyObject *par_json = python_pars[ 16 ];
    PyObject *var_req = NULL;
    PyObject *var_prep = NULL;
    PyObject *var_settings = NULL;
    PyObject *var_send_kwargs = NULL;
    PyObject *var_resp = NULL;
    struct Nuitka_FrameObject *frame_993f1053533082b129eaebf9c7d0ec24;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_993f1053533082b129eaebf9c7d0ec24 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_993f1053533082b129eaebf9c7d0ec24, codeobj_993f1053533082b129eaebf9c7d0ec24, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_993f1053533082b129eaebf9c7d0ec24 = cache_frame_993f1053533082b129eaebf9c7d0ec24;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_993f1053533082b129eaebf9c7d0ec24 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_993f1053533082b129eaebf9c7d0ec24 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Request );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Request );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Request" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 507;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_dict_key_1 = const_str_plain_method;
        CHECK_OBJECT( par_method );
        tmp_called_instance_1 = par_method;
        frame_993f1053533082b129eaebf9c7d0ec24->m_frame.f_lineno = 508;
        tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_url;
        CHECK_OBJECT( par_url );
        tmp_dict_value_2 = par_url;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_headers;
        CHECK_OBJECT( par_headers );
        tmp_dict_value_3 = par_headers;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_files;
        CHECK_OBJECT( par_files );
        tmp_dict_value_4 = par_files;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_data;
        CHECK_OBJECT( par_data );
        tmp_or_left_value_1 = par_data;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 512;
            type_description_1 = "oooooooooooooooooooooo";
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
        tmp_or_right_value_1 = PyDict_New();
        tmp_dict_value_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF( tmp_or_left_value_1 );
        tmp_dict_value_5 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_json;
        CHECK_OBJECT( par_json );
        tmp_dict_value_6 = par_json;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_params;
        CHECK_OBJECT( par_params );
        tmp_or_left_value_2 = par_params;
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 514;
            type_description_1 = "oooooooooooooooooooooo";
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
        tmp_or_right_value_2 = PyDict_New();
        tmp_dict_value_7 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF( tmp_or_left_value_2 );
        tmp_dict_value_7 = tmp_or_left_value_2;
        or_end_2:;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_auth;
        CHECK_OBJECT( par_auth );
        tmp_dict_value_8 = par_auth;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_cookies;
        CHECK_OBJECT( par_cookies );
        tmp_dict_value_9 = par_cookies;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_hooks;
        CHECK_OBJECT( par_hooks );
        tmp_dict_value_10 = par_hooks;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        frame_993f1053533082b129eaebf9c7d0ec24->m_frame.f_lineno = 507;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 507;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_req == NULL );
        var_req = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_req );
        tmp_args_element_name_1 = var_req;
        frame_993f1053533082b129eaebf9c7d0ec24->m_frame.f_lineno = 519;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_prepare_request, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 519;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_prep == NULL );
        var_prep = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        CHECK_OBJECT( par_proxies );
        tmp_or_left_value_3 = par_proxies;
        tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
        if ( tmp_or_left_truth_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 521;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_3 == 1 )
        {
            goto or_left_3;
        }
        else
        {
            goto or_right_3;
        }
        or_right_3:;
        tmp_or_right_value_3 = PyDict_New();
        tmp_assign_source_3 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        Py_INCREF( tmp_or_left_value_3 );
        tmp_assign_source_3 = tmp_or_left_value_3;
        or_end_3:;
        {
            PyObject *old = par_proxies;
            assert( old != NULL );
            par_proxies = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_merge_environment_settings );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 523;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_prep );
        tmp_source_name_2 = var_prep;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 524;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_proxies );
        tmp_args_element_name_3 = par_proxies;
        CHECK_OBJECT( par_stream );
        tmp_args_element_name_4 = par_stream;
        CHECK_OBJECT( par_verify );
        tmp_args_element_name_5 = par_verify;
        CHECK_OBJECT( par_cert );
        tmp_args_element_name_6 = par_cert;
        frame_993f1053533082b129eaebf9c7d0ec24->m_frame.f_lineno = 523;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 523;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_settings == NULL );
        var_settings = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_dict_key_11 = const_str_plain_timeout;
        CHECK_OBJECT( par_timeout );
        tmp_dict_value_11 = par_timeout;
        tmp_assign_source_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_12 = const_str_plain_allow_redirects;
        CHECK_OBJECT( par_allow_redirects );
        tmp_dict_value_12 = par_allow_redirects;
        tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_12, tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        assert( var_send_kwargs == NULL );
        var_send_kwargs = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_send_kwargs );
        tmp_called_instance_3 = var_send_kwargs;
        CHECK_OBJECT( var_settings );
        tmp_args_element_name_7 = var_settings;
        frame_993f1053533082b129eaebf9c7d0ec24->m_frame.f_lineno = 532;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_update, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 532;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_send );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 533;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_prep );
        tmp_tuple_element_1 = var_prep;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_send_kwargs );
        tmp_dircall_arg3_1 = var_send_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_6 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 533;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_resp == NULL );
        var_resp = tmp_assign_source_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_993f1053533082b129eaebf9c7d0ec24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_993f1053533082b129eaebf9c7d0ec24 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_993f1053533082b129eaebf9c7d0ec24, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_993f1053533082b129eaebf9c7d0ec24->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_993f1053533082b129eaebf9c7d0ec24, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_993f1053533082b129eaebf9c7d0ec24,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_params,
        par_data,
        par_headers,
        par_cookies,
        par_files,
        par_auth,
        par_timeout,
        par_allow_redirects,
        par_proxies,
        par_hooks,
        par_stream,
        par_verify,
        par_cert,
        par_json,
        var_req,
        var_prep,
        var_settings,
        var_send_kwargs,
        var_resp
    );


    // Release cached frame.
    if ( frame_993f1053533082b129eaebf9c7d0ec24 == cache_frame_993f1053533082b129eaebf9c7d0ec24 )
    {
        Py_DECREF( frame_993f1053533082b129eaebf9c7d0ec24 );
    }
    cache_frame_993f1053533082b129eaebf9c7d0ec24 = NULL;

    assertFrameObject( frame_993f1053533082b129eaebf9c7d0ec24 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_resp );
    tmp_return_value = var_resp;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_13_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

    CHECK_OBJECT( (PyObject *)par_cookies );
    Py_DECREF( par_cookies );
    par_cookies = NULL;

    CHECK_OBJECT( (PyObject *)par_files );
    Py_DECREF( par_files );
    par_files = NULL;

    CHECK_OBJECT( (PyObject *)par_auth );
    Py_DECREF( par_auth );
    par_auth = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_allow_redirects );
    Py_DECREF( par_allow_redirects );
    par_allow_redirects = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_hooks );
    Py_DECREF( par_hooks );
    par_hooks = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_json );
    Py_DECREF( par_json );
    par_json = NULL;

    CHECK_OBJECT( (PyObject *)var_req );
    Py_DECREF( var_req );
    var_req = NULL;

    CHECK_OBJECT( (PyObject *)var_prep );
    Py_DECREF( var_prep );
    var_prep = NULL;

    CHECK_OBJECT( (PyObject *)var_settings );
    Py_DECREF( var_settings );
    var_settings = NULL;

    CHECK_OBJECT( (PyObject *)var_send_kwargs );
    Py_DECREF( var_send_kwargs );
    var_send_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_resp );
    Py_DECREF( var_resp );
    var_resp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

    CHECK_OBJECT( (PyObject *)par_cookies );
    Py_DECREF( par_cookies );
    par_cookies = NULL;

    CHECK_OBJECT( (PyObject *)par_files );
    Py_DECREF( par_files );
    par_files = NULL;

    CHECK_OBJECT( (PyObject *)par_auth );
    Py_DECREF( par_auth );
    par_auth = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_allow_redirects );
    Py_DECREF( par_allow_redirects );
    par_allow_redirects = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_hooks );
    Py_DECREF( par_hooks );
    par_hooks = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_json );
    Py_DECREF( par_json );
    par_json = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

    Py_XDECREF( var_prep );
    var_prep = NULL;

    Py_XDECREF( var_settings );
    var_settings = NULL;

    Py_XDECREF( var_send_kwargs );
    var_send_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_13_request );
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


static PyObject *impl_requests$sessions$$$function_14_get( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_79b5c72a051e844324ec83d768774c36;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_79b5c72a051e844324ec83d768774c36 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_79b5c72a051e844324ec83d768774c36, codeobj_79b5c72a051e844324ec83d768774c36, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_79b5c72a051e844324ec83d768774c36 = cache_frame_79b5c72a051e844324ec83d768774c36;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_79b5c72a051e844324ec83d768774c36 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_79b5c72a051e844324ec83d768774c36 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        frame_79b5c72a051e844324ec83d768774c36->m_frame.f_lineno = 545;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_true_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 546;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_str_plain_GET;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 546;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79b5c72a051e844324ec83d768774c36 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_79b5c72a051e844324ec83d768774c36 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79b5c72a051e844324ec83d768774c36 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_79b5c72a051e844324ec83d768774c36, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_79b5c72a051e844324ec83d768774c36->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_79b5c72a051e844324ec83d768774c36, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_79b5c72a051e844324ec83d768774c36,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_79b5c72a051e844324ec83d768774c36 == cache_frame_79b5c72a051e844324ec83d768774c36 )
    {
        Py_DECREF( frame_79b5c72a051e844324ec83d768774c36 );
    }
    cache_frame_79b5c72a051e844324ec83d768774c36 = NULL;

    assertFrameObject( frame_79b5c72a051e844324ec83d768774c36 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_14_get );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_14_get );
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


static PyObject *impl_requests$sessions$$$function_15_options( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_29d86f83de1d534eb7fcddd6956d0094;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_29d86f83de1d534eb7fcddd6956d0094 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_29d86f83de1d534eb7fcddd6956d0094, codeobj_29d86f83de1d534eb7fcddd6956d0094, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_29d86f83de1d534eb7fcddd6956d0094 = cache_frame_29d86f83de1d534eb7fcddd6956d0094;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_29d86f83de1d534eb7fcddd6956d0094 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_29d86f83de1d534eb7fcddd6956d0094 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        frame_29d86f83de1d534eb7fcddd6956d0094->m_frame.f_lineno = 556;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_true_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 556;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 557;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_str_plain_OPTIONS;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 557;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29d86f83de1d534eb7fcddd6956d0094 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_29d86f83de1d534eb7fcddd6956d0094 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29d86f83de1d534eb7fcddd6956d0094 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_29d86f83de1d534eb7fcddd6956d0094, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_29d86f83de1d534eb7fcddd6956d0094->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_29d86f83de1d534eb7fcddd6956d0094, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_29d86f83de1d534eb7fcddd6956d0094,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_29d86f83de1d534eb7fcddd6956d0094 == cache_frame_29d86f83de1d534eb7fcddd6956d0094 )
    {
        Py_DECREF( frame_29d86f83de1d534eb7fcddd6956d0094 );
    }
    cache_frame_29d86f83de1d534eb7fcddd6956d0094 = NULL;

    assertFrameObject( frame_29d86f83de1d534eb7fcddd6956d0094 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_15_options );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_15_options );
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


static PyObject *impl_requests$sessions$$$function_16_head( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_009efd8cfb7c38e1657601a95f613a2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_009efd8cfb7c38e1657601a95f613a2a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_009efd8cfb7c38e1657601a95f613a2a, codeobj_009efd8cfb7c38e1657601a95f613a2a, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_009efd8cfb7c38e1657601a95f613a2a = cache_frame_009efd8cfb7c38e1657601a95f613a2a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_009efd8cfb7c38e1657601a95f613a2a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_009efd8cfb7c38e1657601a95f613a2a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        frame_009efd8cfb7c38e1657601a95f613a2a->m_frame.f_lineno = 567;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_false_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 567;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_str_plain_HEAD;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_009efd8cfb7c38e1657601a95f613a2a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_009efd8cfb7c38e1657601a95f613a2a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_009efd8cfb7c38e1657601a95f613a2a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_009efd8cfb7c38e1657601a95f613a2a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_009efd8cfb7c38e1657601a95f613a2a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_009efd8cfb7c38e1657601a95f613a2a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_009efd8cfb7c38e1657601a95f613a2a,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_009efd8cfb7c38e1657601a95f613a2a == cache_frame_009efd8cfb7c38e1657601a95f613a2a )
    {
        Py_DECREF( frame_009efd8cfb7c38e1657601a95f613a2a );
    }
    cache_frame_009efd8cfb7c38e1657601a95f613a2a = NULL;

    assertFrameObject( frame_009efd8cfb7c38e1657601a95f613a2a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_16_head );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_16_head );
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


static PyObject *impl_requests$sessions$$$function_17_post( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_json = python_pars[ 3 ];
    PyObject *par_kwargs = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_7bc40ad62e23397e44fc80db4c38dd89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7bc40ad62e23397e44fc80db4c38dd89 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7bc40ad62e23397e44fc80db4c38dd89, codeobj_7bc40ad62e23397e44fc80db4c38dd89, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7bc40ad62e23397e44fc80db4c38dd89 = cache_frame_7bc40ad62e23397e44fc80db4c38dd89;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7bc40ad62e23397e44fc80db4c38dd89 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7bc40ad62e23397e44fc80db4c38dd89 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 581;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_str_plain_POST;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_data;
        CHECK_OBJECT( par_data );
        tmp_dict_value_1 = par_data;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_json;
        CHECK_OBJECT( par_json );
        tmp_dict_value_2 = par_json;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 581;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bc40ad62e23397e44fc80db4c38dd89 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bc40ad62e23397e44fc80db4c38dd89 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bc40ad62e23397e44fc80db4c38dd89 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7bc40ad62e23397e44fc80db4c38dd89, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7bc40ad62e23397e44fc80db4c38dd89->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7bc40ad62e23397e44fc80db4c38dd89, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7bc40ad62e23397e44fc80db4c38dd89,
        type_description_1,
        par_self,
        par_url,
        par_data,
        par_json,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_7bc40ad62e23397e44fc80db4c38dd89 == cache_frame_7bc40ad62e23397e44fc80db4c38dd89 )
    {
        Py_DECREF( frame_7bc40ad62e23397e44fc80db4c38dd89 );
    }
    cache_frame_7bc40ad62e23397e44fc80db4c38dd89 = NULL;

    assertFrameObject( frame_7bc40ad62e23397e44fc80db4c38dd89 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_17_post );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_json );
    Py_DECREF( par_json );
    par_json = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_json );
    Py_DECREF( par_json );
    par_json = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_17_post );
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


static PyObject *impl_requests$sessions$$$function_18_put( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_fb045110390fd2999138da9ddcefd9e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fb045110390fd2999138da9ddcefd9e1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fb045110390fd2999138da9ddcefd9e1, codeobj_fb045110390fd2999138da9ddcefd9e1, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fb045110390fd2999138da9ddcefd9e1 = cache_frame_fb045110390fd2999138da9ddcefd9e1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fb045110390fd2999138da9ddcefd9e1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fb045110390fd2999138da9ddcefd9e1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 593;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_str_plain_PUT;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_data;
        CHECK_OBJECT( par_data );
        tmp_dict_value_1 = par_data;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 593;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb045110390fd2999138da9ddcefd9e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb045110390fd2999138da9ddcefd9e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb045110390fd2999138da9ddcefd9e1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fb045110390fd2999138da9ddcefd9e1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fb045110390fd2999138da9ddcefd9e1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fb045110390fd2999138da9ddcefd9e1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fb045110390fd2999138da9ddcefd9e1,
        type_description_1,
        par_self,
        par_url,
        par_data,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_fb045110390fd2999138da9ddcefd9e1 == cache_frame_fb045110390fd2999138da9ddcefd9e1 )
    {
        Py_DECREF( frame_fb045110390fd2999138da9ddcefd9e1 );
    }
    cache_frame_fb045110390fd2999138da9ddcefd9e1 = NULL;

    assertFrameObject( frame_fb045110390fd2999138da9ddcefd9e1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_18_put );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_18_put );
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


static PyObject *impl_requests$sessions$$$function_19_patch( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_e6b285891199cb0e01da2586e28b62cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e6b285891199cb0e01da2586e28b62cf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e6b285891199cb0e01da2586e28b62cf, codeobj_e6b285891199cb0e01da2586e28b62cf, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e6b285891199cb0e01da2586e28b62cf = cache_frame_e6b285891199cb0e01da2586e28b62cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e6b285891199cb0e01da2586e28b62cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e6b285891199cb0e01da2586e28b62cf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 605;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_str_plain_PATCH;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_data;
        CHECK_OBJECT( par_data );
        tmp_dict_value_1 = par_data;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 605;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6b285891199cb0e01da2586e28b62cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6b285891199cb0e01da2586e28b62cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6b285891199cb0e01da2586e28b62cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e6b285891199cb0e01da2586e28b62cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e6b285891199cb0e01da2586e28b62cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e6b285891199cb0e01da2586e28b62cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e6b285891199cb0e01da2586e28b62cf,
        type_description_1,
        par_self,
        par_url,
        par_data,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_e6b285891199cb0e01da2586e28b62cf == cache_frame_e6b285891199cb0e01da2586e28b62cf )
    {
        Py_DECREF( frame_e6b285891199cb0e01da2586e28b62cf );
    }
    cache_frame_e6b285891199cb0e01da2586e28b62cf = NULL;

    assertFrameObject( frame_e6b285891199cb0e01da2586e28b62cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_19_patch );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_19_patch );
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


static PyObject *impl_requests$sessions$$$function_20_delete( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_89c93d71801f1897d52f3ee7f588c6f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_89c93d71801f1897d52f3ee7f588c6f8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_89c93d71801f1897d52f3ee7f588c6f8, codeobj_89c93d71801f1897d52f3ee7f588c6f8, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_89c93d71801f1897d52f3ee7f588c6f8 = cache_frame_89c93d71801f1897d52f3ee7f588c6f8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_89c93d71801f1897d52f3ee7f588c6f8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_89c93d71801f1897d52f3ee7f588c6f8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 615;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_str_plain_DELETE;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 615;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89c93d71801f1897d52f3ee7f588c6f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_89c93d71801f1897d52f3ee7f588c6f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89c93d71801f1897d52f3ee7f588c6f8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_89c93d71801f1897d52f3ee7f588c6f8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_89c93d71801f1897d52f3ee7f588c6f8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_89c93d71801f1897d52f3ee7f588c6f8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_89c93d71801f1897d52f3ee7f588c6f8,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_89c93d71801f1897d52f3ee7f588c6f8 == cache_frame_89c93d71801f1897d52f3ee7f588c6f8 )
    {
        Py_DECREF( frame_89c93d71801f1897d52f3ee7f588c6f8 );
    }
    cache_frame_89c93d71801f1897d52f3ee7f588c6f8 = NULL;

    assertFrameObject( frame_89c93d71801f1897d52f3ee7f588c6f8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_20_delete );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_20_delete );
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


static PyObject *impl_requests$sessions$$$function_21_send( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_allow_redirects = NULL;
    PyObject *var_stream = NULL;
    PyObject *var_hooks = NULL;
    PyObject *var_adapter = NULL;
    PyObject *var_start = NULL;
    PyObject *var_r = NULL;
    PyObject *var_elapsed = NULL;
    PyObject *var_resp = NULL;
    PyObject *var_gen = NULL;
    PyObject *var_history = NULL;
    PyObject *outline_0_var_resp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_1180d5161be01fba696caf667cc02d31;
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
    struct Nuitka_FrameObject *frame_0a7526fb5c7928b3e24a08684e327d1d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_0a7526fb5c7928b3e24a08684e327d1d_2 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_1180d5161be01fba696caf667cc02d31 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1180d5161be01fba696caf667cc02d31, codeobj_1180d5161be01fba696caf667cc02d31, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1180d5161be01fba696caf667cc02d31 = cache_frame_1180d5161be01fba696caf667cc02d31;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1180d5161be01fba696caf667cc02d31 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1180d5161be01fba696caf667cc02d31 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_kwargs );
        tmp_source_name_1 = par_kwargs;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setdefault );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 624;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_plain_stream;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stream );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 624;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 624;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 624;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_kwargs );
        tmp_source_name_3 = par_kwargs;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_setdefault );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 625;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_plain_verify;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_verify );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 625;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 625;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 625;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_kwargs );
        tmp_source_name_5 = par_kwargs;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_setdefault );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 626;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = const_str_plain_cert;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_cert );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 626;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 626;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 626;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_kwargs );
        tmp_source_name_7 = par_kwargs;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_setdefault );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 627;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = const_str_plain_proxies;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_proxies );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 627;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 627;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 627;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_request );
        tmp_isinstance_inst_1 = par_request;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Request );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Request );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Request" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 631;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 631;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_8ae4830b7ee99e05bb48d2cc82ed2d03;
            frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 632;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 632;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 635;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_true_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 635;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_allow_redirects == NULL );
        var_allow_redirects = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_2 = par_kwargs;
        frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 636;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_stream_tuple, 0 ) );

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 636;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_stream == NULL );
        var_stream = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_request );
        tmp_source_name_9 = par_request;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_hooks );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_hooks == NULL );
        var_hooks = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_10;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_get_adapter );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 640;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_url;
        CHECK_OBJECT( par_request );
        tmp_source_name_11 = par_request;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_url );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 640;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 640;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 640;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_adapter == NULL );
        var_adapter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_preferred_clock );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "preferred_clock" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 643;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_2;
        frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 643;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 643;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_start == NULL );
        var_start = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_12;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( var_adapter );
        tmp_source_name_12 = var_adapter;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_send );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 646;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_request );
        tmp_tuple_element_1 = par_request;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_6 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 646;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_preferred_clock );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "preferred_clock" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 649;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_3;
        frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 649;
        tmp_left_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 649;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_start );
        tmp_right_name_1 = var_start;
        tmp_assign_source_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 649;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_elapsed == NULL );
        var_elapsed = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_timedelta );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 650;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_4;
        tmp_dict_key_2 = const_str_plain_seconds;
        CHECK_OBJECT( var_elapsed );
        tmp_dict_value_2 = var_elapsed;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 650;
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_8, tmp_kw_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 650;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_r );
        tmp_assattr_target_1 = var_r;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_elapsed, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 650;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_dispatch_hook );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dispatch_hook );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dispatch_hook" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 653;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_2 = tmp_mvar_value_5;
        tmp_tuple_element_2 = const_str_plain_response;
        tmp_dircall_arg2_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_hooks );
        tmp_tuple_element_2 = var_hooks;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_r );
        tmp_tuple_element_2 = var_r;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 2, tmp_tuple_element_2 );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_2 );
        Py_INCREF( tmp_dircall_arg3_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_assign_source_8 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 653;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            assert( old != NULL );
            var_r = tmp_assign_source_8;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_13;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_r );
        tmp_source_name_13 = var_r;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_history );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 656;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 656;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_source_name_14;
            CHECK_OBJECT( var_r );
            tmp_source_name_14 = var_r;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_history );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 659;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 659;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_9;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_10 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 659;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_10;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_11 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_resp;
                var_resp = tmp_assign_source_11;
                Py_INCREF( var_resp );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_source_name_15;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_source_name_16;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_source_name_17;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "extract_cookies_to_jar" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 660;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_9 = tmp_mvar_value_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_15 = par_self;
            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_cookies );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 660;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_resp );
            tmp_source_name_16 = var_resp;
            tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_request );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_9 );

                exception_lineno = 660;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_resp );
            tmp_source_name_17 = var_resp;
            tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_raw );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_9 );
                Py_DECREF( tmp_args_element_name_10 );

                exception_lineno = 660;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 660;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 660;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 659;
            type_description_1 = "ooooooooooooo";
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

        branch_no_2:;
    }
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_18;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_source_name_19;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "extract_cookies_to_jar" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 662;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_cookies );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 662;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_request );
        tmp_args_element_name_13 = par_request;
        CHECK_OBJECT( var_r );
        tmp_source_name_19 = var_r;
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_raw );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_12 );

            exception_lineno = 662;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 662;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_args_element_name_12 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_call_result_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 662;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_6 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_source_name_20;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg3_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_resolve_redirects );
        if ( tmp_dircall_arg1_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 665;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_r );
        tmp_tuple_element_3 = var_r;
        tmp_dircall_arg2_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_request );
        tmp_tuple_element_3 = par_request;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_3, 1, tmp_tuple_element_3 );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_3 = par_kwargs;
        Py_INCREF( tmp_dircall_arg3_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
            tmp_assign_source_12 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 665;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_gen == NULL );
        var_gen = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_allow_redirects );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_allow_redirects );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 668;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( var_gen );
            tmp_iter_arg_2 = var_gen;
            tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 668;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_15;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_0a7526fb5c7928b3e24a08684e327d1d_2, codeobj_0a7526fb5c7928b3e24a08684e327d1d, module_requests$sessions, sizeof(void *) );
        frame_0a7526fb5c7928b3e24a08684e327d1d_2 = cache_frame_0a7526fb5c7928b3e24a08684e327d1d_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_0a7526fb5c7928b3e24a08684e327d1d_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_0a7526fb5c7928b3e24a08684e327d1d_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_16 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 668;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_16;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_17 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_resp;
                outline_0_var_resp = tmp_assign_source_17;
                Py_INCREF( outline_0_var_resp );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( outline_0_var_resp );
            tmp_append_value_1 = outline_0_var_resp;
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 668;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 668;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_13 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_13 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_21_send );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
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
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
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
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0a7526fb5c7928b3e24a08684e327d1d_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_0a7526fb5c7928b3e24a08684e327d1d_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0a7526fb5c7928b3e24a08684e327d1d_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_0a7526fb5c7928b3e24a08684e327d1d_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_0a7526fb5c7928b3e24a08684e327d1d_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_0a7526fb5c7928b3e24a08684e327d1d_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0a7526fb5c7928b3e24a08684e327d1d_2,
            type_description_2,
            outline_0_var_resp
        );


        // Release cached frame.
        if ( frame_0a7526fb5c7928b3e24a08684e327d1d_2 == cache_frame_0a7526fb5c7928b3e24a08684e327d1d_2 )
        {
            Py_DECREF( frame_0a7526fb5c7928b3e24a08684e327d1d_2 );
        }
        cache_frame_0a7526fb5c7928b3e24a08684e327d1d_2 = NULL;

        assertFrameObject( frame_0a7526fb5c7928b3e24a08684e327d1d_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_21_send );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF( outline_0_var_resp );
        outline_0_var_resp = NULL;

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

        Py_XDECREF( outline_0_var_resp );
        outline_0_var_resp = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_21_send );
        return NULL;
        outline_exception_1:;
        exception_lineno = 668;
        goto frame_exception_exit_1;
        outline_result_1:;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_13 = PyList_New( 0 );
        condexpr_end_1:;
        assert( var_history == NULL );
        var_history = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT( var_history );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_history );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 671;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_7;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            CHECK_OBJECT( var_history );
            tmp_called_instance_3 = var_history;
            tmp_args_element_name_15 = const_int_0;
            CHECK_OBJECT( var_r );
            tmp_args_element_name_16 = var_r;
            frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 673;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_call_result_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_insert, call_args );
            }

            if ( tmp_call_result_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 673;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_7 );
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( var_history );
            tmp_called_instance_4 = var_history;
            frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = 675;
            tmp_assign_source_18 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_pop );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 675;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_r;
                assert( old != NULL );
                var_r = tmp_assign_source_18;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT( var_history );
            tmp_assattr_name_2 = var_history;
            CHECK_OBJECT( var_r );
            tmp_assattr_target_2 = var_r;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_history, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 676;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_allow_redirects );
        tmp_operand_name_1 = var_allow_redirects;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 679;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
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
        // Tried code:
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_value_name_1;
            PyObject *tmp_dircall_arg1_4;
            PyObject *tmp_source_name_21;
            PyObject *tmp_dircall_arg2_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_dircall_arg3_4;
            PyObject *tmp_dircall_arg4_1;
            PyObject *tmp_assattr_target_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_21 = par_self;
            tmp_dircall_arg1_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_resolve_redirects );
            if ( tmp_dircall_arg1_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 681;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_r );
            tmp_tuple_element_4 = var_r;
            tmp_dircall_arg2_4 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_4, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( par_request );
            tmp_tuple_element_4 = par_request;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_4, 1, tmp_tuple_element_4 );
            tmp_dircall_arg3_4 = PyDict_Copy( const_dict_5a980a96e502e21a57174819267c7344 );
            CHECK_OBJECT( par_kwargs );
            tmp_dircall_arg4_1 = par_kwargs;
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4, tmp_dircall_arg3_4, tmp_dircall_arg4_1};
                tmp_value_name_1 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_value_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 681;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_assattr_name_3 = ITERATOR_NEXT( tmp_value_name_1 );
            Py_DECREF( tmp_value_name_1 );
            if ( tmp_assattr_name_3 == NULL )
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


                type_description_1 = "ooooooooooooo";
                exception_lineno = 681;
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_r );
            tmp_assattr_target_3 = var_r;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__next, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 681;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
            }
        }
        goto try_end_2;
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

        // Preserve existing published exception.
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_1 );
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_1 );
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_1 );

        if ( exception_keeper_tb_4 == NULL )
        {
            exception_keeper_tb_4 = MAKE_TRACEBACK( frame_1180d5161be01fba696caf667cc02d31, exception_keeper_lineno_4 );
        }
        else if ( exception_keeper_lineno_4 != 0 )
        {
            exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_1180d5161be01fba696caf667cc02d31, exception_keeper_lineno_4 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
        PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
        PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_1 = PyExc_StopIteration;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 682;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 682;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 680;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_1180d5161be01fba696caf667cc02d31->m_frame) frame_1180d5161be01fba696caf667cc02d31->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
            branch_no_5:;
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

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto try_end_2;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_21_send );
        return NULL;
        // End of try:
        try_end_2:;
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT( var_stream );
        tmp_operand_name_3 = var_stream;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 685;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_source_name_22;
            PyObject *tmp_attribute_value_2;
            CHECK_OBJECT( var_r );
            tmp_source_name_22 = var_r;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_content );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 686;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_attribute_value_2 );
        }
        branch_no_6:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1180d5161be01fba696caf667cc02d31 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1180d5161be01fba696caf667cc02d31 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1180d5161be01fba696caf667cc02d31, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1180d5161be01fba696caf667cc02d31->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1180d5161be01fba696caf667cc02d31, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1180d5161be01fba696caf667cc02d31,
        type_description_1,
        par_self,
        par_request,
        par_kwargs,
        var_allow_redirects,
        var_stream,
        var_hooks,
        var_adapter,
        var_start,
        var_r,
        var_elapsed,
        var_resp,
        var_gen,
        var_history
    );


    // Release cached frame.
    if ( frame_1180d5161be01fba696caf667cc02d31 == cache_frame_1180d5161be01fba696caf667cc02d31 )
    {
        Py_DECREF( frame_1180d5161be01fba696caf667cc02d31 );
    }
    cache_frame_1180d5161be01fba696caf667cc02d31 = NULL;

    assertFrameObject( frame_1180d5161be01fba696caf667cc02d31 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    CHECK_OBJECT( var_r );
    tmp_return_value = var_r;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_21_send );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_allow_redirects );
    Py_DECREF( var_allow_redirects );
    var_allow_redirects = NULL;

    CHECK_OBJECT( (PyObject *)var_stream );
    Py_DECREF( var_stream );
    var_stream = NULL;

    CHECK_OBJECT( (PyObject *)var_hooks );
    Py_DECREF( var_hooks );
    var_hooks = NULL;

    CHECK_OBJECT( (PyObject *)var_adapter );
    Py_DECREF( var_adapter );
    var_adapter = NULL;

    CHECK_OBJECT( (PyObject *)var_start );
    Py_DECREF( var_start );
    var_start = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)var_elapsed );
    Py_DECREF( var_elapsed );
    var_elapsed = NULL;

    Py_XDECREF( var_resp );
    var_resp = NULL;

    CHECK_OBJECT( (PyObject *)var_gen );
    Py_DECREF( var_gen );
    var_gen = NULL;

    CHECK_OBJECT( (PyObject *)var_history );
    Py_DECREF( var_history );
    var_history = NULL;

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

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_allow_redirects );
    var_allow_redirects = NULL;

    Py_XDECREF( var_stream );
    var_stream = NULL;

    Py_XDECREF( var_hooks );
    var_hooks = NULL;

    Py_XDECREF( var_adapter );
    var_adapter = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_elapsed );
    var_elapsed = NULL;

    Py_XDECREF( var_resp );
    var_resp = NULL;

    Py_XDECREF( var_gen );
    var_gen = NULL;

    Py_XDECREF( var_history );
    var_history = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_21_send );
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


static PyObject *impl_requests$sessions$$$function_22_merge_environment_settings( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_proxies = python_pars[ 2 ];
    PyObject *par_stream = python_pars[ 3 ];
    PyObject *par_verify = python_pars[ 4 ];
    PyObject *par_cert = python_pars[ 5 ];
    PyObject *var_no_proxy = NULL;
    PyObject *var_env_proxies = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_66481eb4d21d5b59fafd135d83450d02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_66481eb4d21d5b59fafd135d83450d02 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_66481eb4d21d5b59fafd135d83450d02, codeobj_66481eb4d21d5b59fafd135d83450d02, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_66481eb4d21d5b59fafd135d83450d02 = cache_frame_66481eb4d21d5b59fafd135d83450d02;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_66481eb4d21d5b59fafd135d83450d02 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_66481eb4d21d5b59fafd135d83450d02 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_trust_env );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 697;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 697;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_assign_source_1;
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_proxies );
            tmp_compexpr_left_1 = par_proxies;
            tmp_compexpr_right_1 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_1;
            }
            else
            {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT( par_proxies );
            tmp_called_instance_1 = par_proxies;
            frame_66481eb4d21d5b59fafd135d83450d02->m_frame.f_lineno = 699;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_no_proxy_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 699;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_assign_source_1 = Py_None;
            Py_INCREF( tmp_assign_source_1 );
            condexpr_end_1:;
            assert( var_no_proxy == NULL );
            var_no_proxy = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_environ_proxies );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_environ_proxies );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_environ_proxies" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 700;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_url );
            tmp_tuple_element_1 = par_url;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_no_proxy;
            CHECK_OBJECT( var_no_proxy );
            tmp_dict_value_1 = var_no_proxy;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_66481eb4d21d5b59fafd135d83450d02->m_frame.f_lineno = 700;
            tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 700;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_env_proxies == NULL );
            var_env_proxies = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( var_env_proxies );
            tmp_called_instance_2 = var_env_proxies;
            frame_66481eb4d21d5b59fafd135d83450d02->m_frame.f_lineno = 701;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_items );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 701;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 701;
                type_description_1 = "oooooooooo";
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
                    type_description_1 = "oooooooooo";
                    exception_lineno = 701;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
            tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 701;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__source_iter;
                tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


                type_description_1 = "oooooooooo";
                exception_lineno = 701;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_1;
                tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


                type_description_1 = "oooooooooo";
                exception_lineno = 701;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_2;
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                        type_description_1 = "oooooooooo";
                        exception_lineno = 701;
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

                type_description_1 = "oooooooooo";
                exception_lineno = 701;
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
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = var_k;
                var_k = tmp_assign_source_8;
                Py_INCREF( var_k );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
            {
                PyObject *old = var_v;
                var_v = tmp_assign_source_9;
                Py_INCREF( var_v );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_proxies );
            tmp_called_instance_3 = par_proxies;
            CHECK_OBJECT( var_k );
            tmp_args_element_name_1 = var_k;
            CHECK_OBJECT( var_v );
            tmp_args_element_name_2 = var_v;
            frame_66481eb4d21d5b59fafd135d83450d02->m_frame.f_lineno = 702;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_setdefault, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 702;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 701;
            type_description_1 = "oooooooooo";
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
            nuitka_bool tmp_condition_result_3;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_verify );
            tmp_compexpr_left_2 = par_verify;
            tmp_compexpr_right_2 = Py_True;
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
            CHECK_OBJECT( par_verify );
            tmp_compexpr_left_3 = par_verify;
            tmp_compexpr_right_3 = Py_None;
            tmp_or_right_value_1 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_3 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_3 = tmp_or_left_value_1;
            or_end_1:;
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
                PyObject *tmp_assign_source_10;
                int tmp_or_left_truth_2;
                PyObject *tmp_or_left_value_2;
                PyObject *tmp_or_right_value_2;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_source_name_2;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_os );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 707;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_2 = tmp_mvar_value_2;
                tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_environ );
                if ( tmp_called_instance_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 707;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_66481eb4d21d5b59fafd135d83450d02->m_frame.f_lineno = 707;
                tmp_or_left_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_REQUESTS_CA_BUNDLE_tuple, 0 ) );

                Py_DECREF( tmp_called_instance_4 );
                if ( tmp_or_left_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 707;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
                if ( tmp_or_left_truth_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_or_left_value_2 );

                    exception_lineno = 708;
                    type_description_1 = "oooooooooo";
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
                Py_DECREF( tmp_or_left_value_2 );
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_os );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 708;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_3 = tmp_mvar_value_3;
                tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_environ );
                if ( tmp_called_instance_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 708;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_66481eb4d21d5b59fafd135d83450d02->m_frame.f_lineno = 708;
                tmp_or_right_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_CURL_CA_BUNDLE_tuple, 0 ) );

                Py_DECREF( tmp_called_instance_5 );
                if ( tmp_or_right_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 708;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_10 = tmp_or_right_value_2;
                goto or_end_2;
                or_left_2:;
                tmp_assign_source_10 = tmp_or_left_value_2;
                or_end_2:;
                {
                    PyObject *old = par_verify;
                    assert( old != NULL );
                    par_verify = tmp_assign_source_10;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 711;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_proxies );
        tmp_args_element_name_3 = par_proxies;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_proxies );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 711;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_66481eb4d21d5b59fafd135d83450d02->m_frame.f_lineno = 711;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 711;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_proxies;
            assert( old != NULL );
            par_proxies = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 712;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        CHECK_OBJECT( par_stream );
        tmp_args_element_name_5 = par_stream;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_stream );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 712;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_66481eb4d21d5b59fafd135d83450d02->m_frame.f_lineno = 712;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 712;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_stream;
            assert( old != NULL );
            par_stream = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 713;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        if ( par_verify == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verify" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 713;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = par_verify;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_verify );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 713;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_66481eb4d21d5b59fafd135d83450d02->m_frame.f_lineno = 713;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 713;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_verify;
            par_verify = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 714;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_7;
        CHECK_OBJECT( par_cert );
        tmp_args_element_name_9 = par_cert;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_cert );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 714;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_66481eb4d21d5b59fafd135d83450d02->m_frame.f_lineno = 714;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 714;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_cert;
            assert( old != NULL );
            par_cert = tmp_assign_source_14;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66481eb4d21d5b59fafd135d83450d02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66481eb4d21d5b59fafd135d83450d02 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_66481eb4d21d5b59fafd135d83450d02, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_66481eb4d21d5b59fafd135d83450d02->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_66481eb4d21d5b59fafd135d83450d02, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_66481eb4d21d5b59fafd135d83450d02,
        type_description_1,
        par_self,
        par_url,
        par_proxies,
        par_stream,
        par_verify,
        par_cert,
        var_no_proxy,
        var_env_proxies,
        var_k,
        var_v
    );


    // Release cached frame.
    if ( frame_66481eb4d21d5b59fafd135d83450d02 == cache_frame_66481eb4d21d5b59fafd135d83450d02 )
    {
        Py_DECREF( frame_66481eb4d21d5b59fafd135d83450d02 );
    }
    cache_frame_66481eb4d21d5b59fafd135d83450d02 = NULL;

    assertFrameObject( frame_66481eb4d21d5b59fafd135d83450d02 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_dict_key_2 = const_str_plain_verify;
        CHECK_OBJECT( par_verify );
        tmp_dict_value_2 = par_verify;
        tmp_return_value = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_proxies;
        CHECK_OBJECT( par_proxies );
        tmp_dict_value_3 = par_proxies;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_stream;
        CHECK_OBJECT( par_stream );
        tmp_dict_value_4 = par_stream;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_cert;
        CHECK_OBJECT( par_cert );
        tmp_dict_value_5 = par_cert;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_22_merge_environment_settings );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( var_no_proxy );
    var_no_proxy = NULL;

    Py_XDECREF( var_env_proxies );
    var_env_proxies = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( var_no_proxy );
    var_no_proxy = NULL;

    Py_XDECREF( var_env_proxies );
    var_env_proxies = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_22_merge_environment_settings );
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


static PyObject *impl_requests$sessions$$$function_23_get_adapter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *var_prefix = NULL;
    PyObject *var_adapter = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_111b200b155489f61e7ed89c7c6b5932;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_111b200b155489f61e7ed89c7c6b5932 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_111b200b155489f61e7ed89c7c6b5932, codeobj_111b200b155489f61e7ed89c7c6b5932, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_111b200b155489f61e7ed89c7c6b5932 = cache_frame_111b200b155489f61e7ed89c7c6b5932;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_111b200b155489f61e7ed89c7c6b5932 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_111b200b155489f61e7ed89c7c6b5932 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_adapters );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 725;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_111b200b155489f61e7ed89c7c6b5932->m_frame.f_lineno = 725;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 725;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 725;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 725;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 725;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooo";
            exception_lineno = 725;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooo";
            exception_lineno = 725;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                    type_description_1 = "oooo";
                    exception_lineno = 725;
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

            type_description_1 = "oooo";
            exception_lineno = 725;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_prefix;
            var_prefix = tmp_assign_source_6;
            Py_INCREF( var_prefix );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_adapter;
            var_adapter = tmp_assign_source_7;
            Py_INCREF( var_adapter );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_url );
        tmp_called_instance_2 = par_url;
        frame_111b200b155489f61e7ed89c7c6b5932->m_frame.f_lineno = 727;
        tmp_source_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 727;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_startswith );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 727;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_prefix );
        tmp_called_instance_3 = var_prefix;
        frame_111b200b155489f61e7ed89c7c6b5932->m_frame.f_lineno = 727;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_lower );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 727;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_111b200b155489f61e7ed89c7c6b5932->m_frame.f_lineno = 727;
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


            exception_lineno = 727;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 727;
            type_description_1 = "oooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_adapter );
        tmp_return_value = var_adapter;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_2;
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 725;
        type_description_1 = "oooo";
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
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_InvalidSchema );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidSchema );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InvalidSchema" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 731;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        tmp_left_name_1 = const_str_digest_0cf52c61701094af14cce92132a5b4f5;
        CHECK_OBJECT( par_url );
        tmp_right_name_1 = par_url;
        tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 731;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_111b200b155489f61e7ed89c7c6b5932->m_frame.f_lineno = 731;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_raise_type_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 731;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 731;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_111b200b155489f61e7ed89c7c6b5932 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_111b200b155489f61e7ed89c7c6b5932 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_111b200b155489f61e7ed89c7c6b5932 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_111b200b155489f61e7ed89c7c6b5932, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_111b200b155489f61e7ed89c7c6b5932->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_111b200b155489f61e7ed89c7c6b5932, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_111b200b155489f61e7ed89c7c6b5932,
        type_description_1,
        par_self,
        par_url,
        var_prefix,
        var_adapter
    );


    // Release cached frame.
    if ( frame_111b200b155489f61e7ed89c7c6b5932 == cache_frame_111b200b155489f61e7ed89c7c6b5932 )
    {
        Py_DECREF( frame_111b200b155489f61e7ed89c7c6b5932 );
    }
    cache_frame_111b200b155489f61e7ed89c7c6b5932 = NULL;

    assertFrameObject( frame_111b200b155489f61e7ed89c7c6b5932 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_23_get_adapter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)var_prefix );
    Py_DECREF( var_prefix );
    var_prefix = NULL;

    CHECK_OBJECT( (PyObject *)var_adapter );
    Py_DECREF( var_adapter );
    var_adapter = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( var_prefix );
    var_prefix = NULL;

    Py_XDECREF( var_adapter );
    var_adapter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_23_get_adapter );
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


static PyObject *impl_requests$sessions$$$function_24_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_2c251a64bcf658c421cc683c0a987c00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_2c251a64bcf658c421cc683c0a987c00 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2c251a64bcf658c421cc683c0a987c00, codeobj_2c251a64bcf658c421cc683c0a987c00, module_requests$sessions, sizeof(void *)+sizeof(void *) );
    frame_2c251a64bcf658c421cc683c0a987c00 = cache_frame_2c251a64bcf658c421cc683c0a987c00;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2c251a64bcf658c421cc683c0a987c00 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2c251a64bcf658c421cc683c0a987c00 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_adapters );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 735;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2c251a64bcf658c421cc683c0a987c00->m_frame.f_lineno = 735;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_values );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 735;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 735;
            type_description_1 = "oo";
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
                type_description_1 = "oo";
                exception_lineno = 735;
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
            PyObject *old = var_v;
            var_v = tmp_assign_source_3;
            Py_INCREF( var_v );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_v );
        tmp_called_instance_2 = var_v;
        frame_2c251a64bcf658c421cc683c0a987c00->m_frame.f_lineno = 736;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 736;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 735;
        type_description_1 = "oo";
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
    RESTORE_FRAME_EXCEPTION( frame_2c251a64bcf658c421cc683c0a987c00 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c251a64bcf658c421cc683c0a987c00 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c251a64bcf658c421cc683c0a987c00, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c251a64bcf658c421cc683c0a987c00->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c251a64bcf658c421cc683c0a987c00, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2c251a64bcf658c421cc683c0a987c00,
        type_description_1,
        par_self,
        var_v
    );


    // Release cached frame.
    if ( frame_2c251a64bcf658c421cc683c0a987c00 == cache_frame_2c251a64bcf658c421cc683c0a987c00 )
    {
        Py_DECREF( frame_2c251a64bcf658c421cc683c0a987c00 );
    }
    cache_frame_2c251a64bcf658c421cc683c0a987c00 = NULL;

    assertFrameObject( frame_2c251a64bcf658c421cc683c0a987c00 );

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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_24_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

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

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_24_close );
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


static PyObject *impl_requests$sessions$$$function_25_mount( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prefix = python_pars[ 1 ];
    PyObject *par_adapter = python_pars[ 2 ];
    PyObject *var_keys_to_move = NULL;
    PyObject *var_key = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_5413b684b2fc2ff22a7a82a05f1b2673;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_FrameObject *frame_9be611a0714d2070b01cda9ab6126955_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_9be611a0714d2070b01cda9ab6126955_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_5413b684b2fc2ff22a7a82a05f1b2673 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5413b684b2fc2ff22a7a82a05f1b2673, codeobj_5413b684b2fc2ff22a7a82a05f1b2673, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5413b684b2fc2ff22a7a82a05f1b2673 = cache_frame_5413b684b2fc2ff22a7a82a05f1b2673;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5413b684b2fc2ff22a7a82a05f1b2673 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5413b684b2fc2ff22a7a82a05f1b2673 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_adapter );
        tmp_ass_subvalue_1 = par_adapter;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_adapters );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 743;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_prefix );
        tmp_ass_subscript_1 = par_prefix;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 743;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_adapters );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 744;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 744;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_9be611a0714d2070b01cda9ab6126955_2, codeobj_9be611a0714d2070b01cda9ab6126955, module_requests$sessions, sizeof(void *)+sizeof(void *) );
        frame_9be611a0714d2070b01cda9ab6126955_2 = cache_frame_9be611a0714d2070b01cda9ab6126955_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_9be611a0714d2070b01cda9ab6126955_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_9be611a0714d2070b01cda9ab6126955_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
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
                    type_description_2 = "oo";
                    exception_lineno = 744;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_5;
                Py_INCREF( outline_0_var_k );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT( outline_0_var_k );
            tmp_len_arg_1 = outline_0_var_k;
            tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_compexpr_left_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 744;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_prefix );
            tmp_len_arg_2 = par_prefix;
            tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_compexpr_right_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_1 );

                exception_lineno = 744;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            Py_DECREF( tmp_compexpr_left_1 );
            Py_DECREF( tmp_compexpr_right_1 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( outline_0_var_k );
                tmp_append_value_1 = outline_0_var_k;
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 744;
                    type_description_2 = "oo";
                    goto try_except_handler_3;
                }
            }
            branch_no_1:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 744;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_1 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_25_mount );
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
        RESTORE_FRAME_EXCEPTION( frame_9be611a0714d2070b01cda9ab6126955_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_9be611a0714d2070b01cda9ab6126955_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_9be611a0714d2070b01cda9ab6126955_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_9be611a0714d2070b01cda9ab6126955_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_9be611a0714d2070b01cda9ab6126955_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_9be611a0714d2070b01cda9ab6126955_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_9be611a0714d2070b01cda9ab6126955_2,
            type_description_2,
            outline_0_var_k,
            par_prefix
        );


        // Release cached frame.
        if ( frame_9be611a0714d2070b01cda9ab6126955_2 == cache_frame_9be611a0714d2070b01cda9ab6126955_2 )
        {
            Py_DECREF( frame_9be611a0714d2070b01cda9ab6126955_2 );
        }
        cache_frame_9be611a0714d2070b01cda9ab6126955_2 = NULL;

        assertFrameObject( frame_9be611a0714d2070b01cda9ab6126955_2 );

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
        NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_25_mount );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_k );
        outline_0_var_k = NULL;

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

        Py_XDECREF( outline_0_var_k );
        outline_0_var_k = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_25_mount );
        return NULL;
        outline_exception_1:;
        exception_lineno = 744;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert( var_keys_to_move == NULL );
        var_keys_to_move = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( var_keys_to_move );
        tmp_iter_arg_2 = var_keys_to_move;
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 746;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
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
                type_description_1 = "ooooo";
                exception_lineno = 746;
                goto try_except_handler_4;
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
            PyObject *old = var_key;
            var_key = tmp_assign_source_8;
            Py_INCREF( var_key );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_adapters );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 747;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_key );
        tmp_args_element_name_1 = var_key;
        frame_5413b684b2fc2ff22a7a82a05f1b2673->m_frame.f_lineno = 747;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_ass_subvalue_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 747;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_adapters );
        if ( tmp_ass_subscribed_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_2 );

            exception_lineno = 747;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_key );
        tmp_ass_subscript_2 = var_key;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscribed_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 747;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 746;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5413b684b2fc2ff22a7a82a05f1b2673 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5413b684b2fc2ff22a7a82a05f1b2673 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5413b684b2fc2ff22a7a82a05f1b2673, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5413b684b2fc2ff22a7a82a05f1b2673->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5413b684b2fc2ff22a7a82a05f1b2673, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5413b684b2fc2ff22a7a82a05f1b2673,
        type_description_1,
        par_self,
        par_prefix,
        par_adapter,
        var_keys_to_move,
        var_key
    );


    // Release cached frame.
    if ( frame_5413b684b2fc2ff22a7a82a05f1b2673 == cache_frame_5413b684b2fc2ff22a7a82a05f1b2673 )
    {
        Py_DECREF( frame_5413b684b2fc2ff22a7a82a05f1b2673 );
    }
    cache_frame_5413b684b2fc2ff22a7a82a05f1b2673 = NULL;

    assertFrameObject( frame_5413b684b2fc2ff22a7a82a05f1b2673 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_25_mount );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_prefix );
    Py_DECREF( par_prefix );
    par_prefix = NULL;

    CHECK_OBJECT( (PyObject *)par_adapter );
    Py_DECREF( par_adapter );
    par_adapter = NULL;

    CHECK_OBJECT( (PyObject *)var_keys_to_move );
    Py_DECREF( var_keys_to_move );
    var_keys_to_move = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_prefix );
    Py_DECREF( par_prefix );
    par_prefix = NULL;

    CHECK_OBJECT( (PyObject *)par_adapter );
    Py_DECREF( par_adapter );
    par_adapter = NULL;

    Py_XDECREF( var_keys_to_move );
    var_keys_to_move = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_25_mount );
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


static PyObject *impl_requests$sessions$$$function_26___getstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_state = NULL;
    PyObject *outline_0_var_attr = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_19740737a79ef2c65c7b8ac03bab2bf7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_a7dd71989b4f654973766af5982717ee_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a7dd71989b4f654973766af5982717ee_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_19740737a79ef2c65c7b8ac03bab2bf7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_19740737a79ef2c65c7b8ac03bab2bf7, codeobj_19740737a79ef2c65c7b8ac03bab2bf7, module_requests$sessions, sizeof(void *)+sizeof(void *) );
    frame_19740737a79ef2c65c7b8ac03bab2bf7 = cache_frame_19740737a79ef2c65c7b8ac03bab2bf7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_19740737a79ef2c65c7b8ac03bab2bf7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_19740737a79ef2c65c7b8ac03bab2bf7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___attrs__ );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 750;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 750;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            assert( tmp_dictcontraction_1__$0 == NULL );
            tmp_dictcontraction_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyDict_New();
            assert( tmp_dictcontraction_1__contraction == NULL );
            tmp_dictcontraction_1__contraction = tmp_assign_source_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_a7dd71989b4f654973766af5982717ee_2, codeobj_a7dd71989b4f654973766af5982717ee, module_requests$sessions, sizeof(void *)+sizeof(void *) );
        frame_a7dd71989b4f654973766af5982717ee_2 = cache_frame_a7dd71989b4f654973766af5982717ee_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_a7dd71989b4f654973766af5982717ee_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_a7dd71989b4f654973766af5982717ee_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_dictcontraction_1__$0 );
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
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
                    type_description_2 = "oo";
                    exception_lineno = 750;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_dictcontraction_1__iter_value_0 );
            tmp_assign_source_5 = tmp_dictcontraction_1__iter_value_0;
            {
                PyObject *old = outline_0_var_attr;
                outline_0_var_attr = tmp_assign_source_5;
                Py_INCREF( outline_0_var_attr );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            CHECK_OBJECT( par_self );
            tmp_getattr_target_1 = par_self;
            CHECK_OBJECT( outline_0_var_attr );
            tmp_getattr_attr_1 = outline_0_var_attr;
            tmp_getattr_default_1 = Py_None;
            tmp_dictset_value = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 750;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( tmp_dictcontraction_1__contraction );
            tmp_dictset_dict = tmp_dictcontraction_1__contraction;
            CHECK_OBJECT( outline_0_var_attr );
            tmp_dictset_key = outline_0_var_attr;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 750;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 750;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_dictcontraction_1__contraction );
        tmp_assign_source_1 = tmp_dictcontraction_1__contraction;
        Py_INCREF( tmp_assign_source_1 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_26___getstate__ );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__$0 );
        Py_DECREF( tmp_dictcontraction_1__$0 );
        tmp_dictcontraction_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__contraction );
        Py_DECREF( tmp_dictcontraction_1__contraction );
        tmp_dictcontraction_1__contraction = NULL;

        Py_XDECREF( tmp_dictcontraction_1__iter_value_0 );
        tmp_dictcontraction_1__iter_value_0 = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__$0 );
        Py_DECREF( tmp_dictcontraction_1__$0 );
        tmp_dictcontraction_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__contraction );
        Py_DECREF( tmp_dictcontraction_1__contraction );
        tmp_dictcontraction_1__contraction = NULL;

        Py_XDECREF( tmp_dictcontraction_1__iter_value_0 );
        tmp_dictcontraction_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_a7dd71989b4f654973766af5982717ee_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_a7dd71989b4f654973766af5982717ee_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_a7dd71989b4f654973766af5982717ee_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_a7dd71989b4f654973766af5982717ee_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_a7dd71989b4f654973766af5982717ee_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_a7dd71989b4f654973766af5982717ee_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_a7dd71989b4f654973766af5982717ee_2,
            type_description_2,
            outline_0_var_attr,
            par_self
        );


        // Release cached frame.
        if ( frame_a7dd71989b4f654973766af5982717ee_2 == cache_frame_a7dd71989b4f654973766af5982717ee_2 )
        {
            Py_DECREF( frame_a7dd71989b4f654973766af5982717ee_2 );
        }
        cache_frame_a7dd71989b4f654973766af5982717ee_2 = NULL;

        assertFrameObject( frame_a7dd71989b4f654973766af5982717ee_2 );

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
        NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_26___getstate__ );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_attr );
        outline_0_var_attr = NULL;

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

        Py_XDECREF( outline_0_var_attr );
        outline_0_var_attr = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_26___getstate__ );
        return NULL;
        outline_exception_1:;
        exception_lineno = 750;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert( var_state == NULL );
        var_state = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19740737a79ef2c65c7b8ac03bab2bf7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19740737a79ef2c65c7b8ac03bab2bf7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_19740737a79ef2c65c7b8ac03bab2bf7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_19740737a79ef2c65c7b8ac03bab2bf7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_19740737a79ef2c65c7b8ac03bab2bf7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_19740737a79ef2c65c7b8ac03bab2bf7,
        type_description_1,
        par_self,
        var_state
    );


    // Release cached frame.
    if ( frame_19740737a79ef2c65c7b8ac03bab2bf7 == cache_frame_19740737a79ef2c65c7b8ac03bab2bf7 )
    {
        Py_DECREF( frame_19740737a79ef2c65c7b8ac03bab2bf7 );
    }
    cache_frame_19740737a79ef2c65c7b8ac03bab2bf7 = NULL;

    assertFrameObject( frame_19740737a79ef2c65c7b8ac03bab2bf7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    CHECK_OBJECT( var_state );
    tmp_return_value = var_state;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_26___getstate__ );
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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_26___getstate__ );
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


static PyObject *impl_requests$sessions$$$function_27___setstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_state = python_pars[ 1 ];
    PyObject *var_attr = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_312284e0ac37b13728f84427268ae50e;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_312284e0ac37b13728f84427268ae50e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_312284e0ac37b13728f84427268ae50e, codeobj_312284e0ac37b13728f84427268ae50e, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_312284e0ac37b13728f84427268ae50e = cache_frame_312284e0ac37b13728f84427268ae50e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_312284e0ac37b13728f84427268ae50e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_312284e0ac37b13728f84427268ae50e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_state );
        tmp_called_instance_1 = par_state;
        frame_312284e0ac37b13728f84427268ae50e->m_frame.f_lineno = 754;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 754;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 754;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 754;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 754;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooo";
            exception_lineno = 754;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooo";
            exception_lineno = 754;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                    type_description_1 = "oooo";
                    exception_lineno = 754;
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

            type_description_1 = "oooo";
            exception_lineno = 754;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_attr;
            var_attr = tmp_assign_source_6;
            Py_INCREF( var_attr );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_7;
            Py_INCREF( var_value );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT( par_self );
        tmp_setattr_target_1 = par_self;
        CHECK_OBJECT( var_attr );
        tmp_setattr_attr_1 = var_attr;
        CHECK_OBJECT( var_value );
        tmp_setattr_value_1 = var_value;
        tmp_capi_result_1 = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
        if ( tmp_capi_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 755;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 754;
        type_description_1 = "oooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_312284e0ac37b13728f84427268ae50e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_312284e0ac37b13728f84427268ae50e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_312284e0ac37b13728f84427268ae50e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_312284e0ac37b13728f84427268ae50e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_312284e0ac37b13728f84427268ae50e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_312284e0ac37b13728f84427268ae50e,
        type_description_1,
        par_self,
        par_state,
        var_attr,
        var_value
    );


    // Release cached frame.
    if ( frame_312284e0ac37b13728f84427268ae50e == cache_frame_312284e0ac37b13728f84427268ae50e )
    {
        Py_DECREF( frame_312284e0ac37b13728f84427268ae50e );
    }
    cache_frame_312284e0ac37b13728f84427268ae50e = NULL;

    assertFrameObject( frame_312284e0ac37b13728f84427268ae50e );

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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_27___setstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_27___setstate__ );
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


static PyObject *impl_requests$sessions$$$function_28_session( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ead4de2350069ce0c969faaf027f196a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ead4de2350069ce0c969faaf027f196a = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_ead4de2350069ce0c969faaf027f196a, codeobj_ead4de2350069ce0c969faaf027f196a, module_requests$sessions, 0 );
    frame_ead4de2350069ce0c969faaf027f196a = cache_frame_ead4de2350069ce0c969faaf027f196a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ead4de2350069ce0c969faaf027f196a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ead4de2350069ce0c969faaf027f196a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Session );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Session );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Session" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 770;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_ead4de2350069ce0c969faaf027f196a->m_frame.f_lineno = 770;
        tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 770;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ead4de2350069ce0c969faaf027f196a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ead4de2350069ce0c969faaf027f196a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ead4de2350069ce0c969faaf027f196a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ead4de2350069ce0c969faaf027f196a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ead4de2350069ce0c969faaf027f196a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ead4de2350069ce0c969faaf027f196a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ead4de2350069ce0c969faaf027f196a,
        type_description_1
    );


    // Release cached frame.
    if ( frame_ead4de2350069ce0c969faaf027f196a == cache_frame_ead4de2350069ce0c969faaf027f196a )
    {
        Py_DECREF( frame_ead4de2350069ce0c969faaf027f196a );
    }
    cache_frame_ead4de2350069ce0c969faaf027f196a = NULL;

    assertFrameObject( frame_ead4de2350069ce0c969faaf027f196a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_28_session );
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



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_10___enter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_10___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 300
        const_str_digest_e811a9baa0ffd56d1b59860a4fbec4dc,
#endif
        codeobj_6f4e9f99af6d4b48ad371e4fff1ea832,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_11___exit__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_11___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 300
        const_str_digest_7905fa3cf6a1b7f0e3f1aa2a48144462,
#endif
        codeobj_57ad141d27ce7ee6b7a2e485d5cd8bad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_12_prepare_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_12_prepare_request,
        const_str_plain_prepare_request,
#if PYTHON_VERSION >= 300
        const_str_digest_e53d4a974ffbd6783b2c04e911c575f6,
#endif
        codeobj_054888eaf456c72dfe2b870bc9f8c20e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_bb0c986a4d44a65e09f2da3af698fc66,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_13_request( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_13_request,
        const_str_plain_request,
#if PYTHON_VERSION >= 300
        const_str_digest_cb48bb05adb0e091eb1c115fffeb4c8a,
#endif
        codeobj_993f1053533082b129eaebf9c7d0ec24,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_3e0ba908deebf0523c3ebb720f614f88,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_14_get(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_14_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 300
        const_str_digest_33222436398dec9a5c85de068ea71100,
#endif
        codeobj_79b5c72a051e844324ec83d768774c36,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_28eb6d6e3c84195b87f5eda206592417,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_15_options(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_15_options,
        const_str_plain_options,
#if PYTHON_VERSION >= 300
        const_str_digest_69a73433942a43d30c3208872597fbc4,
#endif
        codeobj_29d86f83de1d534eb7fcddd6956d0094,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_3773766f3922dc10926506cd67493626,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_16_head(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_16_head,
        const_str_plain_head,
#if PYTHON_VERSION >= 300
        const_str_digest_92db2e8ed71c2e367d5357b04d0462c4,
#endif
        codeobj_009efd8cfb7c38e1657601a95f613a2a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_83a4d90de9f8b0862d918bd04dff2cc4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_17_post( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_17_post,
        const_str_plain_post,
#if PYTHON_VERSION >= 300
        const_str_digest_df652bc3c79065c8732d0893d1f77479,
#endif
        codeobj_7bc40ad62e23397e44fc80db4c38dd89,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_df29e6ce65bab6565825f33ca253f321,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_18_put( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_18_put,
        const_str_plain_put,
#if PYTHON_VERSION >= 300
        const_str_digest_f7f26a899d15b0307bb1388a5bda3892,
#endif
        codeobj_fb045110390fd2999138da9ddcefd9e1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_5a03fab32d979e313c02d1eea965ab54,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_19_patch( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_19_patch,
        const_str_plain_patch,
#if PYTHON_VERSION >= 300
        const_str_digest_382a6a157ce1707d0f242d5ea1fea71c,
#endif
        codeobj_e6b285891199cb0e01da2586e28b62cf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_5f2af7e954563f0f1b8598cb903357ce,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_1_merge_setting( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_1_merge_setting,
        const_str_plain_merge_setting,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_56d28986c1e7bbfdeb665a35a5cac7ed,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_67055a59082a8581b7a2c86a2d1c1f83,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_20_delete(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_20_delete,
        const_str_plain_delete,
#if PYTHON_VERSION >= 300
        const_str_digest_2326510b09c332a083755ce27f812d9d,
#endif
        codeobj_89c93d71801f1897d52f3ee7f588c6f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_489820f4fee1c95447c20d7aee4bc394,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_21_send(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_21_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 300
        const_str_digest_962cc75eef259550816f5f0e877500ef,
#endif
        codeobj_1180d5161be01fba696caf667cc02d31,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_48d563b3d6be908aabde89b2dd46bb34,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_22_merge_environment_settings(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_22_merge_environment_settings,
        const_str_plain_merge_environment_settings,
#if PYTHON_VERSION >= 300
        const_str_digest_e46ea1d9ca0677a0f1ae14af39cbbfc2,
#endif
        codeobj_66481eb4d21d5b59fafd135d83450d02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_3dc3a32088712bcdf672f48f5c0bf5c5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_23_get_adapter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_23_get_adapter,
        const_str_plain_get_adapter,
#if PYTHON_VERSION >= 300
        const_str_digest_a1b7979c671004beb348b3acf3fa3833,
#endif
        codeobj_111b200b155489f61e7ed89c7c6b5932,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_19cf6e4b470974146c094a9eb3c6c9c0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_24_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_24_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_ab50d4439ade3e74bd04aeb12b9713ae,
#endif
        codeobj_2c251a64bcf658c421cc683c0a987c00,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_7e68f1bdd87458491c575c9c8a14f24c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_25_mount(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_25_mount,
        const_str_plain_mount,
#if PYTHON_VERSION >= 300
        const_str_digest_70e065559513e1162375c7bbb9f9de21,
#endif
        codeobj_5413b684b2fc2ff22a7a82a05f1b2673,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_d41fb1dddc6f7cfe3e1d581e7ccdd852,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_26___getstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_26___getstate__,
        const_str_plain___getstate__,
#if PYTHON_VERSION >= 300
        const_str_digest_1e854b3c946780bd62f1ad991507dc9c,
#endif
        codeobj_19740737a79ef2c65c7b8ac03bab2bf7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_27___setstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_27___setstate__,
        const_str_plain___setstate__,
#if PYTHON_VERSION >= 300
        const_str_digest_b49e9dfe95a484cf32f4e0dcf61e3c53,
#endif
        codeobj_312284e0ac37b13728f84427268ae50e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_28_session(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_28_session,
        const_str_plain_session,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ead4de2350069ce0c969faaf027f196a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_73d6d8215c67828c30ea5a0548aac597,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_2_merge_hooks( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_2_merge_hooks,
        const_str_plain_merge_hooks,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a9492bbab880f1e457316bec4d33eec4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_0334ac5a65e948ab1a00ac2f5cfe75c1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_3_get_redirect_target(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_3_get_redirect_target,
        const_str_plain_get_redirect_target,
#if PYTHON_VERSION >= 300
        const_str_digest_0850b94f6eea1bda1db9b25ee4381193,
#endif
        codeobj_af14358177050e80d3ab3fd8db342b9f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_0da4ca7e1d267b7753ceb4b2770531dd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_4_should_strip_auth(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_4_should_strip_auth,
        const_str_plain_should_strip_auth,
#if PYTHON_VERSION >= 300
        const_str_digest_5ff5f1f3210d8f43b1d10d053061c2c7,
#endif
        codeobj_bcc11b79615511468244ddf1e96abc29,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_0186b0786c0e31948d9081496849d709,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_5_resolve_redirects( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_5_resolve_redirects,
        const_str_plain_resolve_redirects,
#if PYTHON_VERSION >= 300
        const_str_digest_f2636f029da6046e540b6721c0c69c64,
#endif
        codeobj_385316c0c356d085b618445227bee3c7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_83853292c48098773b03eae760dcfe38,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_6_rebuild_auth(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_6_rebuild_auth,
        const_str_plain_rebuild_auth,
#if PYTHON_VERSION >= 300
        const_str_digest_0bca56866bcf0b75f74d31c9da00963c,
#endif
        codeobj_2cf8d1ef62c5e4d6ede165a722d18352,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_1c229bac7f81999111a1bfbc0984644e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_7_rebuild_proxies(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_7_rebuild_proxies,
        const_str_plain_rebuild_proxies,
#if PYTHON_VERSION >= 300
        const_str_digest_dfcd0fe2f27ce725c44199fb8c6f7973,
#endif
        codeobj_e37288314cccff983eccab6609ffbf3b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_131435ff30698deac2d874478938fdd4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_8_rebuild_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_8_rebuild_method,
        const_str_plain_rebuild_method,
#if PYTHON_VERSION >= 300
        const_str_digest_8f1f8a6d2be18d195ed7df0d436d212e,
#endif
        codeobj_bba2e37927ab45d3eeea43d803f006de,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        const_str_digest_8b3e93dde92996b29edc87dca601bdd4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_9___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_fa3b2211e965dde050b87ae23cfb152f,
#endif
        codeobj_62d4e1aaf3d402595a3f4705af446542,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$sessions,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$sessions =
{
    PyModuleDef_HEAD_INIT,
    "requests.sessions",
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

MOD_INIT_DECL( requests$sessions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$sessions );
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
    puts("requests.sessions: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.sessions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.sessions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$sessions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$sessions = Py_InitModule4(
        "requests.sessions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$sessions = PyModule_Create( &mdef_requests$sessions );
#endif

    moduledict_requests$sessions = MODULE_DICT( module_requests$sessions );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_requests$sessions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$sessions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$sessions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$sessions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$sessions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_147a008155143b0e10b18dcd3be84fb5, module_requests$sessions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    struct Nuitka_FrameObject *frame_c2ebeebfbf84cfd9ca6c3eadb37c3737;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    int tmp_res;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_requests$sessions_95 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_2ad20751beca140024f522ac59e7f97b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2ad20751beca140024f522ac59e7f97b_2 = NULL;
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
    PyObject *locals_requests$sessions_340 = NULL;
    struct Nuitka_FrameObject *frame_559361b8510a977153a18cff600dd738_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_559361b8510a977153a18cff600dd738_3 = NULL;
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
        tmp_assign_source_1 = const_str_digest_21406c84cc6f02469836def5bcdcadba;
        UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_c2ebeebfbf84cfd9ca6c3eadb37c3737 = MAKE_MODULE_FRAME( codeobj_c2ebeebfbf84cfd9ca6c3eadb37c3737, module_requests$sessions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c2ebeebfbf84cfd9ca6c3eadb37c3737 );
    assert( Py_REFCNT( frame_c2ebeebfbf84cfd9ca6c3eadb37c3737 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_os;
        tmp_globals_name_1 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 11;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_time;
        tmp_globals_name_3 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 12;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        assert( !(tmp_assign_source_6 == NULL) );
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_datetime;
        tmp_globals_name_4 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_timedelta_tuple;
        tmp_level_name_4 = const_int_0;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 13;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_timedelta );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_timedelta, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_auth;
        tmp_globals_name_5 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain__basic_auth_str_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 15;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain__basic_auth_str,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain__basic_auth_str );
        }

        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain__basic_auth_str, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_compat;
        tmp_globals_name_6 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_2c98c4c331bb707fb97c99607664a158_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 16;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_cookielib,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_cookielib );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookielib, tmp_assign_source_10 );
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
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_is_py3,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_is_py3 );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_is_py3, tmp_assign_source_11 );
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
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_OrderedDict,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_OrderedDict );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_OrderedDict, tmp_assign_source_12 );
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
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_urljoin,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_urljoin );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urljoin, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_urlparse,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_urlparse );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_Mapping,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Mapping );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Mapping, tmp_assign_source_15 );
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_cookies;
        tmp_globals_name_7 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_88099abfc2d744feb222ef53bae67000_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 17;
        tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_cookiejar_from_dict,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_cookiejar_from_dict );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_extract_cookies_to_jar,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_extract_cookies_to_jar );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_RequestsCookieJar,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_RequestsCookieJar );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_merge_cookies,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_merge_cookies );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_cookies, tmp_assign_source_20 );
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_models;
        tmp_globals_name_8 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 19;
        tmp_assign_source_21 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_13 ) )
        {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_Request,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Request );
        }

        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Request, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_14 ) )
        {
           tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_PreparedRequest,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_PreparedRequest );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_PreparedRequest, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_15 ) )
        {
           tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_DEFAULT_REDIRECT_LIMIT,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_DEFAULT_REDIRECT_LIMIT );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_DEFAULT_REDIRECT_LIMIT, tmp_assign_source_24 );
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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain_hooks;
        tmp_globals_name_9 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 20;
        tmp_assign_source_25 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_16 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_16 ) )
        {
           tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_default_hooks,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_default_hooks );
        }

        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_default_hooks, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_17 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_17 ) )
        {
           tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_dispatch_hook,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_dispatch_hook );
        }

        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_dispatch_hook, tmp_assign_source_27 );
    }
    goto try_end_4;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain__internal_utils;
        tmp_globals_name_10 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_to_native_string_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 21;
        tmp_import_name_from_18 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_import_name_from_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_18 ) )
        {
           tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_to_native_string,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_to_native_string );
        }

        Py_DECREF( tmp_import_name_from_18 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_native_string, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_utils;
        tmp_globals_name_11 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_cc65bfcb889275d4618cf0078e40b354_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 22;
        tmp_assign_source_29 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_5__module == NULL );
        tmp_import_from_5__module = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_19 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_19 ) )
        {
           tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_to_key_val_list,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_to_key_val_list );
        }

        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_key_val_list, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_20 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_20 ) )
        {
           tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_default_headers,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_default_headers );
        }

        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_default_headers, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_21 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_21 ) )
        {
           tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_DEFAULT_PORTS,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_DEFAULT_PORTS );
        }

        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_DEFAULT_PORTS, tmp_assign_source_32 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_plain_exceptions;
        tmp_globals_name_12 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple;
        tmp_level_name_12 = const_int_pos_1;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 23;
        tmp_assign_source_33 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_6__module == NULL );
        tmp_import_from_6__module = tmp_assign_source_33;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_22 = tmp_import_from_6__module;
        if ( PyModule_Check( tmp_import_name_from_22 ) )
        {
           tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_TooManyRedirects,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_TooManyRedirects );
        }

        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_TooManyRedirects, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_23 = tmp_import_from_6__module;
        if ( PyModule_Check( tmp_import_name_from_23 ) )
        {
           tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_InvalidSchema,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_InvalidSchema );
        }

        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_InvalidSchema, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_24 = tmp_import_from_6__module;
        if ( PyModule_Check( tmp_import_name_from_24 ) )
        {
           tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_ChunkedEncodingError,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_ChunkedEncodingError );
        }

        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_25 = tmp_import_from_6__module;
        if ( PyModule_Check( tmp_import_name_from_25 ) )
        {
           tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_ContentDecodingError,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_ContentDecodingError );
        }

        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_ContentDecodingError, tmp_assign_source_37 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = const_str_plain_structures;
        tmp_globals_name_13 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_13 = Py_None;
        tmp_fromlist_name_13 = const_tuple_str_plain_CaseInsensitiveDict_tuple;
        tmp_level_name_13 = const_int_pos_1;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 26;
        tmp_import_name_from_26 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
        if ( tmp_import_name_from_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_26 ) )
        {
           tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_CaseInsensitiveDict,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_CaseInsensitiveDict );
        }

        Py_DECREF( tmp_import_name_from_26 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_name_14;
        PyObject *tmp_locals_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = const_str_plain_adapters;
        tmp_globals_name_14 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_14 = Py_None;
        tmp_fromlist_name_14 = const_tuple_str_plain_HTTPAdapter_tuple;
        tmp_level_name_14 = const_int_pos_1;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 27;
        tmp_import_name_from_27 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
        if ( tmp_import_name_from_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_27 ) )
        {
           tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_HTTPAdapter,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_HTTPAdapter );
        }

        Py_DECREF( tmp_import_name_from_27 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_HTTPAdapter, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_name_15;
        PyObject *tmp_locals_name_15;
        PyObject *tmp_fromlist_name_15;
        PyObject *tmp_level_name_15;
        tmp_name_name_15 = const_str_plain_utils;
        tmp_globals_name_15 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_15 = Py_None;
        tmp_fromlist_name_15 = const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple;
        tmp_level_name_15 = const_int_pos_1;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 29;
        tmp_assign_source_40 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_7__module == NULL );
        tmp_import_from_7__module = tmp_assign_source_40;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_28 = tmp_import_from_7__module;
        if ( PyModule_Check( tmp_import_name_from_28 ) )
        {
           tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_requote_uri,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_requote_uri );
        }

        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_requote_uri, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_29 = tmp_import_from_7__module;
        if ( PyModule_Check( tmp_import_name_from_29 ) )
        {
           tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_get_environ_proxies,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_get_environ_proxies );
        }

        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_environ_proxies, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_30 = tmp_import_from_7__module;
        if ( PyModule_Check( tmp_import_name_from_30 ) )
        {
           tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_get_netrc_auth,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_get_netrc_auth );
        }

        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_netrc_auth, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_31 = tmp_import_from_7__module;
        if ( PyModule_Check( tmp_import_name_from_31 ) )
        {
           tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_should_bypass_proxies,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain_should_bypass_proxies );
        }

        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_should_bypass_proxies, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_32 = tmp_import_from_7__module;
        if ( PyModule_Check( tmp_import_name_from_32 ) )
        {
           tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_get_auth_from_url,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_get_auth_from_url );
        }

        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_auth_from_url, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_33 = tmp_import_from_7__module;
        if ( PyModule_Check( tmp_import_name_from_33 ) )
        {
           tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_rewind_body,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain_rewind_body );
        }

        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_rewind_body, tmp_assign_source_46 );
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_7__module );
    Py_DECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_7__module );
    Py_DECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_34;
        PyObject *tmp_name_name_16;
        PyObject *tmp_globals_name_16;
        PyObject *tmp_locals_name_16;
        PyObject *tmp_fromlist_name_16;
        PyObject *tmp_level_name_16;
        tmp_name_name_16 = const_str_plain_status_codes;
        tmp_globals_name_16 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_16 = Py_None;
        tmp_fromlist_name_16 = const_tuple_str_plain_codes_tuple;
        tmp_level_name_16 = const_int_pos_1;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 34;
        tmp_import_name_from_34 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
        if ( tmp_import_name_from_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_34 ) )
        {
           tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_codes,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_codes );
        }

        Py_DECREF( tmp_import_name_from_34 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes, tmp_assign_source_47 );
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_name_17;
        PyObject *tmp_globals_name_17;
        PyObject *tmp_locals_name_17;
        PyObject *tmp_fromlist_name_17;
        PyObject *tmp_level_name_17;
        tmp_name_name_17 = const_str_plain_models;
        tmp_globals_name_17 = (PyObject *)moduledict_requests$sessions;
        tmp_locals_name_17 = Py_None;
        tmp_fromlist_name_17 = const_tuple_str_plain_REDIRECT_STATI_tuple;
        tmp_level_name_17 = const_int_pos_1;
        frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 37;
        tmp_import_name_from_35 = IMPORT_MODULE5( tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17 );
        if ( tmp_import_name_from_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_35 ) )
        {
           tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_requests$sessions,
                const_str_plain_REDIRECT_STATI,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_35, const_str_plain_REDIRECT_STATI );
        }

        Py_DECREF( tmp_import_name_from_35 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_REDIRECT_STATI, tmp_assign_source_48 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_platform );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_win32;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

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
        // Tried code:
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_time );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 42;

                goto try_except_handler_8;
            }

            tmp_source_name_2 = tmp_mvar_value_4;
            tmp_assign_source_49 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_perf_counter );
            if ( tmp_assign_source_49 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;

                goto try_except_handler_8;
            }
            UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock, tmp_assign_source_49 );
        }
        goto try_end_8;
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

        // Preserve existing published exception.
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_1 );
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_1 );
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_1 );

        if ( exception_keeper_tb_8 == NULL )
        {
            exception_keeper_tb_8 = MAKE_TRACEBACK( frame_c2ebeebfbf84cfd9ca6c3eadb37c3737, exception_keeper_lineno_8 );
        }
        else if ( exception_keeper_lineno_8 != 0 )
        {
            exception_keeper_tb_8 = ADD_TRACEBACK( exception_keeper_tb_8, frame_c2ebeebfbf84cfd9ca6c3eadb37c3737, exception_keeper_lineno_8 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
        PyException_SetTraceback( exception_keeper_value_8, (PyObject *)exception_keeper_tb_8 );
        PUBLISH_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_AttributeError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;

                goto try_except_handler_9;
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
                PyObject *tmp_assign_source_50;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_5;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_time );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 44;

                    goto try_except_handler_9;
                }

                tmp_source_name_3 = tmp_mvar_value_5;
                tmp_assign_source_50 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_clock );
                if ( tmp_assign_source_50 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 44;

                    goto try_except_handler_9;
                }
                UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock, tmp_assign_source_50 );
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 41;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame) frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = exception_tb->tb_lineno;

            goto try_except_handler_9;
            branch_end_2:;
        }
        goto try_end_9;
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

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_1;
        // End of try:
        try_end_9:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto try_end_8;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$sessions );
        return MOD_RETURN_VALUE( NULL );
        // End of try:
        try_end_8:;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_time );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 46;

                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_6;
            tmp_assign_source_51 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_time );
            if ( tmp_assign_source_51 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock, tmp_assign_source_51 );
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_OrderedDict );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OrderedDict );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OrderedDict" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_7;
        tmp_defaults_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_assign_source_52 = MAKE_FUNCTION_requests$sessions$$$function_1_merge_setting( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting, tmp_assign_source_52 );
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_OrderedDict );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OrderedDict );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OrderedDict" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_8;
        tmp_defaults_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
        tmp_assign_source_53 = MAKE_FUNCTION_requests$sessions$$$function_2_merge_hooks( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_hooks, tmp_assign_source_53 );
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_54;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_3;
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


            exception_lineno = 95;

            goto try_except_handler_10;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 95;

            goto try_except_handler_10;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_1 != NULL );
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_type_object_tuple;
        tmp_assign_source_55 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_55;
    }
    {
        nuitka_bool tmp_condition_result_4;
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


            exception_lineno = 95;

            goto try_except_handler_10;
        }
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
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;

            goto try_except_handler_10;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_5 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_6 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;

                goto try_except_handler_10;
            }
            tmp_args_name_1 = const_tuple_str_plain_SessionRedirectMixin_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 95;
            tmp_assign_source_56 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_56 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;

                goto try_except_handler_10;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_56;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_7 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;

                goto try_except_handler_10;
            }
            tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_8;
                PyObject *tmp_type_arg_1;
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


                    exception_lineno = 95;

                    goto try_except_handler_10;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_1 = tmp_class_creation_1__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_source_name_8 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 95;

                    goto try_except_handler_10;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 95;

                    goto try_except_handler_10;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 95;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_10;
            }
            branch_no_5:;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_57;
            tmp_assign_source_57 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_57;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_requests$sessions_95 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_147a008155143b0e10b18dcd3be84fb5;
        tmp_res = PyObject_SetItem( locals_requests$sessions_95, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_plain_SessionRedirectMixin;
        tmp_res = PyObject_SetItem( locals_requests$sessions_95, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;

            goto try_except_handler_12;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_2ad20751beca140024f522ac59e7f97b_2, codeobj_2ad20751beca140024f522ac59e7f97b, module_requests$sessions, sizeof(void *) );
        frame_2ad20751beca140024f522ac59e7f97b_2 = cache_frame_2ad20751beca140024f522ac59e7f97b_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_2ad20751beca140024f522ac59e7f97b_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_2ad20751beca140024f522ac59e7f97b_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_3_get_redirect_target(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_95, const_str_plain_get_redirect_target, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_4_should_strip_auth(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_95, const_str_plain_should_strip_auth, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_false_none_true_none_none_false_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_5_resolve_redirects( tmp_defaults_3 );



            tmp_res = PyObject_SetItem( locals_requests$sessions_95, const_str_plain_resolve_redirects, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_6_rebuild_auth(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_95, const_str_plain_rebuild_auth, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_7_rebuild_proxies(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_95, const_str_plain_rebuild_proxies, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_8_rebuild_method(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_95, const_str_plain_rebuild_method, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_2ad20751beca140024f522ac59e7f97b_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_2ad20751beca140024f522ac59e7f97b_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_2ad20751beca140024f522ac59e7f97b_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_2ad20751beca140024f522ac59e7f97b_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_2ad20751beca140024f522ac59e7f97b_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_2ad20751beca140024f522ac59e7f97b_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_2ad20751beca140024f522ac59e7f97b_2 == cache_frame_2ad20751beca140024f522ac59e7f97b_2 )
        {
            Py_DECREF( frame_2ad20751beca140024f522ac59e7f97b_2 );
        }
        cache_frame_2ad20751beca140024f522ac59e7f97b_2 = NULL;

        assertFrameObject( frame_2ad20751beca140024f522ac59e7f97b_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_12;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_SessionRedirectMixin;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_requests$sessions_95;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 95;
            tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;

                goto try_except_handler_12;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_59;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_58 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_58 );
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$sessions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF( locals_requests$sessions_95 );
        locals_requests$sessions_95 = NULL;
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

        Py_DECREF( locals_requests$sessions_95 );
        locals_requests$sessions_95 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$sessions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$sessions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 95;
        goto try_except_handler_10;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_SessionRedirectMixin, tmp_assign_source_58 );
    }
    goto try_end_10;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
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
        PyObject *tmp_assign_source_60;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_SessionRedirectMixin );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SessionRedirectMixin );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SessionRedirectMixin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 340;

            goto try_except_handler_13;
        }

        tmp_tuple_element_5 = tmp_mvar_value_9;
        tmp_assign_source_60 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_assign_source_60, 0, tmp_tuple_element_5 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;

            goto try_except_handler_13;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 340;

            goto try_except_handler_13;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_1 = tmp_class_creation_2__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;

            goto try_except_handler_13;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
        Py_DECREF( tmp_type_arg_2 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;

            goto try_except_handler_13;
        }
        condexpr_end_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_62 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;

            goto try_except_handler_13;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_62;
    }
    {
        nuitka_bool tmp_condition_result_8;
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


            exception_lineno = 340;

            goto try_except_handler_13;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;

            goto try_except_handler_13;
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_9 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___prepare__ );
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
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_10 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;

                goto try_except_handler_13;
            }
            tmp_tuple_element_6 = const_str_plain_Session;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 340;
            tmp_assign_source_63 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_63 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;

                goto try_except_handler_13;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_63;
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_11 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_11, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;

                goto try_except_handler_13;
            }
            tmp_condition_result_10 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_12;
                PyObject *tmp_type_arg_3;
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


                    exception_lineno = 340;

                    goto try_except_handler_13;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_3 = tmp_class_creation_2__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1( tmp_type_arg_3 );
                assert( !(tmp_source_name_12 == NULL) );
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 340;

                    goto try_except_handler_13;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_7 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 340;

                    goto try_except_handler_13;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 340;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_13;
            }
            branch_no_8:;
        }
        goto branch_end_7;
        branch_no_7:;
        {
            PyObject *tmp_assign_source_64;
            tmp_assign_source_64 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_64;
        }
        branch_end_7:;
    }
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_requests$sessions_340 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_147a008155143b0e10b18dcd3be84fb5;
        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_digest_e8d5174c22a95e9965201ef3b005935d;
        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_plain_Session;
        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;

            goto try_except_handler_15;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_559361b8510a977153a18cff600dd738_3, codeobj_559361b8510a977153a18cff600dd738, module_requests$sessions, sizeof(void *) );
        frame_559361b8510a977153a18cff600dd738_3 = cache_frame_559361b8510a977153a18cff600dd738_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_559361b8510a977153a18cff600dd738_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_559361b8510a977153a18cff600dd738_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = LIST_COPY( const_list_dc982aca766e4d1362a255cd6d36b4fb_list );
        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain___attrs__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_9___init__(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_10___enter__(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain___enter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_11___exit__(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain___exit__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_12_prepare_request(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_prepare_request, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_13_request( tmp_defaults_4 );



            tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_request, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 466;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_14_get(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_get, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 537;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_15_options(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_options, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 548;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_16_head(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_head, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 559;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_none_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_17_post( tmp_defaults_5 );



            tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_post, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 570;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_6 );
            tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_18_put( tmp_defaults_6 );



            tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_put, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 583;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_7 );
            tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_19_patch( tmp_defaults_7 );



            tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_patch, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 595;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_20_delete(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_delete, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 607;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_21_send(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_send, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 617;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_22_merge_environment_settings(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_merge_environment_settings, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 690;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_23_get_adapter(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_get_adapter, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 719;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_24_close(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_close, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 733;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_25_mount(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain_mount, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 738;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_26___getstate__(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain___getstate__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 749;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_27___setstate__(  );



        tmp_res = PyObject_SetItem( locals_requests$sessions_340, const_str_plain___setstate__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 753;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_559361b8510a977153a18cff600dd738_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_559361b8510a977153a18cff600dd738_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_559361b8510a977153a18cff600dd738_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_559361b8510a977153a18cff600dd738_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_559361b8510a977153a18cff600dd738_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_559361b8510a977153a18cff600dd738_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_559361b8510a977153a18cff600dd738_3 == cache_frame_559361b8510a977153a18cff600dd738_3 )
        {
            Py_DECREF( frame_559361b8510a977153a18cff600dd738_3 );
        }
        cache_frame_559361b8510a977153a18cff600dd738_3 = NULL;

        assertFrameObject( frame_559361b8510a977153a18cff600dd738_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_15;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = const_str_plain_Session;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
            tmp_tuple_element_8 = locals_requests$sessions_340;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame.f_lineno = 340;
            tmp_assign_source_66 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_66 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;

                goto try_except_handler_15;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_65 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_65 );
        goto try_return_handler_15;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$sessions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF( locals_requests$sessions_340 );
        locals_requests$sessions_340 = NULL;
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

        Py_DECREF( locals_requests$sessions_340 );
        locals_requests$sessions_340 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$sessions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$sessions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 340;
        goto try_except_handler_13;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Session, tmp_assign_source_65 );
    }
    goto try_end_11;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2ebeebfbf84cfd9ca6c3eadb37c3737 );
#endif
    popFrameStack();

    assertFrameObject( frame_c2ebeebfbf84cfd9ca6c3eadb37c3737 );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2ebeebfbf84cfd9ca6c3eadb37c3737 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c2ebeebfbf84cfd9ca6c3eadb37c3737, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c2ebeebfbf84cfd9ca6c3eadb37c3737->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c2ebeebfbf84cfd9ca6c3eadb37c3737, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
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
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = MAKE_FUNCTION_requests$sessions$$$function_28_session(  );



        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_session, tmp_assign_source_67 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_requests$sessions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
