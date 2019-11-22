/* Generated code for Python module 'numpy.lib.format'
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

/* The "_module_numpy$lib$format" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$format;
PyDictObject *moduledict_numpy$lib$format;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_fd7687f1b33067658de50d7c90b33946;
static PyObject *const_str_digest_07d512c14fb25daa4704cc3aeb391010;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_ndarray;
static PyObject *const_str_plain_header_data_from_array_1_0;
extern PyObject *const_str_plain_open_memmap;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_read_array;
extern PyObject *const_tuple_str_plain_StringIO_tuple;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_memmap;
extern PyObject *const_str_plain_dict;
static PyObject *const_str_digest_0035dc00362619700b8545d6da547755;
extern PyObject *const_str_plain_itemsize;
extern PyObject *const_str_plain_UserWarning;
extern PyObject *const_slice_int_neg_2_none_none;
extern PyObject *const_str_plain_sorted;
static PyObject *const_str_plain_read_array_header_2_0;
extern PyObject *const_str_plain_isfileobj;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_string;
extern PyObject *const_str_plain_i;
extern PyObject *const_tuple_int_pos_3_int_0_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_latin1;
static PyObject *const_str_digest_ef68d6418a9fa31164d5e193f7bd2296;
extern PyObject *const_str_plain_minor;
extern PyObject *const_str_plain_offset;
extern PyObject *const_str_plain_readline;
extern PyObject *const_str_plain_max;
static PyObject *const_str_digest_d6e95407ff28cc9fb77c2a409e9ba5ce;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_os_fspath;
extern PyObject *const_str_plain_struct;
static PyObject *const_str_digest_0a0e7a05fd9d55a3f420e1d22154dfd4;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_unpack;
extern PyObject *const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0;
extern PyObject *const_str_plain_ret;
static PyObject *const_dict_01c775e79d89ca42daab2fcee3bd54cb;
static PyObject *const_tuple_str_plain_header_str_plain_ret_tuple;
extern PyObject *const_str_plain_err;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_n_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_tuple_int_pos_2_int_0_tuple;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_fmt;
extern PyObject *const_int_neg_1;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
static PyObject *const_str_plain_read_magic;
static PyObject *const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple;
static PyObject *const_str_plain_hlength_str;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_protocol;
static PyObject *const_str_plain__wrap_header;
static PyObject *const_str_plain_write_array_header_2_0;
static PyObject *const_str_digest_085ba79abffbdcd5b6341c12faea74ff;
static PyObject *const_str_plain_hlength_type;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_hlen;
extern PyObject *const_str_plain_fromfile;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_plain_write_array_header_1_0;
static PyObject *const_str_digest_a4dbfd5d5d47649331d0b8b9878c9874;
extern PyObject *const_str_digest_0829d31c23484bf44f4928c84123543c;
static PyObject *const_str_plain_tokenize;
static PyObject *const_str_plain_generate_tokens;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_names;
static PyObject *const_str_plain_BUFFER_SIZE;
extern PyObject *const_str_plain_write_array;
extern PyObject *const_tuple_int_pos_1_int_0_tuple;
static PyObject *const_bytes_digest_ca6401f3d7caea4d74a349f79a7127a1;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_digest_d13afeb983fe2d0d9e5187b6a1844b1d;
static PyObject *const_str_digest_ab19665cc0868cbe05afa520fa3b6b3a;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_str_plain_fp_tuple;
extern PyObject *const_str_plain_fp;
extern PyObject *const_str_plain_offsets;
extern PyObject *const_str_plain___debug__;
static PyObject *const_tuple_f7d462b1cf10989f5936b2833758a415_tuple;
extern PyObject *const_str_plain_L;
extern PyObject *const_slice_none_int_neg_2_none;
extern PyObject *const_int_pos_16777216;
extern PyObject *const_str_plain_f_contiguous;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_transpose;
static PyObject *const_tuple_4244cdd35b61dfbc5968dda6b74b46ce_tuple;
static PyObject *const_str_plain_hinfo;
static PyObject *const_str_plain__filter_header;
static PyObject *const_str_digest_9641264aa631a00ed322979405b6b049;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_s;
static PyObject *const_str_digest_c69b8090da9c96e8e8656a86669770e1;
extern PyObject *const_str_chr_123;
extern PyObject *const_str_plain_warnings;
static PyObject *const_tuple_ee65fd2e3722d6fdde43676aa0a3d08e_tuple;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_digest_3ece57ba7bfbd5afefbc2eeba5686594;
extern PyObject *const_str_plain_zerosize_ok;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_digest_7519f90f76f46e03a8d60efd5313d6e2;
extern PyObject *const_tuple_str_plain_C_tuple;
extern PyObject *const_str_plain_bool;
static PyObject *const_str_digest_28fb7acd150fba993582d706d0419ce0;
static PyObject *const_str_digest_5e5d62a43a7128bdb26848934fc9ca76;
extern PyObject *const_int_neg_2;
extern PyObject *const_str_plain_long;
extern PyObject *const_tuple_str_chr_125_tuple;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_min;
static PyObject *const_str_plain_is_pad;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_int;
static PyObject *const_str_digest_642b9c829350417db60ada050ae0975e;
static PyObject *const_str_digest_6b57301b654c3843c381d8353fb691a6;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_47490b92797e96c948922a3bc4531152;
extern PyObject *const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_calcsize;
static PyObject *const_tuple_none_true_none_tuple;
static PyObject *const_dict_339c73dd69e0aaff5925d2e6fbd6a68e;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_e;
static PyObject *const_str_digest_e25f2de5ede7bba80eabc72f791b074a;
extern PyObject *const_str_plain_load;
extern PyObject *const_str_plain_descr;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_rb;
extern PyObject *const_str_plain_tokens;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_read_array_header_1_0;
extern PyObject *const_str_plain_nditer;
static PyObject *const_dict_de3f310906be721e1442f0c1d08f6d76;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_NUMBER;
static PyObject *const_str_digest_b742973a3df21cfc8bc9672d94e5be66;
static PyObject *const_str_digest_33880b60234c8e6ba08ca2237dd7657a;
static PyObject *const_str_digest_9cc028360d7dd08f66866bfc6c3a4d38;
extern PyObject *const_str_plain_dump;
static PyObject *const_str_plain_untokenize;
static PyObject *const_str_plain_padlen;
extern PyObject *const_str_chr_125;
extern PyObject *const_str_plain_pickle;
extern PyObject *const_str_plain_titles;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_read_count;
extern PyObject *const_str_plain_tell;
extern PyObject *const_str_plain_int64;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_allow_pickle;
static PyObject *const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple;
static PyObject *const_str_plain_read_size;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_void;
extern PyObject *const_str_plain_error;
static PyObject *const_str_digest_e39ecce908abada737ad8c73b9d80071;
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_d5d8d493923b6bc19908a14dab225ce7;
extern PyObject *const_str_plain_stacklevel;
static PyObject *const_str_plain_last_token_was_number;
static PyObject *const_str_plain_token_string;
extern PyObject *const_str_plain_token;
static PyObject *const_str_digest_c359ce7ebde4a0919353ed793b017ae6;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_pack;
extern PyObject *const_str_plain_map;
static PyObject *const_str_plain_token_type;
static PyObject *const_tuple_str_plain_safe_eval_tuple;
static PyObject *const_tuple_912e960c1c77a1b39e4e58ec8494f3cc_tuple;
static PyObject *const_str_plain_header_prefix;
static PyObject *const_str_plain__read_bytes;
extern PyObject *const_str_plain_pickle_kwargs;
extern PyObject *const_str_digest_dd7618bbb3c1cb615487560bff75714c;
static PyObject *const_tuple_a133c1f16d14b0852e343ff810ad9fbc_tuple;
extern PyObject *const_str_plain_encoding;
static PyObject *const_list_b9bb18ee739e33433d0436db7b242c32_list;
static PyObject *const_str_plain_ARRAY_ALIGN;
extern PyObject *const_str_plain_formats;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0;
extern PyObject *const_int_0;
static PyObject *const_tuple_e85a9dce7eb9469d4fd3a3cc1b3329f8_tuple;
extern PyObject *const_str_plain_hasobject;
static PyObject *const_str_plain_NAME;
static PyObject *const_str_digest_22d90ea48a417a006b0ec843241ebdce;
static PyObject *const_str_digest_992cad56b3352fdda84d6a4dc3105e75;
extern PyObject *const_str_plain_ord;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_magic;
extern PyObject *const_tuple_false_none_tuple;
static PyObject *const_str_digest_8ae7d8a0cf9169ef8e0b498aeee30b83;
extern PyObject *const_str_plain_F;
extern PyObject *const_str_plain_major;
extern PyObject *const_str_plain_origin;
extern PyObject *const_bytes_chr_10;
static PyObject *const_list_str_plain_descr_str_plain_fortran_order_str_plain_shape_list;
extern PyObject *const_tuple_str_plain_dtype_tuple;
extern PyObject *const_str_plain_c_contiguous;
static PyObject *const_str_plain_magic_str;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_str_plain__check_version;
extern PyObject *const_str_plain_C;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_plain_header;
extern PyObject *const_str_plain_safe_eval;
static PyObject *const_str_plain__write_array_header;
static PyObject *const_tuple_str_plain_array_str_plain_d_tuple;
static PyObject *const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple;
static PyObject *const_str_digest_064c1ecbd382be4f09bc51f6e7f86bf4;
static PyObject *const_tuple_str_plain_fp_str_plain_d_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_bytes_empty;
extern PyObject *const_str_plain_frombuffer;
static PyObject *const_tuple_01273e84b25234c8c16117e98d960543_tuple;
static PyObject *const_str_digest_a1c11231138d20fe4ec71b50fdbd2920;
static PyObject *const_str_digest_773a6663c16414683a8beef8bfab60c3;
static PyObject *const_str_digest_01f9f19666116a0368c7e2436b7e789f;
static PyObject *const_str_digest_d660f7147a9ebf5fb5ab553a29fa6011;
extern PyObject *const_slice_none_none_int_neg_1;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_header_length;
static PyObject *const_list_str_chr_123_list;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_d;
static PyObject *const_str_digest_52563d3668678eaba8e3862ee2651a15;
extern PyObject *const_bytes_chr_32;
extern PyObject *const_str_plain_tofile;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain_buffered;
static PyObject *const_tuple_str_plain_version_str_plain_msg_tuple;
static PyObject *const_str_plain__wrap_header_guess_version;
static PyObject *const_str_digest_de1b1a8506a420e61bb4ba7334187135;
static PyObject *const_str_digest_8b05bf97580bab13d137118cd1756934;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_io;
extern PyObject *const_str_plain_utf8;
extern PyObject *const_str_plain_chunk;
extern PyObject *const_str_plain_filename;
extern PyObject *const_str_plain_StringIO;
static PyObject *const_str_digest_39e44f53433c2590734cc06acc2a94d4;
static PyObject *const_str_plain_marray;
static PyObject *const_str_digest_a2fd2ac4c25bbb757f394a8528e17cb2;
static PyObject *const_tuple_str_digest_d13afeb983fe2d0d9e5187b6a1844b1d_tuple;
static PyObject *const_tuple_str_digest_54608bc3db8b8899ddc5dce8e06f85a0_str_plain_utf8_tuple;
static PyObject *const_str_digest_778fcc73eb46f71eb6f05ed60f68cfa7;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_max_read_count;
extern PyObject *const_str_plain_reduce;
extern PyObject *const_str_plain_MAGIC_PREFIX;
extern PyObject *const_str_plain_tuple;
static PyObject *const_str_digest_33a69fce9040b6ad0bb203e6e71e38d7;
static PyObject *const_tuple_d6053663193cef6b74785b8d021059a0_tuple;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_field;
static PyObject *const_str_plain_fortran_order;
extern PyObject *const_str_newline;
static PyObject *const_str_plain_descr_to_dtype;
static PyObject *const_tuple_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0_str_plain_latin1_tuple;
static PyObject *const_str_plain_error_template;
static PyObject *const_str_plain_external_loop;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_int_pos_255;
extern PyObject *const_str_plain_fields;
static PyObject *const_str_digest_6864b64745b6a5526a0a6406b0ea4f5b;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_T;
static PyObject *const_str_digest_96376157911acd6c0249d19881fda2b1;
static PyObject *const_str_digest_93225b4c27f5e31c15cb4d0172d90e28;
static PyObject *const_dict_dbef56138eaa2899d16a5214011a7ad2;
static PyObject *const_str_plain_buffersize;
static PyObject *const_list_9cf6d71c5907bcbb1943fadd66d3b09a_list;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_MAGIC_LEN;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_BlockingIOError;
extern PyObject *const_str_digest_8bfd764efd0705b9fcd14fcb5c6ee56b;
extern PyObject *const_str_plain_version;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_9d110c56239cf48f499dd50dc21ca329;
static PyObject *const_str_digest_e630f1391df37633ea7e8f19dc213e1d;
extern PyObject *const_str_plain_multiply;
static PyObject *const_str_digest_2a27dcb72bed277c8af87af5e6b1459f;
extern PyObject *const_int_pos_262144;
static PyObject *const_tuple_str_plain_major_str_plain_minor_tuple;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_tobytes;
static PyObject *const_str_plain_descr_str;
extern PyObject *const_str_empty;
static PyObject *const_str_plain__header_size_info;
extern PyObject *const_str_plain_dt;
static PyObject *const_str_plain_nametups;
static PyObject *const_str_plain__read_array_header;
static PyObject *const_str_digest_3875511dfbec9a2e2efe1f60b79b4abf;
static PyObject *const_str_plain_dtype_to_descr;
static PyObject *const_tuple_f59d3cabbe91e8a662c80cebecfec859_tuple;
static PyObject *const_tuple_str_digest_54608bc3db8b8899ddc5dce8e06f85a0_str_plain_latin1_tuple;
static PyObject *const_str_digest_d8f11a6cd2198658e6c451e45aec16f9;
extern PyObject *const_str_plain_order;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_fd7687f1b33067658de50d7c90b33946 = UNSTREAM_STRING_ASCII( &constant_bin[ 2952609 ], 62, 0 );
    const_str_digest_07d512c14fb25daa4704cc3aeb391010 = UNSTREAM_STRING_ASCII( &constant_bin[ 2952671 ], 1319, 0 );
    const_str_plain_header_data_from_array_1_0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2953990 ], 26, 1 );
    const_str_digest_0035dc00362619700b8545d6da547755 = UNSTREAM_STRING_ASCII( &constant_bin[ 2954016 ], 25, 0 );
    const_str_plain_read_array_header_2_0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2954041 ], 21, 1 );
    const_str_digest_ef68d6418a9fa31164d5e193f7bd2296 = UNSTREAM_STRING_ASCII( &constant_bin[ 2954062 ], 35, 0 );
    const_str_digest_d6e95407ff28cc9fb77c2a409e9ba5ce = UNSTREAM_STRING_ASCII( &constant_bin[ 2954097 ], 53, 0 );
    const_str_digest_0a0e7a05fd9d55a3f420e1d22154dfd4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2954150 ], 62, 0 );
    const_dict_01c775e79d89ca42daab2fcee3bd54cb = _PyDict_NewPresized( 3 );
    const_tuple_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0_str_plain_latin1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0_str_plain_latin1_tuple, 0, const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0 ); Py_INCREF( const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0_str_plain_latin1_tuple, 1, const_str_plain_latin1 ); Py_INCREF( const_str_plain_latin1 );
    PyDict_SetItem( const_dict_01c775e79d89ca42daab2fcee3bd54cb, const_tuple_int_pos_1_int_0_tuple, const_tuple_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0_str_plain_latin1_tuple );
    const_tuple_str_digest_54608bc3db8b8899ddc5dce8e06f85a0_str_plain_latin1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_54608bc3db8b8899ddc5dce8e06f85a0_str_plain_latin1_tuple, 0, const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0 ); Py_INCREF( const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_54608bc3db8b8899ddc5dce8e06f85a0_str_plain_latin1_tuple, 1, const_str_plain_latin1 ); Py_INCREF( const_str_plain_latin1 );
    PyDict_SetItem( const_dict_01c775e79d89ca42daab2fcee3bd54cb, const_tuple_int_pos_2_int_0_tuple, const_tuple_str_digest_54608bc3db8b8899ddc5dce8e06f85a0_str_plain_latin1_tuple );
    const_tuple_str_digest_54608bc3db8b8899ddc5dce8e06f85a0_str_plain_utf8_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_54608bc3db8b8899ddc5dce8e06f85a0_str_plain_utf8_tuple, 0, const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0 ); Py_INCREF( const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_54608bc3db8b8899ddc5dce8e06f85a0_str_plain_utf8_tuple, 1, const_str_plain_utf8 ); Py_INCREF( const_str_plain_utf8 );
    PyDict_SetItem( const_dict_01c775e79d89ca42daab2fcee3bd54cb, const_tuple_int_pos_3_int_0_tuple, const_tuple_str_digest_54608bc3db8b8899ddc5dce8e06f85a0_str_plain_utf8_tuple );
    assert( PyDict_Size( const_dict_01c775e79d89ca42daab2fcee3bd54cb ) == 3 );
    const_tuple_str_plain_header_str_plain_ret_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_header_str_plain_ret_tuple, 0, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_str_plain_header_str_plain_ret_tuple, 1, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_str_plain_read_magic = UNSTREAM_STRING_ASCII( &constant_bin[ 2954212 ], 10, 1 );
    const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 1, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 2, const_str_plain_struct ); Py_INCREF( const_str_plain_struct );
    const_str_plain_hinfo = UNSTREAM_STRING_ASCII( &constant_bin[ 2954222 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 3, const_str_plain_hinfo ); Py_INCREF( const_str_plain_hinfo );
    const_str_plain_hlength_type = UNSTREAM_STRING_ASCII( &constant_bin[ 2954227 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 4, const_str_plain_hlength_type ); Py_INCREF( const_str_plain_hlength_type );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 5, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    const_str_plain_hlength_str = UNSTREAM_STRING_ASCII( &constant_bin[ 2954239 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 6, const_str_plain_hlength_str ); Py_INCREF( const_str_plain_hlength_str );
    const_str_plain_header_length = UNSTREAM_STRING_ASCII( &constant_bin[ 2954250 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 7, const_str_plain_header_length ); Py_INCREF( const_str_plain_header_length );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 8, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 9, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 10, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 11, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 12, const_str_plain_keys ); Py_INCREF( const_str_plain_keys );
    PyTuple_SET_ITEM( const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 13, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_str_plain__wrap_header = UNSTREAM_STRING_ASCII( &constant_bin[ 2954263 ], 12, 1 );
    const_str_plain_write_array_header_2_0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2954275 ], 22, 1 );
    const_str_digest_085ba79abffbdcd5b6341c12faea74ff = UNSTREAM_STRING_ASCII( &constant_bin[ 2954297 ], 38, 0 );
    const_str_plain_hlen = UNSTREAM_STRING_ASCII( &constant_bin[ 1980100 ], 4, 1 );
    const_str_plain_write_array_header_1_0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2954335 ], 22, 1 );
    const_str_digest_a4dbfd5d5d47649331d0b8b9878c9874 = UNSTREAM_STRING_ASCII( &constant_bin[ 2954357 ], 310, 0 );
    const_str_plain_tokenize = UNSTREAM_STRING_ASCII( &constant_bin[ 2954667 ], 8, 1 );
    const_str_plain_generate_tokens = UNSTREAM_STRING_ASCII( &constant_bin[ 2954675 ], 15, 1 );
    const_str_plain_BUFFER_SIZE = UNSTREAM_STRING_ASCII( &constant_bin[ 2954690 ], 11, 1 );
    const_bytes_digest_ca6401f3d7caea4d74a349f79a7127a1 = UNSTREAM_BYTES( &constant_bin[ 2954701 ], 6 );
    const_str_digest_d13afeb983fe2d0d9e5187b6a1844b1d = UNSTREAM_STRING_ASCII( &constant_bin[ 2954707 ], 15, 0 );
    const_str_digest_ab19665cc0868cbe05afa520fa3b6b3a = UNSTREAM_STRING_ASCII( &constant_bin[ 2954722 ], 331, 0 );
    const_tuple_str_plain_fp_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    const_tuple_f7d462b1cf10989f5936b2833758a415_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f7d462b1cf10989f5936b2833758a415_tuple, 0, const_str_plain_isfileobj ); Py_INCREF( const_str_plain_isfileobj );
    PyTuple_SET_ITEM( const_tuple_f7d462b1cf10989f5936b2833758a415_tuple, 1, const_str_plain_long ); Py_INCREF( const_str_plain_long );
    PyTuple_SET_ITEM( const_tuple_f7d462b1cf10989f5936b2833758a415_tuple, 2, const_str_plain_os_fspath ); Py_INCREF( const_str_plain_os_fspath );
    PyTuple_SET_ITEM( const_tuple_f7d462b1cf10989f5936b2833758a415_tuple, 3, const_str_plain_pickle ); Py_INCREF( const_str_plain_pickle );
    const_tuple_4244cdd35b61dfbc5968dda6b74b46ce_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4244cdd35b61dfbc5968dda6b74b46ce_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_4244cdd35b61dfbc5968dda6b74b46ce_tuple, 1, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_4244cdd35b61dfbc5968dda6b74b46ce_tuple, 2, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_4244cdd35b61dfbc5968dda6b74b46ce_tuple, 3, const_str_plain_allow_pickle ); Py_INCREF( const_str_plain_allow_pickle );
    PyTuple_SET_ITEM( const_tuple_4244cdd35b61dfbc5968dda6b74b46ce_tuple, 4, const_str_plain_pickle_kwargs ); Py_INCREF( const_str_plain_pickle_kwargs );
    const_str_plain_buffersize = UNSTREAM_STRING_ASCII( &constant_bin[ 2288241 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_4244cdd35b61dfbc5968dda6b74b46ce_tuple, 5, const_str_plain_buffersize ); Py_INCREF( const_str_plain_buffersize );
    PyTuple_SET_ITEM( const_tuple_4244cdd35b61dfbc5968dda6b74b46ce_tuple, 6, const_str_plain_chunk ); Py_INCREF( const_str_plain_chunk );
    const_str_plain__filter_header = UNSTREAM_STRING_ASCII( &constant_bin[ 2955053 ], 14, 1 );
    const_str_digest_9641264aa631a00ed322979405b6b049 = UNSTREAM_STRING_ASCII( &constant_bin[ 2955067 ], 84, 0 );
    const_str_digest_c69b8090da9c96e8e8656a86669770e1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2954024 ], 16, 0 );
    const_tuple_ee65fd2e3722d6fdde43676aa0a3d08e_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_ee65fd2e3722d6fdde43676aa0a3d08e_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_ee65fd2e3722d6fdde43676aa0a3d08e_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_ee65fd2e3722d6fdde43676aa0a3d08e_tuple, 2, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_ee65fd2e3722d6fdde43676aa0a3d08e_tuple, 3, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_ee65fd2e3722d6fdde43676aa0a3d08e_tuple, 4, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_ee65fd2e3722d6fdde43676aa0a3d08e_tuple, 5, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_3ece57ba7bfbd5afefbc2eeba5686594 = UNSTREAM_STRING_ASCII( &constant_bin[ 2955151 ], 732, 0 );
    const_str_digest_7519f90f76f46e03a8d60efd5313d6e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2955883 ], 20, 0 );
    const_str_digest_28fb7acd150fba993582d706d0419ce0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2955903 ], 39, 0 );
    const_str_digest_5e5d62a43a7128bdb26848934fc9ca76 = UNSTREAM_STRING_ASCII( &constant_bin[ 2955942 ], 93, 0 );
    const_str_plain_is_pad = UNSTREAM_STRING_ASCII( &constant_bin[ 2406498 ], 6, 1 );
    const_str_digest_642b9c829350417db60ada050ae0975e = UNSTREAM_STRING_ASCII( &constant_bin[ 2956035 ], 179, 0 );
    const_str_digest_6b57301b654c3843c381d8353fb691a6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2956214 ], 52, 0 );
    const_str_digest_47490b92797e96c948922a3bc4531152 = UNSTREAM_STRING_ASCII( &constant_bin[ 2956266 ], 63, 0 );
    const_tuple_none_true_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_true_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_true_none_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_none_true_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_dict_339c73dd69e0aaff5925d2e6fbd6a68e = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_339c73dd69e0aaff5925d2e6fbd6a68e, const_str_plain_version, const_tuple_int_pos_2_int_0_tuple );
    assert( PyDict_Size( const_dict_339c73dd69e0aaff5925d2e6fbd6a68e ) == 1 );
    const_str_digest_e25f2de5ede7bba80eabc72f791b074a = UNSTREAM_STRING_ASCII( &constant_bin[ 2956045 ], 12, 0 );
    const_str_plain_read_array_header_1_0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2954071 ], 21, 1 );
    const_dict_de3f310906be721e1442f0c1d08f6d76 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_de3f310906be721e1442f0c1d08f6d76, const_str_plain_version, const_tuple_int_pos_1_int_0_tuple );
    assert( PyDict_Size( const_dict_de3f310906be721e1442f0c1d08f6d76 ) == 1 );
    const_str_plain_NUMBER = UNSTREAM_STRING_ASCII( &constant_bin[ 2956329 ], 6, 1 );
    const_str_digest_b742973a3df21cfc8bc9672d94e5be66 = UNSTREAM_STRING_ASCII( &constant_bin[ 2956335 ], 692, 0 );
    const_str_digest_33880b60234c8e6ba08ca2237dd7657a = UNSTREAM_STRING_ASCII( &constant_bin[ 2957027 ], 54, 0 );
    const_str_digest_9cc028360d7dd08f66866bfc6c3a4d38 = UNSTREAM_STRING_ASCII( &constant_bin[ 2957081 ], 41, 0 );
    const_str_plain_untokenize = UNSTREAM_STRING_ASCII( &constant_bin[ 2957122 ], 10, 1 );
    const_str_plain_padlen = UNSTREAM_STRING_ASCII( &constant_bin[ 2957132 ], 6, 1 );
    const_str_plain_read_count = UNSTREAM_STRING_ASCII( &constant_bin[ 2957138 ], 10, 1 );
    const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple, 0, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple, 1, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple, 3, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    const_str_plain_fortran_order = UNSTREAM_STRING_ASCII( &constant_bin[ 2955550 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple, 4, const_str_plain_fortran_order ); Py_INCREF( const_str_plain_fortran_order );
    PyTuple_SET_ITEM( const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple, 5, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple, 6, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple, 7, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple, 8, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple, 9, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    PyTuple_SET_ITEM( const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple, 10, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    const_str_plain_marray = UNSTREAM_STRING_ASCII( &constant_bin[ 8460 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple, 11, const_str_plain_marray ); Py_INCREF( const_str_plain_marray );
    const_str_plain_read_size = UNSTREAM_STRING_ASCII( &constant_bin[ 2957148 ], 9, 1 );
    const_str_digest_e39ecce908abada737ad8c73b9d80071 = UNSTREAM_STRING_ASCII( &constant_bin[ 2957157 ], 54, 0 );
    const_str_digest_d5d8d493923b6bc19908a14dab225ce7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2957211 ], 24, 0 );
    const_str_plain_last_token_was_number = UNSTREAM_STRING_ASCII( &constant_bin[ 2957235 ], 21, 1 );
    const_str_plain_token_string = UNSTREAM_STRING_ASCII( &constant_bin[ 2957256 ], 12, 1 );
    const_str_digest_c359ce7ebde4a0919353ed793b017ae6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2957268 ], 10, 0 );
    const_str_plain_token_type = UNSTREAM_STRING_ASCII( &constant_bin[ 2957278 ], 10, 1 );
    const_tuple_str_plain_safe_eval_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_safe_eval_tuple, 0, const_str_plain_safe_eval ); Py_INCREF( const_str_plain_safe_eval );
    const_tuple_912e960c1c77a1b39e4e58ec8494f3cc_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_912e960c1c77a1b39e4e58ec8494f3cc_tuple, 0, const_str_digest_dd7618bbb3c1cb615487560bff75714c ); Py_INCREF( const_str_digest_dd7618bbb3c1cb615487560bff75714c );
    PyTuple_SET_ITEM( const_tuple_912e960c1c77a1b39e4e58ec8494f3cc_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_912e960c1c77a1b39e4e58ec8494f3cc_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_912e960c1c77a1b39e4e58ec8494f3cc_tuple, 3, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_912e960c1c77a1b39e4e58ec8494f3cc_tuple, 4, Py_None ); Py_INCREF( Py_None );
    const_str_plain_header_prefix = UNSTREAM_STRING_ASCII( &constant_bin[ 2957288 ], 13, 1 );
    const_str_plain__read_bytes = UNSTREAM_STRING_ASCII( &constant_bin[ 2957301 ], 11, 1 );
    const_tuple_a133c1f16d14b0852e343ff810ad9fbc_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_a133c1f16d14b0852e343ff810ad9fbc_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_a133c1f16d14b0852e343ff810ad9fbc_tuple, 1, const_str_plain_tokenize ); Py_INCREF( const_str_plain_tokenize );
    PyTuple_SET_ITEM( const_tuple_a133c1f16d14b0852e343ff810ad9fbc_tuple, 2, const_str_plain_StringIO ); Py_INCREF( const_str_plain_StringIO );
    PyTuple_SET_ITEM( const_tuple_a133c1f16d14b0852e343ff810ad9fbc_tuple, 3, const_str_plain_tokens ); Py_INCREF( const_str_plain_tokens );
    PyTuple_SET_ITEM( const_tuple_a133c1f16d14b0852e343ff810ad9fbc_tuple, 4, const_str_plain_last_token_was_number ); Py_INCREF( const_str_plain_last_token_was_number );
    PyTuple_SET_ITEM( const_tuple_a133c1f16d14b0852e343ff810ad9fbc_tuple, 5, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    PyTuple_SET_ITEM( const_tuple_a133c1f16d14b0852e343ff810ad9fbc_tuple, 6, const_str_plain_token ); Py_INCREF( const_str_plain_token );
    PyTuple_SET_ITEM( const_tuple_a133c1f16d14b0852e343ff810ad9fbc_tuple, 7, const_str_plain_token_type ); Py_INCREF( const_str_plain_token_type );
    PyTuple_SET_ITEM( const_tuple_a133c1f16d14b0852e343ff810ad9fbc_tuple, 8, const_str_plain_token_string ); Py_INCREF( const_str_plain_token_string );
    const_list_b9bb18ee739e33433d0436db7b242c32_list = PyList_New( 3 );
    const_str_plain_external_loop = UNSTREAM_STRING_ASCII( &constant_bin[ 2276271 ], 13, 1 );
    PyList_SET_ITEM( const_list_b9bb18ee739e33433d0436db7b242c32_list, 0, const_str_plain_external_loop ); Py_INCREF( const_str_plain_external_loop );
    const_str_plain_buffered = UNSTREAM_STRING_ASCII( &constant_bin[ 2323016 ], 8, 1 );
    PyList_SET_ITEM( const_list_b9bb18ee739e33433d0436db7b242c32_list, 1, const_str_plain_buffered ); Py_INCREF( const_str_plain_buffered );
    PyList_SET_ITEM( const_list_b9bb18ee739e33433d0436db7b242c32_list, 2, const_str_plain_zerosize_ok ); Py_INCREF( const_str_plain_zerosize_ok );
    const_str_plain_ARRAY_ALIGN = UNSTREAM_STRING_ASCII( &constant_bin[ 2957312 ], 11, 1 );
    const_tuple_e85a9dce7eb9469d4fd3a3cc1b3329f8_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_e85a9dce7eb9469d4fd3a3cc1b3329f8_tuple, 0, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_e85a9dce7eb9469d4fd3a3cc1b3329f8_tuple, 1, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_e85a9dce7eb9469d4fd3a3cc1b3329f8_tuple, 2, const_str_plain_struct ); Py_INCREF( const_str_plain_struct );
    PyTuple_SET_ITEM( const_tuple_e85a9dce7eb9469d4fd3a3cc1b3329f8_tuple, 3, const_str_plain_fmt ); Py_INCREF( const_str_plain_fmt );
    PyTuple_SET_ITEM( const_tuple_e85a9dce7eb9469d4fd3a3cc1b3329f8_tuple, 4, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_e85a9dce7eb9469d4fd3a3cc1b3329f8_tuple, 5, const_str_plain_hlen ); Py_INCREF( const_str_plain_hlen );
    PyTuple_SET_ITEM( const_tuple_e85a9dce7eb9469d4fd3a3cc1b3329f8_tuple, 6, const_str_plain_padlen ); Py_INCREF( const_str_plain_padlen );
    PyTuple_SET_ITEM( const_tuple_e85a9dce7eb9469d4fd3a3cc1b3329f8_tuple, 7, const_str_plain_header_prefix ); Py_INCREF( const_str_plain_header_prefix );
    PyTuple_SET_ITEM( const_tuple_e85a9dce7eb9469d4fd3a3cc1b3329f8_tuple, 8, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_plain_NAME = UNSTREAM_STRING_ASCII( &constant_bin[ 211243 ], 4, 1 );
    const_str_digest_22d90ea48a417a006b0ec843241ebdce = UNSTREAM_STRING_ASCII( &constant_bin[ 2957323 ], 801, 0 );
    const_str_digest_992cad56b3352fdda84d6a4dc3105e75 = UNSTREAM_STRING_ASCII( &constant_bin[ 2958124 ], 337, 0 );
    const_str_digest_8ae7d8a0cf9169ef8e0b498aeee30b83 = UNSTREAM_STRING_ASCII( &constant_bin[ 2958461 ], 90, 0 );
    const_list_str_plain_descr_str_plain_fortran_order_str_plain_shape_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_descr_str_plain_fortran_order_str_plain_shape_list, 0, const_str_plain_descr ); Py_INCREF( const_str_plain_descr );
    PyList_SET_ITEM( const_list_str_plain_descr_str_plain_fortran_order_str_plain_shape_list, 1, const_str_plain_fortran_order ); Py_INCREF( const_str_plain_fortran_order );
    PyList_SET_ITEM( const_list_str_plain_descr_str_plain_fortran_order_str_plain_shape_list, 2, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    const_str_plain_magic_str = UNSTREAM_STRING_ASCII( &constant_bin[ 2958551 ], 9, 1 );
    const_str_plain__check_version = UNSTREAM_STRING_ASCII( &constant_bin[ 755739 ], 14, 1 );
    const_str_plain__write_array_header = UNSTREAM_STRING_ASCII( &constant_bin[ 2958560 ], 19, 1 );
    const_tuple_str_plain_array_str_plain_d_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_str_plain_d_tuple, 0, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_str_plain_d_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 0, const_str_plain_descr ); Py_INCREF( const_str_plain_descr );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 1, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 2, const_str_plain_fields ); Py_INCREF( const_str_plain_fields );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 3, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 4, const_str_plain_field ); Py_INCREF( const_str_plain_field );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 5, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_plain_descr_str = UNSTREAM_STRING_ASCII( &constant_bin[ 2958579 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 6, const_str_plain_descr_str ); Py_INCREF( const_str_plain_descr_str );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 7, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 8, const_str_plain_is_pad ); Py_INCREF( const_str_plain_is_pad );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 9, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 10, const_str_plain_formats ); Py_INCREF( const_str_plain_formats );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 11, const_str_plain_offsets ); Py_INCREF( const_str_plain_offsets );
    const_str_plain_nametups = UNSTREAM_STRING_ASCII( &constant_bin[ 2958588 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 12, const_str_plain_nametups ); Py_INCREF( const_str_plain_nametups );
    PyTuple_SET_ITEM( const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 13, const_str_plain_titles ); Py_INCREF( const_str_plain_titles );
    const_str_digest_064c1ecbd382be4f09bc51f6e7f86bf4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2958596 ], 6418, 0 );
    const_tuple_str_plain_fp_str_plain_d_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_d_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_d_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_tuple_01273e84b25234c8c16117e98d960543_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 1, const_str_plain_allow_pickle ); Py_INCREF( const_str_plain_allow_pickle );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 2, const_str_plain_pickle_kwargs ); Py_INCREF( const_str_plain_pickle_kwargs );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 3, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 4, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 5, const_str_plain_fortran_order ); Py_INCREF( const_str_plain_fortran_order );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 6, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 7, const_str_plain_count ); Py_INCREF( const_str_plain_count );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 8, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 9, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    const_str_plain_max_read_count = UNSTREAM_STRING_ASCII( &constant_bin[ 2965014 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 10, const_str_plain_max_read_count ); Py_INCREF( const_str_plain_max_read_count );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 11, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 12, const_str_plain_read_count ); Py_INCREF( const_str_plain_read_count );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 13, const_str_plain_read_size ); Py_INCREF( const_str_plain_read_size );
    PyTuple_SET_ITEM( const_tuple_01273e84b25234c8c16117e98d960543_tuple, 14, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_digest_a1c11231138d20fe4ec71b50fdbd2920 = UNSTREAM_STRING_ASCII( &constant_bin[ 2965028 ], 240, 0 );
    const_str_digest_773a6663c16414683a8beef8bfab60c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2965268 ], 46, 0 );
    const_str_digest_01f9f19666116a0368c7e2436b7e789f = UNSTREAM_STRING_ASCII( &constant_bin[ 2965314 ], 41, 0 );
    const_str_digest_d660f7147a9ebf5fb5ab553a29fa6011 = UNSTREAM_STRING_ASCII( &constant_bin[ 2965355 ], 19, 0 );
    const_list_str_chr_123_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_chr_123_list, 0, const_str_chr_123 ); Py_INCREF( const_str_chr_123 );
    const_str_digest_52563d3668678eaba8e3862ee2651a15 = UNSTREAM_STRING_ASCII( &constant_bin[ 2965374 ], 79, 0 );
    const_tuple_str_plain_version_str_plain_msg_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_version_str_plain_msg_tuple, 0, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_str_plain_version_str_plain_msg_tuple, 1, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_plain__wrap_header_guess_version = UNSTREAM_STRING_ASCII( &constant_bin[ 2965453 ], 26, 1 );
    const_str_digest_de1b1a8506a420e61bb4ba7334187135 = UNSTREAM_STRING_ASCII( &constant_bin[ 2955164 ], 12, 0 );
    const_str_digest_8b05bf97580bab13d137118cd1756934 = UNSTREAM_STRING_ASCII( &constant_bin[ 2965479 ], 19, 0 );
    const_str_digest_39e44f53433c2590734cc06acc2a94d4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2965498 ], 38, 0 );
    const_str_digest_a2fd2ac4c25bbb757f394a8528e17cb2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2965536 ], 43, 0 );
    const_tuple_str_digest_d13afeb983fe2d0d9e5187b6a1844b1d_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d13afeb983fe2d0d9e5187b6a1844b1d_tuple, 0, const_str_digest_d13afeb983fe2d0d9e5187b6a1844b1d ); Py_INCREF( const_str_digest_d13afeb983fe2d0d9e5187b6a1844b1d );
    const_str_digest_778fcc73eb46f71eb6f05ed60f68cfa7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2965579 ], 266, 0 );
    const_str_digest_33a69fce9040b6ad0bb203e6e71e38d7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2965845 ], 299, 0 );
    const_tuple_d6053663193cef6b74785b8d021059a0_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d6053663193cef6b74785b8d021059a0_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_d6053663193cef6b74785b8d021059a0_tuple, 1, const_str_plain_magic_str ); Py_INCREF( const_str_plain_magic_str );
    PyTuple_SET_ITEM( const_tuple_d6053663193cef6b74785b8d021059a0_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_d6053663193cef6b74785b8d021059a0_tuple, 3, const_str_plain_major ); Py_INCREF( const_str_plain_major );
    PyTuple_SET_ITEM( const_tuple_d6053663193cef6b74785b8d021059a0_tuple, 4, const_str_plain_minor ); Py_INCREF( const_str_plain_minor );
    const_str_plain_descr_to_dtype = UNSTREAM_STRING_ASCII( &constant_bin[ 2966144 ], 14, 1 );
    const_str_plain_error_template = UNSTREAM_STRING_ASCII( &constant_bin[ 2966158 ], 14, 1 );
    const_str_digest_6864b64745b6a5526a0a6406b0ea4f5b = UNSTREAM_STRING_ASCII( &constant_bin[ 2230568 ], 10, 0 );
    const_str_digest_96376157911acd6c0249d19881fda2b1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2966172 ], 33, 0 );
    const_str_digest_93225b4c27f5e31c15cb4d0172d90e28 = UNSTREAM_STRING_ASCII( &constant_bin[ 2966205 ], 39, 0 );
    const_dict_dbef56138eaa2899d16a5214011a7ad2 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_dbef56138eaa2899d16a5214011a7ad2, const_str_plain_protocol, const_int_pos_3 );
    assert( PyDict_Size( const_dict_dbef56138eaa2899d16a5214011a7ad2 ) == 1 );
    const_list_9cf6d71c5907bcbb1943fadd66d3b09a_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_9cf6d71c5907bcbb1943fadd66d3b09a_list, 0, const_tuple_int_pos_1_int_0_tuple ); Py_INCREF( const_tuple_int_pos_1_int_0_tuple );
    PyList_SET_ITEM( const_list_9cf6d71c5907bcbb1943fadd66d3b09a_list, 1, const_tuple_int_pos_2_int_0_tuple ); Py_INCREF( const_tuple_int_pos_2_int_0_tuple );
    PyList_SET_ITEM( const_list_9cf6d71c5907bcbb1943fadd66d3b09a_list, 2, const_tuple_int_pos_3_int_0_tuple ); Py_INCREF( const_tuple_int_pos_3_int_0_tuple );
    PyList_SET_ITEM( const_list_9cf6d71c5907bcbb1943fadd66d3b09a_list, 3, Py_None ); Py_INCREF( Py_None );
    const_str_plain_MAGIC_LEN = UNSTREAM_STRING_ASCII( &constant_bin[ 2966244 ], 9, 1 );
    const_str_plain_BlockingIOError = UNSTREAM_STRING_ASCII( &constant_bin[ 2966253 ], 15, 1 );
    const_str_digest_9d110c56239cf48f499dd50dc21ca329 = UNSTREAM_STRING_ASCII( &constant_bin[ 2966268 ], 274, 0 );
    const_str_digest_e630f1391df37633ea7e8f19dc213e1d = UNSTREAM_STRING_ASCII( &constant_bin[ 2966542 ], 32, 0 );
    const_str_digest_2a27dcb72bed277c8af87af5e6b1459f = UNSTREAM_STRING_ASCII( &constant_bin[ 2966574 ], 1695, 0 );
    const_tuple_str_plain_major_str_plain_minor_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_major_str_plain_minor_tuple, 0, const_str_plain_major ); Py_INCREF( const_str_plain_major );
    PyTuple_SET_ITEM( const_tuple_str_plain_major_str_plain_minor_tuple, 1, const_str_plain_minor ); Py_INCREF( const_str_plain_minor );
    const_str_plain__header_size_info = UNSTREAM_STRING_ASCII( &constant_bin[ 2968269 ], 17, 1 );
    const_str_plain__read_array_header = UNSTREAM_STRING_ASCII( &constant_bin[ 2968286 ], 18, 1 );
    const_str_digest_3875511dfbec9a2e2efe1f60b79b4abf = UNSTREAM_STRING_ASCII( &constant_bin[ 2968304 ], 703, 0 );
    const_str_plain_dtype_to_descr = UNSTREAM_STRING_ASCII( &constant_bin[ 2969007 ], 14, 1 );
    const_tuple_f59d3cabbe91e8a662c80cebecfec859_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f59d3cabbe91e8a662c80cebecfec859_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_f59d3cabbe91e8a662c80cebecfec859_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_f59d3cabbe91e8a662c80cebecfec859_tuple, 2, const_str_plain_error_template ); Py_INCREF( const_str_plain_error_template );
    PyTuple_SET_ITEM( const_tuple_f59d3cabbe91e8a662c80cebecfec859_tuple, 3, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_f59d3cabbe91e8a662c80cebecfec859_tuple, 4, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_f59d3cabbe91e8a662c80cebecfec859_tuple, 5, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_digest_d8f11a6cd2198658e6c451e45aec16f9 = UNSTREAM_STRING_ASCII( &constant_bin[ 2969021 ], 434, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$format( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_faceb17d1a5a616cb5f8c829a503a609;
static PyCodeObject *codeobj_1f19e93e4ede8a4396571f4c5cb65a48;
static PyCodeObject *codeobj_d49ec018b38d83b3915501703ca15779;
static PyCodeObject *codeobj_2264cb1adbae0105a841417d432141a2;
static PyCodeObject *codeobj_0888fa404133ccf4c31706c1053af3ec;
static PyCodeObject *codeobj_1cfefbef620be42cc9ee364d28d5464e;
static PyCodeObject *codeobj_568c9a36e229eb4083ce5362a8ebc44b;
static PyCodeObject *codeobj_1fbbc25489de174da732734f5d35e9ba;
static PyCodeObject *codeobj_e9ef41dfd4aedd5cea77afe76c6b9e8f;
static PyCodeObject *codeobj_373b385b729b8dfb3dfec0c20488e182;
static PyCodeObject *codeobj_080a9c72b344c13d3664071c4e521344;
static PyCodeObject *codeobj_747850964539e605df795cb375159def;
static PyCodeObject *codeobj_b955a18369af0e10666306703f56323a;
static PyCodeObject *codeobj_a22b5977520093fe6c03917c6adcf695;
static PyCodeObject *codeobj_79e8627fda5ee71d96141b4e629b684b;
static PyCodeObject *codeobj_5f58bcb4b331ed0cbce4954d33ffdee1;
static PyCodeObject *codeobj_93ae91df7d522c4540982b61826f8991;
static PyCodeObject *codeobj_916b10d2a2f85acf4fdcfc2b53572b82;
static PyCodeObject *codeobj_49f7e5e84ba12bc2a1b6017690c0bc4e;
static PyCodeObject *codeobj_0754cb0f0cc9754eb46e5bdc99fa5b2c;
static PyCodeObject *codeobj_2095f0974ef8f77bf9178293da521648;
static PyCodeObject *codeobj_94630b08c55a7a744cd57589f887fa9a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_d660f7147a9ebf5fb5ab553a29fa6011 );
    codeobj_faceb17d1a5a616cb5f8c829a503a609 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 310, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_n_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1f19e93e4ede8a4396571f4c5cb65a48 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 592, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d49ec018b38d83b3915501703ca15779 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0035dc00362619700b8545d6da547755, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_2264cb1adbae0105a841417d432141a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__check_version, 190, const_tuple_str_plain_version_str_plain_msg_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0888fa404133ccf4c31706c1053af3ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain__filter_header, 512, const_tuple_a133c1f16d14b0852e343ff810ad9fbc_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1cfefbef620be42cc9ee364d28d5464e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__read_array_header, 553, const_tuple_9540c9ca9927a91fa9b382f403cbf76d_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_568c9a36e229eb4083ce5362a8ebc44b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__read_bytes, 874, const_tuple_f59d3cabbe91e8a662c80cebecfec859_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1fbbc25489de174da732734f5d35e9ba = MAKE_CODEOBJ( module_filename_obj, const_str_plain__wrap_header, 343, const_tuple_e85a9dce7eb9469d4fd3a3cc1b3329f8_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e9ef41dfd4aedd5cea77afe76c6b9e8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__wrap_header_guess_version, 368, const_tuple_str_plain_header_str_plain_ret_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_373b385b729b8dfb3dfec0c20488e182 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__write_array_header, 392, const_tuple_ee65fd2e3722d6fdde43676aa0a3d08e_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_080a9c72b344c13d3664071c4e521344 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_descr_to_dtype, 274, const_tuple_dd43019b97ad5605a72c88e8deb829d5_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_747850964539e605df795cb375159def = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dtype_to_descr, 242, const_tuple_str_plain_dtype_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b955a18369af0e10666306703f56323a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_header_data_from_array_1_0, 315, const_tuple_str_plain_array_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a22b5977520093fe6c03917c6adcf695 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_magic, 195, const_tuple_str_plain_major_str_plain_minor_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_79e8627fda5ee71d96141b4e629b684b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open_memmap, 773, const_tuple_d86bd7f4107cc328d53bf277b9714737_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5f58bcb4b331ed0cbce4954d33ffdee1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read_array, 678, const_tuple_01273e84b25234c8c16117e98d960543_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_93ae91df7d522c4540982b61826f8991 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read_array_header_1_0, 447, const_tuple_str_plain_fp_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_916b10d2a2f85acf4fdcfc2b53572b82 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read_array_header_2_0, 478, const_tuple_str_plain_fp_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_49f7e5e84ba12bc2a1b6017690c0bc4e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read_magic, 220, const_tuple_d6053663193cef6b74785b8d021059a0_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0754cb0f0cc9754eb46e5bdc99fa5b2c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write_array, 606, const_tuple_4244cdd35b61dfbc5968dda6b74b46ce_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2095f0974ef8f77bf9178293da521648 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write_array_header_1_0, 419, const_tuple_str_plain_fp_str_plain_d_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_94630b08c55a7a744cd57589f887fa9a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write_array_header_2_0, 432, const_tuple_str_plain_fp_str_plain_d_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *numpy$lib$format$$$function_5_descr_to_dtype$$$genexpr_1_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_10_write_array_header_1_0(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_11_write_array_header_2_0(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_12_read_array_header_1_0(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_13_read_array_header_2_0(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_14__filter_header(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_15__read_array_header(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_16_write_array( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_17_read_array( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_18_open_memmap( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_19__read_bytes( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_1__check_version(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_2_magic(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_3_read_magic(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_4_dtype_to_descr(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_5_descr_to_dtype(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_6_header_data_from_array_1_0(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_7__wrap_header(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_8__wrap_header_guess_version(  );


static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_9__write_array_header( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$lib$format$$$function_1__check_version( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_version = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_2264cb1adbae0105a841417d432141a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2264cb1adbae0105a841417d432141a2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2264cb1adbae0105a841417d432141a2, codeobj_2264cb1adbae0105a841417d432141a2, module_numpy$lib$format, sizeof(void *)+sizeof(void *) );
    frame_2264cb1adbae0105a841417d432141a2 = cache_frame_2264cb1adbae0105a841417d432141a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2264cb1adbae0105a841417d432141a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2264cb1adbae0105a841417d432141a2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_version );
        tmp_compexpr_left_1 = par_version;
        tmp_compexpr_right_1 = LIST_COPY( const_list_9cf6d71c5907bcbb1943fadd66d3b09a_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "oN";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            tmp_left_name_1 = const_str_digest_0a0e7a05fd9d55a3f420e1d22154dfd4;
            CHECK_OBJECT( par_version );
            tmp_tuple_element_1 = par_version;
            tmp_right_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 193;
                type_description_1 = "oN";
                goto frame_exception_exit_1;
            }
            frame_2264cb1adbae0105a841417d432141a2->m_frame.f_lineno = 193;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 193;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2264cb1adbae0105a841417d432141a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2264cb1adbae0105a841417d432141a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2264cb1adbae0105a841417d432141a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2264cb1adbae0105a841417d432141a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2264cb1adbae0105a841417d432141a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2264cb1adbae0105a841417d432141a2,
        type_description_1,
        par_version,
        NULL
    );


    // Release cached frame.
    if ( frame_2264cb1adbae0105a841417d432141a2 == cache_frame_2264cb1adbae0105a841417d432141a2 )
    {
        Py_DECREF( frame_2264cb1adbae0105a841417d432141a2 );
    }
    cache_frame_2264cb1adbae0105a841417d432141a2 = NULL;

    assertFrameObject( frame_2264cb1adbae0105a841417d432141a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_1__check_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_version );
    Py_DECREF( par_version );
    par_version = NULL;

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

    CHECK_OBJECT( (PyObject *)par_version );
    Py_DECREF( par_version );
    par_version = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_1__check_version );
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


static PyObject *impl_numpy$lib$format$$$function_2_magic( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_major = python_pars[ 0 ];
    PyObject *par_minor = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a22b5977520093fe6c03917c6adcf695;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a22b5977520093fe6c03917c6adcf695 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a22b5977520093fe6c03917c6adcf695, codeobj_a22b5977520093fe6c03917c6adcf695, module_numpy$lib$format, sizeof(void *)+sizeof(void *) );
    frame_a22b5977520093fe6c03917c6adcf695 = cache_frame_a22b5977520093fe6c03917c6adcf695;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a22b5977520093fe6c03917c6adcf695 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a22b5977520093fe6c03917c6adcf695 ) == 2 ); // Frame stack

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
        CHECK_OBJECT( par_major );
        tmp_compexpr_left_1 = par_major;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "oo";
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
        CHECK_OBJECT( par_major );
        tmp_compexpr_left_2 = par_major;
        tmp_compexpr_right_2 = const_int_pos_255;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "oo";
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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_39e44f53433c2590734cc06acc2a94d4;
            frame_a22b5977520093fe6c03917c6adcf695->m_frame.f_lineno = 212;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 212;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        CHECK_OBJECT( par_minor );
        tmp_compexpr_left_3 = par_minor;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oo";
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
        CHECK_OBJECT( par_minor );
        tmp_compexpr_left_4 = par_minor;
        tmp_compexpr_right_4 = const_int_pos_255;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oo";
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
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_085ba79abffbdcd5b6341c12faea74ff;
            frame_a22b5977520093fe6c03917c6adcf695->m_frame.f_lineno = 214;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 214;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oo";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_chr_arg_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_chr_arg_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_MAGIC_PREFIX );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAGIC_PREFIX );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAGIC_PREFIX" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 216;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_major );
            tmp_chr_arg_1 = par_major;
            tmp_right_name_1 = BUILTIN_CHR( tmp_chr_arg_1 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_minor );
            tmp_chr_arg_2 = par_minor;
            tmp_right_name_2 = BUILTIN_CHR( tmp_chr_arg_2 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 216;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_left_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_bytes_arg_1;
            PyObject *tmp_list_element_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_MAGIC_PREFIX );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAGIC_PREFIX );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAGIC_PREFIX" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 218;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_major );
            tmp_list_element_1 = par_major;
            tmp_bytes_arg_1 = PyList_New( 2 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_bytes_arg_1, 0, tmp_list_element_1 );
            CHECK_OBJECT( par_minor );
            tmp_list_element_1 = par_minor;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_bytes_arg_1, 1, tmp_list_element_1 );
            tmp_right_name_3 = BUILTIN_BYTES1( tmp_bytes_arg_1 );
            Py_DECREF( tmp_bytes_arg_1 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 218;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 218;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a22b5977520093fe6c03917c6adcf695 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a22b5977520093fe6c03917c6adcf695 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a22b5977520093fe6c03917c6adcf695 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a22b5977520093fe6c03917c6adcf695, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a22b5977520093fe6c03917c6adcf695->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a22b5977520093fe6c03917c6adcf695, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a22b5977520093fe6c03917c6adcf695,
        type_description_1,
        par_major,
        par_minor
    );


    // Release cached frame.
    if ( frame_a22b5977520093fe6c03917c6adcf695 == cache_frame_a22b5977520093fe6c03917c6adcf695 )
    {
        Py_DECREF( frame_a22b5977520093fe6c03917c6adcf695 );
    }
    cache_frame_a22b5977520093fe6c03917c6adcf695 = NULL;

    assertFrameObject( frame_a22b5977520093fe6c03917c6adcf695 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_2_magic );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_major );
    Py_DECREF( par_major );
    par_major = NULL;

    CHECK_OBJECT( (PyObject *)par_minor );
    Py_DECREF( par_minor );
    par_minor = NULL;

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

    CHECK_OBJECT( (PyObject *)par_major );
    Py_DECREF( par_major );
    par_major = NULL;

    CHECK_OBJECT( (PyObject *)par_minor );
    Py_DECREF( par_minor );
    par_minor = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_2_magic );
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


static PyObject *impl_numpy$lib$format$$$function_3_read_magic( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *var_magic_str = NULL;
    PyObject *var_major = NULL;
    PyObject *var_minor = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_49f7e5e84ba12bc2a1b6017690c0bc4e;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_49f7e5e84ba12bc2a1b6017690c0bc4e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_49f7e5e84ba12bc2a1b6017690c0bc4e, codeobj_49f7e5e84ba12bc2a1b6017690c0bc4e, module_numpy$lib$format, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_49f7e5e84ba12bc2a1b6017690c0bc4e = cache_frame_49f7e5e84ba12bc2a1b6017690c0bc4e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_49f7e5e84ba12bc2a1b6017690c0bc4e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_49f7e5e84ba12bc2a1b6017690c0bc4e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__read_bytes );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__read_bytes );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_read_bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 232;
            type_description_1 = "ooNoo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fp );
        tmp_args_element_name_1 = par_fp;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_MAGIC_LEN );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAGIC_LEN );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAGIC_LEN" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 232;
            type_description_1 = "ooNoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_3 = const_str_digest_e25f2de5ede7bba80eabc72f791b074a;
        frame_49f7e5e84ba12bc2a1b6017690c0bc4e->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "ooNoo";
            goto frame_exception_exit_1;
        }
        assert( var_magic_str == NULL );
        var_magic_str = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( var_magic_str );
        tmp_subscribed_name_1 = var_magic_str;
        tmp_subscript_name_1 = const_slice_none_int_neg_2_none;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooNoo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_MAGIC_PREFIX );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAGIC_PREFIX );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAGIC_PREFIX" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 233;
            type_description_1 = "ooNoo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_3;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooNoo";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_left_name_1 = const_str_digest_6b57301b654c3843c381d8353fb691a6;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_MAGIC_PREFIX );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAGIC_PREFIX );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAGIC_PREFIX" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 235;
                type_description_1 = "ooNoo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_4;
            tmp_right_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_magic_str );
            tmp_subscribed_name_2 = var_magic_str;
            tmp_subscript_name_2 = const_slice_none_int_neg_2_none;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_1 );

                exception_lineno = 235;
                type_description_1 = "ooNoo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 235;
                type_description_1 = "ooNoo";
                goto frame_exception_exit_1;
            }
            frame_49f7e5e84ba12bc2a1b6017690c0bc4e->m_frame.f_lineno = 235;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 235;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooNoo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_subscript_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 236;
            type_description_1 = "ooNoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_5;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooNoo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooNoo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooNoo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            tmp_called_name_2 = (PyObject *)&PyMap_Type;
            tmp_args_element_name_4 = LOOKUP_BUILTIN( const_str_plain_ord );
            assert( tmp_args_element_name_4 != NULL );
            CHECK_OBJECT( var_magic_str );
            tmp_subscribed_name_4 = var_magic_str;
            tmp_subscript_name_4 = const_slice_int_neg_2_none_none;
            tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "ooNoo";
                goto try_except_handler_2;
            }
            frame_49f7e5e84ba12bc2a1b6017690c0bc4e->m_frame.f_lineno = 237;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "ooNoo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "ooNoo";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


                type_description_1 = "ooNoo";
                exception_lineno = 237;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


                type_description_1 = "ooNoo";
                exception_lineno = 237;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                        type_description_1 = "ooNoo";
                        exception_lineno = 237;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooNoo";
                exception_lineno = 237;
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
            assert( var_major == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_major = tmp_assign_source_5;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
            assert( var_minor == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_minor = tmp_assign_source_6;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        goto branch_end_2;
        branch_no_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( var_magic_str );
            tmp_subscribed_name_5 = var_magic_str;
            tmp_subscript_name_5 = const_slice_int_neg_2_none_none;
            tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "ooNoo";
                goto try_except_handler_4;
            }
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "ooNoo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


                type_description_1 = "ooNoo";
                exception_lineno = 239;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


                type_description_1 = "ooNoo";
                exception_lineno = 239;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                        type_description_1 = "ooNoo";
                        exception_lineno = 239;
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

                type_description_1 = "ooNoo";
                exception_lineno = 239;
                goto try_except_handler_5;
            }
        }
        goto try_end_3;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        try_end_3:;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
            assert( var_major == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_major = tmp_assign_source_10;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
            assert( var_minor == NULL );
            Py_INCREF( tmp_assign_source_11 );
            var_minor = tmp_assign_source_11;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_49f7e5e84ba12bc2a1b6017690c0bc4e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_49f7e5e84ba12bc2a1b6017690c0bc4e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_49f7e5e84ba12bc2a1b6017690c0bc4e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_49f7e5e84ba12bc2a1b6017690c0bc4e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_49f7e5e84ba12bc2a1b6017690c0bc4e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_49f7e5e84ba12bc2a1b6017690c0bc4e,
        type_description_1,
        par_fp,
        var_magic_str,
        NULL,
        var_major,
        var_minor
    );


    // Release cached frame.
    if ( frame_49f7e5e84ba12bc2a1b6017690c0bc4e == cache_frame_49f7e5e84ba12bc2a1b6017690c0bc4e )
    {
        Py_DECREF( frame_49f7e5e84ba12bc2a1b6017690c0bc4e );
    }
    cache_frame_49f7e5e84ba12bc2a1b6017690c0bc4e = NULL;

    assertFrameObject( frame_49f7e5e84ba12bc2a1b6017690c0bc4e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( var_major );
        tmp_tuple_element_2 = var_major;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_minor );
        tmp_tuple_element_2 = var_minor;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_3_read_magic );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)var_magic_str );
    Py_DECREF( var_magic_str );
    var_magic_str = NULL;

    CHECK_OBJECT( (PyObject *)var_major );
    Py_DECREF( var_major );
    var_major = NULL;

    CHECK_OBJECT( (PyObject *)var_minor );
    Py_DECREF( var_minor );
    var_minor = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( var_magic_str );
    var_magic_str = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_3_read_magic );
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


static PyObject *impl_numpy$lib$format$$$function_4_dtype_to_descr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_747850964539e605df795cb375159def;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_747850964539e605df795cb375159def = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_747850964539e605df795cb375159def, codeobj_747850964539e605df795cb375159def, module_numpy$lib$format, sizeof(void *) );
    frame_747850964539e605df795cb375159def = cache_frame_747850964539e605df795cb375159def;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_747850964539e605df795cb375159def );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_747850964539e605df795cb375159def ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_dtype );
        tmp_source_name_1 = par_dtype;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_names );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
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
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_dtype );
            tmp_source_name_2 = par_dtype;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_descr );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_dtype );
            tmp_source_name_3 = par_dtype;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_str );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_747850964539e605df795cb375159def );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_747850964539e605df795cb375159def );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_747850964539e605df795cb375159def );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_747850964539e605df795cb375159def, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_747850964539e605df795cb375159def->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_747850964539e605df795cb375159def, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_747850964539e605df795cb375159def,
        type_description_1,
        par_dtype
    );


    // Release cached frame.
    if ( frame_747850964539e605df795cb375159def == cache_frame_747850964539e605df795cb375159def )
    {
        Py_DECREF( frame_747850964539e605df795cb375159def );
    }
    cache_frame_747850964539e605df795cb375159def = NULL;

    assertFrameObject( frame_747850964539e605df795cb375159def );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_4_dtype_to_descr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_4_dtype_to_descr );
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


static PyObject *impl_numpy$lib$format$$$function_5_descr_to_dtype( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_descr = python_pars[ 0 ];
    PyObject *var_dt = NULL;
    PyObject *var_fields = NULL;
    PyObject *var_offset = NULL;
    PyObject *var_field = NULL;
    PyObject *var_name = NULL;
    PyObject *var_descr_str = NULL;
    PyObject *var_shape = NULL;
    PyObject *var_is_pad = NULL;
    PyObject *var_names = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_offsets = NULL;
    PyObject *var_nametups = NULL;
    PyObject *var_titles = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_080a9c72b344c13d3664071c4e521344;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
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
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_080a9c72b344c13d3664071c4e521344 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_080a9c72b344c13d3664071c4e521344, codeobj_080a9c72b344c13d3664071c4e521344, module_numpy$lib$format, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_080a9c72b344c13d3664071c4e521344 = cache_frame_080a9c72b344c13d3664071c4e521344;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_080a9c72b344c13d3664071c4e521344 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_080a9c72b344c13d3664071c4e521344 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_descr );
        tmp_isinstance_inst_1 = par_descr;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "oooooooooooooo";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 285;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_descr );
            tmp_args_element_name_1 = par_descr;
            frame_080a9c72b344c13d3664071c4e521344->m_frame.f_lineno = 285;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 285;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            CHECK_OBJECT( par_descr );
            tmp_isinstance_inst_2 = par_descr;
            tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 286;
                type_description_1 = "oooooooooooooo";
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
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_descr_to_dtype );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_descr_to_dtype );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "descr_to_dtype" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 288;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_2;
                CHECK_OBJECT( par_descr );
                tmp_subscribed_name_1 = par_descr;
                tmp_subscript_name_1 = const_int_0;
                tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 288;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_080a9c72b344c13d3664071c4e521344->m_frame.f_lineno = 288;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_assign_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 288;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_dt == NULL );
                var_dt = tmp_assign_source_1;
            }
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_1;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 289;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_1 = tmp_mvar_value_3;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 289;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_dt );
                tmp_tuple_element_1 = var_dt;
                tmp_args_element_name_3 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( par_descr );
                tmp_subscribed_name_2 = par_descr;
                tmp_subscript_name_2 = const_int_pos_1;
                tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_args_element_name_3 );

                    exception_lineno = 289;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_1 );
                frame_080a9c72b344c13d3664071c4e521344->m_frame.f_lineno = 289;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_3 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 289;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( var_fields == NULL );
        var_fields = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_0;
        assert( var_offset == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_offset = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_descr );
        tmp_iter_arg_1 = par_descr;
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
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
                type_description_1 = "oooooooooooooo";
                exception_lineno = 292;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_field;
            var_field = tmp_assign_source_6;
            Py_INCREF( var_field );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_field );
        tmp_len_arg_1 = var_field;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( var_field );
            tmp_iter_arg_2 = var_field;
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 294;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_3;
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
            tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 294;
                goto try_except_handler_4;
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
            tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 294;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_2;
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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

                        type_description_1 = "oooooooooooooo";
                        exception_lineno = 294;
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

                type_description_1 = "oooooooooooooo";
                exception_lineno = 294;
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
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = var_name;
                var_name = tmp_assign_source_10;
                Py_INCREF( var_name );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
            {
                PyObject *old = var_descr_str;
                var_descr_str = tmp_assign_source_11;
                Py_INCREF( var_descr_str );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_descr_to_dtype );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_descr_to_dtype );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "descr_to_dtype" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 295;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_3 = tmp_mvar_value_4;
            CHECK_OBJECT( var_descr_str );
            tmp_args_element_name_4 = var_descr_str;
            frame_080a9c72b344c13d3664071c4e521344->m_frame.f_lineno = 295;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_dt;
                var_dt = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( var_field );
            tmp_iter_arg_3 = var_field;
            tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 297;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_3, 0, 3 );
            if ( tmp_assign_source_14 == NULL )
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 297;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_4, 1, 3 );
            if ( tmp_assign_source_15 == NULL )
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 297;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_5, 2, 3 );
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 297;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_3;
                tmp_tuple_unpack_2__element_3 = tmp_assign_source_16;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                        type_description_1 = "oooooooooooooo";
                        exception_lineno = 297;
                        goto try_except_handler_6;
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

                type_description_1 = "oooooooooooooo";
                exception_lineno = 297;
                goto try_except_handler_6;
            }
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_5;
        // End of try:
        try_end_3:;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_2;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_17 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_name;
                var_name = tmp_assign_source_17;
                Py_INCREF( var_name );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_descr_str;
                var_descr_str = tmp_assign_source_18;
                Py_INCREF( var_descr_str );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
            tmp_assign_source_19 = tmp_tuple_unpack_2__element_3;
            {
                PyObject *old = var_shape;
                var_shape = tmp_assign_source_19;
                Py_INCREF( var_shape );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 298;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_2 = tmp_mvar_value_5;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_descr_to_dtype );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_descr_to_dtype );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "descr_to_dtype" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 298;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_5 = tmp_mvar_value_6;
            CHECK_OBJECT( var_descr_str );
            tmp_args_element_name_6 = var_descr_str;
            frame_080a9c72b344c13d3664071c4e521344->m_frame.f_lineno = 298;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 298;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_5 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_shape );
            tmp_tuple_element_2 = var_shape;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_2 );
            frame_080a9c72b344c13d3664071c4e521344->m_frame.f_lineno = 298;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_dt;
                var_dt = tmp_assign_source_20;
                Py_XDECREF( old );
            }

        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_21;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( var_name );
        tmp_compexpr_left_2 = var_name;
        tmp_compexpr_right_2 = const_str_empty;
        tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 302;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
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
        Py_DECREF( tmp_and_left_value_1 );
        CHECK_OBJECT( var_dt );
        tmp_source_name_3 = var_dt;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_type );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 302;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_4 = tmp_mvar_value_7;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_void );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 302;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_2 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? Py_True : Py_False;
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
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
        CHECK_OBJECT( var_dt );
        tmp_source_name_5 = var_dt;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_names );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_4 = Py_None;
        tmp_and_right_value_2 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? Py_True : Py_False;
        Py_DECREF( tmp_compexpr_left_4 );
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        Py_INCREF( tmp_and_right_value_1 );
        tmp_assign_source_21 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_21 = tmp_and_left_value_1;
        and_end_1:;
        {
            PyObject *old = var_is_pad;
            var_is_pad = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_is_pad );
        tmp_operand_name_1 = var_is_pad;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
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
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_tuple_element_3;
            CHECK_OBJECT( var_fields );
            tmp_called_instance_2 = var_fields;
            CHECK_OBJECT( var_name );
            tmp_tuple_element_3 = var_name;
            tmp_args_element_name_7 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_element_name_7, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_dt );
            tmp_tuple_element_3 = var_dt;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_element_name_7, 1, tmp_tuple_element_3 );
            CHECK_OBJECT( var_offset );
            tmp_tuple_element_3 = var_offset;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_element_name_7, 2, tmp_tuple_element_3 );
            frame_080a9c72b344c13d3664071c4e521344->m_frame.f_lineno = 304;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( var_offset );
        tmp_left_name_1 = var_offset;
        CHECK_OBJECT( var_dt );
        tmp_source_name_6 = var_dt;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_itemsize );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_22 = tmp_left_name_1;
        var_offset = tmp_assign_source_22;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
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
    try_end_5:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( var_fields );
        tmp_dircall_arg2_1 = var_fields;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_iter_arg_4 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__source_iter == NULL );
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_6, 0, 3 );
        if ( tmp_assign_source_24 == NULL )
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 308;
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_3__element_1 == NULL );
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_7, 1, 3 );
        if ( tmp_assign_source_25 == NULL )
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 308;
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_3__element_2 == NULL );
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_8, 2, 3 );
        if ( tmp_assign_source_26 == NULL )
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 308;
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_3__element_3 == NULL );
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_26;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 308;
                    goto try_except_handler_8;
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

            type_description_1 = "oooooooooooooo";
            exception_lineno = 308;
            goto try_except_handler_8;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
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

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_27 = tmp_tuple_unpack_3__element_1;
        assert( var_names == NULL );
        Py_INCREF( tmp_assign_source_27 );
        var_names = tmp_assign_source_27;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_28 = tmp_tuple_unpack_3__element_2;
        assert( var_formats == NULL );
        Py_INCREF( tmp_assign_source_28 );
        var_formats = tmp_assign_source_28;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
        tmp_assign_source_29 = tmp_tuple_unpack_3__element_3;
        assert( var_offsets == NULL );
        Py_INCREF( tmp_assign_source_29 );
        var_offsets = tmp_assign_source_29;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT( var_names );
            tmp_iter_arg_5 = var_names;
            tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_5 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_31;
        }
        // Tried code:
        tmp_assign_source_30 = numpy$lib$format$$$function_5_descr_to_dtype$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_assign_source_30)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_5_descr_to_dtype );
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_5_descr_to_dtype );
        return NULL;
        outline_result_1:;
        assert( var_nametups == NULL );
        var_nametups = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        tmp_dircall_arg1_2 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( var_nametups );
        tmp_dircall_arg2_2 = var_nametups;
        Py_INCREF( tmp_dircall_arg1_2 );
        Py_INCREF( tmp_dircall_arg2_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_iter_arg_6 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_iter_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_6 );
        Py_DECREF( tmp_iter_arg_6 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_10;
        }
        assert( tmp_tuple_unpack_4__source_iter == NULL );
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_32;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_9, 0, 2 );
        if ( tmp_assign_source_33 == NULL )
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 311;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_4__element_1 == NULL );
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_10, 1, 2 );
        if ( tmp_assign_source_34 == NULL )
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 311;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_4__element_2 == NULL );
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_34;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_4 ); assert( HAS_ITERNEXT( tmp_iterator_name_4 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_4 )->tp_iternext)( tmp_iterator_name_4 );

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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 311;
                    goto try_except_handler_11;
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

            type_description_1 = "oooooooooooooo";
            exception_lineno = 311;
            goto try_except_handler_11;
        }
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_10;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_35 = tmp_tuple_unpack_4__element_1;
        assert( var_titles == NULL );
        Py_INCREF( tmp_assign_source_35 );
        var_titles = tmp_assign_source_35;
    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_36 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_names;
            assert( old != NULL );
            var_names = tmp_assign_source_36;
            Py_INCREF( var_names );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_8;
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
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 312;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_8;
        tmp_dict_key_1 = const_str_plain_names;
        CHECK_OBJECT( var_names );
        tmp_dict_value_1 = var_names;
        tmp_args_element_name_8 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem( tmp_args_element_name_8, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_formats;
        CHECK_OBJECT( var_formats );
        tmp_dict_value_2 = var_formats;
        tmp_res = PyDict_SetItem( tmp_args_element_name_8, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_titles;
        CHECK_OBJECT( var_titles );
        tmp_dict_value_3 = var_titles;
        tmp_res = PyDict_SetItem( tmp_args_element_name_8, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_offsets;
        CHECK_OBJECT( var_offsets );
        tmp_dict_value_4 = var_offsets;
        tmp_res = PyDict_SetItem( tmp_args_element_name_8, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_itemsize;
        CHECK_OBJECT( var_offset );
        tmp_dict_value_5 = var_offset;
        tmp_res = PyDict_SetItem( tmp_args_element_name_8, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        frame_080a9c72b344c13d3664071c4e521344->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dtype, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_080a9c72b344c13d3664071c4e521344 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_080a9c72b344c13d3664071c4e521344 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_080a9c72b344c13d3664071c4e521344 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_080a9c72b344c13d3664071c4e521344, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_080a9c72b344c13d3664071c4e521344->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_080a9c72b344c13d3664071c4e521344, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_080a9c72b344c13d3664071c4e521344,
        type_description_1,
        par_descr,
        var_dt,
        var_fields,
        var_offset,
        var_field,
        var_name,
        var_descr_str,
        var_shape,
        var_is_pad,
        var_names,
        var_formats,
        var_offsets,
        var_nametups,
        var_titles
    );


    // Release cached frame.
    if ( frame_080a9c72b344c13d3664071c4e521344 == cache_frame_080a9c72b344c13d3664071c4e521344 )
    {
        Py_DECREF( frame_080a9c72b344c13d3664071c4e521344 );
    }
    cache_frame_080a9c72b344c13d3664071c4e521344 = NULL;

    assertFrameObject( frame_080a9c72b344c13d3664071c4e521344 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_5_descr_to_dtype );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_descr );
    Py_DECREF( par_descr );
    par_descr = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_fields );
    var_fields = NULL;

    Py_XDECREF( var_offset );
    var_offset = NULL;

    Py_XDECREF( var_field );
    var_field = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_descr_str );
    var_descr_str = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_is_pad );
    var_is_pad = NULL;

    Py_XDECREF( var_names );
    var_names = NULL;

    Py_XDECREF( var_formats );
    var_formats = NULL;

    Py_XDECREF( var_offsets );
    var_offsets = NULL;

    Py_XDECREF( var_nametups );
    var_nametups = NULL;

    Py_XDECREF( var_titles );
    var_titles = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_descr );
    Py_DECREF( par_descr );
    par_descr = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_fields );
    var_fields = NULL;

    Py_XDECREF( var_offset );
    var_offset = NULL;

    Py_XDECREF( var_field );
    var_field = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_descr_str );
    var_descr_str = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_is_pad );
    var_is_pad = NULL;

    Py_XDECREF( var_names );
    var_names = NULL;

    Py_XDECREF( var_formats );
    var_formats = NULL;

    Py_XDECREF( var_offsets );
    var_offsets = NULL;

    Py_XDECREF( var_nametups );
    var_nametups = NULL;

    Py_XDECREF( var_titles );
    var_titles = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_5_descr_to_dtype );
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



struct numpy$lib$format$$$function_5_descr_to_dtype$$$genexpr_1_genexpr_locals {
    PyObject *var_n;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
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

static PyObject *numpy$lib$format$$$function_5_descr_to_dtype$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$lib$format$$$function_5_descr_to_dtype$$$genexpr_1_genexpr_locals *generator_heap = (struct numpy$lib$format$$$function_5_descr_to_dtype$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_n = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_faceb17d1a5a616cb5f8c829a503a609, module_numpy$lib$format, sizeof(void *)+sizeof(void *) );
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 310;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_n;
            generator_heap->var_n = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_n );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_n );
        tmp_isinstance_inst_1 = generator_heap->var_n;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        generator_heap->tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 310;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( generator_heap->var_n );
        tmp_expression_name_1 = generator_heap->var_n;
        Py_INCREF( tmp_expression_name_1 );
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_tuple_element_1 = Py_None;
        tmp_expression_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( generator_heap->var_n );
        tmp_tuple_element_1 = generator_heap->var_n;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
        condexpr_end_1:;
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 310;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 310;
        generator_heap->type_description_1 = "No";
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

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

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
            NULL,
            generator_heap->var_n
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

    Py_XDECREF( generator_heap->var_n );
    generator_heap->var_n = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_n );
    generator_heap->var_n = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$lib$format$$$function_5_descr_to_dtype$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$lib$format$$$function_5_descr_to_dtype$$$genexpr_1_genexpr_context,
        module_numpy$lib$format,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_96376157911acd6c0249d19881fda2b1,
#endif
        codeobj_faceb17d1a5a616cb5f8c829a503a609,
        1,
        sizeof(struct numpy$lib$format$$$function_5_descr_to_dtype$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_numpy$lib$format$$$function_6_header_data_from_array_1_0( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_array = python_pars[ 0 ];
    PyObject *var_d = NULL;
    struct Nuitka_FrameObject *frame_b955a18369af0e10666306703f56323a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    static struct Nuitka_FrameObject *cache_frame_b955a18369af0e10666306703f56323a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b955a18369af0e10666306703f56323a, codeobj_b955a18369af0e10666306703f56323a, module_numpy$lib$format, sizeof(void *)+sizeof(void *) );
    frame_b955a18369af0e10666306703f56323a = cache_frame_b955a18369af0e10666306703f56323a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b955a18369af0e10666306703f56323a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b955a18369af0e10666306703f56323a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_1;
        tmp_dict_key_1 = const_str_plain_shape;
        CHECK_OBJECT( par_array );
        tmp_source_name_1 = par_array;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        assert( var_d == NULL );
        var_d = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_array );
        tmp_source_name_3 = par_array;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_flags );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_c_contiguous );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 329;
            type_description_1 = "oo";
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
        tmp_dictset_value = Py_False;
        CHECK_OBJECT( var_d );
        tmp_dictset_dict = var_d;
        tmp_dictset_key = const_str_plain_fortran_order;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_array );
            tmp_source_name_5 = par_array;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_flags );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 331;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_f_contiguous );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 331;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_2 );

                exception_lineno = 331;
                type_description_1 = "oo";
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
            tmp_dictset_value = Py_True;
            CHECK_OBJECT( var_d );
            tmp_dictset_dict = var_d;
            tmp_dictset_key = const_str_plain_fortran_order;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            assert( !(tmp_res != 0) );
            goto branch_end_2;
            branch_no_2:;
            tmp_dictset_value = Py_False;
            CHECK_OBJECT( var_d );
            tmp_dictset_dict = var_d;
            tmp_dictset_key = const_str_plain_fortran_order;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            assert( !(tmp_res != 0) );
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_dtype_to_descr );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype_to_descr );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dtype_to_descr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 339;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_array );
        tmp_source_name_6 = par_array;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b955a18369af0e10666306703f56323a->m_frame.f_lineno = 339;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_d );
        tmp_dictset_dict = var_d;
        tmp_dictset_key = const_str_plain_descr;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b955a18369af0e10666306703f56323a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b955a18369af0e10666306703f56323a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b955a18369af0e10666306703f56323a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b955a18369af0e10666306703f56323a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b955a18369af0e10666306703f56323a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b955a18369af0e10666306703f56323a,
        type_description_1,
        par_array,
        var_d
    );


    // Release cached frame.
    if ( frame_b955a18369af0e10666306703f56323a == cache_frame_b955a18369af0e10666306703f56323a )
    {
        Py_DECREF( frame_b955a18369af0e10666306703f56323a );
    }
    cache_frame_b955a18369af0e10666306703f56323a = NULL;

    assertFrameObject( frame_b955a18369af0e10666306703f56323a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_d );
    tmp_return_value = var_d;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_6_header_data_from_array_1_0 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

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

    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_6_header_data_from_array_1_0 );
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


static PyObject *impl_numpy$lib$format$$$function_7__wrap_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_header = python_pars[ 0 ];
    PyObject *par_version = python_pars[ 1 ];
    PyObject *var_struct = NULL;
    PyObject *var_fmt = NULL;
    PyObject *var_encoding = NULL;
    PyObject *var_hlen = NULL;
    PyObject *var_padlen = NULL;
    PyObject *var_header_prefix = NULL;
    PyObject *var_msg = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1fbbc25489de174da732734f5d35e9ba;
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
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_1fbbc25489de174da732734f5d35e9ba = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1fbbc25489de174da732734f5d35e9ba, codeobj_1fbbc25489de174da732734f5d35e9ba, module_numpy$lib$format, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1fbbc25489de174da732734f5d35e9ba = cache_frame_1fbbc25489de174da732734f5d35e9ba;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1fbbc25489de174da732734f5d35e9ba );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1fbbc25489de174da732734f5d35e9ba ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_struct;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$format;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_1fbbc25489de174da732734f5d35e9ba->m_frame.f_lineno = 347;
        tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 347;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_struct == NULL );
        var_struct = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_version );
        tmp_compexpr_left_1 = par_version;
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
            PyObject *tmp_raise_type_1;
            tmp_raise_type_1 = PyExc_AssertionError;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 348;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__header_size_info );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__header_size_info );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_header_size_info" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 349;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_version );
        tmp_subscript_name_1 = par_version;
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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
            exception_lineno = 349;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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
            exception_lineno = 349;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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
                    exception_lineno = 349;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooo";
            exception_lineno = 349;
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
        assert( var_fmt == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_fmt = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_encoding == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_encoding = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_header );
        tmp_isinstance_inst_1 = par_header;
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_header );
            tmp_called_instance_1 = par_header;
            CHECK_OBJECT( var_encoding );
            tmp_args_element_name_1 = var_encoding;
            frame_1fbbc25489de174da732734f5d35e9ba->m_frame.f_lineno = 351;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, call_args );
            }

            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 351;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_header;
                assert( old != NULL );
                par_header = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_header );
        tmp_len_arg_1 = par_header;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 352;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_8 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        assert( !(tmp_assign_source_8 == NULL) );
        assert( var_hlen == NULL );
        var_hlen = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_ARRAY_ALIGN );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ARRAY_ALIGN );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ARRAY_ALIGN" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 353;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_MAGIC_LEN );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAGIC_LEN );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAGIC_LEN" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 353;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_5 = tmp_mvar_value_3;
        CHECK_OBJECT( var_struct );
        tmp_called_instance_2 = var_struct;
        CHECK_OBJECT( var_fmt );
        tmp_args_element_name_2 = var_fmt;
        frame_1fbbc25489de174da732734f5d35e9ba->m_frame.f_lineno = 353;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_calcsize, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_hlen );
        tmp_right_name_4 = var_hlen;
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_ARRAY_ALIGN );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ARRAY_ALIGN );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ARRAY_ALIGN" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 353;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_5 = tmp_mvar_value_4;
        tmp_right_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_padlen == NULL );
        var_padlen = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_magic );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_magic );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "magic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 355;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_5;
        CHECK_OBJECT( par_version );
        tmp_dircall_arg2_1 = par_version;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_left_name_6 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_struct );
        tmp_source_name_1 = var_struct;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pack );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 355;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_fmt );
        tmp_args_element_name_3 = var_fmt;
        CHECK_OBJECT( var_hlen );
        tmp_left_name_7 = var_hlen;
        CHECK_OBJECT( var_padlen );
        tmp_right_name_7 = var_padlen;
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 355;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        frame_1fbbc25489de174da732734f5d35e9ba->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_right_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 355;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        assert( var_header_prefix == NULL );
        var_header_prefix = tmp_assign_source_10;
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
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_1fbbc25489de174da732734f5d35e9ba, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_1fbbc25489de174da732734f5d35e9ba, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        CHECK_OBJECT( var_struct );
        tmp_source_name_2 = var_struct;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_error );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_called_instance_3 = const_str_digest_93225b4c27f5e31c15cb4d0172d90e28;
            CHECK_OBJECT( var_hlen );
            tmp_args_element_name_5 = var_hlen;
            CHECK_OBJECT( par_version );
            tmp_args_element_name_6 = par_version;
            frame_1fbbc25489de174da732734f5d35e9ba->m_frame.f_lineno = 357;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_format, call_args );
            }

            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 357;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            assert( var_msg == NULL );
            var_msg = tmp_assign_source_11;
        }
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_1;
            CHECK_OBJECT( var_msg );
            tmp_make_exception_arg_1 = var_msg;
            frame_1fbbc25489de174da732734f5d35e9ba->m_frame.f_lineno = 358;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 358;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 354;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_1fbbc25489de174da732734f5d35e9ba->m_frame) frame_1fbbc25489de174da732734f5d35e9ba->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooo";
        goto try_except_handler_5;
        branch_end_3:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_7__wrap_header );
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
    try_end_3:;
    {
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_10;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT( var_header_prefix );
        tmp_left_name_10 = var_header_prefix;
        CHECK_OBJECT( par_header );
        tmp_right_name_8 = par_header;
        tmp_left_name_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_8 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_11 = const_bytes_chr_32;
        CHECK_OBJECT( var_padlen );
        tmp_right_name_10 = var_padlen;
        tmp_right_name_9 = BINARY_OPERATION_MUL_BYTES_OBJECT( tmp_left_name_11, tmp_right_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 365;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_11 = const_bytes_chr_10;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_BYTES( tmp_left_name_8, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fbbc25489de174da732734f5d35e9ba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fbbc25489de174da732734f5d35e9ba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fbbc25489de174da732734f5d35e9ba );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1fbbc25489de174da732734f5d35e9ba, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1fbbc25489de174da732734f5d35e9ba->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1fbbc25489de174da732734f5d35e9ba, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1fbbc25489de174da732734f5d35e9ba,
        type_description_1,
        par_header,
        par_version,
        var_struct,
        var_fmt,
        var_encoding,
        var_hlen,
        var_padlen,
        var_header_prefix,
        var_msg
    );


    // Release cached frame.
    if ( frame_1fbbc25489de174da732734f5d35e9ba == cache_frame_1fbbc25489de174da732734f5d35e9ba )
    {
        Py_DECREF( frame_1fbbc25489de174da732734f5d35e9ba );
    }
    cache_frame_1fbbc25489de174da732734f5d35e9ba = NULL;

    assertFrameObject( frame_1fbbc25489de174da732734f5d35e9ba );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_7__wrap_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_header );
    Py_DECREF( par_header );
    par_header = NULL;

    CHECK_OBJECT( (PyObject *)par_version );
    Py_DECREF( par_version );
    par_version = NULL;

    CHECK_OBJECT( (PyObject *)var_struct );
    Py_DECREF( var_struct );
    var_struct = NULL;

    CHECK_OBJECT( (PyObject *)var_fmt );
    Py_DECREF( var_fmt );
    var_fmt = NULL;

    CHECK_OBJECT( (PyObject *)var_encoding );
    Py_DECREF( var_encoding );
    var_encoding = NULL;

    CHECK_OBJECT( (PyObject *)var_hlen );
    Py_DECREF( var_hlen );
    var_hlen = NULL;

    CHECK_OBJECT( (PyObject *)var_padlen );
    Py_DECREF( var_padlen );
    var_padlen = NULL;

    CHECK_OBJECT( (PyObject *)var_header_prefix );
    Py_DECREF( var_header_prefix );
    var_header_prefix = NULL;

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

    Py_XDECREF( par_header );
    par_header = NULL;

    CHECK_OBJECT( (PyObject *)par_version );
    Py_DECREF( par_version );
    par_version = NULL;

    Py_XDECREF( var_struct );
    var_struct = NULL;

    Py_XDECREF( var_fmt );
    var_fmt = NULL;

    Py_XDECREF( var_encoding );
    var_encoding = NULL;

    Py_XDECREF( var_hlen );
    var_hlen = NULL;

    Py_XDECREF( var_padlen );
    var_padlen = NULL;

    Py_XDECREF( var_header_prefix );
    var_header_prefix = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_7__wrap_header );
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


static PyObject *impl_numpy$lib$format$$$function_8__wrap_header_guess_version( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_header = python_pars[ 0 ];
    PyObject *var_ret = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_e9ef41dfd4aedd5cea77afe76c6b9e8f;
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
    static struct Nuitka_FrameObject *cache_frame_e9ef41dfd4aedd5cea77afe76c6b9e8f = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e9ef41dfd4aedd5cea77afe76c6b9e8f, codeobj_e9ef41dfd4aedd5cea77afe76c6b9e8f, module_numpy$lib$format, sizeof(void *)+sizeof(void *) );
    frame_e9ef41dfd4aedd5cea77afe76c6b9e8f = cache_frame_e9ef41dfd4aedd5cea77afe76c6b9e8f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e9ef41dfd4aedd5cea77afe76c6b9e8f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e9ef41dfd4aedd5cea77afe76c6b9e8f ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__wrap_header );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrap_header );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wrap_header" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 373;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_header );
        tmp_args_element_name_1 = par_header;
        tmp_args_element_name_2 = const_tuple_int_pos_1_int_0_tuple;
        frame_e9ef41dfd4aedd5cea77afe76c6b9e8f->m_frame.f_lineno = 373;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_8__wrap_header_guess_version );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_e9ef41dfd4aedd5cea77afe76c6b9e8f, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_e9ef41dfd4aedd5cea77afe76c6b9e8f, exception_keeper_lineno_1 );
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
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "oo";
            goto try_except_handler_3;
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
            exception_lineno = 372;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_e9ef41dfd4aedd5cea77afe76c6b9e8f->m_frame) frame_e9ef41dfd4aedd5cea77afe76c6b9e8f->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_no_1:;
    }
    goto try_end_1;
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
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_8__wrap_header_guess_version );
    return NULL;
    // End of try:
    try_end_2:;
    {
        nuitka_bool tmp_assign_source_1;
        tmp_assign_source_1 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__wrap_header );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrap_header );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wrap_header" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 378;
            type_description_1 = "oo";
            goto try_except_handler_5;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_header );
        tmp_args_element_name_3 = par_header;
        tmp_args_element_name_4 = const_tuple_int_pos_2_int_0_tuple;
        frame_e9ef41dfd4aedd5cea77afe76c6b9e8f->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oo";
            goto try_except_handler_5;
        }
        assert( var_ret == NULL );
        var_ret = tmp_assign_source_2;
    }
    goto try_end_3;
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

    {
        nuitka_bool tmp_assign_source_3;
        tmp_assign_source_3 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
    }
    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_e9ef41dfd4aedd5cea77afe76c6b9e8f, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_e9ef41dfd4aedd5cea77afe76c6b9e8f, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_UnicodeEncodeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "oo";
            goto try_except_handler_6;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "oo";
            goto try_except_handler_6;
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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 377;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_e9ef41dfd4aedd5cea77afe76c6b9e8f->m_frame) frame_e9ef41dfd4aedd5cea77afe76c6b9e8f->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_6;
        branch_no_2:;
    }
    goto try_end_4;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_8__wrap_header_guess_version );
    return NULL;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 382;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }

            tmp_source_name_1 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
            tmp_tuple_element_1 = const_str_digest_fd7687f1b33067658de50d7c90b33946;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_UserWarning );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UserWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 383;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }

            tmp_tuple_element_1 = tmp_mvar_value_4;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
            frame_e9ef41dfd4aedd5cea77afe76c6b9e8f->m_frame.f_lineno = 382;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        if ( var_ret == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ret" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 384;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_return_value = var_ret;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_4;
        branch_no_3:;
    }
    goto try_end_5;
    // Return handler code:
    try_return_handler_4:;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__wrap_header );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrap_header );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wrap_header" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 386;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        CHECK_OBJECT( par_header );
        tmp_args_element_name_5 = par_header;
        tmp_args_element_name_6 = const_tuple_int_pos_3_int_0_tuple;
        frame_e9ef41dfd4aedd5cea77afe76c6b9e8f->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_header;
            assert( old != NULL );
            par_header = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_warnings );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_6;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_warn );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = const_str_digest_47490b92797e96c948922a3bc4531152;
        tmp_args_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_UserWarning );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UserWarning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 388;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_7;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
        frame_e9ef41dfd4aedd5cea77afe76c6b9e8f->m_frame.f_lineno = 387;
        tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9ef41dfd4aedd5cea77afe76c6b9e8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9ef41dfd4aedd5cea77afe76c6b9e8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9ef41dfd4aedd5cea77afe76c6b9e8f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e9ef41dfd4aedd5cea77afe76c6b9e8f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e9ef41dfd4aedd5cea77afe76c6b9e8f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e9ef41dfd4aedd5cea77afe76c6b9e8f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e9ef41dfd4aedd5cea77afe76c6b9e8f,
        type_description_1,
        par_header,
        var_ret
    );


    // Release cached frame.
    if ( frame_e9ef41dfd4aedd5cea77afe76c6b9e8f == cache_frame_e9ef41dfd4aedd5cea77afe76c6b9e8f )
    {
        Py_DECREF( frame_e9ef41dfd4aedd5cea77afe76c6b9e8f );
    }
    cache_frame_e9ef41dfd4aedd5cea77afe76c6b9e8f = NULL;

    assertFrameObject( frame_e9ef41dfd4aedd5cea77afe76c6b9e8f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_header );
    tmp_return_value = par_header;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_8__wrap_header_guess_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_header );
    Py_DECREF( par_header );
    par_header = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

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

    CHECK_OBJECT( (PyObject *)par_header );
    Py_DECREF( par_header );
    par_header = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_8__wrap_header_guess_version );
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


static PyObject *impl_numpy$lib$format$$$function_9__write_array_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *par_version = python_pars[ 2 ];
    PyObject *var_header = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_373b385b729b8dfb3dfec0c20488e182;
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
    static struct Nuitka_FrameObject *cache_frame_373b385b729b8dfb3dfec0c20488e182 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY( const_list_str_chr_123_list );
        assert( var_header == NULL );
        var_header = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_373b385b729b8dfb3dfec0c20488e182, codeobj_373b385b729b8dfb3dfec0c20488e182, module_numpy$lib$format, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_373b385b729b8dfb3dfec0c20488e182 = cache_frame_373b385b729b8dfb3dfec0c20488e182;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_373b385b729b8dfb3dfec0c20488e182 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_373b385b729b8dfb3dfec0c20488e182 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_sorted );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( par_d );
        tmp_called_instance_1 = par_d;
        frame_373b385b729b8dfb3dfec0c20488e182->m_frame.f_lineno = 407;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_373b385b729b8dfb3dfec0c20488e182->m_frame.f_lineno = 407;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
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
                exception_lineno = 407;
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


            exception_lineno = 407;
            type_description_1 = "oooooo";
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


            type_description_1 = "oooooo";
            exception_lineno = 407;
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


            type_description_1 = "oooooo";
            exception_lineno = 407;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 407;
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

            type_description_1 = "oooooo";
            exception_lineno = 407;
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
            PyObject *old = var_key;
            var_key = tmp_assign_source_7;
            Py_INCREF( var_key );
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
            PyObject *old = var_value;
            var_value = tmp_assign_source_8;
            Py_INCREF( var_value );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_header );
        tmp_source_name_1 = var_header;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_1 = const_str_digest_c359ce7ebde4a0919353ed793b017ae6;
        CHECK_OBJECT( var_key );
        tmp_tuple_element_1 = var_key;
        tmp_right_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_value );
        tmp_operand_name_1 = var_value;
        tmp_tuple_element_1 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 409;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 409;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_373b385b729b8dfb3dfec0c20488e182->m_frame.f_lineno = 409;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "oooooo";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( var_header );
        tmp_called_instance_2 = var_header;
        frame_373b385b729b8dfb3dfec0c20488e182->m_frame.f_lineno = 410;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_chr_125_tuple, 0 ) );

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_3 = const_str_empty;
        CHECK_OBJECT( var_header );
        tmp_args_element_name_3 = var_header;
        frame_373b385b729b8dfb3dfec0c20488e182->m_frame.f_lineno = 411;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_join, call_args );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_header;
            assert( old != NULL );
            var_header = tmp_assign_source_9;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__filter_header );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__filter_header );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_filter_header" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 412;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_1;
        CHECK_OBJECT( var_header );
        tmp_args_element_name_4 = var_header;
        frame_373b385b729b8dfb3dfec0c20488e182->m_frame.f_lineno = 412;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_header;
            assert( old != NULL );
            var_header = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_version );
        tmp_compexpr_left_1 = par_version;
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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__wrap_header_guess_version );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrap_header_guess_version );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wrap_header_guess_version" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 414;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_2;
            CHECK_OBJECT( var_header );
            tmp_args_element_name_5 = var_header;
            frame_373b385b729b8dfb3dfec0c20488e182->m_frame.f_lineno = 414;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_header;
                assert( old != NULL );
                var_header = tmp_assign_source_11;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__wrap_header );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrap_header );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wrap_header" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 416;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_3;
            CHECK_OBJECT( var_header );
            tmp_args_element_name_6 = var_header;
            CHECK_OBJECT( par_version );
            tmp_args_element_name_7 = par_version;
            frame_373b385b729b8dfb3dfec0c20488e182->m_frame.f_lineno = 416;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 416;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_header;
                assert( old != NULL );
                var_header = tmp_assign_source_12;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( par_fp );
        tmp_called_instance_4 = par_fp;
        CHECK_OBJECT( var_header );
        tmp_args_element_name_8 = var_header;
        frame_373b385b729b8dfb3dfec0c20488e182->m_frame.f_lineno = 417;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_write, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_373b385b729b8dfb3dfec0c20488e182 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_373b385b729b8dfb3dfec0c20488e182 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_373b385b729b8dfb3dfec0c20488e182, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_373b385b729b8dfb3dfec0c20488e182->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_373b385b729b8dfb3dfec0c20488e182, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_373b385b729b8dfb3dfec0c20488e182,
        type_description_1,
        par_fp,
        par_d,
        par_version,
        var_header,
        var_key,
        var_value
    );


    // Release cached frame.
    if ( frame_373b385b729b8dfb3dfec0c20488e182 == cache_frame_373b385b729b8dfb3dfec0c20488e182 )
    {
        Py_DECREF( frame_373b385b729b8dfb3dfec0c20488e182 );
    }
    cache_frame_373b385b729b8dfb3dfec0c20488e182 = NULL;

    assertFrameObject( frame_373b385b729b8dfb3dfec0c20488e182 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_9__write_array_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_version );
    Py_DECREF( par_version );
    par_version = NULL;

    CHECK_OBJECT( (PyObject *)var_header );
    Py_DECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_version );
    Py_DECREF( par_version );
    par_version = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_9__write_array_header );
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


static PyObject *impl_numpy$lib$format$$$function_10_write_array_header_1_0( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2095f0974ef8f77bf9178293da521648;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2095f0974ef8f77bf9178293da521648 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2095f0974ef8f77bf9178293da521648, codeobj_2095f0974ef8f77bf9178293da521648, module_numpy$lib$format, sizeof(void *)+sizeof(void *) );
    frame_2095f0974ef8f77bf9178293da521648 = cache_frame_2095f0974ef8f77bf9178293da521648;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2095f0974ef8f77bf9178293da521648 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2095f0974ef8f77bf9178293da521648 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__write_array_header );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__write_array_header );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_write_array_header" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 429;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fp );
        tmp_args_element_name_1 = par_fp;
        CHECK_OBJECT( par_d );
        tmp_args_element_name_2 = par_d;
        tmp_args_element_name_3 = const_tuple_int_pos_1_int_0_tuple;
        frame_2095f0974ef8f77bf9178293da521648->m_frame.f_lineno = 429;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2095f0974ef8f77bf9178293da521648 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2095f0974ef8f77bf9178293da521648 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2095f0974ef8f77bf9178293da521648, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2095f0974ef8f77bf9178293da521648->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2095f0974ef8f77bf9178293da521648, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2095f0974ef8f77bf9178293da521648,
        type_description_1,
        par_fp,
        par_d
    );


    // Release cached frame.
    if ( frame_2095f0974ef8f77bf9178293da521648 == cache_frame_2095f0974ef8f77bf9178293da521648 )
    {
        Py_DECREF( frame_2095f0974ef8f77bf9178293da521648 );
    }
    cache_frame_2095f0974ef8f77bf9178293da521648 = NULL;

    assertFrameObject( frame_2095f0974ef8f77bf9178293da521648 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_10_write_array_header_1_0 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_10_write_array_header_1_0 );
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


static PyObject *impl_numpy$lib$format$$$function_11_write_array_header_2_0( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_94630b08c55a7a744cd57589f887fa9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94630b08c55a7a744cd57589f887fa9a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94630b08c55a7a744cd57589f887fa9a, codeobj_94630b08c55a7a744cd57589f887fa9a, module_numpy$lib$format, sizeof(void *)+sizeof(void *) );
    frame_94630b08c55a7a744cd57589f887fa9a = cache_frame_94630b08c55a7a744cd57589f887fa9a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94630b08c55a7a744cd57589f887fa9a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94630b08c55a7a744cd57589f887fa9a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__write_array_header );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__write_array_header );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_write_array_header" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 445;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fp );
        tmp_args_element_name_1 = par_fp;
        CHECK_OBJECT( par_d );
        tmp_args_element_name_2 = par_d;
        tmp_args_element_name_3 = const_tuple_int_pos_2_int_0_tuple;
        frame_94630b08c55a7a744cd57589f887fa9a->m_frame.f_lineno = 445;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94630b08c55a7a744cd57589f887fa9a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94630b08c55a7a744cd57589f887fa9a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94630b08c55a7a744cd57589f887fa9a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94630b08c55a7a744cd57589f887fa9a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94630b08c55a7a744cd57589f887fa9a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94630b08c55a7a744cd57589f887fa9a,
        type_description_1,
        par_fp,
        par_d
    );


    // Release cached frame.
    if ( frame_94630b08c55a7a744cd57589f887fa9a == cache_frame_94630b08c55a7a744cd57589f887fa9a )
    {
        Py_DECREF( frame_94630b08c55a7a744cd57589f887fa9a );
    }
    cache_frame_94630b08c55a7a744cd57589f887fa9a = NULL;

    assertFrameObject( frame_94630b08c55a7a744cd57589f887fa9a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_11_write_array_header_2_0 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_11_write_array_header_2_0 );
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


static PyObject *impl_numpy$lib$format$$$function_12_read_array_header_1_0( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_93ae91df7d522c4540982b61826f8991;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_93ae91df7d522c4540982b61826f8991 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_93ae91df7d522c4540982b61826f8991, codeobj_93ae91df7d522c4540982b61826f8991, module_numpy$lib$format, sizeof(void *) );
    frame_93ae91df7d522c4540982b61826f8991 = cache_frame_93ae91df7d522c4540982b61826f8991;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_93ae91df7d522c4540982b61826f8991 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_93ae91df7d522c4540982b61826f8991 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__read_array_header );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__read_array_header );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_read_array_header" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 476;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fp );
        tmp_tuple_element_1 = par_fp;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_de3f310906be721e1442f0c1d08f6d76 );
        frame_93ae91df7d522c4540982b61826f8991->m_frame.f_lineno = 476;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 476;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93ae91df7d522c4540982b61826f8991 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_93ae91df7d522c4540982b61826f8991 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93ae91df7d522c4540982b61826f8991 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_93ae91df7d522c4540982b61826f8991, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_93ae91df7d522c4540982b61826f8991->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_93ae91df7d522c4540982b61826f8991, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_93ae91df7d522c4540982b61826f8991,
        type_description_1,
        par_fp
    );


    // Release cached frame.
    if ( frame_93ae91df7d522c4540982b61826f8991 == cache_frame_93ae91df7d522c4540982b61826f8991 )
    {
        Py_DECREF( frame_93ae91df7d522c4540982b61826f8991 );
    }
    cache_frame_93ae91df7d522c4540982b61826f8991 = NULL;

    assertFrameObject( frame_93ae91df7d522c4540982b61826f8991 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_12_read_array_header_1_0 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_12_read_array_header_1_0 );
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


static PyObject *impl_numpy$lib$format$$$function_13_read_array_header_2_0( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_916b10d2a2f85acf4fdcfc2b53572b82;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_916b10d2a2f85acf4fdcfc2b53572b82 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_916b10d2a2f85acf4fdcfc2b53572b82, codeobj_916b10d2a2f85acf4fdcfc2b53572b82, module_numpy$lib$format, sizeof(void *) );
    frame_916b10d2a2f85acf4fdcfc2b53572b82 = cache_frame_916b10d2a2f85acf4fdcfc2b53572b82;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_916b10d2a2f85acf4fdcfc2b53572b82 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_916b10d2a2f85acf4fdcfc2b53572b82 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__read_array_header );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__read_array_header );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_read_array_header" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 509;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fp );
        tmp_tuple_element_1 = par_fp;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_339c73dd69e0aaff5925d2e6fbd6a68e );
        frame_916b10d2a2f85acf4fdcfc2b53572b82->m_frame.f_lineno = 509;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 509;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_916b10d2a2f85acf4fdcfc2b53572b82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_916b10d2a2f85acf4fdcfc2b53572b82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_916b10d2a2f85acf4fdcfc2b53572b82 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_916b10d2a2f85acf4fdcfc2b53572b82, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_916b10d2a2f85acf4fdcfc2b53572b82->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_916b10d2a2f85acf4fdcfc2b53572b82, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_916b10d2a2f85acf4fdcfc2b53572b82,
        type_description_1,
        par_fp
    );


    // Release cached frame.
    if ( frame_916b10d2a2f85acf4fdcfc2b53572b82 == cache_frame_916b10d2a2f85acf4fdcfc2b53572b82 )
    {
        Py_DECREF( frame_916b10d2a2f85acf4fdcfc2b53572b82 );
    }
    cache_frame_916b10d2a2f85acf4fdcfc2b53572b82 = NULL;

    assertFrameObject( frame_916b10d2a2f85acf4fdcfc2b53572b82 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_13_read_array_header_2_0 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_13_read_array_header_2_0 );
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


static PyObject *impl_numpy$lib$format$$$function_14__filter_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *var_tokenize = NULL;
    PyObject *var_StringIO = NULL;
    PyObject *var_tokens = NULL;
    PyObject *var_last_token_was_number = NULL;
    PyObject *var_string = NULL;
    PyObject *var_token = NULL;
    PyObject *var_token_type = NULL;
    PyObject *var_token_string = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_0888fa404133ccf4c31706c1053af3ec;
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
    static struct Nuitka_FrameObject *cache_frame_0888fa404133ccf4c31706c1053af3ec = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0888fa404133ccf4c31706c1053af3ec, codeobj_0888fa404133ccf4c31706c1053af3ec, module_numpy$lib$format, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0888fa404133ccf4c31706c1053af3ec = cache_frame_0888fa404133ccf4c31706c1053af3ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0888fa404133ccf4c31706c1053af3ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0888fa404133ccf4c31706c1053af3ec ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_tokenize;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$format;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_0888fa404133ccf4c31706c1053af3ec->m_frame.f_lineno = 529;
        tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 529;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tokenize == NULL );
        var_tokenize = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 530;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 530;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 530;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 530;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_import_name_from_1;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            PyObject *tmp_level_name_2;
            tmp_name_name_2 = const_str_plain_io;
            tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$format;
            tmp_locals_name_2 = Py_None;
            tmp_fromlist_name_2 = const_tuple_str_plain_StringIO_tuple;
            tmp_level_name_2 = const_int_0;
            frame_0888fa404133ccf4c31706c1053af3ec->m_frame.f_lineno = 531;
            tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
            if ( tmp_import_name_from_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 531;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StringIO );
            Py_DECREF( tmp_import_name_from_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 531;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_StringIO == NULL );
            var_StringIO = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_import_name_from_2;
            PyObject *tmp_name_name_3;
            PyObject *tmp_globals_name_3;
            PyObject *tmp_locals_name_3;
            PyObject *tmp_fromlist_name_3;
            PyObject *tmp_level_name_3;
            tmp_name_name_3 = const_str_plain_StringIO;
            tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$format;
            tmp_locals_name_3 = Py_None;
            tmp_fromlist_name_3 = const_tuple_str_plain_StringIO_tuple;
            tmp_level_name_3 = const_int_0;
            frame_0888fa404133ccf4c31706c1053af3ec->m_frame.f_lineno = 533;
            tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
            if ( tmp_import_name_from_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 533;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_StringIO );
            Py_DECREF( tmp_import_name_from_2 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 533;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_StringIO == NULL );
            var_StringIO = tmp_assign_source_3;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyList_New( 0 );
        assert( var_tokens == NULL );
        var_tokens = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_False;
        assert( var_last_token_was_number == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_last_token_was_number = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_s );
        tmp_left_name_1 = par_s;
        tmp_right_name_1 = const_str_newline;
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 538;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_string == NULL );
        var_string = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_tokenize );
        tmp_source_name_2 = var_tokenize;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_generate_tokens );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 539;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_StringIO );
        tmp_called_name_2 = var_StringIO;
        CHECK_OBJECT( var_string );
        tmp_args_element_name_2 = var_string;
        frame_0888fa404133ccf4c31706c1053af3ec->m_frame.f_lineno = 539;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 539;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_readline );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 539;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0888fa404133ccf4c31706c1053af3ec->m_frame.f_lineno = 539;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 539;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 539;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooo";
                exception_lineno = 539;
                goto try_except_handler_2;
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
            PyObject *old = var_token;
            var_token = tmp_assign_source_9;
            Py_INCREF( var_token );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_token );
        tmp_subscribed_name_2 = var_token;
        tmp_subscript_name_2 = const_int_0;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_token_type;
            var_token_type = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_token );
        tmp_subscribed_name_3 = var_token;
        tmp_subscript_name_3 = const_int_pos_1;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 541;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_token_string;
            var_token_string = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_last_token_was_number );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_last_token_was_number );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 542;
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
        CHECK_OBJECT( var_token_type );
        tmp_compexpr_left_2 = var_token_type;
        CHECK_OBJECT( var_tokenize );
        tmp_source_name_4 = var_tokenize;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_NAME );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 543;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 543;
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
        CHECK_OBJECT( var_token_string );
        tmp_compexpr_left_3 = var_token_string;
        tmp_compexpr_right_3 = const_str_plain_L;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 544;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        goto loop_start_1;
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( var_tokens );
            tmp_called_instance_1 = var_tokens;
            CHECK_OBJECT( var_token );
            tmp_args_element_name_3 = var_token;
            frame_0888fa404133ccf4c31706c1053af3ec->m_frame.f_lineno = 547;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 547;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( var_token_type );
        tmp_compexpr_left_4 = var_token_type;
        CHECK_OBJECT( var_tokenize );
        tmp_source_name_5 = var_tokenize;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_NUMBER );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 548;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_12 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 548;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_last_token_was_number;
            assert( old != NULL );
            var_last_token_was_number = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 539;
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
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_tokenize );
        tmp_called_instance_2 = var_tokenize;
        CHECK_OBJECT( var_tokens );
        tmp_args_element_name_4 = var_tokens;
        frame_0888fa404133ccf4c31706c1053af3ec->m_frame.f_lineno = 550;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_subscribed_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_untokenize, call_args );
        }

        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 550;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_slice_none_int_neg_1_none;
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 550;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0888fa404133ccf4c31706c1053af3ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0888fa404133ccf4c31706c1053af3ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0888fa404133ccf4c31706c1053af3ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0888fa404133ccf4c31706c1053af3ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0888fa404133ccf4c31706c1053af3ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0888fa404133ccf4c31706c1053af3ec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0888fa404133ccf4c31706c1053af3ec,
        type_description_1,
        par_s,
        var_tokenize,
        var_StringIO,
        var_tokens,
        var_last_token_was_number,
        var_string,
        var_token,
        var_token_type,
        var_token_string
    );


    // Release cached frame.
    if ( frame_0888fa404133ccf4c31706c1053af3ec == cache_frame_0888fa404133ccf4c31706c1053af3ec )
    {
        Py_DECREF( frame_0888fa404133ccf4c31706c1053af3ec );
    }
    cache_frame_0888fa404133ccf4c31706c1053af3ec = NULL;

    assertFrameObject( frame_0888fa404133ccf4c31706c1053af3ec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_14__filter_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)var_tokenize );
    Py_DECREF( var_tokenize );
    var_tokenize = NULL;

    CHECK_OBJECT( (PyObject *)var_StringIO );
    Py_DECREF( var_StringIO );
    var_StringIO = NULL;

    CHECK_OBJECT( (PyObject *)var_tokens );
    Py_DECREF( var_tokens );
    var_tokens = NULL;

    CHECK_OBJECT( (PyObject *)var_last_token_was_number );
    Py_DECREF( var_last_token_was_number );
    var_last_token_was_number = NULL;

    CHECK_OBJECT( (PyObject *)var_string );
    Py_DECREF( var_string );
    var_string = NULL;

    Py_XDECREF( var_token );
    var_token = NULL;

    Py_XDECREF( var_token_type );
    var_token_type = NULL;

    Py_XDECREF( var_token_string );
    var_token_string = NULL;

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

    Py_XDECREF( var_tokenize );
    var_tokenize = NULL;

    Py_XDECREF( var_StringIO );
    var_StringIO = NULL;

    Py_XDECREF( var_tokens );
    var_tokens = NULL;

    Py_XDECREF( var_last_token_was_number );
    var_last_token_was_number = NULL;

    Py_XDECREF( var_string );
    var_string = NULL;

    Py_XDECREF( var_token );
    var_token = NULL;

    Py_XDECREF( var_token_type );
    var_token_type = NULL;

    Py_XDECREF( var_token_string );
    var_token_string = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_14__filter_header );
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


static PyObject *impl_numpy$lib$format$$$function_15__read_array_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_version = python_pars[ 1 ];
    PyObject *var_struct = NULL;
    PyObject *var_hinfo = NULL;
    PyObject *var_hlength_type = NULL;
    PyObject *var_encoding = NULL;
    PyObject *var_hlength_str = NULL;
    PyObject *var_header_length = NULL;
    PyObject *var_header = NULL;
    PyObject *var_d = NULL;
    PyObject *var_e = NULL;
    PyObject *var_keys = NULL;
    PyObject *var_dtype = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1cfefbef620be42cc9ee364d28d5464e;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_FrameObject *frame_1f19e93e4ede8a4396571f4c5cb65a48_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_1f19e93e4ede8a4396571f4c5cb65a48_2 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1cfefbef620be42cc9ee364d28d5464e = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1cfefbef620be42cc9ee364d28d5464e, codeobj_1cfefbef620be42cc9ee364d28d5464e, module_numpy$lib$format, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1cfefbef620be42cc9ee364d28d5464e = cache_frame_1cfefbef620be42cc9ee364d28d5464e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1cfefbef620be42cc9ee364d28d5464e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1cfefbef620be42cc9ee364d28d5464e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_struct;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$format;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 559;
        tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 559;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        assert( var_struct == NULL );
        var_struct = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__header_size_info );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__header_size_info );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_header_size_info" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 560;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_version );
        tmp_args_element_name_1 = par_version;
        frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 560;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 560;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        assert( var_hinfo == NULL );
        var_hinfo = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_hinfo );
        tmp_compexpr_left_1 = var_hinfo;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_instance_2 = const_str_digest_7519f90f76f46e03a8d60efd5313d6e2;
            CHECK_OBJECT( par_version );
            tmp_args_element_name_2 = par_version;
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 562;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_make_exception_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, call_args );
            }

            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 562;
                type_description_1 = "oooooooooooNoo";
                goto frame_exception_exit_1;
            }
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 562;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 562;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_hinfo );
        tmp_iter_arg_1 = var_hinfo;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 563;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
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


            type_description_1 = "oooooooooooNoo";
            exception_lineno = 563;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
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


            type_description_1 = "oooooooooooNoo";
            exception_lineno = 563;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                    type_description_1 = "oooooooooooNoo";
                    exception_lineno = 563;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooNoo";
            exception_lineno = 563;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert( var_hlength_type == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_hlength_type = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert( var_encoding == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_encoding = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__read_bytes );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__read_bytes );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_read_bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 565;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_fp );
        tmp_args_element_name_3 = par_fp;
        CHECK_OBJECT( var_struct );
        tmp_called_instance_3 = var_struct;
        CHECK_OBJECT( var_hlength_type );
        tmp_args_element_name_5 = var_hlength_type;
        frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 565;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_calcsize, call_args );
        }

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 565;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = const_str_digest_8b05bf97580bab13d137118cd1756934;
        frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 565;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_6 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 565;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        assert( var_hlength_str == NULL );
        var_hlength_str = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_struct );
        tmp_called_instance_4 = var_struct;
        CHECK_OBJECT( var_hlength_type );
        tmp_args_element_name_7 = var_hlength_type;
        CHECK_OBJECT( var_hlength_str );
        tmp_args_element_name_8 = var_hlength_str;
        frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 566;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_unpack, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 566;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 566;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        assert( var_header_length == NULL );
        var_header_length = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__read_bytes );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__read_bytes );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_read_bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 567;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_fp );
        tmp_args_element_name_9 = par_fp;
        CHECK_OBJECT( var_header_length );
        tmp_args_element_name_10 = var_header_length;
        tmp_args_element_name_11 = const_str_digest_de1b1a8506a420e61bb4ba7334187135;
        frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 567;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 567;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        assert( var_header == NULL );
        var_header = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( var_header );
        tmp_called_instance_5 = var_header;
        CHECK_OBJECT( var_encoding );
        tmp_args_element_name_12 = var_encoding;
        frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 568;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_decode, call_args );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_header;
            assert( old != NULL );
            var_header = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__filter_header );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__filter_header );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_filter_header" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 576;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( var_header );
        tmp_args_element_name_13 = var_header;
        frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 576;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 576;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_header;
            assert( old != NULL );
            var_header = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_safe_eval );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_safe_eval );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "safe_eval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 578;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_4;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        CHECK_OBJECT( var_header );
        tmp_args_element_name_14 = var_header;
        frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 578;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 578;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_4;
        }
        assert( var_d == NULL );
        var_d = tmp_assign_source_13;
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
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_1cfefbef620be42cc9ee364d28d5464e, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_1cfefbef620be42cc9ee364d28d5464e, exception_keeper_lineno_3 );
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
        tmp_compexpr_right_2 = PyExc_SyntaxError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 579;
            type_description_1 = "oooooooooooNoo";
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
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_14 );
            var_e = tmp_assign_source_14;
        }
        // Tried code:
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            tmp_called_instance_6 = const_str_digest_01f9f19666116a0368c7e2436b7e789f;
            CHECK_OBJECT( var_header );
            tmp_args_element_name_15 = var_header;
            CHECK_OBJECT( var_e );
            tmp_args_element_name_16 = var_e;
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 581;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_make_exception_arg_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_format, call_args );
            }

            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 581;
                type_description_1 = "oooooooooooNoo";
                goto try_except_handler_6;
            }
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 581;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 581;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_6;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_15__read_array_header );
        return NULL;
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

        Py_XDECREF( var_e );
        var_e = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 577;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_1cfefbef620be42cc9ee364d28d5464e->m_frame) frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooNoo";
        goto try_except_handler_5;
        branch_end_2:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_15__read_array_header );
    return NULL;
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
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( var_d );
        tmp_isinstance_inst_1 = var_d;
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 582;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 582;
            type_description_1 = "oooooooooooNoo";
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_name_17;
            tmp_called_instance_7 = const_str_digest_e630f1391df37633ea7e8f19dc213e1d;
            CHECK_OBJECT( var_d );
            tmp_args_element_name_17 = var_d;
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 584;
            {
                PyObject *call_args[] = { tmp_args_element_name_17 };
                tmp_make_exception_arg_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_format, call_args );
            }

            if ( tmp_make_exception_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 584;
                type_description_1 = "oooooooooooNoo";
                goto frame_exception_exit_1;
            }
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 584;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_3 );
            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 584;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_called_instance_8;
        tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_sorted );
        assert( tmp_called_name_5 != NULL );
        CHECK_OBJECT( var_d );
        tmp_called_instance_8 = var_d;
        frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 585;
        tmp_args_element_name_18 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_keys );
        if ( tmp_args_element_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 585;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 585;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 585;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        assert( var_keys == NULL );
        var_keys = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_keys );
        tmp_compexpr_left_3 = var_keys;
        tmp_compexpr_right_3 = LIST_COPY( const_list_str_plain_descr_str_plain_fortran_order_str_plain_shape_list );
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 586;
            type_description_1 = "oooooooooooNoo";
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
            PyObject *tmp_raise_type_4;
            PyObject *tmp_make_exception_arg_4;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_name_19;
            tmp_called_instance_9 = const_str_digest_773a6663c16414683a8beef8bfab60c3;
            CHECK_OBJECT( var_keys );
            tmp_args_element_name_19 = var_keys;
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 588;
            {
                PyObject *call_args[] = { tmp_args_element_name_19 };
                tmp_make_exception_arg_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_format, call_args );
            }

            if ( tmp_make_exception_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 588;
                type_description_1 = "oooooooooooNoo";
                goto frame_exception_exit_1;
            }
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 588;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_4 };
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_4 );
            assert( !(tmp_raise_type_4 == NULL) );
            exception_type = tmp_raise_type_4;
            exception_lineno = 588;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT( var_d );
        tmp_subscribed_name_2 = var_d;
        tmp_subscript_name_2 = const_str_plain_shape;
        tmp_isinstance_inst_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_isinstance_inst_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 591;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        Py_DECREF( tmp_isinstance_inst_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 591;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 591;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
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
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 592;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_6;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_all );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 592;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( var_d );
            tmp_subscribed_name_3 = var_d;
            tmp_subscript_name_3 = const_str_plain_shape;
            tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 592;
                type_description_1 = "oooooooooooNoo";
                goto try_except_handler_7;
            }
            tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 592;
                type_description_1 = "oooooooooooNoo";
                goto try_except_handler_7;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_17;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_1f19e93e4ede8a4396571f4c5cb65a48_2, codeobj_1f19e93e4ede8a4396571f4c5cb65a48, module_numpy$lib$format, sizeof(void *) );
        frame_1f19e93e4ede8a4396571f4c5cb65a48_2 = cache_frame_1f19e93e4ede8a4396571f4c5cb65a48_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_1f19e93e4ede8a4396571f4c5cb65a48_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_1f19e93e4ede8a4396571f4c5cb65a48_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_18 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 592;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_18;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_19 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_19;
                Py_INCREF( outline_0_var_x );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_7;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( outline_0_var_x );
            tmp_isinstance_inst_3 = outline_0_var_x;
            tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
            tmp_isinstance_cls_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_isinstance_cls_3, 0, tmp_tuple_element_1 );
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_long );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_long );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_isinstance_cls_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "long" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 592;
                type_description_2 = "o";
                goto try_except_handler_8;
            }

            tmp_tuple_element_1 = tmp_mvar_value_7;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_isinstance_cls_3, 1, tmp_tuple_element_1 );
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
            Py_DECREF( tmp_isinstance_cls_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 592;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_append_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 592;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 592;
            type_description_2 = "o";
            goto try_except_handler_8;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_args_element_name_20 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_args_element_name_20 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_15__read_array_header );
        return NULL;
        // Return handler code:
        try_return_handler_8:;
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
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
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
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_1f19e93e4ede8a4396571f4c5cb65a48_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_1f19e93e4ede8a4396571f4c5cb65a48_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_7;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_1f19e93e4ede8a4396571f4c5cb65a48_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_1f19e93e4ede8a4396571f4c5cb65a48_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_1f19e93e4ede8a4396571f4c5cb65a48_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_1f19e93e4ede8a4396571f4c5cb65a48_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_1f19e93e4ede8a4396571f4c5cb65a48_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame.
        if ( frame_1f19e93e4ede8a4396571f4c5cb65a48_2 == cache_frame_1f19e93e4ede8a4396571f4c5cb65a48_2 )
        {
            Py_DECREF( frame_1f19e93e4ede8a4396571f4c5cb65a48_2 );
        }
        cache_frame_1f19e93e4ede8a4396571f4c5cb65a48_2 = NULL;

        assertFrameObject( frame_1f19e93e4ede8a4396571f4c5cb65a48_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooNoo";
        goto try_except_handler_7;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_15__read_array_header );
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_XDECREF( outline_0_var_x );
        outline_0_var_x = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_x );
        outline_0_var_x = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_15__read_array_header );
        return NULL;
        outline_exception_1:;
        exception_lineno = 592;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 592;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 592;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 592;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_5;
            PyObject *tmp_make_exception_arg_5;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            tmp_source_name_2 = const_str_digest_d5d8d493923b6bc19908a14dab225ce7;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
            assert( !(tmp_called_name_7 == NULL) );
            CHECK_OBJECT( var_d );
            tmp_subscribed_name_4 = var_d;
            tmp_subscript_name_4 = const_str_plain_shape;
            tmp_args_element_name_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_args_element_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 594;
                type_description_1 = "oooooooooooNoo";
                goto frame_exception_exit_1;
            }
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 594;
            {
                PyObject *call_args[] = { tmp_args_element_name_21 };
                tmp_make_exception_arg_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_21 );
            if ( tmp_make_exception_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 594;
                type_description_1 = "oooooooooooNoo";
                goto frame_exception_exit_1;
            }
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 594;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_5 };
                tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_5 );
            assert( !(tmp_raise_type_5 == NULL) );
            exception_type = tmp_raise_type_5;
            exception_lineno = 594;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( var_d );
        tmp_subscribed_name_5 = var_d;
        tmp_subscript_name_5 = const_str_plain_fortran_order;
        tmp_isinstance_inst_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_isinstance_inst_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 595;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_4 = (PyObject *)&PyBool_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
        Py_DECREF( tmp_isinstance_inst_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 595;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 595;
            type_description_1 = "oooooooooooNoo";
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
            PyObject *tmp_raise_type_6;
            PyObject *tmp_make_exception_arg_6;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            tmp_source_name_3 = const_str_digest_28fb7acd150fba993582d706d0419ce0;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
            assert( !(tmp_called_name_8 == NULL) );
            CHECK_OBJECT( var_d );
            tmp_subscribed_name_6 = var_d;
            tmp_subscript_name_6 = const_str_plain_fortran_order;
            tmp_args_element_name_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            if ( tmp_args_element_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_8 );

                exception_lineno = 597;
                type_description_1 = "oooooooooooNoo";
                goto frame_exception_exit_1;
            }
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 597;
            {
                PyObject *call_args[] = { tmp_args_element_name_22 };
                tmp_make_exception_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_22 );
            if ( tmp_make_exception_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 597;
                type_description_1 = "oooooooooooNoo";
                goto frame_exception_exit_1;
            }
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 597;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_6 };
                tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_6 );
            assert( !(tmp_raise_type_6 == NULL) );
            exception_type = tmp_raise_type_6;
            exception_lineno = 597;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        branch_no_6:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_descr_to_dtype );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_descr_to_dtype );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "descr_to_dtype" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 599;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_9;
        }

        tmp_called_name_9 = tmp_mvar_value_8;
        CHECK_OBJECT( var_d );
        tmp_subscribed_name_7 = var_d;
        tmp_subscript_name_7 = const_str_plain_descr;
        tmp_args_element_name_23 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_args_element_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 599;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_9;
        }
        frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 599;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_23 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 599;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_9;
        }
        assert( var_dtype == NULL );
        var_dtype = tmp_assign_source_20;
    }
    goto try_end_4;
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

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_8 == NULL )
    {
        exception_keeper_tb_8 = MAKE_TRACEBACK( frame_1cfefbef620be42cc9ee364d28d5464e, exception_keeper_lineno_8 );
    }
    else if ( exception_keeper_lineno_8 != 0 )
    {
        exception_keeper_tb_8 = ADD_TRACEBACK( exception_keeper_tb_8, frame_1cfefbef620be42cc9ee364d28d5464e, exception_keeper_lineno_8 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    PyException_SetTraceback( exception_keeper_value_8, (PyObject *)exception_keeper_tb_8 );
    PUBLISH_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 600;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_10;
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
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_21 );
            var_e = tmp_assign_source_21;
        }
        // Tried code:
        {
            PyObject *tmp_raise_type_7;
            PyObject *tmp_make_exception_arg_7;
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            tmp_source_name_4 = const_str_digest_a2fd2ac4c25bbb757f394a8528e17cb2;
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_format );
            assert( !(tmp_called_name_10 == NULL) );
            CHECK_OBJECT( var_d );
            tmp_subscribed_name_8 = var_d;
            tmp_subscript_name_8 = const_str_plain_descr;
            tmp_args_element_name_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            if ( tmp_args_element_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 602;
                type_description_1 = "oooooooooooNoo";
                goto try_except_handler_11;
            }
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 602;
            {
                PyObject *call_args[] = { tmp_args_element_name_24 };
                tmp_make_exception_arg_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_24 );
            if ( tmp_make_exception_arg_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 602;
                type_description_1 = "oooooooooooNoo";
                goto try_except_handler_11;
            }
            frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = 602;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_7 };
                tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_7 );
            assert( !(tmp_raise_type_7 == NULL) );
            exception_type = tmp_raise_type_7;
            exception_lineno = 602;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_11;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_15__read_array_header );
        return NULL;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( var_e );
        var_e = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        goto branch_end_7;
        branch_no_7:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 598;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_1cfefbef620be42cc9ee364d28d5464e->m_frame) frame_1cfefbef620be42cc9ee364d28d5464e->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooNoo";
        goto try_except_handler_10;
        branch_end_7:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_15__read_array_header );
    return NULL;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        CHECK_OBJECT( var_d );
        tmp_subscribed_name_9 = var_d;
        tmp_subscript_name_9 = const_str_plain_shape;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 604;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_d );
        tmp_subscribed_name_10 = var_d;
        tmp_subscript_name_10 = const_str_plain_fortran_order;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 604;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_dtype );
        tmp_tuple_element_2 = var_dtype;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1cfefbef620be42cc9ee364d28d5464e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1cfefbef620be42cc9ee364d28d5464e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1cfefbef620be42cc9ee364d28d5464e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1cfefbef620be42cc9ee364d28d5464e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1cfefbef620be42cc9ee364d28d5464e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1cfefbef620be42cc9ee364d28d5464e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1cfefbef620be42cc9ee364d28d5464e,
        type_description_1,
        par_fp,
        par_version,
        var_struct,
        var_hinfo,
        var_hlength_type,
        var_encoding,
        var_hlength_str,
        var_header_length,
        var_header,
        var_d,
        var_e,
        NULL,
        var_keys,
        var_dtype
    );


    // Release cached frame.
    if ( frame_1cfefbef620be42cc9ee364d28d5464e == cache_frame_1cfefbef620be42cc9ee364d28d5464e )
    {
        Py_DECREF( frame_1cfefbef620be42cc9ee364d28d5464e );
    }
    cache_frame_1cfefbef620be42cc9ee364d28d5464e = NULL;

    assertFrameObject( frame_1cfefbef620be42cc9ee364d28d5464e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_15__read_array_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_version );
    Py_DECREF( par_version );
    par_version = NULL;

    CHECK_OBJECT( (PyObject *)var_struct );
    Py_DECREF( var_struct );
    var_struct = NULL;

    CHECK_OBJECT( (PyObject *)var_hinfo );
    Py_DECREF( var_hinfo );
    var_hinfo = NULL;

    CHECK_OBJECT( (PyObject *)var_hlength_type );
    Py_DECREF( var_hlength_type );
    var_hlength_type = NULL;

    CHECK_OBJECT( (PyObject *)var_encoding );
    Py_DECREF( var_encoding );
    var_encoding = NULL;

    CHECK_OBJECT( (PyObject *)var_hlength_str );
    Py_DECREF( var_hlength_str );
    var_hlength_str = NULL;

    CHECK_OBJECT( (PyObject *)var_header_length );
    Py_DECREF( var_header_length );
    var_header_length = NULL;

    CHECK_OBJECT( (PyObject *)var_header );
    Py_DECREF( var_header );
    var_header = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)var_keys );
    Py_DECREF( var_keys );
    var_keys = NULL;

    CHECK_OBJECT( (PyObject *)var_dtype );
    Py_DECREF( var_dtype );
    var_dtype = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_version );
    Py_DECREF( par_version );
    par_version = NULL;

    Py_XDECREF( var_struct );
    var_struct = NULL;

    Py_XDECREF( var_hinfo );
    var_hinfo = NULL;

    Py_XDECREF( var_hlength_type );
    var_hlength_type = NULL;

    Py_XDECREF( var_encoding );
    var_encoding = NULL;

    Py_XDECREF( var_hlength_str );
    var_hlength_str = NULL;

    Py_XDECREF( var_header_length );
    var_header_length = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_keys );
    var_keys = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_15__read_array_header );
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


static PyObject *impl_numpy$lib$format$$$function_16_write_array( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_array = python_pars[ 1 ];
    PyObject *par_version = python_pars[ 2 ];
    PyObject *par_allow_pickle = python_pars[ 3 ];
    PyObject *par_pickle_kwargs = python_pars[ 4 ];
    PyObject *var_buffersize = NULL;
    PyObject *var_chunk = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_0754cb0f0cc9754eb46e5bdc99fa5b2c;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_0754cb0f0cc9754eb46e5bdc99fa5b2c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0754cb0f0cc9754eb46e5bdc99fa5b2c, codeobj_0754cb0f0cc9754eb46e5bdc99fa5b2c, module_numpy$lib$format, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0754cb0f0cc9754eb46e5bdc99fa5b2c = cache_frame_0754cb0f0cc9754eb46e5bdc99fa5b2c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0754cb0f0cc9754eb46e5bdc99fa5b2c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0754cb0f0cc9754eb46e5bdc99fa5b2c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__check_version );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_version );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_version" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 642;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_version );
        tmp_args_element_name_1 = par_version;
        frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 642;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 642;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__write_array_header );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__write_array_header );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_write_array_header" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 643;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_fp );
        tmp_args_element_name_2 = par_fp;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_header_data_from_array_1_0 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_header_data_from_array_1_0 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "header_data_from_array_1_0" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 643;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_array );
        tmp_args_element_name_4 = par_array;
        frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 643;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 643;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_version );
        tmp_args_element_name_5 = par_version;
        frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 643;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_5 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 643;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_array );
        tmp_source_name_1 = par_array;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_itemsize );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 645;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 645;
            type_description_1 = "ooooooo";
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
            tmp_assign_source_1 = const_int_0;
            assert( var_buffersize == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_buffersize = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_7;
            tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_4 != NULL );
            tmp_left_name_1 = const_int_pos_16777216;
            CHECK_OBJECT( par_array );
            tmp_source_name_2 = par_array;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_itemsize );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 649;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_6 = BINARY_OPERATION_FLOORDIV_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 649;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_7 = const_int_pos_1;
            frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 649;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 649;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_buffersize == NULL );
            var_buffersize = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_array );
        tmp_source_name_4 = par_array;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 651;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hasobject );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 651;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 651;
            type_description_1 = "ooooooo";
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( par_allow_pickle );
            tmp_operand_name_1 = par_allow_pickle;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 654;
                type_description_1 = "ooooooo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_d6e95407ff28cc9fb77c2a409e9ba5ce;
                frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 655;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 655;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_pickle_kwargs );
            tmp_compexpr_left_2 = par_pickle_kwargs;
            tmp_compexpr_right_2 = Py_None;
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
                tmp_assign_source_3 = PyDict_New();
                {
                    PyObject *old = par_pickle_kwargs;
                    assert( old != NULL );
                    par_pickle_kwargs = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_no_4:;
        }
        {
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dircall_arg4_1;
            PyObject *tmp_call_result_3;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_pickle );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pickle );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pickle" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 659;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_4;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dump );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 659;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_array );
            tmp_tuple_element_1 = par_array;
            tmp_dircall_arg2_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_fp );
            tmp_tuple_element_1 = par_fp;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
            tmp_dircall_arg3_1 = PyDict_Copy( const_dict_dbef56138eaa2899d16a5214011a7ad2 );
            CHECK_OBJECT( par_pickle_kwargs );
            tmp_dircall_arg4_1 = par_pickle_kwargs;
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_call_result_3 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 659;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_5;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_2;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( par_array );
            tmp_source_name_7 = par_array;
            tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_flags );
            if ( tmp_source_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 660;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_f_contiguous );
            Py_DECREF( tmp_source_name_6 );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 660;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_2 );

                exception_lineno = 660;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_2 );
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
            CHECK_OBJECT( par_array );
            tmp_source_name_9 = par_array;
            tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_flags );
            if ( tmp_source_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 660;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_c_contiguous );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 660;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 660;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_called_name_5;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_8;
                int tmp_truth_name_3;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_isfileobj );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfileobj );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isfileobj" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 661;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_5 = tmp_mvar_value_5;
                CHECK_OBJECT( par_fp );
                tmp_args_element_name_8 = par_fp;
                frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 661;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8 };
                    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                }

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 661;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_4 );
                if ( tmp_truth_name_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_4 );

                    exception_lineno = 661;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_4 );
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
                    PyObject *tmp_called_instance_1;
                    PyObject *tmp_source_name_10;
                    PyObject *tmp_call_result_5;
                    PyObject *tmp_args_element_name_9;
                    CHECK_OBJECT( par_array );
                    tmp_source_name_10 = par_array;
                    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_T );
                    if ( tmp_called_instance_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 662;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_fp );
                    tmp_args_element_name_9 = par_fp;
                    frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 662;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_9 };
                        tmp_call_result_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_tofile, call_args );
                    }

                    Py_DECREF( tmp_called_instance_1 );
                    if ( tmp_call_result_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 662;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_5 );
                }
                goto branch_end_6;
                branch_no_6:;
                {
                    PyObject *tmp_assign_source_4;
                    PyObject *tmp_iter_arg_1;
                    PyObject *tmp_called_name_6;
                    PyObject *tmp_source_name_11;
                    PyObject *tmp_mvar_value_6;
                    PyObject *tmp_args_name_1;
                    PyObject *tmp_tuple_element_2;
                    PyObject *tmp_kw_name_1;
                    PyObject *tmp_dict_key_1;
                    PyObject *tmp_dict_value_1;
                    PyObject *tmp_dict_key_2;
                    PyObject *tmp_dict_value_2;
                    PyObject *tmp_dict_key_3;
                    PyObject *tmp_dict_value_3;
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

                    if (unlikely( tmp_mvar_value_6 == NULL ))
                    {
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
                    }

                    if ( tmp_mvar_value_6 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 664;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_11 = tmp_mvar_value_6;
                    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_nditer );
                    if ( tmp_called_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 664;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_array );
                    tmp_tuple_element_2 = par_array;
                    tmp_args_name_1 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_2 );
                    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
                    tmp_dict_key_1 = const_str_plain_flags;
                    tmp_dict_value_1 = LIST_COPY( const_list_b9bb18ee739e33433d0436db7b242c32_list );
                    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                    Py_DECREF( tmp_dict_value_1 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_2 = const_str_plain_buffersize;
                    CHECK_OBJECT( var_buffersize );
                    tmp_dict_value_2 = var_buffersize;
                    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_3 = const_str_plain_order;
                    tmp_dict_value_3 = const_str_plain_F;
                    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
                    assert( !(tmp_res != 0) );
                    frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 664;
                    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_name_1 );
                    Py_DECREF( tmp_kw_name_1 );
                    if ( tmp_iter_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 664;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
                    Py_DECREF( tmp_iter_arg_1 );
                    if ( tmp_assign_source_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 664;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( tmp_for_loop_1__for_iterator == NULL );
                    tmp_for_loop_1__for_iterator = tmp_assign_source_4;
                }
                // Tried code:
                loop_start_1:;
                {
                    PyObject *tmp_next_source_1;
                    PyObject *tmp_assign_source_5;
                    CHECK_OBJECT( tmp_for_loop_1__for_iterator );
                    tmp_next_source_1 = tmp_for_loop_1__for_iterator;
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
                            type_description_1 = "ooooooo";
                            exception_lineno = 664;
                            goto try_except_handler_2;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_1__iter_value;
                        tmp_for_loop_1__iter_value = tmp_assign_source_5;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_6;
                    CHECK_OBJECT( tmp_for_loop_1__iter_value );
                    tmp_assign_source_6 = tmp_for_loop_1__iter_value;
                    {
                        PyObject *old = var_chunk;
                        var_chunk = tmp_assign_source_6;
                        Py_INCREF( var_chunk );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_called_name_7;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_call_result_6;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_called_instance_2;
                    CHECK_OBJECT( par_fp );
                    tmp_source_name_12 = par_fp;
                    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_write );
                    if ( tmp_called_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 667;
                        type_description_1 = "ooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_chunk );
                    tmp_called_instance_2 = var_chunk;
                    frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 667;
                    tmp_args_element_name_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_tobytes, &PyTuple_GET_ITEM( const_tuple_str_plain_C_tuple, 0 ) );

                    if ( tmp_args_element_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_7 );

                        exception_lineno = 667;
                        type_description_1 = "ooooooo";
                        goto try_except_handler_2;
                    }
                    frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 667;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10 };
                        tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                    }

                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_args_element_name_10 );
                    if ( tmp_call_result_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 667;
                        type_description_1 = "ooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_6 );
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 664;
                    type_description_1 = "ooooooo";
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

                branch_end_6:;
            }
            goto branch_end_5;
            branch_no_5:;
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_called_name_8;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_call_result_7;
                PyObject *tmp_args_element_name_11;
                int tmp_truth_name_4;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_isfileobj );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfileobj );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isfileobj" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 669;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_8 = tmp_mvar_value_7;
                CHECK_OBJECT( par_fp );
                tmp_args_element_name_11 = par_fp;
                frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 669;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11 };
                    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                }

                if ( tmp_call_result_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 669;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_7 );
                if ( tmp_truth_name_4 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_7 );

                    exception_lineno = 669;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_7 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_7 );
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
                    PyObject *tmp_called_instance_3;
                    PyObject *tmp_call_result_8;
                    PyObject *tmp_args_element_name_12;
                    CHECK_OBJECT( par_array );
                    tmp_called_instance_3 = par_array;
                    CHECK_OBJECT( par_fp );
                    tmp_args_element_name_12 = par_fp;
                    frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 670;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_12 };
                        tmp_call_result_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_tofile, call_args );
                    }

                    if ( tmp_call_result_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 670;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_8 );
                }
                goto branch_end_7;
                branch_no_7:;
                {
                    PyObject *tmp_assign_source_7;
                    PyObject *tmp_iter_arg_2;
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_mvar_value_8;
                    PyObject *tmp_args_name_2;
                    PyObject *tmp_tuple_element_3;
                    PyObject *tmp_kw_name_2;
                    PyObject *tmp_dict_key_4;
                    PyObject *tmp_dict_value_4;
                    PyObject *tmp_dict_key_5;
                    PyObject *tmp_dict_value_5;
                    PyObject *tmp_dict_key_6;
                    PyObject *tmp_dict_value_6;
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

                    if (unlikely( tmp_mvar_value_8 == NULL ))
                    {
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
                    }

                    if ( tmp_mvar_value_8 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 672;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_13 = tmp_mvar_value_8;
                    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_nditer );
                    if ( tmp_called_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 672;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_array );
                    tmp_tuple_element_3 = par_array;
                    tmp_args_name_2 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_3 );
                    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
                    tmp_dict_key_4 = const_str_plain_flags;
                    tmp_dict_value_4 = LIST_COPY( const_list_b9bb18ee739e33433d0436db7b242c32_list );
                    tmp_kw_name_2 = _PyDict_NewPresized( 3 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
                    Py_DECREF( tmp_dict_value_4 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_5 = const_str_plain_buffersize;
                    CHECK_OBJECT( var_buffersize );
                    tmp_dict_value_5 = var_buffersize;
                    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_6 = const_str_plain_order;
                    tmp_dict_value_6 = const_str_plain_C;
                    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
                    assert( !(tmp_res != 0) );
                    frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 672;
                    tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_2, tmp_kw_name_2 );
                    Py_DECREF( tmp_called_name_9 );
                    Py_DECREF( tmp_args_name_2 );
                    Py_DECREF( tmp_kw_name_2 );
                    if ( tmp_iter_arg_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 672;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
                    Py_DECREF( tmp_iter_arg_2 );
                    if ( tmp_assign_source_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 672;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( tmp_for_loop_2__for_iterator == NULL );
                    tmp_for_loop_2__for_iterator = tmp_assign_source_7;
                }
                // Tried code:
                loop_start_2:;
                {
                    PyObject *tmp_next_source_2;
                    PyObject *tmp_assign_source_8;
                    CHECK_OBJECT( tmp_for_loop_2__for_iterator );
                    tmp_next_source_2 = tmp_for_loop_2__for_iterator;
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
                            type_description_1 = "ooooooo";
                            exception_lineno = 672;
                            goto try_except_handler_3;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_2__iter_value;
                        tmp_for_loop_2__iter_value = tmp_assign_source_8;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_9;
                    CHECK_OBJECT( tmp_for_loop_2__iter_value );
                    tmp_assign_source_9 = tmp_for_loop_2__iter_value;
                    {
                        PyObject *old = var_chunk;
                        var_chunk = tmp_assign_source_9;
                        Py_INCREF( var_chunk );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_call_result_9;
                    PyObject *tmp_args_element_name_13;
                    PyObject *tmp_called_instance_4;
                    CHECK_OBJECT( par_fp );
                    tmp_source_name_14 = par_fp;
                    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_write );
                    if ( tmp_called_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 675;
                        type_description_1 = "ooooooo";
                        goto try_except_handler_3;
                    }
                    CHECK_OBJECT( var_chunk );
                    tmp_called_instance_4 = var_chunk;
                    frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 675;
                    tmp_args_element_name_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_tobytes, &PyTuple_GET_ITEM( const_tuple_str_plain_C_tuple, 0 ) );

                    if ( tmp_args_element_name_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );

                        exception_lineno = 675;
                        type_description_1 = "ooooooo";
                        goto try_except_handler_3;
                    }
                    frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame.f_lineno = 675;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_13 };
                        tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
                    }

                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_element_name_13 );
                    if ( tmp_call_result_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 675;
                        type_description_1 = "ooooooo";
                        goto try_except_handler_3;
                    }
                    Py_DECREF( tmp_call_result_9 );
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 672;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_3;
                }
                goto loop_start_2;
                loop_end_2:;
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

                Py_XDECREF( tmp_for_loop_2__iter_value );
                tmp_for_loop_2__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
                Py_DECREF( tmp_for_loop_2__for_iterator );
                tmp_for_loop_2__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_2;
                exception_value = exception_keeper_value_2;
                exception_tb = exception_keeper_tb_2;
                exception_lineno = exception_keeper_lineno_2;

                goto frame_exception_exit_1;
                // End of try:
                try_end_2:;
                Py_XDECREF( tmp_for_loop_2__iter_value );
                tmp_for_loop_2__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
                Py_DECREF( tmp_for_loop_2__for_iterator );
                tmp_for_loop_2__for_iterator = NULL;

                branch_end_7:;
            }
            branch_end_5:;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0754cb0f0cc9754eb46e5bdc99fa5b2c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0754cb0f0cc9754eb46e5bdc99fa5b2c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0754cb0f0cc9754eb46e5bdc99fa5b2c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0754cb0f0cc9754eb46e5bdc99fa5b2c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0754cb0f0cc9754eb46e5bdc99fa5b2c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0754cb0f0cc9754eb46e5bdc99fa5b2c,
        type_description_1,
        par_fp,
        par_array,
        par_version,
        par_allow_pickle,
        par_pickle_kwargs,
        var_buffersize,
        var_chunk
    );


    // Release cached frame.
    if ( frame_0754cb0f0cc9754eb46e5bdc99fa5b2c == cache_frame_0754cb0f0cc9754eb46e5bdc99fa5b2c )
    {
        Py_DECREF( frame_0754cb0f0cc9754eb46e5bdc99fa5b2c );
    }
    cache_frame_0754cb0f0cc9754eb46e5bdc99fa5b2c = NULL;

    assertFrameObject( frame_0754cb0f0cc9754eb46e5bdc99fa5b2c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_16_write_array );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)par_version );
    Py_DECREF( par_version );
    par_version = NULL;

    CHECK_OBJECT( (PyObject *)par_allow_pickle );
    Py_DECREF( par_allow_pickle );
    par_allow_pickle = NULL;

    Py_XDECREF( par_pickle_kwargs );
    par_pickle_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_buffersize );
    Py_DECREF( var_buffersize );
    var_buffersize = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)par_version );
    Py_DECREF( par_version );
    par_version = NULL;

    CHECK_OBJECT( (PyObject *)par_allow_pickle );
    Py_DECREF( par_allow_pickle );
    par_allow_pickle = NULL;

    Py_XDECREF( par_pickle_kwargs );
    par_pickle_kwargs = NULL;

    Py_XDECREF( var_buffersize );
    var_buffersize = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_16_write_array );
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


static PyObject *impl_numpy$lib$format$$$function_17_read_array( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_allow_pickle = python_pars[ 1 ];
    PyObject *par_pickle_kwargs = python_pars[ 2 ];
    PyObject *var_version = NULL;
    PyObject *var_shape = NULL;
    PyObject *var_fortran_order = NULL;
    PyObject *var_dtype = NULL;
    PyObject *var_count = NULL;
    PyObject *var_array = NULL;
    PyObject *var_err = NULL;
    PyObject *var_max_read_count = NULL;
    PyObject *var_i = NULL;
    PyObject *var_read_count = NULL;
    PyObject *var_read_size = NULL;
    PyObject *var_data = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5f58bcb4b331ed0cbce4954d33ffdee1;
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
    int tmp_res;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5f58bcb4b331ed0cbce4954d33ffdee1 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5f58bcb4b331ed0cbce4954d33ffdee1, codeobj_5f58bcb4b331ed0cbce4954d33ffdee1, module_numpy$lib$format, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5f58bcb4b331ed0cbce4954d33ffdee1 = cache_frame_5f58bcb4b331ed0cbce4954d33ffdee1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5f58bcb4b331ed0cbce4954d33ffdee1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5f58bcb4b331ed0cbce4954d33ffdee1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_read_magic );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_read_magic );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "read_magic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 710;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fp );
        tmp_args_element_name_1 = par_fp;
        frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 710;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 710;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_version == NULL );
        var_version = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__check_version );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_version );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_version" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 711;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_version );
        tmp_args_element_name_2 = var_version;
        frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 711;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 711;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__read_array_header );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__read_array_header );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_read_array_header" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 712;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_fp );
        tmp_args_element_name_3 = par_fp;
        CHECK_OBJECT( var_version );
        tmp_args_element_name_4 = var_version;
        frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 712;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 712;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 712;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 712;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 712;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 712;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 712;
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

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 712;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert( var_shape == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_shape = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert( var_fortran_order == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_fortran_order = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert( var_dtype == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_dtype = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_shape );
        tmp_len_arg_1 = var_shape;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 713;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
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
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = const_int_pos_1;
            assert( var_count == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_count = tmp_assign_source_9;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 716;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_4;
            tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_multiply );
            if ( tmp_source_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 716;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_reduce );
            Py_DECREF( tmp_source_name_1 );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 716;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_shape );
            tmp_tuple_element_1 = var_shape;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_dtype;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 716;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_5;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_int64 );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 716;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 716;
            tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 716;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_count == NULL );
            var_count = tmp_assign_source_10;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_dtype );
        tmp_source_name_4 = var_dtype;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hasobject );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 719;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 719;
            type_description_1 = "ooooooooooooooo";
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( par_allow_pickle );
            tmp_operand_name_1 = par_allow_pickle;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 721;
                type_description_1 = "ooooooooooooooo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_e39ecce908abada737ad8c73b9d80071;
                frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 722;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 722;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_pickle_kwargs );
            tmp_compexpr_left_2 = par_pickle_kwargs;
            tmp_compexpr_right_2 = Py_None;
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
                PyObject *tmp_assign_source_11;
                tmp_assign_source_11 = PyDict_New();
                {
                    PyObject *old = par_pickle_kwargs;
                    assert( old != NULL );
                    par_pickle_kwargs = tmp_assign_source_11;
                    Py_DECREF( old );
                }

            }
            branch_no_4:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_1;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_pickle );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pickle );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pickle" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 727;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_source_name_5 = tmp_mvar_value_6;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_load );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 727;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( par_fp );
            tmp_tuple_element_2 = par_fp;
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_pickle_kwargs );
            tmp_dircall_arg3_1 = par_pickle_kwargs;
            Py_INCREF( tmp_dircall_arg3_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_assign_source_12 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 727;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_4;
            }
            assert( var_array == NULL );
            var_array = tmp_assign_source_12;
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
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_1 );
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_1 );
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_1 );

        if ( exception_keeper_tb_3 == NULL )
        {
            exception_keeper_tb_3 = MAKE_TRACEBACK( frame_5f58bcb4b331ed0cbce4954d33ffdee1, exception_keeper_lineno_3 );
        }
        else if ( exception_keeper_lineno_3 != 0 )
        {
            exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_5f58bcb4b331ed0cbce4954d33ffdee1, exception_keeper_lineno_3 );
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
            tmp_compexpr_right_3 = PyExc_UnicodeError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 728;
                type_description_1 = "ooooooooooooooo";
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
                PyObject *tmp_assign_source_13;
                tmp_assign_source_13 = EXC_VALUE(PyThreadState_GET());
                assert( var_err == NULL );
                Py_INCREF( tmp_assign_source_13 );
                var_err = tmp_assign_source_13;
            }
            // Tried code:
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_subscript_name_1;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_sys );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 729;
                    type_description_1 = "ooooooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_source_name_6 = tmp_mvar_value_7;
                tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_version_info );
                if ( tmp_subscribed_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 729;
                    type_description_1 = "ooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_subscript_name_1 = const_int_0;
                tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
                Py_DECREF( tmp_subscribed_name_1 );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 729;
                    type_description_1 = "ooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_compexpr_right_4 = const_int_pos_3;
                tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 729;
                    type_description_1 = "ooooooooooooooo";
                    goto try_except_handler_6;
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
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_make_exception_arg_2;
                    PyObject *tmp_left_name_1;
                    PyObject *tmp_right_name_1;
                    PyObject *tmp_tuple_element_3;
                    tmp_left_name_1 = const_str_digest_5e5d62a43a7128bdb26848934fc9ca76;
                    CHECK_OBJECT( var_err );
                    tmp_tuple_element_3 = var_err;
                    tmp_right_name_1 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_3 );
                    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                    Py_DECREF( tmp_right_name_1 );
                    if ( tmp_make_exception_arg_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 731;
                        type_description_1 = "ooooooooooooooo";
                        goto try_except_handler_6;
                    }
                    frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 731;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_2 };
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_UnicodeError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_2 );
                    assert( !(tmp_raise_type_2 == NULL) );
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 731;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooo";
                    goto try_except_handler_6;
                }
                branch_no_6:;
            }
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 734;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame) frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_17_read_array );
            return NULL;
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

            Py_XDECREF( var_err );
            var_err = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto try_except_handler_5;
            // End of try:
            goto branch_end_5;
            branch_no_5:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 726;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame) frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
            branch_end_5:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_17_read_array );
        return NULL;
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
        // End of try:
        try_end_3:;
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_5;
            int tmp_truth_name_2;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_isfileobj );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfileobj );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isfileobj" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 736;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_8;
            CHECK_OBJECT( par_fp );
            tmp_args_element_name_5 = par_fp;
            frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 736;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 736;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 736;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_7 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
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
                PyObject *tmp_assign_source_14;
                PyObject *tmp_called_name_6;
                PyObject *tmp_source_name_7;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 738;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_7 = tmp_mvar_value_9;
                tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_fromfile );
                if ( tmp_called_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 738;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_fp );
                tmp_tuple_element_4 = par_fp;
                tmp_args_name_2 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
                tmp_dict_key_2 = const_str_plain_dtype;
                CHECK_OBJECT( var_dtype );
                tmp_dict_value_2 = var_dtype;
                tmp_kw_name_2 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_3 = const_str_plain_count;
                CHECK_OBJECT( var_count );
                tmp_dict_value_3 = var_count;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 738;
                tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 738;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_array == NULL );
                var_array = tmp_assign_source_14;
            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_10;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_kw_name_3;
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 751;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_8 = tmp_mvar_value_10;
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ndarray );
                if ( tmp_called_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 751;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_count );
                tmp_tuple_element_5 = var_count;
                tmp_args_name_3 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
                tmp_dict_key_4 = const_str_plain_dtype;
                CHECK_OBJECT( var_dtype );
                tmp_dict_value_4 = var_dtype;
                tmp_kw_name_3 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
                assert( !(tmp_res != 0) );
                frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 751;
                tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 751;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_array == NULL );
                var_array = tmp_assign_source_15;
            }
            {
                nuitka_bool tmp_condition_result_8;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_source_name_9;
                CHECK_OBJECT( var_dtype );
                tmp_source_name_9 = var_dtype;
                tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_itemsize );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 753;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_5 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 753;
                    type_description_1 = "ooooooooooooooo";
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
                    PyObject *tmp_assign_source_16;
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_mvar_value_11;
                    PyObject *tmp_right_name_2;
                    PyObject *tmp_called_name_8;
                    PyObject *tmp_args_element_name_6;
                    PyObject *tmp_mvar_value_12;
                    PyObject *tmp_args_element_name_7;
                    PyObject *tmp_source_name_10;
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_BUFFER_SIZE );

                    if (unlikely( tmp_mvar_value_11 == NULL ))
                    {
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUFFER_SIZE );
                    }

                    if ( tmp_mvar_value_11 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUFFER_SIZE" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 755;
                        type_description_1 = "ooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_left_name_2 = tmp_mvar_value_11;
                    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_min );
                    assert( tmp_called_name_8 != NULL );
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_BUFFER_SIZE );

                    if (unlikely( tmp_mvar_value_12 == NULL ))
                    {
                        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUFFER_SIZE );
                    }

                    if ( tmp_mvar_value_12 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUFFER_SIZE" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 755;
                        type_description_1 = "ooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_6 = tmp_mvar_value_12;
                    CHECK_OBJECT( var_dtype );
                    tmp_source_name_10 = var_dtype;
                    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_itemsize );
                    if ( tmp_args_element_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 755;
                        type_description_1 = "ooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 755;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_7 );
                    if ( tmp_right_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 755;
                        type_description_1 = "ooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_16 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                    Py_DECREF( tmp_right_name_2 );
                    if ( tmp_assign_source_16 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 755;
                        type_description_1 = "ooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_max_read_count == NULL );
                    var_max_read_count = tmp_assign_source_16;
                }
                {
                    PyObject *tmp_assign_source_17;
                    PyObject *tmp_iter_arg_2;
                    PyObject *tmp_xrange_low_1;
                    PyObject *tmp_xrange_high_1;
                    PyObject *tmp_xrange_step_1;
                    tmp_xrange_low_1 = const_int_0;
                    CHECK_OBJECT( var_count );
                    tmp_xrange_high_1 = var_count;
                    CHECK_OBJECT( var_max_read_count );
                    tmp_xrange_step_1 = var_max_read_count;
                    tmp_iter_arg_2 = BUILTIN_XRANGE3( tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1 );
                    if ( tmp_iter_arg_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 757;
                        type_description_1 = "ooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
                    Py_DECREF( tmp_iter_arg_2 );
                    if ( tmp_assign_source_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 757;
                        type_description_1 = "ooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( tmp_for_loop_1__for_iterator == NULL );
                    tmp_for_loop_1__for_iterator = tmp_assign_source_17;
                }
                // Tried code:
                loop_start_1:;
                {
                    PyObject *tmp_next_source_1;
                    PyObject *tmp_assign_source_18;
                    CHECK_OBJECT( tmp_for_loop_1__for_iterator );
                    tmp_next_source_1 = tmp_for_loop_1__for_iterator;
                    tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_1 );
                    if ( tmp_assign_source_18 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_1;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "ooooooooooooooo";
                            exception_lineno = 757;
                            goto try_except_handler_7;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_1__iter_value;
                        tmp_for_loop_1__iter_value = tmp_assign_source_18;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_19;
                    CHECK_OBJECT( tmp_for_loop_1__iter_value );
                    tmp_assign_source_19 = tmp_for_loop_1__iter_value;
                    {
                        PyObject *old = var_i;
                        var_i = tmp_assign_source_19;
                        Py_INCREF( var_i );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_20;
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_args_element_name_8;
                    PyObject *tmp_args_element_name_9;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_min );
                    assert( tmp_called_name_9 != NULL );
                    CHECK_OBJECT( var_max_read_count );
                    tmp_args_element_name_8 = var_max_read_count;
                    CHECK_OBJECT( var_count );
                    tmp_left_name_3 = var_count;
                    CHECK_OBJECT( var_i );
                    tmp_right_name_3 = var_i;
                    tmp_args_element_name_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
                    if ( tmp_args_element_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 758;
                        type_description_1 = "ooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 758;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_9 );
                    if ( tmp_assign_source_20 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 758;
                        type_description_1 = "ooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    {
                        PyObject *old = var_read_count;
                        var_read_count = tmp_assign_source_20;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_21;
                    PyObject *tmp_int_arg_1;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_right_name_4;
                    PyObject *tmp_source_name_11;
                    CHECK_OBJECT( var_read_count );
                    tmp_left_name_4 = var_read_count;
                    CHECK_OBJECT( var_dtype );
                    tmp_source_name_11 = var_dtype;
                    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_itemsize );
                    if ( tmp_right_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 759;
                        type_description_1 = "ooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_int_arg_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
                    Py_DECREF( tmp_right_name_4 );
                    if ( tmp_int_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 759;
                        type_description_1 = "ooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_assign_source_21 = PyNumber_Int( tmp_int_arg_1 );
                    Py_DECREF( tmp_int_arg_1 );
                    if ( tmp_assign_source_21 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 759;
                        type_description_1 = "ooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    {
                        PyObject *old = var_read_size;
                        var_read_size = tmp_assign_source_21;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_22;
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_mvar_value_13;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_args_element_name_11;
                    PyObject *tmp_args_element_name_12;
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__read_bytes );

                    if (unlikely( tmp_mvar_value_13 == NULL ))
                    {
                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__read_bytes );
                    }

                    if ( tmp_mvar_value_13 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_read_bytes" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 760;
                        type_description_1 = "ooooooooooooooo";
                        goto try_except_handler_7;
                    }

                    tmp_called_name_10 = tmp_mvar_value_13;
                    CHECK_OBJECT( par_fp );
                    tmp_args_element_name_10 = par_fp;
                    CHECK_OBJECT( var_read_size );
                    tmp_args_element_name_11 = var_read_size;
                    tmp_args_element_name_12 = const_str_digest_6864b64745b6a5526a0a6406b0ea4f5b;
                    frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 760;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
                        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
                    }

                    if ( tmp_assign_source_22 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 760;
                        type_description_1 = "ooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    {
                        PyObject *old = var_data;
                        var_data = tmp_assign_source_22;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_ass_subvalue_1;
                    PyObject *tmp_called_name_11;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_mvar_value_14;
                    PyObject *tmp_args_name_4;
                    PyObject *tmp_tuple_element_6;
                    PyObject *tmp_kw_name_4;
                    PyObject *tmp_dict_key_5;
                    PyObject *tmp_dict_value_5;
                    PyObject *tmp_dict_key_6;
                    PyObject *tmp_dict_value_6;
                    PyObject *tmp_ass_subscribed_1;
                    PyObject *tmp_ass_subscript_1;
                    PyObject *tmp_start_name_1;
                    PyObject *tmp_stop_name_1;
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_right_name_5;
                    PyObject *tmp_step_name_1;
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

                    if (unlikely( tmp_mvar_value_14 == NULL ))
                    {
                        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
                    }

                    if ( tmp_mvar_value_14 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 761;
                        type_description_1 = "ooooooooooooooo";
                        goto try_except_handler_7;
                    }

                    tmp_source_name_12 = tmp_mvar_value_14;
                    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_frombuffer );
                    if ( tmp_called_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 761;
                        type_description_1 = "ooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    CHECK_OBJECT( var_data );
                    tmp_tuple_element_6 = var_data;
                    tmp_args_name_4 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_6 );
                    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
                    tmp_dict_key_5 = const_str_plain_dtype;
                    CHECK_OBJECT( var_dtype );
                    tmp_dict_value_5 = var_dtype;
                    tmp_kw_name_4 = _PyDict_NewPresized( 2 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_5 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_6 = const_str_plain_count;
                    CHECK_OBJECT( var_read_count );
                    tmp_dict_value_6 = var_read_count;
                    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_6, tmp_dict_value_6 );
                    assert( !(tmp_res != 0) );
                    frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 761;
                    tmp_ass_subvalue_1 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_4, tmp_kw_name_4 );
                    Py_DECREF( tmp_called_name_11 );
                    Py_DECREF( tmp_args_name_4 );
                    Py_DECREF( tmp_kw_name_4 );
                    if ( tmp_ass_subvalue_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 761;
                        type_description_1 = "ooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    CHECK_OBJECT( var_array );
                    tmp_ass_subscribed_1 = var_array;
                    CHECK_OBJECT( var_i );
                    tmp_start_name_1 = var_i;
                    CHECK_OBJECT( var_i );
                    tmp_left_name_5 = var_i;
                    CHECK_OBJECT( var_read_count );
                    tmp_right_name_5 = var_read_count;
                    tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
                    if ( tmp_stop_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_ass_subvalue_1 );

                        exception_lineno = 761;
                        type_description_1 = "ooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_step_name_1 = Py_None;
                    tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                    Py_DECREF( tmp_stop_name_1 );
                    assert( !(tmp_ass_subscript_1 == NULL) );
                    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                    Py_DECREF( tmp_ass_subscript_1 );
                    Py_DECREF( tmp_ass_subvalue_1 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 761;
                        type_description_1 = "ooooooooooooooo";
                        goto try_except_handler_7;
                    }
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 757;
                    type_description_1 = "ooooooooooooooo";
                    goto try_except_handler_7;
                }
                goto loop_start_1;
                loop_end_1:;
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

                Py_XDECREF( tmp_for_loop_1__iter_value );
                tmp_for_loop_1__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
                Py_DECREF( tmp_for_loop_1__for_iterator );
                tmp_for_loop_1__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_6;
                exception_value = exception_keeper_value_6;
                exception_tb = exception_keeper_tb_6;
                exception_lineno = exception_keeper_lineno_6;

                goto frame_exception_exit_1;
                // End of try:
                try_end_4:;
                Py_XDECREF( tmp_for_loop_1__iter_value );
                tmp_for_loop_1__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
                Py_DECREF( tmp_for_loop_1__for_iterator );
                tmp_for_loop_1__for_iterator = NULL;

                branch_no_8:;
            }
            branch_end_7:;
        }
        {
            nuitka_bool tmp_condition_result_9;
            int tmp_truth_name_3;
            CHECK_OBJECT( var_fortran_order );
            tmp_truth_name_3 = CHECK_IF_TRUE( var_fortran_order );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 764;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_9 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_assattr_target_1;
                CHECK_OBJECT( var_shape );
                tmp_subscribed_name_2 = var_shape;
                tmp_subscript_name_2 = const_slice_none_none_int_neg_1;
                tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                if ( tmp_assattr_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 765;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_array );
                tmp_assattr_target_1 = var_array;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_shape, tmp_assattr_name_1 );
                Py_DECREF( tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 765;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_23;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( var_array );
                tmp_called_instance_1 = var_array;
                frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame.f_lineno = 766;
                tmp_assign_source_23 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_transpose );
                if ( tmp_assign_source_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 766;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_array;
                    assert( old != NULL );
                    var_array = tmp_assign_source_23;
                    Py_DECREF( old );
                }

            }
            goto branch_end_9;
            branch_no_9:;
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT( var_shape );
                tmp_assattr_name_2 = var_shape;
                CHECK_OBJECT( var_array );
                tmp_assattr_target_2 = var_array;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_shape, tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 768;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_end_9:;
        }
        branch_end_2:;
    }
    if ( var_array == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "array" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 770;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_array;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f58bcb4b331ed0cbce4954d33ffdee1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f58bcb4b331ed0cbce4954d33ffdee1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f58bcb4b331ed0cbce4954d33ffdee1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5f58bcb4b331ed0cbce4954d33ffdee1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5f58bcb4b331ed0cbce4954d33ffdee1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5f58bcb4b331ed0cbce4954d33ffdee1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5f58bcb4b331ed0cbce4954d33ffdee1,
        type_description_1,
        par_fp,
        par_allow_pickle,
        par_pickle_kwargs,
        var_version,
        var_shape,
        var_fortran_order,
        var_dtype,
        var_count,
        var_array,
        var_err,
        var_max_read_count,
        var_i,
        var_read_count,
        var_read_size,
        var_data
    );


    // Release cached frame.
    if ( frame_5f58bcb4b331ed0cbce4954d33ffdee1 == cache_frame_5f58bcb4b331ed0cbce4954d33ffdee1 )
    {
        Py_DECREF( frame_5f58bcb4b331ed0cbce4954d33ffdee1 );
    }
    cache_frame_5f58bcb4b331ed0cbce4954d33ffdee1 = NULL;

    assertFrameObject( frame_5f58bcb4b331ed0cbce4954d33ffdee1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_17_read_array );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_allow_pickle );
    Py_DECREF( par_allow_pickle );
    par_allow_pickle = NULL;

    Py_XDECREF( par_pickle_kwargs );
    par_pickle_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_version );
    Py_DECREF( var_version );
    var_version = NULL;

    CHECK_OBJECT( (PyObject *)var_shape );
    Py_DECREF( var_shape );
    var_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_fortran_order );
    Py_DECREF( var_fortran_order );
    var_fortran_order = NULL;

    CHECK_OBJECT( (PyObject *)var_dtype );
    Py_DECREF( var_dtype );
    var_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_count );
    Py_DECREF( var_count );
    var_count = NULL;

    Py_XDECREF( var_array );
    var_array = NULL;

    Py_XDECREF( var_max_read_count );
    var_max_read_count = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_read_count );
    var_read_count = NULL;

    Py_XDECREF( var_read_size );
    var_read_size = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_allow_pickle );
    Py_DECREF( par_allow_pickle );
    par_allow_pickle = NULL;

    Py_XDECREF( par_pickle_kwargs );
    par_pickle_kwargs = NULL;

    Py_XDECREF( var_version );
    var_version = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_fortran_order );
    var_fortran_order = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_count );
    var_count = NULL;

    Py_XDECREF( var_array );
    var_array = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_max_read_count );
    var_max_read_count = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_read_count );
    var_read_count = NULL;

    Py_XDECREF( var_read_size );
    var_read_size = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_17_read_array );
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


static PyObject *impl_numpy$lib$format$$$function_18_open_memmap( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_shape = python_pars[ 3 ];
    PyObject *par_fortran_order = python_pars[ 4 ];
    PyObject *par_version = python_pars[ 5 ];
    PyObject *var_d = NULL;
    PyObject *var_fp = NULL;
    PyObject *var_offset = NULL;
    PyObject *var_order = NULL;
    PyObject *var_marray = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_79e8627fda5ee71d96141b4e629b684b;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_79e8627fda5ee71d96141b4e629b684b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_79e8627fda5ee71d96141b4e629b684b, codeobj_79e8627fda5ee71d96141b4e629b684b, module_numpy$lib$format, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_79e8627fda5ee71d96141b4e629b684b = cache_frame_79e8627fda5ee71d96141b4e629b684b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_79e8627fda5ee71d96141b4e629b684b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_79e8627fda5ee71d96141b4e629b684b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_isfileobj );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfileobj );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isfileobj" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 823;
            type_description_1 = "ooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_filename );
        tmp_args_element_name_1 = par_filename;
        frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 823;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 823;
            type_description_1 = "ooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 823;
            type_description_1 = "ooooooNooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_8ae7d8a0cf9169ef8e0b498aeee30b83;
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 824;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 824;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooNooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_plain_w;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_right_1 = par_mode;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 827;
            type_description_1 = "ooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__check_version );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_version );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_version" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 830;
                type_description_1 = "ooooooNooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_version );
            tmp_args_element_name_2 = par_version;
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 830;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 830;
                type_description_1 = "ooooooNooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 833;
                type_description_1 = "ooooooNooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_dtype );
            tmp_args_element_name_3 = par_dtype;
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 833;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 833;
                type_description_1 = "ooooooNooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_dtype;
                assert( old != NULL );
                par_dtype = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_source_name_1;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_dtype );
            tmp_source_name_1 = par_dtype;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hasobject );
            if ( tmp_attribute_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 834;
                type_description_1 = "ooooooNooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_1 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_1 );

                exception_lineno = 834;
                type_description_1 = "ooooooNooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_1 );
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
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_33880b60234c8e6ba08ca2237dd7657a;
                frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 836;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 836;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooNooooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_1 = const_str_plain_descr;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_dtype_to_descr );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype_to_descr );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dtype_to_descr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 838;
                type_description_1 = "ooooooNooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_4;
            CHECK_OBJECT( par_dtype );
            tmp_args_element_name_4 = par_dtype;
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 838;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 838;
                type_description_1 = "ooooooNooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_fortran_order;
            CHECK_OBJECT( par_fortran_order );
            tmp_dict_value_2 = par_fortran_order;
            tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_shape;
            CHECK_OBJECT( par_shape );
            tmp_dict_value_3 = par_shape;
            tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            assert( var_d == NULL );
            var_d = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_open_filename_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_open_mode_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_os_fspath );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os_fspath );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os_fspath" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 843;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_4 = tmp_mvar_value_5;
            CHECK_OBJECT( par_filename );
            tmp_args_element_name_5 = par_filename;
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 843;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_open_filename_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_open_filename_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 843;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_mode );
            tmp_left_name_1 = par_mode;
            tmp_right_name_1 = const_str_plain_b;
            tmp_open_mode_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_open_mode_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_open_filename_1 );

                exception_lineno = 843;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL );
            Py_DECREF( tmp_open_filename_1 );
            Py_DECREF( tmp_open_mode_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 843;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_2;
            }
            assert( tmp_with_1__source == NULL );
            tmp_with_1__source = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_with_1__source );
            tmp_source_name_2 = tmp_with_1__source;
            tmp_called_name_5 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 843;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_2;
            }
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 843;
            tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
            Py_DECREF( tmp_called_name_5 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 843;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_2;
            }
            assert( tmp_with_1__enter == NULL );
            tmp_with_1__enter = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_with_1__source );
            tmp_source_name_3 = tmp_with_1__source;
            tmp_assign_source_5 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 843;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_2;
            }
            assert( tmp_with_1__exit == NULL );
            tmp_with_1__exit = tmp_assign_source_5;
        }
        {
            nuitka_bool tmp_assign_source_6;
            tmp_assign_source_6 = NUITKA_BOOL_TRUE;
            tmp_with_1__indicator = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_with_1__enter );
            tmp_assign_source_7 = tmp_with_1__enter;
            assert( var_fp == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_fp = tmp_assign_source_7;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__write_array_header );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__write_array_header );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_write_array_header" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 844;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_6 = tmp_mvar_value_6;
            CHECK_OBJECT( var_fp );
            tmp_args_element_name_6 = var_fp;
            CHECK_OBJECT( var_d );
            tmp_args_element_name_7 = var_d;
            CHECK_OBJECT( par_version );
            tmp_args_element_name_8 = par_version;
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 844;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 844;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( var_fp );
            tmp_called_instance_2 = var_fp;
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 845;
            tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_tell );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 845;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_4;
            }
            assert( var_offset == NULL );
            var_offset = tmp_assign_source_8;
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

        // Preserve existing published exception.
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_1 );
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_1 );
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_1 );

        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_79e8627fda5ee71d96141b4e629b684b, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_79e8627fda5ee71d96141b4e629b684b, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_BaseException;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 843;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_5;
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
                nuitka_bool tmp_assign_source_9;
                tmp_assign_source_9 = NUITKA_BOOL_FALSE;
                tmp_with_1__indicator = tmp_assign_source_9;
            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_called_name_7;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_args_element_name_10;
                PyObject *tmp_args_element_name_11;
                CHECK_OBJECT( tmp_with_1__exit );
                tmp_called_name_7 = tmp_with_1__exit;
                tmp_args_element_name_9 = EXC_TYPE(PyThreadState_GET());
                tmp_args_element_name_10 = EXC_VALUE(PyThreadState_GET());
                tmp_args_element_name_11 = EXC_TRACEBACK(PyThreadState_GET());
                frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 843;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
                    tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
                }

                if ( tmp_operand_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 843;
                    type_description_1 = "ooooooNooooo";
                    goto try_except_handler_5;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                Py_DECREF( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 843;
                    type_description_1 = "ooooooNooooo";
                    goto try_except_handler_5;
                }
                tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
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
                    exception_lineno = 843;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_79e8627fda5ee71d96141b4e629b684b->m_frame) frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_5;
                branch_no_5:;
            }
            goto branch_end_4;
            branch_no_4:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 843;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_79e8627fda5ee71d96141b4e629b684b->m_frame) frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooNooooo";
            goto try_except_handler_5;
            branch_end_4:;
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

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_18_open_memmap );
        return NULL;
        // End of try:
        try_end_1:;
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

        {
            nuitka_bool tmp_condition_result_6;
            nuitka_bool tmp_compexpr_left_3;
            nuitka_bool tmp_compexpr_right_3;
            assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_3 = tmp_with_1__indicator;
            tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
            tmp_condition_result_6 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_8;
                PyObject *tmp_call_result_4;
                CHECK_OBJECT( tmp_with_1__exit );
                tmp_called_name_8 = tmp_with_1__exit;
                frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 843;
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    Py_DECREF( exception_keeper_type_3 );
                    Py_XDECREF( exception_keeper_value_3 );
                    Py_XDECREF( exception_keeper_tb_3 );

                    exception_lineno = 843;
                    type_description_1 = "ooooooNooooo";
                    goto try_except_handler_2;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_6:;
        }
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_2;
        // End of try:
        try_end_3:;
        {
            nuitka_bool tmp_condition_result_7;
            nuitka_bool tmp_compexpr_left_4;
            nuitka_bool tmp_compexpr_right_4;
            assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_4 = tmp_with_1__indicator;
            tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
            tmp_condition_result_7 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_9;
                PyObject *tmp_call_result_5;
                CHECK_OBJECT( tmp_with_1__exit );
                tmp_called_name_9 = tmp_with_1__exit;
                frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 843;
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

                if ( tmp_call_result_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 843;
                    type_description_1 = "ooooooNooooo";
                    goto try_except_handler_2;
                }
                Py_DECREF( tmp_call_result_5 );
            }
            branch_no_7:;
        }
        goto try_end_4;
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

        Py_XDECREF( tmp_with_1__source );
        tmp_with_1__source = NULL;

        Py_XDECREF( tmp_with_1__enter );
        tmp_with_1__enter = NULL;

        Py_XDECREF( tmp_with_1__exit );
        tmp_with_1__exit = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_with_1__source );
        Py_DECREF( tmp_with_1__source );
        tmp_with_1__source = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
        Py_DECREF( tmp_with_1__enter );
        tmp_with_1__enter = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
        Py_DECREF( tmp_with_1__exit );
        tmp_with_1__exit = NULL;

        goto branch_end_2;
        branch_no_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_open_filename_2;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_open_mode_2;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_os_fspath );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os_fspath );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os_fspath" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 848;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_6;
            }

            tmp_called_name_10 = tmp_mvar_value_7;
            CHECK_OBJECT( par_filename );
            tmp_args_element_name_12 = par_filename;
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 848;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_open_filename_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            if ( tmp_open_filename_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 848;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_6;
            }
            tmp_open_mode_2 = const_str_plain_rb;
            tmp_assign_source_10 = BUILTIN_OPEN( tmp_open_filename_2, tmp_open_mode_2, NULL, NULL, NULL, NULL, NULL, NULL );
            Py_DECREF( tmp_open_filename_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 848;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_6;
            }
            assert( tmp_with_2__source == NULL );
            tmp_with_2__source = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_with_2__source );
            tmp_source_name_4 = tmp_with_2__source;
            tmp_called_name_11 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___enter__ );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 848;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_6;
            }
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 848;
            tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS( tmp_called_name_11 );
            Py_DECREF( tmp_called_name_11 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 848;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_6;
            }
            assert( tmp_with_2__enter == NULL );
            tmp_with_2__enter = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( tmp_with_2__source );
            tmp_source_name_5 = tmp_with_2__source;
            tmp_assign_source_12 = LOOKUP_SPECIAL( tmp_source_name_5, const_str_plain___exit__ );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 848;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_6;
            }
            assert( tmp_with_2__exit == NULL );
            tmp_with_2__exit = tmp_assign_source_12;
        }
        {
            nuitka_bool tmp_assign_source_13;
            tmp_assign_source_13 = NUITKA_BOOL_TRUE;
            tmp_with_2__indicator = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_with_2__enter );
            tmp_assign_source_14 = tmp_with_2__enter;
            assert( var_fp == NULL );
            Py_INCREF( tmp_assign_source_14 );
            var_fp = tmp_assign_source_14;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_12;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_read_magic );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_read_magic );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "read_magic" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 849;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_8;
            }

            tmp_called_name_12 = tmp_mvar_value_8;
            CHECK_OBJECT( var_fp );
            tmp_args_element_name_13 = var_fp;
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 849;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
            }

            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 849;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = par_version;
                assert( old != NULL );
                par_version = tmp_assign_source_15;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_13;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_14;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__check_version );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_version );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_version" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 850;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_8;
            }

            tmp_called_name_13 = tmp_mvar_value_9;
            CHECK_OBJECT( par_version );
            tmp_args_element_name_14 = par_version;
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 850;
            {
                PyObject *call_args[] = { tmp_args_element_name_14 };
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
            }

            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 850;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_8;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_14;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__read_array_header );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__read_array_header );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_read_array_header" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 852;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_9;
            }

            tmp_called_name_14 = tmp_mvar_value_10;
            CHECK_OBJECT( var_fp );
            tmp_args_element_name_15 = var_fp;
            CHECK_OBJECT( par_version );
            tmp_args_element_name_16 = par_version;
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 852;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 852;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_9;
            }
            tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 852;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_16;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


                type_description_1 = "ooooooNooooo";
                exception_lineno = 852;
                goto try_except_handler_10;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_17;
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
            if ( tmp_assign_source_18 == NULL )
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


                type_description_1 = "ooooooNooooo";
                exception_lineno = 852;
                goto try_except_handler_10;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
            if ( tmp_assign_source_19 == NULL )
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


                type_description_1 = "ooooooNooooo";
                exception_lineno = 852;
                goto try_except_handler_10;
            }
            assert( tmp_tuple_unpack_1__element_3 == NULL );
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_19;
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

                        type_description_1 = "ooooooNooooo";
                        exception_lineno = 852;
                        goto try_except_handler_10;
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

                type_description_1 = "ooooooNooooo";
                exception_lineno = 852;
                goto try_except_handler_10;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_9;
        // End of try:
        try_end_5:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
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
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_8;
        // End of try:
        try_end_6:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_20 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = par_shape;
                assert( old != NULL );
                par_shape = tmp_assign_source_20;
                Py_INCREF( par_shape );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_21 = tmp_tuple_unpack_1__element_2;
            {
                PyObject *old = par_fortran_order;
                assert( old != NULL );
                par_fortran_order = tmp_assign_source_21;
                Py_INCREF( par_fortran_order );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
            tmp_assign_source_22 = tmp_tuple_unpack_1__element_3;
            {
                PyObject *old = par_dtype;
                assert( old != NULL );
                par_dtype = tmp_assign_source_22;
                Py_INCREF( par_dtype );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_source_name_6;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_3;
            CHECK_OBJECT( par_dtype );
            tmp_source_name_6 = par_dtype;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_hasobject );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 853;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_8;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE( tmp_attribute_value_2 );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_2 );

                exception_lineno = 853;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_8;
            }
            tmp_condition_result_8 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_2 );
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_33880b60234c8e6ba08ca2237dd7657a;
                frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 855;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 855;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_8;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( var_fp );
            tmp_called_instance_3 = var_fp;
            frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 856;
            tmp_assign_source_23 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_tell );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 856;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_8;
            }
            assert( var_offset == NULL );
            var_offset = tmp_assign_source_23;
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
            exception_keeper_tb_7 = MAKE_TRACEBACK( frame_79e8627fda5ee71d96141b4e629b684b, exception_keeper_lineno_7 );
        }
        else if ( exception_keeper_lineno_7 != 0 )
        {
            exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_79e8627fda5ee71d96141b4e629b684b, exception_keeper_lineno_7 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
        PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
        PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_5 = PyExc_BaseException;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 848;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_11;
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
                nuitka_bool tmp_assign_source_24;
                tmp_assign_source_24 = NUITKA_BOOL_FALSE;
                tmp_with_2__indicator = tmp_assign_source_24;
            }
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_called_name_15;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_args_element_name_18;
                PyObject *tmp_args_element_name_19;
                CHECK_OBJECT( tmp_with_2__exit );
                tmp_called_name_15 = tmp_with_2__exit;
                tmp_args_element_name_17 = EXC_TYPE(PyThreadState_GET());
                tmp_args_element_name_18 = EXC_VALUE(PyThreadState_GET());
                tmp_args_element_name_19 = EXC_TRACEBACK(PyThreadState_GET());
                frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 848;
                {
                    PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
                    tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_15, call_args );
                }

                if ( tmp_operand_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 848;
                    type_description_1 = "ooooooNooooo";
                    goto try_except_handler_11;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                Py_DECREF( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 848;
                    type_description_1 = "ooooooNooooo";
                    goto try_except_handler_11;
                }
                tmp_condition_result_10 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_10;
                }
                else
                {
                    goto branch_no_10;
                }
                branch_yes_10:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 848;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_79e8627fda5ee71d96141b4e629b684b->m_frame) frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooooNooooo";
                goto try_except_handler_11;
                branch_no_10:;
            }
            goto branch_end_9;
            branch_no_9:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 848;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_79e8627fda5ee71d96141b4e629b684b->m_frame) frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooNooooo";
            goto try_except_handler_11;
            branch_end_9:;
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_11:;
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
        NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_18_open_memmap );
        return NULL;
        // End of try:
        try_end_7:;
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

        {
            nuitka_bool tmp_condition_result_11;
            nuitka_bool tmp_compexpr_left_6;
            nuitka_bool tmp_compexpr_right_6;
            assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_6 = tmp_with_2__indicator;
            tmp_compexpr_right_6 = NUITKA_BOOL_TRUE;
            tmp_condition_result_11 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_16;
                PyObject *tmp_call_result_7;
                CHECK_OBJECT( tmp_with_2__exit );
                tmp_called_name_16 = tmp_with_2__exit;
                frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 848;
                tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

                if ( tmp_call_result_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    Py_DECREF( exception_keeper_type_9 );
                    Py_XDECREF( exception_keeper_value_9 );
                    Py_XDECREF( exception_keeper_tb_9 );

                    exception_lineno = 848;
                    type_description_1 = "ooooooNooooo";
                    goto try_except_handler_6;
                }
                Py_DECREF( tmp_call_result_7 );
            }
            branch_no_11:;
        }
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_6;
        // End of try:
        try_end_9:;
        {
            nuitka_bool tmp_condition_result_12;
            nuitka_bool tmp_compexpr_left_7;
            nuitka_bool tmp_compexpr_right_7;
            assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_7 = tmp_with_2__indicator;
            tmp_compexpr_right_7 = NUITKA_BOOL_TRUE;
            tmp_condition_result_12 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_17;
                PyObject *tmp_call_result_8;
                CHECK_OBJECT( tmp_with_2__exit );
                tmp_called_name_17 = tmp_with_2__exit;
                frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 848;
                tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_17, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

                if ( tmp_call_result_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 848;
                    type_description_1 = "ooooooNooooo";
                    goto try_except_handler_6;
                }
                Py_DECREF( tmp_call_result_8 );
            }
            branch_no_12:;
        }
        goto try_end_10;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_with_2__source );
        tmp_with_2__source = NULL;

        Py_XDECREF( tmp_with_2__enter );
        tmp_with_2__enter = NULL;

        Py_XDECREF( tmp_with_2__exit );
        tmp_with_2__exit = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_1;
        // End of try:
        try_end_10:;
        CHECK_OBJECT( (PyObject *)tmp_with_2__source );
        Py_DECREF( tmp_with_2__source );
        tmp_with_2__source = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_2__enter );
        Py_DECREF( tmp_with_2__enter );
        tmp_with_2__enter = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_2__exit );
        Py_DECREF( tmp_with_2__exit );
        tmp_with_2__exit = NULL;

        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        if ( par_fortran_order == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fortran_order" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 858;
            type_description_1 = "ooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE( par_fortran_order );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 858;
            type_description_1 = "ooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = const_str_plain_F;
            assert( var_order == NULL );
            Py_INCREF( tmp_assign_source_25 );
            var_order = tmp_assign_source_25;
        }
        goto branch_end_13;
        branch_no_13:;
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = const_str_plain_C;
            assert( var_order == NULL );
            Py_INCREF( tmp_assign_source_26 );
            var_order = tmp_assign_source_26;
        }
        branch_end_13:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_8 = par_mode;
        tmp_compexpr_right_8 = const_str_digest_0829d31c23484bf44f4928c84123543c;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 865;
            type_description_1 = "ooooooNooooo";
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
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = const_str_digest_dd7618bbb3c1cb615487560bff75714c;
            {
                PyObject *old = par_mode;
                assert( old != NULL );
                par_mode = tmp_assign_source_27;
                Py_INCREF( par_mode );
                Py_DECREF( old );
            }

        }
        branch_no_14:;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_18;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
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
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 868;
            type_description_1 = "ooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_11;
        tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_memmap );
        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 868;
            type_description_1 = "ooooooNooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_filename );
        tmp_tuple_element_1 = par_filename;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_4 = const_str_plain_dtype;
        if ( par_dtype == NULL )
        {
            Py_DECREF( tmp_called_name_18 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 868;
            type_description_1 = "ooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_4 = par_dtype;
        tmp_kw_name_1 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_shape;
        if ( par_shape == NULL )
        {
            Py_DECREF( tmp_called_name_18 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "shape" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 868;
            type_description_1 = "ooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_5 = par_shape;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_order;
        CHECK_OBJECT( var_order );
        tmp_dict_value_6 = var_order;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_mode;
        CHECK_OBJECT( par_mode );
        tmp_dict_value_7 = par_mode;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_offset;
        if ( var_offset == NULL )
        {
            Py_DECREF( tmp_called_name_18 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 869;
            type_description_1 = "ooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_8 = var_offset;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        frame_79e8627fda5ee71d96141b4e629b684b->m_frame.f_lineno = 868;
        tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 868;
            type_description_1 = "ooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_marray == NULL );
        var_marray = tmp_assign_source_28;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79e8627fda5ee71d96141b4e629b684b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79e8627fda5ee71d96141b4e629b684b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_79e8627fda5ee71d96141b4e629b684b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_79e8627fda5ee71d96141b4e629b684b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_79e8627fda5ee71d96141b4e629b684b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_79e8627fda5ee71d96141b4e629b684b,
        type_description_1,
        par_filename,
        par_mode,
        par_dtype,
        par_shape,
        par_fortran_order,
        par_version,
        NULL,
        var_d,
        var_fp,
        var_offset,
        var_order,
        var_marray
    );


    // Release cached frame.
    if ( frame_79e8627fda5ee71d96141b4e629b684b == cache_frame_79e8627fda5ee71d96141b4e629b684b )
    {
        Py_DECREF( frame_79e8627fda5ee71d96141b4e629b684b );
    }
    cache_frame_79e8627fda5ee71d96141b4e629b684b = NULL;

    assertFrameObject( frame_79e8627fda5ee71d96141b4e629b684b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_marray );
    tmp_return_value = var_marray;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_18_open_memmap );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( par_fortran_order );
    par_fortran_order = NULL;

    Py_XDECREF( par_version );
    par_version = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)var_fp );
    Py_DECREF( var_fp );
    var_fp = NULL;

    Py_XDECREF( var_offset );
    var_offset = NULL;

    CHECK_OBJECT( (PyObject *)var_order );
    Py_DECREF( var_order );
    var_order = NULL;

    CHECK_OBJECT( (PyObject *)var_marray );
    Py_DECREF( var_marray );
    var_marray = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( par_fortran_order );
    par_fortran_order = NULL;

    Py_XDECREF( par_version );
    par_version = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_fp );
    var_fp = NULL;

    Py_XDECREF( var_offset );
    var_offset = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_18_open_memmap );
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


static PyObject *impl_numpy$lib$format$$$function_19__read_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *par_error_template = python_pars[ 2 ];
    PyObject *var_data = NULL;
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_568c9a36e229eb4083ce5362a8ebc44b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_568c9a36e229eb4083ce5362a8ebc44b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_bytes_empty;
        assert( var_data == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_data = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_568c9a36e229eb4083ce5362a8ebc44b, codeobj_568c9a36e229eb4083ce5362a8ebc44b, module_numpy$lib$format, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_568c9a36e229eb4083ce5362a8ebc44b = cache_frame_568c9a36e229eb4083ce5362a8ebc44b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_568c9a36e229eb4083ce5362a8ebc44b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_568c9a36e229eb4083ce5362a8ebc44b ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_fp );
        tmp_source_name_1 = par_fp;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_read );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 889;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_size );
        tmp_left_name_1 = par_size;
        if ( var_data == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 889;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
        }

        tmp_len_arg_1 = var_data;
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 889;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 889;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
        }
        frame_568c9a36e229eb4083ce5362a8ebc44b->m_frame.f_lineno = 889;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 889;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        if ( var_data == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 890;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
        }

        tmp_left_name_2 = var_data;
        CHECK_OBJECT( var_r );
        tmp_right_name_2 = var_r;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 890;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = tmp_left_name_2;
        var_data = tmp_assign_source_3;

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT( var_r );
        tmp_len_arg_2 = var_r;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 891;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
        CHECK_OBJECT( var_data );
        tmp_len_arg_3 = var_data;
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 891;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_size );
        tmp_compexpr_right_2 = par_size;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 891;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
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
        goto loop_end_1;
        branch_no_1:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_568c9a36e229eb4083ce5362a8ebc44b, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_568c9a36e229eb4083ce5362a8ebc44b, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_io );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 893;
            type_description_1 = "oooooN";
            goto try_except_handler_3;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_BlockingIOError );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 893;
            type_description_1 = "oooooN";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 893;
            type_description_1 = "oooooN";
            goto try_except_handler_3;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 893;
            type_description_1 = "oooooN";
            goto try_except_handler_3;
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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 888;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_568c9a36e229eb4083ce5362a8ebc44b->m_frame) frame_568c9a36e229eb4083ce5362a8ebc44b->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooN";
        goto try_except_handler_3;
        branch_no_2:;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_19__read_bytes );
    return NULL;
    // End of try:
    try_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 884;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT( var_data );
        tmp_len_arg_4 = var_data;
        tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_4 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 895;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_size );
        tmp_compexpr_right_4 = par_size;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 895;
            type_description_1 = "oooooN";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_len_arg_5;
            tmp_left_name_3 = const_str_digest_9cc028360d7dd08f66866bfc6c3a4d38;
            CHECK_OBJECT( par_error_template );
            tmp_tuple_element_1 = par_error_template;
            tmp_right_name_3 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_size );
            tmp_tuple_element_1 = par_size;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_data );
            tmp_len_arg_5 = var_data;
            tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_5 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_3 );

                exception_lineno = 897;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_3, 2, tmp_tuple_element_1 );
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 897;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }
            frame_568c9a36e229eb4083ce5362a8ebc44b->m_frame.f_lineno = 897;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 897;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        goto branch_end_3;
        branch_no_3:;
        CHECK_OBJECT( var_data );
        tmp_return_value = var_data;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_568c9a36e229eb4083ce5362a8ebc44b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_568c9a36e229eb4083ce5362a8ebc44b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_568c9a36e229eb4083ce5362a8ebc44b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_568c9a36e229eb4083ce5362a8ebc44b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_568c9a36e229eb4083ce5362a8ebc44b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_568c9a36e229eb4083ce5362a8ebc44b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_568c9a36e229eb4083ce5362a8ebc44b,
        type_description_1,
        par_fp,
        par_size,
        par_error_template,
        var_data,
        var_r,
        NULL
    );


    // Release cached frame.
    if ( frame_568c9a36e229eb4083ce5362a8ebc44b == cache_frame_568c9a36e229eb4083ce5362a8ebc44b )
    {
        Py_DECREF( frame_568c9a36e229eb4083ce5362a8ebc44b );
    }
    cache_frame_568c9a36e229eb4083ce5362a8ebc44b = NULL;

    assertFrameObject( frame_568c9a36e229eb4083ce5362a8ebc44b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_19__read_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    CHECK_OBJECT( (PyObject *)par_error_template );
    Py_DECREF( par_error_template );
    par_error_template = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    CHECK_OBJECT( (PyObject *)par_error_template );
    Py_DECREF( par_error_template );
    par_error_template = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$format$$$function_19__read_bytes );
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



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_10_write_array_header_1_0(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_10_write_array_header_1_0,
        const_str_plain_write_array_header_1_0,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2095f0974ef8f77bf9178293da521648,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_a1c11231138d20fe4ec71b50fdbd2920,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_11_write_array_header_2_0(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_11_write_array_header_2_0,
        const_str_plain_write_array_header_2_0,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_94630b08c55a7a744cd57589f887fa9a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_992cad56b3352fdda84d6a4dc3105e75,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_12_read_array_header_1_0(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_12_read_array_header_1_0,
        const_str_plain_read_array_header_1_0,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_93ae91df7d522c4540982b61826f8991,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_3875511dfbec9a2e2efe1f60b79b4abf,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_13_read_array_header_2_0(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_13_read_array_header_2_0,
        const_str_plain_read_array_header_2_0,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_916b10d2a2f85acf4fdcfc2b53572b82,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_3ece57ba7bfbd5afefbc2eeba5686594,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_14__filter_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_14__filter_header,
        const_str_plain__filter_header,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0888fa404133ccf4c31706c1053af3ec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_a4dbfd5d5d47649331d0b8b9878c9874,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_15__read_array_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_15__read_array_header,
        const_str_plain__read_array_header,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1cfefbef620be42cc9ee364d28d5464e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_ef68d6418a9fa31164d5e193f7bd2296,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_16_write_array( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_16_write_array,
        const_str_plain_write_array,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0754cb0f0cc9754eb46e5bdc99fa5b2c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_07d512c14fb25daa4704cc3aeb391010,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_17_read_array( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_17_read_array,
        const_str_plain_read_array,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5f58bcb4b331ed0cbce4954d33ffdee1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_22d90ea48a417a006b0ec843241ebdce,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_18_open_memmap( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_18_open_memmap,
        const_str_plain_open_memmap,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_79e8627fda5ee71d96141b4e629b684b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_2a27dcb72bed277c8af87af5e6b1459f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_19__read_bytes( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_19__read_bytes,
        const_str_plain__read_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_568c9a36e229eb4083ce5362a8ebc44b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_33a69fce9040b6ad0bb203e6e71e38d7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_1__check_version(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_1__check_version,
        const_str_plain__check_version,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2264cb1adbae0105a841417d432141a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_2_magic(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_2_magic,
        const_str_plain_magic,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a22b5977520093fe6c03917c6adcf695,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_778fcc73eb46f71eb6f05ed60f68cfa7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_3_read_magic(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_3_read_magic,
        const_str_plain_read_magic,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_49f7e5e84ba12bc2a1b6017690c0bc4e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_642b9c829350417db60ada050ae0975e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_4_dtype_to_descr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_4_dtype_to_descr,
        const_str_plain_dtype_to_descr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_747850964539e605df795cb375159def,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_b742973a3df21cfc8bc9672d94e5be66,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_5_descr_to_dtype(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_5_descr_to_dtype,
        const_str_plain_descr_to_dtype,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_080a9c72b344c13d3664071c4e521344,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_ab19665cc0868cbe05afa520fa3b6b3a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_6_header_data_from_array_1_0(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_6_header_data_from_array_1_0,
        const_str_plain_header_data_from_array_1_0,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b955a18369af0e10666306703f56323a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_9d110c56239cf48f499dd50dc21ca329,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_7__wrap_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_7__wrap_header,
        const_str_plain__wrap_header,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1fbbc25489de174da732734f5d35e9ba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_52563d3668678eaba8e3862ee2651a15,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_8__wrap_header_guess_version(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_8__wrap_header_guess_version,
        const_str_plain__wrap_header_guess_version,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e9ef41dfd4aedd5cea77afe76c6b9e8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_9641264aa631a00ed322979405b6b049,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$format$$$function_9__write_array_header( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$format$$$function_9__write_array_header,
        const_str_plain__write_array_header,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_373b385b729b8dfb3dfec0c20488e182,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$format,
        const_str_digest_d8f11a6cd2198658e6c451e45aec16f9,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$format =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.format",
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

MOD_INIT_DECL( numpy$lib$format )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$format );
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
    puts("numpy.lib.format: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.format: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.format: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$format" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$format = Py_InitModule4(
        "numpy.lib.format",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$lib$format = PyModule_Create( &mdef_numpy$lib$format );
#endif

    moduledict_numpy$lib$format = MODULE_DICT( module_numpy$lib$format );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$lib$format,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$lib$format,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$format,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$format,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$lib$format );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_c69b8090da9c96e8e8656a86669770e1, module_numpy$lib$format );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_d49ec018b38d83b3915501703ca15779;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_064c1ecbd382be4f09bc51f6e7f86bf4;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_d49ec018b38d83b3915501703ca15779 = MAKE_MODULE_FRAME( codeobj_d49ec018b38d83b3915501703ca15779, module_numpy$lib$format );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d49ec018b38d83b3915501703ca15779 );
    assert( Py_REFCNT( frame_d49ec018b38d83b3915501703ca15779 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_d49ec018b38d83b3915501703ca15779->m_frame.f_lineno = 164;
        tmp_assign_source_4 = PyImport_ImportModule("__future__");
        assert( !(tmp_assign_source_4 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        Py_INCREF( tmp_assign_source_4 );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$format;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_d49ec018b38d83b3915501703ca15779->m_frame.f_lineno = 166;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_numpy, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$format;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_d49ec018b38d83b3915501703ca15779->m_frame.f_lineno = 167;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_9 == NULL) );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_io;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$format;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_d49ec018b38d83b3915501703ca15779->m_frame.f_lineno = 168;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_io, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_warnings;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$lib$format;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_d49ec018b38d83b3915501703ca15779->m_frame.f_lineno = 169;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_8bfd764efd0705b9fcd14fcb5c6ee56b;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$lib$format;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_safe_eval_tuple;
        tmp_level_name_5 = const_int_0;
        frame_d49ec018b38d83b3915501703ca15779->m_frame.f_lineno = 170;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_safe_eval );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_safe_eval, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$lib$format;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_f7d462b1cf10989f5936b2833758a415_tuple;
        tmp_level_name_6 = const_int_0;
        frame_d49ec018b38d83b3915501703ca15779->m_frame.f_lineno = 171;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_isfileobj );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_isfileobj, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_long );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_long, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_os_fspath );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_os_fspath, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_pickle );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_pickle, tmp_assign_source_17 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d49ec018b38d83b3915501703ca15779 );
#endif
    popFrameStack();

    assertFrameObject( frame_d49ec018b38d83b3915501703ca15779 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d49ec018b38d83b3915501703ca15779 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d49ec018b38d83b3915501703ca15779, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d49ec018b38d83b3915501703ca15779->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d49ec018b38d83b3915501703ca15779, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_bytes_digest_ca6401f3d7caea4d74a349f79a7127a1;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_MAGIC_PREFIX, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_MAGIC_PREFIX );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAGIC_PREFIX );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_len_arg_1 = tmp_mvar_value_3;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        assert( !(tmp_left_name_1 == NULL) );
        tmp_right_name_1 = const_int_pos_2;
        tmp_assign_source_19 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        assert( !(tmp_assign_source_19 == NULL) );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_MAGIC_LEN, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = const_int_pos_64;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_ARRAY_ALIGN, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = const_int_pos_262144;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_BUFFER_SIZE, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_Copy( const_dict_01c775e79d89ca42daab2fcee3bd54cb );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__header_size_info, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_numpy$lib$format$$$function_1__check_version(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__check_version, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_FUNCTION_numpy$lib$format$$$function_2_magic(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_magic, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_numpy$lib$format$$$function_3_read_magic(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_read_magic, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_numpy$lib$format$$$function_4_dtype_to_descr(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_dtype_to_descr, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_numpy$lib$format$$$function_5_descr_to_dtype(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_descr_to_dtype, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$format$$$function_6_header_data_from_array_1_0(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_header_data_from_array_1_0, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_numpy$lib$format$$$function_7__wrap_header(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__wrap_header, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_FUNCTION_numpy$lib$format$$$function_8__wrap_header_guess_version(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__wrap_header_guess_version, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_31 = MAKE_FUNCTION_numpy$lib$format$$$function_9__write_array_header( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__write_array_header, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_numpy$lib$format$$$function_10_write_array_header_1_0(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_write_array_header_1_0, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_numpy$lib$format$$$function_11_write_array_header_2_0(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_write_array_header_2_0, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_numpy$lib$format$$$function_12_read_array_header_1_0(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_read_array_header_1_0, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_numpy$lib$format$$$function_13_read_array_header_2_0(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_read_array_header_2_0, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_numpy$lib$format$$$function_14__filter_header(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__filter_header, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_numpy$lib$format$$$function_15__read_array_header(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__read_array_header, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_true_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_38 = MAKE_FUNCTION_numpy$lib$format$$$function_16_write_array( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_write_array, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_false_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_39 = MAKE_FUNCTION_numpy$lib$format$$$function_17_read_array( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_read_array, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_912e960c1c77a1b39e4e58ec8494f3cc_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_40 = MAKE_FUNCTION_numpy$lib$format$$$function_18_open_memmap( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain_open_memmap, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_str_digest_d13afeb983fe2d0d9e5187b6a1844b1d_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_41 = MAKE_FUNCTION_numpy$lib$format$$$function_19__read_bytes( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain__read_bytes, tmp_assign_source_41 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$lib$format, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$lib$format );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
